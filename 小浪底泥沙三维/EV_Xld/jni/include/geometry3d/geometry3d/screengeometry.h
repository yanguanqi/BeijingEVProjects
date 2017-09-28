#ifndef EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_SCREENGEOMETRY_H
#define EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_SCREENGEOMETRY_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>

#include "graphic/scenemanager.h"
#include "graphic/viewport.h"
#include "graphic/camera.h"

#include "geometry3d/geometry3d_config.h"
#include "geometry3d/geometry3d/simplerenderableex.h"

namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			/// <summary>
			/// 屏幕矢量坐标类型
			/// <summary>
			enum  ScreenGeometryCoordinateType
			{
				/// <summary>
				/// 采用像素坐标，原点为视口左上角
				/// <summary>
				SGCT_Pixel = 0,
				/// <summary>
				/// 采用单位坐标原点为视口中心，x：从左至右-1.0-1.0,y：从下至上-1.0-1.0
				/// <summary>
				SGCT_Identity
			};

			/// <summary>
			///屏幕矢量基类
			/// </summary>
			class EV_GEOMETRY3D_DLL CScreenGeometry : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				/// <summary>
				/// 构造函数,必须在场景打开后调用,默认情况下只在主视口渲染,坐标值参考为主视口
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CScreenGeometry(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数,必须在场景打开后调用,默认情况下只在主视口渲染,坐标值参考为主视口
				/// </summary>
				/// <param name="scenemanager">场景管理器</param>
				/// <returns></returns>
				CScreenGeometry(EarthView::World::Graphic::CSceneManager* ref_scenemanager);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CScreenGeometry();

			public:		
				/// <summary>
				/// 设置坐标类型,必须在begin之前设置才有效
				/// </summary>
				/// <param name="type">类型</param>
				/// <returns></returns>
				void setCoordinateType(ScreenGeometryCoordinateType type);
				/// <summary>
				/// 获取坐标类型
				/// </summary>
				/// <returns></returns>
				ScreenGeometryCoordinateType getCoordinateType();

				/// <summary>
				/// 增加渲染屏幕矢量的子视口
				/// </summary>
				/// <param name="type">类型</param>
				/// <returns></returns>
				void addChildViewport(EarthView::World::Graphic::CViewport* ref_viewport);

				/// <summary>
				/// 相机是否渲染此屏幕矢量
				/// </summary>
				/// <param name="type">类型</param>
				/// <returns></returns>
				ev_bool hasChildViewport(EarthView::World::Graphic::CViewport* ref_viewport);

				/// <summary>
				/// 移除渲染屏幕矢量的子视口相机
				/// </summary>
				/// <param name="type">类型</param>
				/// <returns></returns>
				ev_bool removeChildViewport(EarthView::World::Graphic::CViewport* ref_viewport);

				/// <summary>
				/// 设置主视口是否渲染此对象
				/// </summary>
				/// <param name="type">类型</param>
				/// <returns></returns>
				ev_bool setVisibleInGlobeViewport(ev_bool value);

				/// <summary>
				/// 挂接
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void render();

				/// <summary>
				/// 反挂接
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void derender();
				
				/// <summary>
				/// 设置是否可见               
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <returns></returns>
				virtual void setVisible(ev_bool visible);

				/// <summary>
				/// 是否可见               
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_bool getVisible() const;

				/// <summary>
				/// 设置渲染队列组信息
				/// </summary>
				/// <param name="queueID">队列ID号</param>
				/// <returns></returns>
				virtual void setRenderQueueGroup(ev_uint8 queueID);
				/// <summary>
				/// 设置渲染队列组信息和队列优先级
				/// </summary>
				/// <param name="queueID">队列ID号</param>
				/// <param name="priority">优先级</param>
				/// <returns></returns>
				virtual void setRenderQueueGroupAndPriority(ev_uint8 queueID, ev_uint16 priority);
				/// <summary>
				/// 获取该实体的渲染队列组
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_uint8 getRenderQueueGroup() const;
				/// <summary>
				/// 获取材质				
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
				virtual EarthView::World::Graphic::CMaterialPtr& getMaterial();
				/// <summary>
				/// 闪烁
				/// <param name="color">高亮颜色</param>
				/// <param name="hightLight_ms">高亮时长(单位：毫秒)</param>
				/// <param name="normally_ms">非高亮时长(单位：毫秒)</param>
				/// <param name="flashCount">闪烁次数</param>
				/// </summary>
				/// <returns></returns>
				virtual void flash(const EarthView::World::Graphic::CColourValue& color, ev_uint32 hightLight_ms, ev_uint32 normally_ms,ev_uint32 flashCount);
				/// <summary>
				/// 结束闪烁
				/// </summary>
				/// <returns></returns>
				virtual void endFlash();

			protected:

				class CScreenGeometrySceneManagerListener : public EarthView::World::Graphic::CSceneManager::CSceneManagerListener
				{
				public:
					CScreenGeometrySceneManagerListener(CScreenGeometry* parent);

					 virtual void preFindVisibleObjects(EarthView::World::Graphic::CSceneManager *source, EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, EarthView::World::Graphic::CViewport *v);
					 virtual void postFindVisibleObjects(EarthView::World::Graphic::CSceneManager *source,EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, EarthView::World::Graphic::CViewport *v);
				private:
					CScreenGeometry* mParent;
				};

				class CScreenGeometryViewportListener : public EarthView::World::Graphic::CViewport::CViewportListener
				{
				public:
					CScreenGeometryViewportListener(CScreenGeometry* parent);

					virtual void viewportDimensionsChanged(EarthView::World::Graphic::CViewport *viewport);
				private:
					CScreenGeometry* mParent;
				};

				void initial();

				virtual void updateBuffer(EarthView::World::Graphic::CViewport *viewport);

				virtual void setInternalVisible(ev_bool visible);

				static EarthView::World::Graphic::CMaterialPtr createOrGetDefaultMaterial();

				void preRenderScene( _in EarthView::World::Graphic::CViewport*viewport);
				void postRenderScene( _in EarthView::World::Graphic::CViewport*viewport);

				Real change2PiexlCoords(Real vw,Real vh,Real w,EarthView::World::Spatial::Math::CVector2& p);
				void change2IdentityCoords(Real vw,Real vh,EarthView::World::Spatial::Math::CVector3& p);

			private:
				/// <summary>
				/// 复制构造函数
				/// </summary>
				/// <param name="obj">对象</param>
				/// <returns></returns>
				CScreenGeometry(const CScreenGeometry& obj);
			protected:
				ScreenGeometryCoordinateType mCoordinateType;

				EarthView::World::Graphic::CSceneManager* mpSceneManager;

				EarthView::World::Graphic::CViewport* mpGlobeViewport;

				EarthView::World::Graphic::CMaterialPtr mpMaterial;
				CSimpleRenderableEx* mpRenderable;

				friend class CScreenGeometrySceneManagerListener;
				set<EarthView::World::Graphic::CViewport*> mSetRenderViewports;
				CScreenGeometrySceneManagerListener* mpSceneManagerListener;
				CScreenGeometryViewportListener* mpViewportListener;

				ev_bool mVisible;
			};
		}
	}
}
#endif
