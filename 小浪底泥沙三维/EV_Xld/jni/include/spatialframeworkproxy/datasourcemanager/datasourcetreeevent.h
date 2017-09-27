#ifndef _DATASOURCETREEEVENT_INCLUDE__
#define _DATASOURCETREEEVENT_INCLUDE__

#include "core/event.h"
#include "spatialframeworkproxy/frameworkproxy_config.h"
#include "spatialframeworkproxy/groupstringinterfacemap.h"


namespace EarthView{namespace World{namespace FrameWorkProxy{namespace DataSourceManager{

class DataSourceTreeEventData;

class EV_FRAMEWORKPROXY_DLL DataSourceTreeEvent : public EarthView::World::Core::CEvent
{
ev_private:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="pList">参数列表</param>
	/// <returns></returns>
	DataSourceTreeEvent(_in EarthView::World::Core::CNameValuePairList *pList);
public:
	enum ActionType
	{
		ModelManage,
		EffectManage,
		DataSourceProperty,
		DateSetProperty,
	};

	class EV_FRAMEWORKPROXY_DLL DataSourcePropertyData:public EarthView::World::Core::CBaseObject
	{

	public:
		  EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap groupStringInterface;
		  /// <summary>
		  /// 构造函数
		  /// </summary>
		  /// <param name=""></param>
		  /// <returns></returns>
		  DataSourcePropertyData();

		  /// <summary>
		  /// 析构函数
		  /// </summary>
		  /// <param name=""></param>
		  /// <returns></returns>
		  ~DataSourcePropertyData();
ev_private:
		  /// <summary>
		  /// 构造函数
		  /// </summary>
		  /// <param name="pList">参数列表</param>
		  /// <returns></returns>
		  DataSourcePropertyData(_in EarthView::World::Core::CNameValuePairList *pList);
	};


	class EV_FRAMEWORKPROXY_DLL ModelManageData:public EarthView::World::Core::CBaseObject
	{
	public:
		EVString datasourceName;
		/// <summary>
		/// 构造函数
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		ModelManageData();

		/// <summary>
		/// 析构函数
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		~ModelManageData();
ev_private:
		/// <summary>
		/// 构造函数
		/// </summary>
		/// <param name="pList">参数列表</param>
		/// <returns></returns>
		ModelManageData(_in EarthView::World::Core::CNameValuePairList *pList);
	};

	class EV_FRAMEWORKPROXY_DLL EffectManageData:public EarthView::World::Core::CBaseObject
	{
	public:
		EVString datasourceName;
		EVString datasourcePath;
		EffectManageData();
		~EffectManageData();
	ev_private:
		  EffectManageData(_in EarthView::World::Core::CNameValuePairList *pList);
	};

	DataSourceTreeEvent();
	~DataSourceTreeEvent();

	EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ActionType getActionType() const;

	EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ModelManageData  getModelManageData() const;
	
	EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData getEffectManageData() const;

	EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::DataSourcePropertyData getPropertyData() const;

	EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData& data() const;

protected:

	EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData* privateData;
};

}}}}

#endif // _DATASOURCETREEEVENT_INCLUDE__
