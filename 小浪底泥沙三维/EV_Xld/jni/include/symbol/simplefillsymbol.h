#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_SIMPLEFILLSYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_SIMPLEFILLSYMBOL_H

#include "symbol/fillsymbol.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
			/// <summary>
			/// 简单填充样式
			/// </summary>
			enum  EVSimpleFillStyle
			{
				SFS_SimpleFillStyle_Solid               = 0,//均匀色度空间
				SFS_SimpleFillStyle_Dense1              = 1,
				SFS_SimpleFillStyle_Dense2              = 2,
				SFS_SimpleFillStyle_Dense3              = 3,
				SFS_SimpleFillStyle_Dense4              = 4,
				SFS_SimpleFillStyle_Dense5              = 5,
				SFS_SimpleFillStyle_Dense6              = 6,
				SFS_SimpleFillStyle_Dense7              = 7,
				SFS_SimpleFillStyle_Hor					= 8,//水平线填充
				SFS_SimpleFillStyle_Ver                 = 9,//垂直线填充
				SFS_SimpleFillStyle_Cross               = 10,//十字填充
				SFS_SimpleFillStyle_BDiag               = 11,//逆对角线填充
				SFS_SimpleFillStyle_FDiag               = 12,//对角线填充
				SFS_SimpleFillStyle_DiagCross               = 13//斜十字填充
			};
			/// <summary>
			/// 简单填充面类
			/// 提供方法如下：
			/// 获取与设置填充类型
			/// 获取符号类型、获取流、获取SLD
			/// 深度copy风格对象、判断两个Symbol是否属性相同、将Symbol属性写入XML元素
			/// 从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
			/// </summary>
			class EV_SYMBOL_DLL CSimpleFillSymbol :
				public EarthView::World::Spatial::Display::CFillSymbol
			{
				friend class CDrawSimpleFill;
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CSimpleFillSymbol();

				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CSimpleFillSymbol();

				/// <summary>
				/// 设置填充类型
				/// </summary>
				/// <param name="style">类型</param>
				/// <returns></returns>
				ev_void setSimpleFillStyle(EarthView::World::Spatial::Display::EVSimpleFillStyle style);

				/// <summary>
				/// 获取填充类型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Spatial::Display::EVSimpleFillStyle getSimpleFillStyle();

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
				CSimpleFillSymbol( EarthView::World::Core::CNameValuePairList* pList );
			protected:
				/// <summary>
				/// 简单填充类型
				/// </summary>
				EarthView::World::Spatial::Display::EVSimpleFillStyle m_eSimpleFillStyle;
			private:
				C_DISABLE_COPY( CSimpleFillSymbol );
			};
		}
		}
	}
}
#endif
