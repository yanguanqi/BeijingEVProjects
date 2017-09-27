#ifndef EV_CORE_FILEENGINE_DEF_H
#define EV_CORE_FILEENGINE_DEF_H
#pragma once
#include "core/global.h"
#include "core/multibytestring.h"
#include "core/object.h"
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            ///功能：文件打开模式
            ///创建时间：2012.2.13
            ///作者：邹先涛
            enum FILEMODE
            {
                READ_MODE = 0,
                WRITE_MODE,
                APPEND_MODE,
                BINARY_READ_MODE,
                BINARY_WRITE_MODE,
                BINARYE_APPEND_MODE
            };
            ///功能：文件指针移动方向
            ///创建时间：2012.2.13
            ///作者：邹先涛
            enum FILEWAY
            {
                AT_BEGIN = 0,
                AT_END,
                AT_CURRENT
            };

            ///功能：内存映射文件访问权限
            ///创建时间：2012.2.13
            ///作者：邹先涛
            enum FILEACCESS
            {
                READ_ACCESS = 0,
                READWRITE_ACCESS
            };
		
            ///功能：文件/目录属性
            ///创建时间：2012.2.13
            ///作者：邹先涛
            class EV_CORE_DLL FileAttributes : public EarthView::World::Core::CBaseObject
            {
            public:
                FileAttributes() {}
                ev_bool bIsDirectory;
                ev_bool bIsHidden;
                ev_bool bIsReadOnly;
                ev_string strCreateTime;
                ev_string strLastAccessTime;
                ev_string strLastWriteTime;
            ev_private:
                FileAttributes(_in EarthView::World::Core::CNameValuePairList *pList) 
				{
			
				}
            };

        }
    }
}

#endif
