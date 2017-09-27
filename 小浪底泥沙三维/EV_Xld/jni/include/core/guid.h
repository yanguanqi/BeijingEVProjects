#ifndef EV_CORE_GUID_H
#define EV_CORE_GUID_H
#pragma once

#include "core/global.h"
#include "core/memoryallocatedobject.h"

namespace EarthView
{
    namespace World
    {
        namespace Core
        {
            class EV_CORE_DLL GUID  :  public EarthView::World::Core::CBaseObject
            {
            public:
                GUID();
            ev_private:
                GUID(EarthView::World::Core::CNameValuePairList* pList);
            public:
				/// <summary>
				/// 获取一个新的guid
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                static ev_string NewGuid();

				/// <summary>
				/// 获取用户guid
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static ev_string getUserGuid();

				/// <summary>
				/// 获取带有用户名称的guid
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static ev_string getUserGuidWithUserName(); 
            };
        }
    }
}

#endif
