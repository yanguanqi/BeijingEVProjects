#ifndef EV_CORE_FILEMAPPING_H
#define EV_CORE_FILEMAPPING_H
#pragma once
#include "core/global.h"
#include "core/memoryallocatedobject.h"
#include "core/fileengine_def.h"

namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            struct FileMappingHandle;
            class EV_CORE_DLL CFileMapping : public EarthView::World::Core::CAllocatedObject
            {
            public:
                /*
                * 函数功能： 默认构造函数
                * 参    数：无
                * 返 回 值：无
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                CFileMapping();
            ev_private:
                CFileMapping(EarthView::World::Core::CNameValuePairList *pList);
            public:
                /*
                * 函数功能： 析构函数，释放资源句柄
                * 参    数：无
                * 返 回 值：无
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                virtual ~CFileMapping();

                /*
                * 函数功能： 打开内存映射文件对象
                			，设置内存映射文件相关属性参数
                * 参    数：
                const tstring& strFileName [in] : 文件路径（路径+文件名）
                const EarthView::World::Core::FILEACCESS &access [in] :  文件访问方式
                ev_uint64 nMaxSize [in] : 64bit地址表示的文件总大小,默认0代表映射全部文件
                const tstring &strShareName [in] : 如果通过文件内存映射实现进程间共享内存的话，可以在此设置共享名称

                * 返 回 值：true打开成功，false打开失败
                * 作者：邹先涛
                * 日期：2012.2.13

                注意：操作系统的分配粒度64K，意思是用映射打开的文件大小都是64k的倍数，所以在创建新的空映射
                文件准备写入时，如果要写入的长度没有64K的倍数，也要申请成64k的倍数


                */
                ev_bool open(const ev_string &strFileName
                             , const EarthView::World::Core::FILEACCESS &access = READ_ACCESS
                                     , ev_uint64 nMaxSize = 0
                                             , const ev_string &strShareName = ""
                            );

                /*
                * 函数功能： 判断内存映射文件是否打开
                * 参    数：无
                * 返 回 值：true打开成功，false打开失败
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                ev_bool isOpen();

                /*
                * 函数功能： 关闭内存映射文件
                * 参    数：无
                * 返 回 值：无
                */
                void close();

                /*
                * 函数功能： 获取内存映射文件视图指针
                * 参    数：
                ev_uint64 nOffset[in] : 代表内存映射视图的偏移
                ev_uint64 nBytes[in] : 偏移长度 , 默认为0，代表从偏移为起始位置到最后。必须为分页大小整数倍win32 64k
                * 返 回 值：缓冲区指针
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                ev_void *mapViewOfFile(ev_uint64 nOffset, ev_uint64 nBytes = 0);

                /*
                * 函数功能： 数据回写
                * 参    数：
                * 返 回 值：true成功，false失败
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                ev_bool flushMapViewOfFile();

                /*
                * 函数功能： 释放内存映射文件视图指针，在读大文件时一次读不完需要多次映射内存区域多次释放
                * 参    数：
                * 返 回 值：true成功释放映射，false释放失败
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                ev_bool unMapViewOfFile();


            private:
                FileMappingHandle *m_ptHandle;
            };

        }
    }
}

#endif
