#ifndef _ShaderProgramWriterGLSL_
#define _ShaderProgramWriterGLSL_
#include "shaderprogramwritermanager.h"
// using namespace EarthView::World::Core;
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {

                /** GLSL target language writer implementation.
                @see ProgramWriter.
                */
                class EV_RTSS_DLL CGLSLProgramWriter : public CProgramWriter
                {
                ev_private:
                    CGLSLProgramWriter(_in EarthView::World::Core::CNameValuePairList *pList);
                    /// Interface.
                public:
                    /** Class constructor.
                    @param language The target shader language.
                    */
                    CGLSLProgramWriter	();
                    /** Class destructor */
                    virtual ~CGLSLProgramWriter	();
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
                    void				initializeStringMaps		();
                    /** Write a local parameter. */
                    void				writeLocalParameter			(std::ostream &os, ParameterPtr parameter);
                    /** Write forward declarations. This is needed so that we can attach library shader at a later step. */
                    void				writeForwardDeclarations	(std::ostream &os, CProgram *program);
                    /** Write the input params of the function */
                    void				writeInputParameters		(std::ostream &os, CFunction *function, GpuProgramType gpuType);

                    /** Write the output params of the function */
                    void				writeOutParameters			(std::ostream &os, CFunction *function, GpuProgramType gpuType);
                protected:
                    typedef		map<GpuConstantType, const char *>		GpuConstTypeToStringMap;
                    typedef		map<CParameter::Semantic, const char *>	ParamSemanticToStringMap;
                    typedef		map<CParameter::Content, const char *>	ParamContentToStringMap;
                    typedef		map<EVString, EVString>					StringMap;
                    /// Attributes.
                protected:
                    GpuConstTypeToStringMap		mGpuConstTypeMap;								/// Map between GPU constant type to string value.
                    ParamSemanticToStringMap	mParamSemanticMap;								/// Map between parameter semantic to string value.
                    StringMap					mInputToGLStatesMap;							/// Map parameter name to a new parameter name (sometime renaming is required to match names between vertex and fragment shader)
                    ParamContentToStringMap		mContentToPerVertexAttributes;					/// Map parameter content to vertex attributes
                    int							mGLSLVersion;									/// Holds the current glsl version
                    EarthView::World::Core::StringVector				mFragInputParams;								/// Holds the fragment input params
                };
                /** GLSL program writer factory implementation.
                @see ProgramWriterFactory
                */
                class EV_RTSS_DLL CShaderProgramWriterGLSLFactory : public CProgramWriterFactory
                {
                ev_private:
                    CShaderProgramWriterGLSLFactory(_in EarthView::World::Core::CNameValuePairList *pList)
                    {
                        mLanguage = "glsl";
                    }
                public:
                    CShaderProgramWriterGLSLFactory()
                    {
                        mLanguage = "glsl";
                    }
                    virtual ~CShaderProgramWriterGLSLFactory() {}
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
                    virtual CProgramWriter *create()
                    {
                        return EV_NEW CGLSLProgramWriter();
                    }
                private:
                    EVString mLanguage;
                };
            }
        }
    }
}

#endif
