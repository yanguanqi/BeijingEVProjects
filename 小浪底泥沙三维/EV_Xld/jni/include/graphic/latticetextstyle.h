#ifndef __LATTICETEXTSTYLE_H__
#define __LATTICETEXTSTYLE_H__

#include "core/global.h"
#include "graphic/graphic_config.h"
#include "core/memoryallocatedobject.h"
#define IS_USING_32BITLATTICE(fuction) ( (fuction) == RichFontLatticeGenerator )
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			struct FontLattice;
			struct BufFillerParam;
			class CLatticeMovableText;

			class EV_GRAPHIC_DLL CLatticeTextStyle:public EarthView::World::Core::CAllocatedObject
			{
				friend class CRichTextMovable;
				friend class CLatticeMovableText;
				friend class CTextureMovableText;
			ev_private:
				typedef std::vector<CLatticeMovableText*> TTextMovables;
				/// <summary>
				/// 名称:TBufFillerFunc
				/// 摘要:
				///		这是一个十分重要的回调函数指针类型,负责硬件缓冲的填充和文本局部坐标系包围盒的计算
				///     由于这个函数的实现的复杂性，目前并未将这个回调函数开放给用户。如果在未来需要这么
				/// 做，可将该函数指针类型封装成一个带有虚函数的小型类。并为CTestStyle添加接口,以注册这
				/// 些类的对象。
				/// </summary>
				typedef void (*TBufFillerFunc)(BufFillerParam& param,
					const EarthView::World::Graphic::CLatticeTextStyle* textStyle,
					const FontLattice** pTargetLatticeList,
					ev_size_t chCount);  ///考虑未来把这个函数指针导出为一个类
				/// <summary>
				/// 名称:TFontLatticeFunc
				/// 摘要:
				///		这个函数指针类型负责字体点阵数据块的计算。
				///		由于这个函数的实现的复杂性，目前并未将这个回调函数开放给用户。如果在未来需要
				/// 这么做，可将该函数指针类型封装成一个带有虚函数的小型类。并为CTestStyle添加接口,以
				/// 注册这些类的对象。
				/// </summary>
				typedef FontLattice* (*TFontLatticeFunc)(ev_void* ft_lib,
					ev_void* ft_face,
					const EarthView::World::Graphic::CLatticeTextStyle* fontAttr,
					ev_wchar wch);    
			public:
				enum EShadeMode
				{
					HIGHLIGHT,   ///高亮 
					OUTLINE,     ///描边
					SHADOW,      ///阴影
					NORMAL       ///正常
				};	
				/// <summary>
				/// 设置字体颜色
				/// </summary>
				/// <param name=rgbval>24位颜色值，如：“0x0000ff”(OPENGL下表示红色，D3D下表示蓝色)</param>
				void setColor(ev_uint32 rgbVal);				
				/// <summary>
				/// 设置字体颜色
				/// </summary>
				/// <param name=color>setColor的跨渲染平台版本,在不频繁改变颜色值的前提下优先调用此重载版本</param>
				void setColor(const EarthView::World::Graphic::CColourValue& color);
				/// <summary>
				/// 下划线
				/// </summary>
				/// <param name=bUnderline></param>
				void setUnderline(ev_bool bUnderline);
				/// <summary>
				/// 删除线
				/// </summary>
				/// <param name=bStrikeOut></param>
				void setStrikeOut(ev_bool bStrikeOut);
				/// <summary>
				/// 加粗
				/// </summary>
				/// <param name=bBold></param>
				void setBold(ev_bool bBold);
				/// <summary>
				/// 倾斜
				/// </summary>
				/// <param name=bItalic></param>
				void setItalic(ev_bool bItalic);
				/// <summary>
				/// 字体
				/// </summary>
				/// <param name=choice></param>
				void setFont(const EarthView::World::Core::ev_string& fontFamily);
				/// <summary>
				/// 字号
				/// </summary>
				/// <param name=size></param>
				void setFontSize(ev_byte size);
				/// <summary>
				/// 透明度设置, 注意:鉴于历史原因，这里的透明度rate的值越大，文本将越不透明，更贴切地说
				/// 这是"不透明度"设置
				/// </summary>
				/// <param name=rate>rate 有效值在0 到1 之间</param>
				void setTransparence(ev_real32 rate);
				/// <summary>
				/// 着色模式设置
				/// </summary>
				/// <param name=mode></param>	
				void setShadeMode( EarthView::World::Graphic::CLatticeTextStyle::EShadeMode mode );
				/// <summary>
				/// 返回到默认值
				/// </summary>
				virtual void toDefaultVal();
				/// <summary>
				/// 创建移动文本属性对象
				/// </summary>
				/// <returns>属性对象指针</return>		
				inline static _extfree EarthView::World::Graphic::CLatticeTextStyle* create()
				{
					return new CLatticeTextStyle();
				}
				/// <summary>
				/// 创建可渲染文本属性对象
				/// </summary>
				/// <param name="fontFamily">字体家族,如"宋体"</param>
				/// <param name="fontSize">字体像素大小</param>
				/// <param name="color">字体主轮廓颜色</param>
				/// <returns>属性对象指针</return>	
				inline static _extfree EarthView::World::Graphic::CLatticeTextStyle* create(const EarthView::World::Core::ev_string& fontFamily,ev_byte fontSize,const EarthView::World::Graphic::CColourValue& color)
				{
					return new CLatticeTextStyle(fontFamily,fontSize,color);
				}
				/// <summary>
				/// 销毁移动文本属性对象
				/// </summary>
				inline void destroy()
				{
					if(mUserList.size() == 0)
						delete this;
				}

				inline ev_uint32 getRGB() const 
				{
					return mRGBVal;
				}

				EarthView::World::Graphic::CColourValue getColor() const;

				inline ev_bool isUnderline() const 
				{
					return m_bUnderline;
				} 

				inline ev_bool isStrikeOut() const	
				{
					return m_bStrikeOut;
				}

				inline ev_bool isBold()	  const	
				{
					return m_bBold;
				} 

				inline ev_bool isItalic()	  const	
				{
					return m_bItalic;
				} 

				inline ev_uint16 getFont()	  const	
				{
					return mFontIndex;
				}

				inline ev_byte getFontSize() const	
				{
					return mFontSize;
				}

				inline ev_real32 getTransparence() const 
				{
					return mTransparence;
				}

				inline const ev_int64& getKey() const
				{
					return key;
				}
ev_private:
				inline const TFontLatticeFunc getFontLatticeFunc() const
				{
					return mFontLatticeFunc;
				}

				CLatticeTextStyle( _in EarthView::World::Core::CNameValuePairList *pList );
			private:
				ev_uint16		mFontIndex;
				ev_uint32		mRGBVal;
				ev_byte			mFontSize;
				ev_bool			m_bBold;
				ev_bool			m_bItalic;
				ev_bool			m_bUnderline;
				ev_bool			m_bStrikeOut;
				ev_real32       mTransparence;
				ev_int64		key;
				TBufFillerFunc  mBufFillerFunc;
				TFontLatticeFunc mFontLatticeFunc;
				TTextMovables   mUserList;
				EV_MUTEX(mMutex);
				/// 生成64位键值
				void generateKey();
				/// 通知movable对象发生改变
				void notifyChanged();
				/// 添加使用者
				void attach( CMovableObject* user );
				/// 移除使用者
				void remove(CMovableObject* user);
				/// 默认构造函数(请使用CTextStyle::create())
				CLatticeTextStyle();
				CLatticeTextStyle(const EarthView::World::Core::ev_string& fontFamily,ev_byte fontSize,const EarthView::World::Graphic::CColourValue& color);
				/// 拷贝构造函数
				CLatticeTextStyle(const CLatticeTextStyle& copy);
			public:
				virtual ~CLatticeTextStyle();   ///不要使用delete操作符，请使用destroy();
			};
		}
	}
}

#endif

