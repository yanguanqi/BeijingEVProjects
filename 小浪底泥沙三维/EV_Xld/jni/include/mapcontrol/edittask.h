#ifndef EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_EDITTASK_H
#define EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_EDITTASK_H

#include "mapcontrol/mapcontrolconfig.h"
#include "core/memoryallocatedobject.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
class CDataEditor;
enum EVEditTaskType
{
	ETT_Unknown				= 0,		//未知
	ETT_NewFeature			= 1,		//新建要素
	ETT_ModifyFeatures		= 2,		//修改要素
	ETT_CopyFeatures		= 3,		//复制要素
	ETT_SplitFeatures		= 4,		//切割要素
	ETT_MirrorFeatures		= 5,		//镜像要素
	ETT_ReshapeFeature		= 6,		//重塑要素
	ETT_FeatureIntersection	= 7,		//要素相交
	ETT_ConbinePart			= 8,		//合并多个部分为一个要素
	ETT_SplitPart			= 9,		//拆分要素为多个部分
	ETT_FeatureUnion		= 10,		//要素联合
};
class EV_MAPCONTROL_DLL CEditTask : public EarthView::World::Core::CAllocatedObject
{
public:
	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	~CEditTask();

public:
	/// <summary>
	/// 获取任务的名称
	/// </summary>
	/// <param name=""></param>
	/// <returns>名称</returns>
	virtual EVString getName() const;

	/// <summary>
	/// 获取任务的类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>任务类型</returns>
	virtual EVEditTaskType getTaskType() const;

	/// <summary>
	/// 激活任务
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ev_void activate();

	/// <summary>
	/// 取消任务的激活状态
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ev_void deactivate();

	/// <summary>
	/// 结束任务
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ev_void finish();
protected:
	CEditTask( CDataEditor *ref_editor );
	CDataEditor *mpEditor;
ev_private:
	CEditTask( EarthView::World::Core::CNameValuePairList *pList );
};
			}
		}
	}
}
#endif
