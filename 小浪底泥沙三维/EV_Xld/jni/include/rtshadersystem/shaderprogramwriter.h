#ifndef _ShaderProgramWriter_
#define _ShaderProgramWriter_
#include "shaderprerequisites.h"
#include "shaderprogram.h"
#include "shaderparameter.h"
#include "shaderfunction.h"
#include <gpuprogram.h>
#include <string.h>
#if EV_PLATFORM == EV_PLATFORM_ANDROID
#include <stringSerialiser.h>
#endif

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {

                /** Base class interface for shader program writers.
                The main usage of this class is to generate a shader source code from the given CPU program.
                In order to support specific shader language one should subclass this interface and implement the pure methods.
                */
                class EV_RTSS_DLL CProgramWriter : public EarthView::World::Core::CAllocatedObject
                {
                ev_private:
                    CProgramWriter(_in EarthView::World::Core::CNameValuePairList *pList) {}
                    /// Interface.
                public:
                    CProgramWriter() {}
                    /** Class destructor */
                    virtual ~CProgramWriter	() {}

                    /** Write the program shader source code.
                    @param os The output stream to write to code into.
                    @param program The source CPU program for the GPU program code.
                    */
#if EV_PLATFORM == EV_PLATFORM_ANDROID
                    virtual void				writeSourceCode			(CStringSerialiser &os, CProgram *program);
#else
                    virtual void				writeSourceCode			(std::ostream &os, CProgram *program);
#endif
                    /** Return the target language of this writer. */
                    virtual EVString		getTargetLanguage	() const
                    {
                        EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
                    }

                    /// Protected methods.
                protected:
                    /** Write the program title. */
#if EV_PLATFORM == EV_PLATFORM_ANDROID
                    void				writeProgramTitle			(CStringSerialiser &os, CProgram *program);
#else
                    void				writeProgramTitle			(std::ostream &os, CProgram *program);
#endif
                    /** Write the uniform parameters title. */
#if EV_PLATFORM == EV_PLATFORM_ANDROID
                    void				writeUniformParametersTitle	(CStringSerialiser &os, CProgram *program);
#else
                    void				writeUniformParametersTitle	(std::ostream &os, CProgram *program);
#endif
                    /** Write a function title. */
#if EV_PLATFORM == EV_PLATFORM_ANDROID
                    void				writeFunctionTitle			(CStringSerialiser &os, CFunction *function);
#else
                    void				writeFunctionTitle			(std::ostream &os, CFunction *function);
#endif
                };
            }
        }
    }
}

#endif
