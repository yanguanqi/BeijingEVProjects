#ifndef KMLPlaceMark_H
#define KMLPlaceMark_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>

#include "geometry3d/geometry3d_config.h"
#include "geometry3d/geometry3dextension/multipoint3dextension.h"
#include "geometry3d/igeometry3dfactory.h"
#include "kmlserializer/geoobjectextension.h"



namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				class CPoint;
			}

			namespace Display
			{
				class CBillboard3DSymbol;
			}

		}
		namespace Graphic
		{
			class CSceneManager;
		}
		namespace Geometry3D
		{
			/// <summary>
			/// 点类型的地理对象扩展到三维类
			/// 管理点类型的地理对象扩展到三维类方法
			/// </summary>
			class EV_GEOMETRY3D_DLL CKmlPlacemark: public EarthView::World::Geometry3D::CMultiPoint3DExtension
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CKmlPlacemark(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="scenemanager">场景管理器</param>
				/// <param name="groupName">资源组名称</param>
				/// <returns></returns>
				CKmlPlacemark(EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geo,EarthView::World::Graphic::CSceneManager* ref_scenemanager,const EVString& groupName);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CKmlPlacemark();

				

				/// <summary>
				///  加载资源，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool load();

				/// <summary>
				///  卸载模型资源，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool unload();

				virtual ev_bool update();

ev_private:	
				ev_void initGeometrySymobl(EarthView::World::Spatial::Kml::CGeoObjectExtension* geo);
				EarthView::World::Spatial::Kml::CGeoObjectExtension* mpGeo;
				EarthView::World::Spatial::Geometry::CPoint* mpGeometry;
				EarthView::World::Spatial::Display::CBillboard3DSymbol* mpSymbol;

			
			};


			//
			class EV_GEOMETRY3D_DLL CKmlPlaceMarkFactory : public EarthView::World::Spatial3D::Atlas::IGeometry3DFactory
			{
ev_private: 
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CKmlPlaceMarkFactory(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				///<param></param>
				/// <returns></returns>
				CKmlPlaceMarkFactory();
				~CKmlPlaceMarkFactory();
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
				//EarthView::World::Graphic::CMovableObject* createLine(EarthView::World::Spatial::Math::CVector3 point,ev_real64 alt);
			};
		
		}
	}
}
#endif
