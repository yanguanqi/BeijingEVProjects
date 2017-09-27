#ifndef _DynLib_H__
#define _DynLib_H__
#pragma once
#include "core/memoryallocatedobject.h"
#include "core/stringdefines.h"

#if EV_PLATFORM == EV_PLATFORM_WIN32
#define DYNLIB_HANDLE hInstance
#define DYNLIB_LOAD( a ) LoadLibraryEx( a, NULL, LOAD_WITH_ALTERED_SEARCH_PATH )
#define DYNLIB_GETSYM( a, b ) GetProcAddress( a, b )
#define DYNLIB_UNLOAD( a ) !FreeLibrary( a )
struct HINSTANCE__;
typedef struct HINSTANCE__* hInstance;
#elif EV_PLATFORM == EV_PLATFORM_LINUX || EV_PLATFORM == EV_PLATFORM_ANDROID
#define DYNLIB_HANDLE void*
#define DYNLIB_LOAD( a ) dlopen( a, RTLD_LAZY | RTLD_GLOBAL)
#define DYNLIB_GETSYM( a, b ) dlsym( a, b )
#define DYNLIB_UNLOAD( a ) dlclose( a )
#elif EV_PLATFORM == EV_PLATFORM_APPLE || EV_PLATFORM == EV_PLATFORM_APPLE_IOS
#define DYNLIB_HANDLE void*
#define DYNLIB_LOAD( a ) mac_loadDylib( a )
#define DYNLIB_GETSYM( a, b ) dlsym( a, b )
#define DYNLIB_UNLOAD( a ) dlclose( a )
#elif EV_PLATFORM == EV_PLATFORM_SYMBIAN
#define DYNLIB_HANDLE void*
#define DYNLIB_LOAD( a ) 0
#define DYNLIB_GETSYM( a, b ) 0
#define DYNLIB_UNLOAD( a ) 0
#endif
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            /// <summary>
            /// 动态库类
            /// 管理已加载的运行库中标记的数据
            /// </summary>
            class EV_CORE_DLL CDynLib : public EarthView::World::Core::CAllocatedObject
            {
            protected:
                EVString mName;
                /// <summary>
                /// 得到最新加载的错误
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回错误</returns>
                EVString dynlibError();
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">EVString对象的引用</param>
                /// <returns></returns>
                CDynLib(_in const EVString &name );
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CDynLib(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CDynLib();
                /// <summary>
                /// 加载库
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void load();
                /// <summary>
                /// 卸载库
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void unload();
                /// <summary>
                /// 得到库的名字
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回库的名字</returns>
                const EVString &getName() const;
                /// <summary>
                /// 在加载的库中寻找给定名称的函数
                /// </summary>
                /// <param name="strName">标记名</param>
                /// <returns>函数指针</returns>
                void *getSymbol(_in const EVString &strName ) const throw();
            protected:
                DYNLIB_HANDLE m_hInst;
            };
        }
    }
}

#endif

