#ifndef EARTHVIEW_WORLD_SPATIAL3D_MESHTMEPLATEGEOMETRYFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL3D_MESHTMEPLATEGEOMETRYFACTORY_H


 
#include "core/memoryallocatedobject.h"
#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include "spatial3ddataset/meshtemplategeometry.h"
namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{

				class EV_Spatial3DDataset_DLL CMeshTemplateGeometryFactory :  public EarthView::World::Core::CAllocatedObject
				{
				private:
					static EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometryFactory* mpSingleton;
				protected:
					CMeshTemplateGeometryFactory();
                ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CMeshTemplateGeometryFactory(_in EarthView::World::Core::CNameValuePairList *pList);  

				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					virtual ~CMeshTemplateGeometryFactory();

					/// <summary>
					/// 获取工厂单件对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>工程单件对象</returns>
					
					static EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometryFactory* getSingletonPtr();

					/// <summary>
					/// 释放工程单件对象
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					static ev_void releaseSingleton();

					/// <summary>
					/// 创建一个EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>创建的EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry对象</returns>
					
					EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry* createInstance();

					/// <summary>
					/// 释放EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry对象
					/// </summary>
					/// <param name="geom">需要释放的对象</param>
					/// <returns></returns>
					
					ev_void releaseInstance(EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry* geom);
				};
			}//namespace
		}
	}
}

#endif
