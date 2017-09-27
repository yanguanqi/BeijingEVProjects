#ifndef __PatchSurface_H__
#define __PatchSurface_H__
#include "graphic/graphic_config.h"
#include "mathengine/vector3.h"
#include "mathengine/axisalignedbox.h"
#include "hardwarevertexbuffer.h"
#include "hardwareindexbuffer.h"


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {


            /***** A surface which is defined by curves of some kind to form a patch, e.g. a Bezier patch.
                @remarks
                    This object will take a list of control points with various assorted data, and will
                    subdivide it into a patch mesh. Currently only Bezier curves are supported for defining
                    the surface, but other techniques such as NURBS would follow the same basic approach.
            ****/
            class EV_GRAPHIC_DLL CPatchSurface : public EarthView::World::Core::CAllocatedObject
            {
            public:
                CPatchSurface();
            ev_private:
                CPatchSurface(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                ~CPatchSurface();
                enum PatchSurfaceType
                {
                    //// A patch defined by a set of bezier curves
                    PST_BEZIER
                };
                //// Constant for indicating automatic determination of subdivision level for patches
                enum SubdivisionLevel
                {
                    AUTO_LEVEL = -1
                };
                enum VisibleSide
                {
                    //// The side from which u goes right and v goes up (as in texture coords)
                    VS_FRONT,
                    //// The side from which u goes right and v goes down (reverse of texture coords)
                    VS_BACK,
                    //// Both sides are visible - warning this creates 2x the number of triangles and adds extra overhead for calculating normals
                    VS_BOTH
                };
                /***** Sets up the surface by defining it's control points, type and initial subdivision level.
                    @remarks
                        This method initialises the surface by passing it a set of control points. The type of curves to be used
                        are also defined here, although the only supported option currently is a bezier patch. You can also
                        specify a global subdivision level here if you like, although it is recommended that the parameter
                        is left as AUTO_LEVEL, which means the system decides how much subdivision is required (based on the
                        curvature of the surface)
                    @param
                        controlPointBuffer A pointer to a buffer containing the vertex data which defines control points
                        of the curves rather than actual vertices. Note that you are expected to provide not
                        just position information, but potentially normals and texture coordinates too. The
                        format of the buffer is defined in the EarthView::World::Graphic::CVertexDeclaration parameter
                    @param
                        declaration EarthView::World::Graphic::CVertexDeclaration describing the contents of the buffer.
                        Note this declaration must _only_ draw on buffer source 0!
                    @param
                        width Specifies the width of the patch in control points.
                    @param
                        height Specifies the height of the patch in control points.
                    @param
                        pType The type of surface - currently only PST_BEZIER is supported
                    @param
                        uMaxSubdivisionLevel,vMaxSubdivisionLevel If you want to manually set the top level of subdivision,
                        do it here, otherwise let the system decide.
                    @param
                        visibleSide Determines which side of the patch (or both) triangles are generated for.
                ****/
                /****void defineSurface(void* controlPointBuffer,
                    EarthView::World::Graphic::CVertexDeclaration *declaration, ev_size_t width, ev_size_t height,
                    EarthView::World::Graphic::CPatchSurface::PatchSurfaceType pType = PST_BEZIER,
                    ev_size_t uMaxSubdivisionLevel = AUTO_LEVEL, ev_size_t vMaxSubdivisionLevel = AUTO_LEVEL,
                    EarthView::World::Graphic::CPatchSurface::VisibleSide visibleSide = VS_FRONT);****/
                void defineSurface(_inout void *controlPointBuffer,
                                   EarthView::World::Graphic::CVertexDeclaration *ref_declaration, ev_size_t width, ev_size_t height,
                                   EarthView::World::Graphic::CPatchSurface::PatchSurfaceType pType ,
                                   ev_size_t uMaxSubdivisionLevel , ev_size_t vMaxSubdivisionLevel ,
                                   EarthView::World::Graphic::CPatchSurface::VisibleSide visibleSide );
                void defineSurface(_inout void *controlPointBuffer,
                                   EarthView::World::Graphic::CVertexDeclaration *ref_declaration, ev_size_t width, ev_size_t height,
                                   EarthView::World::Graphic::CPatchSurface::PatchSurfaceType pType ,
                                   ev_size_t uMaxSubdivisionLevel , ev_size_t vMaxSubdivisionLevel );
                void defineSurface(_inout void *controlPointBuffer,
                                   EarthView::World::Graphic::CVertexDeclaration *ref_declaration, ev_size_t width, ev_size_t height,
                                   EarthView::World::Graphic::CPatchSurface::PatchSurfaceType pType ,
                                   ev_size_t uMaxSubdivisionLevel);
                void defineSurface(_inout void *controlPointBuffer,
                                   EarthView::World::Graphic::CVertexDeclaration *ref_declaration, ev_size_t width, ev_size_t height,
                                   EarthView::World::Graphic::CPatchSurface::PatchSurfaceType pType);
                void defineSurface(_inout void *controlPointBuffer,
                                   EarthView::World::Graphic::CVertexDeclaration *ref_declaration, ev_size_t width, ev_size_t height);
                /***** Based on a previous call to defineSurface, establishes the number of vertices required
                    to hold this patch at the maximum detail level.
                    @remarks This is useful when you wish to build the patch into external vertex / index buffers.

                ****/
                ev_size_t getRequiredVertexCount() const;
                /***** Based on a previous call to defineSurface, establishes the number of indexes required
                    to hold this patch at the maximum detail level.
                    @remarks This is useful when you wish to build the patch into external vertex / index buffers.

                ****/
                ev_size_t getRequiredIndexCount() const;
                /***** Gets the current index count based on the current subdivision level. ****/
                ev_size_t getCurrentIndexCount() const;
                //// Returns the index offset used by this buffer to write data into the buffer
                ev_size_t getIndexOffset() const;
                //// Returns the vertex offset used by this buffer to write data into the buffer
                ev_size_t getVertexOffset() const;


                /***** Gets the bounds of this patch, only valid after calling defineSurface. ****/
                const EarthView::World::Spatial::Math::CAxisAlignedBox &getBounds() const;
                /***** Gets the radius of the bounding sphere for this patch, only valid after defineSurface
                has been called. ****/
                Real getBoundingSphereRadius() const;
                /***** Tells the system to build the mesh relating to the surface into externally created
                    buffers.
                    @remarks
                        The EarthView::World::Graphic::CVertexDeclaration of the vertex buffer must be identical to the one passed into
                        defineSurface.  In addition, there must be enough space in the buffer to
                        accommodate the patch at full detail level; you should call getRequiredVertexCount
                        and getRequiredIndexCount to determine this. This method does not create an internal
                        mesh for this patch and so getMesh will return null if you call it after building the
                        patch this way.
                    @param destVertexBuffer The destination vertex buffer in which to build the patch.
                    @param vertexStart The offset at which to start writing vertices for this patch
                    @param destIndexBuffer The destination index buffer in which to build the patch.
                    @param vertexStart The offset at which to start writing indexes for this patch

                ****/
                void build(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr destVertexBuffer, ev_size_t vertexStart,
                           EarthView::World::Graphic::CHardwareIndexBufferSharedPtr destIndexBuffer, ev_size_t indexStart);
                /***** Alters the level of subdivision for this surface.
                    @remarks
                        This method changes the proportionate detail level of the patch; since
                        the U and V directions can have different subdivision levels, this method
                        takes a single Real value where 0 is the minimum detail (the control points)
                        and 1 is the maximum detail level as supplied to the original call to
                        defineSurface.
                ****/
                void setSubdivisionFactor(Real factor);
                /***** Gets the current level of subdivision. ****/
                Real getSubdivisionFactor() const;
                void *getControlPointBuffer() const;
                /***** Convenience method for telling the patch that the control points have been
                    deleted, since once the patch has been built they are not required. ****/
                void notifyControlPointBufferDeallocated();
            protected:
                //// Vertex declaration describing the control point buffer
                EarthView::World::Graphic::CVertexDeclaration *mDeclaration;
                //// Buffer containing the system-memory control points
                void *mControlPointBuffer;
                //// Type of surface
                EarthView::World::Graphic::CPatchSurface::PatchSurfaceType mType;
                //// Width in control points
                ev_size_t mCtlWidth;
                //// Height in control points
                ev_size_t mCtlHeight;
                //// TotalNumber of control points
                ev_size_t mCtlCount;
                //// U-direction subdivision level
                ev_size_t mULevel;
                //// V-direction subdivision level
                ev_size_t mVLevel;
                //// Max subdivision level
                ev_size_t mMaxULevel;
                ev_size_t mMaxVLevel;
                //// Width of the subdivided mesh (big enough for max level)
                ev_size_t mMeshWidth;
                //// Height of the subdivided mesh (big enough for max level)
                ev_size_t mMeshHeight;
                //// Which side is visible
                EarthView::World::Graphic::CPatchSurface::VisibleSide mVSide;
                Real mSubdivisionFactor;
                vector<EarthView::World::Spatial::Math::CVector3> mVecCtlPoints;
                /***** Internal method for finding the subdivision level given 3 control points.
                ****/
                ev_size_t findLevel(_inout EarthView::World::Spatial::Math::CVector3 &a, _inout EarthView::World::Spatial::Math::CVector3 &b, _inout EarthView::World::Spatial::Math::CVector3 &c);
                void distributeControlPoints(_inout void *lockedBuffer);
                void subdivideCurve(_inout void *lockedBuffer, ev_size_t startIdx, ev_size_t stepSize, ev_size_t numSteps, ev_size_t iterations);
                void interpolateVertexData(_inout void *lockedBuffer, ev_size_t leftIndex, ev_size_t rightIndex, ev_size_t destIndex);
                void makeTriangles();
                ////ev_size_t getAutoULevel(ev_bool forMax = false);
                ev_size_t getAutoULevel(ev_bool forMax);
                ev_size_t getAutoULevel();
                ////ev_size_t getAutoVLevel(ev_bool forMax = false);
                ev_size_t getAutoVLevel(ev_bool forMax);
                ev_size_t getAutoVLevel();
                EarthView::World::Graphic::CHardwareVertexBufferSharedPtr mVertexBuffer;
                EarthView::World::Graphic::CHardwareIndexBufferSharedPtr mIndexBuffer;
                ev_size_t mVertexOffset;
                ev_size_t mIndexOffset;
                ev_size_t mRequiredVertexCount;
                ev_size_t mRequiredIndexCount;
                ev_size_t mCurrIndexCount;
                EarthView::World::Spatial::Math::CAxisAlignedBox mAABB;
                Real mBoundingSphere;

            };
        }
    }
}
#endif

