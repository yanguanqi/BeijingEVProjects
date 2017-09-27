#ifndef EARTHVIEW_WORLD_SPATIAL_CARTO_SYMBOLCONVERTOR_H
#define EARTHVIEW_WORLD_SPATIAL_CARTO_SYMBOLCONVERTOR_H

#include "spatial2dcarto/cartoconfig.h"
#include "symbol/textsymbol.h"
#include "symbol/linesymbol.h"
#include "symbol/fillsymbol.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				/// <summary>
				/// 符号转换类
				/// </summary>
				class EV_SPATIAL2DCARTO_DLL CSymbolConvertor : public EarthView::World::Core::CAllocatedObject
				{
				public:

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CSymbolConvertor();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CSymbolConvertor();

					/// <summary>
					/// 线状符号的转化
					/// </summary>
					/// <param name="pLineSymbol">线状符号</param>
					/// <param name="dPageScale">纸张比例尺</param>
					/// <returns></returns>
					EarthView::World::Spatial::Display::CLineSymbol *resetLineSymbolWidth(EarthView::World::Spatial::Display::CLineSymbol * pLineSymbol, ev_real64 dPageScale);
					
					/// <summary>
					/// 文本符号的转化
					/// </summary>
					/// <param name="pTextSymbol">文本符号</param>
					/// <param name="dPageScale">纸张比例尺</param>
					/// <returns></returns>
					EarthView::World::Spatial::Display::CTextSymbol *resetTextSymbolSize(EarthView::World::Spatial::Display::CTextSymbol * pTextSymbol, ev_real64 dPageScale);

				public:

				ev_private:
					CSymbolConvertor(EarthView::World::Core::CNameValuePairList *pList );
				private:
					CSymbolConvertor(CSymbolConvertor& obj);
				};
			}
		}
	}
}
#endif