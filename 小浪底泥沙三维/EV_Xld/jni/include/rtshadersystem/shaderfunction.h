#ifndef _ShaderProgramFunction_
#define _ShaderProgramFunction_
#include "shaderprerequisites.h"
#include "shaderparameter.h"
#include "shaderfunctionatom.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {


                /** A class that represents a shader based program function.
                */
                class EV_RTSS_DLL CFunction : public EarthView::World::Core::CAllocatedObject
                {
                    /// Interface.
                public:
                    enum FunctionType
                    {
                        /// internal function (default)
                        FFT_INTERNAL,
                        /// Vertex program main
                        FFT_VS_MAIN,
                        /// Pixel shader main
                        FFT_PS_MAIN
                    };
                    /** Get the name of this function */
                    const EVString				&getName					() const
                    {
                        return mName;
                    }
                    /** Get the description of this function */
                    const EVString				&getDescription			() const
                    {
                        return mDescription;
                    }
                    /** Resolve input parameter of this function
                    @param semantic The desired parameter semantic.
                    @param index The index of the desired parameter.
                    @param content The content of the parameter.
                    @param type The type of the desired parameter.
                    Return parameter instance in case of that resolve operation succeeded.
                    @remarks CPass -1 as index parameter to create a new parameter with the desired semantic and type.
                    */
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr				resolveInputParameter	(EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic semantic, int index,  const EarthView::World::Graphic::RTShaderSystem::CParameter::Content content, EarthView::World::Graphic::GpuConstantType type);

                    /** Resolve output parameter of this function
                    @param semantic The desired parameter semantic.
                    @param index The index of the desired parameter.
                    @param content The content of the parameter.
                    @param type The type of the desired parameter.
                    Return parameter instance in case of that resolve operation succeeded.
                    @remarks CPass -1 as index parameter to create a new parameter with the desired semantic and type.
                    */
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr				resolveOutputParameter	(EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic semantic, int index,  const EarthView::World::Graphic::RTShaderSystem::CParameter::Content content, EarthView::World::Graphic::GpuConstantType type);
                    /** Resolve local parameter of this function
                    @param semantic The desired parameter semantic.
                    @param index The index of the desired parameter.
                    @param name The name of the parameter.
                    @param type The type of the desired parameter.
                    Return parameter instance in case of that resolve operation succeeded.
                    */
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr				resolveLocalParameter	(EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic semantic, int index, const EVString &name, EarthView::World::Graphic::GpuConstantType type);
                    /** Resolve local parameter of this function
                    @param semantic The desired parameter semantic.
                    @param index The index of the desired parameter.
                    @param content The content of the parameter.
                    @param type The type of the desired parameter.
                    Return parameter instance in case of that resolve operation succeeded.
                    */
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr				resolveLocalParameter	(EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic semantic, int index, const EarthView::World::Graphic::RTShaderSystem::CParameter::Content content, EarthView::World::Graphic::GpuConstantType type);


                    /**
                    Get parameter by a given name from the given parameter list.
                    @param parameterList The parameters list to look in.
                    @param name The name of the parameter to search in the list.
                    @remarks Return NULL if no matching parameter found.
                    */
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr				getParameterByName		(const EarthView::World::Graphic::RTShaderSystem::ShaderParameterList &parameterList, const EVString &name);
                    /**
                    Get parameter by a given semantic and index from the given parameter list.
                    @param parameterList The parameters list to look in.
                    @param semantic The semantic of the parameter to search in the list.
                    @param index The index of the parameter to search in the list.
                    @remarks Return NULL if no matching parameter found.
                    */
                    static EarthView::World::Graphic::RTShaderSystem::ParameterPtr				getParameterBySemantic	(const EarthView::World::Graphic::RTShaderSystem::ShaderParameterList &parameterList, const EarthView::World::Graphic::RTShaderSystem::CParameter::Semantic semantic, int index);

                    /**
                    Get parameter by a given content and type from the given parameter list.
                    @param parameterList The parameters list to look in.
                    @param content The content of the parameter to search in the list.
                    @param type The type of the parameter to search in the list.
                    @remarks Return NULL if no matching parameter found.
                    */
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr					getParameterByContent	(const EarthView::World::Graphic::RTShaderSystem::ShaderParameterList &parameterList, const EarthView::World::Graphic::RTShaderSystem::CParameter::Content content, EarthView::World::Graphic::GpuConstantType type);
                    /** Return a list of input parameters. */
                    const EarthView::World::Graphic::RTShaderSystem::ShaderParameterList		&getInputParameters		() const
                    {
                        return mInputParameters;
                    }

                    /** Return a list of output parameters. */
                    const EarthView::World::Graphic::RTShaderSystem::ShaderParameterList		&getOutputParameters		() const
                    {
                        return mOutputParameters;
                    }
                    /** Return a list of local parameters. */
                    const EarthView::World::Graphic::RTShaderSystem::ShaderParameterList		&getLocalParameters		() const
                    {
                        return mLocalParameters;
                    }

                    /** Add a function atom instance to this function.
                    @param atomInstance The atom instance to add.
                    */
                    void							addAtomInstance			(EarthView::World::Graphic::RTShaderSystem::CFunctionAtom *atomInstance);
                    /** Delete a function atom instance from this function.
                    @param atomInstance The atom instance to EV_DELETE.
                    */
                    bool							deleteAtomInstance		(EarthView::World::Graphic::RTShaderSystem::CFunctionAtom *atomInstance);
                    /** Sort all atom instances of this function. */
                    void							sortAtomInstances		();
                    /** Return list of atom instances composing this function. */
                    EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList		&getAtomInstances		()
                    {
                        return mAtomInstances;
                    }
                    /** Return list of atom instances composing this function. (Const version) */
                    const EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList	&getAtomInstances		() const
                    {
                        return mAtomInstances;
                    }
                    /** Add input parameter to this function. */
                    void						addInputParameter			(EarthView::World::Graphic::RTShaderSystem::ParameterPtr parameter);
                    /** Add output parameter to this function. */
                    void						addOutputParameter			(EarthView::World::Graphic::RTShaderSystem::ParameterPtr parameter);
                    /** Delete input parameter from this function. */
                    void						deleteInputParameter		(EarthView::World::Graphic::RTShaderSystem::ParameterPtr parameter);
                    /** Delete output parameter from this function. */
                    void						deleteOutputParameter		(EarthView::World::Graphic::RTShaderSystem::ParameterPtr parameter);
                    /** Delete all input parameters from this function. */
                    void						deleteAllInputParameters	();
                    /** Delete all output parameters from this function. */
                    void						deleteAllOutputParameters	();
                    /** get function type. */
                    EarthView::World::Graphic::RTShaderSystem::CFunction::FunctionType getFunctionType() const;

                protected:
                    /** Class constructor.
                    @param name The name of this function.
                    @param desc The description of this function.
                    @remarks This class is allocated via an instance of Program class.
                    */
                    CFunction(const EVString &name, const EVString &desc, const EarthView::World::Graphic::RTShaderSystem::CFunction::FunctionType functionType);
                    /** Class destructor */
                    ~CFunction();
                    /** Add parameter to given list */
                    void						addParameter				(EarthView::World::Graphic::RTShaderSystem::ShaderParameterList &parameterList, EarthView::World::Graphic::RTShaderSystem::ParameterPtr parameter);
                    /** Delete parameter from a given list */
                    void						deleteParameter				(EarthView::World::Graphic::RTShaderSystem::ShaderParameterList &parameterList, EarthView::World::Graphic::RTShaderSystem::ParameterPtr parameter);
                    /** Function atom comparison function used to sort atoms. */
                    static int					sAtomInstanceCompare		(const void *p0, const void *p1);
                protected:
                    EVString						mName;										/// Function name.
                    EVString						mDescription;								/// Function description.
                    EarthView::World::Graphic::RTShaderSystem::ShaderParameterList			mInputParameters;							/// Input parameters.
                    EarthView::World::Graphic::RTShaderSystem::ShaderParameterList			mOutputParameters;							/// Output parameters.
                    EarthView::World::Graphic::RTShaderSystem::ShaderParameterList			mLocalParameters;							/// Local parameters.
                    EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList	mAtomInstances;								/// Atom instances composing this function.
                    EarthView::World::Graphic::RTShaderSystem::CFunction::FunctionType				mFunctionType;								/// Function type

                private:
                    friend class CProgram;
                };
                ///typedef vector<EarthView::World::Graphic::RTShaderSystem::CFunction*>						ShaderFunctionList;
                class EV_RTSS_DLL ShaderFunctionList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Graphic::RTShaderSystem::CFunction *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList); 				///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(iterator pos, EarthView::World::Graphic::RTShaderSystem::CFunction *const &t)
                    {
                        return mList.insert(pos, t);
                    }
                private:
                    InternalList mList;
                ev_private:
                    ShaderFunctionList(_in EarthView::World::Core::CNameValuePairList *pList) {};
                public:
                    ShaderFunctionList() {};
                    void push_back(EarthView::World::Graphic::RTShaderSystem::CFunction *t)
                    {
                        mList.push_back(t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    EarthView::World::Graphic::RTShaderSystem::CFunction*& front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::RTShaderSystem::CFunction*& back()
                    {
                        return mList.back();
                    }
                    void insert(ev_uint32 pos, EarthView::World::Graphic::RTShaderSystem::CFunction *const &t)
                    {
                        mList.insert(begin() + pos, t);
                    }
                    void remove(ev_size_t pos)
                    {
                        iterator it = mList.begin();
                        it = it + pos;
                        mList.erase(it);
                    }
                    ev_bool empty() const
                    {
                        return mList.empty();
                    }
                    EarthView::World::Graphic::RTShaderSystem::CFunction*& operator[](ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::RTShaderSystem::CFunction *const &operator[](ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::RTShaderSystem::CFunction*& at(ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::RTShaderSystem::CFunction *const &at(ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    ev_size_t size() const
                    {
                        return mList.size();
                    }
                    void resize(ev_size_t newSize)
                    {
                        mList.resize(newSize);
                    }
                    void reserve(ev_size_t count)
                    {
                        mList.reserve(count);
                    }
                    void clear()
                    {
                        mList.clear();
                    }
                };

                typedef ShaderFunctionList::iterator 				ShaderFunctionIterator;
                typedef ShaderFunctionList::const_iterator			ShaderFunctionConstIterator;
            }
        }
    }
}

#endif

