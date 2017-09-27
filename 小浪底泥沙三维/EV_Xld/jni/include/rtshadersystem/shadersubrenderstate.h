#ifndef _ShaderSubRenderState_
#define _ShaderSubRenderState_
#include "rtshadersystem/shaderprerequisites.h"
#include "rtshadersystem/shaderscripttranslator.h"
#include <graphic/gpuprogram.h>
#include <graphic/scenemanager.h>
#include <graphic/materialserializer.h>
#include <graphic/scriptcompiler.h>


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {

                ///typedef EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor>	EarthView::World::Graphic::RTShaderSystem::SubRenderStateAccessorPtr;
                class EV_RTSS_DLL SubRenderStateAccessorPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor>
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    SubRenderStateAccessorPtr( _in EarthView::World::Core::CNameValuePairList *pList ) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor>(
                            pList && pList->Exist("rep") ? (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor *)pList->GetAt("rep") : (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor *) NULL
                            , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                    {
                        if(pList && pList->Exist("r"))
                        {
                            EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor>r = *(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor>*)pList->GetAt("r");
                            EV_SET_AUTO_SHARED_MUTEX_NULL
                            EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                            {
                                EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                                EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                                pRep = r.pRep;
                                pUseCount = r.pUseCount;
                                useFreeMethod = r.useFreeMethod;
                                /// Handle zero pointer gracefully to manage STL containers
                                if(pUseCount)
                                {
                                    ++(*pUseCount);
                                }
                            }
                        }
                    }
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    SubRenderStateAccessorPtr() : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor>()
                    {
                    }
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="rep"></param>
                    /// <returns></returns>
                    explicit SubRenderStateAccessorPtr( EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor *rep ) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor>(rep)
                    {
                    }
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="rep"></param>
                    /// <param name="inFreeMethod"></param>
                    /// <returns></returns>
                    explicit SubRenderStateAccessorPtr( EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor *rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod ) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor>(rep, inFreeMethod)
                    {
                    }
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="r"></param>
                    /// <returns></returns>
                    SubRenderStateAccessorPtr( const SubRenderStateAccessorPtr &r ) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor>(r)
                    {
                    }

                    EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor *get() const
                    {
                        return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor>::get();
                    }
                };
                /** This class is the base interface of sub part from a shader based rendering pipeline.
                * All sub parts implementations should derive from it and implement the needed methods.
                A simple example of sub class of this interface will be the transform sub state of the
                fixed pipeline.
                */
                class EV_RTSS_DLL CSubRenderState : public EarthView::World::Core::CAllocatedObject
                {
                ev_private:
                    CSubRenderState(_in EarthView::World::Core::CNameValuePairList *pList);
                    /// Interface.
                public:
                    /** Class default constructor */
                    CSubRenderState();
                    /** Class destructor */
                    virtual ~CSubRenderState();

                    /** Get the type of this sub render state.
                    @remarks
                    The type string should be unique among all registered sub render states.
                    */
                    virtual EVString	getType					() const
                    {
                        EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
                    }

                    /** Get the execution order of this sub render state.
                    @remarks
                    The return value should be synchronized with the predefined values
                    of the FFPShaderStage enum.
                    */
                    virtual int				getExecutionOrder		() const
                    {
                        EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
                    }

                    /** Copy details from a given sub render state to this one.
                    @param rhs the source sub state to copy from.
                    */
                    virtual void			copyFrom				(const EarthView::World::Graphic::RTShaderSystem::CSubRenderState &rhs)
                    {
                        EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
                    }

                    /** Operator = declaration. Assign the given source sub state to this sub state.
                    @param rhs the source sub state to copy from.
                    */
                    EarthView::World::Graphic::RTShaderSystem::CSubRenderState &operator=	(const EarthView::World::Graphic::RTShaderSystem::CSubRenderState &rhs);
                    /** Create sub programs that represents this sub render state as part of a program set.
                    The given program set contains CPU programs that represents a vertex shader and pixel shader.
                    One should use these program class API to create a representation of the sub state he wished to
                    implement.
                    @param programSet container class of CPU and GPU programs that this sub state will affect on.
                    */
                    virtual bool			createCpuSubPrograms	(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    /** Update GPU programs parameters before a rendering operation occurs.
                    This method is called in the context of CSceneManager::renderSingle object via the CRenderObjectListener interface and
                    lets this sub render state instance opportunity to update custom GPU program parameters before the rendering action occurs.
                    @see CRenderObjectListener::notifyRenderSingleObject.
                    @param rend The renderable that is about to be rendered.
                    @param pass The pass that used for this rendering.
                    @source The auto parameter source.
                    @pLightList The light list used in the current rendering context.
                    */
                    virtual void			updateGpuProgramsParams	(EarthView::World::Graphic::CRenderable *rend, EarthView::World::Graphic::CPass *pass,  const EarthView::World::Graphic::CAutoParamDataSource *source, 	const EarthView::World::Graphic::LightList *pLightList) { }
                    /** Called before adding this sub render state to the given render state.
                    Allows this sub render state class to configure specific parameters depending on source pass or parent render state.
                    Return of false value will cause canceling the add operation.
                    @param renderState The target render state container this sub render state is about to be added.
                    @param srcPass The source pass.
                    @param dstPass The destination pass.
                    */
                    virtual bool			preAddToRenderState		(const EarthView::World::Graphic::RTShaderSystem::CRenderState *renderState, EarthView::World::Graphic::CPass *srcPass, EarthView::World::Graphic::CPass *dstPass)
                    {
                        return true;
                    }
                    /** Return the accessor object to this sub render state.
                    @see SubRenderStateAccessor.
                    */
                    EarthView::World::Graphic::RTShaderSystem::SubRenderStateAccessorPtr	getAccessor				();
                    /** Return the accessor object to this sub render state.
                    @see SubRenderStateAccessor.
                    */
                    EarthView::World::Graphic::RTShaderSystem::SubRenderStateAccessorPtr	getAccessor				() const;
                    /// Protected methods
                ev_internal:
                    /** Resolve parameters that this sub render state requires.
                    @param programSet container class of CPU and GPU programs that this sub state will affect on.
                    @remarks Internal method called in the context of SubRenderState::createCpuSubPrograms implementation.
                    */
                    virtual bool			resolveParameters		(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);

                    /** Resolve dependencies that this sub render state requires.
                    @param programSet container class of CPU and GPU programs that this sub state will affect on.
                    @remarks Internal method called in the context of SubRenderState::createCpuSubPrograms implementation.
                    */
                    virtual bool			resolveDependencies		(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    /** Add function invocation that this sub render state requires.
                    @param programSet container class of CPU and GPU programs that this sub state will affect on.
                    @remarks Internal method called in the context of SubRenderState::createCpuSubPrograms implementation.
                    */
                    virtual bool			addFunctionInvocations	(EarthView::World::Graphic::RTShaderSystem::CProgramSet *programSet);
                    /// Attributes.
                private:
                    mutable EarthView::World::Graphic::RTShaderSystem::SubRenderStateAccessorPtr	mThisAccessor;							/// The accessor of this instance.
                    EarthView::World::Graphic::RTShaderSystem::SubRenderStateAccessorPtr			mOtherAccessor;							/// The accessor of the source instance which used as base to create this instance.

                };
                ///typedef vector<EarthView::World::Graphic::RTShaderSystem::CSubRenderState*> 				SubRenderStateList;
                class EV_RTSS_DLL SubRenderStateList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Graphic::RTShaderSystem::CSubRenderState *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList); 				///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(iterator pos, EarthView::World::Graphic::RTShaderSystem::CSubRenderState *const &t)
                    {
                        return mList.insert(pos, t);
                    }
                private:
                    InternalList mList;
                ev_private:
                    SubRenderStateList(_in EarthView::World::Core::CNameValuePairList *pList) {};
                public:
                    SubRenderStateList() {};
                    void push_back(EarthView::World::Graphic::RTShaderSystem::CSubRenderState *t)
                    {
                        mList.push_back(t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    EarthView::World::Graphic::RTShaderSystem::CSubRenderState*& front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::RTShaderSystem::CSubRenderState*& back()
                    {
                        return mList.back();
                    }
                    void insert(ev_uint32 pos, EarthView::World::Graphic::RTShaderSystem::CSubRenderState *const &t)
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
                    EarthView::World::Graphic::RTShaderSystem::CSubRenderState*& operator[](ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::RTShaderSystem::CSubRenderState *const &operator[](ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::RTShaderSystem::CSubRenderState*& at(ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::RTShaderSystem::CSubRenderState *const &at(ev_size_t n) const
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

                typedef SubRenderStateList::iterator 				SubRenderStateListIterator;

                typedef SubRenderStateList::const_iterator			SubRenderStateListConstIterator;
                ///typedef set<EarthView::World::Graphic::RTShaderSystem::CSubRenderState*> 					EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet;
                class EV_RTSS_DLL SubRenderStateSet : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef set<EarthView::World::Graphic::RTShaderSystem::CSubRenderState *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_SET(mList);
                    iterator insert(_in iterator pos, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState*& t)
                    {
                        return mList.insert(pos, t);
                    };
                private:
                    InternalList mList;

                ev_private:
                    SubRenderStateSet(_in EarthView::World::Core::CNameValuePairList *pList) {};
                public:

                    SubRenderStateSet() {};
                    void insert(EarthView::World::Graphic::RTShaderSystem::CSubRenderState *val)
                    {
                        mList.insert(val);
                    };
                    ev_size_t size()
                    {
                        return mList.size();
                    };
                    ev_size_t erase(_in EarthView::World::Graphic::RTShaderSystem::CSubRenderState *const  &key)
                    {
                        return mList.erase(key);
                    };
                    ev_bool empty()
                    {
                        return mList.empty();
                    };
                    void clear()
                    {
                        mList.clear();
                    };
                    ev_size_t count(_in EarthView::World::Graphic::RTShaderSystem::CSubRenderState *const &key)
                    {
                        return mList.count(key);
                    };
                    ev_size_t max_size()
                    {
                        return mList.max_size();
                    };
                    void swap(_inout EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet &other)
                    {
                        mList.swap(other.mList);
                    };
                ev_private:
                    iterator find( EarthView::World::Graphic::RTShaderSystem::CSubRenderState *const &key)
                    {
                        return mList.find(key);
                    };


                    const_iterator find(EarthView::World::Graphic::RTShaderSystem::CSubRenderState *const &key) const
                    {
                        return mList.find(key);
                    };
                };

                typedef SubRenderStateSet::iterator 				SubRenderStateSetIterator;
                typedef SubRenderStateSet::const_iterator			SubRenderStateSetConstIterator;

                /** This class uses as accessor from a template SubRenderState to all of its instances that
                created based on it. Since SubRenderState that added as templates to a RenderState are not directly used by the
                system this class enable accessing the used instances.
                A common usage will be add a SubRenderState to certain pass, obtain accessor and then call a method on the instanced SubRenderState
                that will trigger some GPU uniform parameter updates.
                */
                class EV_RTSS_DLL CSubRenderStateAccessor : public EarthView::World::Core::CBaseObject
                {
                public:
                    /** Add SubRenderState instance to this accessor.
                    */
                    void addSubRenderStateInstance(EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState) const
                    {
                        mSubRenderStateInstancesSet.insert(subRenderState);
                    }
                    /** Remove SubRenderState instance to this accessor.
                    */
                    void removeSubRenderStateInstance(EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState) const
                    {
                        SubRenderStateSetIterator itFind = mSubRenderStateInstancesSet.find(subRenderState);
                        if (itFind != mSubRenderStateInstancesSet.end())
                        {
                            mSubRenderStateInstancesSet.erase(itFind);
                        }
                    }
                    /** Return a set of all instances of the template SubRenderState. */
                    EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet	&getSubRenderStateInstanceSet()
                    {
                        return mSubRenderStateInstancesSet;
                    }
                    /** Return a set of all instances of the template SubRenderState. (const version). */
                    const EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet	&getSubRenderStateInstanceSet() const
                    {
                        return mSubRenderStateInstancesSet;
                    }
                protected:
                    /** Construct SubRenderState accessor based on the given template SubRenderState.
                    */
                    CSubRenderStateAccessor(const EarthView::World::Graphic::RTShaderSystem::CSubRenderState *templateSubRenderState) : mTemplateSubRenderState(templateSubRenderState) {}

                protected:
                    const EarthView::World::Graphic::RTShaderSystem::CSubRenderState		*mTemplateSubRenderState;
                    mutable EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet	mSubRenderStateInstancesSet;
                private:
                    friend class EarthView::World::Graphic::RTShaderSystem::CSubRenderState;
                };

                /** Abstract factory interface for creating SubRenderState implementation instances.
                @remarks
                Plugins or 3rd party applications can add new types of sub render states to the
                RTShader System by creating subclasses of the SubRenderState class.
                Because multiple instances of these sub class may be required,
                a factory class to manage the instances is also required.
                @par
                SubRenderStateFactory subclasses must allow the creation and destruction of SubRenderState
                subclasses. They must also be registered with the ShaderGenerator::addSubRenderStateFactory.
                All factories have a type which identifies them and the sub class of SubRenderState they creates.
                */
                class EV_RTSS_DLL CSubRenderStateFactory : public EarthView::World::Core::CAllocatedObject
                {
                ev_private:
                    CSubRenderStateFactory(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    CSubRenderStateFactory			() {}
                    virtual ~CSubRenderStateFactory	();
                    /** Get the type of this sub render state factory.
                    @remarks
                    The type string should be the same as the type of the SubRenderState sub class it is going to create.
                    @see SubRenderState::getType.
                    */
                    virtual EVString	getType				() const
                    {
						EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
                    }

                    /** Create an instance of the SubRenderState sub class it suppose to create.
                    */
                    virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState	*createInstance		();
                    /** Create an instance of the SubRenderState based on script properties.
                    This method is called in the context of script parsing and let this factory
                    the opportunity to create custom SubRenderState instances based on extended script properties.
                    @param compiler The compiler instance.
                    @param prop The abstract property node.
                    @param pass The pass that is the parent context of this node.
                    */
                    virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState	*createInstance		(EarthView::World::Graphic::CScriptCompiler *compiler, EarthView::World::Graphic::CPropertyAbstractNode *prop, EarthView::World::Graphic::CPass *pass, EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *translator)
                    {
                        return NULL;
                    }
                    /** Create an instance of the SubRenderState based on script properties.
                    This method is called in the context of script parsing and let this factory
                    the opportunity to create custom SubRenderState instances based on extended script properties.
                    @param compiler The compiler instance.
                    @param prop The abstract property node.
                    @param texState The pass that is the parent context of this node.
                    */
                    virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState	*createInstance		(EarthView::World::Graphic::CScriptCompiler *compiler, EarthView::World::Graphic::CPropertyAbstractNode *prop, EarthView::World::Graphic::CTextureUnitState *texState, EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *translator)
                    {
                        return NULL;
                    }
                    /** Retrieve the previous instance the SRS in the script translator or
                    * create a new instance if not found
                    @param translator The translator instance holding existing scripts.
                    */
                    virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState	*createOrRetrieveInstance(EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator *translator);
                    /** Destroy the given instance.
                    @param subRenderState The instance to destroy.
                    */
                    virtual void			destroyInstance		(EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState);
                    /** Destroy all the instances that created by this factory.
                    */
                    virtual void			destroyAllInstances	();
/*                    This method is called in the context of material serialization. It is useful for integrating into
                    bigger context of material exporters from various environment that want to take advantage of the RT Shader System.
                    Sub classes of this interface should override in case they need to write custom properties into the script context.
                    @param ser The material serializer instance.
                    @param subRenderState The sub render state instance to write down.
                    @param srcPass The source pass.
                    @param dstPass The generated shader based pass.
                    */
                    virtual void			writeInstance		(EarthView::World::Graphic::CMaterialSerializer *ser, EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState, EarthView::World::Graphic::CPass *srcPass, EarthView::World::Graphic::CPass *dstPass) {}
/*                    This method is called in the context of material serialization. It is useful for integrating into
                    bigger context of material exporters from various environment that want to take advantage of the RT Shader System.
                    Sub classes of this interface should override in case they need to write custom properties into the script context.
                    @param ser The material serializer instance.
                    @param subRenderState The sub render state instance to write down.
                    @param srcTextureUnit The source texture unit state.
                    @param dstTextureUnit The generated shader based texture unit state.
                    */
                    virtual void			writeInstance		(EarthView::World::Graphic::CMaterialSerializer *ser, EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState, const EarthView::World::Graphic::CTextureUnitState *srcTextureUnit, const EarthView::World::Graphic::CTextureUnitState *dstTextureUnit) {}
                ev_internal:
                    /** Create instance implementation method. Each sub class of this interface
                    must implement this method in which it will allocate the specific sub class of
                    the SubRenderState.
                    */
                    virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState	*createInstanceImpl	()
                    {
                        EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
                    }

                    /// Attributes.
                protected:
                    EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet		mSubRenderStateList;						/// List of all sub render states instances this factory created.
                };
            }
        }
    }
}

#endif

