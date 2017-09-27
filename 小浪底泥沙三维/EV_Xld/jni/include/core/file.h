#ifndef EV_CORE_FILE_H
#define EV_CORE_FILE_H
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

            struct FileHandle;
            class EV_CORE_DLL CFile  :  public EarthView::World::Core::CAllocatedObject
            {
            public:
                CFile();
                ~CFile();
            ev_private:
                CFile(EarthView::World::Core::CNameValuePairList *pList);
            public:
                /*
                * 函数功能： 打开/创建文件
                * 参    数：
                *  const ev_string &strFileName [in] ：文件名（路径+名称）
                *  const EarthView::World::Core::FILEMODE &eMode [in] ：打开模式
                * 返 回 值：true打开成功，false打开失败
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                ev_bool open(const ev_string &strFileName, const EarthView::World::Core::FILEMODE &eMode = READ_MODE);
                /*
                * 函数功能： 判断文件是否打开
                * 参    数：
                * 返 回 值：true已经打开，false没有打开
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                ev_bool isOpen();
                /*
                * 函数功能： 关闭文件
                * 参    数：
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                ev_void close();
                /*
                * 函数功能： 以文本方式读取文件的一行
                * 参    数：
                *  ev_string &strLine [out] ：文件的一行
                * 返 回 值：返回真正读取的字节数，失败或文件末尾返回0
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                ev_uint64 readLine(_out ev_string &strLine);
                /*
                * 函数功能： 以文本方式写文件的一行
                * 参    数：
                * const ev_string &strLine [in] ：文件的一行
                * 返 回 值：返回真正写了多少字节，返回0表示失败
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                ev_uint64 writeLine(const ev_string &strLine);
                /*
                * 函数功能： 以二进制方式读文件
                * 参    数：
                * ev_byte *buf [out] ：二进制字节
                * ev_uint64 [in] ：字节数
                * 返 回 值：返回真正读了多少字节,返回0表示有可能到达末尾，有可能失败
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                ev_uint64 read(ev_byte *buf, ev_uint64 nNum);
                /*
                * 函数功能： 以二进制方式写文件
                * 参    数：
                * ev_byte *buf [in] ：二进制字节
                * ev_uint64 [in] ：字节数
                * 返 回 值：返回真正写了多少字节，返回0表示失败
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                ev_uint64 write(ev_byte *buf, ev_uint64 nNum);
                /*
                * 函数功能： 判断是否到达文件末尾
                * 参    数：
                * 返 回 值：TRUE已到达末尾，FALSE未到达末尾
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                ev_bool eof();
                /*
                * 函数功能： 移动文件指针
                * 参    数：
                ev_uint64 nPosOff [in] : 文件指针的偏移步数
                const EarthView::World::Core::FILEWAY &way [in] ：文件指针偏移的方向
                * 返 回 值：返回当前指针位置,如果为0且有错误码表示失败
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                ev_uint64 seek(ev_uint64 nPosOff, const EarthView::World::Core::FILEWAY &way);
                /*
                * 函数功能： 保存文件
                * 参    数：
                * 返 回 值：true保存文件成功，false保存文件失败
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                ev_bool save();
                /*
                * 函数功能： 文件重命名
                * 参    数：
                const ev_string &strFileName [in] : 文件名（路径+名称）
                const ev_string &strNwName [in] ：新的文件名称，不包括后缀
                * 返 回 值：TRUE成功,FALSE失败
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                static ev_bool rename(const ev_string &strFileName, const ev_string &strNwName);
                /*
                * 函数功能： 拷贝文件
                * 参    数：
                const ev_string &strSrcFileName [in] : 源文件名（路径+名称）
                const ev_string &strDstFileName [in] ：目标文件夹
                ev_bool bOverWrite [in] ：如果存在是否覆盖
                * 返 回 值：TRUE成功,FALSE失败
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                static ev_bool copy(const ev_string &strSrcFileName, const ev_string &strDstFolder, ev_bool bOverWrite = false);
                /*
                * 函数功能： 移动文件
                * 参    数：
                const ev_string &strSrcFileName [in] : 源文件名（路径+名称）
                const ev_string &strDstFileName [in] ：目标文件夹
                ev_bool bOverWrite [in] ：如果存在是否覆盖
                * 返 回 值：TRUE成功,FALSE失败
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                static ev_bool move(const ev_string &strSrcFileName, const ev_string &strDstFolder, ev_bool bOverWrite = false);
                /*
                * 函数功能： 删除文件
                * 参    数：
                const ev_string &strFileName [in] : 源文件名（路径+名称）
                * 返 回 值：TRUE成功,FALSE失败
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                static ev_bool remove(const ev_string &strFileName);
                /*
                * 函数功能： 判断文件是否存在
                * 参    数：
                const ev_string &strFileName [in] : 源文件名（路径+名称）
                * 返 回 值：TRUE存在,FALSE不存在
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                static ev_bool exists(const ev_string &strFileName);
                /*
                * 函数功能： 获取文件长度
                * 参    数：
                const ev_string &strFileName [in] : 源文件名（路径+名称）
                * 返 回 值：文件长度，返回0且有错误码表示失败
                * 作者：邹先涛
                * 日期：2012.2.13
                */
                static ev_uint64 getSize(const ev_string &strFileName);
                /*
                * 函数功能： 获取文件属性
                * 参    数：
                EarthView::World::Core::FileAttributes &attrs [out] : 文件属性结构 包括时间、是否只读、是否隐藏等
                const ev_string &strFileName[in]:  源文件名（路径+名称）
                * 返 回 值：TRUE成功，FALSE失败
                * 作者：邹先涛
                * 日期：2012.2.13 日期  2012.2.16修改：增加参数strFileName

                */
                static ev_bool getAttributes(const ev_string &strFileName, _out EarthView::World::Core::FileAttributes &attrs);


				/// <summary>
				/// 判断给定的字符串是不是一个绝对文件路径
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static ev_bool isAbsoluteFile(const EVString& filepath);

            private:
                FileHandle *m_ptHandle;
            };
        }
    }
}

#endif

