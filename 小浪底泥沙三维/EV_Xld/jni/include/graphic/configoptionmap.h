#ifndef _ConfigOptionMap_H__
#define _ConfigOptionMap_H__
#include "graphic/graphic_config.h"
#include <core/stringvector.h>
#include "core/ev_string.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /** Packages the details of a configuration option.
                @remarks
                    Used for CRenderSystem::getConfigOptions. If immutable is true, this
                    option must be disabled for modifying.
            */
            class EV_GRAPHIC_DLL ConfigOption : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                ConfigOption(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                ConfigOption() {}
                EVString name;
                EVString currentValue;
                EarthView::World::Core::StringVector possibleValues;
                ev_bool immutable;
            };
            ///typedef map< EVString, EarthView::World::Graphic::ConfigOption > ConfigOptionMap;
            class EV_GRAPHIC_DLL ConfigOptionMap : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                ConfigOptionMap(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                ConfigOptionMap() {}
                ev_bool push(const EVString &key, const EarthView::World::Graphic::ConfigOption &val)
                {
                    if(mList.find(key) == mList.end())
                    {
                        mList[key] = (EarthView::World::Graphic::ConfigOption)val;
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }
                ev_bool exist(const EVString &key)
                {
                    return mList.find(key) != mList.end();
                }
                EarthView::World::Graphic::ConfigOption &operator[](const EVString &key)
                {
                    return get(key);
                }
                EarthView::World::Graphic::ConfigOption &get(const EVString &key)
                {
                    return mList[key];
                }
                void erase(const EVString &key)
                {
                    if(exist(key))
                        mList.erase(key);
                }
                ev_size_t size() const
                {
                    return mList.size();
                }
                void clear()
                {
                    mList.clear();
                }
                ev_bool empty() const
                {
                    return mList.empty();
                }
            ev_private:
                typedef map<EVString, EarthView::World::Graphic::ConfigOption> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::mapped_type mapped_type;
                typedef InternalList::key_type key_type;
                typedef InternalList::value_type value_type;
                typedef pair<InternalList::iterator, bool> _Pairib;
                RESERVE_CONTAINER_FUNCTION_MAP(mList);			/// 保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                _Pairib insert(const value_type &val)
                {
                    return mList.insert(val);
                }
                iterator find(const EVString &key)
                {
                    return mList.find(key);
                }
                const_iterator find(const EVString &key) const
                {
                    return mList.find(key);
                }
            private:
                InternalList mList;
            };
        }
    }
}

#endif

