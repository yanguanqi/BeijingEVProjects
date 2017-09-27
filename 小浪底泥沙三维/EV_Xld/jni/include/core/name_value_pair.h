#ifndef EV_CORE_NAME_VALUE_PAIR_H
#define EV_CORE_NAME_VALUE_PAIR_H
#pragma once
#include "core/global.h"
#include "core/multibytestring.h"
using namespace std;
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            ///struct NameValuePairListData;
            class EV_CORE_DLL CNameValuePairList
            {
            public:
                CNameValuePairList();
                virtual ~CNameValuePairList();
            public:
                /// <summary>
                /// 插入键值
                /// </summary>
                /// <param name="strKey">键</param>
                /// <param name="pVal">值</param>
                /// <returns>如果键值已存在,则返回false;否则返回true</returns>
                ev_bool Add(const ev_string& strKey, ev_void *pVal);

                /// <summary>
                /// 删除指定键值
                /// </summary>
                /// <param name="strKey">键</param>
                /// <returns>如果键值不存在，则返回false;否则返回true</returns>
                ev_void  *Delete(const ev_string& strKey);

                /// <summary>
                /// 更新值
                /// </summary>
                /// <param name="strKey">键</param>
                /// <param name="pNewVal">新值</param>
                /// <returns>如果给定的键不存在,则返回空，否则返回原值</returns>
                ev_void *Update(const ev_string& strKey, ev_void *pNewVal);

                /// <summary>
                /// 返回键值
                /// </summary>
                /// <param name="strKey">键</param>
                /// <returns>如果给定的键不存在,则返回空，否则返回原值</returns>
                ev_void *GetAt(const ev_string& strKey);
                /// <summary>
                /// 判断键值是否存在
                /// </summary>
                /// <param name="strKey">键</param>
                /// <returns>如果给定的键不存在,则返回false，否则true</returns>
                ev_bool Exist(const ev_string& strKey);
                /// <summary>
                /// 获取键值个数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint32 Count();
            private:
                map<ev_string, ev_void *> _map;
            };
            EV_DLL_EXPORT_C  EV_CORE_DLL ev_void *__stdcall ev_createNameValuePairList();
            EV_DLL_EXPORT_C  EV_CORE_DLL ev_void __stdcall ev_deleteNameValuePairList(ev_void *pList);

            EV_DLL_EXPORT_C  EV_CORE_DLL ev_bool __stdcall ev_addNameValuePair(ev_void *pList, ev_char *sKey, ev_void *pVal);
            EV_DLL_EXPORT_C  EV_CORE_DLL ev_void *__stdcall ev_deleteNameValuePair(ev_void *pList, ev_char *sKey);
            EV_DLL_EXPORT_C  EV_CORE_DLL ev_void *__stdcall ev_updateNameValuePair(ev_void *pList, ev_char *sKey, ev_void *pNewVal);

            EV_DLL_EXPORT_C  EV_CORE_DLL ev_void *__stdcall ev_getNameValuePair(ev_void *pList, ev_char *sKey);

            EV_DLL_EXPORT_C  EV_CORE_DLL ev_bool __stdcall ev_existNameValuePair(ev_void *pList, ev_char *sKey);
            EV_DLL_EXPORT_C  EV_CORE_DLL ev_uint32 __stdcall ev_countNameValuePair(ev_void *pList);
        }
    }
}

#endif