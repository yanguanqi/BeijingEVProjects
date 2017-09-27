#ifndef GeoPointEx_H
#define GeoPointEx_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>

#include "geometry3d/geometry3d_config.h"
#include "geometry3d/iclampscenelayer.h"

namespace EarthView{
	namespace World{

		namespace Graphic
		{
			class CSceneManager;
		}

		namespace Spatial
		{
			class CGeoObject;
		}

	}
}

namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{				
			class CMultiPoint3DExtension;
			class CGeometryClampSceneLayer;
			/// <summary>
			/// 聚合二维的图层，提供在三维中渲染的接口
			/// 管理三维中二维图层
			/// </summary>
			class EV_GEOMETRY3D_DLL CGeoPointEx : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CGeoPointEx(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="ref_scenemanager">场景管理器</param>
				/// <returns></returns>
				CGeoPointEx(EarthView::World::Graphic::CSceneManager* ref_scenemanager);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CGeoPointEx();

			public:
				/// <summary>
				/// 构建
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void build();
				/// <summary>
				/// 添加一个要素
				/// </summary>
				/// <param name="layer">二维图层</param>
				/// <returns></returns>
				virtual ev_bool appendGeoObject(EarthView::World::Spatial::CGeoObject* ref_geoObject);
				/// <summary>
				/// 删除二维图形
				/// </summary>
				/// <param name="geometry">二维图形</param>
				/// <returns></returns>
				virtual ev_bool removeGeoObject(EarthView::World::Spatial::CGeoObject* geoObject);
				/// <summary>
				/// 删除所有二维图形
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void removeAllGeoObjects();
				/// <summary>
				/// 获得二维图形指针
				/// </summary>
				/// <param name="index">二维图形索引</param>
				/// <returns>二维图形</returns>
				virtual EarthView::World::Spatial::CGeoObject* getGeoObject(ev_uint32 index) const;
				/// <summary>
				/// 获得三维实体数量
				/// </summary>
				/// <param name=""></param>
				/// <returns>二维图形数量</returns>
				virtual ev_uint64 getGeoObjectCount() const;
				/// <summary>
				/// 渲染
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void render();

				/// <summary>
				/// 取消渲染
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void derender();
				/// <summary>
				/// 是否已经挂接渲染
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否已经挂接渲染</returns>
				virtual ev_bool isRendering();

				/// <summary>
				/// 获取图层贴地模式,只有在绘制贴地图层时才有效,非贴地时返回-1
				/// </summary>
				/// <param name=""></param>
				/// <returns>贴地模式</returns>
				int getClampMode() const;
				/// <summary>
				/// 设置图层贴地模式,只有在绘制贴地图层时才有效
				/// </summary>
				/// <param name="mode">贴地模式</param>
				/// <returns></returns>
				void setClampMode(EarthView::World::Spatial3D::Atlas::ClampMode mode);
			private:
				ev_bool mIsRendering;
				/// <summary>
				/// 复制构造函数
				/// </summary>
				/// <param name="obj">对象</param>
				/// <returns></returns>
				C_DISABLE_COPY(CGeoPointEx);

			protected:
				EarthView::World::Graphic::CSceneManager* mpSceneManager;

				EarthView::World::Geometry3D::CMultiPoint3DExtension* mpMultiGeoExtension;			
				EarthView::World::Geometry3D::CGeometryClampSceneLayer* mpGeometryClampLayer;
			};
		}
	}
}
#endif
