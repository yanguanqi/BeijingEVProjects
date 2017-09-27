#ifndef EV_CORE_STRINGARRAY_H
#define EV_CORE_STRINGARRAY_H
#pragma once
#include "core/global.h"
#include "core/memoryallocatedobject.h"
#include "core/multibytestring.h"
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            /// <summary>
            /// 类说明：字符串数组类，提供基本的数组相关操作
            /// </summary>
            class EV_CORE_DLL CStringArray : public EarthView::World::Core::CAllocatedObject
            {
            public:
                CStringArray();
                ~CStringArray();
            ev_private:
                CStringArray(EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 函数说明：获取字符串数组大小
                /// </summary>
                /// <returns>返回数组大小</returns>
                ev_uint32 getCount();
                /// <summary>
                /// 函数说明：判断数组是否为空
                /// </summary>
                /// <returns>true为空，false为不空</returns>
                ev_bool isEmpty();
                /// <summary>
                /// 函数说明：在数组尾部添加字符串
                /// </summary>
                /// <param name="strNewItem">新字符串项</param>
                /// <returns>返回插入后数组大小</returns>
                ev_uint32 append(const ev_string &strNewItem);
                /// <summary>
                /// 函数说明：在设定的位置插入字符串
                /// </summary>
                /// <param name="index">新字符位置</param>
                /// <param name="strNewItem">新字符串项</param>
                /// <returns></returns>
                void insertAt(ev_uint32 index, const ev_string &strNewItem);
                /// <summary>
                /// 函数说明：根据位置获取数组中的字符串
                /// </summary>
                /// <param name="index">新字符位置</param>
                /// <returns>返回的字符串</returns>
                ev_string getAt(ev_uint32 index);
				/// <summary>
                /// 函数说明：根据位置获取数组中的字符串
                /// </summary>
                /// <param name="index">新字符位置</param>
                /// <returns>返回的字符串(不拷贝)</returns>
				ev_string& at(ev_uint32 index);
				/// <summary>
				/// 函数说明：根据位置获取数组中的字符串
				/// </summary>
				/// <param name="index">新字符位置</param>
				/// <returns>返回的字符串(不拷贝)</returns>
				const ev_string& at(ev_uint32 index) const;
                /// <summary>
                /// 函数说明：根据位置移除字符串项
                /// </summary>
                /// <param name="index">字符串位置</param>
                /// <returns></returns>
                void removeAt(ev_uint32 index);
                /// <summary>
                /// 函数说明：移除数组中所有字符串
                /// </summary>
                /// <returns></returns>
                void removeAll();
				/// <summary>
				/// 函数说明：获取字符串数组大小
				/// </summary>
				/// <returns></returns>
				ev_size_t size();
				/// <summary>
				/// 函数说明：重新定义空间
				/// </summary>
				/// <returns></returns>
				void resize(_in ev_size_t newSize);
            private:
                vector<ev_string> m_strAry;
            };
            typedef CStringArray ev_stringArray;

			/// <summary>
            /// 类说明：宽字符串数组类，提供基本的数组相关操作
            /// </summary>
			class EV_CORE_DLL CWStringArray : public EarthView::World::Core::CAllocatedObject
			{
			public:
				CWStringArray();
				~CWStringArray();
			ev_private:
				CWStringArray(EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 函数说明：获取字符串数组大小
				/// </summary>
				/// <returns>返回数组大小</returns>
				ev_uint32 getCount();
				/// <summary>
				/// 函数说明：判断数组是否为空
				/// </summary>
				/// <returns>true为空，false为不空</returns>
				ev_bool isEmpty();
				/// <summary>
				/// 函数说明：在数组尾部添加字符串
				/// </summary>
				/// <param name="strNewItem">新字符串项</param>
				/// <returns>返回插入后数组大小</returns>
				ev_uint32 append(const ev_wstring &strNewItem);
				/// <summary>
				/// 函数说明：在设定的位置插入字符串
				/// </summary>
				/// <param name="index">新字符位置</param>
				/// <param name="strNewItem">新字符串项</param>
				/// <returns></returns>
				void insertAt(ev_uint32 index, const ev_wstring &strNewItem);
				/// <summary>
				/// 函数说明：根据位置获取数组中的字符串
				/// </summary>
				/// <param name="index">新字符位置</param>
				/// <returns>返回的字符串</returns>
				ev_wstring getAt(ev_uint32 index);
				/// <summary>
                /// 函数说明：根据位置获取数组中的字符串
                /// </summary>
                /// <param name="index">新字符位置</param>
                /// <returns>返回的字符串(不拷贝)</returns>
				ev_wstring& at(ev_uint32 index);
				/// <summary>
				/// 函数说明：根据位置获取数组中的字符串
				/// </summary>
				/// <param name="index">新字符位置</param>
				/// <returns>返回的字符串(不拷贝)</returns>
				const ev_wstring& at(ev_uint32 index) const;
				/// <summary>
				/// 函数说明：根据位置移除字符串项
				/// </summary>
				/// <param name="index">字符串位置</param>
				/// <returns></returns>
				void removeAt(ev_uint32 index);
				/// <summary>
				/// 函数说明：移除数组中所有字符串
				/// </summary>
				/// <returns></returns>
				void removeAll();
				/// <summary>
				/// 函数说明：获取字符串数组大小
				/// </summary>
				/// <returns></returns>
				ev_size_t size();
				/// <summary>
				/// 函数说明：重新定义空间
				/// </summary>
				/// <returns></returns>
				void resize(_in ev_size_t newSize);
			private:
				vector<ev_wstring> m_strAry;       
			};

			typedef CStringArray ev_stringArray;
        }
    }
}

#endif

