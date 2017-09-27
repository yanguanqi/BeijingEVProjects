#ifndef EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_NEWFEATURETASK_H
#define EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_NEWFEATURETASK_H

#include "mapcontrol/mapcontrolconfig.h"
#include "mapcontrol/edittask.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				class IGeometry;
}}}}

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				class IFeature;
}}}}

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
class CDataEditor;
class EV_MAPCONTROL_DLL CNewFeatureTask : public CEditTask
{
public:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	CNewFeatureTask( CDataEditor *ref_editor );

	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	~CNewFeatureTask();

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

ev_private:
	CNewFeatureTask( EarthView::World::Core::CNameValuePairList *pList );
};
			}
		}
	}
}
#endif
