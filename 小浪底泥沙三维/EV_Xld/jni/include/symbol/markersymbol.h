#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_MARKERSYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_MARKERSYMBOL_H

#include "symbol/symbol.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
			/// <summary>
			/// 点填充类，是所有点填充类的基类
			/// 提供方法如下：
			/// 获取与设置 旋转角度、风格大小、X轴与Y轴偏移量
			/// 获取流、获取SLD、判断两个Symbol是否属性相同、将Symbol属性写入XML元素
			/// 从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
			/// </summary>
			class EV_SYMBOL_DLL CMarkerSymbol :
				public EarthView::World::Spatial::Display::CSymbol
			{
				friend class CDrawSimpleMarker;
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CMarkerSymbol();

				/// <summary>
				/// 获取旋转角度
				/// 单位为度
				/// </summary>
				/// <param name=""></param>
				/// <returns>角度</returns>
				virtual ev_real64 getAngle() const;

				/// <summary>
				/// 设置旋转角度
				/// </summary>
				/// <param name="angle">角度</param>
				/// <returns></returns>
				virtual ev_void setAngle(ev_real64 angle);

				/// <summary>
				/// 获取风格大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>大小</returns>
				virtual ev_real64 getSize() const;

				/// <summary>
				/// 设置风格大小
				/// </summary>
				/// <param name="size">大小</param>
				/// <returns></returns>
				virtual ev_void setSize(ev_real64 size);

				/// <summary>
				/// 获取X轴偏移量
				/// </summary>
				/// <param name=""></param>
				/// <returns>偏移量</returns>
				virtual ev_real64 getOffsetX() const;

				/// <summary>
				/// 设置X轴偏移量
				/// </summary>
				/// <param name="value">偏移量</param>
				/// <returns></returns>
				virtual ev_void setOffsetX(ev_real64 value);

				/// <summary>
				/// 获取Y轴偏移量
				/// </summary>
				/// <param name=""></param>
				/// <returns>偏移量</returns>
				virtual ev_real64 getOffsetY() const;

				/// <summary>
				/// 设置Y轴偏移量
				/// </summary>
				/// <param name="value">偏移量</param>
				/// <returns></returns>
				virtual ev_void setOffsetY(ev_real64 value);

				/// <summary>
				/// 获取流
				/// </summary>
				/// <param name="stream">流对象</param>
				/// <returns></returns>
				virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;

				/// <summary>
				/// 从XML元素中恢复Symbol属性
				/// </summary>
				/// <param name="xml">XML字符串</param>
				/// <returns></returns>
				virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

				/// <summary>
				/// 将Symbol属性写入XML元素
				/// </summary>
				/// <param name="xml">XML字符串</param>
				/// <returns></returns>
				virtual EarthView::World::Core::CXmlElement toXmlElement() const;

				/// <summary>
				/// 获取SLD
				/// </summary>
				/// <param name=""></param>
				/// <returns>SLD字符串</returns>
				virtual EVString toSLD() const;

				/// <summary>
				/// 判断两个Symbol是否属性相同
				/// </summary>
				/// <param name="pSymbol">Symbol对象</param>
				/// <returns></returns>
				virtual ev_bool equal(const EarthView::World::Spatial::Display::ISymbol* pSymbol);
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
				CMarkerSymbol( EarthView::World::Core::CNameValuePairList* pList );
			protected:
				CMarkerSymbol();
			protected:
				/// <summary>
				/// 旋转角度大小
				/// 默认为0
				/// </summary>
				ev_real64 m_dfAngle;
				/// <summary>
				/// 风格大小
				/// 默认为8个单位
				/// </summary>
				ev_real64 m_dfSize;
				/// <summary>
				/// X轴偏移量
				/// 默认为0，正则向右偏移，负则向左偏移
				/// </summary>
				ev_real64 m_dfOffsetX;
				/// <summary>
				/// Y轴偏移量。默认为0
				/// 正则向上偏移，负则向下偏移
				/// </summary>
				ev_real64 m_dfOffsetY;
			private:
				C_DISABLE_COPY( CMarkerSymbol );
			};
		}
		}
	}
}
#endif

