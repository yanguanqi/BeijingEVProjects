#ifndef EARTHVIEW_WORLD_SPATIAL3D_RESOURCEGEOMETRYFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL3D_RESOURCEGEOMETRYFACTORY_H

#include "spatial3ddataset/resourcegeometry.h"
namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{

				class EV_Spatial3DDataset_DLL CResourceGeometryFactory :  public EarthView::World::Core::CAllocatedObject
				{
				private:
					static EarthView::World::Spatial3D::Dataset::CResourceGeometryFactory* mpSingleton;
				protected:
					CResourceGeometryFactory();
                ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CResourceGeometryFactory(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					virtual ~CResourceGeometryFactory();

					/// <summary>
					/// 获取工厂单件对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>工厂单件对象</returns>
					
					static EarthView::World::Spatial3D::Dataset::CResourceGeometryFactory* getSingletonPtr();

					/// <summary>
					/// 是否工厂单件对象
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					static ev_void releaseSingleton();

					/// <summary>
					/// 创建EarthView::World::Spatial3D::Dataset::CResourceGeometry对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial3D::Dataset::CResourceGeometry 对象</returns>
					
					EarthView::World::Spatial3D::Dataset::CResourceGeometry* createInstance();

					/// <summary>
					/// 释放EarthView::World::Spatial3D::Dataset::CResourceGeometry对象
					/// </summary>
					/// <param name="geom">需要释放的对象</param>
					/// <returns></returns>
					
					ev_void releaseInstance(EarthView::World::Spatial3D::Dataset::CResourceGeometry* geom);
				};
			}//namespace
		}
	}
}

#endif
