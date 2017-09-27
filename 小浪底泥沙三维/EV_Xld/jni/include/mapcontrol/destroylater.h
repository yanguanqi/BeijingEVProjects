#ifndef _DESTROY_LATER_H
#define _DESTROY_LATER_H
#include "mapcontrol/mapcontrolconfig.h"
using namespace EarthView::World::Core;
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
/// <summary>
/// 删除对象延迟器.其工作原理与QT中QObject::deleteLater()一致.用户在一段代码中可以在调用该方法之后,仍然可以
///				   使用对象,其内存只有在回到主线程的消息路由之后,才会被真正删除.
/// </summary>
class EV_MAPCONTROL_DLL CDestroyLater : public CEventObject
{
ev_private:
	CDestroyLater( EarthView::World::Core::CNameValuePairList *pList ){}
public:
	/// <summary>
	/// 析构函数
	/// </summary>
	~CDestroyLater();
	/// <summary>
	/// 获取静态实例
	/// </summary>
	static CDestroyLater *getInstance();
	/// <summary>
	/// 消毁对象(延迟消毁)
	/// </summary>
	ev_void destroy( const CBaseObject *obj );
protected:
	CDestroyLater(){}
	virtual ev_bool onEvent(_in CEvent *e);
	ev_void clear();

	ev_list<const CBaseObject *> mObjs;
	CReadWriteLock mLocker;
	static CDestroyLater *mpInstance;
};
			}
		}
	}
}
#endif