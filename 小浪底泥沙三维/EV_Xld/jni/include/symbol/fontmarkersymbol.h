#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_FONTMARKERSYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_FONTMARKERSYMBOL_H

#include "symbol/markersymbol.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
			/// <summary>
			/// 使用字体库填充点风格
			/// 提供方法如下：
			/// 获取与设置 字体库中字符索引、字体库名称
			/// 获取符号类型、获取流、获取SLD
			/// 深度copy风格对象、判断两个Symbol是否属性相同、将Symbol属性写入XML元素
			/// 从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
			/// </summary>
			class EV_SYMBOL_DLL CFontMarkerSymbol :
				public EarthView::World::Spatial::Display::CMarkerSymbol
			{
				friend class CDrawFontMarker;

			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CFontMarkerSymbol();

				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CFontMarkerSymbol();

				/// <summary>
				/// 获取字体库中字符索引
				/// </summary>
				/// <param name=""></param>
				/// <returns>字符索引</returns>
				ev_int32 getCharIndex() const;

				/// <summary>
				/// 设置字符索引
				/// </summary>
				/// <param name="index">字符索引</param>
				/// <returns></returns>
				ev_void setCharIndex(ev_int32 index);

				/// <summary>
				/// 获取字体库名称
				/// </summary>
				/// <param name=""></param>
				/// <returns>字体库名称</returns>
				EVString getFontName() const;

				/// <summary>
				/// 设置字体库名称
				/// </summary>
				/// <param name="fontName">字体库名称</param>
				/// <returns></returns>
				ev_void setFontName(const EVString& szName );
				
				/// <summary>
				/// 获取符号类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>符号类型</returns>
				ev_int32 getSymbolType() const;

				/// <summary>
				/// 深度copy风格对象
				/// </summary>
				/// <param name=""></param>
				/// <returns>风格对象</returns>
				_extfree EarthView::World::Spatial::Display::ISymbol* clone() const ;

				/// <summary>
				/// 获取流
				/// </summary>
				/// <param name="stream">流对象</param>
				/// <returns></returns>
				ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;

				/// <summary>
				/// 获取SLD
				/// </summary>
				/// <param name=""></param>
				/// <returns>SLD字符串</returns>
				EVString toSLD() const;

				/// <summary>
				/// 从XML元素中恢复Symbol属性
				/// </summary>
				/// <param name="xml">XML字符串</param>
				/// <returns></returns>
				ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

				/// <summary>
				/// 将Symbol属性写入XML元素
				/// </summary>
				/// <param name="xml">XML字符串</param>
				/// <returns></returns>
				EarthView::World::Core::CXmlElement toXmlElement() const;

				/// <summary>
				/// 判断两个Symbol是否属性相同
				/// </summary>
				/// <param name="pSymbol">Symbol对象</param>
				/// <returns></returns>
				ev_bool equal(const EarthView::World::Spatial::Display::ISymbol* pSymbol);
			ev_internal:
				/// <summary>
				/// 从SLD恢复Symbol属性
				/// </summary>
				/// <param name="sld">SLD字符串</param>
				/// <returns></returns>
				ev_void fromSLD( EVString& sld );

				/// <summary>
				/// 从数据流恢复Symbol属性
				/// </summary>
				/// <param name="stream">流对象</param>
				/// <returns></returns>
				ev_void fromStream( EarthView::World::Core::CDataStream& stream );
			ev_private:
				CFontMarkerSymbol( EarthView::World::Core::CNameValuePairList* pList );
			private:
				C_DISABLE_COPY( CFontMarkerSymbol );
			ev_internal:
				void* makeImage(ev_real64 dMultiplier, int textRint);
			private:
				/// <summary>
				/// 字体库名称
				/// </summary>
				EVString m_strFontName;
				/// <summary>
				/// 字体库索引
				/// </summary>
				long m_nCharIndex;
				struct key_font;
				EarthView::World::Core::CRecursiveMutex mImagesLock;
				ev_map<key_font, void*> mvImages;
			};
		}
		}
	}
}
#endif

