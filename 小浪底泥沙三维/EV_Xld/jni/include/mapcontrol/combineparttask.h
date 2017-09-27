#ifndef EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_COMBINEFEATURETASK_H
#define EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_COMBINEFEATURETASK_H

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
class EV_MAPCONTROL_DLL CCombinePartTask : public CEditTask
{
public:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	CCombinePartTask(CDataEditor *ref_editor);

	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	~CCombinePartTask();

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
	/// 存储被修改的要素
	/// </summary>
	/// <param name="nID">被修改的要素索引</param>
	/// <param name="nID">被修改后的几何图形</param>
	/// <returns></returns>
	ev_void storageChangedFeature(ev_int32 nID, EarthView::World::Spatial::Geometry::IGeometry *pGeometry);

	/// <summary>
	/// 存储被删除的要素
	/// </summary>
	/// <param name="nID">被删除的要素索引</param>
	/// <returns></returns>
	ev_void storageDeletedFeatures(ev_int32 nID);
private:
	ev_void init();
	ev_void clearTracking();
private:
	ev_vector<ev_int32 > m_deletedIDs;
	EarthView::World::Spatial::Geometry::IGeometry *m_pNewGeometry;
	ev_int32 m_nChangedID;
ev_private:
	CCombinePartTask( EarthView::World::Core::CNameValuePairList *pList );
};
			}
		}
	}
}
#endif
