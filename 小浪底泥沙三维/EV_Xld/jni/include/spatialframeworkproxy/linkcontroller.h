#ifndef _Link_Controller_H_
#define _Link_Controller_H_
#include "frameworkproxy_config.h"
#include <core/memoryallocatedobject.h>

namespace EarthView{ namespace World{ namespace Spatial{ namespace Atlas{ class ISpatialControl;} }}}
class CPrivateListener;
class EV_FRAMEWORKPROXY_DLL CLinkController : public EarthView::World::Core::CAllocatedObject
{
public:
	~CLinkController();
public:
	/// <summary>
	/// 获取单件实例
	/// </summary>
	/// <param name=""></param>
	/// <returns>链接控制器</returns>
	/// <memo></memo>
	static CLinkController* getSingletonPtr();
	/// <summary>
	/// 获取联动控制器是否可用
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果可用则返回true,反之则否</returns>
	/// <memo></memo>
	ev_bool isActive() const;
	/// <summary>
	/// 设置联动控制器是否可用
	/// </summary>
	/// <param name="active">如果为true,则设置联动控制器可用,反之则否</param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void setActive( _in ev_bool active );
	/// <summary>
	/// 获取参与联动的控件数量
	/// </summary>
	/// <param name=""></param>
	/// <returns>控件数量</returns>
	/// <memo></memo>
	ev_uint32 getCount() const;
	/// <summary>
	/// 添加控件,使之参与联动
	/// </summary>
	/// <param name="ctrl">待添加的控件</param>
	/// <returns>如果添加成功则返回true,反之则否</returns>
	/// <memo></memo>
	ev_bool addControl( _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl );
	/// <summary>
	/// 移除指定索引处的控件
	/// </summary>
	/// <param name="index">待移除的控件索引</param>
	/// <returns>如果移除成功则返回true,反之则否</returns>
	/// <memo></memo>
	ev_bool removeControl( _in ev_uint32 index );
	/// <summary>
	/// 移除指定控件
	/// </summary>
	/// <param name="ctrl">待移除的控件</param>
	/// <returns>移除成功则返回true,反之则否</returns>
	/// <memo></memo>
	ev_bool removeControl( _in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl );
	/// <summary>
	/// 判断控件是否已经存在于联动控制器中
	/// </summary>
	/// <param name="ctrl">控件</param>
	/// <returns>如果存在则返回true,反之则否</returns>
	/// <memo></memo>
	ev_bool isExist( _in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl );
	/// <summary>
	/// 清空所有的控件
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void clear();
	/// <summary>
	/// 从工程管理里面恢复先前的配置
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void load();
	/// <summary>
	/// 把当前的联动配置保存到工程管理中
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void save();

	/// <summary>
	/// 开启二三维旋转同步
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void setRotation(ev_bool r);

	/// <summary>
	/// 是否开启了二三维旋转同步
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_bool isRotation();
private:
	CLinkController();
	static CLinkController* mpInstance;
	ev_bool mbActive;
	ev_bool mbRotation;

	friend class CPrivateListener;
	ev_vector<CPrivateListener*> mListener;

	
ev_private:
	CLinkController( EarthView::World::Core::CNameValuePairList *pList );
};
#endif

