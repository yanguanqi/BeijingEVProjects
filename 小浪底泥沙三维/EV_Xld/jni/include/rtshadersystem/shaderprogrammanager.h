#ifndef _ShaderProgramManager_
#define _ShaderProgramManager_
#include "shaderprerequisites.h"
#include "shaderprogram.h"
#include "shaderprogramwriter.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {



                /** A singleton manager class that manages shader based programs.
                */
                class EV_RTSS_DLL CProgramManager : public EarthView::World::Core::CAllocatedObject
                {
                private:
                    static CProgramManager *ms_Singleton;
                ev_private:
                    CProgramManager(_in EarthView::World::Core::CNameValuePairList *pList);
                    /// Interface.
                public:
                    /** Class default constructor */
                    CProgramManager	();
                    /** Class destructor */
                    ~CProgramManager	();

                    /** Override standard CSingleton retrieval.
                    @remarks
                    Why do we do this? Well, it's because the CSingleton
                    implementation is in a .h file, which means it gets compiled
                    into anybody who includes it. This is needed for the
                    CSingleton template to work, but we actually only want it
                    compiled into the implementation of the class based on the
                    CSingleton, not all of them. If we don't change this, we get
                    link errors when trying to use the CSingleton-based class from
                    an outside dll.
                    @par
                    This method just delegates to the template version anyway,
                    but the implementation stays in this single compilation unit,
                    preventing link errors.
                    */
                    static CProgramManager			&getSingleton	();

                    /** Override standard CSingleton retrieval.
                    @remarks
                    Why do we do this? Well, it's because the CSingleton
                    implementation is in a .h file, which means it gets compiled
                    into anybody who includes it. This is needed for the
                    CSingleton template to work, but we actually only want it
                    compiled into the implementation of the class based on the
                    CSingleton, not all of them. If we don't change this, we get
                    link errors when trying to use the CSingleton-based class from
                    an outside dll.
                    @par
                    This method just delegates to the template version anyway,
                    but the implementation stays in this single compilation unit,
                    preventing link errors.
                    */
                    static CProgramManager			*getSingletonPtr				();
                    /** Acquire CPU/GPU programs set associated with the given render state and bind them to the pass.
                    @param pass The pass to bind the programs to.
                    @param renderState The render state that describes the program that need to be generated.
                    */
                    void							acquirePrograms			(EarthView::World::Graphic::CPass *pass, EarthView::World::Graphic::RTShaderSystem::CTargetRenderState *renderState);
                    /** Release CPU/GPU programs set associated with the given render state and pass.
                    @param pass The pass to release the programs from.
                    @param renderState The render state holds the programs.
                    */
                    void							releasePrograms			(EarthView::World::Graphic::CPass *pass, EarthView::World::Graphic::RTShaderSystem::CTargetRenderState *renderState);
                    /** Flush the local GPU programs cache.
                    */
                    void							flushGpuProgramsCache	();
                protected:
                    ///-----------------------------------------------------------------------------
                    typedef map<EVString, EarthView::World::Graphic::CGpuProgramPtr>			GpuProgramsMap;
                    typedef GpuProgramsMap::iterator					GpuProgramsMapIterator;
                    typedef GpuProgramsMap::const_iterator				GpuProgramsMapConstIterator;
                    ///-----------------------------------------------------------------------------
                    typedef set<EarthView::World::Graphic::RTShaderSystem::CProgram *>							ProgramList;
                    typedef ProgramList::iterator						ProgramListIterator;
                    typedef map<EVString, EarthView::World::Graphic::RTShaderSystem::CProgramWriter *>			ProgramWriterMap;
                    typedef ProgramWriterMap::iterator					ProgramWriterIterator;
                    typedef vector<EarthView::World::Graphic::RTShaderSystem::CProgramWriterFactory *>			ProgramWriterFactoryList;

                    ///-----------------------------------------------------------------------------
                    typedef map<EVString, EarthView::World::Graphic::RTShaderSystem::CProgramProcessor *> 		ProgramProcessorMap;
                    typedef ProgramProcessorMap::iterator 				ProgramProcessorIterator;
                    typedef ProgramProcessorMap::const_iterator			ProgramProcessorConstIterator;
                    typedef vector<EarthView::World::Graphic::RTShaderSystem::CProgramProcessor *> 			ProgramProcessorList;

                protected:
                    /** Create default program processors. */
                    void			createDefaultProgramProcessors	();

                    /** Destroy default program processors. */
                    void			destroyDefaultProgramProcessors	();
                    /** Create default program processors. */
                    void			createDefaultProgramWriterFactories	();
                    /** Destroy default program processors. */
                    void			destroyDefaultProgramWriterFactories();
                    /** Destroy all program writers. */
                    void			destroyProgramWriters	();
                    /** Create CPU program .
                    @param type The type of the program to create.
                    */
                    CProgram		*createCpuProgram		(EarthView::World::Graphic::GpuProgramType type);
                    /** Destroy a CPU program by name.
                    @param shaderProgram The CPU program instance to destroy.
                    */
                    void			destroyCpuProgram		(EarthView::World::Graphic::RTShaderSystem::CProgram *shaderProgram);
                    /** Create GPU programs for the given program set based on the CPU programs it contains.
                    @param programSet The program set container.
                    */
                    bool			createGpuPrograms		(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    /** Create GPU program based on the give CPU program.
                    @param shaderProgram The CPU program instance.
                    @param programWriter The program writer instance.
                    @param language The target shader language.
                    @param profiles The profiles string for program compilation.
                    @param profiles The profiles string for program compilation as string list.
                    @param cachePath The output path to write the program into.
                    */
                    EarthView::World::Graphic::CGpuProgramPtr	createGpuProgram		(EarthView::World::Graphic::RTShaderSystem::CProgram *shaderProgram,
                            CProgramWriter *programWriter,
                            const EVString &language,
                            const EVString &profiles,
                            const EarthView::World::Core::StringVector &profilesList,
                            const EVString &cachePath);
                    /**
                    Add program processor instance to this manager.
                    @param processor The instance to add.
                    */
                    void			addProgramProcessor		(EarthView::World::Graphic::RTShaderSystem::CProgramProcessor *processor);
                    /**
                    Remove program processor instance from this manager.
                    @param processor The instance to remove.
                    */
                    void			removeProgramProcessor	(EarthView::World::Graphic::RTShaderSystem::CProgramProcessor *processor);
                    /** Destroy a GPU program by name.
                    @param name The name of the program to destroy.
                    @param type The type of the program to destroy.
                    */
                    void			destroyGpuProgram		(EarthView::World::Graphic::CGpuProgramPtr &gpuProgram);
                    /** Flush the local GPU programs cache.
                    @param gpuProgramsMap The GPU programs cache.
                    */
                    void			flushGpuProgramsCache	(GpuProgramsMap &gpuProgramsMap);

                    /** Return the number of created vertex shaders. */
                    size_t			getVertexShaderCount		() const
                    {
                        return mVertexShaderMap.size();
                    }
                    /** Return the number of created fragment shaders. */
                    size_t			getFragmentShaderCount		() const
                    {
                        return mFragmentShaderMap.size();
                    }
                    /** Fix the input of the pixel shader to be the same as the output of the vertex shader */
                    void			synchronizePixelnToBeVertexOut	(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    /** Bind the uniform parameters of a given CPU and GPU program set. */
                    void			bindUniformParameters			(EarthView::World::Graphic::RTShaderSystem::CProgram *pCpuProgram, const EarthView::World::Graphic::GpuProgramParametersSharedPtr &passParams);


                protected:
                    ProgramList					mCpuProgramsList;								/// CPU programs list.
                    ProgramWriterMap			mProgramWritersMap;								/// Map between target language and shader program writer.
                    ProgramProcessorMap			mProgramProcessorsMap;							/// Map between target language and shader program processor.
                    ProgramWriterFactoryList	mProgramWriterFactories;						/// Holds standard shader writer factories
                    GpuProgramsMap				mVertexShaderMap;								/// The generated vertex shaders.
                    GpuProgramsMap				mFragmentShaderMap;								/// The generated fragment shaders.
                    ProgramProcessorList		mDefaultProgramProcessors;						/// The default program processors.
                private:
                    friend class EarthView::World::Graphic::RTShaderSystem::CProgramSet;
                    friend class EarthView::World::Graphic::RTShaderSystem::CTargetRenderState;
                    friend class EarthView::World::Graphic::RTShaderSystem::CShaderGenerator;
                };
            }
        }
    }
}

#endif
