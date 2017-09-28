#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_ARTOGRAPHICLINESYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_ARTOGRAPHICLINESYMBOL_H

#include "symbol/linesymbol.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{

				/// <summary>
				/// 间隔处理方式
				/// </summary>
				enum  EVIntervalSpaceType
				{
					IST_IntervalSpaceType_Radio             = 0,//按比例处理间隔 [0，1]
					IST_IntervalSpaceTypeDash_Space         = 1 //按实体-空间模式处理间隔
				};

				enum  EVMarkerPositionType
				{
					MPT_MarkerPositionType_FristVertexOnly       =0,//起点
					MPT_MarkerPositionType_LastVertexOnly       =1,//终点
					MPT_MarkerPositionType_CentralPointOnly       =2,//中点
					MPT_MarkerPositionType_EveryVertex            =3//每个顶点
				};
				/// <summary>
				/// 参数线风格类
				/// 提供方法如下：
				/// 获取与设置 装饰风格对象、是否使用装饰风格、水平偏移、装饰风格对象X轴与Y轴偏移量
				/// 获取与设置 装饰风格对象旋转角度、间隔空间类型、每块空间的大小、间隔比例值
				/// 获取比例值个数、移除指定间隔比例、擦除所有间隔比例、获取是否包含指定间隔比例
				/// 获取DashSpace个数、获取DashSpace值、插入DashSpace值、追加DashSpace值
				/// 设置修改DashSpace值、擦除所有DashSpace值、设置线宽度
				/// 获取符号类型、获取流、获取SLD
				///	深度copy风格对象、判断两个Symbol是否属性相同、将Symbol属性写入XML元素
				///	从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
				/// </summary>
				class EV_SYMBOL_DLL	CCartographicLineSymbol :
					public EarthView::World::Spatial::Display::CLineSymbol
				{
					friend class CDrawCartographicLine;
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCartographicLineSymbol();

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CCartographicLineSymbol();

					/// <summary>
					/// 获取装饰风格对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>装饰风格对象</returns>
					const  EarthView::World::Spatial::Display::ISymbol* getDecorationSymbolRef() const;
					EarthView::World::Spatial::Display::ISymbol* getDecorationSymbolRef();

					/// <summary>
					/// 设置装饰风格对象
					/// </summary>
					/// <param name="symbol">装饰风格对象</param>
					/// <returns></returns>
					ev_void setDecorationSymbol(const EarthView::World::Spatial::Display::ISymbol* symbol);

					/// <summary>
					/// 设置是否使用装饰风格
					/// </summary>
					/// <param name="bUse">是否使用</param>
					/// <returns></returns>
					ev_void setUseDecoration( ev_bool bUse );

					/// <summary>
					/// 获取是否使用装饰风格
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回值为true，则使用装饰；否则不使用</returns>
					ev_bool isUseDecoration() const;

					/// <summary>
					/// 设置水平偏移
					/// </summary>
					/// <param name="offsetX">偏移量</param>
					/// <returns></returns>
					ev_void setHorizontalOffset( ev_real64 offsetX );
					/// <summary>
					/// 获取水平偏移
					/// </summary>
					/// <param name=""></param>
					/// <returns>偏移量</returns>
					ev_real64 getHorizontalOffset();

					/// <summary>
					/// 获取装饰风格对象X轴偏移量
					/// </summary>
					/// <param name="offsetX">偏移量</param>
					/// <returns></returns>
					ev_real64 getDecorationOffsetX() const;

					/// <summary>
					/// 设置装饰风格对象X轴偏移量
					/// </summary>
					/// <param name="value">偏移量</param>
					/// <returns></returns>
					ev_void setDecorationOffsetX(ev_real64 value);

					/// <summary>
					/// 获取装饰风格对象Y轴偏移量
					/// </summary>
					/// <param name=""></param>
					/// <returns>偏移量</returns>
					ev_real64 getDecorationOffsetY() const;

					/// <summary>
					/// 设置装饰风格对象Y轴偏移量
					/// </summary>
					/// <param name="value">偏移量</param>
					/// <returns></returns>
					ev_void setDecorationOffsetY(ev_real64 value);

					/// <summary>
					/// 设置装饰风格对象旋转角度
					/// </summary>
					/// <param name="value">旋转角度</param>
					/// <returns></returns>
					ev_void setDecorationAngle(ev_real64 value);

					/// <summary>
					/// 获取装饰风格对象旋转角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>旋转角度</returns>
					ev_real64 getDecorationAngle();

					/// <summary>
					/// 获取间隔空间类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>间隔空间类型</returns>
					EarthView::World::Spatial::Display::EVIntervalSpaceType getIntervalSpaceType() const;

					/// <summary>
					/// 设置间隔空间类型
					/// </summary>
					/// <param name="nType">间隔空间类型</param>
					/// <returns></returns>
					ev_void setIntervalSpaceType(EarthView::World::Spatial::Display::EVIntervalSpaceType nType);

					/// <summary>
					/// 获取每块空间的大小
					/// 只有间隔类型为黑白间隔类型时，才有效
					/// </summary>
					/// <param name=""></param>
					/// <returns>空间的大小</returns>
					ev_real64 getLengthPreSpace() const;

					/// <summary>
					/// 设置每块空间的大小
					/// 只有间隔类型为黑白间隔类型时，才有效
					/// </summary>
					/// <param name="value">空间的大小</param>
					/// <returns></returns>
					ev_void setLengthPreSpace(ev_real64 value);

					/// <summary>
					/// 获取间隔比例值
					/// 范围[0，1]
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>空间的大小</returns>
					ev_real64 getRadioValue(ev_int32 index) const;

					/// <summary>
					/// 获取比例值个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>比例值个数</returns>
					ev_int32 getRadioValueCount() const;

					/// <summary>
					/// 设置间隔比例值
					/// 范围[0，1]。如果小于0，则等于0，如果大于1，则等于1
					/// </summary>
					/// <param name="value">间隔比例值</param>
					/// <returns></returns>
					ev_void setRadioValue(ev_real64 value);

					/// <summary>
					/// 移除指定间隔比例
					/// </summary>
					/// <param name="value">间隔比例值</param>
					/// <returns></returns>
					ev_void removeRadioValue( ev_real64 value );

					/// <summary>
					/// 擦除所有间隔比例
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clearRatioValue();

					/// <summary>
					/// 获取是否包含指定间隔比例
					/// </summary>
					/// <param name="value">间隔比例</param>
					/// <returns>返回true，则包含；否则不包含</returns>
					ev_bool containsRatioValue( ev_real64 value );

					/// <summary>
					/// 获取Dash，Space个数
					/// Dash和Space会成对出现
					/// </summary>
					/// <param name=""></param>
					/// <returns>Dash，Space个数</returns>
					ev_int32 getDashSpaceCount() const;

					/// <summary>
					/// 获取DashSpace值
					/// </summary>
					/// <param name=""></param>
					/// <returns>DashSpace值</returns>
					ev_int32 getDashSpaceValue(ev_int32 index) const;

					/// <summary>
					/// 插入Dash、Space值
					/// </summary>
					/// <param name="value">Dash、Space值</param>
					/// <param name="index">插入位置</param>
					/// <returns></returns>
					ev_int32 insertDashSpaceValue(ev_int32 value, ev_int32 index);

					/// <summary>
					/// 追加Dash、Space值
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 appendDashSpaceValue(ev_int32 value);

					/// <summary>
					/// 设置/修改DashSpace值
					/// </summary>
					/// <param name="value">DashSpace值</param>
					/// <param name="index">索引</param>
					/// <returns></returns>
					ev_void setDashSpaceValue(ev_int32 value, ev_int32 index);

					/// <summary>
					/// 擦除所有DashSpace值
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clearDashSpace();

					/// <summary>
					/// 设置线宽度
					/// </summary>
					/// <param name="dWidth">线宽度</param>
					/// <returns></returns>
					ev_void setWidth(ev_real64 value);

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
					/// 获取标记风格对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>标记风格对象</returns>
					const  EarthView::World::Spatial::Display::ISymbol* getMarkerSymbolRef() const;
					EarthView::World::Spatial::Display::ISymbol* getMarkerSymbolRef();

					/// <summary>
					/// 设置标记风格对象
					/// </summary>
					/// <param name="symbol">标记风格对象</param>
					/// <returns></returns>
					ev_void setMarkerSymbol(const EarthView::World::Spatial::Display::ISymbol* symbol);

					/// <summary>
					/// 设置是否使用标记风格
					/// </summary>
					/// <param name="bUse">是否使用</param>
					/// <returns></returns>
					ev_void setUseMarker( ev_bool bUse );

					/// <summary>
					/// 获取是否使用标记风格
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回值为true，则使用标记；否则不使用</returns>
					ev_bool isUseMarker() const;
					/// <summary>
					/// 获取标记风格对象X轴偏移量
					/// </summary>
					/// <param name="offsetX">偏移量</param>
					/// <returns></returns>
					ev_real64 getMarkerOffsetX() const;

					/// <summary>
					/// 设置标记风格对象X轴偏移量
					/// </summary>
					/// <param name="value">偏移量</param>
					/// <returns></returns>
					ev_void setMarkerOffsetX(ev_real64 value);

					/// <summary>
					/// 获取标记风格对象Y轴偏移量
					/// </summary>
					/// <param name=""></param>
					/// <returns>偏移量</returns>
					ev_real64 getMarkerOffsetY() const;

					/// <summary>
					/// 设置标记风格对象Y轴偏移量
					/// </summary>
					/// <param name="value">偏移量</param>
					/// <returns></returns>
					ev_void setMarkerOffsetY(ev_real64 value);

					/// <summary>
					/// 设置标记风格对象旋转角度
					/// </summary>
					/// <param name="value">旋转角度</param>
					/// <returns></returns>
					ev_void setMarkerAngle(ev_real64 value);

					/// <summary>
					/// 获取标记风格对象旋转角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>旋转角度</returns>
					ev_real64 getMarkerAngle() const;
					/// <summary>
					/// 设置标记类型
					/// </summary>
					/// <param name="value">标记类型</param>
					/// <returns></returns>
					ev_void setMarkerPositonType(EarthView::World::Spatial::Display::EVMarkerPositionType nType);
					/// <summary>
					/// 获取标记类型
					/// </summary>
					/// <param name="value">标记类型</param>
					/// <returns></returns>
					EarthView::World::Spatial::Display::EVMarkerPositionType getMarkerPositonType()const;
					/// <summary>
					/// 设置标记物是否与线一致
					/// </summary>
					/// <returns></returns>
					ev_void setFollowLine(ev_bool bfollow);
					/// <summary>
					/// 判断标记物是否与线一致
					/// </summary>
					/// <returns></returns>
					ev_bool isFollowLine()const;
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
					CCartographicLineSymbol( EarthView::World::Core::CNameValuePairList* pList );
				protected:
					/// <summary>
					/// 装饰物
					/// </summary>
					EarthView::World::Spatial::Display::ISymbol* m_pDecorationSymbol;
					/// <summary>
					/// 是否使用装饰
					/// </summary>
					ev_bool m_bUseDecoration;
					/// <summary>
					/// 装饰物X轴偏移量
					/// </summary>
					ev_real64 m_dDecorationOffsetX;
					/// <summary>
					/// 装饰物Y轴偏移量
					/// </summary>
					ev_real64 m_dDecorationOffsetY;
					/// <summary>
					/// 装饰物旋转角度
					/// </summary>
					ev_real64 m_dfDecorationAngle;
					/// <summary>
					/// 间隔类型
					/// </summary>
					EarthView::World::Spatial::Display::EVIntervalSpaceType m_eIntervalType;
					/// <summary>
					/// 每个间隔长度
					/// </summary>
					ev_real64 m_dfLengthPreSpace;
					/// <summary>
					/// 间隔比例
					/// </summary>
					ev_set<ev_real64>* m_sRadioValue;
					/// <summary>
					/// DashSpace值
					/// </summary>
					ev_vector<long>* m_vDashSpaceValue;
					/// <summary>
					/// 水平平移量
					/// </summary>
					ev_real64 m_dfHorizontalOffset;

					/// <summary>
					/// 标记物
					/// </summary>
					EarthView::World::Spatial::Display::ISymbol* m_pMarkerSymbol;
					/// <summary>
					/// 是否使用标记
					/// </summary>
					ev_bool m_bUseMarker;
					/// <summary>
					/// 标记物X轴偏移量
					/// </summary>
					ev_real64 m_dMarkerOffsetX;
					/// <summary>
					/// 标记物Y轴偏移量
					/// </summary>
					ev_real64 m_dMarkerOffsetY;
					/// <summary>
					/// 标记物旋转角度
					/// </summary>
					ev_real64 m_dfMarkerAngle;

					/// <summary>
					/// 标记类型
					/// </summary>
					EarthView::World::Spatial::Display::EVMarkerPositionType m_eMarkerType;
					/// <summary>
					/// 标记物是否与线平行
					/// </summary>
					ev_bool m_bFollowLine;
				private:
					C_DISABLE_COPY( CCartographicLineSymbol );
				};
			}
		}
	}
}

#endif
