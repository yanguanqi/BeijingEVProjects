#ifndef _EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_LAYOUTOPERATION_H
#define _EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_LAYOUTOPERATION_H

#include "layoutcontrol/layoutcontrolconfig.h"

namespace EarthView
{
	namespace World
	{
		namespace Layout
		{
			namespace Controls
			{
/// <summary>
/// 操作的抽象类型.派生类需要重新实现redo()和undo()方法.当用户调用COperationManager::undo()时,该类的undo()方法会被调用
/// </summary>
class EV_LAYOUTCONTROL_DLL CLayoutOperation : public EarthView::World::Core::CAllocatedObject
{
public:
	/// <summary>
	/// 构造函数
	/// </summary>
	CLayoutOperation(){}
	/// <summary>
	/// 析构函数
	/// </summary>
	~CLayoutOperation(){}
	/// <summary>
	/// 获取操作的名称
	/// </summary>
	virtual EVString getName(){ return ""; }
protected:
	/// <summary>
	/// 回退操作
	/// </summary>
	virtual ev_void redo(){}
	/// <summary>
	/// 重做操作
	/// </summary>
	virtual ev_void undo(){}
ev_private:
	CLayoutOperation( EarthView::World::Core::CNameValuePairList *pList ){}
	friend class CLayoutOperationManager;
};
			}
		}
	}
}
#endif
