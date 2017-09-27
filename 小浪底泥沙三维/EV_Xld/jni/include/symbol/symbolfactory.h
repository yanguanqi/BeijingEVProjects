#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_SYMBOLFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_SYMBOLFACTORY_H

#include "symbol/symbolexports.h"
#include "core/memoryallocatedobject.h"
#include "core/mutex.h"
#include "spatialinterface/isymbol.h"
#include "core/xml.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
            namespace Display{
				/// <summary>
				/// CSymbol类的创建工厂
				/// 提供方法如下：
				/// 获取符号工厂指针、通过数据流恢复符号信息
				/// 虚方法：是否为符号的xml文本头、通过xmlElement恢复符号信息、通过SLD恢复符号信息、
				///         销毁符号、销毁所有符号
				/// </summary>
				class EV_SYMBOL_DLL CSymbolFactory:
					public EarthView::World::Spatial::Display::ISymbolFactory
				{		
				public:
					/// <summary>
					/// 获取符号工厂指针
					/// </summary>
					/// <param name=""></param>
					/// <returns>符号工厂指针</returns>
					static _extfree CSymbolFactory* getInstance();

					/// <summary>
					/// 通过数据流恢复符号信息
					/// </summary>
					/// <param name="stream">数据流</param>
					/// <returns>符号</returns>
					virtual _extfree EarthView::World::Spatial::Display::ISymbol* createSymbolFromStream( EarthView::World::Core::CDataStream& stream );
					
                    /// <summary>
                    /// 是否为符号的xml文本头
                    /// </summary>
                    /// <param name="xmlNodeName">XML节点名字</param>
                    /// <returns></returns>
                    virtual ev_bool isSymbolHeader(const EVString& xmlNodeName);

					/// <summary>
					/// 通过xmlElement恢复符号信息
					/// </summary>
					/// <param name="xmlText">xmlElement字符串</param>
					/// <returns></returns>
					virtual _extfree EarthView::World::Spatial::Display::ISymbol* createSymbolFromXmlElement(EarthView::World::Core::CXmlElement& element);

					/// <summary>
					/// 通过SLD恢复符号信息
					/// </summary>
					/// <param name="stream">SLD字符串</param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Display::ISymbol* createSymbolFromSLD(const EVString& sldText);

                    /// <summary>
                    /// 销毁符号
                    /// </summary>
                    /// <param name="pSymbol">符号对象</param>
                    /// <returns></returns>
                    virtual  ev_void destroySymbol(EarthView::World::Spatial::Display::ISymbol* pSymbol);

				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CSymbolFactory();
				ev_private:
					CSymbolFactory( EarthView::World::Core::CNameValuePairList* pList );
				private:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CSymbolFactory();
				private:
		
					C_DISABLE_COPY(CSymbolFactory);
				private:
					static CSymbolFactory* m_pInstance;                   
				};
			}
		}
	}
}
#endif
