#ifndef __Core_Common_H__
#define __Core_Common_H__
#pragma once

#include "core/global.h"
#include "core/name_value_pair.h"
#include "core/memoryallocatedobject.h"

namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			class EV_CORE_DLL IntVector : public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				IntVector(EarthView::World::Core::CNameValuePairList *pList);
ev_private:
				typedef vector<ev_int32> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION_VECTOR(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 在迭代器pos所指向的元素前面插入值为t的新元素
				/// </summary>
				/// <param name="pos">插入元素的位置</param>
				/// <param name="t">插入元素的值</param>
				/// <returns>返回指向新元素的迭代器</returns>
				iterator insert(iterator pos, ev_int32 const &t);
			private:
				InternalList mList;
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				IntVector();
				/// <summary>
				/// 在容器的尾部添加值为t的元素
				/// </summary>
				/// <param name="t">添加元素的值</param>
				/// <returns></returns>
				void push_back(ev_int32  const &t);
				/// <summary>
				/// 删除容器的最后一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();

				/// <summary>
				/// 返回容器的第一个元素的引用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 front() const;
				/// <summary>
				/// 返回容器的最后一个元素的引用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 back() const;
				/// <summary>
				/// 在迭代器pos所指向的元素前面插入值为t的新元素
				/// </summary>
				/// <param name="pos">插入元素的位置</param>
				/// <param name="t">插入元素的值</param>
				/// <returns></returns>
				void insert(ev_uint32 pos, ev_int32 const &t);
				/// <summary>
				/// 去掉位置pos处元素的值
				/// </summary>
				/// <param name="pos">元素的位置</param>
				/// <returns>返回容器当前的值</returns>
				void remove(ev_size_t pos);
				/// <summary>
				/// 返回标记容器大小是否为0的布尔值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool empty() const;
				/// <summary>
				/// 重载[]操作符
				/// 只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
				/// </summary>
				/// <param name="n"></param>
				/// <returns></returns>
				ev_int32 &operator[](ev_size_t n);
				/// <summary>
				/// 重载[]操作符
				///由const对象调用，并且返回值不能出现在赋值运算符左侧
				/// </summary>
				/// <param name="n"></param>
				/// <returns></returns>
				ev_int32 const &operator[](ev_size_t n) const;                
				/// <summary>
				/// 返回下标为n的元素的引用
				/// 由const对象调用，并且返回值不能出现在赋值运算符左侧
				/// </summary>
				/// <param name="n"></param>
				/// <returns></returns>
				ev_int32 at(ev_size_t n) const;
				/// <summary>
				/// 返回容器中元素的个数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_size_t size() const;
				/// <summary>
				/// 调整容器的长度大小，使其能容纳newSize个元素
				/// </summary>
				/// <param name="newSize">长度</param>
				/// <returns></returns>
				void resize(ev_size_t newSize);
				void resize(ev_size_t newSize,ev_int32 value);

				void reserve(ev_size_t count);
				/// <summary>
				/// 删除容器中的所有元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();

				/// <summary>
				/// 交换内容
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void swap(IntVector& list);

				/// <summary>
				/// 从字符串中恢复
				/// </summary>
				/// <param name="str">字符串</param>
				/// <returns></returns>
				void fromString(const EVString& str);

				/// <summary>
				/// 序列化成字符串
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EVString toString()const;


ev_private:
				ev_void insert(iterator pos, iterator from ,iterator to)
				{
					mList.insert(pos,from,to);
				}
			};

			struct IntPair
			{
				ev_int32 first;
				ev_int32 second;
			};

			struct Int3
			{
				ev_int32 first;
				ev_int32 second;
				ev_int32 third;
			};

			class EV_CORE_DLL IntPairVector : public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				IntPairVector(EarthView::World::Core::CNameValuePairList *pList);
ev_private:
				typedef vector<IntPair> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION_VECTOR(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 在迭代器pos所指向的元素前面插入值为t的新元素
				/// </summary>
				/// <param name="pos">插入元素的位置</param>
				/// <param name="t">插入元素的值</param>
				/// <returns>返回指向新元素的迭代器</returns>
				iterator insert(iterator pos, IntPair const &t);
			private:
				InternalList mList;
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				IntPairVector();
				/// <summary>
				/// 在容器的尾部添加值为t的元素
				/// </summary>
				/// <param name="t">添加元素的值</param>
				/// <returns></returns>
				void push_back(IntPair  const &t);
				/// <summary>
				/// 删除容器的最后一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();

				/// <summary>
				/// 返回容器的第一个元素的引用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				IntPair &front();
				/// <summary>
				/// 返回容器的最后一个元素的引用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				IntPair &back();
				/// <summary>
				/// 在迭代器pos所指向的元素前面插入值为t的新元素
				/// </summary>
				/// <param name="pos">插入元素的位置</param>
				/// <param name="t">插入元素的值</param>
				/// <returns></returns>
				void insert(ev_uint32 pos, IntPair const &t);
				/// <summary>
				/// 去掉位置pos处元素的值
				/// </summary>
				/// <param name="pos">元素的位置</param>
				/// <returns>返回容器当前的值</returns>
				void remove(ev_size_t pos);
				/// <summary>
				/// 返回标记容器大小是否为0的布尔值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool empty() const;
				/// <summary>
				/// 重载[]操作符
				/// 只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
				/// </summary>
				/// <param name="n"></param>
				/// <returns></returns>
				IntPair &operator[](ev_size_t n);
				/// <summary>
				/// 重载[]操作符
				///由const对象调用，并且返回值不能出现在赋值运算符左侧
				/// </summary>
				/// <param name="n"></param>
				/// <returns></returns>
				IntPair const &operator[](ev_size_t n) const;
				/// <summary>
				/// 返回下标为n的元素的引用
				/// 只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
				/// </summary>
				/// <param name="n"></param>
				/// <returns></returns>
				IntPair &at(ev_size_t n);
				/// <summary>
				/// 返回下标为n的元素的引用
				/// 由const对象调用，并且返回值不能出现在赋值运算符左侧
				/// </summary>
				/// <param name="n"></param>
				/// <returns></returns>
				IntPair const &at(ev_size_t n) const;
				/// <summary>
				/// 返回容器中元素的个数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_size_t size() const;
				/// <summary>
				/// 调整容器的长度大小，使其能容纳newSize个元素
				/// </summary>
				/// <param name="newSize">长度</param>
				/// <returns></returns>
				void resize(ev_size_t newSize);
				void resize(ev_size_t newSize,IntPair value);

				void reserve(ev_size_t count);
				/// <summary>
				/// 删除容器中的所有元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();

ev_private:
				ev_void insert(iterator pos, iterator from ,iterator to)
				{
					mList.insert(pos,from,to);
				}
			};

			class EV_CORE_DLL Int3Vector : public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				Int3Vector(EarthView::World::Core::CNameValuePairList *pList);
ev_private:
				typedef vector<Int3> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION_VECTOR(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 在迭代器pos所指向的元素前面插入值为t的新元素
				/// </summary>
				/// <param name="pos">插入元素的位置</param>
				/// <param name="t">插入元素的值</param>
				/// <returns>返回指向新元素的迭代器</returns>
				iterator insert(iterator pos, Int3 const &t);
			private:
				InternalList mList;
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				Int3Vector();
				/// <summary>
				/// 在容器的尾部添加值为t的元素
				/// </summary>
				/// <param name="t">添加元素的值</param>
				/// <returns></returns>
				void push_back(Int3  const &t);
				/// <summary>
				/// 删除容器的最后一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();

				/// <summary>
				/// 返回容器的第一个元素的引用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				Int3 &front();
				/// <summary>
				/// 返回容器的最后一个元素的引用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				Int3 &back();
				/// <summary>
				/// 在迭代器pos所指向的元素前面插入值为t的新元素
				/// </summary>
				/// <param name="pos">插入元素的位置</param>
				/// <param name="t">插入元素的值</param>
				/// <returns></returns>
				void insert(ev_uint32 pos, Int3 const &t);
				/// <summary>
				/// 去掉位置pos处元素的值
				/// </summary>
				/// <param name="pos">元素的位置</param>
				/// <returns>返回容器当前的值</returns>
				void remove(ev_size_t pos);
				/// <summary>
				/// 返回标记容器大小是否为0的布尔值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool empty() const;
				/// <summary>
				/// 重载[]操作符
				/// 只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
				/// </summary>
				/// <param name="n"></param>
				/// <returns></returns>
				Int3 &operator[](ev_size_t n);
				/// <summary>
				/// 重载[]操作符
				///由const对象调用，并且返回值不能出现在赋值运算符左侧
				/// </summary>
				/// <param name="n"></param>
				/// <returns></returns>
				Int3 const &operator[](ev_size_t n) const;
				/// <summary>
				/// 返回下标为n的元素的引用
				/// 只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
				/// </summary>
				/// <param name="n"></param>
				/// <returns></returns>
				Int3 &at(ev_size_t n);
				/// <summary>
				/// 返回下标为n的元素的引用
				/// 由const对象调用，并且返回值不能出现在赋值运算符左侧
				/// </summary>
				/// <param name="n"></param>
				/// <returns></returns>
				Int3 const &at(ev_size_t n) const;
				/// <summary>
				/// 返回容器中元素的个数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_size_t size() const;
				/// <summary>
				/// 调整容器的长度大小，使其能容纳newSize个元素
				/// </summary>
				/// <param name="newSize">长度</param>
				/// <returns></returns>
				void resize(ev_size_t newSize);
				void resize(ev_size_t newSize,Int3 value);

				void reserve(ev_size_t count);
				/// <summary>
				/// 删除容器中的所有元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();

ev_private:
				ev_void insert(iterator pos, iterator from ,iterator to)
				{
					mList.insert(pos,from,to);
				}
			};

			class EV_CORE_DLL RealVector : public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				RealVector(EarthView::World::Core::CNameValuePairList *pList);
ev_private:
				typedef vector<ev_real64> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION_VECTOR(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 在迭代器pos所指向的元素前面插入值为t的新元素
				/// </summary>
				/// <param name="pos">插入元素的位置</param>
				/// <param name="t">插入元素的值</param>
				/// <returns>返回指向新元素的迭代器</returns>
				iterator insert(iterator pos, ev_real64 const &t);
			private:
				InternalList mList;
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				RealVector();
				/// <summary>
				/// 在容器的尾部添加值为t的元素
				/// </summary>
				/// <param name="t">添加元素的值</param>
				/// <returns></returns>
				void push_back(ev_real64  const &t);
				/// <summary>
				/// 删除容器的最后一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();

				/// <summary>
				/// 返回容器的第一个元素的引用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_real64 front() const;
				/// <summary>
				/// 返回容器的最后一个元素的引用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_real64 back() const;
				/// <summary>
				/// 在迭代器pos所指向的元素前面插入值为t的新元素
				/// </summary>
				/// <param name="pos">插入元素的位置</param>
				/// <param name="t">插入元素的值</param>
				/// <returns></returns>
				void insert(ev_uint32 pos, ev_real64 const &t);
				/// <summary>
				/// 去掉位置pos处元素的值
				/// </summary>
				/// <param name="pos">元素的位置</param>
				/// <returns>返回容器当前的值</returns>
				void remove(ev_size_t pos);
				/// <summary>
				/// 返回标记容器大小是否为0的布尔值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool empty() const;
				/// <summary>
				/// 重载[]操作符
				/// 只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
				/// </summary>
				/// <param name="n"></param>
				/// <returns></returns>
				ev_real64 &operator[](ev_size_t n);
				/// <summary>
				/// 重载[]操作符
				///由const对象调用，并且返回值不能出现在赋值运算符左侧
				/// </summary>
				/// <param name="n"></param>
				/// <returns></returns>
				ev_real64 const &operator[](ev_size_t n) const;                
				/// <summary>
				/// 返回下标为n的元素的引用
				/// 由const对象调用，并且返回值不能出现在赋值运算符左侧
				/// </summary>
				/// <param name="n"></param>
				/// <returns></returns>
				ev_real64 at(ev_size_t n) const;
				/// <summary>
				/// 返回容器中元素的个数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_size_t size() const;
				/// <summary>
				/// 调整容器的长度大小，使其能容纳newSize个元素
				/// </summary>
				/// <param name="newSize">长度</param>
				/// <returns></returns>
				void resize(ev_size_t newSize);
				void resize(ev_size_t newSize,ev_real64 value);

				void reserve(ev_size_t count);
				/// <summary>
				/// 删除容器中的所有元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();

				/// <summary>
				/// 从字符串中恢复
				/// </summary>
				/// <param name="str">字符串</param>
				/// <returns></returns>
				void fromString(const EVString& str);

				/// <summary>
				/// 序列化成字符串
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EVString toString()const;

ev_private:
				ev_void insert(iterator pos, iterator from ,iterator to)
				{
					mList.insert(pos,from,to);
				}
				void swap(_in RealVector& rhs);
			};

			class EV_CORE_DLL RealList : public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				RealList(EarthView::World::Core::CNameValuePairList *pList);
ev_private:
				typedef list<ev_real64> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION_VECTOR(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 在迭代器pos所指向的元素前面插入值为t的新元素
				/// </summary>
				/// <param name="pos">插入元素的位置</param>
				/// <param name="t">插入元素的值</param>
				/// <returns>返回指向新元素的迭代器</returns>
				iterator insert(iterator pos, ev_real64 const &t);
			private:
				InternalList mList;
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				RealList();
				/// <summary>
				/// 在容器的尾部添加值为t的元素
				/// </summary>
				/// <param name="t">添加元素的值</param>
				/// <returns></returns>
				void push_back(ev_real64  const &t);
				/// <summary>
				/// 删除容器的最后一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();

				/// <summary>
				/// 返回容器的第一个元素的引用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_real64 front() const;
				/// <summary>
				/// 返回容器的最后一个元素的引用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_real64 back() const;
				/// <summary>
				/// 返回标记容器大小是否为0的布尔值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool empty() const;
				/// <summary>
				/// 返回容器中元素的个数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_size_t size() const;
				/// <summary>
				/// 调整容器的长度大小，使其能容纳newSize个元素
				/// </summary>
				/// <param name="newSize">长度</param>
				/// <returns></returns>
				void resize(ev_size_t newSize);
				void resize(ev_size_t newSize,ev_real64 value);
				/// <summary>
				/// 删除容器中的所有元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();

ev_private:
				ev_void insert(iterator pos, iterator from ,iterator to)
				{
					mList.insert(pos,from,to);
				}
			};

		}
	}
}

#endif

