#ifndef CGEOMETRY3DFACTORYENUM_H
#define CGEOMETRY3DFACTORYENUM_H
#include <core/memoryallocatedobject.h>
#include "geometry3d/igeometry3dfactory.h"

#include "core/sharedptr.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{
				/// <summary>
				/// 三维类工厂枚举类
				/// 管理三维工厂的创建和销毁
				/// </summary>
				class EV_GEOMETRY3D_DLL CGeometry3DFactoryEnum : public EarthView::World::Core::CAllocatedObject
				{
ev_private: 
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CGeometry3DFactoryEnum(EarthView::World::Core::CNameValuePairList* pList);
				public:
					
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CGeometry3DFactoryEnum();
					ev_bool registerFactory(IGeometry3DFactory* factory);
					IGeometry3DFactory* getFactory(ev_uint16 type);
					/// <summary>
					/// 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回单体类的引用</returns>
					static EarthView::World::Spatial3D::Atlas::CGeometry3DFactoryEnum *getSingletonPtr();
				private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CGeometry3DFactoryEnum();
					ev_map<ev_uint16,IGeometry3DFactory*> mFactoryMap;
					//static EarthView::World::Spatial3D::Atlas::CGeometry3DFactoryEnum *ms_Singleton;

					static EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Atlas::CGeometry3DFactoryEnum> ms_Singleton;
				};
			}
		}
	}
}
#endif