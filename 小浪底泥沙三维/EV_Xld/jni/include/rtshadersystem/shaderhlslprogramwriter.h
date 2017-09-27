#ifndef __ShaderProgramWriterHLSL_H__
#define __ShaderProgramWriterHLSL_H__
#include "shaderprogramwritermanager.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {


                /** HLSL target language writer implementation.
                @see ProgramWriter.
                */
                class EV_RTSS_DLL CHLSLProgramWriter : public EarthView::World::Graphic::RTShaderSystem::CProgramWriter
                {
                ev_private:
                    CHLSLProgramWriter(_in EarthView::World::Core::CNameValuePairList *pList);
                    /// Interface.
                public:
                    /** Class constructor.
                    @param language The target shader language.
                    */
                    CHLSLProgramWriter	();
                    /** Class destructor */
                    virtual ~CHLSLProgramWriter ();
                ev_private:
                    /**
                    @see ProgramWriter::writeSourceCode.
                    */
                    virtual void			writeSourceCode			(std::ostream &os, CProgram *program);
                public:
                    /**
                    @see ProgramWriter::getTargetLanguage.
                    */
                    virtual EVString  getTargetLanguage			() const
                    {
                        return TargetLanguage;
                    }
                    static EVString TargetLanguage;
                    /// Protected methods.
                protected:
                    /** Initialize string maps. */
                    void		initializeStringMaps		();
                    /** Write the program dependencies. */
                    void		writeProgramDependencies	(std::ostream &os, CProgram *program);
                    /** Write a uniform parameter. */
                    void		writeUniformParameter		(std::ostream &os, UniformParameterPtr parameter);
                    /** Write a function parameter. */
                    void		writeFunctionParameter		(std::ostream &os, ParameterPtr parameter);
                    /** Write a local parameter. */
                    void		writeLocalParameter			(std::ostream &os, ParameterPtr parameter);
                    /** Write a function declaration. */
                    void		writeFunctionDeclaration	(std::ostream &os, CFunction *function, bool &needToTranslateHlsl4Color, ParameterPtr &colorParameter);
                    /** Write function atom instance. */
                    void		writeAtomInstance			(std::ostream &os, CFunctionAtom *atom);

                protected:
                    typedef		map<GpuConstantType, const char *>		GpuConstTypeToStringMap;
                    typedef		map<CParameter::Semantic, const char *>	ParamSemanticToStringMap;
                    /// Attributes.
                protected:
                    GpuConstTypeToStringMap		mGpuConstTypeMap;						/// Map between GPU constant type to string value.
                    ParamSemanticToStringMap	mParamSemanticMap;						/// Map between parameter semantic to string value.
                };
                /** HLSL program writer factory implementation.
                @see ProgramWriterFactory
                */
                class EV_RTSS_DLL CShaderProgramWriterHLSLFactory : public CProgramWriterFactory
                {
                ev_private:
                    CShaderProgramWriterHLSLFactory(_in EarthView::World::Core::CNameValuePairList *pList)
                    {
                        mLanguage = "hlsl";
                    }
                public:
                    CShaderProgramWriterHLSLFactory()
                    {
                        mLanguage = "hlsl";
                    }
                    virtual ~CShaderProgramWriterHLSLFactory() {}
                    /**
                    @see ProgramWriterFactory::getTargetLanguage
                    */
                    virtual EVString getTargetLanguage() const
                    {
                        return mLanguage;
                    }
                    /**
                    @see ProgramWriterFactory::create
                    */
                    virtual _extfree CProgramWriter *create()
                    {
                        return EV_NEW CHLSLProgramWriter();
                    }
                private:
                    EVString mLanguage;
                };
            }
        }
    }
}

#endif
