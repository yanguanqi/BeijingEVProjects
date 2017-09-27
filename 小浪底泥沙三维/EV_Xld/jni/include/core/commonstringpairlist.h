#pragma once
#include "core/global.h"
#include "core/memoryallocatedobject.h"
#include "core/threaddefines.h"
#include "core/stringdefines.h"

namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			class EV_CORE_DLL CommonStringPairList : public EarthView::World::Core::CBaseObject
			{
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CommonStringPairList();
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CommonStringPairList(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 增加元素
				/// </summary>
				/// <param name="key">键</param>
				/// <param name="val">值</param>
				/// <returns>添加成功返回true，否则返回false</returns>
				ev_bool push(_in const EVString &key, _in const EVString &val);
				/// <summary>
				/// 判断键是否存在
				/// </summary>
				/// <param name="key">键</param>
				/// <returns>存在该键返回true，否则返回false</returns>
				ev_bool exist(_in const EVString &key);
				/// <summary>
				/// "[]"的重载
				/// </summary>
				/// <param name="key">键</param>
				/// <returns>返回键</returns>
				EVString &operator[](_in const EVString &key);
				/// <summary>
				/// 得到值
				/// </summary>
				/// <param name="key">键</param>
				/// <returns>返回键</returns>
				EVString &get(_in const EVString &key);
				/// <summary>
				/// 删除元素
				/// </summary>
				/// <param name="key">键</param>
				/// <returns></returns>
				void erase(_in const EVString &key);
				/// <summary>
				/// 得到该容器类的空间大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回空间的大小</returns>
				ev_size_t size() const;
				/// <summary>
				/// 清空该容器类
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();
				/// <summary>
				/// 判断该容器类是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>若为空则返回true，否则返回false</returns>
				ev_bool empty() const;
ev_private:
				typedef map<EVString, EVString> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::mapped_type mapped_type;
				typedef InternalList::key_type key_type;
				typedef InternalList::value_type value_type;
				typedef pair<iterator, bool> _Pairib;
				RESERVE_CONTAINER_FUNCTION_MAP(mList);
				/// <summary>
				/// 插入值
				/// </summary>
				/// <param name="val">需要插入的值</param>
				/// <returns>插入成功则为true，否则为false</returns>
				_Pairib insert(_in const value_type &val);
				/// <summary>
				/// 寻找索引为某个键的元素
				/// </summary>
				/// <param name="key">键</param>
				/// <returns>返回索引为某个键的元素</returns>
				iterator find(_in const EVString &key) ;

				/// <summary>
				/// 寻找索引为某个键的元素
				/// </summary>
				/// <param name="key">键</param>
				/// <returns>返回索引为某个键的元素</returns>
				const_iterator find(_in const EVString &key) const;

			private:
				InternalList mList;
			};

			typedef CommonStringPairList NameValuePairList;
            typedef CommonStringPairList BinaryOptionList;          
            typedef CommonStringPairList AliasTextureNamePairList;
		}
	}
}
