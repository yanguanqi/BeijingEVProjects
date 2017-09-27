#ifndef __CompositionTechnique_H__
#define __CompositionTechnique_H__
#include "graphic/graphic_config.h"
#include "pixelformat.h"
#include <core/iteratorwrapper.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CCompositor;
            class CCompositionTargetPass;

            ///<summary> Base composition technique, can be subclassed in plugins.</summary>
            class EV_GRAPHIC_DLL CCompositionTechnique : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CCompositionTechnique(_in EarthView::World::Core::CNameValuePairList *pList);
            public:

                CCompositionTechnique(EarthView::World::Graphic::CCompositor *ref_parent);
                virtual ~CCompositionTechnique();

                ///<summary>The scope of a texture defined by the compositor</summary>
                enum TextureScope
                {
                    ///Local texture - only available to the compositor passes in this technique
                    TS_LOCAL,
                    ///Chain texture - available to the other compositors in the chain
                    TS_CHAIN,
                    ///Global texture - available to everyone in every scope
                    TS_GLOBAL
                };
                //// Local texture definition
                class EV_GRAPHIC_DLL CTextureDefinition : public EarthView::World::Core::CAllocatedObject
                {
                ev_private:
                    CTextureDefinition(_in EarthView::World::Core::CNameValuePairList *pList): width(0), height(0),
                        widthFactor(1.0f), heightFactor(1.0f),
                        fsaa(true), hwGammaWrite(false), depthBufferId(1), pooled(false), scope(TS_LOCAL) {  }
                public:
                    EVString name;
                    ///CTexture definition being a reference is determined by these two fields not being empty.
                    EVString refCompName; 			///If a reference, the name of the compositor being referenced
                    EVString refTexName;				///If a reference, the name of the texture in the compositor being referenced
                    ev_size_t width;       			/// 0 means adapt to target width
                    ev_size_t height;      			/// 0 means adapt to target height
                    ev_real32 widthFactor;  			/// multiple of target width to use (if width = 0)
                    ev_real32 heightFactor; 			/// multiple of target height to use (if height = 0)
                    EarthView::World::Graphic::PixelFormatList formatList; 			/// more than one means MRT
                    ev_bool fsaa;						/// FSAA enabled; true = determine from main target (if render_scene), false = disable
                    ev_bool hwGammaWrite;				/// Do sRGB gamma correction on write (only 8-bit per channel formats)
                    ev_uint16 depthBufferId;			///Depth Buffer's pool ID. (unrelated to "pool" variable below)
                    ev_bool pooled;					/// whether to use pooled textures for this one
                    EarthView::World::Graphic::CCompositionTechnique::TextureScope scope; 			/// Which scope has access to this texture
                    CTextureDefinition() : width(0), height(0), widthFactor(1.0f), heightFactor(1.0f),
                        fsaa(true), hwGammaWrite(false), depthBufferId(1), pooled(false), scope(TS_LOCAL) {}
                };
                //// Typedefs for several iterators
                class EV_GRAPHIC_DLL TargetPasses : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    TargetPasses(EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:

                    typedef vector<EarthView::World::Graphic::CCompositionTargetPass *> InternalList;
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
                    TargetPasses() {}
                    void push_back(EarthView::World::Graphic::CCompositionTargetPass *const &ref_t)
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
                    EarthView::World::Graphic::CCompositionTargetPass*& operator[](ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    EarthView::World::Graphic::CCompositionTargetPass *const &operator[](ev_size_t n) const
                    {
                        const_reference l =  mList[n];
                        return l;
                    }
                    EarthView::World::Graphic::CCompositionTargetPass*& at(ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    EarthView::World::Graphic::CCompositionTargetPass *const &at(ev_size_t n) const
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
                /*  typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CCompositionTechnique::TargetPasses> EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator;*/
                class EV_GRAPHIC_DLL TargetPassIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    TargetPassIterator(_in EarthView::World::Core::CNameValuePairList *pList)
                    {
						if((pList->Exist("start"))&&(pList->Exist("last")))
						{
							mIterator = EV_NEW_T(InternalIterator)(*(IteratorType *)pList->GetAt("start"), *(IteratorType *)pList->GetAt("last"));
						}
                        else if(pList->Exist("lst"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*(EarthView::World::Graphic::CCompositionTechnique::TargetPasses *)pList->GetAt("lst"));
                        }
                        else if (pList->Exist("rhs"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*((EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator *)pList->GetAt("rhs"))->mIterator);
                        }
                    }

                ev_private:
                    typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CCompositionTechnique::TargetPasses> InternalIterator;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    typedef TargetPasses::iterator IteratorType;

                    TargetPassIterator(IteratorType start, IteratorType last)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(start, last);
                    }
                    EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator &operator=(_in const EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator &rhs)
                    {
                        if ( &rhs == this )
                            return *this;
                        if(mIterator)
                        {
                            EV_DELETE_T(mIterator, InternalIterator);
                            mIterator = NULL;
                        }
                        mIterator = EV_NEW_T(InternalIterator)(*rhs.mIterator);
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
                    TargetPassIterator(EarthView::World::Graphic::CCompositionTechnique::TargetPasses &lst)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(lst);
                    }
                    TargetPassIterator(const TargetPassIterator &rhs)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(*rhs.mIterator);
                    }
                    ~TargetPassIterator()
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
                    EarthView::World::Graphic::CCompositionTargetPass *getCurrent()
                    {
                        return *mIterator->current();
                    }
                    EarthView::World::Graphic::CCompositionTargetPass *next()
                    {
                        return mIterator->getNext();
                    }
                    EarthView::World::Graphic::CCompositionTargetPass *getBegin()
                    {
                        return *mIterator->begin();
                    }
                    EarthView::World::Graphic::CCompositionTargetPass *getEnd()
                    {
                        return *mIterator->begin();
                    }

                private:
                    InternalIterator *mIterator;
                };


                class EV_GRAPHIC_DLL TextureDefinitions : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    TextureDefinitions(EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:

                    typedef vector<EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *> InternalList;
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
                    TextureDefinitions() {}
                    void push_back(EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *const &ref_t)
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
                    EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*& operator[](ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *const &operator[](ev_size_t n) const
                    {
                        const_reference l =  mList[n];
                        return l;
                    }
                    EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*& at(ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *const &at(ev_size_t n) const
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
                /* typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions> EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator;*/
                class EV_GRAPHIC_DLL TextureDefinitionIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    TextureDefinitionIterator(_in EarthView::World::Core::CNameValuePairList *pList)
                    {
						if((pList->Exist("start"))&&(pList->Exist("last")))
						{
							mIterator = EV_NEW_T(InternalIterator)(*(IteratorType *)pList->GetAt("start"), *(IteratorType *)pList->GetAt("last"));
						}
                        else if(pList->Exist("lst"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*(EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions *)pList->GetAt("lst"));
                        }
                        else if (pList->Exist("rhs"))
                        {
                            mIterator = EV_NEW_T(InternalIterator)(*((EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator *)pList->GetAt("rhs"))->mIterator);
                        }
                    }
                ev_private:
                    typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions> InternalIterator;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    typedef TextureDefinitions::iterator IteratorType;

                    TextureDefinitionIterator(IteratorType start, IteratorType last)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(start, last);
                    }
                    EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator &operator=(_in const EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator &rhs)
                    {
                        if ( &rhs == this )
                            return *this;
                        if(mIterator)
                        {
                            EV_DELETE_T(mIterator, InternalIterator);
                            mIterator = NULL;
                        }
                        mIterator = EV_NEW_T(InternalIterator)(*rhs.mIterator);
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
                    TextureDefinitionIterator(EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions &lst)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(lst);
                    }
                    TextureDefinitionIterator(const TextureDefinitionIterator &rhs)
                    {
                        mIterator = EV_NEW_T(InternalIterator)(*rhs.mIterator);
                    }
                    ~TextureDefinitionIterator()
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
                    EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *getCurrent()
                    {
                        return *mIterator->current();
                    }
                    EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *next()
                    {
                        return mIterator->getNext();
                    }
                    EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *getBegin()
                    {
                        return *mIterator->begin();
                    }
                    EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *getEnd()
                    {
                        return *mIterator->begin();
                    }
                private:
                    InternalIterator *mIterator;
                };
                ///<summary> Create a new local texture definition, and return a pointer to it.</summary>
                ///<param> name="name" Name of the local texture</param>
                ///<returns>EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition Pointer</returns>
                EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *createTextureDefinition(const EVString &name);

                ///<summary>Remove and destroy a local texture definition.</summary>
                ///<param>name="idx"</param>
                ///<returns></returns>
                void removeTextureDefinition(ev_size_t idx);

                ///<summary> Get a local texture definition.</summary>
                ///<param>name="idx"</param>
                ///<returns></returns>
                EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *getTextureDefinition(ev_size_t idx);

                ///<summary> Get a local texture definition with a specific name.</summary>
                ///<param>name="name"</param>
                ///<returns></returns>
                EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition *getTextureDefinition(const EVString &name);
                ///<summary> Get the number of local texture definitions.</summary>
                ///<param></param>
                ///<returns></returns>
                ev_size_t getNumTextureDefinitions();

                ///<summary> Remove all CTexture Definitions</summary>
                ///<param></param>
                ///<returns></returns>
                void removeAllTextureDefinitions();

                ///<summary> Get an iterator over the EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions in this CTechnique. </summary>
                ///<param></param>
                ///</returns></returns>
                EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator getTextureDefinitionIterator();

                ///<summary> Create a new target pass, and return a pointer to it.</summary>
                ///<param></param>
                ///<returns>EarthView::World::Graphic::CCompositionTargetPass pointer</returns>
                EarthView::World::Graphic::CCompositionTargetPass *createTargetPass();

                ///<summary> Remove a target pass. It will also be destroyed.</summary>
                ///<param>name="idx"</param>
                ///<returns></returns>
                void removeTargetPass(ev_size_t idx);

                ///<summary> Get a target pass.</summary>
                ///<param>name="idx"</param>
                ///<returns>CCompositonTargetPass pointer</returns>
                EarthView::World::Graphic::CCompositionTargetPass *getTargetPass(ev_size_t idx);

                ///<summary> Get the number of target passes.</summary>
                ///<param></param>
                ///<returns></returns>
                ev_size_t getNumTargetPasses();

                ///<summary> Remove all target passes.</summary>
                ///<param></param>
                ///<returns></returns>
                void removeAllTargetPasses();

                ///<summary> Get an iterator over the EarthView::World::Graphic::CCompositionTechnique::TargetPasses in this CTechnique. </summary>
                ///<param></param>
                ///<returns>EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator</returns>
                EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator getTargetPassIterator();

                ///<summary> Get output (final) target pass</summary>
                ///<param></param>
                ///<returns>CCompositonTargetPass pointer</returns>
                EarthView::World::Graphic::CCompositionTargetPass *getOutputTargetPass();

                ///<summary> Determine if this technique is supported on the current rendering device. </summary>
                ///<param>name="allowTextureDegradation" True to accept a reduction in texture depth </param>
                ///<returns></returns>
                virtual ev_bool isSupported(ev_bool allowTextureDegradation);

                ///<summary> Assign a scheme name to this technique, used to switch between
                ///	multiple techniques by choice rather than for hardware compatibility.
                ///</summary>
                ///<param>name = "schemeName"</param>
                ///<returns></returns>
                virtual void setSchemeName(const EVString &schemeName);
                ///<summary> Get the scheme name assigned to this technique. </summary>
                ///<param></param>
                ///<returns>scheme name</returns>
                const EVString &getSchemeName() const
                {
                    return mSchemeName;
                }

                ///<summary> Set the name of the compositor logic assigned to this technique.
                ///	Instances of this technique will be auto-coupled with the matching logic.
                ///</summary>
                ///<param>name="compositorLogicName"</param>
                ///<returns></returns>
                void setCompositorLogicName(const EVString &compositorLogicName)
                {
                    mCompositorLogicName = compositorLogicName;
                }
                ///<summary> Get the compositor logic name assigned to this technique </summary>
                ///<param></param>
                ///<returns>Compositor Logic Name</returns>
                const EVString &getCompositorLogicName() const
                {
                    return mCompositorLogicName;
                }
                ///<summary> Get parent object </summary>
                ///<param></param>
                ///<returns>parent pointer</returns>
                EarthView::World::Graphic::CCompositor *getParent();
            private:
                //// Parent compositor
                EarthView::World::Graphic::CCompositor *mParent;
                //// Local texture definitions
                EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions mTextureDefinitions;

                //// Intermediate target passes
                EarthView::World::Graphic::CCompositionTechnique::TargetPasses mTargetPasses;
                //// Output target pass (can be only one)
                EarthView::World::Graphic::CCompositionTargetPass *mOutputTarget;

                //// Optional scheme name
                EVString mSchemeName;

                //// Optional compositor logic name
                EVString mCompositorLogicName;
            };
            /** @} */
            /** @} */
        }
    }
}

#endif

