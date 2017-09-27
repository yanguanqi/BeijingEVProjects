#ifndef _GROUPSTRINGINTERFACEMAP_INCLUDE__
#define _GROUPSTRINGINTERFACEMAP_INCLUDE__

#include "core/event.h"
#include "frameworkproxy_config.h"
#include "core/stringinterface.h"

// using namespace EarthView::World::Core;

namespace EarthView
{
	namespace World
	{
		namespace FrameWorkProxy
		{
			class EV_FRAMEWORKPROXY_DLL CGroupStringinterfaceMap : public EarthView::World::Core::CBaseObject
			{	
			public:
				class EV_FRAMEWORKPROXY_DLL GroupStringinterface : public EarthView::World::Core::CBaseObject
				{
                ev_private:
					GroupStringinterface(_in EarthView::World::Core::CNameValuePairList *pList)
					{
					}
				public: 
					GroupStringinterface()
						:mValue(NULL)
					{

					}
					EVString mKey;
					EarthView::World::Core::CStringInterface* mValue;
				};
ev_private:
				typedef vector<GroupStringinterface> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">位置迭代器</param>
				/// <param name="t">元素值</param>
				/// <returns>插入元素后元素迭代器</returns>
				CGroupStringinterfaceMap::iterator insert(_in CGroupStringinterfaceMap::iterator pos, _in CGroupStringinterfaceMap::GroupStringinterface const &t);
			private:
				InternalList mList;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CGroupStringinterfaceMap(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CGroupStringinterfaceMap();
				/// <summary>
				/// 在容器最后添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				ev_void push_back(_in CGroupStringinterfaceMap::GroupStringinterface const &t);
				/// <summary>
				/// 删除容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void pop_back();
				/// <summary>
				/// 返回容器首个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器首个元素</returns>
				CGroupStringinterfaceMap::GroupStringinterface& front();
				/// <summary>
				/// 返回容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器最后元素</returns>
				CGroupStringinterfaceMap::GroupStringinterface& back();
				/// <summary>
				/// 容器中间位置插入元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				ev_void insert(_in ev_uint32 pos, _in CGroupStringinterfaceMap::GroupStringinterface const &t);
				/// <summary>
				/// 删除容器中间位置元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <returns></returns>
				ev_void remove(_in ev_size_t pos);
				/// <summary>
				/// 返回容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>容器为空返回true，否则false</returns>
				ev_bool empty() const;
				/// <summary>
				/// 重载[]操作符
				/// </summary>
				/// <param name="n">下标位置</param>
				/// <returns>返回下标对应的值</returns>
				CGroupStringinterfaceMap::GroupStringinterface& operator[](_in ev_size_t n);
				/// <summary>
				/// 重载[]操作符
				/// </summary>
				/// <param name="n">下标位置</param>
				/// <returns>返回下标对应的值</returns>
				CGroupStringinterfaceMap::GroupStringinterface const &operator[](_in ev_size_t n) const;
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				CGroupStringinterfaceMap::GroupStringinterface& at(_in ev_size_t n);
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				CGroupStringinterfaceMap::GroupStringinterface const &at(_in ev_size_t n) const;
				/// <summary>
				/// 返回元素的数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回元素的数量大小</returns>
				ev_size_t size() const;
				/// <summary>
				/// 改变容器中元素数量大小
				/// </summary>
				/// <param name="newSize">改变的容器中元素数量大小</param>
				/// <returns></returns>
				ev_void resize(_in ev_size_t newSize);
				/// <summary>
				/// 改变容器中最小的元素容纳数量
				/// </summary>
				/// <param name="count">最小的元素容纳数量</param>
				/// <returns></returns>
				ev_void reserve(_in ev_size_t count);
				/// <summary>
				/// 清空所有元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void clear();

				ev_bool push(const EVString& key, const EarthView::World::Core::CStringInterface* val);

				EarthView::World::Core::StringVector getKeys();

				ev_bool exist(const EVString& key);

				EarthView::World::Core::CStringInterface* operator[](const EVString& key)
				{
					return get(key);
				}

				EarthView::World::Core::CStringInterface* get(const EVString& key);

				void erase(const EVString& key);

			};
			//				class EV_FRAMEWORKPROXY_DLL CGroupStringinterfaceMap : public EarthView::World::Core::CBaseObject
			//				{
			//				public:
			//					CGroupStringinterfaceMap();
			//
			//					ev_bool push(const EVString& key, const EarthView::World::Core::CStringInterface* val);
			//
			//					ev_bool exist(const EVString& key);
			//
			//                    EarthView::World::Core::CStringInterface* operator[](const EVString& key)
			//                    {
			//                        return get(key);
			//                    }
			//					EarthView::World::Core::CStringInterface* get(const EVString& key);
			//
			//                    EarthView::World::Core::StringVector getKeys();
			// 
			//                    void erase(const EVString& key);
			//
			//                    ev_size_t size() const;
			//
			//                    void clear();
			//
			//                    ev_bool empty() const;
			//
			//ev_private:
			//					CGroupStringinterfaceMap(_in EarthView::World::Core::CNameValuePairList *pList);
			//ev_private:
			//					typedef map<EVString, EarthView::World::Core::CStringInterface*,DisableCompare<EVString>> InternalList;
			//					typedef InternalList::iterator iterator;
			//					typedef InternalList::const_iterator const_iterator;
			//					typedef InternalList::reverse_iterator reverse_iterator;
			//					typedef InternalList::const_reverse_iterator const_reverse_iterator;
			//					typedef InternalList::mapped_type mapped_type;
			//					typedef InternalList::key_type key_type;
			//					typedef InternalList::value_type value_type;
			//					typedef pair<iterator, bool> _Pairib;
			//					RESERVE_CONTAINER_FUNCTION_MAP(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
			//                    _Pairib insert(const value_type &val)
			//                    {
			//                        return mList.insert(val);
			//                    }
			//                    iterator find(const EVString& key)
			//                    {
			//                        return mList.find(key);
			//                    }
			//                    const_iterator find(const EVString& key) const
			//                    {
			//                        return mList.find(key);
			//                    }
			//				private:
			//					InternalList mList;
			//				};
		}
	}

}
#endif

