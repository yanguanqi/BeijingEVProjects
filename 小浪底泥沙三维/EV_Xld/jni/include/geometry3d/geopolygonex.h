#ifndef GeoPolygonEx_H
#define GeoPolygonEx_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>

#include "geometry3d/geometry3d_config.h"
#include "visibleobject.h"
#include "geometry3d/igeometry3dfactory.h"
#include "geometry3d/featureuserdata.h"
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
			class CMultiPolygon3DExtension;
			class CGeometryClampSceneLayer;
			/// <summary>
			/// 聚合二维的图层，提供在三维中渲染的接口
			/// 管理三维中二维图层
			/// </summary>
			class EV_GEOMETRY3D_DLL CGeoPolygonEx : public EarthView::World::Geometry3D::CVisibleObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CGeoPolygonEx(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="ref_scenemanager">场景管理器</param>
				/// <returns></returns>
				CGeoPolygonEx(EarthView::World::Graphic::CSceneManager* ref_scenemanager);
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="ref_scenemanager">场景管理器</param>
				/// <returns></returns>
				CGeoPolygonEx(EarthView::World::Graphic::CSceneManager* ref_scenemanager,const EVString& groupName);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CGeoPolygonEx();

			public:
				virtual ev_void setSelectable(ev_bool selectable);
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
				/// 挂接三维模型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void render();

				/// <summary>
				/// 反挂接三维模型
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
				///  是否完成加载，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool isLoaded();

				/// <summary>
				///  是否完成挂接，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool isAttached();

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
				/// <summary>
				///  挂接渲染，需要重写
				/// <param name="n">将要挂接的场景节点</param>
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool attachToNode(EarthView::World::Graphic::CNode* n);

				/// <summary>
				///  反挂接，需要重写
				/// </summary>
				/// <returns>成功返回被反挂接的父节点，失败返回NULL</returns>
				virtual EarthView::World::Graphic::CNode* detachFromNode();
				virtual ev_bool attachToScene();
				virtual ev_bool detachFromScene();
				/// <summary>
				/// 设置用户数据
				/// </summary>
				/// <param name="userData">用户数据</param>
				/// <returns></returns>
				virtual ev_void setUserData(EarthView::World::Spatial3D::CFeatureUserData& userData);
				/// <summary>
				/// 返回用户数据
				/// </summary>
				/// <param name=""></param>
				/// <returns>用户数据</returns>
				const EarthView::World::Spatial3D::CFeatureUserData& getUserData()const;

				/// <summary>
				/// 设置某个对象的可见性
				/// </summary>
				/// <param name="visible">obj是否可见</param>
				/// <param name="ref_geoObject">ibj</param>
				/// <returns></returns>
				ev_bool setObjectVisibility(ev_bool visible,EarthView::World::Spatial::CGeoObject* ref_geoObject);
				/// <summary>
				/// 获取图层贴地模式,只有在绘制贴地图层时才有效
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
				C_DISABLE_COPY(CGeoPolygonEx);

			protected:
				EarthView::World::Graphic::CSceneManager* mpSceneManager;
				EVString mGroupName;

				EarthView::World::Geometry3D::CMultiPolygon3DExtension* mpMultiGeoExtension;			
				EarthView::World::Geometry3D::CGeometryClampSceneLayer* mpGeometryClampLayer;
				ev_bool                                    m_bIsLoaded;
				ev_bool                                    m_bIsAttached;
				//
				EarthView::World::Spatial3D::CKmlFeatureUserData mUserData;
			};
			//
			class EV_GEOMETRY3D_DLL CGeoPolygonExFactory : public EarthView::World::Spatial3D::Atlas::IGeometry3DFactory
			{
ev_private: 
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CGeoPolygonExFactory(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				///<param></param>
				/// <returns></returns>
				CGeoPolygonExFactory();
				~CGeoPolygonExFactory();
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
