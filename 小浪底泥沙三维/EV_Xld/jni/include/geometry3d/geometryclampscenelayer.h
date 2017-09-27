#ifndef GeometryClampSceneLayer_H
#define GeometryClampSceneLayer_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>

#include "geometry3d/iclampscenelayer.h"
#include "spatialdisplay/spatialdisplay.h"

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CSceneManager;
		}

		namespace Spatial
		{
			class CGeoObject;

			namespace Utility
			{
				class CSpatialReference;
			}
		}
	}
}


namespace EarthView
{
	namespace World
	{
		
		namespace Geometry3D
		{				

			/// <summary>
			/// 聚合二维的图层，提供在三维中渲染的接口
			/// 管理三维中二维图层
			/// </summary>
			class EV_GEOMETRY3D_DLL CGeometryClampSceneLayer : public EarthView::World::Spatial3D::Atlas::IClampSceneLayer
			{			
			ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CGeometryClampSceneLayer(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="ref_pSceneMgr">场景管理器</param>
				/// <returns></returns>
				CGeometryClampSceneLayer(EarthView::World::Graphic::CSceneManager* ref_pSceneMgr);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CGeometryClampSceneLayer();


			public:
				/// <summary>
				/// 添加CGeoObject对象
				/// </summary>
				/// <param name="obj">对象指针</param>
				/// <returns>是否添加成功</returns>				
				ev_bool appendGeoObject(EarthView::World::Spatial::CGeoObject* ref_obj);
				ev_bool removeGeoObject(EarthView::World::Spatial::CGeoObject* obj);
				EarthView::World::Spatial::CGeoObject* getGeoObject(ev_uint32 index);
				ev_void clearGeoObjects();
				/// <summary>
				/// 获知CGeoObject对象的个数
				/// </summary>
				/// <returns>个数</returns>
				ev_uint32 getCount();
				/// <summary>
				/// 获知图层类型
				/// </summary>
				/// <returns>图层类型</returns>
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
				/// <summary>
				/// 设置某个对象的可见性
				/// </summary>
				/// <param name="visible">obj是否可见</param>
				/// <param name="ref_geoObject">ibj</param>
				/// <returns></returns>
				ev_bool setObjectVisibility(ev_bool visible, EarthView::World::Spatial::CGeoObject* ref_geoObject);
				
			public:
				/// <summary>
				/// 获取瓦片
				/// </summary>
				/// <param name="tile">瓦片内容</param>
				/// <param name="north">瓦片信息</param>
				/// <returns>是否成功</returns>
				virtual ev_bool getTile(ev_int32 level,ev_int32 row,ev_int32 col,_inout EarthView::World::Spatial::CTileData& tile);
				/// <summary>
				/// 获取瓦片
				/// </summary>
				/// <param name="minX">瓦片经纬度范围minX</param>
				/// <param name="minY">瓦片经纬度范围minY</param>
				/// <param name="maxX">瓦片经纬度范围maxX</param>
				/// <param name="maxY">瓦片经纬度范围maxY</param>
				/// <param name="tile">返回的瓦片数据信息</param>
				/// <returns>是否成功</returns>
				virtual ev_bool getTile(Real minX,Real minY,Real maxX,Real maxY,_inout EarthView::World::Spatial::CTileData& tile);
			protected:
				
				ev_void recalcEnvelope();

				ev_bool drawImage(Real minX,Real minY,Real maxX,Real maxY,ev_bool drawAsTile,EarthView::World::Core::MemoryDataStreamPtr& imageStream);
			private:
				/// <summary>
				/// 复制构造函数
				/// </summary>
				/// <param name="obj">对象</param>
				/// <returns></returns>
				C_DISABLE_COPY(CGeometryClampSceneLayer);

			protected:
				struct obj_visibility
				{
					EarthView::World::Spatial::CGeoObject* geoObj;
					ev_bool visible;
					Real translateX;
					EarthView::World::Spatial::Geometry::IGeometry* translatedGeometry;
				};
				typedef list<obj_visibility> GeometryObjects;
				GeometryObjects mGeoObjs;
				EarthView::World::Core::CReadWriteLock mGeometryLock;

				EarthView::World::Graphic::CSceneManager* mSceneMgr;				
			};
		}
	}
}
#endif
