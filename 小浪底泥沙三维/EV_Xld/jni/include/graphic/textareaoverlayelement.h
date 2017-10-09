#ifndef _TextAreaOverlayElement_H__
#define _TextAreaOverlayElement_H__
#include "graphic/graphic_config.h"
#include "overlayelement.h"
#include "font.h"
#include "renderoperation.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CCharOverlayElement;
			/// <summary>
			/// 该类执行的是包含简单无格式文本的表层元素
			/// </summary>
			class EV_GRAPHIC_DLL CTextAreaOverlayElement : public EarthView::World::Graphic::COverlayElement
			{
				friend class CCharOverlayElement;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CTextAreaOverlayElement(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="name"></param>
				/// <returns></returns>
				CTextAreaOverlayElement(const EVString &name);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name="name"></param>
				/// <returns></returns>
				virtual ~CTextAreaOverlayElement();
				/// <summary>
				/// 初始化
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void initialise();
				/// <summary>
				/// 设置元素的文本标题
				/// </summary>
				/// <param name="text">标题</param>
				/// <returns></returns>
				virtual void setCaption(const EarthView::World::Core::DisplayString &text);
				/// <summary>
				/// 设置字符高度
				/// </summary>
				/// <param name="height">高度</param>
				/// <returns></returns>
				void setCharHeight( Real height );
				/// <summary>
				/// 得到字符高度
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回字符高度</returns>
				Real getCharHeight() const;
				/// <summary>
				/// 设置空格宽度
				/// </summary>
				/// <param name="width">空格宽度</param>
				/// <returns></returns>
				void setSpaceWidth( Real width );
				/// <summary>
				/// 得到空格宽度
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回空格宽度</returns>
				Real getSpaceWidth() const;
				/// <summary>
				/// 设置字体风格
				/// </summary>
				/// <param name="style">风格</param>
				void setFontStyle(const FontStyle& style);

				/// <summary>
				/// 使用指定的字体资源
				/// </summary>
				void setFontResource(const CFontPtr& font);

				/// <summary>
				/// 获取当前使用中的字体资源
				/// </summary>
				const CFontPtr& getFontResource() const;
				/// <summary>
				/// 获取字体风格
				/// </summary>
				/// <returns>字体风格</returns>
				const FontStyle& getFontStyle() const;
				/// <summary>
				/// 得到元素的类型名称
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回元素的类型名称</returns>
				virtual EVString getTypeName() const;
				/// <summary>
				/// 重新获得渲染实体使用的材质的弱相关性
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
				/// <summary>
				/// 获得要求对象到帧缓冲的渲染操作
				/// </summary>
				/// <param name="op"></param>
				/// <returns></returns>
				void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
				/// <summary>
				/// 设置用于此元素的材质名
				/// </summary>
				/// <param name="matName">材质名称</param>
				/// <returns></returns>
				void setMaterialName(const EVString &matName);
				/// <summary>
				/// 设置文本的颜色
				/// </summary>
				/// <param name="col">颜色值</param>
				/// <returns></returns>
				void setColour(const EarthView::World::Graphic::CColourValue &col);
				/// <summary>
				/// 获得文本的颜色
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回颜色值</returns>
				const EarthView::World::Graphic::CColourValue &getColour() const;
				/// <summary>
				/// 设置文字底部的颜色
				/// </summary>
				/// <param name="col">颜色值</param>
				/// <returns></returns>
				void setColourBottom(const EarthView::World::Graphic::CColourValue &col);
				/// <summary>
				/// 得到文字底部的颜色
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回文字底部的颜色</returns>
				const EarthView::World::Graphic::CColourValue &getColourBottom() const;
				/// <summary>
				/// 设置文字顶部的颜色
				/// </summary>
				/// <param name="col">颜色值</param>
				/// <returns></returns>
				void setColourTop(const EarthView::World::Graphic::CColourValue &col);
				/// <summary>
				/// 得到文字顶部的颜色
				/// </summary>
				/// <param name="col">颜色值</param>
				/// <returns>返回文字顶部的颜色</returns>
				const EarthView::World::Graphic::CColourValue &getColourTop() const;

				/// <summary>
				/// 设置元素的位置和尺寸大小
				/// </summary>
				/// <param name="gmm">枚举，表示不同的位置和大小</param>
				/// <returns></returns>
				void setMetricsMode(EarthView::World::Graphic::GuiMetricsMode gmm);
				/// <summary>
				/// 根据所提供的变换来对这些元素进行更新
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void _update();

				/***** Shows this element if it was hidden. ****/
				virtual void show();
				/***** Hides this element if it was visible. ****/
				virtual void hide();
				/// <summary>
				/// 设置标题
				/// </summary>
				class EV_GRAPHIC_PRIVATE CCmdCaption : public EarthView::World::Core::CParamCommand
				{
				public:
					EVString doGet( const void *target ) const;
					void doSet( void *target, const EVString &val );
				};
				/// <summary>
				/// 设置文字的高度
				/// </summary>
				class EV_GRAPHIC_PRIVATE CCmdCharHeight : public EarthView::World::Core::CParamCommand
				{
				public:
					EVString doGet( const void *target ) const;
					void doSet( void *target, const EVString &val );
				};
				/// <summary>
				/// 设置空格的宽度
				/// </summary>
				class EV_GRAPHIC_PRIVATE CCmdSpaceWidth : public EarthView::World::Core::CParamCommand
				{
				public:
					EVString doGet( const void *target ) const;
					void doSet( void *target, const EVString &val );
				};
				/// <summary>
				/// 设置字体名称
				/// </summary>
				//class EV_GRAPHIC_PRIVATE CCmdFontName : public EarthView::World::Core::CParamCommand
				//{
				//public:
				//    EVString doGet( const void *target ) const;
				//    void doSet( void *target, const EVString &val );
				//};
				/// <summary>
				/// 设置顶部的颜色
				/// </summary>
				class EV_GRAPHIC_PRIVATE CCmdColourTop : public EarthView::World::Core::CParamCommand
				{
				public:
					EVString doGet( const void *target ) const;
					void doSet( void *target, const EVString &val );
				};
				/// <summary>
				/// 设置底部的颜色
				/// </summary>
				class EV_GRAPHIC_PRIVATE CCmdColourBottom : public EarthView::World::Core::CParamCommand
				{
				public:
					EVString doGet( const void *target ) const;
					void doSet( void *target, const EVString &val );
				};
				///Command object for setting the constant colour.
				/// <summary>
				/// 设置颜色
				/// </summary>
				class EV_GRAPHIC_PRIVATE CCmdColour : public EarthView::World::Core::CParamCommand
				{
				public:
					EVString doGet( const void *target ) const;
					void doSet( void *target, const EVString &val );
				};

ev_internal:
				//// Method for setting up base parameters for this class
				void addBaseParameters();
			protected:
				//// Flag indicating if this panel should be visual or just group things
				ev_bool mTransparent;
				//// Render operation
				EarthView::World::Graphic::CRenderOperation mRenderOp;

				static EVString msTypeName;
				/// Command objects
				static CCmdCharHeight msCmdCharHeight;
				static CCmdSpaceWidth msCmdSpaceWidth;
				//                static CCmdFontName msCmdFontName;
				static CCmdColour msCmdColour;
				static CCmdColourTop msCmdColourTop;
				static CCmdColourBottom msCmdColourBottom;

				CFontPtr mpFont;
				Real mCharHeight;
				ev_uint16 mPixelCharHeight;
				Real mSpaceWidth;
				ev_uint16 mPixelSpaceWidth;
				ev_size_t mAllocSize;
				Real mViewportAspectCoef;
				//// Colours to use for the vertices
				EarthView::World::Graphic::CColourValue mColourBottom;
				EarthView::World::Graphic::CColourValue mColourTop;
				ev_bool mColoursChanged;
				/// <summary>
				/// 分配内存，当必要的时候才分配
				/// </summary>
				void checkMemoryAllocation( ev_size_t numChars );
ev_internal:
				///继承方法
				virtual void updatePositionGeometry();
				///继承方法
				virtual void updateTextureGeometry();
				/// <summary>
				/// 更新顶点颜色
				/// </summary>
				virtual void updateColours();
			public:
				virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);
				virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor, ev_bool debugRenderables /* = false */);
			private:
				void clearSingleChars();
				typedef vector<EarthView::World::Graphic::COverlayElement*> TCharElementArray;
				TCharElementArray mSingleCharElements;
			};

			class EV_GRAPHIC_DLL CCharOverlayElement: public EarthView::World::Graphic::COverlayElement
			{
ev_private:
				CCharOverlayElement( EarthView::World::Core::CNameValuePairList* pList );
ev_internal:
				virtual void updatePositionGeometry();
				virtual void updateTextureGeometry();
			public:
				static EVString msTypeName;
				CCharOverlayElement( const EVString name );

				~CCharOverlayElement();
				virtual void updateColors();
				virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
				virtual void _update();
				void setChar(ev_wchar unicode){mUnicode = unicode;}
				void setContainer(EarthView::World::Graphic::CTextAreaOverlayElement* container){mContainer = container;}
				void setPen(ev_real32 x, ev_real32 y){mPenX = x; mPenY = y;}
				void getPen(_out ev_real32& x, _out ev_real32& y){x = mPenX; y = mPenY;}
				EVString getTypeName() const;
			protected:
				EarthView::World::Graphic::CTextAreaOverlayElement* mContainer;
				ev_wchar mUnicode;
				EarthView::World::Graphic::CRenderOperation mRenderOp;
				ev_real32 mPenX;
				ev_real32 mPenY;
			};

		}
	}
}

#endif

