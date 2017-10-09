//Created by EagleFileGenerator
#ifndef __TEXTURETEXTSTYLETX_H__
#define __TEXTURETEXTSTYLETX_H__

#include "core/global.h"
#include "graphic/graphic_config.h"
#include "font.h"

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class ITextStyleListener;
			class CCTextureTextStyleProducer;
			/// <summary>
			/// 定义文本风格数据结构和操作
			/// </summary>
			class EV_GRAPHIC_DLL CTextureTextStyle: public EarthView::World::Core::CAllocatedObject
			{
				typedef std::vector<EarthView::World::Graphic::ITextStyleListener*> TTextStyleListenerArray;
			public:
				/// <summary>
				/// 显示模式
				/// </summary>
				enum DisplayMode
				{
					FONT_3D,    /// “三维”模式: 像一个模型一样存在于场景之中
					KEEP_PIXELSIZE, /// 保持字体大致的像素大小
					FACETO_CAMERA,  /// 保持面向相机
					STANDARD        /// 标准模式(默认/广告版模式):保持面向相机并保持字体像素大小
				};

				/// <summary>
				/// 文本停靠点与文本矩形块相对的水平布局
				/// </summary>
				enum HoriLayout
				{
					HORI_LEFT = 0,          ///停靠点在文本左方
					HORI_MID = 1,          ///停靠点在文本中线位置
					HORI_RIGHT = 2            ///停靠点在文本右方
				};

				/// <summary>
				/// 文本停靠点与文本矩形块相对的垂直布局
				/// </summary>
				enum VertLayout
				{
					VERT_TOP = 0,           ///停靠点在文本上方
					VERT_MID = 1,          ///停靠点在文本中线位置
					VERT_BOTTOM = 2              ///停靠点在文本下方
				};
				/// <summary>
				/// 设置字体风格
				/// </summary>
				/// <returns>字体风格对象</returns>
				void setFontStyle(const EarthView::World::Graphic::FontStyle& style);
				/// <summary>
				/// 设置颜色
				/// </summary>
				/// <param name="color">颜色</param>
				void setColor(const EarthView::World::Graphic::CColourValue& color);
				/// <summary>
				/// 设置字体轮廓的颜色
				/// </summary>
				/// <param name="color">颜色</param>
				void setOutlineColor(const EarthView::World::Graphic::CColourValue& color);

				/// <summary>
				/// 设置颜色范围: 通过该函数设置可使字体呈现平滑着色效果
				/// </summary>
				/// <param name="colorBegin">颜色区间起始值</param>
				/// <param name="colorEnd">颜色区间末尾值</param>
				void setColorRange(const EarthView::World::Graphic::CColourValue& colorBegin, const EarthView::World::Graphic::CColourValue& colorEnd);

				/// <summary>
				/// 设置字体家族名称,即fontfamily如"宋体","楷体"等(由于历史原因,此接口采用此命名,
				/// 和CTextAreaOverlayElement::setFontName()的意义毫不相干，请注意甄别
				/// </summary>
				/// <param name="family">字体家族名称</param>
				void setFontName(const EVString& family);

				/// <summary>
				/// 设置字体大小
				/// </summary>
				/// <param name="size">size的值所对应的字体尺寸即常用文字处理程序中相应字号的大小</param>
				void setFontSize(ev_uint8 size);

				/// <summary>
				/// 加粗
				/// </summary>
				/// <param name="isBold">是否启用加粗</param>
				void setBoldEnabled(ev_bool isBold);
				/// <summary>
				/// 倾斜
				/// </summary>
				/// <param name="isItalic">是否启用倾斜</param>
				void setItalicEnabled(ev_bool isItalic);

				/// <summary>
				/// 阴影描边
				/// </summary>
				/// <param name="hasShadow">是否启用阴影描边</param>
				void setShadowEnabled(ev_bool hasShadow);

				/// <summary>
				/// 设置布局
				/// </summary>
				/// <param name="hLayout">水平布局</param>
				/// <param name="vLayout">垂直布局</param>
				void setLayout(EarthView::World::Graphic::CTextureTextStyle::HoriLayout hLayout, EarthView::World::Graphic::CTextureTextStyle::VertLayout vLayout);

				/// <summary>
				/// 设置可渲染文本的本地坐标系原点相对于文本在各个坐标轴分量上的偏移标量值,
				/// 偏移方向视mHLayout和mVLayout的值而定
				/// </summary>
				void setOffset(Real offsetX, Real offsetY, Real offsetZ);

				/// <summary>
				/// 设置行高
				/// </summary>
				/// <param name="scale">正常行高的倍数</param>
				void setRowHeight(Real scale);

				/// <summary>
				/// 设置显示模式
				/// </summary>
				/// <param name="mode">显示模式</param>
				void setDisplayMode(EarthView::World::Graphic::CTextureTextStyle::DisplayMode mode);

				/// <summary>
				/// 提交更改，通知所有使用该文本风格的对象
				/// </summary>
				void commit();

				/// <summary>
				/// 绑定一个文本风格监听对象
				/// </summary>
				/// <param name="listener">文本风格监听对象</param>
				void attach(EarthView::World::Graphic::ITextStyleListener* listener);

				/// <summary>
				/// 移除一个文本风格监听对象
				/// </summary>
				/// <param name="listener">文本风格监听对象</param>
				void remove(EarthView::World::Graphic::ITextStyleListener* listener);

			public:
				/// <summary>
				/// 获取字体风格对象
				/// </summary>
				/// <returns>字体风格对象</returns>
				const EarthView::World::Graphic::FontStyle& getFontStyle() const{
					return mFontStyle;}
				/// <summary>
				/// 获取字体风格对象相关属性
				/// </summary>
				const EVString& getFontName() const
				{	return mFontStyle.getFontFamily(); }
				ev_uint8 getFontSize() const
				{	return mFontStyle.size();}
				ev_bool isItalic() const
				{	return mFontStyle.isItalic();}
				ev_bool isBold() const
				{	return mFontStyle.isBold();}
				ev_bool hasShadow() const
				{	return mFontStyle.hasShadow();}
				///

				/// <summary>
				/// 获取颜色区间起始值
				/// </summary>
				/// <returns>颜色ARGB整数值</returns>
				ev_uint32 getColorBegin() const
				{	return mColorRange[0]; }
				
				/// <summary>
				/// 获取颜色区间末尾值
				/// </summary>
				/// <returns>颜色ARGB整数值</returns>
				ev_uint32 getColorEnd() const
				{   return mColorRange[1]; }

				/// <summary>
				/// 获取颜色区间
				/// </summary>
				/// <param name="beginColor">开始颜色</param>
				/// <param name="endColor">结束颜色</param>
				/// <returns></returns>
				ev_void getColorRange(_out EarthView::World::Graphic::CColourValue& beginColor, _out EarthView::World::Graphic::CColourValue& endColor)const;

				EarthView::World::Graphic::CColourValue getColor()const;

				ev_uint32 getOutlineColor()const;
				/// <summary>
				/// 获知几何信息是否过期
				/// </summary>
				/// <returns>是否过期</returns>
				ev_bool geometryOutOfDate() const
				{	return mIsGeometryChanged; }

				/// <summary>
				/// 获知颜色信息是否过期
				/// </summary>
				/// <returns>是否过期</returns>
				ev_bool colorOutOfDate() const
				{   return mIsColorChanged || mIsFontOutlineColorChanged;  }

				/// <summary>
				/// 获取水平布局
				/// </summary>
				/// <returns>水平布局</returns>
				EarthView::World::Graphic::CTextureTextStyle::HoriLayout getHorizontalLayout() const 
				{ return mHLayout; }

				/// <summary>
				/// 获取垂直布局
				/// </summary>
				/// <returns>垂直布局</returns>
				EarthView::World::Graphic::CTextureTextStyle::VertLayout getVerticalLayout() const 
				{ return mVLayout; }

				/// <summary>
				/// 获取X轴偏移值
				/// </summary>
				/// <returns>X轴偏移值<returns>
				Real getOffsetX() const 
				{ return mOffsetX; }

				/// <summary>
				/// 获取Y轴偏移值
				/// </summary>
				/// <returns>Y轴偏移值<returns>
				Real getOffsetY() const 
				{ return mOffsetY; }

				/// <summary>
				/// 获取Z轴偏移值
				/// </summary>
				/// <returns>Z轴偏移值<returns>
				Real getOffsetZ() const 
				{ return mOffsetZ; }

				/// <summary>
				/// 获取显示模式
				/// </summary>
				/// <returns>显示模式<returns>
				EarthView::World::Graphic::CTextureTextStyle::DisplayMode getDisplayMode() const
				{ return mMode;    }

				/// <summary>
				/// 获取字体资源
				/// </summary>
				/// <returns>字体资源指针<returns>
				const EarthView::World::Graphic::CFontPtr& getFontResoure() const
				{ return mFontRes; }

				/// <summary>
				/// 获取行高
				/// </summary>
				/// <returns>行的像素高度</returns>
				ev_uint32 getRowHeight() const;

				/// <summary>
				/// 获取标准行高
				/// </summary>
				/// <returns>行的像素高度</returns>
				ev_uint32 getStandardRowHeight() const
				{ return mFontRes->getTrueTypeMaxHeight(); }

				/// <summary>
				/// 创建文本风格实例
				/// </summary>
				/// <param name="family">字体家族名称</param>
				/// <param name="fontSize">字体大小：所对应的字体尺寸即常用文字处理程序中相应数值字号的大小</param>
				/// <param name="color">颜色</param>
				/// <param name="hasShadow">是否采用阴影描边</param>
				/// <returns>文本风格实例指针<returns>
				static EarthView::World::Graphic::CTextureTextStyle* create(const EVString& famliy, ev_uint8 fontSize, const EarthView::World::Graphic::CColourValue& color, ev_bool hasShadow)
				{	return new CTextureTextStyle(famliy,fontSize,color,hasShadow);  }

				/// <summary>
				/// 创建文本风格实例
				/// </summary>
				/// <returns>文本风格实例指针<returns>
				static EarthView::World::Graphic::CTextureTextStyle* create()
				{	return new CTextureTextStyle();  }

				/// <summary>
				/// 销毁文本风格实例
				/// (如果实例正在被使用,调用destory并不会马上析构该实例,直到使用者计数为0时，该实例会自动析构）
				/// </summary>
				static void destroy(CTextureTextStyle* ref_instance);

				/// <summary>
				/// 获知该实例是否即将被销毁
				/// </summary>
				ev_bool isToDestroy() const;
			protected:
				CTextureTextStyle(const EVString& famliy, ev_uint8 fontSize, const EarthView::World::Graphic::CColourValue& color, ev_bool hasShadow);
				CTextureTextStyle();
				/// <summary>
				/// 析构函数：请不要使用delete操作符，请使用destroy()析构该类的实例
				/// </summary>
				friend class CCTextureTextStyleProducer;
				virtual ~CTextureTextStyle();

			private:
				EV_MUTEX(mMutex);
				TTextStyleListenerArray   mUserList;
				ev_bool   mIsToDestroy;

				ev_uint32 mColorRange[2];
				EarthView::World::Graphic::FontStyle mFontStyle;
				ev_bool   mIsColorChanged;
				ev_bool   mIsGeometryChanged;
				EarthView::World::Graphic::CTextureTextStyle::DisplayMode mMode;
				EarthView::World::Graphic::CTextureTextStyle::HoriLayout  mHLayout;
				EarthView::World::Graphic::CTextureTextStyle::VertLayout  mVLayout;
				Real      mOffsetX;
				Real      mOffsetY;
				Real      mOffsetZ;
				EarthView::World::Graphic::CFontPtr  mFontRes;
				Real mRowHeightScale;
				ev_uint32 mFontOutlineColor;
				ev_bool mIsFontOutlineColorChanged;

				void destroyImpl();
			ev_private:
				CTextureTextStyle(EarthView::World::Core::CNameValuePairList* pList);
			};

			/// <summary>
			/// 文本风格监听类：用于通知相关对象在文本风格发生变化时进行更新
			/// </summary>
			class EV_GRAPHIC_DLL ITextStyleListener : public EarthView::World::Core::CBaseObject
			{	
			public:
				ITextStyleListener(){}
				virtual ~ITextStyleListener(){}

				/// <summary>
				/// 文本风格发生变化时回调
				/// </summary>
				virtual void onStyleChanged(EarthView::World::Graphic::CTextureTextStyle* ref_style);
			ev_private:
				ITextStyleListener(EarthView::World::Core::CNameValuePairList* pList){}
			};

		}
	}
};
#endif // __TEXTSTYLETX_H__
