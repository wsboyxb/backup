#ifndef FightEndlessShowPanel_h__
#define FightEndlessShowPanel_h__

#include "BasePanel.h"
#include "CSInfiniteMsg.pb.h"

using namespace vmsg;

class HBox;

class CFightEndlessShowPanel : public BasePanel
{
public:
	enum  {
		ENDLESS_MAX_ITEM = 6,
	};
public:
	CFightEndlessShowPanel();
	virtual ~CFightEndlessShowPanel();

	CREATE_FUNC(CFightEndlessShowPanel);

	// override
	virtual bool init();
	virtual void open();
	virtual void close();

	void showResult(const CSInfiniteEndRsp& stRsp);
protected:
private:
	 void touchEventHandler(CCObject *pSender, TouchEventType type);
	 void HandleBaoxiangEffEvent(CCArmature * armature, MovementEventType type, const char * name);
	 void HandleCellEffEvent(CCArmature * armature, MovementEventType type, const char * name);
	 void showNextElmt(); //展示下一个物品
	 const std::string getLastCellAniName(const bool isLoopAni);
	 const std::string getColorString(const int iColor);

private:
	UIButton *m_pDoOKBtn; //close btn
	HBox *m_pCellHBox;

	CCArmature* m_pBaoxiangAni; //宝箱特效
	CCArmature* m_pCurCellAni; //宝箱特效

	std::vector<vmsg::CSAwardElement> m_stElmtDataLst;
};

#endif // FightEndlessShowPanel_h__
