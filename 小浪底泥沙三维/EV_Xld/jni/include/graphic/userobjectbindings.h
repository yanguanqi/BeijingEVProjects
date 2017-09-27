#ifndef _UserObjectsBinding_H__
#define _UserObjectsBinding_H__
#include <core/any.h>
#include "graphic_config.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class EV_GRAPHIC_DLL CUserObjectBindings : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CUserObjectBindings(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /** Class constructor. */
                CUserObjectBindings();
                /** Class destructor. */
                virtual ~CUserObjectBindings();
                /** Clear all user objects from this binding.	*/
                void clear() const;
            ev_private:
                /** Sets any kind of user object on this class instance.
                @remarks
                This method allows you to associate any user object you like with
                this class. This can be a pointer back to one of your own
                classes for instance.
                @note This method is key less meaning that each call for it will override
                previous object that were set. If you need to associate multiple objects
                with this class use the extended version that takes key.
                */
                void setUserAny(const EarthView::World::Core::CAny &anything);
                /** Retrieves the custom key less user object associated with this class.
                */
                const EarthView::World::Core::CAny &getUserAny() const;
                /** Sets any kind of user object on this class instance.
                @remarks
                This method allows you to associate multiple object with this class.
                This can be a pointer back to one of your own classes for instance.
                Use a unique key to distinguish between each of these objects.
                @param key The key that this data is associate with.
                @param anything The data to associate with the given key.
                */
                void setUserAny(const EVString &key, const EarthView::World::Core::CAny &anything);
                /** Retrieves the custom user object associated with this class and key.
                @param key The key that the requested user object is associated with.
                @remarks
                In case no object associated with this key the returned EarthView::World::Core::CAny object will be empty.
                */
                const EarthView::World::Core::CAny &getUserAny(const EVString &key) const;
                /** Erase the custom user object associated with this class and key from this binding.
                @param key The key that the requested user object is associated with.
                */
                void eraseUserAny(const EVString &key);
                /** Returns empty user any object.
                */
                static const EarthView::World::Core::CAny &getEmptyUserAny();
                /// Types.
            protected:
                typedef map<EVString, EarthView::World::Core::CAny>			UserObjectsMap;
                typedef UserObjectsMap::iterator		UserObjectsMapIterator;
                typedef UserObjectsMap::const_iterator	UserObjectsMapConstIterator;
                /** Internal class that uses as data storage container.
                */
                class CAttributes : public EarthView::World::Core::CAllocatedObject
                {
                public:
                    /** Attribute storage ctor. */
                    CAttributes() : mpUserObjectsMap(NULL) {}
                    /** Attribute storage dtor. */
                    ~CAttributes()
                    {
                        if (mpUserObjectsMap != NULL)
                        {
                            EV_DELETE mpUserObjectsMap;
                            mpUserObjectsMap = NULL;
                        }
                    }
                    UserObjectsMap		*mpUserObjectsMap;				/// Will hold a map between user keys to user objects.
                ev_private:
                    EarthView::World::Core::CAny					mKeylessAny;					/// Will hold key less associated user object for fast access.

                };
                /// CAttributes.
            private:
                static EarthView::World::Core::CAny				msEmptyAny;						/// Shared empty any object.
                mutable CAttributes		*mAttributes;					/// Class attributes - will be allocated on demand.

            };
            /** @} */
            /** @} */
        }
    }
}

#endif

