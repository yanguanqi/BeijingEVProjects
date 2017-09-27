#ifndef EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_SPLITFEATURETASK_H
#define EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_SPLITFEATURETASK_H

#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/edittask.h"
#include "spatialinterface/ilayer.h"
#include "spatialinterface/ifeature.h"
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
class CSplitFeature;
class EV_MAPCONTROL_DLL CSplitFeatureTask : public CEditTask
{
public:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	CSplitFeatureTask(CDataEditor *ref_editor,  CMapControl *ref_pControl);

	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	~CSplitFeatureTask();

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
	/// 添加被分割的要素
	/// </summary>
	/// <param name="nID">被分割的要素ID</param>
	/// <param name="pGeometry">被分割后形成的几何集</param>
	/// <returns></returns>
	ev_void addSplitFeature(ev_int32 nID, EarthView::World::Spatial::Geometry::IGeometry *pGeometry);

	/// <summary>
	/// 结束任务
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void finish();
private:
	ev_void clearData();
	ev_void copyData(EarthView::World::Spatial::GeoDataset::IFeature *pSrcFeature, EarthView::World::Spatial::GeoDataset::IFeature *pDestFeature);
	CMapControl *m_pMapControl;
	ev_vector<CSplitFeature* > m_splitFeature;
ev_private:
	CSplitFeatureTask( EarthView::World::Core::CNameValuePairList *pList );
};
			}
		}
	}
}
#endif
