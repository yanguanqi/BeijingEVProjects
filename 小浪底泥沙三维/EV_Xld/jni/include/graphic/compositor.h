#ifndef __Compositor_H__
#define __Compositor_H__
#include "graphic/graphic_config.h"
#include <core/iteratorwrapper.h>
#include "resource.h"
#include "texture.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CCompositionTechnique;
            ///class CTexturePtr;
            class CRenderTarget;
            class CMultiRenderTarget;

            ///<summary> Class representing a EarthView::World::Graphic::CCompositor object. Compositors provide the means
            ///    to flexibly "composite" the final rendering result from multiple scene renders
            ///    and intermediate operations like rendering fullscreen quads. This makes
            ///    it possible to apply postfilter effects, HDRI postprocessing, and shadow
            ///    effects to a CViewport.
            /// </summary>
            class EV_GRAPHIC_DLL CCompositor: public EarthView::World::Graphic::CResource
            {
            ev_private:
                CCompositor(_in EarthView::World::Core::CNameValuePairList *pList);
            public:

                CCompositor(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle,
                            const EVString &group, ev_bool isManual , EarthView::World::Graphic::CManualResourceLoader *ref_loader);
                CCompositor(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle,
                            const EVString &group, ev_bool isManual );
                CCompositor(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle,
                            const EVString &group);
                ~CCompositor();

                //// Data types for internal lists
                class EV_GRAPHIC_DLL CompositionTechniques : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    CompositionTechniques(_in EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:

                    typedef vector<EarthView::World::Graphic::CCompositionTechnique *> InternalList;
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
                    CompositionTechniques() {}
                    void push_back(EarthView::World::Graphic::CCompositionTechnique *const &ref_t)
                    {
                        mList.push_back(ref_t);
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
                    EarthView::World::Graphic::CCompositionTechnique*& operator[](ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    EarthView::World::Graphic::CCompositionTechnique *const &operator[](ev_size_t n) const
                    {
                        const_reference l =  mList[n];
                        return l;
                    }
                    EarthView::World::Graphic::CCompositionTechnique*& at(ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    EarthView::World::Graphic::CCompositionTechnique *const &at(ev_size_t n) const
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
                /*typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CCompositor::CompositionTechniques> EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator;*/
                class EV_GRAPHIC_DLL CompositionTechniqueIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    CompositionTechniqueIterator(_in EarthView::World::Core::CNameValuePairList *pList)
                    {	
						if((pList->Exist("start"))&&(pList->Exist("last")))
						{
							mIterator = EV_NEW_T(InternalIterator)(*(IteratorType *)pList->GetAt("start"), *(IteratorType *)pList->GetAt("last"));
						}
                        else if(pList->Exist("lst"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*(EarthView::World::Graphic::CCompositor::CompositionTechniques *)pList->GetAt("lst"));
                        }
                        else if (pList->Exist("rhs"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*((EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator *)pList->GetAt("rhs"))->mIterator);
                        }
                    }
                ev_private:
                    typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CCompositor::CompositionTechniques> InternalIterator;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    typedef CompositionTechniques::iterator IteratorType;

                    CompositionTechniqueIterator(IteratorType start, IteratorType last)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(start, last);
                    }
                    EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator &operator=(_in const EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator &other)
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
                    CompositionTechniqueIterator(EarthView::World::Graphic::CCompositor::CompositionTechniques &lst)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(lst);
                    }
                    CompositionTechniqueIterator(const CompositionTechniqueIterator &rhs)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(*rhs.mIterator);
                    }
                    ~CompositionTechniqueIterator()
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
                    EarthView::World::Graphic::CCompositionTechnique *getCurrent()
                    {
                        return *mIterator->current();
                    }
                    EarthView::World::Graphic::CCompositionTechnique *next()
                    {
                        return mIterator->getNext();
                    }
                    EarthView::World::Graphic::CCompositionTechnique *getBegin()
                    {
                        return *mIterator->begin();
                    }
                    EarthView::World::Graphic::CCompositionTechnique *getEnd()
                    {
                        return *mIterator->begin();
                    }

                private:
                    InternalIterator *mIterator;
                };

                ///<summary> Create a new technique, and return a pointer to it.</summary>
                ///<param></param>
                ///<returns>CCompositonTechnique pointer</returns>
                EarthView::World::Graphic::CCompositionTechnique *createTechnique();

                ///<summary> Remove a technique. It will also be destroyed.</summary>
                ///<param>name="idx"</param>
                ///<returns></returns>
                void removeTechnique(ev_size_t idx);

                ///<summary> Get a technique.</summary>
                ///<param>name="idx"</param>
                ///<returns>EarthView::World::Graphic::CCompositionTechnique pointer</returns>
                EarthView::World::Graphic::CCompositionTechnique *getTechnique(ev_size_t idx);

                ///<summary> Get the number of techniques.</summary>
                ///<param></param>
                ///<returns></returns>
                ev_size_t getNumTechniques();

                ///<summary> Remove all techniques  </summary>
                ///<param></param>
                ///<returns></returns>
                void removeAllTechniques();

                ///<summary> Get an iterator over the EarthView::World::Graphic::CCompositor::CompositionTechniques in this compositor. </summary>
                ///<param></param>
                ///<returns>EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator</returns>
                EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator getTechniqueIterator();

                ///<summary> Get a supported technique.
                ///@remarks
                ///    The supported technique list is only available after this compositor has been compiled,
                ///    which typically happens on loading it. Therefore, if this method returns
                ///    an empty list, try calling CCompositor::load.
                ///</summary>
                ///<param>name="idx"</param>
                ///<returns></returns>
                EarthView::World::Graphic::CCompositionTechnique *getSupportedTechnique(ev_size_t idx);

                ///<summary> Get the number of supported techniques.
                ///@remarks
                ///    The supported technique list is only available after this compositor has been compiled,
                ///    which typically happens on loading it. Therefore, if this method returns
                ///    an empty list, try calling CCompositor::load.
                ///</summary>
                ///<param></param>
                ///<returns>Technique num</returns>
                ev_size_t getNumSupportedTechniques();

                ///<summary> Gets an iterator over all the EarthView::World::Graphic::CCompositor::CompositionTechniques which are supported by the current card.
                ///@remarks
                ///    The supported technique list is only available after this compositor has been compiled,
                ///    which typically happens on loading it. Therefore, if this method returns
                ///    an empty list, try calling CCompositor::load.
                ///</summary>
                ///<param></param>
                ///<returns></returns>
                EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator getSupportedTechniqueIterator();
                ///<summary> Get a pointer to a supported technique for a given scheme.
                ///@remarks
                ///	If there is no specific supported technique with this scheme name,
                ///	then the first supported technique with no specific scheme will be returned.
                ///</summary>
                ///<param>name="schemeName" The scheme name you are looking for. Blank means to
                ///	look for techniques with no scheme associated</param>
                ///<returns></returns>
                EarthView::World::Graphic::CCompositionTechnique *getSupportedTechnique(const EVString &schemeName);
                EarthView::World::Graphic::CCompositionTechnique *getSupportedTechnique();
                ///<summary> Get the instance name for a global texture.</summary>
                ///<param> name="name" The name of the texture in the original compositor definition</param>
                ///<param> name="mrtIndex" If name identifies a MRT, which texture attachment to retrieve</param>
                ///<returns> The instance name for the texture, corresponds to a real texture</returns>
                EVString getTextureInstanceName(const EVString &name, ev_size_t mrtIndex);
                ///<summary> Get the instance of a global texture.</summary>
                ///<param>name="name" The name of the texture in the original compositor definition</param>
                ///<param>name="mrtIndex" If name identifies a MRT, which texture attachment to retrieve</param>
                ///<returns> The texture pointer, corresponds to a real texture</returns>
                EarthView::World::Graphic::CTexturePtr getTextureInstance(const EVString &name, ev_size_t mrtIndex);
                ///<summary> Get the render target for a given render texture name.
                ///remarks
                ///	You can use this to add listeners etc, but do not use it to update the
                ///	targets manually or any other modifications, the compositor instance
                ///	is in charge of this.
                ///</summary>
                ///<param>name="name"</param>
                ///<returns></returns>
                EarthView::World::Graphic::CRenderTarget *getRenderTarget(const EVString &name);
            ev_internal:
                //// @copydoc CResource::loadImpl
                void loadImpl();
                //// @copydoc CResource::unloadImpl
                void unloadImpl();
                //// @copydoc CResource::calculateSize
                ev_size_t calculateSize() const;

            protected:
                /** Check supportedness of techniques.
                 */
                void compile();
            private:
                EarthView::World::Graphic::CCompositor::CompositionTechniques mTechniques;
                EarthView::World::Graphic::CCompositor::CompositionTechniques mSupportedTechniques;

                //// Compilation required
                //// This is set if the techniques change and the supportedness of techniques has to be
                //// re-evaluated.
                ev_bool mCompilationRequired;
                /** Create global rendertextures.
                */
                void createGlobalTextures();

                /** Destroy global rendertextures.
                */
                void freeGlobalTextures();
                ///TODO GSOC : These typedefs are duplicated from CCompositorInstance. Solve?
                //// Map from name->local texture
                typedef map<EVString, EarthView::World::Graphic::CTexturePtr> GlobalTextureMap;
                GlobalTextureMap mGlobalTextures;
                //// Store a list of MRTs we've created
                typedef map<EVString, CMultiRenderTarget *> GlobalMRTMap;
                GlobalMRTMap mGlobalMRTs;
            };
            ///<summary> Specialisation of CSharedPtr to allow CSharedPtr to be assigned to EarthView::World::Graphic::CCompositorPtr
            ///@note Has to be a subclass since we need operator=.
            /// We could templatise this instead of repeating per CResource subclass,
            /// except to do so requires a form VC6 does not support i.e.
            /// ResourceSubclassPtr<T> : public EarthView::World::Core::CSharedPtr<T>
            ///</summary>
            class EV_GRAPHIC_DLL CCompositorPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CCompositor>
            {
            ev_private:
                CCompositorPtr(_in EarthView::World::Core::CNameValuePairList *pList):
                	EarthView::World::Core:: CSharedPtr<CCompositor>(
                        pList && pList->Exist("ref_rep") ? (EarthView::World::Graphic::CCompositor *)pList->GetAt("ref_rep") : (EarthView::World::Graphic::CCompositor *) NULL
                        , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                {
                    if(pList && pList->Exist("r"))
                    {
                    	EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CCompositor> r =
                    			*(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CCompositor>*)pList->GetAt("r");
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
                CCompositorPtr() : EarthView::World::Core::CSharedPtr<CCompositor>() {}
                explicit CCompositorPtr(CCompositor *ref_rep) :
				    EarthView::World::Core::CSharedPtr<CCompositor>(ref_rep) {}
                explicit CCompositorPtr(CCompositor *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) :
				    EarthView::World::Core::CSharedPtr<CCompositor>(ref_rep, inFreeMethod) {}
                CCompositorPtr(const CCompositorPtr &r) :
                	EarthView::World::Core::CSharedPtr<CCompositor>(r) {}
                CCompositorPtr(const EarthView::World::Graphic::ResourcePtr &r) :
                	EarthView::World::Core::CSharedPtr<CCompositor>()
                {
                    /// lock & copy other mutex pointer
                    EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                    {
                        EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                        EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                        pRep = static_cast<EarthView::World::Graphic::CCompositor *>(r.getPointer());
                        pUseCount = r.useCountPointer();
                        if (pUseCount)
                        {
                            ++(*pUseCount);
                        }
                    }
                }
                EarthView::World::Graphic::CCompositor *get() const
                {
                    return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CCompositor>::get();
                }
                //// Operator used to convert a EarthView::World::Graphic::ResourcePtr to a EarthView::World::Graphic::CCompositorPtr
                EarthView::World::Graphic::CCompositorPtr &operator=(const EarthView::World::Graphic::ResourcePtr &r)
                {
                    if (pRep == static_cast<EarthView::World::Graphic::CCompositor *>(r.getPointer()))
                        return *this;
                    release();
                    /// lock & copy other mutex pointer
                    EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                    {
                        EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                        EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                        pRep = static_cast<EarthView::World::Graphic::CCompositor *>(r.getPointer());
                        pUseCount = r.useCountPointer();
                        if (pUseCount)
                        {
                            ++(*pUseCount);
                        }
                    }
                    else
                    {
                        /// RHS must be a null pointer
                        EV_ASSERT(r.isNull() && "RHS must be null if it has no mutex!");
                        setNull();
                    }
                    return *this;
                }
            };
            /** @} */
            /** @} */
        }
    }
}

#endif

