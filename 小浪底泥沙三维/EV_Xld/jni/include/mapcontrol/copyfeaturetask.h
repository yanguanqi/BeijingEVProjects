#ifndef EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_COPYFEATURETASK_H
#define EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_COPYFEATURETASK_H

#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/edittask.h"
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
class CCopyTrackingTimer;
class EV_MAPCONTROL_DLL CCopyFeatureTask : public CEditTask
{
friend class CCopyTrackingTimer;
public:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	CCopyFeatureTask(CDataEditor *ref_editor,  CMapControl *ref_pControl);

	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	~CCopyFeatureTask();

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
	/// 复制要素
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void copyFeature(EarthView::World::Spatial::GeoDataset::IFeature *pFeature);

	/// <summary>
	/// 粘贴
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void paste();

	/// <summary>
	/// 结束任务
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void finish();

	/// <summary>
	///清空复制数据
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void clear();

	/// <summary>
	///判断容器中是否有拷贝的数据
	/// </summary>
	/// <param name=""></param>
	/// <returns>有数据返回true,没有返回false</returns>
	ev_bool isCopied();
private:
	ev_void init();
	ev_void clearTracking();
	ev_void updateTracking(EarthView::World::Spatial::Geometry::EVGeometryType geomType);
	ev_void copyData(EarthView::World::Spatial::GeoDataset::IFeature *pScrFeature, EarthView::World::Spatial::GeoDataset::IFeature *pDestFeature);
private:
	CMapControl *m_pMapControl;
	CTrackingGeomsItem *m_pGeomsItem;
	CCopyTrackingTimer *m_pTrackingTimer;
	CTrackingLayer *m_pTrackingLayer;
	ev_vector<EarthView::World::Spatial::GeoDataset::IFeature *> m_featureVector;
ev_private:
	CCopyFeatureTask( EarthView::World::Core::CNameValuePairList *pList );
};

			}
		}
	}
}
#endif
