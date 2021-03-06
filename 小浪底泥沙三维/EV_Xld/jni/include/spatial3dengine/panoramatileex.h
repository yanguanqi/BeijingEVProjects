﻿#ifndef CPANORAMTILEEXEX_H
#define CPANORAMTILEEXEX_H
#include <geometry3d/visibleobject.h>
#include "panoramatile.h"
#include <graphic/scenemanager.h>
#include <graphic/node.h>
#include <kmlserializer/geoobjectextension.h>
#include <geometry3d/igeometry3dfactory.h>

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				class EV_Spatial3DEngine_DLL CPanoramaTileEx : public EarthView::World::Geometry3D::CVisibleObject
				{
ev_private: 
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CPanoramaTileEx(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					///<param></param>
					/// <returns></returns>
					CPanoramaTileEx(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj,EarthView::World::Graphic::CSceneManager* scenemanager);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CPanoramaTileEx();

					virtual ev_void setSelectable(ev_bool selectable);

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

					virtual ev_bool update();
					//
					EarthView::World::Spatial3D::Atlas::CPanoramaTile* getPanoramaTile();
ev_private:	

					ev_void initGeometrySymobl( EarthView::World::Spatial::Kml::CGeoObjectExtension* geo );

					EarthView::World::Spatial3D::Atlas::CPanoramaTile*   m_pPanoram;
					EarthView::World::Spatial::Kml::CGeoObjectExtension* m_pGeoObject;
					EarthView::World::Spatial3D::CKmlFeatureUserData mUserData;
					//
					ev_bool                                    m_bIsLoaded;
					ev_bool                                    m_bIsAttached;
					//
				};
				class EV_Spatial3DEngine_DLL CPanoramaTileExFactory : public EarthView::World::Spatial3D::Atlas::IGeometry3DFactory
				{
ev_private: 
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CPanoramaTileExFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					///<param></param>
					/// <returns></returns>
					CPanoramaTileExFactory();
					~CPanoramaTileExFactory();
					/// <summary>
					/// 获取工厂类型
					/// </summary>
					/// <returns>工厂类型</returns>
					virtual ev_uint16       getFactoryType();
					virtual EarthView::World::Geometry3D::VisibleObjects createRenderable(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj,EarthView::World::Graphic::CSceneManager* scenemanager);
					virtual void            destoryRenderable(EarthView::World::Geometry3D::CVisibleObject* visitObj);
				private:
					ev_uint16 mFactoryType;
				};
			}
		}
	}
}
#endif