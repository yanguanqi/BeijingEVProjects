#ifndef _ShaderRenderState_
#define _ShaderRenderState_
#include "shaderprerequisites.h"
#include "shadersubrenderstate.h"
#include <core/sharedptr.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {


                /** This is a container class for sub render state class.
                A render state is defined by the sub render states that compose it.
                The user should use this interface to define global or per material custom behavior.
                I.E In order to apply per pixel to a specific material one should implement a sub class of SubRenderState that
                perform a per pixel lighting model, get the render state of the target material and add the custom sub class to it.
                */
                class EV_RTSS_DLL CRenderState : public EarthView::World::Core::CAllocatedObject
                {
                ev_private:
                    CRenderState(_in EarthView::World::Core::CNameValuePairList *pList);
                    /// Interface.
                public:
                    /** Class default constructor. */
                    CRenderState();
                    /** Class destructor */
                    virtual ~CRenderState();
                    /** Reset this render state */
                    void		reset						();
                    /** Add a template sub render state to this render state.
                    @param subRenderState The sub render state template to add.
                    */
                    void		addTemplateSubRenderState	(EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState);
                    /** Remove a template sub render state from this render state.
                    @param subRenderState The sub render state to remove.
                    */
                    void		removeTemplateSubRenderState (EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState);
                    /** Get the list of the template sub render states composing this render state. */
                    const EarthView::World::Graphic::RTShaderSystem::SubRenderStateList	&getTemplateSubRenderStateList() const
                    {
                        return mSubRenderStateList;
                    }
                    /**
                    Set the light count per light type.
                    @param
                    lightCount The light count per type.
                    lightCount[0] defines the point light count.
                    lightCount[1] defines the directional light count.
                    lightCount[2] defines the spot light count.
                    */
                    void			setLightCount			(const ev_int32 lightCount[3]);
                    /**
                    Get the light count per light type.
                    @param
                    lightCount The light count per type.
                    lightCount[0] defines the point light count.
                    lightCount[1] defines the directional light count.
                    lightCount[2] defines the spot light count.
                    */
                    void			getLightCount			(ev_int32 lightCount[3]) const;
                    /**
                    Set the light count auto update state.
                    If the value is false the light count will remain static for the values that were set by the user.
                    If the value is true the light count will be updated from the owner shader generator scheme based on current scene lights.
                    The default is true.
                    */
                    void			setLightCountAutoUpdate	(ev_bool autoUpdate)
                    {
                        mLightCountAutoUpdate = autoUpdate;
                    }
                    /**
                    Return true if this render state override the light count.
                    If light count is not overridden it will be updated from the shader generator based on current scene lights.
                    */
                    ev_bool			getLightCountAutoUpdate	() const
                    {
                        return mLightCountAutoUpdate;
                    }



                    /// Attributes.
                protected:
                    EarthView::World::Graphic::RTShaderSystem::SubRenderStateList	mSubRenderStateList;							/// The sub render states list.
                    ev_int32					mLightCount[3];									/// The light count per light type definition.
                    ev_bool				mLightCountAutoUpdate;							/// True if light count was explicitly set.
                private:
                    friend class EarthView::World::Graphic::RTShaderSystem::CProgramManager;
                    friend class EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder;
                };

                ///typedef vector<EarthView::World::Graphic::RTShaderSystem::CRenderState*> 				RenderStateList;
                class EV_RTSS_DLL RenderStateList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Graphic::RTShaderSystem::CRenderState *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList); 				///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(iterator pos, EarthView::World::Graphic::RTShaderSystem::CRenderState *const &t)
                    {
                        return mList.insert(pos, t);
                    }
                private:
                    InternalList mList;
                ev_private:
                    RenderStateList(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    RenderStateList() {}
                    void push_back(EarthView::World::Graphic::RTShaderSystem::CRenderState *t)
                    {
                        mList.push_back(t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    EarthView::World::Graphic::RTShaderSystem::CRenderState*& front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::RTShaderSystem::CRenderState*& back()
                    {
                        return mList.back();
                    }
                    void insert(ev_uint32 pos, EarthView::World::Graphic::RTShaderSystem::CRenderState *const &t)
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
                    EarthView::World::Graphic::RTShaderSystem::CRenderState*& operator[](ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::RTShaderSystem::CRenderState *const &operator[](ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::RTShaderSystem::CRenderState*& at(ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::RTShaderSystem::CRenderState *const &at(ev_size_t n) const
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
                    void resize(ev_size_t newSize, EarthView::World::Graphic::RTShaderSystem::CRenderState *t)
                    {
                        mList.resize(newSize, t);
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
                typedef RenderStateList::iterator 				RenderStateIterator;
                typedef RenderStateList::const_iterator			RenderStateConstIterator;

                /** This is the target render state. This class will hold the actual generated CPU/GPU programs.
                It will be initially build from the FFP state of a given EarthView::World::Graphic::CPass by the FFP builder and then will be linked
                with the custom pass render state and the global scheme render state. See ShaderGenerator::SGPass::buildTargetRenderState().
                */
                class EV_RTSS_DLL CTargetRenderState : public EarthView::World::Graphic::RTShaderSystem::CRenderState
                {
                ev_private:
                    CTargetRenderState(EarthView::World::Core::CNameValuePairList *pList);
                    /// Interface.
                public:

                    /** Class default constructor. */
                    CTargetRenderState();
                    /** Class destructor */
                    virtual ~CTargetRenderState();
                    /** Link this target render state with the given render state.
                    Only sub render states with execution order that don't exist in this render state will be added.
                    @param other The other render state to append to this state.
                    @param srcPass The source pass that this render state is constructed from.
                    @param dstPass The destination pass that constructed from this render state.
                    */
                    void		link				(const EarthView::World::Graphic::RTShaderSystem::CRenderState &other, EarthView::World::Graphic::CPass *srcPass, EarthView::World::Graphic::CPass *dstPass);
                    /** Update the GPU programs constant parameters before a renderable is rendered.
                    @param rend The renderable object that is going to be rendered.
                    @param pass The pass that is used to do the rendering operation.
                    @param source The auto parameter auto source instance.
                    @param pLightList The light list used for the current rendering operation.
                    */
                    void	updateGpuProgramsParams	(EarthView::World::Graphic::CRenderable *rend, EarthView::World::Graphic::CPass *pass, const EarthView::World::Graphic::CAutoParamDataSource *source, const EarthView::World::Graphic::LightList *pLightList);

                    /// Protected methods
                protected:
                    /** Sort the sub render states composing this render state. */
                    void			sortSubRenderStates		();
                    /** Comparison function of the sub render states. */
                    static ev_int32		sSubRenderStateCompare	(const void *p0, const void *p1);

                    /** Create CPU programs that represent this render state.
                    */
                    ev_bool		createCpuPrograms		();
                    /** Create the program set of this render state.
                    */
                    CProgramSet	*createProgramSet			();
                    /* Destroy the program set of this render state. */
                    void		destroyProgramSet			();
                    /** Return the program set of this render state.
                    */
                    CProgramSet	*getProgramSet				()
                    {
                        return mProgramSet;
                    }
                    /** Add sub render state to this render state.
                    @param subRenderState The sub render state to add.
                    */
                    void		addSubRenderStateInstance			(EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState);
                    /** Remove sub render state from this render state.
                    @param subRenderState The sub render state to remove.
                    */
                    void		removeSubRenderStateInstance		(EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState);

                    /// Attributes.
                protected:
                    ev_bool				mSubRenderStateSortValid;						/// Tells if the list of the sub render states is sorted.
                    CProgramSet			*mProgramSet;									/// The program set of this RenderState.


                private:
                    friend class EarthView::World::Graphic::RTShaderSystem::CProgramManager;
                    friend class EarthView::World::Graphic::RTShaderSystem::CFFPRenderStateBuilder;
                };
            }
        }
    }
}

#endif

