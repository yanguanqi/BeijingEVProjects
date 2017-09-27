#ifndef _ShaderHLSLProgramProcessor_
#define _ShaderHLSLProgramProcessor_
#include "shaderprerequisites.h"
#include "shaderprogramprocessor.h"


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {

                /** CG Language program processor class.
                */
                class EV_RTSS_DLL CHLSLProgramProcessor : public EarthView::World::Graphic::RTShaderSystem::CProgramProcessor
                {
                ev_private:
                    CHLSLProgramProcessor(_in EarthView::World::Core::CNameValuePairList *pList);
                    /// Interface.
                public:

                    /** Class constructor.
                    @param type The type of this program.
                    */
                    CHLSLProgramProcessor			();
                    /** Class destructor */
                    virtual ~CHLSLProgramProcessor	();
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
                    static EVString TargetLanguage;
                };
            }
        }
    }
}

#endif

