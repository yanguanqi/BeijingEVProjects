#ifndef __ShadowTextureManager_H__
#define __ShadowTextureManager_H__
#include "graphic/graphic_config.h"
#include "pixelformat.h"
#include "texture.h"
#include <core/iteratorwrapper.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class EV_GRAPHIC_DLL ShadowTextureList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef vector<EarthView::World::Graphic::CTexturePtr> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                ///RESERVE_CONTAINER_FUNCTION(mList);
                RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                iterator insert(iterator pos, EarthView::World::Graphic::CTexturePtr const &t);
            private:
                InternalList mList;
            ev_private:
                ShadowTextureList(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                ShadowTextureList();
                void push_back(EarthView::World::Graphic::CTexturePtr  const &t);
                void pop_back();

                EarthView::World::Graphic::CTexturePtr &front();
                EarthView::World::Graphic::CTexturePtr &back();
                void insert(ev_uint32 pos, EarthView::World::Graphic::CTexturePtr const &t);
                void remove(ev_size_t pos);
                ev_bool empty() const;
                EarthView::World::Graphic::CTexturePtr &operator[](ev_size_t n);
                EarthView::World::Graphic::CTexturePtr const &operator[](ev_size_t n) const;
                EarthView::World::Graphic::CTexturePtr &at(ev_size_t n);
                EarthView::World::Graphic::CTexturePtr const &at(ev_size_t n) const;
                ev_size_t size() const;
                void resize(ev_size_t newSize);
                void reserve(ev_size_t count);
                void clear();
            };
            /***** Structure containing the configuration for one shadow texture. ****/
            ///struct ShadowTextureConfig
            class EV_GRAPHIC_DLL ShadowTextureConfig : public EarthView::World::Core::CBaseObject
            {
            public:
                ev_uint32 width;
                ev_uint32 height;
                EarthView::World::Graphic::PixelFormat format;
                ev_uint32 fsaa;
                ev_uint16	depthBufferPoolId;
                ShadowTextureConfig();
            ev_private:
                ShadowTextureConfig(_in EarthView::World::Core::CNameValuePairList *pList);
            };
            class EV_GRAPHIC_DLL ShadowTextureConfigList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef vector<EarthView::World::Graphic::ShadowTextureConfig> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION_VECTOR(mList);

                iterator insert(iterator pos, EarthView::World::Graphic::ShadowTextureConfig const &t);
            private:
                InternalList mList;
            ev_private:
                ShadowTextureConfigList(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                ShadowTextureConfigList();
                void push_back(EarthView::World::Graphic::ShadowTextureConfig  const &t);
                void pop_back();

                EarthView::World::Graphic::ShadowTextureConfig &front();
                EarthView::World::Graphic::ShadowTextureConfig &back();
                void insert(ev_uint32 pos, EarthView::World::Graphic::ShadowTextureConfig const &t);
                void remove(ev_size_t pos);
                ev_bool empty() const;
                EarthView::World::Graphic::ShadowTextureConfig &operator[](ev_size_t n);
                EarthView::World::Graphic::ShadowTextureConfig const &operator[](ev_size_t n) const;
                EarthView::World::Graphic::ShadowTextureConfig &at(ev_size_t n);
                EarthView::World::Graphic::ShadowTextureConfig const &at(ev_size_t n) const;
                ev_size_t size() const;
                void resize(ev_size_t newSize);
                void resize(ev_size_t newSize, EarthView::World::Graphic::ShadowTextureConfig newValue);
                void reserve(ev_size_t count);
                void clear();
            };
            ///typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::ShadowTextureConfigList> EarthView::World::Graphic::ConstShadowTextureConfigIterator;
            class EV_GRAPHIC_DLL ConstShadowTextureConfigIterator : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::ShadowTextureConfigList> InternalIterator;
                typedef InternalIterator::ValueType ValueType;
                typedef InternalIterator::PointerType PointerType;
                typedef ShadowTextureConfigList::const_iterator IteratorType;
                ConstShadowTextureConfigIterator(IteratorType start, IteratorType last);
                ~ConstShadowTextureConfigIterator();
                ValueType peekNext () const;
                ///const PointerType peekNextPtr ()  const
                ///{
                ///	return mIterator->peekNextPtr();
                ///}
                ValueType getNext ();

                const IteratorType &begin();
                const IteratorType &end();
                const IteratorType &current();
            ev_private:
                EarthView::World::Graphic::ConstShadowTextureConfigIterator &operator=(_in const EarthView::World::Graphic::ConstShadowTextureConfigIterator &other);

            ev_private:
                ConstShadowTextureConfigIterator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                ConstShadowTextureConfigIterator(EarthView::World::Graphic::ShadowTextureConfigList &vec);

                ConstShadowTextureConfigIterator(const ConstShadowTextureConfigIterator &rhs);
                ev_bool hasMoreElements ( ) const;
                void moveNext ();
                EarthView::World::Graphic::ShadowTextureConfig getCurrent();
                EarthView::World::Graphic::ShadowTextureConfig next();
                EarthView::World::Graphic::ShadowTextureConfig getBegin();
                EarthView::World::Graphic::ShadowTextureConfig getEnd();
            private:
                InternalIterator *mIterator;
            };

            inline EV_GRAPHIC_DLL ev_bool operator== ( const EarthView::World::Graphic::ShadowTextureConfig &lhs, const EarthView::World::Graphic::ShadowTextureConfig &rhs );
            inline EV_GRAPHIC_DLL ev_bool operator!= ( const EarthView::World::Graphic::ShadowTextureConfig &lhs, const EarthView::World::Graphic::ShadowTextureConfig &rhs );

            /***** Class to manage the available shadow textures which may be shared between
            	many CSceneManager instances if formats agree.
            @remarks
            	The management of the list of shadow textures has been separated out into
            	a dedicated class to enable the clean management of shadow textures
            	across many scene manager instances. Where multiple scene managers are
            	used with shadow textures, the configuration of those shadows may or may
            	not be consistent - if it is, it is good to centrally manage the textures
            	so that creation and destruction responsibility is clear.
            ****/
            class EV_GRAPHIC_DLL CShadowTextureManager :  public EarthView::World::Core::CAllocatedObject/****,public CSingleton<EarthView::World::Graphic::CShadowTextureManager>****/
            {
            private:
                static EarthView::World::Graphic::CShadowTextureManager *ms_Singleton;
            protected:
                EarthView::World::Graphic::ShadowTextureList mTextureList;
                EarthView::World::Graphic::ShadowTextureList mNullTextureList;
                ev_size_t mCount;
            ev_private:
                CShadowTextureManager(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CShadowTextureManager();
                virtual ~CShadowTextureManager();
                /***** Populate an incoming list with shadow texture references as requested
                	in the configuration list.
                ****/
                virtual void getShadowTextures(const EarthView::World::Graphic::ShadowTextureConfigList &config,
                                               EarthView::World::Graphic::ShadowTextureList &listToPopulate);
                /***** Get an appropriately defined 'null' texture, i.e. one which will always
                	result in no shadows.
                ****/
                virtual EarthView::World::Graphic::CTexturePtr getNullShadowTexture(EarthView::World::Graphic::PixelFormat format);
                /***** Remove any shadow textures that are no longer being referenced.
                @remarks
                	This should be called fairly regularly since references may take a
                	little while to disappear in some cases (if referenced by materials)
                ****/
                virtual void clearUnused();
                /***** Dereference all the shadow textures kept in this class and remove them
                	from CTextureManager; note that it is up to the SceneManagers to clear
                	their local references.
                ****/
                virtual void clear();
                /***** Override standard CSingleton retrieval.
                @remarks
                Why do we do this? Well, it's because the CSingleton
                implementation is in a .h file, which means it gets compiled
                into anybody who includes it. This is needed for the
                CSingleton template to work, but we actually only want it
                compiled into the implementation of the class based on the
                CSingleton, not all of them. If we don't change this, we get
                link errors when trying to use the CSingleton-based class from
                an outside dll.
                @par
                This method just delegates to the template version anyway,
                but the implementation stays in this single compilation unit,
                preventing link errors.
                ****/
                static EarthView::World::Graphic::CShadowTextureManager &getSingleton();
                /***** Override standard CSingleton retrieval.
                @remarks
                Why do we do this? Well, it's because the CSingleton
                implementation is in a .h file, which means it gets compiled
                into anybody who includes it. This is needed for the
                CSingleton template to work, but we actually only want it
                compiled into the implementation of the class based on the
                CSingleton, not all of them. If we don't change this, we get
                link errors when trying to use the CSingleton-based class from
                an outside dll.
                @par
                This method just delegates to the template version anyway,
                but the implementation stays in this single compilation unit,
                preventing link errors.
                ****/
                static EarthView::World::Graphic::CShadowTextureManager *getSingletonPtr();
            };

        }
    }
}


#endif

