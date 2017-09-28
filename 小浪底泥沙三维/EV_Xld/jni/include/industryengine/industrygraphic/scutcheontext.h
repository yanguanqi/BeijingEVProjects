#ifndef _SCUTCHEONTEXT_H_
#define _SCUTCHEONTEXT_H_

#include "industrygraphic_cfg.h"
#include "graphic/movableobject.h"
#include "graphic/renderable.h"
#include "graphic/texturemovabletext.h"
#include "graphic/camera.h"
#include "graphic/scenenode.h"
#include "graphic/font.h"
#include "geometry3d/vertex.h"
#include "graphic/camera.h"
#include "graphic/viewport.h"
#include "globecontrol/globecontrol.h"
#include "graphic/renderablefont.h"
#include "industryengine/industrygraphic/scutcheontexteventobject.h"
#include "graphic/material.h"

#include "core/threaddefines.h"

namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			class CTextLineMovable;
			class CTextFrameMovable;
			class CTextOverlayMovable;

			class EV_INDUSTRYGRAPHIC_DLL CScutcheonText : public EarthView::World::Core::CBaseObject
			{
				friend class CScutcheonFrameListener;
				friend class CTextFrameMovable;
				friend class CTextLineMovable;
				friend class CTextOverlayMovable;
				friend class CScutcheonTextHandler;

			public:

				///// <summary>
				///// 显示模式
				///// </summary>
				//enum DisplayMode
				//{
				//	FONT_3D,    /// “三维”模式: 像一个模型一样存在于场景之中
				//	STANDARD        /// 标准模式(默认/广告版模式):保持面向相机并保持字体像素大小
				//};

				enum ScutcheonTextHLayout
				{
					STHL_LEFT = 0,
					STHL_RIGHT = 1
				};

				enum ScutcheonTextVLayout
				{
					STVL_TOP = 0,
					STVL_BOTTOM = 1
				};

ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				CScutcheonText(EarthView::World::Core::CNameValuePairList* pList);

			public:
				/// <summary>
				/// 标牌对象构造函数(可以设置多个风格不同的字符串)
				/// </summary>
				/// <param name="ref_manager">场景管理器</param>
				/// <param name="name">唯一标识名称</param>
				CScutcheonText(const EVString& name);

				/// <summary>
				/// 析构函数
				/// </summary>
				~CScutcheonText();

				/// <summary>
				/// 获取名称
				/// </summary>
				/// <param name=""></param>
				const EVString& getName()const{return mName;}


				/// <summary>
				/// 绑定场景节点
				/// </summary>
				/// <param name="ref_node">场景节点</param>
				virtual void attachToNode(EarthView::World::Graphic::CSceneNode* ref_node, EarthView::World::Spatial3D::Controls::CGlobeControl* ref_globeControl);//EarthView::World::Graphic::CSceneManager* manager);

				/// <summary>
				/// 反挂接场景节点
				/// </summary>
				/// <returns>反挂接场景节点返回绑定的父节点，否则返回NULL</returns>
				virtual EarthView::World::Graphic::CNode* detachFromNode();

				/// <summary>
				/// 获取字体个数
				/// </summary>
				/// <returns>字体个数</returns>
				virtual ev_int32 getTextCount() const;

				/// <summary>
				/// 获取字体对象名称
				/// </summary>
				/// <returns>字体对象名称</returns>
				virtual EVString getTextMovableName(const ev_uint32& index) const;

				/// <summary>
				/// 添加显示内容
				/// </summary>
				/// <param name="caption">显示内容</param>
				/// <param name="fontName">字体类型</param>
				/// <param name="fontSize">字体大小</param>
				/// <param name="color">字体颜色</param>
				virtual void appendText(const EVString& caption, const EVString& fontName, const ev_uint32& fontSize, EarthView::World::Graphic::CColourValue color);
				virtual void appendText(const EVString& caption, const EVString& fontName, const ev_uint32& fontSize, EarthView::World::Graphic::CColourValue color, const ev_uint32& index);

				/// <summary>
				/// 删除显示内容
				/// </summary>
				/// <param name="index">索引</param>
				virtual void removeText(const ev_uint32& index);

				/// <summary>
				/// 取得字体的材质
				/// </summary>
				/// <param name="index">索引</param>
			    EarthView::World::Graphic::CMaterialPtrList getTextMaterial(const ev_uint32& index);

				/// <summary>
				/// 取得标牌连接线的材质
				/// </summary>
				/// <param name="index">索引</param>
				const EarthView::World::Graphic::CMaterialPtr& getTextLineMaterial();

				/// <summary>
				/// 取得标牌边框的材质
				/// </summary>
				/// <param name="index">索引</param>
				const EarthView::World::Graphic::CMaterialPtr& getTextFrameMaterial();

				/// <summary>
				/// 取得标牌背景的材质
				/// </summary>
				/// <param name="index">索引</param>
				const EarthView::World::Graphic::CMaterialPtr& getTextOverlayMaterial();

				/// <summary>
				/// 开启偏移
				/// </summary>
				/// <param name="enable"></param>
				/// <returns></returns>
				ev_void setProjOffsetEnable(_in ev_bool enable);
				/// <summary>
				/// 获取是否开启偏移
				/// </summary>
				/// <returns></returns>
				ev_bool getProjOffsetEnable();

				/// <summary>
				/// 获取标牌连接线长度
				/// </summary>
				/// <returns>连接线长度</returns>
				virtual EarthView::World::Spatial::Math::CVector3 getTextLineLength() const;

				/// <summary>
				/// 设置标牌连接线长度
				/// </summary>
				/// <param name="length">连接线长度</param>
				virtual void setTextLineLength(EarthView::World::Spatial::Math::CVector3 length);

				/// <summary>
				/// 获取标牌包围盒宽度
				/// </summary>
				/// <returns>包围盒宽度</returns>
				virtual ev_real32 getTextBoxWidth() const;

				/// <summary>
				/// 获取标牌包围盒高度
				/// </summary>
				/// <returns>包围盒高度</returns>
				virtual ev_real32 getTextBoxHeight() const;

				/// <summary>
				/// 创建标牌连接线
				/// </summary>
				/// <param name="lineColor">连接线颜色</param>
				/// <param name="length">连接线长度</param>
				/// <param name="materialName">材质名称</param>
				virtual void createTextLine(EarthView::World::Graphic::CColourValue lineColor, EarthView::World::Spatial::Math::CVector3 length, const EVString& materialName);

				/// <summary>
				/// 添加标牌连接线
				/// </summary>
				/// <param name="attachNode">连接线要挂接的节点</param>
				virtual void addTextLine(EarthView::World::Graphic::CNode* attachNode);

				/// <summary>
				/// 创建标牌边框
				/// </summary>
				/// <param name="frameColor">边框颜色</param>
				/// <param name="materialName">材质名称</param>
				virtual void createTextFrame(EarthView::World::Graphic::CColourValue frameColor, const EVString& materialName);

				/// <summary>
				/// 创建标牌纹理底图
				/// </summary>
				/// <param name="materialName">材质名称</param>
				virtual void createTextOverlay(const EVString& materialName);

				/// <summary>
				/// 更新字体内容
				/// </summary>
				/// <param name="caption">显示内容</param>
				/// <param name="index">索引</param>
				virtual void resetTextCaption(const EVString& caption, const ev_uint32& index);

				/// <summary>
				/// 获取字符串内容
				/// </summary>
				/// <param name="index">字符串索引</param>
				/// <returns>字符串内容</returns>
				virtual EVString getTextCaption(const ev_uint32& index) const;

				/// <summary>
				/// 更新字体类型
				/// </summary>
				/// <param name="fontName">字体类型</param>
				/// <param name="index">索引</param>
				virtual void resetFontName(const EVString& fontName, const ev_uint32& index);

				/// <summary>
				/// 更新全部字体类型
				/// </summary>
				/// <param name="fontName">字体类型</param>
				virtual void resetAllFontName(const EVString& fontName);

				/// <summary>
				/// 获取字体类型
				/// </summary>
				/// <param name="index">字符串索引</param>
				/// <returns>字体类型</returns>
				virtual EVString getFontName(const ev_uint32& index) const;

				/// <summary>
				/// 更新字体大小
				/// </summary>
				/// <param name="fontSize">字体大小</param>
				/// <param name="index">索引</param>
				virtual void resetFontSize(const ev_uint32& fontSize, const ev_uint32& index);

				/// <summary>
				/// 更新全部字体大小
				/// </summary>
				/// <param name="fontSize">字体大小</param>
				virtual void resetAllFontSize(const ev_uint32& fontSize);


				/// <summary>
				/// 设置标牌文字的对齐方式
				/// </summary>
				/// <param name="index">对齐方式</param>
				/// <returns> </returns>
				void setLayoutMode(ScutcheonTextHLayout hLayout,ScutcheonTextVLayout vLayout);




				/// <summary>
				/// 获取字体大小
				/// </summary>
				/// <param name="index">字符串索引</param>
				/// <returns>字体大小</returns>
				virtual ev_uint32 getFontSize(const ev_uint32& index) const;

				/// <summary>
				/// 更新字体颜色
				/// </summary>
				/// <param name="color">字体颜色</param>
				/// <param name="index">索引</param>
				virtual void resetFontColor(EarthView::World::Graphic::CColourValue color, const ev_uint32& index);

				/// <summary>
				/// 更新全部字体颜色
				/// </summary>
				/// <param name="color">字体颜色</param>
				virtual void resetAllFontColor(EarthView::World::Graphic::CColourValue color);

				/// <summary>
				/// 获取字体颜色
				/// </summary>
				/// <param name="index">字符串索引</param>
				/// <returns>字体颜色</returns>
				virtual EarthView::World::Graphic::CColourValue getFontColor(const ev_uint32& index) const;

				/// <summary>
				/// 设置字体是否加粗
				/// </summary>
				/// <param name="index">索引</param>
				/// <param name="isBold">字体是否加粗</param>
				virtual void setFontBold(const ev_uint32& index, const ev_bool& isBold);

				/// <summary>
				/// 设置全部字体是否加粗
				/// </summary>
				/// <param name="isBold">全部字体是否加粗</param>
				virtual void setAllFontBold(const ev_bool& isBold);

				/// <summary>
				/// 获取字体是否加粗
				/// </summary>
				/// <param name="index">字符串索引</param>
				/// <returns>字体是否加粗</returns>
				virtual ev_bool getFontBold(const ev_uint32& index) const;

				/// <summary>
				/// 设置字体是否倾斜
				/// </summary>
				/// <param name="index">索引</param>
				/// <param name="isItalic">字体是否倾斜</param>
				virtual void setFontItalic(const ev_uint32& index, const ev_bool& isItalic);

				/// <summary>
				/// 设置全部字体是否倾斜
				/// </summary>
				/// <param name="isItalic">全部字体是否倾斜</param>
				virtual void setAllFontItalic(const ev_bool& isItalic);

				/// <summary>
				/// 获取字体是否倾斜
				/// </summary>
				/// <param name="index">字符串索引</param>
				/// <returns>字体是否倾斜</returns>
				virtual ev_bool getFontItalic(const ev_uint32& index) const;

				/// <summary>
				/// 设置字体是否启用阴影
				/// </summary>
				/// <param name="index">索引</param>
				/// <param name="hasShadow">字体是否启用阴影</param>
				virtual void setFontHasShadow(const ev_uint32& index, const ev_bool& hasShadow);

				/// <summary>
				/// 设置全部字体是否启用阴影
				/// </summary>
				/// <param name="hasShadow">全部字体是否启用阴影</param>
				virtual void setAllFontHasShadow(const ev_bool& hasShadow);

				/// <summary>
				/// 获取字体是否启用阴影
				/// </summary>
				/// <param name="index">字符串索引</param>
				/// <returns>是否启用阴影</returns>
				virtual ev_bool getFontHasShadow(const ev_uint32& index) const;

				/// <summary>
				/// 设置边框颜色
				/// </summary>
				/// <param name="color">颜色</param>
				virtual void setTextFrameColor(EarthView::World::Graphic::CColourValue color);

				/// <summary>
				/// 获取边框颜色
				/// </summary>
				/// <returns>边框颜色</returns>
				virtual EarthView::World::Graphic::CColourValue getTextFrameColor() const;

				/// <summary>
				/// 设置连接线颜色
				/// </summary>
				/// <param name="color">连接线颜色</param>
				virtual void setTextLineColor(EarthView::World::Graphic::CColourValue color);

				/// <summary>
				/// 获取连接线颜色
				/// </summary>
				/// <returns>连接线颜色</returns>
				virtual EarthView::World::Graphic::CColourValue getTextLineColor() const;

				/// <summary>
				/// 设置连接线是否可见
				/// </summary>
				/// <param name="isVisible">连接线是否可见</param>
				void setTextLineVisible(const ev_bool& isVisible);

				/// <summary>
				/// 获取连接线是否可见
				/// </summary>
				/// <returns>连接线是否可见</returns>
				ev_bool getTextLineVisible() const;

				/// <summary>
				/// 设置边框是否可见
				/// </summary>
				/// <param name="isVisible">边框是否可见</param>
				void setTextFrameVisible(const ev_bool& isVisible);

				/// <summary>
				/// 获取边框是否可见
				/// </summary>
				/// <returns>边框是否可见</returns>
				ev_bool getTextFrameVisible() const;

				/// <summary>
				/// 设置底图是否可见
				/// </summary>
				/// <param name="isVisible">底图是否可见</param>
				void setTextOverlayVisible(const ev_bool& isVisible);

				/// <summary>
				/// 获取底图是否可见
				/// </summary>
				/// <returns>底图是否可见</returns>
				ev_bool getTextOverlayVisible() const;

				/// <summary>
				/// 更新顶点屏幕坐标
				/// </summary>
				virtual void updateScreenPositions();

				/// <summary>
				/// 设置标牌是否可见
				/// </summary>
				/// <param name="isVisible">标牌是否可见</param>
				void setVisible(const ev_bool& isVisible);

				/// <summary>
				/// 获取标牌是否可见
				/// </summary>
				/// <returns>标牌是否可见</returns>
				ev_bool getVisible() const;

				/// <summary>
				/// 获取标牌是否已经挂接父节点
				/// </summary>
				/// <returns>否已经挂接父节点</returns>
				ev_bool getIsAttached() const;

				/// <summary>
				/// 设置该对象可渲染的距离上限
				/// </summary>
				/// <param name="dist">默认为0</param>
				virtual void setRenderingMaxDistance(const Real& dist);

				/// <summary>
				/// 获取该对象可渲染的距离下限
				/// </summary>
				/// <returns>对象可渲染的距离下限</returns>
				virtual Real getRenderingMaxDistance() const;

				/// <summary>
				/// 设置该对象可渲染的距离下限
				/// </summary>
				/// <param name="dist">默认为0</param>
				virtual void setRenderingMinDistance(const Real& dist);

				/// <summary>
				/// 获取该对象可渲染的距离上限
				/// </summary>
				/// <returns>对象可渲染的距离上限</returns>
				virtual Real getRenderingMinDistance() const;

				/// <summary>
				/// 设置是否高亮显示
				/// </summary>
				/// <param name="value">是否高亮显示</param>
				void highLight(const ev_bool& value);

				/// <summary>
				/// 设置标牌底图材质名称
				/// </summary>
				/// <param name="name">标牌底图材质名称</param>
				void setTextOverlayMaterialName(const EVString& name);

				/// <summary>
				/// 设置标牌是否被选中
				/// </summary>
				/// <param name="value">标牌是否被选中</param>
				void setSelected(const ev_bool& value);

				/// <summary>
				/// 获取标牌是否被选中
				/// </summary>
				/// <returns>标牌是否被选中</returns>
				ev_bool getSelected() const;

				/// <summary>
				/// 设置标牌是否可被选中
				/// </summary>
				/// <param name="value">标牌是否可被选中</param>
				void setSelectable(const ev_bool& value);

				/// <summary>
				/// 获取标牌是否可被选中
				/// </summary>
				/// <returns>标牌是否可被选中</returns>
				ev_bool getSelectable() const;

				/// <summary>
				/// 设置标牌是否可被拖动
				/// </summary>
				/// <param name="value">标牌是否可被拖动</param>
				void setDraggable(const ev_bool& value);

				/// <summary>
				/// 获取标牌是否可被拖动
				/// </summary>
				/// <returns>标牌是否可被拖动</returns>
				ev_bool getDraggable() const;

				/// <summary>
				/// 设置响应事件对象
				/// </summary>
				/// <param name="value">响应事件对象</param>
				void setEventObject(EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject* object);

				/// <summary>
				/// 获取响应事件对象
				/// </summary>
				/// <returns>响应事件对象</returns>
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject* getEventObject() const;

				/// <summary>
				/// 设置标牌布局方式
				/// </summary>
				/// <param name="hLayout">水平布局方式</param>
				/// <param name="vLayout">垂直布局方式</param>
				/// <returns>布局是否改变</returns>
				ev_bool setScutcheonTextLayout(EarthView::IndustryEngine::IndustryGraphic::CScutcheonText::ScutcheonTextHLayout hLayout, EarthView::IndustryEngine::IndustryGraphic::CScutcheonText::ScutcheonTextVLayout vLayout); 

				/// <summary>
				/// 获取标牌水平布局方式
				/// </summary>
				/// <returns>水平布局方式</returns>
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonText::ScutcheonTextHLayout getScutcheonTextHLayout() const
				{
					return this->mHLayout;
				}

				/// <summary>
				/// 获取标牌垂直布局方式
				/// </summary>
				/// <returns>垂直布局方式</returns>
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonText::ScutcheonTextVLayout getScutcheonTextVLayout() const
				{
					return this->mVLayout;
				}

				/// <summary>
				/// 设置标牌边框距离
				/// </summary>
				/// <param name="left">左边距</param>
				/// <param name="right">右边距</param>
				/// <param name="top">上边距</param>
				/// <param name="bottom">下边距</param>
				void setBorderDistance(const Real& left, const Real& right, const Real& top, const Real& bottom);

				/// <summary>
				/// 获取标牌边框距离
				/// </summary>
				/// <param name="left">左边距</param>
				/// <param name="right">右边距</param>
				/// <param name="top">上边距</param>
				/// <param name="bottom">下边距</param>
				void getBorderDistance(_out Real& left, _out Real& right, _out Real& top, _out Real& bottom) const;

				/// <summary>
				/// 设置渲染队列组信息
				/// </summary>
				/// <param name="queueID">队列ID号</param>
				/// <returns></returns>
				void setRenderQueueGroup(ev_uint8 queueID);
				/// <summary>
				/// 获取该实体的渲染队列组
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_uint8 getRenderQueueGroup() const;
			public:
				/// <summary>
				/// 标牌顶点屏幕坐标
				/// </summary>
				EarthView::World::Geometry3D::CVertexVector ScreenPositions;

				/// <summary>
				/// 是否被遮蔽
				/// </summary>
				ev_bool IsShaded;

				/// <summary>
				/// 标牌起始点与当前相机间距离
				/// </summary>
				ev_real64 CameraDistance;

				/// <summary>
				/// 标牌顶点世界坐标
				/// </summary>
				EarthView::World::Geometry3D::CVertexVector WorldPositions;

				/// <summary>
				/// 强制标牌出现
				/// </summary>
				/// <param name="enable"></param>
				/// <returns></returns>
				ev_void forceCameraVisible(_in ev_bool enable);

				/// <summary>
				/// 开启偏移
				/// </summary>
				/// <param name="enable"></param>
				/// <returns></returns>
				ev_bool isForceCameraVisible();

				/// <summary>
				/// 是否开启深度测度
				/// </summary>
				/// <param name="enable"></param>
				/// <returns></returns>
				ev_void setDepthCheckEnabled(_in ev_bool enable);

				/// <summary>
				/// 获取是否开启深度测度
				/// </summary>
				/// <returns></returns>
				ev_bool getDepthCheckEnabled();

				///// <summary>
				///// 设置显示模式。
				///// </summary>
				///// <param name="displayMode">显示模式</param>
				///// <returns></returns>
				//ev_void setDisplayMode(DisplayMode displayMode);

				///// <summary>
				///// 获取显示模式。
				///// </summary>
				///// <returns></returns>
				//CScutcheonText::DisplayMode getDisplayMode();

			protected:
				void updateBoundingBox();

				void updateWorldPositions();

				/// <summary>
				/// 设置相机是否可见标牌
				/// </summary>
				/// <param name="isCameraVisible">相机是否可见标牌</param>
				void setCameraVisible(const ev_bool& isCameraVisible);

				/// <summary>
				/// 获取字体渲染对象
				/// </summary>
				/// <returns>字体渲染对象</returns>
				const EarthView::World::Graphic::CRenderableFont* getTextRenderable() const;

				/// <summary>
				/// 标牌状态更新
				/// </summary>
				void updateState();

				/// <summary>
				/// 更新矩阵
				/// </summary>
				void updateMatrix();
			protected:
				EVString mName;

				EarthView::World::Graphic::CSceneNode* ref_mpParentNode;

				EarthView::World::Graphic::CSceneNode* mpLocalNode;

				EarthView::IndustryEngine::IndustryGraphic::CTextLineMovable* mpTextLineMovable;

				ev_vector<EarthView::IndustryEngine::IndustryGraphic::CTextLineMovable*> mpTextLineMovableVector;

				ev_vector<EarthView::World::Graphic::CNode*> mNodeVector;

				EV_MUTEX(mTextLineMovalbeMutex)

				ev_bool mAddOnLineAdded;

				EarthView::IndustryEngine::IndustryGraphic::CTextFrameMovable* mpTextFrameMovable;

				EarthView::IndustryEngine::IndustryGraphic::CTextOverlayMovable* mpTextOverlayMovable;

				vector<EarthView::World::Graphic::CTextureMovableText*> mpTextMovableList;

				vector<EarthView::World::Graphic::CTextureTextStyle*> mpTextStyleList;

				vector<EVString> mCaptionList;

				vector<EVString> mNeedUpdateCaptionList;

				vector<EVString> mFontName;

				vector<EVString> mNeedUpdateFontName;

				vector<EarthView::World::Graphic::CColourValue> mFontColor;

				vector<EarthView::World::Graphic::CColourValue> mNeedUpdateFontColor;

				vector<ev_uint32> mFontSize;

				vector<ev_uint32> mNeedUpdateFontSize;

				vector<ev_bool> mFontBold;

				vector<ev_bool> mNeedUpdateFontBold;

				vector<ev_bool> mFontItalic;

				vector<ev_bool> mNeedUpdateFontItalic;

				vector<ev_bool> mFontHasShadow;

				vector<ev_bool> mNeedUpdateFontHasShadow;

				EarthView::World::Spatial::Math::CVector3 mTextLineLength;

				ev_real32 mTextFrameWidth; 

				ev_real32 mTextFrameHeight;

				ev_bool mIsVisible;

				ev_bool mIsLineVisible;

				ev_bool mIsFrameVisible;

				ev_bool mIsOverlayVisible;

				ev_bool mIsCameraVisible;

				ev_bool mIsAttached;

				ev_bool mIsDetached;

				vector<EarthView::World::Spatial::Math::CVector3> mPoints;

				EarthView::World::Graphic::CViewport* ref_mpViewport;

				ev_real64 mRenderingMinDistance;

				ev_real64 mRenderingMaxDistance;

				ev_bool mIsSelectable;

				ev_bool mIsSelected;

				ev_bool mIsDraggable;

				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject* mpEventObject;

				ev_bool mTextNeedAdd;

				ev_bool mFrameNeedAdd;

				ev_bool mLineNeedAdd;

				ev_bool mOverlayNeedAdd;

				ev_bool mLineVisibleNeedUpdate;

				ev_bool mFrameVisibleNeedUpdate;

				ev_bool mOverlayVisibleNeedUpdate;

				ev_bool mOverlayMatNeedUpdate;

				ev_bool mLineLengthNeedUpdate;

				ev_bool mLineColorNeedUpdate;

				ev_bool mFrameColorNeedUpdate;

				EarthView::World::Graphic::CColourValue mLineColor;

				EarthView::World::Graphic::CColourValue mFrameColor;

				EVString mOverlayMaterialName;

				EarthView::IndustryEngine::IndustryGraphic::CScutcheonText::ScutcheonTextHLayout mHLayout;

				EarthView::IndustryEngine::IndustryGraphic::CScutcheonText::ScutcheonTextVLayout mVLayout;

				EarthView::World::Spatial::Math::CMatrix4 mMatrix;

				EarthView::World::Graphic::CCamera* ref_mpCamera;

				ev_real64 mLeftDistance;

				ev_real64 mRightDistance;

				ev_real64 mTopDistance;

				ev_real64 mBottomDistance;

				EarthView::World::Spatial::Math::CMatrix4 mPointMatrix;

				EarthView::World::Spatial3D::Controls::CGlobeControl* ref_mpGlobeControl;

				ev_bool             mForceEnableProjOffset;

				ev_bool             mForceCameraVisibleEnable;

				ev_bool             mNeedUpdateBoundingBox;

				ev_uint8            mQueueID;

				EV_MUTEX(mMutex)
            ev_private:
				ev_bool             mDepthCheckEnabled;

				//DisplayMode mDisplayMode;
			};

			class EV_INDUSTRYGRAPHIC_DLL CTextLineMovable : public EarthView::World::Graphic::CMovableObject
			{
			public:
				/// <summary>
				/// 连接线渲染对象
				/// </summary>
				class EV_INDUSTRYGRAPHIC_DLL CTextLineRenderable :  public EarthView::World::Graphic::CRenderable
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CTextLineRenderable(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">名称</param>
					/// <param name="ref_parent">父对象</param>
					CTextLineRenderable(const EVString& name, EarthView::IndustryEngine::IndustryGraphic::CTextLineMovable* ref_parent);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CTextLineRenderable();

					/// <summary>
					/// 获得渲染对象的转换矩阵
					/// </summary>
					/// <param name="xform"></param>
					virtual void getWorldTransforms(EarthView::World::Spatial::Math::CMatrix4 *xform) const;

					/// <summary>
					/// 渲染开始时向外通知的事件
					/// </summary>
					/// <param name="sm">渲染场景</param>
					/// <param name="rsys">渲染系统</param>
					/// <returns>如果自动执行渲染过程返回true,手动执行返回false</returns>
					virtual ev_bool preRender(EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys);

					/// <summary>
					/// 渲染完成时向外通知的事件
					/// </summary>
					/// <param name="sm">渲染场景</param>
					/// <param name="rsys">渲染系统</param>
					virtual void postRender(EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys);

					/// <summary>
					/// 设置材质
					/// </summary>
					/// <param name="matName">材质名称</param>
					void setMaterial(const EVString& matName);

					/// <summary>
					/// 获取材质
					/// </summary>
					/// <param name=""></param>
					/// <returns>材质</returns>
					virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const;

					/// <summary>
					/// 获取渲染参数
					/// </summary>
					/// <param name=""></param>
					/// <returns>渲染参数</returns>
					virtual EarthView::World::Graphic::CRenderOperation* getRenderOperation();

					/// <summary>
					/// 获取渲染参数
					/// </summary>
					/// <param name="op">渲染参数</param>
					void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);

					/// <summary>
					/// 获取光照
					/// </summary>
					/// <param name=""></param>
					/// <returns>光照列表</returns>
					const EarthView::World::Graphic::LightList & getLights(void) const;

					/// <summary>
					/// 获取观察深度
					/// </summary>
					/// <param name="cam">相机</param>
					/// <returns>观察深度</returns>
					virtual Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera* cam) const;

				protected:
					/// <summary>
					/// 名称
					/// </summary>
					EarthView::World::Core::ev_string mName;

					/// <summary>
					/// 投影矩阵
					/// </summary>
					EarthView::World::Spatial::Math::CMatrix4 mProjM;

					/// <summary>
					/// 材质名称
					/// </summary>
					EVString mMaterialName;

					/// <summary>
					/// 材质组名
					/// </summary>
					EVString mGroupName;

					/// <summary>
					/// 材质
					/// </summary>
					mutable EarthView::World::Graphic::CMaterialPtr mMaterial;

					/// <summary>
					/// 渲染参数
					/// </summary>
					EarthView::World::Graphic::CRenderOperation mRenderOp;

					/// <summary>
					/// 父对象
					/// </summary>
					EarthView::IndustryEngine::IndustryGraphic::CTextLineMovable* ref_mpParent;
				};
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				CTextLineMovable(EarthView::World::Core::CNameValuePairList* pList);

			public:
				/// <summary>
				/// 连接线对象
				/// </summary>
				/// <param name="name">名称</param>
				/// <param name="ref_scutcheonText">标牌对象</param>
				/// <param name="lineColor">连接线颜色</param>
				CTextLineMovable(const EVString& name, EarthView::IndustryEngine::IndustryGraphic::CScutcheonText* ref_scutcheonText,  EarthView::World::Graphic::CColourValue lineColor);

				/// <summary>
				/// 析构函数
				/// </summary>
				~CTextLineMovable();

				/// <summary>
				/// 通报当前摄像机
				/// </summary>
				/// <param name="cam">当前摄像机</param>
				virtual void _notifyCurrentCamera(EarthView::World::Graphic::CCamera* cam);

				/// <summary>
				/// 获取包围盒
				/// </summary>
				/// <param name=""></param>
				/// <returns>包围盒</returns>
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getBoundingBox(void) const
				{
					return this->mBox;
				};

				/// <summary>
				/// 获取包围盒半径
				/// </summary>
				/// <param name=""></param>
				/// <returns>包围盒半径</returns>
				Real getBoundingRadius() const
				{
					return mRadius;
				};

				/// <summary>
				/// 更新渲染队列
				/// </summary>
				/// <param name="queue">渲染队列</param>
				virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue* queue);

				/// <summary>
				/// 访问渲染对象
				/// </summary>
				/// <param name="visitor">访问者</param>
				/// <param name="debugRenderables">是否调试可渲染的物体</param>
				virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor* visitor, ev_bool debugRenderables);

				/// <summary>
				/// 访问渲染对象
				/// </summary>
				/// <param name="visitor">访问者</param>
				virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor* visitor);

				/// <summary>
				/// 获取对象类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>可移动的类型</returns>
				virtual EVString getMovableType() const;

				/// <summary>
				/// 设置连接线材质名称
				/// </summary>
				/// <param name="matName">材质名称</param>
				void setLineMaterial(const EVString& matName) const;

				/// <summary>
				/// 更新连接线颜色
				/// </summary>
				virtual void updateTextLineColor(const EarthView::World::Graphic::CColourValue& color);

				/// <summary>
				/// 获取材质
				/// </summary>
				/// <param name=""></param>
				/// <returns>材质</returns>
				virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const;

				/// <summary>
				/// 开启偏移
				/// </summary>
				/// <param name="enable"></param>
				/// <returns></returns>
				ev_void setProjOffsetEnable(_in ev_bool enable);
				/// <summary>
				/// 获取是否开启偏移
				/// </summary>
				/// <returns></returns>
				ev_bool getProjOffsetEnable();

				ev_void setCalculateWorldMatrix(ev_bool enable);

				ev_bool getCalculateWorldMatrix();

				//EarthView::World::Spatial::Math::CMatrix4            mWorldMatrix;

				EarthView::World::Graphic::CNode* mAttachNode;

			protected:
				/// <summary>
				/// 创建连接线缓冲
				/// </summary>
				void createLineBuffer();

				/// <summary>
				/// 创建连接线数据
				/// </summary>
				void createLineData();

			protected:
				/// <summary>
				/// 标牌对象
				/// </summary>
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonText* ref_mpScutcheonText;

				/// <summary>
				/// 连接线颜色
				/// </summary>
				EarthView::World::Graphic::CColourValue mLineColor;

				/// <summary>
				/// 连接线渲染对象
				/// </summary>
				EarthView::IndustryEngine::IndustryGraphic::CTextLineMovable::CTextLineRenderable* mpTextLineRenderable;

				/// <summary>
				/// 连接线顶点
				/// </summary>
				vector<EarthView::World::Spatial::Math::CVector3> m3DLinePoints;

				/// <summary>
				/// 连接线索引数组
				/// </summary>
				ev_int16* mpLineIndex;

				/// <summary>
				/// 顶点包围盒
				/// </summary>
				EarthView::World::Spatial::Math::CAxisAlignedBox mBox;

				/// <summary>
				/// 顶点包围盒半径
				/// </summary>
				Real mRadius;

				/// <summary>
				/// 投影矩阵是否改变
				/// </summary>
				ev_bool mPrjMatrixChanged;

				/// <summary>
				/// 当前相机
				/// </summary>
				EarthView::World::Graphic::CCamera *mCurrentCamera;

				ev_bool             mForceEnableProjOffset;

				ev_bool             mCalculateWorldMatrix;

			};

			class EV_INDUSTRYGRAPHIC_DLL CTextFrameMovable : public EarthView::World::Graphic::CMovableObject
			{
			public:
				class EV_INDUSTRYGRAPHIC_DLL CTextFrameRenderable : public EarthView::World::Graphic::CRenderable
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CTextFrameRenderable(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">名称</param>
					/// <param name="ref_parent">父对象</param>
					CTextFrameRenderable(const EVString& name, EarthView::IndustryEngine::IndustryGraphic::CTextFrameMovable* ref_parent);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CTextFrameRenderable();

					/// <summary>
					/// 获得渲染对象的转换矩阵
					/// </summary>
					/// <param name="xform"></param>
					virtual void getWorldTransforms(EarthView::World::Spatial::Math::CMatrix4 *xform) const;

					/// <summary>
					/// 渲染开始时向外通知的事件
					/// </summary>
					/// <param name="sm">渲染场景</param>
					/// <param name="rsys">渲染系统</param>
					/// <returns>如果自动执行渲染过程返回true,手动执行返回false</returns>
					virtual ev_bool preRender(EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys);

					/// <summary>
					/// 渲染完成时向外通知的事件
					/// </summary>
					/// <param name="sm">渲染场景</param>
					/// <param name="rsys">渲染系统</param>
					virtual void postRender(EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys);

					/// <summary>
					/// 设置材质
					/// </summary>
					/// <param name="matName">材质名称</param>
					void setMaterial(const EVString& matName);

					/// <summary>
					/// 获取材质
					/// </summary>
					/// <param name=""></param>
					/// <returns>材质</returns>
					virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const;

					/// <summary>
					/// 获取渲染参数
					/// </summary>
					/// <param name=""></param>
					/// <returns>渲染参数</returns>
					virtual EarthView::World::Graphic::CRenderOperation* getRenderOperation();

					/// <summary>
					/// 获取渲染参数
					/// </summary>
					/// <param name="op">渲染参数</param>
					void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);

					/// <summary>
					/// 获取光照
					/// </summary>
					/// <param name=""></param>
					/// <returns>光照列表</returns>
					const EarthView::World::Graphic::LightList & getLights(void) const;

					/// <summary>
					/// 获取观察深度
					/// </summary>
					/// <param name="cam">相机</param>
					/// <returns>观察深度</returns>
					virtual Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera* cam) const;

				protected:
					/// <summary>
					/// 名称
					/// </summary>
					EarthView::World::Core::ev_string mName;

					/// <summary>
					/// 投影矩阵
					/// </summary>
					EarthView::World::Spatial::Math::CMatrix4 mProjM;

					/// <summary>
					/// 材质名称
					/// </summary>
					EVString mMaterialName;

					/// <summary>
					/// 材质组名
					/// </summary>
					EVString mGroupName;

					/// <summary>
					/// 材质
					/// </summary>
					mutable EarthView::World::Graphic::CMaterialPtr mMaterial;

					/// <summary>
					/// 渲染参数
					/// </summary>
					EarthView::World::Graphic::CRenderOperation mRenderOp;

					/// <summary>
					/// 父对象
					/// </summary>
					EarthView::IndustryEngine::IndustryGraphic::CTextFrameMovable* ref_mpParent;
				};
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				CTextFrameMovable(EarthView::World::Core::CNameValuePairList* pList);

			public:
				/// <summary>
				/// 连接线对象
				/// </summary>
				/// <param name="name">名称</param>
				/// <param name="ref_scutcheonText">标牌对象</param>
				/// <param name="lineColor">连接线颜色</param>
				CTextFrameMovable(const EVString& name, EarthView::IndustryEngine::IndustryGraphic::CScutcheonText* ref_scutcheonText,  EarthView::World::Graphic::CColourValue frameColor);

				/// <summary>
				/// 析构函数
				/// </summary>
				~CTextFrameMovable();

				/// <summary>
				/// 通报当前摄像机
				/// </summary>
				/// <param name="cam">当前摄像机</param>
				virtual void _notifyCurrentCamera(EarthView::World::Graphic::CCamera* cam);

				/// <summary>
				/// 获取包围盒
				/// </summary>
				/// <param name=""></param>
				/// <returns>包围盒</returns>
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getBoundingBox(void) const
				{
					return this->mBox;
				};

				/// <summary>
				/// 获取包围盒半径
				/// </summary>
				/// <param name=""></param>
				/// <returns>包围盒半径</returns>
				Real getBoundingRadius() const
				{
					return mRadius;
				};

				/// <summary>
				/// 更新渲染队列
				/// </summary>
				/// <param name="queue">渲染队列</param>
				virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue* queue);

				/// <summary>
				/// 访问渲染对象
				/// </summary>
				/// <param name="visitor">访问者</param>
				/// <param name="debugRenderables">是否调试可渲染的物体</param>
				virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor* visitor, ev_bool debugRenderables);

				/// <summary>
				/// 访问渲染对象
				/// </summary>
				/// <param name="visitor">访问者</param>
				virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor* visitor);

				/// <summary>
				/// 获取对象类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>可移动的类型</returns>
				virtual EVString getMovableType() const;

				/// <summary>
				/// 设置边框材质名称
				/// </summary>
				/// <param name=""></param>
				/// <returns>材质名称</returns>
				void setFrameMaterial(const EVString& matName) const;

				/// <summary>
				/// 更新边框颜色
				/// </summary>
				virtual void updateTextFrameColor(const EarthView::World::Graphic::CColourValue& color);

				/// <summary>
				/// 获取材质
				/// </summary>
				/// <param name=""></param>
				/// <returns>材质</returns>
				virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const;

				/// <summary>
				/// 开启偏移
				/// </summary>
				/// <param name="enable"></param>
				/// <returns></returns>
				ev_void setProjOffsetEnable(_in ev_bool enable);
				/// <summary>
				/// 获取是否开启偏移
				/// </summary>
				/// <returns></returns>
				ev_bool getProjOffsetEnable();

			protected:
				/// <summary>
				/// 创建边框缓冲
				/// </summary>
				void createFrameBuffer();

				/// <summary>
				/// 创建顶点数据
				/// </summary>
				void createFrameData();

			protected:
				/// <summary>
				/// 标牌对象
				/// </summary>
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonText* ref_mpScutcheonText;

				/// <summary>
				/// 边框颜色
				/// </summary>
				EarthView::World::Graphic::CColourValue mFrameColor;

				/// <summary>
				/// 边框渲染对象
				/// </summary>
				EarthView::IndustryEngine::IndustryGraphic::CTextFrameMovable::CTextFrameRenderable* mpTextFrameRenderable;

				/// <summary>
				/// 边框顶点
				/// </summary>
				vector<EarthView::World::Spatial::Math::CVector3> mPoints;

				/// <summary>
				/// 边框索引数组
				/// </summary>
				ev_int16* mpFrameIndex;

				/// <summary>
				/// 顶点包围盒
				/// </summary>
				EarthView::World::Spatial::Math::CAxisAlignedBox mBox;

				/// <summary>
				/// 顶点包围盒半径
				/// </summary>
				Real mRadius;

				/// <summary>
				/// 投影矩阵是否改变
				/// </summary>
				ev_bool mPrjMatrixChanged;

				/// <summary>
				/// 当前相机
				/// </summary>
				EarthView::World::Graphic::CCamera *mCurrentCamera;

				ev_bool             mForceEnableProjOffset;
			};

			class EV_INDUSTRYGRAPHIC_DLL CTextOverlayMovable: public EarthView::World::Graphic::CMovableObject
			{
			public:
				class EV_INDUSTRYGRAPHIC_DLL CTextOverlayRenderable : public EarthView::World::Graphic::CRenderable
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CTextOverlayRenderable(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">名称</param>
					/// <param name="ref_parent">父对象</param>
					CTextOverlayRenderable(const EVString& name, EarthView::IndustryEngine::IndustryGraphic::CTextOverlayMovable* ref_parent);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CTextOverlayRenderable();

					/// <summary>
					/// 获得渲染对象的转换矩阵
					/// </summary>
					/// <param name="xform"></param>
					virtual void getWorldTransforms(EarthView::World::Spatial::Math::CMatrix4 *xform) const;

					/// <summary>
					/// 渲染开始时向外通知的事件
					/// </summary>
					/// <param name="sm">渲染场景</param>
					/// <param name="rsys">渲染系统</param>
					/// <returns>如果自动执行渲染过程返回true,手动执行返回false</returns>
					virtual ev_bool preRender(EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys);

					/// <summary>
					/// 渲染完成时向外通知的事件
					/// </summary>
					/// <param name="sm">渲染场景</param>
					/// <param name="rsys">渲染系统</param>
					virtual void postRender(EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys);

					/// <summary>
					/// 设置材质
					/// </summary>
					/// <param name="matName">材质名称</param>
					void setMaterial(const EVString& matName);

					/// <summary>
					/// 获取材质
					/// </summary>
					/// <param name=""></param>
					/// <returns>材质</returns>
					virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const;

					/// <summary>
					/// 获取渲染参数
					/// </summary>
					/// <param name=""></param>
					/// <returns>渲染参数</returns>
					virtual EarthView::World::Graphic::CRenderOperation* getRenderOperation();

					/// <summary>
					/// 获取渲染参数
					/// </summary>
					/// <param name="op">渲染参数</param>
					void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);

					/// <summary>
					/// 获取光照
					/// </summary>
					/// <param name=""></param>
					/// <returns>光照列表</returns>
					const EarthView::World::Graphic::LightList & getLights(void) const;

					/// <summary>
					/// 获取观察深度
					/// </summary>
					/// <param name="cam">相机</param>
					/// <returns>观察深度</returns>
					virtual Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera* cam) const;

				protected:
					/// <summary>
					/// 名称
					/// </summary>
					EarthView::World::Core::ev_string mName;

					/// <summary>
					/// 投影矩阵
					/// </summary>
					EarthView::World::Spatial::Math::CMatrix4 mProjM;

					/// <summary>
					/// 材质名称
					/// </summary>
					EVString mMaterialName;

					/// <summary>
					/// 材质组名
					/// </summary>
					EVString mGroupName;

					/// <summary>
					/// 材质
					/// </summary>
					mutable EarthView::World::Graphic::CMaterialPtr mMaterial;

					/// <summary>
					/// 渲染参数
					/// </summary>
					EarthView::World::Graphic::CRenderOperation mRenderOp;

					/// <summary>
					/// 父对象
					/// </summary>
					EarthView::IndustryEngine::IndustryGraphic::CTextOverlayMovable* ref_mpParent;
				};
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				CTextOverlayMovable(EarthView::World::Core::CNameValuePairList* pList);

			public:
				/// <summary>
				/// 连接线对象
				/// </summary>
				/// <param name="name">名称</param>
				/// <param name="ref_scutcheonText">标牌对象</param>
				/// <param name="lineColor">连接线颜色</param>
				CTextOverlayMovable(const EVString& name, EarthView::IndustryEngine::IndustryGraphic::CScutcheonText* ref_scutcheonText);

				/// <summary>
				/// 析构函数
				/// </summary>
				~CTextOverlayMovable();

				/// <summary>
				/// 通报当前摄像机
				/// </summary>
				/// <param name="cam">当前摄像机</param>
				virtual void _notifyCurrentCamera(EarthView::World::Graphic::CCamera* cam);

				/// <summary>
				/// 获取包围盒
				/// </summary>
				/// <param name=""></param>
				/// <returns>包围盒</returns>
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getBoundingBox(void) const
				{
					return this->mBox;
				};

				/// <summary>
				/// 获取包围盒半径
				/// </summary>
				/// <param name=""></param>
				/// <returns>包围盒半径</returns>
				Real getBoundingRadius() const
				{
					return mRadius;
				};

				/// <summary>
				/// 更新渲染队列
				/// </summary>
				/// <param name="queue">渲染队列</param>
				virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue* queue);

				/// <summary>
				/// 访问渲染对象
				/// </summary>
				/// <param name="visitor">访问者</param>
				/// <param name="debugRenderables">是否调试可渲染的物体</param>
				virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor* visitor, ev_bool debugRenderables);

				/// <summary>
				/// 访问渲染对象
				/// </summary>
				/// <param name="visitor">访问者</param>
				virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor* visitor);

				/// <summary>
				/// 获取对象类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>可移动的类型</returns>
				virtual EVString getMovableType() const;

				/// <summary>
				/// 设置底面材质名称
				/// </summary>
				/// <param name=""></param>
				/// <returns>材质名称</returns>
				void setOverlayMaterial(const EVString& matName) const;

				/// <summary>
				/// 获取材质
				/// </summary>
				/// <param name=""></param>
				/// <returns>材质</returns>
				virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const;

				/// <summary>
				/// 开启偏移
				/// </summary>
				/// <param name="enable"></param>
				/// <returns></returns>
				ev_void setProjOffsetEnable(_in ev_bool enable);
				/// <summary>
				/// 获取是否开启偏移
				/// </summary>
				/// <returns></returns>
				ev_bool getProjOffsetEnable();

			protected:
				/// <summary>
				/// 创建底面纹理缓冲
				/// </summary>
				void createOverlayBuffer();

				/// <summary>
				/// 创建顶点数据
				/// </summary>
				void createOverlayData();

			protected:
				/// <summary>
				/// 标牌对象
				/// </summary>
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonText* ref_mpScutcheonText;

				/// <summary>
				/// 底面渲染对象
				/// </summary>
				EarthView::IndustryEngine::IndustryGraphic::CTextOverlayMovable::CTextOverlayRenderable* mpTextOverlayRenderable;

				/// <summary>
				/// 边框顶点
				/// </summary>
				vector<EarthView::World::Spatial::Math::CVector3> mPoints;

				/// <summary>
				/// 顶点纹理坐标
				/// </summary>
				vector<EarthView::World::Spatial::Math::CVector3> mTextureCoords;

				/// <summary>
				/// 底面索引数组
				/// </summary>
				ev_int16* mpOverlayIndex;

				/// <summary>
				/// 顶点包围盒
				/// </summary>
				EarthView::World::Spatial::Math::CAxisAlignedBox mBox;

				/// <summary>
				/// 顶点包围盒半径
				/// </summary>
				Real mRadius;

				/// <summary>
				/// 投影矩阵是否改变
				/// </summary>
				ev_bool mPrjMatrixChanged;

				/// <summary>
				/// 当前相机
				/// </summary>
				EarthView::World::Graphic::CCamera *mCurrentCamera;

				ev_bool             mForceEnableProjOffset;

			};
		}
	}
}
#endif
