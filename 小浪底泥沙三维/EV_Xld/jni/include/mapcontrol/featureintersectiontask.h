#ifndef EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_FEATUREINTERSECTIONTASK_H
#define EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_FEATUREINTERSECTIONTASK_H

#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/edittask.h"
#include "spatialinterface/ilayer.h"
#include "spatialinterface/ifeature.h"
#include "mapcontrol/trackinggeomsitem.h"
#include "mapcontrol/trackinglayer.h"
#include "mapcontrol/mapcontrol.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{

class CDataEditor;
class CFeatureIntersection;
class CTrackingTimer;
class EV_MAPCONTROL_DLL CFeatureIntersectionTask : public CEditTask
{
	friend class CTrackingTimer;
public:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	CFeatureIntersectionTask(CDataEditor *ref_editor, CMapControl *pref_Control);

	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	~CFeatureIntersectionTask();

public:
	/// <summary>
	/// 获取任务的名称
	/// </summary>
	/// <param name=""></param>
	/// <returns>名称</returns>
	EVEditTaskType getTaskType() const;

	/// <summary>
	/// 获取任务的类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>任务类型</returns>
	EVString getName() const;

	/// <summary>
	/// 激活任务
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void activate();

	/// <summary>
	/// 取消任务的激活状态
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void deactivate();

	/// <summary>
	/// 结束任务
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void finish();

	/// <summary>
	/// 添加被相交要素
	/// </summary>
	/// <param name="nID">要素对应的索引</param>
	/// <param name="pGeometry">要素相交后生所的几何集</param>
	/// <returns></returns>
	ev_void addFeature(ev_int32 nID, EarthView::World::Spatial::Geometry::IGeometry *pGeometry);
	/// <summary>
	/// 清空数据
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void clearData();
private:
	ev_void init();
	ev_void clearTracking();
	CTrackingGeomsItem *m_pGeomsItem;
	CTrackingLayer *m_pTrackingLayer;
	CTrackingTimer *m_pTrackingTimer;
	CMapControl *m_pMapControl;
	ev_vector<CFeatureIntersection* > m_featureIntersection;
ev_private:
	CFeatureIntersectionTask( EarthView::World::Core::CNameValuePairList *pList );
};

class  CFeatureIntersection : public EarthView::World::Core::CAllocatedObject
{
public:
	CFeatureIntersection();
	~CFeatureIntersection();
	ev_void setID(ev_int32 nID);
	ev_void setGeometry(EarthView::World::Spatial::Geometry::IGeometry *pGeometry);
	ev_int32 getID();
	EarthView::World::Spatial::Geometry::IGeometry* getGeometry();
private:
	ev_int32 m_nID;
	EarthView::World::Spatial::Geometry::IGeometry *m_pGeometry;
};
			}
		}
	}
}
#endif
