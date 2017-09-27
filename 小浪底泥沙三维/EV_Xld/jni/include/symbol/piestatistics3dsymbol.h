#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_PIESTATISTICS3DSYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_PIESTATISTICS3DSYMBOL_H

#include "symbol/statistics3dsymbol.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				/// <summary>
				/// 三维饼状统计图符号
				/// </summary>
				class EV_SYMBOL_DLL CPieStatistics3DSymbol : public EarthView::World::Spatial::Display::CStatistics3DSymbol
				{
ev_private:
					/// <summary>
					/// 封装构造函数
					/// </summary>
					/// <param name="pList">键值对</param>
					/// <returns></returns>
					CPieStatistics3DSymbol(_in EarthView::World::Core::CNameValuePairList* pList);
				public:

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CPieStatistics3DSymbol();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CPieStatistics3DSymbol();

					/// <summary>
					/// 获取类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>类型</returns>
					ev_int32 getSymbolType() const;

					/// <summary>
					/// 符号克隆
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果新的符号，需要外部释放</returns>
					_extfree EarthView::World::Spatial::Display::ISymbol* clone() const;

					/// <summary>
					/// 设置起始角度
					/// </summary>
					/// <param name="degree">角度值</param>
					/// <returns></returns>
					ev_void setStartedDegree(const ev_real64 degree);

					/// <summary>
					/// 获取起始角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>角度值</returns>
					ev_real64 getStartedDegree() const;

					/// <summary>
					/// 符号相等的比较
					/// </summary>
					/// <param name="pSymbol">符号</param>
					/// <returns>如果返回true，则两个符号相等，否则两者不等</returns>
					ev_bool equal(const EarthView::World::Spatial::Display::ISymbol* pSymbol);

					/// <summary>
					/// 从xml中恢复
					/// </summary>
					/// <param name="element">CXmlElement对象</param>
					/// <returns></returns>
					ev_void fromXmlElement(_in EarthView::World::Core::CXmlElement& element);

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
					/// 起始角度值
					/// </summary>
					ev_real64 mdStartedDegree;
				};
			}
		}
	}
}
#endif