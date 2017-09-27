#ifndef __ShadowCameraSetupFocused_H__
#define __ShadowCameraSetupFocused_H__
#include "graphic/graphic_config.h"
#include <mathengine/polygon3d.h>

#include "shadowcamerasetup.h"
#include "convexbody.h"
#include <mathengine/axisalignedbox.h>

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CVector3;
				class CAxisAlignedBox;
			}
		}
	}
}

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CConvexBody;

            /***** Implements the uniform shadow mapping algorithm in focused mode.
            @remarks
            	Differs from the default shadow mapping projection in that it focuses the
            	shadow map on the visible areas of the scene. This results in better
            	shadow map texel usage, at the expense of some 'swimming' of the shadow
            	texture on receivers as the basis is constantly being reevaluated.
            @note
            	Original implementation by Matthias Fink <matthias.fink@web.de>, 2006.
            ****/
            /// <summary>
            /// 焦点摄像机阴影类
            /// 在焦点模式下实现一致的阴影图算法
            /// </summary>
            class EV_GRAPHIC_DLL CFocusedShadowCameraSetup : public EarthView::World::Graphic::CShadowCameraSetup
            {
            protected:
                /***** Transform to or from light space as defined by Wimmer et al.
                @remarks
                Point and spot lights need to be converted to directional lights to enable a 1:1
                light mapping. Otherwise a directional light may become a point light or a point
                sink (opposite of a light source) or point/spot lights may become directional lights
                or light sinks. The light direction is always -y.
                ****/
                static const EarthView::World::Spatial::Math::CMatrix4 msNormalToLightSpace;
                static const EarthView::World::Spatial::Math::CMatrix4 msLightSpaceToNormal;
                /***** Temporary preallocated frustum to set up a projection matrix in
                ::calculateShadowMappingMatrix()
                ****/
                CFrustum *mTempFrustum;
                /***** Temporary preallocated camera to set up a light frustum for clipping in ::calculateB.
                ****/
                EarthView::World::Graphic::CCamera *mLightFrustumCamera;
                mutable ev_bool mLightFrustumCameraCalculated;
                //// Use tighter focus region?
                ev_bool mUseAggressiveRegion;
            ev_internal:
                /***** Internal class holding a point list representation of a convex body.
                ****/

                class EV_GRAPHIC_DLL CPointListBody : public EarthView::World::Core::CBaseObject
                {
                private:
                    EarthView::World::Spatial::Math::VertexList mBodyPoints;
                    EarthView::World::Spatial::Math::CAxisAlignedBox		mAAB;
                ev_private:
                    CPointListBody(EarthView::World::Core::CNameValuePairList *pList);
                public:
                    CPointListBody();
                    CPointListBody(const EarthView::World::Graphic::CConvexBody &body);
                    ~CPointListBody();
                    /***** Merges a second EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody into this one.
                    ****/
                    void merge(const EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody &plb);
                    /***** Builds a point list body from a 'real' body.
                    @remarks
                    Inserts all vertices from a body into the point list with or without adding duplicate vertices.
                    ****/
                    void build(const EarthView::World::Graphic::CConvexBody &body, ev_bool filterDuplicates = true);
                    /***** Builds a EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody from a Body and includes all the space in a given direction.
                    @remarks
                    Intersects the bounding box with a ray from each available point of the body with the given
                    direction. Base and intersection points are stored in a CPointListBody structure.
                    @note
                    Duplicate vertices are not filtered.
                    @note
                    Body is not checked for correctness.
                    ****/
                    void buildAndIncludeDirection(const EarthView::World::Graphic::CConvexBody &body,
                                                  Real extrudeDist, const EarthView::World::Spatial::Math::CVector3 &dir);
                    /***** Returns the bounding box representation.
                    ****/
                    const EarthView::World::Spatial::Math::CAxisAlignedBox &getAAB() const;

                    /***** Adds a specific point to the body list.
                    ****/
                    void addPoint(const EarthView::World::Spatial::Math::CVector3 &point);
                    /***** Adds all points of an AAB.
                    ****/
                    void addAAB(const EarthView::World::Spatial::Math::CAxisAlignedBox &aab);
                    /***** Returns a point.
                    ****/
                    const EarthView::World::Spatial::Math::CVector3 &getPoint(ev_size_t cnt) const;
                    /***** Returns the point count.
                    ****/
                    ev_size_t getPointCount() const;
                    /***** Resets the body.
                    ****/
                    void reset();
                };
                /// Persistent calculations to prevent reallocation
                mutable EarthView::World::Graphic::CConvexBody mBodyB;
                mutable EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody mPointListBodyB;
                mutable EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody mPointListBodyLVS;
            protected:
                /***** Calculates the standard shadow mapping matrix.
                @remarks
                Provides the view and projection matrix for standard shadow mapping.
                @note
                You can choose which things you want to have: view matrix and/or projection
                matrix and/or shadow camera. Passing a NULL value as parameter ignores the
                generation of this specific value.
                @param sm: scene manager
                @param cam: currently active camera
                @param light: currently active light
                @param out_view: calculated uniform view shadow mapping matrix (may be NULL)
                @param out_proj: calculated uniform projection shadow mapping matrix (may be NULL)
                @param out_cam: calculated uniform shadow camera (may be NULL)
                ****/
                void calculateShadowMappingMatrix(const EarthView::World::Graphic::CSceneManager &sm, const EarthView::World::Graphic::CCamera &cam,
                                                  const EarthView::World::Graphic::CLight &light, EarthView::World::Spatial::Math::CMatrix4 *out_view,
                                                  EarthView::World::Spatial::Math::CMatrix4 *out_proj, EarthView::World::Graphic::CCamera *out_cam) const;
                /***** Calculates the intersection bodyB.
                @remarks
                The intersection bodyB consists of the concatenation the cam frustum clipped
                by the scene bounding box followed by a convex hullification with the light's
                position and the clipping with the scene bounding box and the light frustum:
                ((V \cap S) + l) \cap S \cap L (\cap: convex intersection, +: convex hull
                operation).
                For directional lights the bodyB is assembled out of the camera frustum
                clipped by the scene bounding box followed by the extrusion of all available
                bodyB points towards the negative light direction. The rays are intersected
                by a maximum bounding box and added to the bodyB points to form the final
                intersection bodyB point list.
                @param sm: scene manager
                @param cam: currently active camera
                @param light: currently active light
                @param sceneBB: scene bounding box for clipping operations
                @param receiverAABB: bounding information for just the receivers
                @param out_bodyB: final intersection bodyB point list
                ****/
                void calculateB(const EarthView::World::Graphic::CSceneManager &sm, const EarthView::World::Graphic::CCamera &cam, const EarthView::World::Graphic::CLight &light,
                                const EarthView::World::Spatial::Math::CAxisAlignedBox &sceneBB, const EarthView::World::Spatial::Math::CAxisAlignedBox &receiverBB, EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody *out_bodyB) const;
                /***** Calculates the bodyLVS.
                @remarks
                Calculates the bodyLVS which consists of the convex intersection operation
                affecting the light frustum, the view frustum, and the current scene bounding
                box is used to find suitable positions in the viewer's frustum to build the
                rotation matrix L_r. This matrix is applied after the projection matrix L_p to
                avoid an accidental flip of the frustum orientation for views tilted with
                respect to the shadow map.
                @param scene: holds all potential occluders / receivers as one single bounding box
                of the currently active scene node
                @param cam: current viewer camera
                @param light: current light
                @param out_LVS: intersection body LVS (world coordinates)
                ****/
                void calculateLVS(const EarthView::World::Graphic::CSceneManager &sm, const EarthView::World::Graphic::CCamera &cam, const EarthView::World::Graphic::CLight &light,
                                  const EarthView::World::Spatial::Math::CAxisAlignedBox &sceneBB, EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody *out_LVS) const;
                /*****	Returns the projection view direction.
                @remarks
                After the matrix L_p is applied the orientation of the light space may tilt for
                non-identity projections. To prevent a false shadow cast the real view direction
                is evaluated and applied to the light matrix L.
                @param lightSpace: matrix of the light space transformation
                @param cam: current viewer camera
                @param bodyLVS: intersection body LVS (relevant space in front of the camera)
                ****/
                EarthView::World::Spatial::Math::CVector3 getLSProjViewDir(const EarthView::World::Spatial::Math::CMatrix4 &lightSpace, const EarthView::World::Graphic::CCamera &cam,
                                          const EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody &bodyLVS) const;
                /***** Returns a valid near-point seen by the camera.
                @remarks
                Returns a point that is situated near the camera by analyzing the bodyLVS that
                contains all the relevant scene space in front of the light and the camera in
                a point list array. The view matrix is relevant because the nearest point in
                front of the camera should be determined.
                @param viewMatrix: view matrix of the current camera
                @param bodyLVS: intersection body LVS (relevant space in front of the camera)
                ****/
                EarthView::World::Spatial::Math::CVector3 getNearCameraPoint_ws(const EarthView::World::Spatial::Math::CMatrix4 &viewMatrix,
                                               const EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody &bodyLVS) const;
                /***** Transforms a given body to the unit cube (-1,-1,-1) / (+1,+1,+1) with a specific
                shadow matrix enabled.
                @remarks
                Transforms a given point list body object with the matrix m and then maps its
                extends to a (-1,-1,-1) / (+1,+1,+1) unit cube
                @param m: transformation matrix applied on the point list body
                @param body: contains the points of the extends of all valid scene elements which
                are mapped to the unit cube
                ****/
                EarthView::World::Spatial::Math::CMatrix4 transformToUnitCube(const EarthView::World::Spatial::Math::CMatrix4 &m, const EarthView::World::Graphic::CFocusedShadowCameraSetup::CPointListBody &body) const;
                /***** Builds a view matrix.
                @remarks
                Builds a standard view matrix out of a given position, direction and up vector.
                ****/
                EarthView::World::Spatial::Math::CMatrix4 buildViewMatrix(const EarthView::World::Spatial::Math::CVector3 &pos, const EarthView::World::Spatial::Math::CVector3 &dir, const EarthView::World::Spatial::Math::CVector3 &up) const;
            public:
                /// <summary>
                /// 默认构造函数
                /// 在这里设置摄像机和临时的椎体
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CFocusedShadowCameraSetup();
                /// <summary>
                /// 析构函数
                /// 在这里清除摄像机设置和临时的椎体
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CFocusedShadowCameraSetup();
                /***** Returns a uniform shadow camera with a focused view.
                ****/
                virtual void getShadowCamera(const EarthView::World::Graphic::CSceneManager *sm, const EarthView::World::Graphic::CCamera *cam,
                                             const EarthView::World::Graphic::CViewport *vp, const EarthView::World::Graphic::CLight *light, EarthView::World::Graphic::CCamera *texCam, ev_size_t iteration) const;
                /***** Sets whether or not to use the more aggressive approach to deciding on
                	the focus region or not.
                @note
                	There are 2 approaches that can  be used to define the focus region,
                	the more aggressive way introduced by Wimmer et al, or the original
                	way as described in Stamminger et al. Wimmer et al's way tends to
                	come up with a tighter focus region but in rare cases (mostly highly
                	glancing angles) can cause some shadow casters to be clipped
                	incorrectly. By default the more aggressive approach is used since it
                	leads to significantly better results in most cases, but if you experience
                	clipping issues, you can use the less aggressive version.
                @param aggressive True to use the more aggressive approach, false otherwise.
                ****/
                /// <summary>
                /// 设置是否对焦点区域使用更有效地方法
                /// </summary>
                /// <param name="aggressive">更有效的方法</param>
                /// <returns></returns>
                void setUseAggressiveFocusRegion(ev_bool aggressive);
                /// <summary>
                /// 获取是否对焦点区域使用更有效地方法
                /// </summary>
                /// <param name=""></param>
                /// <returns>为空返回true，否则返回false</returns>
                ev_bool getUseAggressiveFocusRegion() const;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CFocusedShadowCameraSetup(_in EarthView::World::Core::CNameValuePairList *pList);
            };
            /***** @} ****/
            /***** @} ****/
        }
    }
}

#endif

