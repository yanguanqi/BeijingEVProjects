#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_RGBCOLOR_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_RGBCOLOR_H

#include "color/color.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
			/// <summary>
			/// RGB颜色类
			/// 提供方法如下：
			/// 获取与设置Red、Green、Blue单值、获取与设置RGB值、设置CIELab值、获取COLORREF值、获取RGB值
			/// 转换成RGB字符串、转换成二进制、将属性信息转为XML、深度拷贝、获取颜色类型
			///	判断相同类型的对象属性是否一致、从XMLElement中恢复信息、从数据流恢复Color属性
			/// 判断HSV 转成 Lab是否成功、判断Lab 转成 HSV是否成功
			/// </summary>
			class EV_COLOR_DLL CRgbColor :
				public EarthView::World::Spatial::Display::CColor
			{
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CRgbColor();

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="r">r值</param>
				/// <param name="g">g值</param>
				/// <param name="b">b值</param>
				/// <returns></returns>
				/// <memo></memo>
				CRgbColor(ev_uint8 r,ev_uint8 g,ev_uint8 b);

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="r">r值</param>
				/// <param name="g">g值</param>
				/// <param name="b">b值</param>
				/// <param name="a">a值</param>
				/// <returns></returns>
				CRgbColor( ev_uint8 r, ev_uint8 g, ev_uint8 b, ev_uint8 a );

				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CRgbColor();///

				/// <summary>
				/// 获取Red值
				/// </summary>
				/// <param name=""></param>
				/// <returns>Red值</returns>
				virtual ev_uint8 getRed() const;///

				/// <summary>
				/// 获取Green值
				/// </summary>
				/// <param name=""></param>
				/// <returns>Green值</returns>
				virtual ev_uint8 getGreen() const;

				/// <summary>
				/// 获取Blue值
				/// </summary>
				/// <param name=""></param>
				/// <returns>Blue值</returns>
				virtual ev_uint8 getBlue() const;

				/// <summary>
				/// 获取RGB值
				/// </summary>
				/// <param name="red">red值</param>
				/// <param name="green">green值</param>
				/// <param name="blue">blue值</param>
				/// <returns></returns>
				virtual ev_void getRGB( _out ev_uint8 & red, _out ev_uint8 & green, _out ev_uint8 & blue ) const;
				
				/// <summary>
				/// 设置RGB值
				/// </summary>
				/// <param name="red">red值</param>
				/// <param name="green">green值</param>
				/// <param name="blue">blue值</param>
				/// <returns></returns>
				virtual ev_void setRGB(ev_uint8 red,ev_uint8 green,ev_uint8 blue);

				/// <summary>
				/// 设置Red值
				/// </summary>
				/// <param name="value">Red值</param>
				/// <returns></returns>
				ev_void setRed(ev_uint8 value);///

				/// <summary>
				/// 设置Green值
				/// </summary>
				/// <param name="value">Green值</param>
				/// <returns></returns>
				ev_void setGreen(ev_uint8 value);///

				/// <summary>
				/// 设置Blue值
				/// </summary>
				/// <param name="value">Blue值</param>
				/// <returns></returns>
				ev_void setBlue(ev_uint8 value);///

				/// <summary>
				/// 设置CIELab值
				/// 重载其类函数
				/// </summary>
				/// <param name="L">L值</param>
				/// <param name="a">a值</param>
				/// <param name="b">b值</param>
				/// <returns></returns>
				virtual ev_void setCIELab(ev_real64 L,ev_real64 a,ev_real64 b);

				/// <summary>
				/// 获取COLORREF值
				/// 0xbbggrr
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_uint32 getCOLORREF() const;

				/// <summary>
				/// 获取RGB值
				/// 0xffrrggbb
				/// </summary>
				/// <param name=""></param>
				/// <returns>RGB值</returns>
				virtual ev_uint32 getRgbValue() const;

				/// <summary>
				/// 转换成RGB字符串
				/// 如#FFFFFF，白色
				/// </summary>
				/// <param name=""></param>
				/// <returns>RGB字符串</returns>
				virtual EVString toRGBString() const;

				/// <summary>
				/// 深度拷贝
				/// 内存需要外部释放
				/// </summary>
				/// <param name=""></param>
				/// <returns>颜色对象</returns>
				virtual _extfree EarthView::World::Spatial::Display::IColor* clone() const;

				/// <summary>
				/// 转换成二进制
				/// </summary>
				/// <param name="stream">流对象</param>
				/// <returns>xml</returns>
				virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;

				/// <summary>
				/// 获取颜色类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>颜色类型</returns>
				virtual EarthView::World::Spatial::Display::EVColorSpaceType getType() const;

				/// <summary>
				/// 将属性信息转为XML
				/// </summary>
				/// <param name="xmlFile">xml文件</param>
				/// <returns></returns>
				virtual EarthView::World::Core::CXmlElement toXmlElement() const;

				/// <summary>
				/// 从XMLElement中恢复信息
				/// </summary>
				/// <param name="element">要素</param>
				/// <returns></returns>
				virtual ev_void fromXmlElement( EarthView::World::Core::CXmlElement& element);

				/// <summary>
				/// 判断相同类型的对象属性是否一致
				/// </summary>
				/// <param name="pColor">Color对象</param>
				/// <returns></returns>
				virtual ev_bool equal(const EarthView::World::Spatial::Display::IColor* pColor);
			ev_private:
				CRgbColor( EarthView::World::Core::CNameValuePairList* pList );
			ev_internal:
				/// <summary>
				/// 从数据流恢复Color属性
				/// </summary>
				/// <param name="stream">流对象</param>
				/// <returns></returns>
				ev_void fromStream( EarthView::World::Core::CDataStream& stream );
			protected:
				/// <summary>
				/// Red
				/// </summary>
				ev_uint8 m_nRed;
				/// <summary>
				/// Green
				/// </summary>
				ev_uint8 m_nGreen;
				/// <summary>
				/// Blue
				/// </summary>
				ev_uint8 m_nBlue;
			private:
				/// <summary>
				/// RGB 转换到 Lab
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否转换成功</returns>
				ev_bool rgb2Lab();
				/// <summary>
				/// Lab 转换到 RGB
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否转换成功</returns>
				ev_bool lab2Rgb();
				C_DISABLE_COPY( CRgbColor );
			};
		}
		}
	}
}
#endif
