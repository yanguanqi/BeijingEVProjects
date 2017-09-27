#ifndef EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_FEATUREMIRRORTASK_H
#define EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_FEATUREMIRRORTASK_H

#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/edittask.h"
#include "spatialinterface/ilayer.h"
#include "spatialinterface/ifeature.h"
#include "mapcontrol/trackinggeomsitem.h"
#include "mapcontrol/trackinglayer.h"
#include "mapcontrol/mapcontrol.h"
#include "mapcontrol/trackinglayer.h"
#include "mapcontrol/trackinggeometryitem.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{

class CDataEditor;
class EV_MAPCONTROL_DLL CFeatureMirrorTask : public CEditTask
{
public:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	CFeatureMirrorTask(CDataEditor *ref_editor);

	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	~CFeatureMirrorTask();

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
	/// 设置镜像几何
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void setGeometry(EarthView::World::Spatial::Geometry::IGeometry *pGeometry);

	/// <summary>
	/// 结束任务
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void finish();
private:
	ev_void init();
	ev_void clearTracking();
private:
	EarthView::World::Spatial::Geometry::IGeometry *m_pDestGeometry;
	CTrackingLayer *m_pTrackingLayer;
ev_private:
	CFeatureMirrorTask( EarthView::World::Core::CNameValuePairList *pList );
};
			}
		}
	}
}
#endif
