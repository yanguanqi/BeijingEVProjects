#ifndef _GEO_CAMERA_LISTENER_H_
#define _GEO_CAMERA_LISTENER_H_

#include "spatial3dengine/spatial3dengineconfig.h"

#include "spatial3dengine/globecamera.h"


namespace EarthView
{
    namespace World
    {
        namespace Spatial3D
        {
			/// <summary>
			/// 相机参数变化监听器，相机参数变化之后会通知所有三维图层刷新
			/// </summary>
			class EV_Spatial3DEngine_DLL CGeoCameraListener : public EarthView::World::Spatial3D::CGlobeCamera::CGlobeCameraListener
			{
            public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="ref_pCam">被监听的虚拟相机</param>
				/// <returns></returns>
                CGeoCameraListener(_in EarthView::World::Spatial3D::CGlobeCamera* ref_pCam);
			ev_private:
				CGeoCameraListener(_in EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 析构函数
				/// </summary>
                virtual ~CGeoCameraListener();
            
            public:
				/// <summary>
				/// 重写的虚函数，当相机参数发生变化时会被调用
				/// </summary>
				/// <param name="camera">被监听的虚拟相机</param>
				/// <returns></returns>
                virtual void cameraParamChanged(_in EarthView::World::Graphic::CCamera* camera);

            ev_internal:                
                EarthView::World::Spatial3D::CGlobeCamera* mCamera;
                
            };
        }
    }
}

#endif
