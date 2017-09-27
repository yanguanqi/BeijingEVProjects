#ifndef EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_SPLITPARTTASK_H
#define EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_SPLITPARTTASK_H

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
class CChangeAndAddFeature;
class CSplitFeature;
class EV_MAPCONTROL_DLL CSplitPartTask : public CEditTask
{
public:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	CSplitPartTask(CDataEditor *ref_editor);

	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	~CSplitPartTask();

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
	/// 添加被拆分成多个部分的要素
	/// </summary>
	/// <param name="nID">被拆分的要素ID</param>
	/// <param name="pGeometry">拆分后形成的几何集</param>
	/// <returns></returns>
	ev_void addSplitPartFeatrue(ev_int32 nID, EarthView::World::Spatial::Geometry::IGeometry *pGeometry);
private:
	ev_void clearData();
	ev_void createFeatrue(EarthView::World::Spatial::Geometry::IGeometry *pGeometry, EarthView::World::Spatial::GeoDataset::IFeature *pSrcFeature, CChangeAndAddFeature *pSplitFeature);
private:
	ev_vector<CSplitFeature* > m_splitParts;
ev_private:
	CSplitPartTask( EarthView::World::Core::CNameValuePairList *pList );
};

class  CSplitFeature : public EarthView::World::Core::CAllocatedObject
{
public:
	CSplitFeature();
	~CSplitFeature();
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
