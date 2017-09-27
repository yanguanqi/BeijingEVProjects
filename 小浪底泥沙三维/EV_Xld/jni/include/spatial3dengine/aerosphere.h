#ifndef _AEROSHPERE_H
#define _AEROSHPERE_H

#include "spatial3dengineconfig.h"
#include "graphic/manualobject.h"
#include "graphic/material.h"
#include "graphic/rendersystem.h"
#include "graphic/mesh.h"
#include "spatial3dengine/geoscenemanager.h"

namespace EarthView
{
    namespace World
    {
        namespace Spatial3D
        {
			struct GPUParams;

			/// <summary>
			/// 大气圈
			/// </summary>
			class EV_Spatial3DEngine_DLL CAerosphere : public EarthView::World::Graphic::CManualObject
            {
            public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="name">名字</param>
				/// <param name="sm">场景管理器</param>
				/// <returns></returns>
                CAerosphere(const EVString& name, EarthView::World::Spatial3D::CGeoSceneManager *sm);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
                virtual ~CAerosphere();
                
            ev_private:
                CAerosphere(EarthView::World::Core::CNameValuePairList* pList);

			protected:
				class CAerosphereSection : public EarthView::World::Graphic::CManualObject::CManualObjectSection
				{
				public:
					CAerosphereSection(CAerosphere *parent, const EVString &materialName, EarthView::World::Graphic::CRenderOperation::OperationType opType, const EVString &groupName);
					CAerosphereSection(CAerosphere *parent, const EVString &materialName, EarthView::World::Graphic::CRenderOperation::OperationType opType);				
					virtual ~CAerosphereSection();
				public:
					/// <summary>
					/// 每次开始渲染的事件
					/// </summary>
					/// <param name="sm">渲染场景</param>
					/// <param name="rsys">渲染系统</param>
					/// <returns>如果自动执行渲染过程返回true,手动执行返回false</returns>
					virtual ev_bool preRender( EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys);
					/// <summary>
					/// 每次完成渲染的事件
					/// </summary>
					/// <param name="sm">渲染场景</param>
					/// <param name="rsys">渲染系统</param>
					/// <returns></returns>
					virtual void postRender( EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys);

				protected:
					Real mOldFarClipDistance;

				};

            public:

				/// <summary>
				/// 重写基类的方法，返回可移动对象类型
				/// </summary>
				/// <returns>可移动对象类型名</returns>
                EVString getMovableType() const;                

                /// <summary>
                /// 唤醒移动对象的摄像机线程用于下一次渲染操作
                /// 内部方法
                /// </summary>
                /// <param name="cam">摄像机</param>
                /// <returns></returns>
                virtual void _notifyCurrentCamera(EarthView::World::Graphic::CCamera *cam); 

				/// <summary>
				/// 初始化
				/// </summary>
				/// <param name="materialName">材质名</param>
				/// <param name="opType">渲染操作类型</param>
				/// <param name="groupName">资源组名</param>
				/// <returns></returns>
				virtual void begin(const EVString &materialName, EarthView::World::Graphic::CRenderOperation::OperationType opType, const EVString &groupName);

				/// <summary>
				/// 获得包围盒
				/// </summary>
				/// <returns>包围盒</returns>
				const EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const;
            protected:
                /// <summary>
                /// 初始化
                /// 内部方法
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void initial();

            protected:
                EarthView::World::Graphic::CMaterialPtr mMaterial;  
				EarthView::World::Spatial::Math::CAxisAlignedBox mBox;
				EarthView::World::Graphic::CCamera* mCurrentCamera;
				EarthView::World::Spatial3D::CGeoSceneManager *mGeoSceneManager;
				friend class CAerosphereSection;
				GPUParams *mParams;
            };
        }
    }
}

#endif
