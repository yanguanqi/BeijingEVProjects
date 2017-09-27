#ifndef _SYMBOL_LISTENER_H
#define _SYMBOL_LISTENER_H

/**
* Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
* All rights reserved.
* 
* 文件名称：isymbollistener.h
* 摘    要：该文件是ISymbolListener类的接口声明
*
* 当前版本：1.0
* 作    者：赵 威
* 完成日期：2012年10月15日
*
* 修改历史：
* [修改序列]   [修改日期]    [修改者]	[修改内容]
*    1		  2012-10-15	    赵  威   1.0.0版本的内容声明
* 
**/

#include "config.h"
#include <core/memoryallocatedobject.h>
#include <spatialinterface/isymbol.h>

namespace EarthView{
    namespace World{
        namespace Spatial{
            namespace Display{
                /// <summary>
                /// 用户扩展符号的序列化类
                /// 纯虚类                
                /// </summary>
                class EV_PRJMGR_DLL ISymbolListener : public EarthView::World::Core::CAllocatedObject
                {
ev_private:
					ISymbolListener(_in EarthView::World::Core::CNameValuePairList* pList);
                public:
                    ISymbolListener();
                    virtual ~ISymbolListener();

                public:
				  /// <summary>
				  /// 从XML中恢复用户自定义类型的符号			  
				  /// </summary>
				  /// <param name="strXml">符号的XML文本</param>
                  virtual EarthView::World::Spatial::Display::ISymbol* customSymbolFromXml(const EVString& strXml);

				  /// <summary>
				  /// 将用户自定义类型的符号序列化成XML文本			  
				  /// </summary>
				  /// <param name="symbol">符号对象</param>
                  virtual EVString customSymbolToXml(EarthView::World::Spatial::Display::ISymbol* symbol) const;
                };
            }
        }
    }
}
#endif
