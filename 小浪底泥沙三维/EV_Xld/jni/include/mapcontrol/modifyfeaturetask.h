#ifndef EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_MODIFYFEATURETASK_H
#define EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_MODIFYFEATURETASK_H

#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/edittask.h"
#include "spatialinterface/igeometry.h"
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
class CDataEditor;
class EV_MAPCONTROL_DLL CModifyFeatureTask : public CEditTask
{
public:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	CModifyFeatureTask( CDataEditor *ref_editor );

	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	~CModifyFeatureTask();

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
	/// 自动编辑
	/// </summary>
	/// <param name="nID">自动修改的要素ID</param>
	/// <param name="pGeometry">自动修改的要素几何图形</param>
	/// <returns></returns>
	ev_void setAutomaticModify(ev_int32 nID, const EarthView::World::Spatial::Geometry::IGeometry *pGeometry);

ev_private:
	CModifyFeatureTask( EarthView::World::Core::CNameValuePairList *pList );
	ev_bool m_bAutomatic;
	ev_int32 m_nAutoID;
	EarthView::World::Spatial::Geometry::IGeometry *m_pAutoGeometry;
};
			}
		}
	}
}
#endif
