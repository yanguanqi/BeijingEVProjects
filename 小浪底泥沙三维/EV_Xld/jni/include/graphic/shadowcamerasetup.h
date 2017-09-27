#ifndef __ShadowCameraSetup_H__
#define __ShadowCameraSetup_H__
#include "graphic/graphic_config.h"
#include <core/sharedptr.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CSceneManager;
            class CCamera;
            class CViewport;
            class CLight;
            /***** This class allows you to plug in new ways to define the camera setup when
            	rendering and projecting shadow textures.
            @remarks
            	The default projection used when rendering shadow textures is a uniform
            	frustum. This is pretty straight forward but doesn't make the best use of
            	the space in the shadow map since texels closer to the camera will be larger,
            	resulting in 'jaggies'. There are several ways to distribute the texels
            	in the shadow texture differently, and this class allows you to override
            	that.
            @par
            	EV_World is provided with several alternative shadow camera setups, including
            	LiSPSM (CLiSPSMShadowCameraSetup) and EarthView::World::Spatial::Math::CPlane Optimal (CPlaneOptimalShadowCameraSetup).
            	Others can of course be written to incorporate other algorithms. All you
            	CSceneManager::setShadowCameraSetup (global) or CLight::setCustomShadowCameraSetup
            	(per light). In both cases the instance is wrapped in a CSharedPtr which means
            	it will  be deleted automatically when no more references to it exist.
            @note
                Shadow map matrices, being projective matrices, have 15 degrees of freedom.
            	3 of these degrees of freedom are fixed by the light's position.  4 are used to
            	affinely affect z values.  6 affinely affect u,v sampling.  2 are projective
            	degrees of freedom.  This class is meant to allow custom methods for
            	handling optimization.
            ****/
            /// <summary>
            /// 摄像机阴影类
            /// 可以使用该类通过定义摄像机参数来渲染和改变投射的阴影纹理
            /// </summary>
            class EV_GRAPHIC_DLL CShadowCameraSetup : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CShadowCameraSetup(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CShadowCameraSetup();  			///这个类以前是抽象类
            public:
                //// CFunction to implement -- must set the shadow camera properties
                /// <summary>
                /// 摄像机阴影类默认函数
                /// </summary>
                /// <param name="sm"></param>
                /// <param name="cam"></param>
                /// <param name="vp"></param>
                /// <param name="light"></param>
                /// <param name="texCam"></param>
                /// <param name="iteration"></param>
                /// <returns></returns>
                virtual void getShadowCamera (_in const EarthView::World::Graphic::CSceneManager *sm, _in const EarthView::World::Graphic::CCamera *cam,
                                              _in const EarthView::World::Graphic::CViewport *vp, _in const EarthView::World::Graphic::CLight *light, EarthView::World::Graphic::CCamera *texCam, ev_size_t iteration) const;
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CShadowCameraSetup();
            };
            /***** Implements default shadow camera setup
                @remarks
                    This implements the default shadow camera setup algorithm.  This is what might
            		be referred to as "normal" shadow mapping.
            ****/
            /// <summary>
            /// 默认摄像机阴影类
            /// 可以使用该类实现默认摄像机阴影的设置
            /// </summary>
            class EV_GRAPHIC_DLL CDefaultShadowCameraSetup : public EarthView::World::Graphic::CShadowCameraSetup
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CDefaultShadowCameraSetup(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CDefaultShadowCameraSetup();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CDefaultShadowCameraSetup();
                //// Default shadow camera setup
                virtual void getShadowCamera (const EarthView::World::Graphic::CSceneManager *sm, const EarthView::World::Graphic::CCamera *cam,
                                              const EarthView::World::Graphic::CViewport *vp, const EarthView::World::Graphic::CLight *light, EarthView::World::Graphic::CCamera *texCam, ev_size_t iteration) const;
            };
            /****typedef CSharedPtr<EarthView::World::Graphic::CShadowCameraSetup> EarthView::World::Graphic::ShadowCameraSetupPtr;****/
            class EV_GRAPHIC_DLL ShadowCameraSetupPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CShadowCameraSetup>
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                ShadowCameraSetupPtr(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ShadowCameraSetupPtr();
                explicit ShadowCameraSetupPtr(EarthView::World::Graphic::CShadowCameraSetup *ref_rep);
                explicit ShadowCameraSetupPtr(EarthView::World::Graphic::CShadowCameraSetup *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod)
                    : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CShadowCameraSetup>(ref_rep, inFreeMethod) {}
                ShadowCameraSetupPtr(const ShadowCameraSetupPtr &r);

                EarthView::World::Graphic::CShadowCameraSetup *get() const;
            };
        }
    }
}

#endif

