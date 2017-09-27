#ifndef EARTHVIEW_WORLD_SPATIAL3D_I3DLAYER_H
#define EARTHVIEW_WORLD_SPATIAL3D_I3DLAYER_H

#include "geometry3d/iglobelayer.h"
#include "geometry3d/visibleobject.h"
#include "spatial3denginecomdef.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CMovableObject;
		}
	}
}


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{

				class EV_Spatial3DEngine_DLL I3DLayer : public EarthView::World::Spatial3D::Atlas::IGlobeLayer
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					I3DLayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					I3DLayer();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					I3DLayer(const EVString& name);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~I3DLayer();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Geometry3D::CVisibleObjectPtr getVisibleObjectPtr(ev_uint32 id);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Geometry3D::CVisibleObjectPtr getVisibleObjectPtr(EarthView::World::Graphic::CMovableObject* pMovableObj);

					/// <summary>
					/// 根据要素获取对象，对象已存在图层中
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Geometry3D::CVisibleObjectPtr getVisibleObjectPtr(EarthView::World::Spatial::GeoDataset::IFeature* f);

					/// <summary>
					/// 创建要素获取对象，插入到图层中
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Geometry3D::CVisibleObjectPtr createVisibleObjectPtr(EarthView::World::Spatial::GeoDataset::IFeature* ref_f);

				private:
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="obj">对象</param>
					/// <returns></returns>
					C_DISABLE_COPY(I3DLayer);
				};

				
				

			}//namespace
		}
	}
}
#endif
