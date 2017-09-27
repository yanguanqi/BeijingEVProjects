#ifndef __HighLevelGpuProgram_H__
#define __HighLevelGpuProgram_H__
#include "graphic/graphic_config.h"
#include "gpuprogram.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /***** Abstract base class representing a high-level program (a vertex or
                fragment program).
            @remarks
                High-level programs are vertex and fragment programs written in a high-level
                language such as Cg or HLSL, and as such do not require you to write assembler code
                like EarthView::World::Graphic::CGpuProgram does. However, the high-level program does eventually
                get converted (compiled) into assembler and then eventually microcode which is
                what runs on the GPU. As well as the convenience, some high-level languages like Cg allow
                you to write a program which will operate under both Direct3D and OpenGL, something
                which you cannot do with just EarthView::World::Graphic::CGpuProgram (which requires you to write 2 programs and
                use each in a CTechnique to provide cross-API compatibility). EV_World will be creating
                a EarthView::World::Graphic::CGpuProgram for you based on the high-level program, which is compiled specifically
                for the API being used at the time, but this process is transparent.
            @par
                You cannot create high-level programs direct - use CHighLevelGpuProgramManager instead.
                Plugins can register new implementations of CHighLevelGpuProgramFactory in order to add
                support for new languages without requiring changes to the core EV_World API. To allow
                custom parameters to be set, this class extends CStringInterface - the application
                can query on the available custom parameters and get/set them without having to
                link specifically with it.
            ****/
            class EV_GRAPHIC_DLL CHighLevelGpuProgram : public EarthView::World::Graphic::CGpuProgram
            {
            protected:
                //// Whether the high-level program (and it's parameter defs) is loaded
                ev_bool mHighLevelLoaded;
                //// The underlying assembler program
                EarthView::World::Graphic::CGpuProgramPtr mAssemblerProgram;
                //// Have we built the name->index parameter map yet?
                mutable ev_bool mConstantDefsBuilt;
            ev_internal:
                //// Internal load high-level portion if not loaded
                virtual void loadHighLevel();
                //// Internal unload high-level portion if loaded
                virtual void unloadHighLevel();
                /***** Internal load implementation, loads just the high-level portion, enough to
                    get parameters.
                ****/
                virtual void loadHighLevelImpl();
                /***** Internal method for creating an appropriate low-level program from this
                high-level program, must be implemented by subclasses. ****/
                virtual void createLowLevelImpl() {}
                //// Internal unload implementation, must be implemented by subclasses
                virtual void unloadHighLevelImpl() {}
                //// Populate the passed parameters with name->index map
                virtual void populateParameterNames(EarthView::World::Graphic::GpuProgramParametersSharedPtr params);
                /***** Build the constant definition map, must be overridden.
                @note The implementation must fill in the (inherited) mConstantDefs field at a minimum,
                	parameter indexes then the mFloatLogicalToPhysical and mIntLogicalToPhysical
                	maps must also be populated.
                ****/
                virtual void buildConstantDefinitions() const {}
            ev_internal:
                /***** @copydoc CResource::loadImpl ****/
                void loadImpl();
                /***** @copydoc CResource::unloadImpl ****/
                void unloadImpl();
            ev_private:
                CHighLevelGpuProgram(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /***** Constructor, should be used only by factory classes. ****/

                CHighLevelGpuProgram(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle,
                                     const EVString &group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader);
                CHighLevelGpuProgram(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle,
                                     const EVString &group, ev_bool isManual );
                CHighLevelGpuProgram(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle,
                                     const EVString &group);

                ~CHighLevelGpuProgram();

                /***** Creates a new parameters object compatible with this program definition.
                @remarks
                    Unlike low-level assembly programs, parameters objects are specific to the
                    program and therefore must be created from it rather than by the
                    CHighLevelGpuProgramManager. This method creates a new instance of a parameters
                    object containing the definition of the parameters this program understands.
                ****/
                EarthView::World::Graphic::GpuProgramParametersSharedPtr createParameters();
                /***** @copydoc CGpuProgram::getBindingDelegate ****/
                EarthView::World::Graphic::CGpuProgram *_getBindingDelegate()
                {
                    return mAssemblerProgram.getPointer();
                }
                /***** Get the full list of GpuConstantDefinition instances.
                @note
                Only available if this parameters object has named parameters.
                ****/
                const EarthView::World::Graphic::GpuNamedConstants &getConstantDefinitions() const;
                //// Override CGpuProgram::getNamedConstants to ensure built
                const EarthView::World::Graphic::GpuNamedConstants &getNamedConstants() const
                {
                    return getConstantDefinitions();
                }


            };
            /***** Specialisation of CSharedPtr to allow CSharedPtr to be assigned to EarthView::World::Graphic::CHighLevelGpuProgramPtr
            @note Has to be a subclass since we need operator=.
            We could templatise this instead of repeating per CResource subclass,
            except to do so requires a form VC6 does not support i.e.
            ResourceSubclassPtr<T> : public EarthView::World::Core::CSharedPtr<T>
            ****/
            class EV_GRAPHIC_DLL CHighLevelGpuProgramPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CHighLevelGpuProgram>
            {
            ev_private:
                CHighLevelGpuProgramPtr(_in EarthView::World::Core::CNameValuePairList *pList):
                	EarthView::World::Core::CSharedPtr<CHighLevelGpuProgram>(
                        pList && pList->Exist("ref_rep") ? (EarthView::World::Graphic::CHighLevelGpuProgram *)pList->GetAt("ref_rep") : (EarthView::World::Graphic::CHighLevelGpuProgram *) NULL
                        , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                {
                    if(pList && pList->Exist("r"))
                    {
                    	EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CHighLevelGpuProgram> r =
                    			*(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CHighLevelGpuProgram>*)pList->GetAt("r");
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
                CHighLevelGpuProgramPtr() :
                	EarthView::World::Core::CSharedPtr<CHighLevelGpuProgram>() {}
                explicit CHighLevelGpuProgramPtr(CHighLevelGpuProgram *ref_rep) :
					EarthView::World::Core::CSharedPtr<CHighLevelGpuProgram>(ref_rep) {}
                explicit CHighLevelGpuProgramPtr(CHighLevelGpuProgram *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod)
                   : EarthView::World::Core::CSharedPtr<CHighLevelGpuProgram>(ref_rep, inFreeMethod) {}
                CHighLevelGpuProgramPtr(const CHighLevelGpuProgramPtr &r) :
                	EarthView::World::Core::CSharedPtr<CHighLevelGpuProgram>(r) {}
                CHighLevelGpuProgramPtr(const EarthView::World::Graphic::ResourcePtr &r) :
                	EarthView::World::Core::CSharedPtr<CHighLevelGpuProgram>()
                {
                    /// lock & copy other mutex pointer
                    EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                    {
                        EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                        EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                        pRep = static_cast<EarthView::World::Graphic::CHighLevelGpuProgram *>(r.getPointer());
                        pUseCount = r.useCountPointer();
                        if (pUseCount)
                        {
                            ++(*pUseCount);
                        }
                    }
                }
                EarthView::World::Graphic::CHighLevelGpuProgram *get() const
                {
                    return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CHighLevelGpuProgram>::get();
                }
                //// Operator used to convert a EarthView::World::Graphic::ResourcePtr to a EarthView::World::Graphic::CHighLevelGpuProgramPtr
                EarthView::World::Graphic::CHighLevelGpuProgramPtr &operator=(const EarthView::World::Graphic::ResourcePtr &r)
                {
                    if (pRep == static_cast<EarthView::World::Graphic::CHighLevelGpuProgram *>(r.getPointer()))
                        return *this;
                    release();
                    /// lock & copy other mutex pointer
                    EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                    {
                        EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                        EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                        pRep = static_cast<EarthView::World::Graphic::CHighLevelGpuProgram *>(r.getPointer());
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
                //// Operator used to convert a EarthView::World::Graphic::CGpuProgramPtr to a EarthView::World::Graphic::CHighLevelGpuProgramPtr
                EarthView::World::Graphic::CHighLevelGpuProgramPtr &operator=(const EarthView::World::Graphic::CGpuProgramPtr &r);

            };
            /***** @} ****/
            /***** @} ****/
        }
    }
}

#endif

