#ifndef _ShaderProgramWriterGLSLES_
#define _ShaderProgramWriterGLSLES_
#include "shaderprogramwritermanager.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {

                /** GLSL ES target language writer implementation.
                @see ProgramWriter.
                */
                class CGLSLESProgramWriter : public CProgramWriter
                {
                    /// Interface.
                public:
                    /** Class constructor.
                    @param language The target shader language.
                    */
                    CGLSLESProgramWriter	();
                    /** Class destructor */
                    virtual ~CGLSLESProgramWriter	();

                    /**
                    @see ProgramWriter::writeSourceCode.
                    */
#if EV_PLATFORM == EV_PLATFORM_ANDROID
                    virtual void            writeSourceCode			(CStringSerialiser &os, CProgram *program);
#else
                    virtual void            writeSourceCode			(std::ostream &os, CProgram *program);
#endif
                    /**
                    @see ProgramWriter::getTargetLanguage.
                    */
                    virtual EVString   getTargetLanguage		() const
                    {
                        return TargetLanguage;
                    }
                    static EVString TargetLanguage;
                protected:
                    typedef		map<GpuConstantType, const char *>		GpuConstTypeToStringMap;
                    typedef		map<CParameter::Semantic, const char *>	ParamSemanticToStringMap;
                    typedef		map<CParameter::Content, const char *>	ParamContentToStringMap;
                    typedef		map<EVString, EVString>					StringMap;
                    typedef		map<CFunctionInvocation, EVString>		FunctionMap;
                    typedef		vector<CFunctionInvocation>             FunctionVector;
                    typedef     FunctionMap::const_iterator                 FunctionMapIterator;
                    typedef     FunctionVector::const_iterator              FunctionVectorIterator;
                    typedef     GpuConstTypeToStringMap::const_iterator     GpuConstTypeToStringMapIterator;
                    /// Protected methods.
                protected:
                    /** Initialize string maps. */
                    void				initializeStringMaps		();
                ev_internal:
                    /** Cache functions of a dependency */
                    virtual void        cacheDependencyFunctions(const EVString &libName);
                protected:
                    /** Create a FunctionInvocation object from a string taken out of a shader library. */
                    CFunctionInvocation	*createInvocationFromString	(const EVString &input);
                    /** Write the program dependencies. */
#if EV_PLATFORM == EV_PLATFORM_ANDROID
                    void                writeProgramDependencies	(CStringSerialiser &os, CProgram *program);
#else
                    void                writeProgramDependencies	(std::ostream &os, CProgram *program);
#endif
                    /** Write a local parameter. */
#if EV_PLATFORM == EV_PLATFORM_ANDROID
                    void				writeLocalParameter			(CStringSerialiser &os, ParameterPtr parameter);
#else
                    void				writeLocalParameter			(std::ostream &os, ParameterPtr parameter);
#endif
                    /** Write the input params of the function */
#if EV_PLATFORM == EV_PLATFORM_ANDROID
                    void				writeInputParameters		(CStringSerialiser &os, CFunction *function, GpuProgramType gpuType);
#else
                    void				writeInputParameters		(std::ostream &os, CFunction *function, GpuProgramType gpuType);
#endif

                    /** Write the output params of the function */
#if EV_PLATFORM == EV_PLATFORM_ANDROID
                    void				writeOutParameters			(CStringSerialiser &os, CFunction *function, GpuProgramType gpuType);
#else
                    void				writeOutParameters			(std::ostream &os, CFunction *function, GpuProgramType gpuType);
#endif
#if EV_PLATFORM == EV_PLATFORM_ANDROID
                    void writeAssignFunction(CStringSerialiser &os, CFunctionInvocation::OperandVector::iterator itOperand, CFunctionInvocation::OperandVector::iterator itOperandEnd, GpuProgramType gpuType);
#else
                    void writeAssignFunction(stringstream &os, CFunctionInvocation::OperandVector::iterator itOperand, CFunctionInvocation::OperandVector::iterator itOperandEnd, GpuProgramType gpuType);
#endif
                    EVString processOperand(COperand op, GpuProgramType gpuType);

                    /** Check if a string matches one of the GLSL ES basic types */
                    bool                isBasicType(EVString &type);

                    /** Search within a function body for non-builtin functions that a given function invocation depends on. */
                    void                discoverFunctionDependencies(const CFunctionInvocation &invoc, FunctionVector &depVector);
                    /// Attributes.
                protected:
                    GpuConstTypeToStringMap		mGpuConstTypeMap;								/// Map between GPU constant type to string value.
                    ParamSemanticToStringMap	mParamSemanticMap;								/// Map between parameter semantic to string value.
                    StringMap					mInputToGLStatesMap;							/// Map parameter name to a new parameter name (sometimes renaming is required to match names between vertex and fragment shader)
                    FunctionMap                 mFunctionCacheMap;              				/// Map function invocation to body.  Used as a cache to reduce library file reads and for inlining
                    StringMap                   mDefinesMap;                    				/// Map of #defines and the function library that contains them
                    ParamContentToStringMap		mContentToPerVertexAttributes;					/// Map parameter content to vertex attributes
                    int							mGLSLVersion;									/// Holds the current glsl es version
                    EarthView::World::Core::StringVector				mFragInputParams;								/// Holds the fragment input params
                    StringMap                   mCachedFunctionLibraries;       				/// Holds the cached function libraries
                };
                /** GLSL ES program writer factory implementation.
                @see ProgramWriterFactory
                */
                class CShaderProgramWriterGLSLESFactory : public CProgramWriterFactory
                {
                public:
                    CShaderProgramWriterGLSLESFactory()
                    {
                        mLanguage = "glsles";
                    }
                    virtual ~CShaderProgramWriterGLSLESFactory() {}
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
                        return EV_NEW CGLSLESProgramWriter();
                    }
                private:
                    EVString mLanguage;
                };
            }
        }
    }
}

#endif
