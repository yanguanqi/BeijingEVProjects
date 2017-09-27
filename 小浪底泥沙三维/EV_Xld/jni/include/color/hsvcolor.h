#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_HSVCOLOR_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_HSVCOLOR_H

#include "color/color.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
			/// <summary>
			/// HSV颜色类
			/// 提供方法如下：
			/// 获取与设置Hue、Saturation、Value值，设置Color值、设置CIELab值、设置RGB值
			/// 深度拷贝、获取颜色类型、判断相同类型的对象属性是否一致
			/// 转换成二进制、将属性信息转为XML、从XMLElement中恢复信息、从数据流恢复Color属性
			/// 判断HSV 转成 Lab是否成功、判断Lab 转成 HSV是否成功
			/// </summary>
			class EV_COLOR_DLL CHsvColor :
				public EarthView::World::Spatial::Display::CColor
			{
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CHsvColor();
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="hue">H值</param>
				/// <param name="Saturation">S值</param>
				/// <param name="value">V值</param>
				/// <returns></returns>
				CHsvColor(ev_int32 hue,ev_int32 Saturation,ev_int32 value);

				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CHsvColor();

				/// <summary>
				/// 获取Hue值
				/// </summary>
				/// <param name=""></param>
				/// <returns>Hue值</returns>
				ev_int32 getHue() const;

				/// <summary>
				/// 获取Saturation值
				/// </summary>
				/// <param name=""></param>
				/// <returns>Saturation值</returns>
				ev_int32 getSaturation() const;

				/// <summary>
				/// 获取Value值
				/// </summary>
				/// <param name=""></param>
				/// <returns>Value值</returns>
				ev_int32 getValue() const;

				/// <summary>
				/// 设置Hue值
				/// </summary>
				/// <param name="h">Hue值</param>
				/// <returns></returns>
				ev_void setHue(ev_int32 h);

				/// <summary>
				/// 设置Saturation值
				/// </summary>
				/// <param name="s">Saturation值</param>
				/// <returns></returns>
				ev_void setSaturation(ev_int32 s);

				/// <summary>
				/// 设置Value值
				/// </summary>
				/// <param name="v">Value值</param>
				/// <returns></returns>
				ev_void setValue(ev_int32 v);

				/// <summary>
				/// 设置Color值
				/// </summary>
				/// <param name="h">hue值</param>
				/// <param name="s">saturation值</param>
				/// <param name="v">value值</param>
				/// <returns></returns>
				ev_void setColor(ev_int32 h,ev_int32 s,ev_int32 v);

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
				/// 设置RGB值
				/// </summary>
				/// <param name="red">red值</param>
				/// <param name="green">green值</param>
				/// <param name="blue">blue值</param>
				/// <returns></returns>
				virtual ev_void setRGB(ev_int32 red,ev_int32 green,ev_int32 blue);

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
				virtual ev_void fromXmlElement(EarthView::World::Core::CXmlElement& element);

				/// <summary>
				/// 判断相同类型的对象属性是否一致
				/// </summary>
				/// <param name="pColor">Color对象</param>
				/// <returns></returns>
				virtual ev_bool equal(const EarthView::World::Spatial::Display::IColor* pColor);
			ev_private:
				CHsvColor( EarthView::World::Core::CNameValuePairList* pList );

			ev_internal:
				/// <summary>
				/// 从数据流恢复Color属性
				/// </summary>
				/// <param name="stream">流对象</param>
				/// <returns></returns>
				ev_void fromStream( EarthView::World::Core::CDataStream& stream );
			protected:
				/// <summary>
				/// Hue值
				/// 范围[0，360]
				/// </summary>
				ev_real64 m_nHue;
				/// <summary>
				/// Saturation值
				/// 范围[0，100]
				/// </summary>
				ev_real64 m_nSaturation;
				/// <summary>
				/// Value值
				/// 范围[0，100]
				/// </summary>
				ev_real64 m_nValue;
			private:
				/// <summary>
				/// HSV 转成 Lab
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否转换成功</returns>
				ev_bool hsv2Lab();
				/// <summary>
				/// Lab 转成 HSV
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否转换成功</returns>
				ev_bool lab2Hsv();

				C_DISABLE_COPY( CHsvColor );
			};
		}
		}
	}
}

#endif

