#ifndef EARTHVIEW_WORLD_SPATIAL3D_ENTITYGEOMETRYFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL3D_ENTITYGEOMETRYFACTORY_H


#include "entitygeometry.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{

				class EV_Spatial3DDataset_DLL CEntityGeometryFactory :  public EarthView::World::Core::CAllocatedObject
				{
				private:
					static CEntityGeometryFactory* mpSingleton;
				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					CEntityGeometryFactory();
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEntityGeometryFactory(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					virtual ~CEntityGeometryFactory();

					/// <summary>
					/// 获取EarthView::World::Spatial3D::Dataset::CEntityGeometry工厂对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>工厂对象</returns>
					
					static CEntityGeometryFactory* getSingletonPtr();

					/// <summary>
					/// 释放EarthView::World::Spatial3D::Dataset::CEntityGeometry工厂对象
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					static ev_void releaseSingleton();

					/// <summary>
					/// 创建一个EarthView::World::Spatial3D::Dataset::CEntityGeometry
					/// </summary>
					/// <param name=""></param>
					/// <returns>构造的EarthView::World::Spatial3D::Dataset::CEntityGeometry对象</returns>
					
					EarthView::World::Spatial3D::Dataset::CEntityGeometry* createInstance();

					/// <summary>
					/// 释放一个EarthView::World::Spatial3D::Dataset::CEntityGeometry
					/// </summary>
					/// <param name="geom">需要释放的EarthView::World::Spatial3D::Dataset::CEntityGeometry对象</param>
					/// <returns></returns>
					
					ev_void releaseInstance(EarthView::World::Spatial3D::Dataset::CEntityGeometry* geom);
				};
			}//namespace
		}
	}
}

#endif
