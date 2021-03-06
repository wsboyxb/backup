#include "PromptPayPanel.h"

#include "defines.h"

#include "CfgMaster/VIPLvCfgMaster.h"
#include "CfgMaster/VIPCfgMaster.h"
#include "CfgMaster/PackageCfgMaster.h"
#include "CfgMaster/GlobalCfgMaster.h"

#include "basic/ImageNumber.h"
#include "basic/TextHelper.h"

#include "game/UserObj.h"
#include "game/IconFrameCell.h"
#include "game/shop/ShopControl.h"
#include "game/shop/RmbShopPanel.h"
#include "game/vip/VIPControl.h"

#include "TipControl.h"

#define MAX_CELL_CNT 4
#define CELL_PREFIX_NAME "cell_"

PromptPayPanel::PromptPayPanel()
:m_pCloseBtn(NULL)
,m_pTitleImg(NULL)
,m_pVIPIntroLayout(NULL)
,m_pCurVipTxt(NULL)
,m_pCurVIPImgTxt(NULL)
,m_pChargeTxt(NULL)
,m_pGoldValTxt(NULL)
,m_pNextVIPTxt(NULL)
,m_pNextVIPImgTxt(NULL)
,m_pSeePrivilegeBtn(NULL)
,m_pPromptTxt(NULL)
,m_pVIPPackageTitleTxt(NULL)
,m_pAwardsLayout(NULL)
,m_pChargeBtn(NULL)
,m_pVIPTopLayout(NULL)
,m_pCallTxt(NULL)
,m_pTopVIPTxt(NULL)
,m_pUserTxt(NULL)
,m_pTopVIPPromptTxt(NULL)
,m_uPromptType(PROMPT_TYPE_GOLD)
,m_uDiffGoldVal(0)
,m_uVIPModuleID(0)
{
}

PromptPayPanel::~PromptPayPanel()
{
}

PromptPayPanel* PromptPayPanel::create() {
	PromptPayPanel *pRet = new PromptPayPanel();

	if(pRet != NULL && pRet->init()) {
		pRet->autorelease();
	} else {
		CC_SAFE_DELETE(pRet);
	}

	return pRet;
}

bool PromptPayPanel::init() {
	bool bRet = false;

	do {
		CC_BREAK_IF(!BasePanel::init());

		bRet = true;
	} while(0);

	return bRet;
}

void PromptPayPanel::open() {
	BasePanel::open();

	showLoading();

	if(!m_bUIInited) {
		initUI();
	}

	updateUI();

	closeLoading();
}

void PromptPayPanel::openWithDiffGold(unsigned int uDiffGoldVal) {
	m_uPromptType = PROMPT_TYPE_GOLD;
	m_uDiffGoldVal = uDiffGoldVal;

	open();
}

void PromptPayPanel::openWithVIPModule(unsigned int uVIPModuleID) {
	m_uPromptType = PROMPT_TYPE_VIP_PERM;
	m_uVIPModuleID = uVIPModuleID;

	open();
}

void PromptPayPanel::updateUI() {
	const UserInfo *pUserInfo = P_USER_OBJ->getUserInfo();
	unsigned int vipLv = pUserInfo->vipLv;

	VIPLvCfg *pCurVIPLvCfg = VIP_LV_CFG_MASTER->getVIPLvCfg(vipLv);

	if(m_uPromptType == PROMPT_TYPE_GOLD) {
		m_pTitleImg->loadTexture("lottery/text_gold_not_enough.png", UI_TEX_TYPE_PLIST);
	} else if(m_uPromptType == PROMPT_TYPE_VIP_PERM) {
		if(vipLv == 0) {
			m_pTitleImg->loadTexture("lottery/text_not_vip.png", UI_TEX_TYPE_PLIST);
		} else {
			m_pTitleImg->loadTexture("lottery/text_vip_privilege_used.png", UI_TEX_TYPE_PLIST);
		}
	}
	
	const VIPLvCfgSet &stVIPLvCfgSet = VIP_LV_CFG_MASTER->GetCfg();
	unsigned int uMaxVIPLv = stVIPLvCfgSet.viplvcfg(stVIPLvCfgSet.viplvcfg_size() - 1).viplv();

	unsigned int uTotalGold = P_USER_OBJ->getUserInfo()->totalGoldByMoney;
	bool isTopVIP = vipLv == uMaxVIPLv;

	if(!isTopVIP) {
		m_pVIPIntroLayout->setEnabled(true);
		m_pVIPTopLayout->setEnabled(false);

		m_pCurVIPImgTxt->setNum(intToString(vipLv), 0.0f, "vip");
		m_pCurVIPImgTxt->setPosition(ccp(m_pCurVipTxt->getPositionX() + m_pCurVipTxt->getSize().width + 8, m_pCurVipTxt->getPositionY()));

		VIPLvCfg *pNextVIPLvCfg = VIP_LV_CFG_MASTER->getVIPLvCfg(vipLv + 1);
		unsigned int uTotalNeedGold = pNextVIPLvCfg->needgold();
		unsigned int uNowNeedGold = pNextVIPLvCfg->needgold() - P_USER_OBJ->getUserInfo()->totalGoldByMoney;

		char goldtext[100];
		snprintf(goldtext, 100, TextStr(TEXT_NEED_GOLD), uNowNeedGold);
		m_pGoldValTxt->setText(goldtext);

		m_pNextVIPTxt->setPosition(m_pGoldValTxt->getPosition() + ccp(m_pGoldValTxt->getSize().width + 8, 0));

		m_pNextVIPImgTxt->setNum(intToString(vipLv + 1), 0.0f, "vip");
		m_pNextVIPImgTxt->setPosition(m_pNextVIPTxt->getPosition() + ccp(m_pNextVIPTxt->getSize().width + 8, 0));

		char pkgtext[100];

		if(m_uPromptType == PROMPT_TYPE_GOLD) {
			snprintf(pkgtext, 100, TextStr(TEXT_DIFF_GOLD_PROMPT), m_uDiffGoldVal);
		} else if(m_uPromptType == PROMPT_TYPE_VIP_PERM) {
			const VIPCfg *pVIPCfg = VIP_CFG_MASTER->getVIPCfg(m_uVIPModuleID);
			
			if(pVIPCfg != NULL) {
				snprintf(pkgtext, 100, pVIPCfg->vipextraperm().c_str(), vipLv + 1, pVIPCfg->vipparam(vipLv + 1));
				m_pPromptTxt->setText(pkgtext);
			}
		}

		char viptext[100];
		snprintf(viptext, 100, TextStr(TEXT_VIP_GIFT), vipLv + 1);
		m_pVIPPackageTitleTxt->setText(vipLv == 0 ? TextStr(TEXT_FIRST_CHARGE_PKG) : viptext);

		m_pAwardsLayout->removeAllChildren();

		unsigned int uPkgID = P_USER_OBJ->getUserInfo()->totalGoldByMoney == 0 && vipLv == 0 ? GLOBAL_CFG_MASTER->GetCfg().firstchargegiftpkg() : pNextVIPLvCfg->packageid();
		const PackageCfg *pPackageCfg = PACKAGE_CFG_MASTER->GetPackageCfgByID(uPkgID);
		int nShowCellCnt = pPackageCfg->elmtlst_size() > MAX_CELL_CNT ? MAX_CELL_CNT : pPackageCfg->elmtlst_size();
		LinearLayoutParameter *pLayoutParameter = LinearLayoutParameter::create();
		pLayoutParameter->setGravity(LINEAR_GRAVITY_CENTER_VERTICAL);
		pLayoutParameter->setMargin(Margin(0, 0, 20, 0));

		if(pPackageCfg != NULL) {
			for(int i = 0; i < nShowCellCnt; i++) {
				IconFrameCell *pCell = IconFrameCell::create();
				pCell->setTouchEnabled(true);
				string cellName = string(CELL_PREFIX_NAME) + intToString(i);
				pCell->setName(cellName.c_str());
				pCell->setLayoutParameter(pLayoutParameter);

				if(i < pPackageCfg->elmtlst_size()) {
					const PackageElmt &stElmt = pPackageCfg->elmtlst(i);
					pCell->setInfo(stElmt.elementtype(), stElmt.elementid(), stElmt.elementcntmin());
					m_pAwardsLayout->addChild(pCell);
					pCell->addTouchEventListener(this, toucheventselector(PromptPayPanel::touchEventHandler));
				}
			}
		}

	} else {
		m_pVIPIntroLayout->setEnabled(false);
		m_pVIPTopLayout->setEnabled(true);
		m_pTopVIPTxt->setNum(intToString(uMaxVIPLv), 0.0f, "vip");
		m_pUserTxt->setPosition(m_pTopVIPTxt->getPosition() + ccp(m_pTopVIPTxt->getContentSize().width + 8, 0));

		if(m_uPromptType == PROMPT_TYPE_GOLD) {
			char prompt[100];
			snprintf(prompt, 100, TextStr(TEXT_DIFF_GOLD_PROMPT), m_uDiffGoldVal);
			m_pTopVIPPromptTxt->setText(prompt);
		} else if(m_uPromptType == PROMPT_TYPE_VIP_PERM) {
			const VIPCfg *pVIPCfg = VIP_CFG_MASTER->getVIPCfg(m_uVIPModuleID);
			m_pTopVIPPromptTxt->setText(pVIPCfg != NULL ? pVIPCfg->toplvprompt() : "");
		}
	}
}

void PromptPayPanel::initUI() {
	initLayoutFromJsonFile("ui_v2/PromptPayPanelUI.ExportJson");
	addChild(m_pRootLayout);

	m_pCloseBtn = dynamic_cast<UIButton*>(m_pRootLayout->getChildByName("close_btn"));
	m_pCloseBtn->addTouchEventListener(this, toucheventselector(PromptPayPanel::touchEventHandler));

	m_pTitleImg = dynamic_cast<UIImageView*>(m_pRootLayout->getChildByName("title_img"));

	m_pVIPIntroLayout = dynamic_cast<UILayout*>(m_pRootLayout->getChildByName("vip_intro_layout"));

	m_pCurVipTxt = dynamic_cast<UILabel*>(m_pVIPIntroLayout->getChildByName("cur_vip_txt"));

	m_pCurVIPImgTxt = ImageNumber::create(25);
	m_pCurVIPImgTxt->setAnchorPoint(ccp(0.0f, 0.0f));
	m_pCurVIPImgTxt->setPosition(ccp(160, 300));
	m_pVIPIntroLayout->addNode(m_pCurVIPImgTxt);
	m_pCurVIPImgTxt->setNum("0", 0.0f, "vip");

	m_pChargeTxt = dynamic_cast<UILabel*>(m_pVIPIntroLayout->getChildByName("charge_txt"));

	m_pGoldValTxt = dynamic_cast<UILabel*>(m_pVIPIntroLayout->getChildByName("gold_val_txt"));

	m_pNextVIPTxt = dynamic_cast<UILabel*>(m_pVIPIntroLayout->getChildByName("next_vip_txt"));

	m_pNextVIPImgTxt = ImageNumber::create(25);
	m_pNextVIPImgTxt->setAnchorPoint(ccp(0.0f, 0.0f));
	m_pNextVIPImgTxt->setPosition(ccp(300, 300));
	m_pVIPIntroLayout->addNode(m_pNextVIPImgTxt);
	m_pNextVIPImgTxt->setNum("0", 0.0f, "vip");

	m_pSeePrivilegeBtn = dynamic_cast<UIButton*>(m_pVIPIntroLayout->getChildByName("see_privilege_btn"));
	m_pSeePrivilegeBtn->addTouchEventListener(this, toucheventselector(PromptPayPanel::touchEventHandler));

	m_pPromptTxt = dynamic_cast<UILabel*>(m_pVIPIntroLayout->getChildByName("prompt_txt"));

	m_pVIPPackageTitleTxt = dynamic_cast<UILabel*>(m_pVIPIntroLayout->getChildByName("vip_package_title_txt"));

	m_pAwardsLayout = dynamic_cast<UILayout*>(m_pVIPIntroLayout->getChildByName("awards_layout"));

	m_pChargeBtn = dynamic_cast<UIButton*>(m_pRootLayout->getChildByName("charge_btn"));
	m_pChargeBtn->addTouchEventListener(this, toucheventselector(PromptPayPanel::touchEventHandler));

	m_pVIPTopLayout = dynamic_cast<UILayout*>(m_pRootLayout->getChildByName("vip_top_layout"));
	m_pVIPTopLayout->setVisible(true);

	m_pCallTxt = dynamic_cast<UILabel*>(m_pVIPTopLayout->getChildByName("call_txt"));

	m_pTopVIPTxt = ImageNumber::create(25);
	m_pTopVIPTxt->setAnchorPoint(ccp(0.0f, 0.0f));
	m_pTopVIPTxt->setPosition(m_pCallTxt->getPosition() + ccp(m_pCallTxt->getSize().width + 8, 0));
	m_pVIPTopLayout->addNode(m_pTopVIPTxt);
	m_pTopVIPTxt->setNum("0", 0.0f, "vip");

	m_pUserTxt = dynamic_cast<UILabel*>(m_pVIPTopLayout->getChildByName("user_txt"));

	m_pTopVIPPromptTxt = dynamic_cast<UILabel*>(m_pVIPTopLayout->getChildByName("top_vip_prompt_txt"));

	m_bUIInited = true;
}

void PromptPayPanel::touchEventHandler(CCObject *pSender, TouchEventType type) {
	UIWidget *pWidget = dynamic_cast<UIWidget*>(pSender);
	const char *pszWidgetName = pWidget->getName();

	switch(type) {
		case TOUCH_EVENT_ENDED:
			if(strcmp(pszWidgetName, m_pCloseBtn->getName()) == 0) {
				close();
			} else if(strcmp(pszWidgetName, m_pSeePrivilegeBtn->getName()) == 0) {
				P_VIP_CTRL->getVIPPanel()->open();
			} else if(strcmp(pszWidgetName, m_pChargeBtn->getName()) == 0) {
				close();
				P_SHOP_CTRL->getRmbShopPanel()->open();
			} else if(string(pszWidgetName).find(CELL_PREFIX_NAME) == 0) {
				IconFrameCell *pCell = dynamic_cast<IconFrameCell*>(pWidget);

				if(pCell != NULL) {
					P_TIP_CTRL->showItemTipPanel(pCell->getType(), pCell->getCfgID(), pCell->getCnt(), false);
				}
			}
			break;
		default:;
	}
}
