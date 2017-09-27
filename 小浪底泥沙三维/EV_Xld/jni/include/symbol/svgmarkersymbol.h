#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_SVGMARKERSYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_SVGMARKERSYMBOL_H
#include "symbol/markersymbol.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
			/// <summary>
			/// SVG填充点风格类
			/// 提供方法如下：
			/// 
			/// 
			/// </summary>
			class EV_SYMBOL_DLL CSVGMarkerSymbol :
				public EarthView::World::Spatial::Display::CMarkerSymbol
			{
				friend class CDrawSVGMarker;
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CSVGMarkerSymbol();

				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CSVGMarkerSymbol();

				/// <summary>
				/// 获取SVG文件流大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>SVG文件流大小</returns>
				ev_int32 getSvgSize() const;

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

				/// <summary>
				/// 是否含有SVG
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool hasImage() const;

				/// <summary>
				/// 获取SVG的个数
				/// </summary>
				/// <param name=""></param>
				/// <returns>SVG个数</returns>
				ev_uint32 getImageCount() const;

				/// <summary>
				/// 获取指定SVG的ID
				/// </summary>
				/// <param name="index">SVG序列号</param>
				/// <returns>SVG的ID</returns>
				EVString getImageID(ev_uint32 index) const;

				/// <summary>
				/// 获取指定SVG的数据
				/// </summary>
				/// <param name="index">SVG序列号</param>
				/// <returns>SVG数据流</returns>
				EarthView::World::Core::MemoryDataStreamPtr getImage(_in ev_uint32 index) const;
				/// <summary>
				/// 设置指定SVG的数据
				/// </summary>
				/// <param name="index">SVG序列号</param>
				/// <param name="imageID">SVGID</param>
				/// <param name="stream">SVG数据流</param>
				/// <returns></returns>
				ev_void setImage(ev_uint32 index,const EVString& imageID,EarthView::World::Core::MemoryDataStreamPtr stream);

// 				/// <summary>
// 				/// 获取填充颜色字符串
// 				/// </summary>
// 				/// <param name=""></param>
// 				/// <returns>填充颜色字符串</returns>
// 				const EVString getFillColorStr() const;
// 
// 				/// <summary>
// 				/// 获取填充颜色
// 				/// </summary>
// 				/// <param name=""></param>
// 				/// <returns>填充颜色</returns>
// 				const IColor* getFillColor() const;
// 
// 				/// <summary>
// 				/// 设置填充颜色
// 				/// </summary>
// 				/// <param name="outlineColor">填充颜色</param>
// 				/// <returns></returns>
// 				ev_void setFillColor(const IColor* fillColor);
// 
// 				/// <summary>
// 				/// 获取外边框大小
// 				/// </summary>
// 				/// <param name=""></param>
// 				/// <returns>大小</returns>
// 				ev_real64 getOutlineSize() const;
// 
// 				/// <summary>
// 				/// 获取外边框大小
// 				/// </summary>
// 				/// <param name=""></param>
// 				/// <returns>大小</returns>
// 				EVString getOutlineSizeStr() const;
// 
// 				/// <summary>
// 				/// 获取外边框颜色
// 				/// </summary>
// 				/// <param name=""></param>
// 				/// <returns>外边框颜色</returns>
// 				const EVString getOutlineColorStr() const;
// 
// 				/// <summary>
// 				/// 设置外边框大小
// 				/// </summary>
// 				/// <param name="size">外边框大小</param>
// 				/// <returns></returns>
// 				ev_void setOutlineSize(ev_real64 size);
// 
// 				/// <summary>
// 				/// 设置外边框颜色
// 				/// </summary>
// 				/// <param name="outlineColor">外边框颜色</param>
// 				/// <returns></returns>
// 				ev_void setOutlineColor(const IColor* outlineColor);
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
				CSVGMarkerSymbol( EarthView::World::Core::CNameValuePairList* pList );
			protected:
				/// <summary>
				/// svg数据
				/// </summary>
				EarthView::World::Core::MemoryDataStreamPtr m_pszSvgBuffer;
				/// <summary>
				/// svg数据大小
				/// </summary>
				ev_uint32 m_nSvgSize;
				/// <summary>
				/// svg名称
				/// </summary>
				EVString m_szSvgName;
			private:
				C_DISABLE_COPY( CSVGMarkerSymbol );
			};
		}
		}
	}
}
#endif
