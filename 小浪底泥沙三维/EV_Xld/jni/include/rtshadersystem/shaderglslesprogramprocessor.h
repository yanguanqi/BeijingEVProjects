#ifndef _ShaderGLSLESProgramProcessor_
#define _ShaderGLSLESProgramProcessor_
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

                /** GLSL ES Language program processor class.
                */
                class CGLSLESProgramProcessor : public CProgramProcessor
                {
                    /// Interface.
                public:

                    /** Class constructor.
                    @param type The type of this program.
                    */
                    CGLSLESProgramProcessor			();
                    /** Class destructor */
                    virtual ~CGLSLESProgramProcessor ();
                    /** Return the target language of this processor. */
                    virtual EVString           getTargetLanguage	() const
                    {
                        return TargetLanguage;
                    }
                    /**
                    @see ProgramProcessor::preCreateGpuPrograms
                    */
                    virtual bool                    preCreateGpuPrograms			(CProgramSet *programSet);
                    /**
                    @see ProgramProcessor::postCreateGpuPrograms
                    */
                    virtual bool                    postCreateGpuPrograms			(CProgramSet *programSet);

                private:
                    /** Bind texture samplers. */
                    void                            bindTextureSamplers				(CProgram *pCpuProgram, CGpuProgramPtr pGpuProgram);
                    static EVString                   TargetLanguage;
                    EarthView::World::Core::StringVector                    mLibraryPrograms;						/// The list of created library shaders.
                };
            }
        }
    }
}


#endif

