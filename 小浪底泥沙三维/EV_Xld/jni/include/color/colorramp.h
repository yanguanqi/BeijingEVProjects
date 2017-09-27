#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_COLORRAMP_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_COLORRAMP_H

#include "color/color.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
			
			enum EVColorRampType
			{
				CRT_COLORRAMPTYPEGRADIENT              = 1,
				CRT_COLORRAMPRANDOM					   = 2
			};
			/// <summary>
			/// 所有色带类的基类  
			///	提供方法如下：
			/// 创建色带、深度拷贝、判断相同类型的对象属性是否一致、清空颜色列表			
			/// 获取色带中颜色的个数、获取指定索引的颜色、获取ColorRamp的类型
			/// 转换成XML字符串、转换成二进制、将属性信息转为XML
			/// 从XMLElement中恢复信息、从数据流恢复Color属性
			/// </summary>
			class EV_COLOR_DLL CColorRamp:
				public EarthView::World::Core::CAllocatedObject
			{			
			public:
				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CColorRamp();
				/// <summary>
				/// 创建色带
				/// </summary>
				/// <param name="count">指定大小</param>
				/// <returns></returns>
				virtual ev_void createRamp(ev_uint32 count);

				/// <summary>
				/// 获取色带中颜色的个数
				/// </summary>
				/// <param name=""></param>
				/// <returns>颜色个数</returns>
				virtual ev_uint32 getColorCount() const;

				/// <summary>
				/// 获取指定索引的颜色
				/// </summary>
				/// <param name="index">指定索引</param>
				/// <returns></returns>
				virtual const EarthView::World::Spatial::Display::IColor* getColorRef(ev_uint32 index) const;

				/// <summary>
				/// 获取ColorRamp的类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>ColorRamp的类型</returns>
				virtual EarthView::World::Spatial::Display::EVColorRampType getColorRampType() const;
				
				/// <summary>
				/// 深度拷贝
				/// 内存需要外部释放
				/// </summary>
				/// <param name=""></param>
				/// <returns>颜色对象</returns>
				virtual _extfree EarthView::World::Spatial::Display::CColorRamp* clone() const;

				/// <summary>
				/// 转换成XML字符串
				/// </summary>
				/// <param name=""></param>
				/// <returns>xml字符串</returns>
				EVString toXML() const;

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
				/// 从数据流恢复Color属性
				/// </summary>
				/// <param name="stream">流对象</param>
				/// <returns></returns>
				virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
			protected:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CColorRamp();
				
				/// <summary>
				/// 清空颜色列表
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void clearColorList();
			ev_private:
				CColorRamp( EarthView::World::Core::CNameValuePairList* pList );
			protected:
				/// <summary>
				/// 颜色列表
				/// </summary>
				ev_vector<EarthView::World::Spatial::Display::IColor*>* m_pColorList;
			private:
				C_DISABLE_COPY( CColorRamp );
			};
		}
		}
	}
}
#endif

