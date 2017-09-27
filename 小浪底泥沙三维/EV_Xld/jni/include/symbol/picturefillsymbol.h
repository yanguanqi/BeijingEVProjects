#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_PICTUREFILLSYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_PICTUREFILLSYMBOL_H

#include "symbol/fillsymbol.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
			/// <summary>
			/// 图片填充面类
			/// 提供方法如下：
			/// 获取与设置 旋转角度、背景色、X轴与Y轴缩放比例、X轴与Y轴偏移量、X轴与Y轴间隔量
			/// 获取与设置 是否交换前景色和背景色、图片的透明颜色、指定图片的数据
			///	获取图片大小、获取图片的个数、获取指定图片的ID、是否为二值图、是否含有图片
			/// 获取符号类型、获取流、获取SLD
			/// 深度copy风格对象、判断两个Symbol是否属性相同、将Symbol属性写入XML元素
			/// 从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
			/// </summary>
			class EV_SYMBOL_DLL CPictureFillSymbol :
				public EarthView::World::Spatial::Display::CFillSymbol
			{
				friend class CDrawPictureFill;
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CPictureFillSymbol();

				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CPictureFillSymbol();

				/// <summary>
				/// 获取旋转角度
				/// </summary>
				/// <param name=""></param>
				/// <returns>角度</returns>
				ev_real64 getAngle() const;

				/// <summary>
				/// 获取背景色
				/// </summary>
				/// <param name=""></param>
				/// <returns>背景色</returns>
				const  EarthView::World::Spatial::Display::IColor* getBackgroundColor() const;

				/// <summary>
				/// 获取图片大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>图片大小</returns>
				ev_int32 getPictureSize() const;

				/// <summary>
				/// 获取X轴缩放比例
				/// </summary>
				/// <param name=""></param>
				/// <returns>缩放比例</returns>
				ev_real64 getScaleX() const;

				/// <summary>
				/// 获取Y轴缩放比例
				/// </summary>
				/// <param name=""></param>
				/// <returns>缩放比例</returns>
				ev_real64 getScaleY() const;

				/// <summary>
				/// 是否交换前景色和背景色
				/// 只有在图片为二值图时，才有效
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否交换</returns>
				ev_bool isSwapColor() const;

				/// <summary>
				/// 是否为二值图
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回true，为二值图；否则不是</returns>
				ev_bool isOneBit();

				/// <summary>
				/// 获取图片的透明颜色
				/// </summary>
				/// <param name=""></param>
				/// <returns>透明颜色</returns>
				const  EarthView::World::Spatial::Display::IColor* getTransparentColor() const;

				/// <summary>
				/// 获取X轴的偏移量
				/// </summary>
				/// <param name=""></param>
				/// <returns>间隔量</returns>
				ev_real64 getOffsetX() const;

				/// <summary>
				/// 获取Y轴的偏移量
				/// </summary>
				/// <param name=""></param>
				/// <returns>间隔量</returns>
				ev_real64 getOffsetY() const;

				/// <summary>
				/// 获取X轴的间隔量
				/// </summary>
				/// <param name="value">间隔量</param>
				/// <returns></returns>
				ev_real64 getSeparationX() const;

				/// <summary>
				/// 获取Y轴的间隔量
				/// </summary>
				/// <param name="value">间隔量</param>
				/// <returns></returns>
				ev_real64 getSeparationY() const;

				/// <summary>
				/// 设置旋转角度
				/// </summary>
				/// <param name="value">旋转角度</param>
				/// <returns></returns>
				ev_void setAngle(ev_real64 value);

				/// <summary>
				/// 设置背景色
				/// </summary>
				/// <param name="color">背景色</param>
				/// <returns></returns>
				ev_void setBackgroundColor(const EarthView::World::Spatial::Display::IColor* color);

				/// <summary>
				/// 设置X轴缩放比例
				/// </summary>
				/// <param name="value">缩放比例</param>
				/// <returns></returns>
				ev_void setScaleX(ev_real64 value);

				/// <summary>
				/// 设置Y轴缩放比例
				/// </summary>
				/// <param name="value">缩放比例</param>
				/// <returns></returns>
				ev_void setScaleY(ev_real64 value);

				/// <summary>
				/// 设置是否交换前景色和背景色
				/// 只有在图片为二值图时，才有效
				/// </summary>
				/// <param name="value">是否交换</param>
				/// <returns></returns>
				ev_void setSwapColor(ev_bool value);

				/// <summary>
				/// 设置图片的透明颜色
				/// </summary>
				/// <param name="color">透明颜色</param>
				/// <returns></returns>
				ev_void setTransparentColor(const EarthView::World::Spatial::Display::IColor* color);

				/// <summary>
				/// 设置X轴的偏移量
				/// </summary>
				/// <param name="value">偏移量</param>
				/// <returns></returns>
				ev_void setOffsetX(ev_real64 value);

				/// <summary>
				/// 设置Y轴的偏移量
				/// </summary>
				/// <param name="value">偏移量</param>
				/// <returns></returns>
				ev_void setOffsetY(ev_real64 value);

				/// <summary>
				/// 设置X轴的间隔量
				/// </summary>
				/// <param name="value">间隔量</param>
				/// <returns></returns>
				ev_void setSeparationX(ev_real64 value);

				/// <summary>
				/// 设置Y轴的间隔量
				/// </summary>
				/// <param name="value">间隔量</param>
				/// <returns></returns>
				ev_void setSeparationY(ev_real64 value);

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

				/// <summary>
				/// 是否含有图片
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool hasImage() const;

				/// <summary>
				/// 获取图片的个数
				/// </summary>
				/// <param name=""></param>
				/// <returns>图片个数</returns>
				ev_uint32 getImageCount() const;

				/// <summary>
				/// 获取指定图片的ID
				/// </summary>
				/// <param name="index">图片序列号</param>
				/// <returns>图片ID</returns>
				EVString getImageID(ev_uint32 index) const;

				/// <summary>
				/// 获取指定图片的数据
				/// </summary>
				/// <param name="index">图片序列号</param>
				/// <returns>图片数据流</returns>
				EarthView::World::Core::MemoryDataStreamPtr getImage(_in ev_uint32 index) const;
				/// <summary>
				/// 设置指定图片的数据
				/// </summary>
				/// <param name="index">图片序列号</param>
				/// <param name="imageID">图片ID</param>
				/// <param name="stream">图片数据流</param>
				/// <returns></returns>
				ev_void setImage(ev_uint32 index,const EVString& imageID,EarthView::World::Core::MemoryDataStreamPtr stream);
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
				CPictureFillSymbol( EarthView::World::Core::CNameValuePairList* pList );
			protected:
				/// <summary>
				/// 旋转角度
				/// </summary>
				ev_real64 m_dfAngle;
				/// <summary>
				/// X轴缩放比例
				/// </summary>
				ev_real64 m_dfScaleX;
				/// <summary>
				/// Y轴缩放比例
				/// </summary>
				ev_real64 m_dfScaleY;
				/// <summary>
				/// X轴偏移量
				/// </summary>
				ev_real64 m_dfOffsetX;
				/// <summary>
				/// Y轴偏移量
				/// </summary>
				ev_real64 m_dfOffsetY;
				/// <summary>
				/// X轴间隔大小
				/// </summary>
				ev_real64 m_dfSeparationX;
				/// <summary>
				/// Y轴间隔大小
				/// </summary>
				ev_real64 m_dfSeparationY;
				/// <summary>
				/// 判断是否交换前景和背景颜色
				/// 只有图片为二值图时，才有效
				/// </summary>
				ev_bool m_bIsOneBit;
				/// <summary>
				/// 判断是否交换前景和背景颜色
				/// 只有图片为二值图时，才有效
				/// </summary>
				ev_bool m_bSwapColor;
				/// <summary>
				/// 背景颜色
				/// </summary>
				EarthView::World::Spatial::Display::IColor* m_pBackgroundColor;
				/// <summary>
				/// 图片透明颜色
				/// </summary>
				EarthView::World::Spatial::Display::IColor* m_pTransparentColor;
				/// <summary>
				/// 图片缓存
				/// </summary>
				EarthView::World::Core::MemoryDataStreamPtr m_pPictureBuffer;
				/// <summary>
				/// 图片缓存大小
				/// </summary>
				ev_uint32 m_nPicSize;
				/// <summary>
				/// 图片名称
				/// </summary>
				EarthView::World::Core::ev_string m_szPicName;
			private:
				C_DISABLE_COPY( CPictureFillSymbol );
			};
		}
		}
	}
}
#endif
