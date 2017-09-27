#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_FILLSYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_FILLSYMBOL_H

#include "symbol/symbol.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
			/// <summary>
			/// 填充符号类
			/// 提供方法如下：
			/// 获取与设置 外边框对象、是否使用外边框、是否填充
			/// 获取流、获取SLD、判断两个Symbol是否属性相同、将Symbol属性写入XML元素
			/// 从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
			/// </summary>
			class EV_SYMBOL_DLL CFillSymbol :
				public EarthView::World::Spatial::Display::CSymbol
			{
			public:
				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CFillSymbol();

				/// <summary>
				/// 获取外边框对象
				/// </summary>
				/// <param name=""></param>
				/// <returns>外边框</returns>
				virtual const EarthView::World::Spatial::Display::ISymbol* getOutline() const;
				virtual EarthView::World::Spatial::Display::ISymbol*getOutline();

				/// <summary>
				/// 设置外边框对象
				/// </summary>
				/// <param name="outline">外边框指针</param>
				/// <returns></returns>
				virtual ev_void setOutline(const EarthView::World::Spatial::Display::ISymbol* outline);

				/// <summary>
				/// 是否使用外边框
				/// </summary>
				/// <param name=""></param>
				/// <returns>如果使用，则返回true；否则，返回false</returns>
				virtual ev_bool isUseOutline() const;

				/// <summary>
				/// 设置是否使用外边框
				/// </summary>
				/// <param name="bUse">是否使用</param>
				/// <returns></returns>
				virtual ev_void setUseOutline( ev_bool bUse );

				/// <summary>
				/// 是否填充
				/// </summary>
				/// <param name=""></param>
				/// <returns>如果填充，则返回true；否则，返回false</returns>
				virtual ev_bool isFill() const;

				/// <summary>
				/// 设置是否填充
				/// </summary>
				/// <param name="bUse">是否填充</param>
				/// <returns></returns>
				virtual ev_void setFill( ev_bool bFill );

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
			protected:
				CFillSymbol();
			ev_private:
				CFillSymbol( EarthView::World::Core::CNameValuePairList* pList );
			protected:
				/// <summary>
				/// 外边框
				/// </summary>
				EarthView::World::Spatial::Display::ISymbol* m_pOutline;

				/// <summary>
				/// 标识是否使用外边框
				/// </summary>
				ev_bool m_bUseOutline;

				/// <summary>
				/// 标识是否填充
				/// </summary>
				ev_bool m_bFill;
			private:
				C_DISABLE_COPY( CFillSymbol );
			};
		}
		}
	}
}
#endif
