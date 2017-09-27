#ifndef _SCREENSCUTCHEON_H
#define _SCREENSCUTCHEON_H

#include "industrygraphic_cfg.h"
#include "globecontrol/globecontrol.h"
#include "graphic/overlay.h"
#include "mathengine/vector2.h"
#include "graphic/overlaymanager.h"
#include "graphic/textareaoverlayelement.h"
#include "graphic/borderpaneloverlayelement.h"
#include "graphic/fontmanager.h"
#include "industryengine/industrygraphic/screenscutcheoneventobject.h"


namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			class EV_INDUSTRYGRAPHIC_DLL CScreenScutcheon : public EarthView::World::Core::CBaseObject
			{

				friend class CScreenScutcheonManager;
				friend class CScreenScutcheonHandler;

ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">参数键值对表</param>
				CScreenScutcheon(_in EarthView::World::Core::CNameValuePairList *pList);

			public:

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="name">屏幕标牌名称</param>
				/// <param name="templateName">模板名称</param>
				/// <param name="control">EarthView::World::Spatial3D::Controls::CGlobeControl对象</param>
				CScreenScutcheon(const EVString& name, const EVString& templateName,  EarthView::World::Spatial3D::Controls::CGlobeControl* control);

				/// <summary>
				/// 析构函数
				/// </summary>
				~CScreenScutcheon();

				/// <summary>
				/// 设置是否已选择
				/// </summary>
				/// <param name="value">bool值</param>
				inline void setSelected(const ev_bool& value)
				{
					this->mIsSelected = value;
				}

				/// <summary>
				/// 获取是否已选择
				/// </summary>
				/// <returns>bool值</returns>	
				inline bool getSelected() const
				{
					return this->mIsSelected;
				}

				/// <summary>
				/// 设置是否已可选
				/// </summary>
				/// <param name="value">bool值</param>
				inline void setSelectable(const ev_bool& value)
				{
					this->mIsSelectable = value;
				}

				/// <summary>
				/// 获取是否可选
				/// </summary>
				/// <returns>bool值</returns>	
				inline bool getSelectable() const
				{
					return this->mIsSelectable;
				}

				/// <summary>
				/// 设置是否可拖拽
				/// </summary>
				/// <param name="value">bool值</param>
				inline void setDraggable(const ev_bool& value)
				{
					this->mIsDraggable = value;
				}

				/// <summary>
				/// 获取是否可拖拽
				/// </summary>
				/// <returns>bool值</returns>	
				inline bool getDraggable() const
				{
					return this->mIsDraggable;
				}

				/// <summary>
				/// 设置panel的显隐
				/// </summary>
				/// <param name="visible">是否可见</param>
				inline void setVisible(const bool& visible)
				{
					this->mVisible=visible;
					if (visible)
						this->mpOverlay->show();
					else
						this->mpOverlay->hide();
				}

				/// <summary>
				/// 获取panel的显隐
				/// </summary>
				/// <returns>是否可见 </returns>	
				inline bool getVisible() const
				{
					return this->mVisible;
				}

				/// <summary>
				/// 获取屏幕标牌名称
				/// </summary>
				/// <returns>屏幕标牌名称 </returns>	
				inline EVString getName() const
				{
					return this->mName;
				}

				/// <summary>
				/// 设置panel的高度
				/// </summary>
				/// <param name="panelElementName">panel名称</param>
				/// <param name="height">panel的高度</param>
				void setPanelElementHeight(const EVString& panelElementName , const int& height);

				/// <summary>
				/// 获取panel的高度
				/// </summary>
				/// <param name="panelElementName">panel名称</param>
				/// <returns>panel的高度 </returns>	
				int getPanelElementHeight(const EVString& panelElementName) ;

				/// <summary>
				/// 设置panel的宽度
				/// </summary>
				/// <param name="panelElementName">panel名称</param>
				/// <param name="height">panel的宽度</param>
				void setPanelElementWidth(const EVString& panelElementName ,const int& width);

				/// <summary>
				/// 获取panel的宽度
				/// </summary>
				/// <param name="panelElementName">panel名称</param>
				/// <returns>panel的宽度 </returns>	
				int getPanelElementWidth(const EVString& panelElementName) ;

				/// <summary>
				/// 设置panel的位置
				/// </summary>
				/// <param name="panelElementName">panel名称</param>
				/// <param name="pos">屏幕坐标位置</param>
				void setPanelElementPostion(const EVString& panelElementName, const EarthView::World::Spatial::Math::CVector2& pos);

				/// <summary>
				/// 获取panel的位置
				/// </summary>
				/// <param name="panelElementName">panel名称</param>
				/// <returns>屏幕坐标位置 </returns>	
				EarthView::World::Spatial::Math::CVector2 getPanelElementPostion(const EVString& panelElementName);

				/// <summary>
				/// 设置textarea字体
				/// </summary>
				/// <param name="panelElementName">panel名称</param>
				/// <param name="textAreaName">textArea名称</param>
				/// <param name="fontName">字体名称</param>
				void setTextElementFontName(const EVString& panelElementName, const EVString& textAreaName, const EVString& fontName);

				/// <summary>
				/// 获取textarea字体名称
				/// </summary>
				/// <param name="panelElementName">panel名称</param>
				/// <param name="textAreaName">textArea名称</param>
				/// <returns>字体名称 </returns>	
				EVString getTextElementFontName(const EVString& panelElementName, const EVString& textAreaName) ;

				/// <summary>
				/// 设置textarea字体颜色
				/// </summary>
				/// <param name="panelElementName">panel名称</param>
				/// <param name="textAreaName">textArea名称</param>
				/// <param name="color">字体颜色</param>
				void setTextElementFontColor(const EVString& panelElementName, const EVString& textAreaName, const EarthView::World::Graphic::CColourValue& color);

				/// <summary>
				/// 获取textarea字体颜色
				/// </summary>
				/// <param name="panelElementName">panel名称</param>
				/// <param name="textAreaName">textArea名称</param>
				/// <returns>字体颜色 </returns>	
				EarthView::World::Graphic::CColourValue getTextElementFontColor(const EVString& panelElementName, const EVString& textAreaName);

				/// <summary>
				/// 设置textarea字体顶部颜色
				/// </summary>
				/// <param name="panelElementName">panel名称</param>
				/// <param name="textAreaName">textArea名称</param>
				/// <param name="color">字体顶部颜色</param>
				void setTextElementFontColorTop(const EVString& panelElementName, const EVString& textAreaName, const EarthView::World::Graphic::CColourValue& color);

				/// <summary>
				/// 获取textarea字体顶部颜色
				/// </summary>
				/// <param name="panelElementName">panel名称</param>
				/// <param name="textAreaName">textArea名称</param>
				/// <returns>字体顶部颜色 </returns>	
				EarthView::World::Graphic::CColourValue getTextElementFontColorTop(const EVString& panelElementName, const EVString& textAreaName);

				/// <summary>
				/// 设置textarea字体底部颜色
				/// </summary>
				/// <param name="panelElementName">panel名称</param>
				/// <param name="textAreaName">textArea名称</param>
				/// <param name="color">字体底部颜色</param>
				void setTextElementFontColorBottom(const EVString& panelElementName, const EVString& textAreaName, const EarthView::World::Graphic::CColourValue& color);

				/// <summary>
				/// 获取textarea字体底部颜色
				/// </summary>
				/// <param name="panelElementName">panel名称</param>
				/// <param name="textAreaName">textArea名称</param>
				/// <returns>字体底部颜色 </returns>	
				EarthView::World::Graphic::CColourValue getTextElementFontColorBottom(const EVString& panelElementName, const EVString& textAreaName);

				/// <summary>
				/// 设置textarea字体大小
				/// </summary>
				/// <param name="panelElementName">panel名称</param>
				/// <param name="textAreaName">textArea名称</param>
				/// <param name="size">字体大小</param>
				void setTextElementFontSize(const EVString& panelElementName, const EVString& textAreaName, const Real& size);

				/// <summary>
				/// 获取textarea字体大小
				/// </summary>
				/// <param name="panelElementName">panel名称</param>
				/// <param name="textAreaName">textArea名称</param>
				/// <returns>字体大小</returns>	
				Real getTextElementFontSize(const EVString& panelElementName, const EVString& textAreaName);

				/// <summary>
				/// 设置textarea字体是否启用阴影
				/// </summary>
				/// <param name="panelElementName">panel名称</param>
				/// <param name="textAreaName">textArea名称</param>
				/// <param name="hasShadow">是否启用阴影</param>
				void setTextElementFontHasShadow(const EVString& panelElementName, const EVString& textAreaName, const ev_bool& hasShadow);

				/// <summary>
				/// 设置textarea的内容
				/// </summary>
				/// <param name="panelElementName">panel名称</param>
				/// <param name="textAreaName">textArea名称</param>
				/// <param name="value">内容</param>
				void setTextElementCaption(const EVString& panelElementName, const EVString& textAreaName,  const EVString& value);

				/// <summary>
				/// 获取textarea的内容
				/// </summary>
				/// <param name="panelElementName">panel名称</param>
				/// <param name="textAreaName">textArea名称</param>
				/// <returns>textarea内容 </returns>	
				EVString getTextElementCaption(const EVString& panelElementName, const EVString& textAreaName) ;

				/// <summary>
				///添加子对象名称
				/// </summary>
				/// <param name="name">子对象名称</param>
				void addChildName(const EVString& name);

				/// <summary>
				///设置PanelElement的材质
				/// </summary>
				/// <param name="panelElementName">PanelElement名称</param>
				/// <param name="materialName">材质名称</param>
				void setPanelElementMaterial(const EVString& panelElementName, const EVString& materialName);

				/// <summary>
				///设置事件对象
				/// </summary>
				/// <param name="object">对象</param>
				void setEventObject(EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject* object);

				/// <summary>
				///获取事件对象
				/// </summary>
				/// <param name="object">对象</param>
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject* getEventObject() const;

				/// <summary>
				///设置PanelElement的纹理
				/// </summary>
				/// <param name="panelElementName">PanelElement名称</param>
				/// <param name="texturePtr">纹理指针</param>
				void setPanelElementTexture(const EVString& panelElementName, const EarthView::World::Graphic::CTexturePtr& texturePtr);

				/// <summary>
				///设置PanelElement的边框纹理
				/// </summary>
				/// <param name="panelElementName">PanelElement名称</param>
				/// <param name="texturePtr">纹理指针</param>
				void setPanelElementBorderTexture(const EVString& panelElementName, const EarthView::World::Graphic::CTexturePtr& texturePtr);

				/// <summary>
				///计算CTextAreaOverlayElement区域字符串的长宽
				/// </summary>
				/// <param name="pTextArea">CTextAreaOverlayElement名称</param>
				/// <param name="width">返回字符串宽度</param>
				/// <param name="height">返回字符串高度</param>
				void calculateWidth(_in EarthView::World::Graphic::CTextAreaOverlayElement* pTextArea, _out Real& width, _out Real& height);

				/// <summary>
				///设置PanelElement是否可见
				/// </summary>
				/// <param name="panelElementName">PanelElement名称</param>
				/// <param name="isVisible">是否可见</param>
				void setPanelElementVisible(const EVString& panelElementName, ev_bool isVisible);

				/// <summary>
				///获取PanelElement是否可见
				/// </summary>
				/// <param name="panelElementName">PanelElement名称</param>
				/// <returns>是否可见</returns>	
				ev_bool getPanelElementVisible(const EVString& panelElementName);

				/// <summary>
				///设置TextAreaElement是否可见
				/// </summary>
				/// <param name="panelElementName">PanelElement名称</param>
				/// <param name="textAreaName">TextAreaElement名称</param>
				/// <param name="isVisible">是否可见</param>
				void setTextElementVisible(const EVString& panelElementName, const EVString& textAreaName, ev_bool isVisible);

				/// <summary>
				///获取TextAreaElement是否可见
				/// </summary>
				/// <param name="panelElementName">PanelElement名称</param>
				/// <param name="textAreaName">TextAreaElement名称</param>
				/// <returns>是否可见</returns>	
				ev_bool getTextElementVisible(const EVString& panelElementName, const EVString& textAreaName);

				EarthView::World::Spatial3D::Controls::CGlobeControl* getGlobeControl();

			private:

				bool isInBoundingBox(const int& x, const int& y);

				EarthView::World::Graphic::CTextAreaOverlayElement* getTextElement(const EVString& panelElementName,const EVString& textAreaName );

				EarthView::World::Graphic::CBorderPanelOverlayElement* getPanelElement(const EVString& panelElementName);

				void getChildPanelElement( EVString elementName, EarthView::World::Graphic::CBorderPanelOverlayElement* parentPanel,  ev_uint32& i);

				vector<EVString> mChildrenNames;
				EarthView::World::Spatial3D::Controls::CGlobeControl* mpGlobeControl;
				EarthView::World::Graphic::COverlay* mpOverlay;
				EarthView::World::Graphic::CBorderPanelOverlayElement* mpPanelElement; 
				EarthView::World::Graphic::CBorderPanelOverlayElement* mpPanelElementParent; 
				EarthView::World::Graphic::CTextAreaOverlayElement* mpTextElement;
				EVString mName;
				int mHeight;
				int mWidth;
				EarthView::World::Spatial::Math::CVector2  mPosition;
				EarthView::World::Spatial::Math::CVector2 mCloseOffset;
				EarthView::World::Spatial::Math::CVector2 mMinOffset;
				bool mVisible;
				EarthView::World::Core::StringVector mStringVector;
				bool  mIsSelected;
				bool  mIsSelectable;
				bool  mIsDraggable;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject* mpEventObject;
				EarthView::World::Graphic::CFontPtr mpFont;
			};
		}
	}
}

#endif
