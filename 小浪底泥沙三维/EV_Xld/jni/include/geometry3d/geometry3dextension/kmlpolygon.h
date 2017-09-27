#ifndef EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_KMLPOLYGON_H
#define EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_KMLPOLYGON_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>



#include "geometry3d/geometry3d_config.h"
#include "geometry3d/geopolygonex.h"

namespace EarthView{
	namespace World{

		namespace Spatial
		{
			namespace Geometry
			{
				class CPolygon;
			}

			namespace Display
			{
				//class CSimpleFill3DSymbol;
				class CSimpleFillSymbol;
				class CTextureFill3DSymbol;
			}

			namespace Kml
			{
				class CGeoObjectExtension;
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
			/// 线类型的地理对象扩展到三维类
			/// 管理面线型的地理对象扩展到三维类方法
			/// </summary>
			class EV_GEOMETRY3D_DLL CKmlPolygon: public EarthView::World::Geometry3D::CGeoPolygonEx
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CKmlPolygon(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="scenemanager">场景管理器</param>
				/// <param name="groupName">资源组名称</param>
				/// <returns></returns>
				CKmlPolygon(EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geo,EarthView::World::Graphic::CSceneManager* ref_scenemanager,const EVString& groupName );
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CKmlPolygon();

			public:	
				ev_bool load();
				ev_bool attachToScene();
				ev_bool detachFromScene();
				virtual ev_bool update();
			
			ev_private:	

				ev_void initGeometrySymobl( EarthView::World::Spatial::Kml::CGeoObjectExtension* geo );

				EarthView::World::Spatial::Kml::CGeoObjectExtension* mpGeo;
				EarthView::World::Spatial::Display::CTextureFill3DSymbol* mpFill3DSymbol;
				EarthView::World::Spatial::Display::CSimpleFillSymbol* mpFillSymbol;
				

				EarthView::World::Spatial::Geometry::CPolygon* mpGeometry;
			};	

			//
			class EV_GEOMETRY3D_DLL CKmlPolygonFactory : public EarthView::World::Spatial3D::Atlas::IGeometry3DFactory
			{
ev_private: 
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CKmlPolygonFactory(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				///<param></param>
				/// <returns></returns>
				CKmlPolygonFactory();
				~CKmlPolygonFactory();
				/// <summary>
				/// 获取工厂类型
				/// </summary>
				/// <returns>工厂类型</returns>
				virtual ev_uint16       getFactoryType();
				virtual EarthView::World::Geometry3D::VisibleObjects createRenderable(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj,EarthView::World::Graphic::CSceneManager* scenemanager);
				virtual void            destoryRenderable(EarthView::World::Geometry3D::CVisibleObject* visitObj);
				/// <summary>
				/// 添加一个要素
				/// </summary>
				/// <param name="layer">二维图层</param>
				/// <returns></returns>
				virtual ev_bool appendGeoObject(EarthView::World::Geometry3D::CVisibleObject* visibleObj,EarthView::World::Spatial::CGeoObject* ref_geoObject);
				/// <summary>
				/// 删除二维图形
				/// </summary>
				/// <param name="geometry">二维图形</param>
				/// <returns></returns>
				virtual ev_bool removeGeoObject(EarthView::World::Geometry3D::CVisibleObject* visibleObj,EarthView::World::Spatial::CGeoObject* geoObject);
				/// <summary>
				/// 删除所有二维图形
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void removeAllGeoObjects(EarthView::World::Geometry3D::CVisibleObject* visibleObj);
				/// <summary>
				/// 获得二维图形指针
				/// </summary>
				/// <param name="index">二维图形索引</param>
				/// <returns>二维图形</returns>
				virtual EarthView::World::Spatial::CGeoObject* getGeoObject(EarthView::World::Geometry3D::CVisibleObject* visibleObj,ev_uint32 index) const;
				/// <summary>
				/// 获得三维实体数量
				/// </summary>
				/// <param name=""></param>
				/// <returns>二维图形数量</returns>
				virtual ev_uint64 getGeoObjectCount(EarthView::World::Geometry3D::CVisibleObject* visibleObj) const;
			private:
				ev_uint16 mFactoryType;
			};

		}
	}
}
#endif