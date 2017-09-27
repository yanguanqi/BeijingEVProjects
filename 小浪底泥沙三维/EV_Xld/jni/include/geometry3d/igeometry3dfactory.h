#ifndef IGEOMETRY3DFACTORY_H
#define IGEOMETRY3DFACTORY_H
#include <core/memoryallocatedobject.h>
#include <spatialobject/geoobject.h>
#include <geometry3d/visibleobject.h>
#include <kmlserializer/geoobjectextension.h>
#include "graphic/scenemanager.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{
				//
				/// <summary>
				/// 三维类工厂
				/// 管理三维对象的创建和销毁
				/// </summary>
				class EV_GEOMETRY3D_DLL IGeometry3DFactory : public EarthView::World::Core::CAllocatedObject
				{
ev_private: 
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					IGeometry3DFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					IGeometry3DFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~IGeometry3DFactory();
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
					/// <returns>三维实体数量</returns>
					virtual ev_uint64 getGeoObjectCount(EarthView::World::Geometry3D::CVisibleObject* visibleObj) const;
				};
			}
		}
	}
}
#endif