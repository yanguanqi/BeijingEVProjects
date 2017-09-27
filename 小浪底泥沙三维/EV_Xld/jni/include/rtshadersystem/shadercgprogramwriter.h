#ifndef __ShaderProgramWriterCG_H__
#define __ShaderProgramWriterCG_H__
#include "shaderprogramwritermanager.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {

                /** CG target language writer implementation.
                @see ProgramWriter.
                */
                class EV_RTSS_DLL CCGProgramWriter : public CProgramWriter
                {
                    /// Interface.
                public:
                    /** Class constructor.
                    @param language The target shader language.
                    */
                    CCGProgramWriter	();
                    /** Class destructor */
                    virtual ~CCGProgramWriter ();
                ev_private:
                    CCGProgramWriter(_in EarthView::World::Core::CNameValuePairList *pList);
                ev_internal:
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
                ev_private:
                    /** Write the program dependencies. */
                    void		writeProgramDependencies	(std::ostream &os, CProgram *program);

                    /** Write a uniform parameter. */
                    void		writeUniformParameter		(std::ostream &os, UniformParameterPtr parameter);
                    /** Write a function parameter. */
                    void		writeFunctionParameter		(std::ostream &os, ParameterPtr parameter);
                    /** Write a local parameter. */
                    void		writeLocalParameter			(std::ostream &os, ParameterPtr parameter);
                    /** Write a function declaration. */
                    void		writeFunctionDeclaration	(std::ostream &os, CFunction *function, ParameterPtr &colorParameter);
                    /** Write function atom instance. */
                    void		writeAtomInstance			(std::ostream &os, CFunctionAtom *atom);

                protected:
                    typedef		map<EarthView::World::Graphic::GpuConstantType, const char *>		GpuConstTypeToStringMap;
                    typedef		map<EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic, const char *>	ParamSemanticToStringMap;
                    /// Attributes.
                protected:
                    GpuConstTypeToStringMap		mGpuConstTypeMap;						/// Map between GPU constant type to string value.
                    ParamSemanticToStringMap	mParamSemanticMap;						/// Map between parameter semantic to string value.
                };
                /** CG program writer factory implementation.
                @see ProgramWriterFactory
                */
                class EV_RTSS_DLL CShaderProgramWriterCGFactory : public CProgramWriterFactory
                {
                ev_private:
                    CShaderProgramWriterCGFactory(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    CShaderProgramWriterCGFactory()
                    {
                        mLanguage = "cg";
                    }
                    virtual ~CShaderProgramWriterCGFactory() {}
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
                        return EV_NEW CCGProgramWriter();
                    }
                private:
                    EVString mLanguage;
                };
            }
        }
    }
}


#endif
