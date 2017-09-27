#ifndef __EV_TEXTMOVABLE_H__
#define __EV_TEXTMOVABLE_H__
#pragma once


#include "core/global.h"
#include "graphic/graphic_config.h"
#include "graphic/movableobject.h"
#include "graphic/latticetextstyle.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			enum eLayout                 ///坐标（0,0,0）相对于字体的位置
			{
				CENTER = 0,              ///居中
				UP_LEFT,                 ///左上角
				UP_RIGHT,                ///右上角
				DOWN_LEFT,               ///左下角
				DOWN_RIGHT,              ///右下角
				CENTER_LEFT,             ///靠左纵向居中
				CENTER_RIGHT,            ///靠右纵向居中
				CENTER_UP,               ///靠上横向居中
				CENTER_DOWN,             ///靠下横向居中
			};

			class CColourValue;
			class CLatticeFontCache;
			class ILatticeTextEffect;
			struct FontLattice;
			class EV_GRAPHIC_DLL CLatticeMovableText:public EarthView::World::Graphic::CMovableObject
			{
			public:
				enum EAdaptMode
				{
					OFF = 0,             ///关闭自动适应
					KEEP_PIXELSIZE,		 ///字体保持固定大小
					FACETO_CAMERA,		 ///字体保持摄像头朝向
					STD,				 ///字体保持固定大小和摄像头朝向 (FIX_PIXEL_SIZE|FACE_TO_CAMERA)
				};
				class Attributes;
			ev_private:
				struct TextElement;
				typedef std::vector<EarthView::World::Graphic::ILatticeTextEffect*> TTextEffects;			
				typedef std::vector<TextElement> TTextArray;			
			public:
				/// <summary>
				/// 名称:Attributes
				///	摘要:
				///		这个类抽象出可渲染文本对象所具有的公共特性
				/// 注意:
				///		可渲染文本类的早期设计中，部分属性设置接口被直接添加到可渲染文本类
				/// 的成员声明中,为了兼容之前的代码，这些接口并未移除。建议使用者在新的代码
				/// 中使用EarthView::World::Graphic::CLatticeMovableText::Attributes类设置各项特性细节，再使用构造函数
				/// CTextMovable(const EarthView::World::Core::CUnicodeString& str,EarthView::World::Graphic::CLatticeMovableText::Attributes* fontAttr)
				/// 或
				/// CTextMovable::Attribute* CTextMovable::setFontAttr(CTextMovable::Attributes* fontAttr)为
				/// 可渲染对象绑定这个属性对象。
				/// </summary>			
				class EV_GRAPHIC_DLL Attributes:public EarthView::World::Graphic::CLatticeTextStyle
				{
					friend class CRichTextMovable;
					friend class CLatticeMovableText;
				public:
					/// <summary>
					/// 字体布局设置
					/// </summary>
					/// <param name=layout>布局枚举</param>
					void setLayout(EarthView::World::Graphic::eLayout layout);
					/// <summary>
					/// 字体相对坐标(0,0,0)的额外偏移量设置，偏移方向由mlayout值决定
					/// </summary>
					/// <param name=offset></param>
					void setExtraOffset(ev_real32 offsetX,ev_real32 offsetY,ev_real32 offsetZ);
					/// <summary>
					/// 场景适应特性设置
					/// </summary>
					/// <param name=adaptMode></param>
					void setAdaptMode(EarthView::World::Graphic::CLatticeMovableText::EAdaptMode adaptMode);
					/// <summary>
					/// 添加/移除文本可渲染对象附加效果
					/// </summary>
					/// <param name=effect>附加效果指针</param>
					/// <returns>操作是否成功:一个附加效果对象不能添加到多个Attribute对象中去</returns>
					ev_bool addTextEffect(EarthView::World::Graphic::ILatticeTextEffect* ref_effect);
					ev_bool removeTextEffect(EarthView::World::Graphic::ILatticeTextEffect* effect);
					/// <summary>
					/// 清除所有文本可渲染对象附加效果
					/// </summary>
					void clearEffects();
					/// <summary>
					/// 返回到默认值
					/// </summary>
					void toDefaultVal();
					/// <summary>
					/// 创建移动文本属性对象
					/// </summary>
					/// <returns>属性对象指针</return>		
					inline static _extfree EarthView::World::Graphic::CLatticeMovableText::Attributes* create()
					{
						return new Attributes();
					}
					/// <summary>
					/// 创建可渲染文本属性对象
					/// </summary>
					/// <param name="fontFamily">字体家族,如"宋体"</param>
					/// <param name="fontSize">字体像素大小</param>
					/// <param name="color">字体主轮廓颜色</param>
					/// <returns>属性对象指针</return>	
					inline static _extfree EarthView::World::Graphic::CLatticeMovableText::Attributes* create(const EarthView::World::Core::ev_string& fontFamily,ev_byte fontSize,const EarthView::World::Graphic::CColourValue& color)
					{
						return new Attributes(fontFamily,fontSize,color);
					}
ev_private:
					Attributes( _in EarthView::World::Core::CNameValuePairList *pList );
				private:
					ev_uint32		mAdaptMode;
					EarthView::World::Graphic::eLayout			mLayout;
					ev_real32       mExtraOffsetX;
					ev_real32       mExtraOffsetY;
					ev_real32       mExtraOffsetZ;
					TTextEffects    mTextEffectList;
					/// 通知文本布局发生变化
					void notifyLayoutChanged();
					/// 默认构造函数
					Attributes();
					Attributes(const EarthView::World::Core::ev_string& fontFamily,ev_byte fontSize,const EarthView::World::Graphic::CColourValue& color);
					/// 拷贝构造函数
					Attributes(const Attributes& copy);
				public:
					~Attributes();   ///不要使用delete操作符，请使用destroy();
				};
			public:
				class EV_GRAPHIC_DLL CTextRenderable:public EarthView::World::Graphic::CRenderable
				{
					friend class CLatticeMovableText;
					friend class CLatticeTextStyle;
					friend class Attributes;
				public:	
					CTextRenderable(EarthView::World::Graphic::CLatticeMovableText* parent,const EarthView::World::Core::CUnicodeString& str,EarthView::World::Graphic::CLatticeMovableText::Attributes* fontAttr,EarthView::World::Graphic::CLatticeFontCache* sharedCache);
					~CTextRenderable();	
					/// <summary>
					/// 渲染前回调
					/// </summary>
					/// <param name ="sm">场景管理器</param>
					/// <param name ="rsys">渲染系统</param>
					/// <returns>处理是否成功</returns>
					virtual ev_bool preRender( EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys);
					/// <summary>
					/// 渲染后回调
					/// </summary>
					/// <param name ="sm">场景管理器</param>
					/// <param name ="rsys">渲染系统</param>
					virtual void postRender( EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys);
					/// <summary>
					/// 刷新顶点缓存
					/// </summary>
					void refresh();

					virtual EarthView::World::Graphic::CMovableObject* getMovableObject()const
					{
						return mParent;
					}
				ev_private:
					CTextRenderable(_in EarthView::World::Core::CNameValuePairList *pList);
				public: 
					/// <summary>
					/// 以下函数参见基类
					/// </summary>
					virtual Real getSquaredViewDepth( const EarthView::World::Graphic::CCamera *cam ) const;
					virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const ;
					virtual void getRenderOperation( _inout EarthView::World::Graphic::CRenderOperation &op );
					virtual void getWorldTransforms( _out EarthView::World::Spatial::Math::CMatrix4 *xform ) const;
					virtual const EarthView::World::Graphic::LightList &getLights() const;
				private:
					void initRenderable( const EarthView::World::Core::CUnicodeString& str );
					ev_real32* getVbufWithLock( ev_size_t vertexCount );
					void computeLayout( const EarthView::World::Spatial::Math::CAxisAlignedBox& localAABB );
					EarthView::World::Graphic::CMaterialPtr        mMaterialPtr;
					EarthView::World::Graphic::CLatticeMovableText*       mParent;
					EarthView::World::Graphic::CRenderOperation    mRenderOp;	
					CHardwareVertexBufferSharedPtr mVbuf;
					EarthView::World::Graphic::LightList           mLList;
					EarthView::World::Spatial::Math::CMatrix4            mProjMatrix;
					mutable EarthView::World::Spatial::Math::CMatrix4    mWorldMatrix;
					mutable ev_bool     mIsWorldMatrixOutOfDate;
					EarthView::World::Spatial::Math::CVector3			mOffset;
					///字体相关属性
					TTextArray			mTextElements;
					ev_bool             mNeedUpdate;
					ev_bool             mLayoutChanged;
					EarthView::World::Graphic::CLatticeMovableText::Attributes*			mFontAttr;
					EarthView::World::Graphic::CLatticeFontCache*  mSharedFontCache;
				};

				/// <summary>
				/// 设置所有字体属性
				/// </summary>
				/// <param name=fontAttr></param>
				EarthView::World::Graphic::CLatticeMovableText::Attributes* setFontAttr(EarthView::World::Graphic::CLatticeMovableText::Attributes* fontAttr);
				/// <summary>
				/// 深度测试默认是开启的，若有必要，使用此函数改变设置
				/// </summary>
				/// <param name=bCheck></param>
				/// <returns></returns>	
				void setDepthCheck(ev_bool bCheck);
				/// <summary>
				/// 设置投影矩阵偏移
				/// </summary>
				/// <param name="off"></param>
				void setProjMatrixRSOffset(ev_real64 off);
				/// <summary>
				/// 添加渲染文本
				/// </summary>
				/// <param name="str">新的字符串</param>
				/// <param name="index">文本索引</param>
				/// <param name="style">文本风格:如果传入NULL值,则表示使用默认风格</param>
				void appendText(const EarthView::World::Core::CUnicodeString& str, EarthView::World::Graphic::CLatticeTextStyle* style);
				/// <summary>
				/// 重设渲染文本
				/// </summary>
				/// <param name="str">新的字符串</param>
				/// <param name="index">文本索引</param>
				/// <param name="style">文本风格:如果传入NULL值,则表示使用默认风格</param>
				/// <returns>旧的字体风格指针</returns>
				EarthView::World::Graphic::CLatticeTextStyle* resetText(const EarthView::World::Core::CUnicodeString& str, ev_size_t index, EarthView::World::Graphic::CLatticeTextStyle* style);
				/// <summary>
				/// 移除渲染文本
				/// </summary>
				/// <param name="str">新的字符串</param>
				/// <returns>旧的字体风格指针</returns>
				EarthView::World::Graphic::CLatticeTextStyle* removeText(const EarthView::World::Core::CUnicodeString& str);
				/// <summary>
				/// 移除渲染文本
				/// </summary>
				/// <param name="index">文本索引</param>
				/// <returns>旧的字体风格指针</returns>
				EarthView::World::Graphic::CLatticeTextStyle* removeText(ev_size_t index);

				/// <summary>
				/// 下列设置函数功能与EarthView::World::Graphic::CLatticeMovableText::Attributes类中的设置函数一致，只是只可能作用于当前对象。
				/// </summary>
				/// /////////////////////////////////////////////////////////////////
				void setColor(ev_uint32 rgbVal);				

				void setColor(const EarthView::World::Graphic::CColourValue& color);

				void setUnderline(ev_bool bUnderline);

				void setStrikeOut(ev_bool bStrikeOut);

				void setBold(ev_bool bBold);

				void setItalic(ev_bool bItalic);

				void setFont(const EarthView::World::Core::ev_string& fontFamily);

				void setFontSize(ev_byte size);

				void setLayout(EarthView::World::Graphic::eLayout layout);

				void setExtraOffset(ev_real32 offsetX,ev_real32 offsetY,ev_real32 offsetZ);

				void setAdaptMode(EarthView::World::Graphic::CLatticeMovableText::EAdaptMode adaptMode);

				void setTransparence(ev_real32 rate);
				/// //////////////////////////////////////////////////////////////////

				/// <summary>
				/// 获取可渲染对象的属性对象
				/// </summary>
				/// <returns>字体属性</returns>		
				EarthView::World::Graphic::CLatticeMovableText::Attributes* getFontAttr() const;
				/// <summary>
				/// 获取在局部坐标系下，可渲染对象的所占据的矩形区域左上角相对其局部坐标原点的偏移
				/// </summary>
				/// <returns>字体属性</returns>	
				const EarthView::World::Spatial::Math::CVector3& getOffset() const
				{
					mRenderable->computeLayout(getBoundingBox());
					return mRenderable->mOffset;
				}
				/// <summary>
				/// 获取文本可渲染对象
				/// </summary>
				/// <returns>文本可渲染对象</returns>	
				const EarthView::World::Graphic::CRenderable* getRenderable() const
				{
					return mRenderable;
				}
				/// <summary>
				/// 获取可渲染对象所渲染的文本
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>渲染文本</returns>		
				const EarthView::World::Core::CUnicodeString& text(ev_size_t index) const 
				{
					return mRenderable->mTextElements[index].m_text;
				}
				/// <summary>
				/// 更新请求
				/// </summary>
				void updateRequest() 
				{
					mRenderable->mNeedUpdate = true;
				}
				/// <summary>
				/// 刷新CTextMovable对象，重新构建顶点缓冲区
				/// </summary>
				/// <param name=""></param>
				void refresh() const 
				{ 
					mRenderable->refresh(); 
				}
				/// <summary>
				/// 生成文本纹理,由于纹理对尺寸的特殊要求，字体的真实长宽比将会丢失
				/// </summary>
				/// <param name=""></param>
				EarthView::World::Graphic::CTexturePtr toTexture() const;
				/// <summary>
				/// 生成高保真图片
				/// </summary>
				/// <param name=""></param>			
				ev_bool toHifiImage(_out EarthView::World::Graphic::CImage& dstImg) const;
				/// <summary>
				/// 构造函数:此构造函数需要用户提供CFontLatticeCache对象，恰当地利用此构造函数和CFontLatticeCache对象能够提高字体渲染性能
				/// </summary>
				/// <param name=""></param>
				CLatticeMovableText(const EarthView::World::Core::CUnicodeString& str,EarthView::World::Graphic::CLatticeFontCache* sharedCache);
				/// <summary>
				/// 构造函数:此构造函数会将可渲染对象与默认字体缓存绑定
				/// </summary>
				/// <param name=""></param>
				CLatticeMovableText(const EarthView::World::Core::CUnicodeString& str);
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="str">要显示的字符串</param>
				/// <param name="fontAttr">字体属性:可以有多个CTextMovable对象共用一个fontAttr,但是这些CTextMovable对象需要在同一个线程内</param>
				/// <param name="sharedCache">每个CTextMovable对象需要绑定到字体缓存上去，
				/// 用户可以决定使用默认字体缓存还是自己创建一个字体缓存，字体缓存是线程安全的</param>
				CLatticeMovableText(const EarthView::World::Core::CUnicodeString& str,EarthView::World::Graphic::CLatticeMovableText::Attributes* fontAttr,EarthView::World::Graphic::CLatticeFontCache* sharedCache);
				CLatticeMovableText(const EarthView::World::Core::CUnicodeString& str,EarthView::World::Graphic::CLatticeMovableText::Attributes* fontAttr);
				CLatticeMovableText(const CLatticeMovableText& src);
				virtual ~CLatticeMovableText();

				/// <summary>
				/// 射线选择
				/// </summary>
				/// <param name="ray">射线对象</param>
				/// <param name="EarthView::World::Graphic::CViewport">所在视口</param>
				/// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>				
				/// <param name="objIndex">选中的对象序号</param>
				/// <param name="point">交点</param>
				/// <returns>true:与射线相交;false:不相交</returns>
				virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport, ev_bool prepareToRenderSelection, _out ev_int32& objIndex,_out EarthView::World::Spatial::Math::CVector3& point);
				
				ev_void renderSelection();
				ev_void clearSelection();
				/// <summary>
				/// 获取移动对象类型的名称
				/// </summary>
				/// <param name=""></param>
				/// <returns>名称</returns>
				virtual EVString getMovableType() const;
				/// <summary>
				/// 获得专门的类型标识
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_uint32 getTypeFlags() const;
				/// <summary>
				/// 获取当前对象的平行轴边框盒
				/// 边框盒在当地坐标系中
				///包围盒的计算在CTextMovable::refresh()中完成;
				/// </summary>
				/// <param name=""></param>
				/// <returns>边框盒</returns>
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const;
				/// <summary>
				/// 获取当前对象的平行轴边框盒
				/// 边框盒在世界坐标系中
				/// </summary>
				/// <param name=""></param>
				/// <returns>边框盒</returns>
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox &getWorldBoundingBox(ev_bool derive) const;
				/// <summary>
				/// 唤醒移动对象的摄像机线程用于下一次渲染操作
				/// 内部方法
				/// </summary>
				/// <param name="cam">摄像机</param>
				/// <returns></returns>
				virtual void _notifyCurrentCamera(EarthView::World::Graphic::CCamera *ref_cam);
				/// <summary>
				/// 获取当前对象的球体限定半径
				/// </summary>
				/// <param name=""></param>
				/// <returns>边框盒</returns>
				virtual Real getBoundingRadius() const;
				/// <summary>
				/// 更新渲染队列
				/// 移动对象必须添加到EarthView::World::Graphic::CRenderable
				/// 内部方法
				/// </summary>
				/// <param name="queue">渲染队列</param>
				/// <returns></returns>
				virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);
				/// <summary>
				/// 访问可渲染对象
				/// 允许迭代器遍历渲染实例，当被询问时，移动对象将添加到渲染队列
				/// </summary>
				/// <param name="visitor"></param>
				/// <param name="debugRenderables">为false，只渲染正常可渲染对象；为true，调试渲染对象也将被包括</param>
				void visitRenderables( EarthView::World::Graphic::CRenderable::CVisitor *visitor,ev_bool debugRenderables );
			protected:
				/// <summary>
				/// 世界坐标系变换（可重写该函数以改变CTextMovable的显示效果)
				/// </summary>
				virtual void computeWorldMatrix();

				CTextRenderable* mRenderable;
				EarthView::World::Graphic::CCamera*         mCam;
				mutable EarthView::World::Spatial::Math::CAxisAlignedBox  mAABB;
				ev_real64        mProjMatrixOffset;
				ev_bool          mProjMatrixChanged;
				EarthView::World::Spatial::Math::CMatrix3         mWorld3x3;

				static ev_real32   mCharScale;
				static ev_uint32   curID;
			private:
				inline void initMovableObj(); 
			ev_private:
				CLatticeMovableText(_in EarthView::World::Core::CNameValuePairList *pList);
				struct TextElement
				{
					EarthView::World::Core::CUnicodeString m_text;
					EarthView::World::Graphic::CLatticeTextStyle* m_style;
					TextElement(const EarthView::World::Core::CUnicodeString& text, EarthView::World::Graphic::CLatticeTextStyle* style):m_text(text),m_style(style){}
					~TextElement(){}
					ev_bool operator == (const TextElement& rightVal)
					{
						return (m_text == rightVal.m_text);
					}
					ev_bool operator == (const EarthView::World::Core::CUnicodeString& str)
					{
						return (m_text == str);
					}
				};
			};


		}
	}
}

#endif
