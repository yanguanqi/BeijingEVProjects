#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_RANDOMCOLORRAMP_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_RANDOMCOLORRAMP_H

#include "color/colorramp.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
			/// <summary>
			/// 随机色带类
			/// 提供方法如下：
			/// 获取与设置Hue值最小值、最大值，获取与设置Saturation值最小值、最大值，获取与设置Value值最小值、最大值
			/// 获取色带类型、获取与设置是否使用种子、获取与设置种子、创建色带、深度拷贝
			///	转换成二进制、将属性信息转为XML、从XMLElement中恢复信息、从数据流恢复ColorRamp属性
			///	判断相同类型的对象属性是否一致、获取指定范围内的一个随机值
			/// </summary>
			class EV_COLOR_DLL CRandomColorRamp :
				public EarthView::World::Spatial::Display::CColorRamp
			{
			public:
				/// <summary>
				/// 默认函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CRandomColorRamp();

				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CRandomColorRamp();

				/// <summary>
				/// 获取色带类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>色带类型</returns>
				EarthView::World::Spatial::Display::EVColorRampType getColorRampType() const;

				/// <summary>
				/// 获取Hue值最小值
				/// </summary>
				/// <param name=""></param>
				/// <returns>Hue值最小值</returns>
				ev_int32 getMinHue() const;

				/// <summary>
				/// 获取Hue值最大值
				/// </summary>
				/// <param name=""></param>
				/// <returns>Hue值最大值</returns>
				ev_int32 getMaxHue() const;

				/// <summary>
				/// 获取Saturation值最小值
				/// </summary>
				/// <param name=""></param>
				/// <returns>Saturation值最小值</returns>
				ev_int32 getMinSaturation() const;

				/// <summary>
				/// 获取Saturation值最大值
				/// </summary>
				/// <param name=""></param>
				/// <returns>Saturation值最大值</returns>
				ev_int32 getMaxSaturation() const;

				/// <summary>
				/// 获取Value值最小值
				/// </summary>
				/// <param name=""></param>
				/// <returns>Value值最小值</returns>
				ev_int32 getMinValue() const;

				/// <summary>
				/// 获取Value值最大值
				/// </summary>
				/// <param name=""></param>
				/// <returns>Value值最大值</returns>
				ev_int32 getMaxValue() const;

				/// <summary>
				/// 是否使用种子
				/// 如果不使用种子，则默认使用系统时间
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否使用</returns>
				ev_bool useSeed() const;

				/// <summary>
				/// 获取种子
				/// </summary>
				/// <param name=""></param>
				/// <returns>种子</returns>
				ev_int32 getSeed() const;
				
				/// <summary>
				/// 设置Hue值最小值
				/// </summary>
				/// <param name="value">Hue值</param>
				/// <returns></returns>
				ev_void setMinHue(ev_int32 value);

				/// <summary>
				/// 设置Hue值最大值
				/// </summary>
				/// <param name="value">Hue值</param>
				/// <returns></returns>
				ev_void setMaxHue(ev_int32 value);

				/// <summary>
				/// 设置Saturation值最小值
				/// </summary>
				/// <param name="value">Saturation值</param>
				/// <returns></returns>
				ev_void setMinSaturation(ev_int32 value);

				/// <summary>
				/// 设置Saturation值最大值
				/// </summary>
				/// <param name="value">Saturation值</param>
				/// <returns></returns>
				ev_void setMaxSaturation(ev_int32 value);

				/// <summary>
				/// 设置Value值最小值
				/// </summary>
				/// <param name="value">Value值</param>
				/// <returns></returns>
				ev_void setMinValue(ev_int32 value);

				/// <summary>
				/// 设置Value值最大值
				/// </summary>
				/// <param name="value">Value值</param>
				/// <returns></returns>
				ev_void setMaxValue(ev_int32 value);

				/// <summary>
				/// 设置种子
				/// </summary>
				/// <param name="seed">种子数字</param>
				/// <returns></returns>
				ev_void setSeed(ev_int32 seed);

				/// <summary>
				/// 设置是否使用种子
				/// </summary>
				/// <param name="used">是否使用</param>
				/// <returns></returns>
				ev_void setUseSeed(ev_bool used);

				/// <summary>
				/// 创建色带
				/// </summary>
				/// <param name="count">指定大小</param>
				/// <returns></returns>
				ev_void createRamp(ev_uint32 count);
				
				/// <summary>
				/// 深度拷贝
				/// 内存需要外部释放
				/// </summary>
				/// <param name=""></param>
				/// <returns>颜色对象</returns>
				_extfree EarthView::World::Spatial::Display::CColorRamp* clone() const;

				/// <summary>
				/// 转换成二进制
				/// </summary>
				/// <param name="stream">流对象</param>
				/// <returns>xml</returns>
				ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;

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
				ev_bool equal(const EarthView::World::Spatial::Display::CColorRamp* pColorRamp);
			ev_internal:
				/// <summary>
				/// 从数据流恢复ColorRamp属性
				/// </summary>
				/// <param name="stream">流对象</param>
				/// <returns></returns>
				virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
			ev_private:
				CRandomColorRamp( EarthView::World::Core::CNameValuePairList* pList );

			protected:
				/// <summary>
				/// 最小Hue值
				/// </summary>
				ev_int32 m_nHueMin;
				/// <summary>
				/// 最大Hue值
				/// </summary>
				ev_int32 m_nHueMax;
				/// <summary>
				/// 最小Sat值
				/// </summary>
				ev_int32 m_nSaturationMin;
				/// <summary>
				/// 最大Sat值
				/// </summary>
				ev_int32 m_nSaturationMax;
				/// <summary>
				/// 最小Value值
				/// </summary>
				ev_int32 m_nValueMin;
				/// <summary>
				/// 最大Value值
				/// </summary>
				ev_int32 m_nValueMax;
				/// <summary>
				/// 种子
				/// </summary>
				ev_int32 m_nSeed;
				/// <summary>
				/// 是否使用种子
				/// </summary>
				ev_bool m_bUseSeed;
			private:
				/// <summary>
				/// 获取指定范围内的一个随机值
				/// </summary>
				/// <param name="min">最小值</param>
				/// <param name="max">最小值</param>
				/// <returns>随机值</returns>
				long getRandomValue(long min,long max);
				C_DISABLE_COPY( CRandomColorRamp );
			};
		}
		}
	}
}
#endif
