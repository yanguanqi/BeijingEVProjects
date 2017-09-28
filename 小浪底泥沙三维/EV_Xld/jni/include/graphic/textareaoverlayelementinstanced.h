#ifndef _TEXTAREAOVERLAYELEMENTINSTANCED_H__
#define _TEXTAREAOVERLAYELEMENTINSTANCED_H__

#include "graphic/graphic_config.h"
#include "graphic/overlayelement.h"
#include "graphic/font.h"
#include "graphic/instanceobjectcreator.h"

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CMeshPtr;
			class CTextAreaEventObject;
			class CInstanceManagerListenerTextArea;
			class CTextAreaInstanceObjectCreatorManager;
			/// <summary>
			/// 基于instance的文本表层元素
			/// </summary>
			class EV_GRAPHIC_DLL CTextAreaOverlayElementInstanced : public EarthView::World::Graphic::COverlayElement
			{
				friend class CTextAreaInstanceObjectCreatorManager;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CTextAreaOverlayElementInstanced(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="name"></param>
				/// <returns></returns>
				CTextAreaOverlayElementInstanced(const EVString &name);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name="name"></param>
				/// <returns></returns>
				virtual ~CTextAreaOverlayElementInstanced();
				/// <summary>
				/// 初始化
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void initialise();
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
				/// 设置元素的文本标题
				/// </summary>
				/// <param name="text">标题</param>
				/// <returns></returns>
				virtual void setCaption(const EarthView::World::Core::DisplayString &text);
				/// <summary>
				/// 设置元素的位置和尺寸大小
				/// </summary>
				/// <param name="gmm">枚举，表示不同的位置和大小</param>
				/// <returns></returns>
				void setMetricsMode(EarthView::World::Graphic::GuiMetricsMode gmm);
				/// <summary>
				/// 得到元素的类型名称
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回元素的类型名称</returns>
				virtual EVString getTypeName() const;
				/// <summary>
				/// 获得overlayelement的世界变换
				/// </summary>				
				/// <returns></returns>
				void getWorldTransforms(EarthView::World::Spatial::Math::CMatrix4 *xform) const;
				/// <summary>
				/// 获取当前使用中的字体资源
				/// </summary>
				const CFontPtr& getFontResource() const;
				/// <summary>
				/// 使用指定的字体资源
				/// </summary>
				void setFontResource(const CFontPtr& font);
				/// <summary>
				/// 获取字体风格
				/// </summary>
				/// <returns>字体风格</returns>
				const FontStyle& getFontStyle() const;
				/// <summary>
				/// 设置字体风格
				/// </summary>
				/// <param name="style">风格</param>
				void setFontStyle(const FontStyle& style);
				/// <summary>
				/// 得到字符高度
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回字符高度</returns>
				Real getCharHeight() const;
				/// <summary>
				/// 设置字符高度
				/// </summary>
				/// <param name="height">高度</param>
				/// <returns></returns>
				void setCharHeight( Real height );
				/// <summary>
				/// 得到空格宽度
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回空格宽度</returns>
				Real getSpaceWidth() const;
				/// <summary>
				/// 设置空格宽度
				/// </summary>
				/// <param name="width">空格宽度</param>
				/// <returns></returns>
				void setSpaceWidth( Real width );
				/// <summary>
				/// 获得文本的颜色
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回颜色值</returns>
				const EarthView::World::Graphic::CColourValue &getColour() const;
				/// <summary>
				/// 设置文本的颜色
				/// </summary>
				/// <param name="col">颜色值</param>
				/// <returns></returns>
				void setColour(const EarthView::World::Graphic::CColourValue &col);
				/// <summary>
				/// 得到文字顶部的颜色
				/// </summary>
				/// <param name="col">颜色值</param>
				/// <returns>返回文字顶部的颜色</returns>
				const EarthView::World::Graphic::CColourValue &getColourTop() const;
				/// <summary>
				/// 设置文字顶部的颜色
				/// </summary>
				/// <param name="col">颜色值</param>
				/// <returns></returns>
				void setColourTop(const EarthView::World::Graphic::CColourValue &col);
				/// <summary>
				/// 得到文字底部的颜色
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回文字底部的颜色</returns>
				const EarthView::World::Graphic::CColourValue &getColourBottom() const;
				/// <summary>
				/// 设置文字底部的颜色
				/// </summary>
				/// <param name="col">颜色值</param>
				/// <returns></returns>
				void setColourBottom(const EarthView::World::Graphic::CColourValue &col);

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

ev_internal:
				///继承方法
				virtual void updatePositionGeometry();
				///继承方法
				virtual void updateTextureGeometry();
				/// <summary>
				/// 更新顶点颜色
				/// </summary>
				virtual void updateColours();
				//// Method for setting up base parameters for this class
				virtual void addBaseParameters();

			public:
				ev_void saveToInstanceObjectVecMap(CInstanceObject* pObject,EVString& meshName);
				InstanceObjectVecMap& getInstanceObjectVecMap();
				virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);
				virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor, ev_bool debugRenderables /* = false */);

			protected:
				static EVString msTypeName;
				/// Command objects
				static CCmdCharHeight msCmdCharHeight;
				static CCmdSpaceWidth msCmdSpaceWidth;
				static CCmdColour msCmdColour;
				static CCmdColourTop msCmdColourTop;
				static CCmdColourBottom msCmdColourBottom;

				EarthView::World::Graphic::CSceneManager* mSceneMgr;
				EVString mSceneName;
				CFontPtr mpFont;
				ev_uint16 mPixelCharHeight;
				ev_uint16 mPixelSpaceWidth;
				Real mCharHeight;
				Real mSpaceWidth;
				Real mViewportAspectCoef;
				//// Colours to use for the vertices
				EarthView::World::Graphic::CColourValue mColourTop;
				EarthView::World::Graphic::CColourValue mColourBottom;				
				ev_bool mColoursChanged;

				InstanceObjectVecMap mInstanceObjects;
			};

			class EV_GRAPHIC_DLL CTextAreaInstanceObjectCreatorManager : public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CTextAreaInstanceObjectCreatorManager(_in EarthView::World::Core::CNameValuePairList *pList);

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CTextAreaInstanceObjectCreatorManager();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CTextAreaInstanceObjectCreatorManager();
				/// <summary>
				/// 获取单例
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static CTextAreaInstanceObjectCreatorManager* getSingleton();
				/// <summary>
				/// 销毁单例
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static void destorySingleton();	
				/// <summary>
				/// 创建对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CInstanceObject* createInstanceObject(CTextAreaOverlayElementInstanced* textInstance,EVString& matName);
				/// <summary>
				/// 销毁对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void destroyInstanceObjects(CTextAreaOverlayElementInstanced* textInstance);
				/// <summary>
				/// 释放资源
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void releaseInstanceObjectCreators(CTextAreaOverlayElementInstanced* textInstance);

			private:
				/// <summary>
				/// 创建mesh资源
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CMeshPtr createOrRetrieveMesh(CTextAreaOverlayElementInstanced* textInstance,EVString& matName);

				static CTextAreaInstanceObjectCreatorManager* mpSinglton;
				typedef map<EVString,CInstanceObjectCreator*> InstanceObjectCreatorMap;
				InstanceObjectCreatorMap mCreatorMap;
				EarthView::World::Core::CMutex mCreatorMapMutex;
				CTextAreaEventObject* mpFontEventObject;
				friend class CTextAreaEventObject;
				CInstanceManagerListenerTextArea* mpListener;
			};	

		}
	}
}

#endif

