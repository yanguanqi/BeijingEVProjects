#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_STATISTICS3DSYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_STATISTICS3DSYMBOL_H

#include "symbol/symbol3d.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				/// <summary>
				/// 存放symbol、字段名、字段值、字段比例的结构体
				/// </summary>
				class EV_SYMBOL_DLL TagStatistics3DSymbol : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 封装构造函数
					/// </summary>
					/// <param name="pList">键值对</param>
					/// <returns></returns>
					TagStatistics3DSymbol(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					TagStatistics3DSymbol();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~TagStatistics3DSymbol();

					 EarthView::World::Spatial::Display::ISymbol* pSymbol;
					 EVString mFieldName;
					 ev_real64 mdValue;
					 ev_real64 mdValueRatio;
				};

				/// <summary>
				/// 三维统计图符号基类
				/// </summary>
				class EV_SYMBOL_DLL CStatistics3DSymbol : public CSymbol3D
				{
				public:
					/// <summary>
					/// 三维统计图延伸方向
					/// </summary>
					enum EVSymbol3DExtensionFace
					{
						SEF_Upwards,
						SEF_Downwards
					};

					/// <summary>
					/// 三维统计图注记显示
					/// </summary>
					enum EVStatisticsLabelFormat
					{
						STTLF_Caption,
						STTLF_Value,
						STTLF_Percent,
						STTLF_CaptionAndValue,
						STTLF_CaptionAndPercent,
						STTLF_ValueAndPercent,
						STTLF_All
					};

ev_private:
					/// <summary>
					/// 封装构造函数
					/// </summary>
					/// <param name="pList">键值对</param>
					/// <returns></returns>
					CStatistics3DSymbol(_in EarthView::World::Core::CNameValuePairList* pList);
				public:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CStatistics3DSymbol();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CStatistics3DSymbol();

					/// <summary>
					/// 获取符号的高度
					/// </summary>
					/// <param name=""></param>
					/// <returns>符号高度</returns>
					ev_real64 getGeometryHeight() const;

					/// <summary>
					/// 设置符号的高度
					/// </summary>
					/// <param name="height">高度值</param>
					/// <returns></returns>
					ev_void setGeometryHeight(const ev_real64 height);

					/// <summary>
					/// 获取符号的半径
					/// </summary>
					/// <param name=""></param>
					/// <returns>符号半径</returns>
					ev_real64 getGeometryRadius() const;

					/// <summary>
					/// 设置符号的半径
					/// </summary>
					/// <param name="radius">半径值</param>
					/// <returns></returns>
					ev_void setGeometryRadius(const ev_real64 radius);

					/// <summary>
					/// 获取字段值
					/// </summary>
					/// <param name="index">索引值</param>
					/// <returns>字段值</returns>
					ev_real64 getValue(ev_uint32 index) const;

					/// <summary>
					/// 设置字段值
					/// </summary>
					/// <param name="index">索引值</param>
					/// <param name="value">字段值</param>
					/// <returns></returns>
					ev_void setValue(ev_uint32 index, const ev_real64 value);

					/// <summary>
					/// 获取字段值的比例
					/// </summary>
					/// <param name="index">索引值</param>
					/// <returns>字段值比例</returns>
					ev_real64 getValueRatio(ev_uint32 index) const;

					/// <summary>
					/// 设置字段值比例
					/// </summary>
					/// <param name="index">索引值</param>
					/// <param name="value">字段比例</param>
					/// <returns></returns>
					ev_void setValueRatio(ev_uint32 index, const ev_real64 value);

					/// <summary>
					/// 获取字段名称
					/// </summary>
					/// <param name="index">索引值</param>
					/// <returns>字段名</returns>
					EVString getFieldName(ev_uint32 index) const;

					/// <summary>
					/// 设置字段名称
					/// </summary>
					/// <param name="index">索引值</param>
					/// <param name="name">字段名</param>
					/// <returns></returns>
					ev_void setFieldName(ev_uint32 index, const EVString& name);

					/// <summary>
					/// 获取符号的个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>符号个数</returns>
					ev_uint32 getSymbolCount() const;

					/// <summary>
					/// 获取符号
					/// </summary>
					/// <param name="index">索引值</param>
					/// <returns>符号</returns>
					EarthView::World::Spatial::Display::ISymbol* getSymbol(ev_uint32 index) const;

					/// <summary>
					/// 设置符号
					/// </summary>
					/// <param name="index">索引值</param>
					/// <param name="symbol">符号</param>
					/// <returns></returns>
					ev_void setSymbol(ev_uint32 index, const EarthView::World::Spatial::Display::ISymbol* symbol) const;

					/// <summary>
					/// 添加符号
					/// </summary>
					/// <param name="symbol">符号</param>
					/// <returns></returns>
					ev_void addSymbol(const EarthView::World::Spatial::Display::ISymbol* symbol);

					/// <summary>
					/// 添加符号
					/// </summary>
					/// <param name="pSymbol">符号</param>
					/// <param name="value">字段值</param>
					/// <returns></returns>
					ev_void addSymbol(const EarthView::World::Spatial::Display::ISymbol* pSymbol, const ev_real64 value);

					/// <summary>
					/// 添加符号
					/// </summary>
					/// <param name="pSymbol">符号</param>
					/// <param name="name">字段名</param>
					/// <returns></returns>
					ev_void addSymbol(const EarthView::World::Spatial::Display::ISymbol* pSymbol, const EVString& name);

					/// <summary>
					/// 添加符号
					/// </summary>
					/// <param name="pSymbol">符号</param>
					/// <param name="name">字段名</param>
					/// <param name="value">字段值</param>
					/// <returns></returns>
					ev_void addSymbol(const EarthView::World::Spatial::Display::ISymbol* pSymbol, const EVString& name, const ev_real64 value);
					
					/// <summary>
					/// 移动符号
					/// </summary>
					/// <param name="fromIndex">原始索引</param>
					/// <param name="toIndex">目标索引</param>
					/// <returns>返回true，移动成功，否则移动失败</returns>
					ev_bool moveSymbol( ev_uint32 fromIndex, ev_uint32 toIndex );

					/// <summary>
					/// 删除符号
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns></returns>
					ev_void deleteSymbol (ev_uint32 index);

					/// <summary>
					/// 清空符号容器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clearSymbols();

					/// <summary>
					/// 设置符号大小比例
					/// </summary>
					/// <param name="ratio">比例</param>
					/// <returns></returns>
					ev_void setSizeRatio(const ev_real64 ratio);

					/// <summary>
					/// 获取符号大小比例
					/// </summary>
					/// <param name=""></param>
					/// <returns>符号大小比例</returns>
					ev_real64 getSizeRatio() const;

					/// <summary>
					/// 获取符号间隔
					/// </summary>
					/// <param name=""></param>
					/// <returns>符号间隔</returns>
					ev_real64 getInterval() const;

					/// <summary>
					/// 设置符号间隔
					/// </summary>
					/// <param name="interval">间隔值</param>
					/// <returns></returns>
					ev_void setInterval(const ev_real64 interval);

					/// <summary>
					/// 设置符号上注记的最大可视距离
					/// </summary>
					/// <param name="distancevalue">距离</param>
					/// <returns></returns>
					ev_void setLabelMaxDistance(const ev_real64 distancevalue);

					/// <summary>
					/// 获得符号上注记的最大可视距离
					/// </summary>
					/// <param name=""></param>
					/// <returns>最大可视距离</returns>
					ev_real64 getLabelMaxDistance() const;

					/// <summary>
					/// 设置符号上的注记显示方式
					/// </summary>
					/// <param name="format">EVStatisticsLabelFormat枚举值</param>
					/// <returns></returns>
					ev_void setLabelFormat(EarthView::World::Spatial::Display::CStatistics3DSymbol::EVStatisticsLabelFormat format);

					/// <summary>
					/// 获取符号上的注记显示方式
					/// </summary>
					/// <param name=""></param>
					/// <returns>EVStatisticsLabelFormat枚举值</returns>
					EarthView::World::Spatial::Display::CStatistics3DSymbol::EVStatisticsLabelFormat getLabelFormat() const;

					/// <summary>
					/// 设置符号延伸方式
					/// </summary>
					/// <param name="extension">EVSymbol3DExtensionFace枚举值</param>
					/// <returns></returns>
					ev_void setSymbolExtensionFace(EarthView::World::Spatial::Display::CStatistics3DSymbol::EVSymbol3DExtensionFace extension);
					
					/// <summary>
					/// 获取符号延伸方式
					/// </summary>
					/// <param name=""></param>
					/// <returns>EVSymbol3DExtensionFace枚举值</returns>
					EarthView::World::Spatial::Display::CStatistics3DSymbol::EVSymbol3DExtensionFace getSymbolExtensionFace() const;
					
					/// <summary>
					/// 设置符号延伸值
					/// </summary>
					/// <param name="value">延伸值</param>
					/// <returns></returns>
					ev_void setSymbolExtensionValue(const ev_real64 value);

					/// <summary>
					/// 获取符号延伸值
					/// </summary>
					/// <param name=""></param>
					/// <returns>延伸值</returns>
					ev_real64 getSymbolExtensionValue() const;

					/// <summary>
					/// 符号相等的比较
					/// </summary>
					/// <param name="pSymbol">符号</param>
					/// <returns>如果返回true，则两个符号相等，否则两者不等</returns>
					ev_bool equal(const EarthView::World::Spatial::Display::ISymbol* pSymbol);

					/// <summary>
					/// 符号克隆
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果新的符号，需要外部释放</returns>
					_extfree EarthView::World::Spatial::Display::ISymbol* clone() const;

					/// <summary>
					/// 从xml中恢复
					/// </summary>
					/// <param name="element">CXmlElement对象</param>
					/// <returns></returns>
					ev_void fromXmlElement (_in EarthView::World::Core::CXmlElement& element);

					/// <summary>
					/// 写到xml中
					/// </summary>
					/// <param name=""></param>
					/// <returns>CXmlElement对象</returns>
					EarthView::World::Core::CXmlElement toXmlElement() const;

					/// <summary>
					/// 写入流中
					/// </summary>
					/// <param name="stream">流对象</param>
					/// <returns></returns>
					ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;
ev_internal:

					/// <summary>
					/// 从流中恢复
					/// </summary>
					/// <param name="stream">流对象</param>
					/// <returns></returns>
					ev_void fromStream( EarthView::World::Core::CDataStream& stream );
				protected:

					/// <summary>
					/// 符号高度
					/// </summary>
					ev_real64 mdGeometryHeight;

					/// <summary>
					/// 符号半径
					/// </summary>
					ev_real64 mdGeometryRadius;

					/// <summary>
					/// 符号大小比例
					/// </summary>
					ev_real64 mdSizeRatio;

					/// <summary>
					/// 符号延伸值
					/// </summary>
					ev_real64 mExtensionValue;

					/// <summary>
					/// 符号间隔值
					/// </summary>
					ev_real64 mdInterval;

					/// <summary>
					/// 符号注记最大可视距离
					/// </summary>
					ev_real64 mLabelMaxDistance;

					/// <summary>
					/// 存放TagStatistics3DSymbol的容器
					/// </summary>
					ev_vector<EarthView::World::Spatial::Display::TagStatistics3DSymbol*> mSymbolVector;

					/// <summary>
					/// 符号注记的格式
					/// </summary>
					EarthView::World::Spatial::Display::CStatistics3DSymbol::EVStatisticsLabelFormat meLabelFormat;

					/// <summary>
					/// 符号延伸方向
					/// </summary>
					EarthView::World::Spatial::Display::CStatistics3DSymbol::EVSymbol3DExtensionFace mExtensionFacing;
					
				};
			}
		}
	}
}

#endif
