#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_GRADIENTCOLORRAMP_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_GRADIENTCOLORRAMP_H

#include "color/colorramp.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{

			/// <summary>
			/// 渐进色色带类型
			/// </summary>
			enum EVGradientColorRampType
			{
				GCRT_GRADIENTCOLORRAMPRGB               = 0,//使用RGB渐进
				GCRT_GRADIENTCOLORRAMPHSV               = 1,//使用HSV渐进
				GCRT_GRADIENTCOLORRAMPLAB            = 2	//使用CIELab渐进
			};
			/// <summary>
			/// 渐进色色带类
			/// 提供方法如下：
			/// 获取色带类型、获取与设置首颜色、获取与设置尾颜色、获取与设置渐进色类型
			/// 获取多站点模式下的站点个数、设置多站点模式、是否使用多站点的模式
			/// 添加站点、是否存在指定站点、删除指定索引站点、删除所有站点、获取站点、获取站点偏移量
			/// 创建色带、深度拷贝、判断相同类型的对象属性是否一致
			/// 转换成二进制、将属性信息转为XML、从XMLElement中恢复信息、从数据流恢复ColorRamp属性
			/// </summary>
			class EV_COLOR_DLL CGradientColorRamp :
				public EarthView::World::Spatial::Display::CColorRamp
			{
				friend class CDrawGradientFill;
				friend class CDrawPieStatistics;
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CGradientColorRamp();
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="type">渐变色带类型</param>
				/// <returns></returns>
				CGradientColorRamp(EarthView::World::Spatial::Display::EVGradientColorRampType type);

				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CGradientColorRamp();

				/// <summary>
				/// 获取色带类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>色带类型</returns>
				virtual EarthView::World::Spatial::Display::EVColorRampType getColorRampType() const;
				
				/// <summary>
				/// 获取首颜色
				/// </summary>
				/// <param name=""></param>
				/// <returns>颜色对象</returns>
				const EarthView::World::Spatial::Display::IColor* getStartColor() const;

				/// <summary>
				/// 获取尾颜色
				/// </summary>
				/// <param name=""></param>
				/// <returns>颜色对象</returns>
				const EarthView::World::Spatial::Display::IColor* getEndColor() const;

				/// <summary>
				/// 设置首颜色
				/// 颜色需要匹配EarthView::World::Spatial::Display::EVGradientColorRampType，如果不同，默认转换
				/// </summary>
				/// <param name="color">颜色</param>
				/// <returns>颜色对象</returns>
				ev_void setStartColor(const EarthView::World::Spatial::Display::IColor* color);///

				/// <summary>
				/// 设置尾颜色
				/// 颜色需要匹配EarthView::World::Spatial::Display::EVGradientColorRampType，如果不同，默认转换
				/// </summary>
				/// <param name="color">颜色</param>
				/// <returns>颜色对象</returns>
				ev_void setEndColor(const EarthView::World::Spatial::Display::IColor* color);

				/// <summary>
				/// 获取渐进色类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>渐进色类型</returns>
				EarthView::World::Spatial::Display::EVGradientColorRampType getType() const;

				/// <summary>
				/// 设置渐进色类型
				/// </summary>
				/// <param name="type">渐进色类型</param>
				/// <returns></returns>
				ev_void setType(EarthView::World::Spatial::Display::EVGradientColorRampType type);
				/// <summary>
				/// 是否使用多站点的模式
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否使用</returns>
				ev_bool useMultiStop() const;

				/// <summary>
				/// 获取多站点模式下的站点个数
				/// </summary>
				/// <param name=""></param>
				/// <returns>站点个数</returns>
				ev_uint32 getStopCount() const;

				/// <summary>
				/// 设置多站点模式
				/// </summary>
				/// <param name="used">是否启用</param>
				/// <returns></returns>
				ev_void setUseMultiStop(ev_bool used);

				/// <summary>
				/// 添加 站点
				/// 如果站点存在，覆盖该站点颜色；位置范围为[0,100]
				/// </summary>
				/// <param name="color">颜色</param>
				/// <param name="offset">位置</param>
				/// <returns></returns>
				ev_int32 addStop(const EarthView::World::Spatial::Display::IColor* color,ev_uint32 offset);

				/// <summary>
				/// 是否存在指定站点
				/// </summary>
				/// <param name="offset">位置[0，100]</param>
				/// <returns>索引位置，从 0 开始</returns>
				ev_int32 contains(ev_uint32 offset) const;

				/// <summary>
				/// 删除指定索引站点
				/// 索引 从 0 开始
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>成功，返回true;否则，返回false</returns>
				ev_bool remove(ev_uint32 index);

				/// <summary>
				/// 删除所有站点
				/// </summary>
				/// <param name=""></param>
				/// <returns>成功，返回true;否则，返回false</returns>
				ev_bool removeAll();

				/// <summary>
				/// 获取站点
				/// </summary>
				/// <param name="offset">接受位置信息</param>
				/// <returns>颜色对象</returns>
				const EarthView::World::Spatial::Display::IColor* getStop(ev_uint32 offset) const;///

				/// <summary>
				/// 获取站点偏移量
				/// 索引从0开始索引
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>偏移量</returns>
				ev_int32 getPosition(ev_uint32 index) const;///

				/// <summary>
				/// 创建色带
				/// </summary>
				/// <param name="count">指定大小</param>
				/// <returns></returns>
				virtual ev_void createRamp(ev_uint32 count);///

				/// <summary>
				/// 深度拷贝
				/// 内存需要外部释放
				/// </summary>
				/// <param name=""></param>
				/// <returns>颜色对象</returns>
				virtual _extfree EarthView::World::Spatial::Display::CColorRamp* clone() const;

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
				virtual ev_bool equal(const EarthView::World::Spatial::Display::CColorRamp* pColorRamp);
			ev_internal:
				/// <summary>
				/// 从数据流恢复ColorRamp属性
				/// </summary>
				/// <param name="stream">流对象</param>
				/// <returns></returns>
				virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
			ev_private:
				CGradientColorRamp( EarthView::World::Core::CNameValuePairList* pList );
			private:
				/// <summary>
				/// 创建颜色制
				/// </summary>
				/// <param name="rate">目标颜色值的比率</param>
				/// <param name="formerColor">前一个颜色</param>
				/// <param name="backColor">后一个颜色</param>
				/// <returns></returns>
				ev_void createColor(ev_real64 rate,const EarthView::World::Spatial::Display::IColor* formerColor,const EarthView::World::Spatial::Display::IColor* backColor);

			protected:
				/// <summary>
				/// 首颜色
				/// </summary>
				EarthView::World::Spatial::Display::IColor* m_pStartColor;
				/// <summary>
				/// 尾颜色
				/// </summary>
				EarthView::World::Spatial::Display::IColor* m_pEndColor;
				/// <summary>
				/// 是否启用多站点模式
				/// </summary>
				ev_bool m_bMultiStop;
				/// <summary>
				/// 位置信息集合
				/// </summary>
				ev_set<ev_size_t>* m_pPositionList;
				/// <summary>
				/// 位置信息映射
				/// </summary>
				ev_map<ev_size_t,EarthView::World::Spatial::Display::IColor*> *m_pColorMap;
				/// <summary>
				/// 渐进色模式
				/// </summary>
				EVGradientColorRampType m_enumGradientColorRampType;
			};
		}
		}
	}
}
#endif
