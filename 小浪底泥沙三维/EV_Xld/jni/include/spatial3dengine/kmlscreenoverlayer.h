#ifndef __KMLSCENEOVERLAYER_H__
#define __KMLSCENEOVERLAYER_H__
#pragma  once

#include "spatial3dengine/spatial3dengineconfig.h"
#include "geometry3d/visibleobject.h"
#include "graphic/scenemanager.h"
#include "graphic/overlay.h"
#include "graphic/paneloverlayelement.h"
#include "kmlserializer/geoobjectextension.h"
#include "geometry3d/igeometry3dfactory.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				class CScreenOverlayerElement;
				class EV_Spatial3DEngine_DLL CScreenOverlayer : public EarthView::World::Geometry3D::CVisibleObject
				{
ev_private: 
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CScreenOverlayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					///<param></param>
					/// <returns></returns>
					CScreenOverlayer(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj,EarthView::World::Graphic::CSceneManager* scenemanager);
					/// <summary>
					/// 析构函数
					/// </summary>
					~CScreenOverlayer();
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
				protected:
					//
					ev_bool                                    m_bIsLoaded;
					ev_bool                                    m_bIsAttached;
					//
				private:
					EarthView::World::Spatial::Kml::CGeoObjectExtension* m_pGeoObject;
					EarthView::World::Spatial3D::CKmlFeatureUserData mUserData;
					EarthView::World::Graphic::COverlay* m_pSceneOverlay;
					EarthView::World::Spatial3D::Atlas::CScreenOverlayerElement* m_pSceneOverlayElemt;
					EarthView::World::Graphic::CSceneManager* m_pSceneMgr;
					void createSceneOverlay(EarthView::World::Graphic::CSceneManager* scenemanager);
					ev_real32 getRealPixel(ev_int32 viewPortValue,EarthView::World::Spatial::Kml::CSceneOverlayData sceneOverlayData);
					void getRealScrollData(ev_int32 viewPortWidth,ev_int32 viewPortHeight,ev_int32 srcWidth,ev_int32 srcHeight,ev_real32& scrollX,ev_real32& scrollY,ev_real32& dstLeft,ev_real32& dstTop);
					void getRealRotateData(ev_int32 viewPortWidth,ev_int32 viewPortHeight,ev_real32& rotateX,ev_real32& rotateY);
					void getRealWidthHeight(ev_int32 viewPortWidth,ev_int32 viewPortHeight,ev_int32 srcWidth,ev_int32 srcHeight,ev_real32& dstWidth,ev_real32& dstHeight);
					EVString m_currentTimeString;
					ev_int32 m_imageWidth;
					ev_int32 m_imageHeight;
				};

				class EV_Spatial3DEngine_DLL CScreenOverlayerFactory : public EarthView::World::Spatial3D::Atlas::IGeometry3DFactory
				{
ev_private: 
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CScreenOverlayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					///<param></param>
					/// <returns></returns>
					CScreenOverlayerFactory();
					~CScreenOverlayerFactory();
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