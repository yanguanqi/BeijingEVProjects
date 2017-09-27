#ifndef EV_CORE_DIRECTORY_H
#define EV_CORE_DIRECTORY_H
#pragma once
#include "core/global.h"
#include "core/fileengine_def.h"
#include "core/string_array.h"

namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            class EV_CORE_DLL CDirectory :  public EarthView::World::Core::CAllocatedObject
            {
            public:
                CDirectory() {}
                virtual ~CDirectory() {}
            ev_private:
                CDirectory(EarthView::World::Core::CNameValuePairList *pList) 
				{
		
				}
            public:
                /*
                * 函数功能： 创建文件夹
                * 参    数：
                const ev_string &strDir [in] : 目标文件夹
                * 返 回 值：TRUE成功，FALSE失败
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                static ev_bool create(const ev_string &strDir);
                /*
                * 函数功能： 删除文件夹
                * 参    数：
                const ev_string &strDir [in] : 目标文件夹
                * 返 回 值：TRUE成功，FALSE失败
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                static ev_bool remove(const ev_string &strDir);
                /*
                * 函数功能： 文件夹是否存在
                * 参    数：
                const ev_string &strDir [in] : 目标文件夹
                * 返 回 值：TRUE存在，FALSE不存在或失败
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                static ev_bool exists(const ev_string &strDir);
                /*
                * 函数功能： 拷贝文件夹
                * 参    数：
                const ev_string &strSrcDir [in] : 源文件夹
                const ev_string &strDstDir [in] : 目标文件夹
                ev_bool bOverWrite [in] : 如果存在是否覆盖
                * 返 回 值：true成功，false失败
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                static ev_bool copy(const ev_string &strSrcDir, const ev_string &strDstDir, ev_bool bOverWrite = false);
                /*
                * 函数功能： 移动文件夹
                * 参    数：
                const ev_string &strSrcDir [in] : 源文件夹
                const ev_string &strDstDir [in] : 目标文件夹
                ev_bool bOverWrite [in] : 如果存在是否覆盖
                * 返 回 值：true成功，false失败
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                static ev_bool move(const ev_string &strSrcDir, const ev_string &strDstDir, ev_bool bOverWrite = false);
                /*
                * 函数功能： 获取当前目录下的文件
                * 参    数：
                ev_stringArray &files [in] : 文件名称数组
                ev_bool bSubDir [in] : 是否遍历子文件夹
                * 返 回 值：true成功，false失败
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                static ev_bool getFiles(const ev_string &strDir, ev_stringArray &files, ev_bool bSubDir);
				static ev_bool getFiles(const ev_string &strDir, ev_stringArray &files, ev_bool bSubDir, const ev_string &strWildcard);
                /*
                * 函数功能： 获取当前目录下的文件夹
                * 参    数：
                ev_stringArray &files [in] : 文件夹名称数组
                ev_bool bSubDir [in] : 是否遍历子文件夹
                * 返 回 值：true成功，false失败
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                static ev_bool getDirectories(const ev_string &strDir, ev_stringArray &dirs, ev_bool bSubDir = false);
                /*
                * 函数功能： 获取当前目录的属性
                * 参    数：
                EarthView::World::Core::FileAttributes &attrs [out] : 属性列表
                * 返 回 值：true成功，false失败static ev_bool getAttributes(const ev_string &strDir, EarthView::World::Core::FileAttributes &attrs);
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                static ev_bool getAttributes(const ev_string &strDir, EarthView::World::Core::FileAttributes &attrs);
                /*
                * 函数功能： 获取当前目录路径
                * 参    数：
                ev_string &dir [out] : 目录路径
                * 返 回 值：true成功，false失败
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                static ev_bool getCurrentDirectory(_out ev_string &dir);

				/*
                * 函数功能： 设置当前目录路径
				* 说明:此函数为Web应用程序专用，用于指定当前目录
                * 参    数：
                ev_string &dir [out] : 目录路径
                * 返 回 值：true成功，false失败
                * 作者：赵威
                * 日期：2014.7.4
                */
                static ev_bool setCurrentDirectory(const ev_string &dir);

                /*
                * 函数功能： 获取临时目录路径
                * 参    数：
                ev_string &dir [out] : 目录路径
                * 返 回 值：true成功，false失败
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                static ev_bool getTempDirectory(_out ev_string &dir);

				/*
                * 函数功能： 获取系统目录
                * 参    数：
                ev_string &dir [out] : 目录路径
                * 返 回 值：true成功，false失败
                * 作者：邹先涛
                * 日期：2012.2.13
                */
				static ev_bool getSystemDirectory(_out ev_string& dir);

				/*
                * 函数功能： 获取进程名
                * 参    数：
                ev_string &dir [out] : 进程名
                * 返 回 值：true成功，false失败
                * 作者：赵威
                * 日期：2014.5.4
                */
				static ev_bool getModuleName(_out ev_string& module);

				/// <summary>
				/// 格式化路径
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				static EVString formatPath(const EVString& path);
				static EVString formatPath(const EVString& path, const EVString& file);

			private:
				static ev_string ms_currentDirectory;

            };


        }
    }
}

#endif

