#ifndef __DynLibManager_H__
#define __DynLibManager_H__
#pragma once
#include "core/memoryallocatedobject.h"
#include "core/stringdefines.h"

namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            class CDynLib;
            /// <summary>
            /// 动态加载库管理类
            /// 用于管理动态加载库，追踪加载动态库的打开
            /// </summary>
            class EV_CORE_DLL CDynLibManager: public EarthView::World::Core::CAllocatedObject
            {
            private:
                static EarthView::World::Core::CDynLibManager *ms_Singleton;
            protected:
                typedef map<EVString, EarthView::World::Core::CDynLib *> DynLibList;
                DynLibList mLibList;
            public:
                /// <summary>
                /// 默认的构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CDynLibManager();
                /// <summary>
                /// 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回单体类的引用</returns>
                static EarthView::World::Core::CDynLibManager &getSingleton();
                /// <summary>
                /// 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回单体类的引用</returns>
                static EarthView::World::Core::CDynLibManager *getSingletonPtr();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CDynLibManager(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 虚析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CDynLibManager();
                /// <summary>
                /// 加载库
                /// </summary>
                /// <param name="filename">库的名字</param>
                /// <returns>返回指向库的指针</returns>
                EarthView::World::Core::CDynLib *load(_in const EVString &filename);
                /// <summary>
                /// 卸载库
                /// </summary>
                /// <param name="lib">指向库的指针</param>
                /// <returns></returns>
                void unload(_in EarthView::World::Core::CDynLib *lib);
            };
        }
    }
}

#endif

