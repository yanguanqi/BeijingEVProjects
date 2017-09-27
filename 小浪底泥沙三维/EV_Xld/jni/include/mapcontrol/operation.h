#ifndef _EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_OPERATION_H
#define _EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_OPERATION_H
#include "mapcontrol/mapcontrolconfig.h"
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
/// <summary>
/// 操作的抽象类型.派生类需要重新实现redo()和undo()方法.当用户调用COperationManager::undo()时,该类的undo()方法会被调用
/// </summary>
class EV_MAPCONTROL_DLL COperation : public EarthView::World::Core::CAllocatedObject
{
public:
	/// <summary>
	/// 构造函数
	/// </summary>
	COperation(){}
	/// <summary>
	/// 析构函数
	/// </summary>
	~COperation(){}
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
	COperation( EarthView::World::Core::CNameValuePairList *pList ){}
	friend class COperationGroup;
	friend class COperationManager;
};
/// <summary>
/// 操作组
/// </summary>
class EV_MAPCONTROL_DLL COperationGroup : public COperation
{
public:
	COperationGroup(){}
	~COperationGroup();
	virtual EVString getName();
	/// <summary>
	/// 获取子操作的个数
	/// </summary>
	/// <returns>操作的个数</returns>
	ev_uint32 getCount() const;
	/// <summary>
	/// 获取指定索引处的子操作
	/// </summary>
	/// <param name="index">索引</param>
	/// <returns>子操作</returns>
	const COperation *getChild( _in ev_uint32 index ) const;
	/// <summary>
	/// 添加子操作
	/// </summary>
	/// <param name="child">子操作</param>
	/// <returns>子操作</returns>
	ev_void addChild( _in COperation *child );
	/// <summary>
	/// 移除指定索引处的子操作
	/// </summary>
	/// <param name="index">待移除的子操作的索引</param>
	/// <returns></returns>
	ev_void removeChild( _in ev_uint32 index );
protected:
	virtual ev_void redo();
	virtual ev_void undo();
	ev_vector<COperation*> mChilds;
ev_private:
	COperationGroup( EarthView::World::Core::CNameValuePairList *pList ){}
};
			}
		}
	}
}
#endif
