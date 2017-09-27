#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_COLOR_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_COLOR_H

#include "spatialinterface/icolor.h"
#include "color/colorexports.h"
#include "core/datastream.h"
#include "core/xml.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				/// <summary>
				/// 所有颜色类的基类
				/// 提供方法如下：
				/// 获取与设置CIELab颜色空间值、COLORREF值、RGB值、RGBA单值的几种方法
				/// 转换成字符串、转换成二进制、判断是否无色、判断相同类型的对象属性是否一致
				/// 将属性信息转为XML、从XMLElement中恢复信息、从数据流恢复Color属性
				/// 从流中读取和写入字符串，并将流位置向后提升
				/// </summary>
				class EV_COLOR_DLL CColor:
					public EarthView::World::Spatial::Display::IColor
				{		
					friend class CColorFactory;
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CColor();
					
					/// <summary>
					/// 获取CIELab颜色空间的值
					/// </summary>
					/// <param name="L">L值</param>
					/// <param name="a">a值</param>
					/// <param name="b">b值</param>
					/// <returns></returns>
					virtual ev_void getCIELab( _out ev_real64 &L, _out ev_real64 &a, _out ev_real64 &b) const;

					/// <summary>
					/// 设置CIELab颜色空间的颜色值
					/// </summary>
					/// <param name="L">L值</param>
					/// <param name="a">a值</param>
					/// <param name="b">b值</param>
					/// <returns></returns>
					virtual ev_void setCIELab(ev_real64 L, ev_real64 a, ev_real64 b);
					
					/// <summary>
					/// 获取COLORREF值
					/// 格式为0xbbggrr
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_uint32 getCOLORREF() const;
					
					/// <summary>
					/// 获取RGB值
					/// 格式为 0xffrrggbb
					/// </summary>
					/// <param name=""></param>
					/// <returns>RGB值</returns>
					virtual ev_uint32 getRgbValue() const;

					/// <summary>
					/// 获取Red值
					/// </summary>
					/// <param name=""></param>
					/// <returns>Red值</returns>
					virtual ev_uint8 getRed() const;

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
					/// 转换成字符串
					/// 如#FFFFFF，白色
					/// </summary>
					/// <param name=""></param>
					/// <returns>颜色字符串</returns>
					virtual EVString toRGBString() const;

					/// <summary>
					/// 判断是否无色
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否无色</returns>
					virtual ev_bool isNULL() const;
				
					/// <summary>
					/// 设置是否无色
					/// </summary>
					/// <param name="value">是否无色</param>
					/// <returns></returns>
					virtual ev_void setNULL( ev_bool value );
					
					/// <summary>
					/// 获取透明值
					/// </summary>
					/// <param name=""></param>
					/// <returns>透明值</returns>
					virtual ev_uint8 getTransparent() const;
					
					/// <summary>
					/// 设置透明度
					/// </summary>
					/// <param name="value">透明度</param>
					/// <returns></returns>
					virtual ev_void setTransparent(ev_uint8 value);

					/// <summary>
					/// 克隆
					/// </summary>
					/// <returns>克隆对象，需要外部释放。</returns>
					virtual _extfree EarthView::World::Spatial::Display::IColor * clone() const;

					/// <summary>
					/// 转换成二进制
					/// </summary>
					/// <param name="stream">流对象</param>
					/// <returns>xml</returns>
					virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;

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
					CColor( EarthView::World::Core::CNameValuePairList* pList );
				protected:
					CColor();
					/// <summary>
					/// 从流中读取字符串，并将流位置向后提升
					/// </summary>
					/// <param name="stream">流</param>
					/// <returns>字符串</returns>
					static EVString readString(EarthView::World::Core::CDataStream& stream);

					/// <summary>
					/// 向流中写入字符串，并将流位置向后提升
					/// </summary>
					/// <param name="stream">流</param>
					/// <param name="str">字符串</param>
					/// <returns></returns>
					static void writeString(EarthView::World::Core::CDataStream& stream,const EVString& str);
				ev_internal:
					/// <summary>
					/// 从数据流恢复Color属性
					/// </summary>
					/// <param name="stream">流对象</param>
					/// <returns></returns>
					ev_void fromStream( EarthView::World::Core::CDataStream& stream );
				protected:
					/// <summary>
					/// CIELab颜色空间的L值
					/// </summary>
					ev_real64 m_dfCIELab_L;
					/// <summary>
					/// CIELab颜色空间的a值
					/// </summary>
					ev_real64 m_dfCIELab_a;
					/// <summary>
					/// CIELab颜色空间的b值
					/// </summary>
					ev_real64 m_dfCIELab_b;
					/// <summary>
					/// 透明度[0-255]
					/// </summary>
					ev_uint8 m_nTransparent;
					/// <summary>
					/// 是否无色
					/// </summary>
					ev_bool m_bNULL;
				private:
						C_DISABLE_COPY( CColor );
				};
			}
		}

	}
}
#endif
