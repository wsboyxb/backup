#include "FightGuideMapCfgMaster.h"

#include <set>

using std::set;

int CFightGuideMapCfgMaster::ValidateCfg()const
{
	int iRet = 0;


	set<unsigned int> stItemIDSet;

	for(int iIdx = 0; iIdx < m_stCfg.fightguidemapcfg_size(); iIdx++)
	{
		unsigned int uiCfgID = m_stCfg.fightguidemapcfg(iIdx).mapid();
		if(stItemIDSet.insert(uiCfgID).second == false)
		{
			CV_ERROR(("%s, cfgid = %u is dup cfg id !",
				__PRETTY_FUNCTION__, uiCfgID));
			return -1;//id�ظ�
		}

		//to add other validate check, such as skill etc.
	}
	return iRet;
}

int CFightGuideMapCfgMaster::SetCfg()
{
	int iRet = 0;

	for(int iIdx = 0; iIdx < m_stCfg.fightguidemapcfg_size(); iIdx++)
	{
		unsigned int uiCfgID = m_stCfg.fightguidemapcfg(iIdx).mapid();
		if(m_stID2IDX.insert(make_pair(uiCfgID, iIdx)).second == false)
		{
			CV_ERROR(("%s, cfgid = %u is dup cfg id !",
				__PRETTY_FUNCTION__, uiCfgID));
			return -1;//id�ظ�
		}
	}

	return iRet;
}

const FightGuideMapCfg* CFightGuideMapCfgMaster::GetFightGuideMapCfgByID(const unsigned int uiCfgID)
{
	map<unsigned int, int>::const_iterator it = m_stID2IDX.find(uiCfgID);

	if(it == m_stID2IDX.end())
	{
		CV_ERROR(("%s, can not find cfgid = %u item", __PRETTY_FUNCTION__, uiCfgID));
		return NULL; //�Ҳ�������Ʒ����
	}

	return &(m_stCfg.fightguidemapcfg(it->second));
}