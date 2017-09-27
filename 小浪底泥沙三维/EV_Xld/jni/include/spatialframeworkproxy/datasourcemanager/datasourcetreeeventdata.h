//// Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
/// All rights reserved.
///
/// 类的声明。
///
///
///
/// 作 者：赵玻恩
/// 完成日期：-
///
/// 修改历史：
/// [修改序列]	[修改日期]		[修改者]		[修改内容]
/// 0			2013/04/15		赵玻恩		类定义
///
#ifndef _DATASOURCETREEEVENTDATA_INCLUDE__
#define _DATASOURCETREEEVENTDATA_INCLUDE__

#include "datasourcetreeevent.h"

namespace EarthView{namespace World{namespace FrameWorkProxy{namespace DataSourceManager{

class EV_FRAMEWORKPROXY_DLL DataSourceTreeEventData:public EarthView::World::Core::CBaseObject
{
public:
	/// <summary>
	/// 设置动作类型。
	/// </summary>
	/// <param name="t">动作类型。</param>
	/// <returns></returns>
	ev_void setType(EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ActionType t)
	{
		typ = t;
	}

	/// <summary>
	/// 获取动作类型。
	/// </summary>
	/// <returns>动作类型。</returns>
	EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ActionType getType() const
	{
		return typ;
	}

	EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ActionType typ;

	EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData effectManageData;
	EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ModelManageData  modelManageData;

	EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::DataSourcePropertyData propertyData;

	DataSourceTreeEventData();
	~DataSourceTreeEventData();
ev_private:
		DataSourceTreeEventData(_in EarthView::World::Core::CNameValuePairList *pList);
};

}}}}

#endif // _DATASOURCETREEEVENTDATA_INCLUDE__
