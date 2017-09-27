#ifndef __CompositionTargetPass_H__
#define __CompositionTargetPass_H__
#include <core/memoryallocatedobject.h>
#include <core/stringdefines.h>
#include "graphic_config.h"
#include <core/iteratorwrapper.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CCompositionTechnique;
            class CCompositionPass;

            ///<summary> Object representing one render to a CRenderTarget or CViewport in the EV_World Composition
            ///	framework.</summary>

            class EV_GRAPHIC_DLL CCompositionTargetPass : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CCompositionTargetPass(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CCompositionTargetPass(EarthView::World::Graphic::CCompositionTechnique *ref_parent);
                ~CCompositionTargetPass();

                ///<summary> Input mode of a TargetPass</summary>
                enum InputMode
                {
                    IM_NONE,        			/// No input
                    IM_PREVIOUS     			/// Output of previous Composition in chain
                };
                class EV_GRAPHIC_DLL CompositionPasses : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    CompositionPasses(EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:
                    typedef vector<EarthView::World::Graphic::CCompositionPass *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                private:
                    InternalList mList;
                public:
                    CompositionPasses() {}

                    void push_back(EarthView::World::Graphic::CCompositionPass *const &ref_descript)
                    {
                        mList.push_back(ref_descript);
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
                    EarthView::World::Graphic::CCompositionPass*& operator[](ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    EarthView::World::Graphic::CCompositionPass *const &operator[](ev_size_t n) const
                    {
                        const_reference l =  mList[n];
                        return l;
                    }
                    EarthView::World::Graphic::CCompositionPass*& at(ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    EarthView::World::Graphic::CCompositionPass *const &at(ev_size_t n) const
                    {
                        const_reference l =  mList[n];
                        return l;
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
                class EV_GRAPHIC_DLL CompositionPassIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    CompositionPassIterator(EarthView::World::Core::CNameValuePairList *pList)
                    {
						if ((pList->Exist("start"))&&(pList->Exist("last")))
						{
							mIterator = EV_NEW_T(InternalIterator)(*(IteratorType *)pList->GetAt("start"), *(IteratorType *)pList->GetAt("last"));
						}
                        else if(pList->Exist("vec"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*(EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses *)pList->GetAt("vec"));
                        }
                        else if (pList->Exist("rhs"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*((EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator *)pList->GetAt("rhs"))->mIterator);
                        }
                    }
                ev_private:
                    typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses> InternalIterator;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    typedef CompositionPasses::iterator iterator;
                    typedef CompositionPasses::const_iterator const_iterator;
                    typedef CompositionPasses::iterator IteratorType;

                    CompositionPassIterator(IteratorType start, IteratorType last)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(start, last);
                    }
                    EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator &operator=(_in const EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator &other)
                    {
                        if ( &other == this )
                            return *this;
                        if(mIterator)
                        {
                            EV_DELETE_T(mIterator, InternalIterator);
                            mIterator = NULL;
                        }
                        mIterator = EV_NEW_T(InternalIterator)(*other.mIterator);
                        return *this;
                    }
                    ValueType peekNext () const
                    {
                        return mIterator->peekNext();
                    }
                    PointerType peekNextPtr ()  const
                    {
                        return mIterator->peekNextPtr();
                    }
                    ValueType getNext ()
                    {
                        return mIterator->getNext();
                    }

                    const IteratorType &begin()
                    {
                        return mIterator->begin();
                    }
                    const IteratorType &end()
                    {
                        return mIterator->end();
                    }
                    const IteratorType &current()
                    {
                        return mIterator->current();
                    }
                public:
                    CompositionPassIterator(EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses &vec)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(vec.begin(), vec.end());
                    }
                    CompositionPassIterator(const CompositionPassIterator &rhs)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(*rhs.mIterator);
                    }
                    ~CompositionPassIterator()
                    {
                        if(mIterator)
                        {
                            EV_DELETE_T(mIterator, InternalIterator);
                            mIterator = NULL;
                        }
                    }
                    ev_bool hasMoreElements ( ) const
                    {
                        return mIterator->hasMoreElements();
                    }
                    void moveNext ()
                    {
                        mIterator->moveNext();
                    }
                    EarthView::World::Graphic::CCompositionPass *getCurrent()
                    {
                        return *mIterator->current();
                    }
                    EarthView::World::Graphic::CCompositionPass *next()
                    {
                        return mIterator->getNext();
                    }
                    EarthView::World::Graphic::CCompositionPass *getBegin()
                    {
                        return *mIterator->begin();
                    }
                    EarthView::World::Graphic::CCompositionPass *getEnd()
                    {
                        return *mIterator->begin();
                    }

                private:
                    InternalIterator *mIterator;
                };
                ///<summary> Set input mode of this TargetPass</summary>
                ///<param>name="mode"</param>
                ///<returns></returns>
                void setInputMode(InputMode mode);
                ///<summary> Get input mode </summary>
                ///<param></param>
                ///<returns>input mode</returns>
                EarthView::World::Graphic::CCompositionTargetPass::InputMode getInputMode() const;

                ///<summary> Set output local texture name </summary>
                ///<param>name="out"</param>
                ///<returns></returns>
                void setOutputName(const EVString &out);

                ///<summary> Get output local texture name </summary>
                ///<param></param>
                ///<returns>output name</returns>
                const EVString &getOutputName() const;

                ///<summary> Set "only initial" flag. This makes that this target pass is only executed initially
                ///    after the effect has been enabled.</summary>
                ///<param>name="value"</param>
                ///<returns></returns>
                void setOnlyInitial(ev_bool value);
                /// <summary>Get "only initial" flag.<summary>
                ///<param></param>
                ///<returns></returns>
                ev_bool getOnlyInitial();

                ///<summary> Set the scene visibility mask used by this pass </summary>
                ///<param>name="mask"</param>
                ///<returns></returns>
                void setVisibilityMask(ev_uint32 mask);
                ///<summary> Get the scene visibility mask used by this pass </summary>
                ///<param></param>
                ///<returns>visibility mask</returns>
                ev_uint32 getVisibilityMask();
                ///<summary> Set the material scheme used by this target pass.
                ///@remarks
                ///	Only applicable to targets that render the scene as
                ///	one of their passes.
                ///	@see CTechnique::setScheme.
                ///</summary>
                ///<param>name="schemeName"</param>
                ///<returns></returns>
                void setMaterialScheme(const EVString &schemeName);
                ///<summary> Get the material scheme used by this target pass.
                ///@remarks
                ///	Only applicable to targets that render the scene as
                ///	one of their passes.
                ///	@see CTechnique::setScheme.
                ///</summary>
                ///<param></param>
                ///<returns>material scheme</returns>
                const EVString &getMaterialScheme() const;

                ///<summary> Set whether shadows are enabled in this target pass.
                ///@remarks
                ///	Only applicable to targets that render the scene as
                ///	one of their passes.
                ///</summary>
                ///<param>name="enable"</param>
                ///<returns></returns>
                void setShadowsEnabled(ev_bool enabled);
                ///<summary> Get whether shadows are enabled in this target pass.
                ///@remarks
                ///	Only applicable to targets that render the scene as
                ///	one of their passes.
                ///</summary>
                ///<param></param>
                ///<returns>is shadow enabled</returns>
                ev_bool getShadowsEnabled() const;
                ///<summary> Set the scene LOD bias used by this pass. The default is 1.0,
                ///   everything below that means lower quality, higher means higher quality.
                ///</summary>
                ///<param>name="bias"</param>
                ///<returns></returns>
                void setLodBias(ev_real32 bias);
                ///<summary> Get the scene LOD bias used by this pass </summary>
                ///<param></parma>
                ///<returns>lod bias</returns>
                ev_real32 getLodBias();

                ///<summary> Create a new pass, and return a pointer to it.</summary>
                ///<param></param>
                ///<returns></returns>
                EarthView::World::Graphic::CCompositionPass *createPass();
                ///<summary> Remove a pass. It will also be destroyed.</summary>
                ///<param>name="idx"</param>
                ///<returns></returns>
                void removePass(ev_size_t idx);
                ///<summary> Get a pass.</summary>
                ///<param>name="idx"</param>
                ///<returns></returns>
                EarthView::World::Graphic::CCompositionPass *getPass(ev_size_t idx);
                ///<summary>Get the number of passes.</summary>
                ///<param></param>
                ///<returns></returns>
                ev_size_t getNumPasses();

                ///<summary> Remove all passes</summary>
                ///<param></param>
                ///<returns></returns>
                void removeAllPasses();

                ///<summary> Get an iterator over the EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses in this TargetPass. </summary>
                ///<param></param>
                ///<returns></returns>
                EarthView::World::Graphic::CCompositionTargetPass::CompositionPassIterator getPassIterator();

                ///<summary> Get parent object </summary>
                ///<param></param>
                ///<returns></returns>
                EarthView::World::Graphic::CCompositionTechnique *getParent();
                ///<summary> Determine if this target pass is supported on the current rendering device. </summary>
                ///<param></param>
                ///<returns></returns>
                ev_bool _isSupported();
            private:
                //// Parent technique
                EarthView::World::Graphic::CCompositionTechnique *mParent;
                //// Input name
                EarthView::World::Graphic::CCompositionTargetPass::InputMode mInputMode;
                //// (local) output texture
                EVString mOutputName;
                //// EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses
                EarthView::World::Graphic::CCompositionTargetPass::CompositionPasses mPasses;
                //// This target pass is only executed initially after the effect
                //// has been enabled.
                ev_bool mOnlyInitial;
                //// Visibility mask for this render
                ev_uint32 mVisibilityMask;
                //// LOD bias of this render
                ev_real32 mLodBias;
                //// CMaterial scheme name
                EVString mMaterialScheme;
                //// Shadows option
                ev_bool mShadowsEnabled;
            };
            /** @} */
            /** @} */
        }
    }
}

#endif

