#ifndef __PatchMesh_H__
#define __PatchMesh_H__
#include "graphic/graphic_config.h"
#include "mesh.h"
#include "patchsurface.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {


            /***** Patch specialisation of EarthView::World::Graphic::CMesh.
            @remarks
                Instances of this class should be created by calling CMeshManager::createBezierPatch.
            ****/
            class EV_GRAPHIC_DLL CPatchMesh : public EarthView::World::Graphic::CMesh
            {
            protected:
                //// Internal surface definition
                CPatchSurface mSurface;
                //// Vertex declaration, cloned from the input
                EarthView::World::Graphic::CVertexDeclaration *mDeclaration;
            ev_private:
                CPatchMesh(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                //// Constructor
                CPatchMesh(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle,
                           const EVString &group);

                //// Update the mesh with new control points positions.
                void update(void *controlPointBuffer, size_t width, size_t height,
                            size_t uMaxSubdivisionLevel, size_t vMaxSubdivisionLevel,
                            EarthView::World::Graphic::CPatchSurface::VisibleSide visibleSide);
                //// Define the patch, as defined in CMeshManager::createBezierPatch
                void define(void *controlPointBuffer,
                            EarthView::World::Graphic::CVertexDeclaration *declaration, ev_size_t width, ev_size_t height,
                            ev_size_t uMaxSubdivisionLevel ,
                            ev_size_t vMaxSubdivisionLevel ,
                            EarthView::World::Graphic::CPatchSurface::VisibleSide visibleSide ,
                            EarthView::World::Graphic::CHardwareBuffer::Usage vbUsage ,
                            EarthView::World::Graphic::CHardwareBuffer::Usage ibUsage ,
                            ev_bool vbUseShadow , ev_bool ibUseShadow);
                void define(void *controlPointBuffer,
                            EarthView::World::Graphic::CVertexDeclaration *declaration, ev_size_t width, ev_size_t height,
                            ev_size_t uMaxSubdivisionLevel ,
                            ev_size_t vMaxSubdivisionLevel ,
                            EarthView::World::Graphic::CPatchSurface::VisibleSide visibleSide ,
                            EarthView::World::Graphic::CHardwareBuffer::Usage vbUsage ,
                            EarthView::World::Graphic::CHardwareBuffer::Usage ibUsage,
                            ev_bool vbUseShadow );
                void define(void *controlPointBuffer,
                            EarthView::World::Graphic::CVertexDeclaration *declaration, ev_size_t width, ev_size_t height,
                            ev_size_t uMaxSubdivisionLevel,
                            ev_size_t vMaxSubdivisionLevel ,
                            EarthView::World::Graphic::CPatchSurface::VisibleSide visibleSide ,
                            EarthView::World::Graphic::CHardwareBuffer::Usage vbUsage,
                            EarthView::World::Graphic::CHardwareBuffer::Usage ibUsage
                           );
                void define(void *controlPointBuffer,
                            EarthView::World::Graphic::CVertexDeclaration *declaration, ev_size_t width, ev_size_t height,
                            ev_size_t uMaxSubdivisionLevel,
                            ev_size_t vMaxSubdivisionLevel ,
                            EarthView::World::Graphic::CPatchSurface::VisibleSide visibleSide,
                            EarthView::World::Graphic::CHardwareBuffer::Usage vbUsage);
                void define(void *controlPointBuffer,
                            EarthView::World::Graphic::CVertexDeclaration *declaration, ev_size_t width, ev_size_t height,
                            ev_size_t uMaxSubdivisionLevel,
                            ev_size_t vMaxSubdivisionLevel,
                            EarthView::World::Graphic::CPatchSurface::VisibleSide visibleSide);
                void define(void *controlPointBuffer,
                            EarthView::World::Graphic::CVertexDeclaration *declaration, ev_size_t width, ev_size_t height,
                            ev_size_t uMaxSubdivisionLevel,
                            ev_size_t vMaxSubdivisionLevel);
                void define(void *controlPointBuffer,
                            EarthView::World::Graphic::CVertexDeclaration *declaration, ev_size_t width, ev_size_t height,
                            ev_size_t uMaxSubdivisionLevel);
                void define(void *controlPointBuffer,
                            EarthView::World::Graphic::CVertexDeclaration *declaration, ev_size_t width, ev_size_t height);
                /**** Sets the current subdivision level as a proportion of full detail.
                @param factor Subdivision factor as a value from 0 (control points only) to 1 (maximum
                    subdivision). ****/
                void setSubdivision(Real factor);
            ev_internal:
                //// Overridden from CResource
                void loadImpl();
                //// Overridden from CResource - do nothing (no disk caching)
                void prepareImpl() {}
            };
            /***** Specialisation of CSharedPtr to allow CSharedPtr to be assigned to EarthView::World::Graphic::CPatchMeshPtr
            @note Has to be a subclass since we need operator=.
            We could templatise this instead of repeating per CResource subclass,
            except to do so requires a form VC6 does not support i.e.
            ResourceSubclassPtr<T> : public EarthView::World::Core::CSharedPtr<T>
            ****/
            class EV_GRAPHIC_DLL CPatchMeshPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CPatchMesh>
            {
            ev_private:
                CPatchMeshPtr(_in EarthView::World::Core::CNameValuePairList *pList)
                : EarthView::World::Core::CSharedPtr<CPatchMesh>(
                        pList && pList->Exist("ref_rep") ? (EarthView::World::Graphic::CPatchMesh *)pList->GetAt("ref_rep") : (EarthView::World::Graphic::CPatchMesh *) NULL
                        , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                {
                    if(pList && pList->Exist("r"))
                    {
                    	EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CPatchMesh> r =
                    			*(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CPatchMesh>*)pList->GetAt("r");
                        EV_SET_AUTO_SHARED_MUTEX_NULL
                        EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                        {
                            EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                            EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                            pRep = r.pRep;
                            pUseCount = r.pUseCount;
                            useFreeMethod = r.useFreeMethod;
                            /// Handle zero pointer gracefully to manage STL containers
                            if(pUseCount)
                            {
                                ++(*pUseCount);
                            }
                        }
                    }
                }
            public:
                CPatchMeshPtr()
            	: EarthView::World::Core::CSharedPtr<CPatchMesh>() {}
                explicit CPatchMeshPtr(CPatchMesh *ref_rep)
                : EarthView::World::Core::CSharedPtr<CPatchMesh>(ref_rep) {}
                explicit CPatchMeshPtr(CPatchMesh *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod)
                : EarthView::World::Core::CSharedPtr<CPatchMesh>(ref_rep, inFreeMethod) {}
                CPatchMeshPtr(const CPatchMeshPtr &r)
                : EarthView::World::Core::CSharedPtr<CPatchMesh>(r) {}
                CPatchMeshPtr(const EarthView::World::Graphic::ResourcePtr &r)
                : EarthView::World::Core::CSharedPtr<CPatchMesh>()
                {
                    /// lock & copy other mutex pointer
                    EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                    {
                        EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                        EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                        pRep = static_cast<EarthView::World::Graphic::CPatchMesh *>(r.getPointer());
                        pUseCount = r.useCountPointer();
                        if (pUseCount)
                        {
                            ++(*pUseCount);
                        }
                    }
                }
                EarthView::World::Graphic::CPatchMesh *get() const
                {
                    return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CPatchMesh>::get();
                }
                //// Operator used to convert a EarthView::World::Graphic::ResourcePtr to a EarthView::World::Graphic::CPatchMeshPtr
                EarthView::World::Graphic::CPatchMeshPtr &operator=(const EarthView::World::Graphic::ResourcePtr &r)
                {
                    if (pRep == static_cast<EarthView::World::Graphic::CPatchMesh *>(r.getPointer()))
                        return *this;
                    release();
                    EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                    {
                        /// lock & copy other mutex pointer
                        EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                        EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                        pRep = static_cast<EarthView::World::Graphic::CPatchMesh *>(r.getPointer());
                        pUseCount = r.useCountPointer();
                        if (pUseCount)
                        {
                            ++(*pUseCount);
                        }
                    }
                    else
                    {
                        /// RHS must be a null pointer
                        EV_ASSERT(r.isNull() && "RHS must be null if it has no mutex!");
                        setNull();
                    }
                    return *this;
                }
                //// Operator used to convert a EarthView::World::Graphic::CMeshPtr to a EarthView::World::Graphic::CPatchMeshPtr
                EarthView::World::Graphic::CPatchMeshPtr &operator=(const EarthView::World::Graphic::CMeshPtr &r)
                {
                    if (pRep == static_cast<EarthView::World::Graphic::CPatchMesh *>(r.getPointer()))
                        return *this;
                    release();
                    /// lock & copy other mutex pointer
                    EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                    {
                        EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                        EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                        pRep = static_cast<EarthView::World::Graphic::CPatchMesh *>(r.getPointer());
                        pUseCount = r.useCountPointer();
                        if (pUseCount)
                        {
                            ++(*pUseCount);
                        }
                    }
                    return *this;
                }
            };
        }
    }
}

#endif

