#ifndef _EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_OPERATION_MANAGER_H
#define _EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_OPERATION_MANAGER_H
#include "mapcontrol/mapcontrolconfig.h"
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
/// <summary>
/// 索引观察者.用于检测操作的过程检测
/// </summary>
class EV_MAPCONTROL_DLL IIndexObserver : public EarthView::World::Core::CAllocatedObject
{
public:
	/// <summary>
	/// 构造函数
	/// </summary>
	IIndexObserver(){}
	/// <summary>
	/// 当操作管理器的当前索引值发生变化时,该方法会被调用
	/// </summary>
	virtual ev_void onIndexChanged(){}

 ev_private:
	IIndexObserver( EarthView::World::Core::CNameValuePairList *pList ){}
};
class COperation;
class COperationManagerPrivate;
/// <summary>
/// 操作管理器
/// </summary>
class EV_MAPCONTROL_DLL COperationManager : public EarthView::World::Core::CAllocatedObject
{
public:
	/// <summary>
	/// 构造函数
	/// </summary>
	COperationManager();
	/// <summary>
	/// 析构函数
	/// </summary>
	~COperationManager();

public:
	/// <summary>
	/// 判断是否支持"重做"操作
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果支持"重做"则返回true,反之则否</returns>
	ev_bool canRedo() const;

	/// <summary>
	/// 判断是否支持"回退"操作
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果支持"回退"操作就返回true,反之则否</returns>
	ev_bool canUndo() const;

	/// <summary>
	/// 获取操作数据的数量
	/// </summary>
	/// <param name=""></param>
	/// <returns>数量</returns>
	ev_int32 getCount() const;

	/// <summary>
	/// 获取指定索引处的操作
	/// </summary>
	/// <param name="index">索引</param>
	/// <returns>操作数据</returns>
	COperation *getOperation( ev_uint32 index );

	/// <summary>
	/// 获取回退次数
	/// </summary>
	/// <param name=""></param>
	/// <returns>次数</returns>
	ev_int32 getUndoLimit() const;

	/// <summary>
	/// 设置回退次数
	/// </summary>
	/// <param name="limit">次数限制</param>
	/// <returns></returns>
	ev_void setUndoLimit( ev_uint32 limit );

	/// <summary>
	/// 执行重做
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void redo();

	/// <summary>
	/// 执行回退
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void undo();

	/// <summary>
	/// 开启编辑宏,即"组操作"
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void beginMacro();

	/// <summary>
	/// 结束编辑宏,把在编辑宏中所做的所有操作合为一个操作,即最后一个操作
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void endMacro();

	/// <summary>
	/// 检测是否在编辑宏中
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果是,则返回true,反之则否</returns>
	ev_bool isInMacro() const;

	/// <summary>
	/// 废弃编辑宏,即在编辑宏中的所有操作都清除掉
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void abortMacro();

	/// <summary>
	/// 获取当前的编辑索引
	/// </summary>
	/// <param name=""></param>
	/// <returns>索引</returns>
	ev_int32 getCurrentIndex() const;

	/// <summary>
	/// 添加一个操作命令
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_bool push( _in COperation *operation );
	/// <summary>
	/// 判断压栈操作是否被阻止
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_bool isPushBlocked() const;

	/// <summary>
	/// 清空所有的操作命令
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void clear();
	/// <summary>
	/// 注册观察者
	/// </summary>
	/// <param name="observer">观察者</param>
	/// <returns></returns>
	ev_void registerObserver( _in IIndexObserver *observer );
	/// <summary>
	/// 取消注册
	/// </summary>
	/// <param name="observer">待反注册的观察者</param>
	/// <returns></returns>
	ev_void unregisterObserver( _in IIndexObserver *observer );

protected:
	COperationManagerPrivate *d_ptr;
ev_private:
	COperationManager( EarthView::World::Core::CNameValuePairList *pList );
};
}
}
}
}
#endif
