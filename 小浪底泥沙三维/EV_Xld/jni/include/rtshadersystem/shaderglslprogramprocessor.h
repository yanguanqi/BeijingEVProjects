#ifndef _ShaderGLSLProgramProcessor_
#define _ShaderGLSLProgramProcessor_
#include "shaderprerequisites.h"
#include "shaderprogramprocessor.h"
#include <stringvector.h>


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {

                /** GLSL Language program processor class.
                */
                class EV_RTSS_DLL CGLSLProgramProcessor : public EarthView::World::Graphic::RTShaderSystem::CProgramProcessor
                {
                ev_private:
                    CGLSLProgramProcessor(_in EarthView::World::Core::CNameValuePairList *pList);
                    /// Interface.
                public:

                    /** Class constructor.
                    @param type The type of this program.
                    */
                    CGLSLProgramProcessor			();
                    /** Class destructor */
                    virtual ~CGLSLProgramProcessor	();
                    /** Return the target language of this processor. */
                    virtual EVString		getTargetLanguage	() const
                    {
                        return TargetLanguage;
                    }
                    /**
                    @see ProgramProcessor::preCreateGpuPrograms
                    */
                    virtual bool				preCreateGpuPrograms			(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    /**
                    @see ProgramProcessor::postCreateGpuPrograms
                    */
                    virtual bool				postCreateGpuPrograms			(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);

                private:
                    /** Bind texture samplers. */
                    void						bindTextureSamplers				(CProgram *pCpuProgram, CGpuProgramPtr pGpuProgram);
                    /** Compiles sub shaders (only if the not exists) and attach them to the main gpu program. */
                    void						bindSubShaders					(CProgram *program, CGpuProgramPtr pGpuProgram);
                    static EVString TargetLanguage;
                    EarthView::World::Core::StringVector	mLibraryPrograms;						/// The list of created library shaders.
                };
            }
        }
    }
}

#endif

