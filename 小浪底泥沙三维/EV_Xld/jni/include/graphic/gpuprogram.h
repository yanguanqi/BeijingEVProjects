#ifndef __GpuProgram_H_
#define __GpuProgram_H_
#include "graphic/graphic_config.h"
#include "resource.h"
#include <core/sharedptr.h>
#include "gpuprogramparams.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {


            /// Forward declaration
            class CGpuProgramPtr;
            class CHighLevelGpuProgramPtr;
            /** Defines a program which runs on the GPU such as a vertex or fragment program.
            @remarks
            	This class defines the low-level program in assembler code, the sort used to
            	directly assemble into machine instructions for the GPU to execute. By nature,
            	this means that the assembler source is rendersystem specific, which is why this
            	is an abstract class - real instances are created through the CRenderSystem.
            	If you wish to use higher level shading languages like HLSL and Cg, you need to
            	use the CHighLevelGpuProgram class instead.
            */
            class EV_GRAPHIC_DLL CGpuProgram : public EarthView::World::Graphic::CResource
            {
            ev_internal:
                //// Command object - see EarthView::World::Core::CParamCommand
                class EV_GRAPHIC_DLL CGpuprogramCmdType : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    CGpuprogramCmdType(EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CGpuprogramCmdType() {}
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                class EV_GRAPHIC_DLL CCmdSyntax : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    CCmdSyntax(EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CCmdSyntax() {}
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                class EV_GRAPHIC_DLL CCmdSkeletal : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    CCmdSkeletal(EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CCmdSkeletal() {}
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                class EV_GRAPHIC_DLL CCmdMorph : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    CCmdMorph(EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CCmdMorph() {}
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                class EV_GRAPHIC_DLL CCmdPose : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    CCmdPose(EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CCmdPose() {}
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                class EV_GRAPHIC_DLL CCmdVTF : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    CCmdVTF(EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CCmdVTF() {}
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                class EV_GRAPHIC_DLL CCmdManualNamedConstsFile : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    CCmdManualNamedConstsFile(EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CCmdManualNamedConstsFile() {}
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
                class EV_GRAPHIC_DLL CCmdAdjacency : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    CCmdAdjacency(EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CCmdAdjacency() {}
                    EVString doGet(const void *target) const;
                    void doSet(void *target, const EVString &val);
                };
            ev_internal:
                //// @copydoc CResource::calculateSize
                ev_size_t calculateSize() const
                {
                    return 0;    /// TODO
                }
                //// @copydoc CResource::loadImpl
                void loadImpl();
            protected:
                /// Command object for setting / getting parameters
                static CGpuprogramCmdType msTypeCmd;
                static CCmdSyntax msSyntaxCmd;
                static CCmdSkeletal msSkeletalCmd;
                static CCmdMorph msMorphCmd;
                static CCmdPose msPoseCmd;
                static CCmdVTF msVTFCmd;
                static CCmdManualNamedConstsFile msManNamedConstsFileCmd;
                static CCmdAdjacency msAdjacencyCmd;
                //// The type of the program
                EarthView::World::Graphic::GpuProgramType mType;
				


                //// The name of the file to load source from (may be blank)
                EVString mFilename;
                //// The assembler source of the program (may be blank until file loaded)
                EVString mSource;
                //// Whether we need to load source from file or not
                ev_bool mLoadFromFile;
                //// Syntax code e.g. arbvp1, vs_2_0 etc
                EVString mSyntaxCode;
                //// Does this (vertex) program include skeletal animation?
                ev_bool mSkeletalAnimation;
                //// Does this (vertex) program include morph animation?
                ev_bool mMorphAnimation;
                //// Does this (vertex) program include pose animation (count of number of poses supported)
                ev_uint16 mPoseAnimation;
                //// Does this (vertex) program require support for vertex texture fetch?
                ev_bool mVertexTextureFetch;
                //// Does this (geometry) program require adjacency information?
                ev_bool mNeedsAdjacencyInfo;
                //// The default parameters for use with this object
                EarthView::World::Graphic::GpuProgramParametersSharedPtr mDefaultParams;
                //// Did we encounter a compilation error?
                ev_bool mCompileError;
                /** Record of logical to physical buffer maps. Mandatory for low-level
                	programs or high-level programs which set their params the same way.
                	This is a shared pointer because if the program is recompiled and the parameters
                	change, this definition will alter, but previous params may reference the old def. */
                mutable GpuLogicalBufferStructPtr mFloatLogicalToPhysical;
                /** Record of logical to physical buffer maps. Mandatory for low-level
                	programs or high-level programs which set their params the same way.
                	This is a shared pointer because if the program is recompiled and the parameters
                	change, this definition will alter, but previous params may reference the old def.*/
                mutable GpuLogicalBufferStructPtr mIntLogicalToPhysical;
                /** CParameter name -> ConstantDefinition map, shared instance used by all parameter objects.
                This is a shared pointer because if the program is recompiled and the parameters
                change, this definition will alter, but previous params may reference the old def.
                */
                mutable GpuNamedConstantsPtr mConstantDefs;
                //// File from which to load named constants manually
                EVString mManualNamedConstantsFile;
                ev_bool mLoadedManualNamedConstants;

                /** Internal method for setting up the basic parameter definitions for a subclass.
                @remarks
                Because CStringInterface holds a dictionary of parameters per class, subclasses need to
                call this to ask the base class to add it's parameters to their dictionary as well.
                Can't do this in the constructor because that runs in a non-virtual context.
                @par
                The subclass must have called it's own createParamDictionary before calling this method.
                */
                void setupBaseParamDictionary();
                /** Internal method returns whether required capabilities for this program is supported.
                */
                ev_bool isRequiredCapabilitiesSupported() const;
                //// Create the internal params logical & named mapping structures
                void createParameterMappingStructures(ev_bool recreateIfExists = true) const;
                //// Create the internal params logical mapping structures
                void createLogicalParameterMappingStructures(ev_bool recreateIfExists = true) const;
                //// Create the internal params named mapping structures
                void createNamedParameterMappingStructures(ev_bool recreateIfExists = true) const;
            ev_private:
                CGpuProgram(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CGpuProgram(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle, const EVString &group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader);
                CGpuProgram(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle, const EVString &group, ev_bool isManual);
                CGpuProgram(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle, const EVString &group);

                virtual ~CGpuProgram() {}
                /** Sets the filename of the source assembly for this program.
                @remarks
                    Setting this will have no effect until you (re)load the program.
                */



                virtual void setSourceFile(const EVString &filename);
                /** Sets the source assembly for this program from an in-memory string.
                @remarks
                    Setting this will have no effect until you (re)load the program.
                */
                virtual void setSource(const EVString &source);
                /** Gets the syntax code for this program e.g. arbvp1, fp20, vs_1_1 etc */
                virtual EVString getSyntaxCode() const
                {
                    return mSyntaxCode;
                }
                /** Sets the syntax code for this program e.g. arbvp1, fp20, vs_1_1 etc */
                virtual void setSyntaxCode(const EVString &syntax);
                /** Gets the name of the file used as source for this program. */
                virtual EVString getSourceFile() const
                {
                    return mFilename;
                }
                /** Gets the assembler source for this program. */
                virtual EVString getSource() const
                {
                    return mSource;
                }
                //// Set the program type (only valid before load)
                virtual void setType(EarthView::World::Graphic::GpuProgramType t);
                //// Get the program type
                virtual EarthView::World::Graphic::GpuProgramType getType() const
                {
                    return mType;
                }
                /** Returns the EarthView::World::Graphic::CGpuProgram which should be bound to the pipeline.
                @remarks
                    This method is simply to allow some subclasses of CGpuProgram to delegate
                    the program which is bound to the pipeline to a delegate, if required. */
                virtual EarthView::World::Graphic::CGpuProgram *_getBindingDelegate()
                {
                    return this;
                }
                /** Returns whether this program can be supported on the current renderer and hardware. */
                virtual ev_bool isSupported() const;
                /** Creates a new parameters object compatible with this program definition.
                @remarks
                    It is recommended that you use this method of creating parameters objects
                    rather than going direct to CGpuProgramManager, because this method will
                    populate any implementation-specific extras (like named parameters) where
                    they are appropriate.
                */
                virtual EarthView::World::Graphic::GpuProgramParametersSharedPtr createParameters();
                /** Sets whether a vertex program includes the required instructions
                to perform skeletal animation.
                @remarks
                If this is set to true, EV_World will not blend the geometry according to
                skeletal animation, it will expect the vertex program to do it.
                */
                virtual void setSkeletalAnimationIncluded(ev_bool included)
                {
                    mSkeletalAnimation = included;
                }
                /** Returns whether a vertex program includes the required instructions
                    to perform skeletal animation.
                @remarks
                    If this returns true, EV_World will not blend the geometry according to
                    skeletal animation, it will expect the vertex program to do it.
                */
                virtual ev_bool isSkeletalAnimationIncluded() const
                {
                    return mSkeletalAnimation;
                }
                /** Sets whether a vertex program includes the required instructions
                to perform morph animation.
                @remarks
                If this is set to true, EV_World will not blend the geometry according to
                morph animation, it will expect the vertex program to do it.
                */
                virtual void setMorphAnimationIncluded(ev_bool included)
                {
                    mMorphAnimation = included;
                }
                /** Sets whether a vertex program includes the required instructions
                to perform pose animation.
                @remarks
                If this is set to true, EV_World will not blend the geometry according to
                pose animation, it will expect the vertex program to do it.
                @param poseCount The number of simultaneous poses the program can blend
                */
                virtual void setPoseAnimationIncluded(ev_uint16 poseCount)
                {
                    mPoseAnimation = poseCount;
                }
                /** Returns whether a vertex program includes the required instructions
                    to perform morph animation.
                @remarks
                    If this returns true, EV_World will not blend the geometry according to
                    morph animation, it will expect the vertex program to do it.
                */
                virtual ev_bool isMorphAnimationIncluded() const
                {
                    return mMorphAnimation;
                }
                /** Returns whether a vertex program includes the required instructions
                    to perform pose animation.
                @remarks
                    If this returns true, EV_World will not blend the geometry according to
                    pose animation, it will expect the vertex program to do it.
                */
                virtual ev_bool isPoseAnimationIncluded() const
                {
                    return mPoseAnimation > 0;
                }
                /** Returns the number of simultaneous poses the vertex program can
                	blend, for use in pose animation.
                */
                virtual ev_uint16 getNumberOfPosesIncluded() const
                {
                    return mPoseAnimation;
                }
                /** Sets whether this vertex program requires support for vertex
                	texture fetch from the hardware.
                */
                virtual void setVertexTextureFetchRequired(ev_bool r)
                {
                    mVertexTextureFetch = r;
                }
                /** Returns whether this vertex program requires support for vertex
                	texture fetch from the hardware.
                */
                virtual ev_bool isVertexTextureFetchRequired() const
                {
                    return mVertexTextureFetch;
                }
                /** Sets whether this geometry program requires adjacency information
                	from the input primitives.
                */
                virtual void setAdjacencyInfoRequired(ev_bool r)
                {
                    mNeedsAdjacencyInfo = r;
                }
                /** Returns whether this geometry program requires adjacency information
                	from the input primitives.
                */
                virtual ev_bool isAdjacencyInfoRequired() const
                {
                    return mNeedsAdjacencyInfo;
                }

                /** Get a reference to the default parameters which are to be used for all
                	uses of this program.
                @remarks
                	A program can be set up with a list of default parameters, which can save time when
                	retrieving the default parameters and populating it with the most used options,
                	any new parameter objects created from this program afterwards will automatically include
                	the default parameters; thus users of the program need only change the parameters
                	which are unique to their own usage of the program.
                */
                virtual EarthView::World::Graphic::GpuProgramParametersSharedPtr getDefaultParameters();
                /** Returns true if default parameters have been set up.
                */
                virtual ev_bool hasDefaultParameters() const
                {
                    return !mDefaultParams.isNull();
                }
                /** Returns whether a vertex program wants light and material states to be passed
                through fixed pipeline low level API rendering calls (default false, subclasses can override)
                @remarks
                	Most vertex programs do not need this material information, however GLSL
                	shaders can refer to this material and lighting state so enable this option
                */
                virtual ev_bool getPassSurfaceAndLightStates() const
                {
                    return false;
                }
                /** Returns whether a fragment program wants fog state to be passed
                through fixed pipeline low level API rendering calls (default true, subclasses can override)
                @remarks
                On DirectX, shader model 2 and earlier continues to have fixed-function fog
                applied to it, so fog state is still passed (you should disable fog on the
                pass if you want to perform fog in the shader). In OpenGL it is also
                common to be able to access the fixed-function fog state inside the shader.
                */
                virtual ev_bool getPassFogStates() const
                {
                    return true;
                }
                /** Returns whether a vertex program wants transform state to be passed
                through fixed pipeline low level API rendering calls
                @remarks
                Most vertex programs do not need fixed-function transform information, however GLSL
                shaders can refer to this state so enable this option
                */
                virtual ev_bool getPassTransformStates() const
                {
                    return false;
                }
                /** Returns a string that specifies the language of the gpu programs as specified
                in a material script. ie: asm, cg, hlsl, glsl
                */
                virtual EVString getLanguage() const;
                /** Did this program encounter a compile error when loading?
                */
                virtual ev_bool hasCompileError() const
                {
                    return mCompileError;
                }
                /** Reset a compile error if it occurred, allowing the load to be retried
                */
                virtual void resetCompileError()
                {
                    mCompileError = false;
                }
                /** Allows you to manually provide a set of named parameter mappings
                	to a program which would not be able to derive named parameters itself.
                @remarks
                	You may wish to use this if you have assembler programs that were compiled
                	from a high-level source, and want the convenience of still being able
                	to use the named parameters from the original high-level source.
                @see setManualNamedConstantsFile
                */
                virtual void setManualNamedConstants(const EarthView::World::Graphic::GpuNamedConstants &namedConstants);
                //// Get a read-only reference to the named constants registered for this program (manually or automatically)
                virtual const EarthView::World::Graphic::GpuNamedConstants &getNamedConstants() const
                {
                    return *mConstantDefs.get();
                }
                /** Specifies the name of a file from which to load named parameters mapping
                	for a program which would not be able to derive named parameters itself.
                @remarks
                	You may wish to use this if you have assembler programs that were compiled
                	from a high-level source, and want the convenience of still being able
                	to use the named parameters from the original high-level source. This
                	method will make a low-level program search in the resource group of the
                	program for the named file from which to load parameter names from.
                	The file must be in the format produced by GpuNamedConstants::save.
                */
                virtual void setManualNamedConstantsFile(const EVString &paramDefFile);
                /** Gets the name of a file from which to load named parameters mapping
                	for a program which would not be able to derive named parameters itself.
                */
                virtual EVString getManualNamedConstantsFile() const
                {
                    return mManualNamedConstantsFile;
                }
                /** Get the full list of named constants.
                @note
                Only available if this parameters object has named parameters, which means either
                a high-level program which loads them, or a low-level program which has them
                specified manually.
                */
                virtual const EarthView::World::Graphic::GpuNamedConstants &getConstantDefinitions() const
                {
                    return *mConstantDefs.get();
                }

            ev_internal:
                //// Virtual method which must be implemented by subclasses, load from mSource
                virtual void loadFromSource() {}
            };


            /** Specialisation of CSharedPtr to allow CSharedPtr to be assigned to EarthView::World::Graphic::CGpuProgramPtr
            @note Has to be a subclass since we need operator=.
            We could templatise this instead of repeating per CResource subclass,
            except to do so requires a form VC6 does not support i.e.
            ResourceSubclassPtr<T> : public EarthView::World::Core::CSharedPtr<T>
            */
            class EV_GRAPHIC_DLL CGpuProgramPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CGpuProgram>
            {
            public:
                CGpuProgramPtr() :
                	EarthView::World::Core::CSharedPtr<CGpuProgram>() {}
                explicit CGpuProgramPtr(CGpuProgram *ref_rep) :
				    EarthView::World::Core::CSharedPtr<CGpuProgram>(ref_rep) {}
                explicit CGpuProgramPtr(CGpuProgram *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) :
				    EarthView::World::Core::CSharedPtr<CGpuProgram>(ref_rep, inFreeMethod) {}
                CGpuProgramPtr(const CGpuProgramPtr &r) :
                	EarthView::World::Core::CSharedPtr<CGpuProgram>(r) {}
                CGpuProgramPtr(const EarthView::World::Graphic::ResourcePtr &r) :
                	EarthView::World::Core::CSharedPtr<CGpuProgram>()
                {
                    /// lock & copy other mutex pointer
                    EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                    {
                        EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                        EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                        pRep = static_cast<EarthView::World::Graphic::CGpuProgram *>(r.getPointer());
                        pUseCount = r.useCountPointer();
                        if (pUseCount)
                        {
                            ++(*pUseCount);
                        }
                    }
                }
                CGpuProgramPtr(const EarthView::World::Graphic::CHighLevelGpuProgramPtr &r);

                EarthView::World::Graphic::CGpuProgram *get() const
                {
                    return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CGpuProgram>::get();
                }
                //// Operator used to convert a EarthView::World::Graphic::ResourcePtr to a EarthView::World::Graphic::CGpuProgramPtr
                EarthView::World::Graphic::CGpuProgramPtr &operator=(const EarthView::World::Graphic::ResourcePtr &r)
                {
                    if (pRep == static_cast<EarthView::World::Graphic::CGpuProgram *>(r.getPointer()))
                        return *this;
                    release();
                    /// lock & copy other mutex pointer
                    EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                    {
                        EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                        EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                        pRep = static_cast<EarthView::World::Graphic::CGpuProgram *>(r.getPointer());
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
                //// Operator used to convert a EarthView::World::Graphic::CHighLevelGpuProgramPtr to a EarthView::World::Graphic::CGpuProgramPtr
                EarthView::World::Graphic::CGpuProgramPtr &operator=(const EarthView::World::Graphic::CHighLevelGpuProgramPtr &r);
            ev_private:
                CGpuProgramPtr(_in EarthView::World::Core::CNameValuePairList *pList)
                : EarthView::World::Core::CSharedPtr<CGpuProgram>(
                        pList && pList->Exist("ref_rep") ? (EarthView::World::Graphic::CGpuProgram *)pList->GetAt("ref_rep") : (EarthView::World::Graphic::CGpuProgram *) NULL
                        , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                {
                    if(pList && pList->Exist("r"))
                    {
                    	EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CGpuProgram>r =
                    			*(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CGpuProgram>*)pList->GetAt("r");
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
            };
        }
    }
}

#endif

