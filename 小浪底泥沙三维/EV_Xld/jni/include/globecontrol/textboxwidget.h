#ifndef TEXTBOXWIDGET_H_
#define TEXTBOXWIDGET_H_

#include "graphic/colourvalue.h"
#include "globecontrol/evglobecontrol_config.h"
#include "graphic/overlayelement.h"
#include "core/stringdefines.h"
#include "globecontrol/widget.h"
#include "spatialgui/guievent.h"
#include "globecontrol/globecontrol.h"
#include "globecontrol/globecontrollistener.h"

class CBackGroundElement;

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CTextAreaOverlayElement;
			class CPanelOverlayElement;
		}
		namespace Spatial3D
		{
			class CGlobeCamera;

			namespace Controls
			{
				class EV_GLOBECONTROL_DLL CLatitudeLonitudeTextBoxVisibleEvent:public EarthView::World::Spatial::SystemUI::CGUIEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CLatitudeLonitudeTextBoxVisibleEvent();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CLatitudeLonitudeTextBoxVisibleEvent();
					/// <summary>
					/// 设置可见模式
					/// </summary>
					/// <param name="visableMode">可见模式</param>
					/// <returns></returns>
					void setVisableMode(_in EarthView::World::Spatial3D::Controls::VisibleMode visableMode);
					/// <summary>
					/// 返回可见模式
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial3D::Controls::VisibleMode getVisableMode()
					{
						return mvisibleMode;
					}
ev_private:
					CLatitudeLonitudeTextBoxVisibleEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				protected:
					EarthView::World::Spatial3D::Controls::VisibleMode mvisibleMode;
				};

				class EV_GLOBECONTROL_DLL CLatitudeLonitudeTextBoxVisibleEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEvent>
				{
ev_private:
					CLatitudeLonitudeTextBoxVisibleEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CLatitudeLonitudeTextBoxVisibleEventPtr(_in CLatitudeLonitudeTextBoxVisibleEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<CLatitudeLonitudeTextBoxVisibleEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CLatitudeLonitudeTextBoxVisibleEventPtr();
					explicit CLatitudeLonitudeTextBoxVisibleEventPtr(_in CLatitudeLonitudeTextBoxVisibleEvent *rep);					
					CLatitudeLonitudeTextBoxVisibleEventPtr(_in const CLatitudeLonitudeTextBoxVisibleEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr &r);

					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr &operator = (_in CLatitudeLonitudeTextBoxVisibleEvent* rep);
					/// <summary>
					/// 转换成EarthView::World::Spatial::SystemUI::CGUIEventPtr
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::SystemUI::CGUIEventPtr toCGUIEventPtr()
					{
						EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

								EarthView::World::Spatial::SystemUI::CGUIEventPtr ptr;
							ptr.pRep = static_cast<EarthView::World::Spatial::SystemUI::CGUIEvent *>(getPointer());
#if EV_THREAD_SUPPORT
							ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
							ptr.pUseCount = useCountPointer();
							ptr.useFreeMethod = useFreeMethod;
							if (pUseCount)
							{
								++(*pUseCount);
							}
							return ptr;
						}
					else
					{
						return EarthView::World::Spatial::SystemUI::CGUIEventPtr();
					}
					}

					operator EarthView::World::Spatial::SystemUI::CGUIEventPtr()
					{
						EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

								EarthView::World::Spatial::SystemUI::CGUIEventPtr ptr;
							ptr.pRep = static_cast<EarthView::World::Spatial::SystemUI::CGUIEvent *>(getPointer());
#if EV_THREAD_SUPPORT
							ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
							ptr.pUseCount = useCountPointer();
							ptr.useFreeMethod = useFreeMethod;
							if (pUseCount)
							{
								++(*pUseCount);
							}
							return ptr;
						}
					else
					{
						return EarthView::World::Spatial::SystemUI::CGUIEventPtr();
					}
					}

				};

				class EV_GLOBECONTROL_DLL CTextBoxEvent:public EarthView::World::Spatial::SystemUI::CGUIEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CTextBoxEvent();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CTextBoxEvent();
ev_private:
					CTextBoxEvent(_in EarthView::World::Core::CNameValuePairList* pList);
				};

				class EV_GLOBECONTROL_DLL CTextBoxEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CTextBoxEvent>
				{
ev_private:
					CTextBoxEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CTextBoxEventPtr(_in CTextBoxEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<CTextBoxEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CTextBoxEventPtr();
					explicit CTextBoxEventPtr(_in CTextBoxEvent *rep);					
					CTextBoxEventPtr(_in const CTextBoxEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CTextBoxEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CTextBoxEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CTextBoxEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CTextBoxEventPtr &r);

					EarthView::World::Spatial3D::Controls::CTextBoxEventPtr &operator = (_in CTextBoxEvent* rep);
					/// <summary>
					/// 转换成EarthView::World::Spatial::SystemUI::CGUIEventPtr
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::SystemUI::CGUIEventPtr toCGUIEventPtr()
					{
						EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

								EarthView::World::Spatial::SystemUI::CGUIEventPtr ptr;
							ptr.pRep = static_cast<EarthView::World::Spatial::SystemUI::CGUIEvent *>(getPointer());
#if EV_THREAD_SUPPORT
							ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
							ptr.pUseCount = useCountPointer();
							ptr.useFreeMethod = useFreeMethod;
							if (pUseCount)
							{
								++(*pUseCount);
							}
							return ptr;
						}
					else
					{
						return EarthView::World::Spatial::SystemUI::CGUIEventPtr();
					}
					}

					operator EarthView::World::Spatial::SystemUI::CGUIEventPtr()
					{
						EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

								EarthView::World::Spatial::SystemUI::CGUIEventPtr ptr;
							ptr.pRep = static_cast<EarthView::World::Spatial::SystemUI::CGUIEvent *>(getPointer());
#if EV_THREAD_SUPPORT
							ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
							ptr.pUseCount = useCountPointer();
							ptr.useFreeMethod = useFreeMethod;
							if (pUseCount)
							{
								++(*pUseCount);
							}
							return ptr;
						}
					else
					{
						return EarthView::World::Spatial::SystemUI::CGUIEventPtr();
					}
					}

				};

				class EV_GLOBECONTROL_DLL CEnableTextBoxEvent:public EarthView::World::Spatial3D::Controls::CTextBoxEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CEnableTextBoxEvent();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CEnableTextBoxEvent();
					/// <summary>
					/// 设置可见性
					/// </summary>
					/// <param name="enabled">可见性</param>
					/// <returns></returns>
					void setEnabled(_in ev_bool enabled);
					/// <summary>
					/// 获取可见性
					/// </summary>
					/// <returns></returns>
					ev_bool getEnabled() const;
ev_private:
					CEnableTextBoxEvent(_in EarthView::World::Core::CNameValuePairList* pList);

				protected:
					ev_bool menabled;

				};

				class EV_GLOBECONTROL_DLL CEnableTextBoxEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CEnableTextBoxEvent>
				{
ev_private:
					CEnableTextBoxEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CEnableTextBoxEventPtr(_in CEnableTextBoxEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<CEnableTextBoxEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CEnableTextBoxEventPtr();
					explicit CEnableTextBoxEventPtr(_in CEnableTextBoxEvent *rep);					
					CEnableTextBoxEventPtr(_in const CEnableTextBoxEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CEnableTextBoxEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CEnableTextBoxEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr &r);

					EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr &operator = (_in CEnableTextBoxEvent* rep);
					/// <summary>
					/// 转换成EarthView::World::Spatial::SystemUI::CGUIEventPtr
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::SystemUI::CGUIEventPtr toCGUIEventPtr()
					{
						EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

								EarthView::World::Spatial::SystemUI::CGUIEventPtr ptr;
							ptr.pRep = static_cast<EarthView::World::Spatial::SystemUI::CGUIEvent *>(getPointer());
#if EV_THREAD_SUPPORT
							ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
							ptr.pUseCount = useCountPointer();
							ptr.useFreeMethod = useFreeMethod;
							if (pUseCount)
							{
								++(*pUseCount);
							}
							return ptr;
						}
					else
					{
						return EarthView::World::Spatial::SystemUI::CGUIEventPtr();
					}
					}

					operator EarthView::World::Spatial::SystemUI::CGUIEventPtr()
					{
						EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

								EarthView::World::Spatial::SystemUI::CGUIEventPtr ptr;
							ptr.pRep = static_cast<EarthView::World::Spatial::SystemUI::CGUIEvent *>(getPointer());
#if EV_THREAD_SUPPORT
							ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
							ptr.pUseCount = useCountPointer();
							ptr.useFreeMethod = useFreeMethod;
							if (pUseCount)
							{
								++(*pUseCount);
							}
							return ptr;
						}
					else
					{
						return EarthView::World::Spatial::SystemUI::CGUIEventPtr();
					}
					}

				};

				class EV_GLOBECONTROL_DLL CTextBoxSetPositionEvent:public EarthView::World::Spatial3D::Controls::CTextBoxEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CTextBoxSetPositionEvent();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CTextBoxSetPositionEvent();
					/// <summary>
					/// 设置位置
					/// </summary>
					/// <param name="x">左上角Ｘ坐标</param>
					/// <param name="y">左上角Y坐标</param>
					/// <param name="width">宽度</param>
					/// <param name="height">高度</param>
					/// <param name="textOffsetX">文字相对背景的</param>
					/// <param name="textOffsetX">高度</param>
					/// <param name="gha">水平对齐的方式</param>
					/// <param name="gva">竖直对齐的方式</param>
					/// <returns></returns>
					void setPosition(_in Real x,_in Real y,_in Real width,_in Real height,_in Real textOffsetX,_in Real textOffsetY,_in EarthView::World::Graphic::GuiHorizontalAlignment gha,_in EarthView::World::Graphic::GuiVerticalAlignment gva);

					/// <summary>
					/// 获取位置
					/// </summary>
					/// <param name="x">左上角Ｘ坐标</param>
					/// <param name="y">左上角Y坐标</param>
					/// <param name="width">宽度</param>
					/// <param name="height">高度</param>
					/// <param name="textOffsetX">文字相对背景的</param>
					/// <param name="textOffsetX">高度</param>
					/// <param name="gha">水平对齐的方式</param>
					/// <param name="gva">竖直对齐的方式</param>
					/// <returns></returns>
					void getPosition(_inout Real& x,_inout Real& y,_inout Real& width,_inout Real& height,_inout Real& textOffsetX,_inout Real& textOffsetY,_inout EarthView::World::Graphic::GuiHorizontalAlignment& gha,_inout EarthView::World::Graphic::GuiVerticalAlignment& gva);
ev_private:
					CTextBoxSetPositionEvent(_in EarthView::World::Core::CNameValuePairList* pList);

				protected:
					Real mx;
					Real my;
					Real mwidth;
					Real mHeight;
					Real mtextOffsetX;
					Real mtextOffsetY;
					EarthView::World::Graphic::GuiHorizontalAlignment mgha;
					EarthView::World::Graphic::GuiVerticalAlignment mgva;
				};

				class EV_GLOBECONTROL_DLL CTextBoxSetPositionEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEvent>
				{
ev_private:
					CTextBoxSetPositionEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CTextBoxSetPositionEventPtr(_in CTextBoxSetPositionEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<CTextBoxSetPositionEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CTextBoxSetPositionEventPtr();
					explicit CTextBoxSetPositionEventPtr(_in CTextBoxSetPositionEvent *rep);					
					CTextBoxSetPositionEventPtr(_in const CTextBoxSetPositionEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr &r);

					EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr &operator = (_in CTextBoxSetPositionEvent* rep);
					/// <summary>
					/// 转换成EarthView::World::Spatial::SystemUI::CGUIEventPtr
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::SystemUI::CGUIEventPtr toCGUIEventPtr()
					{
						EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

								EarthView::World::Spatial::SystemUI::CGUIEventPtr ptr;
							ptr.pRep = static_cast<EarthView::World::Spatial::SystemUI::CGUIEvent *>(getPointer());
#if EV_THREAD_SUPPORT
							ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
							ptr.pUseCount = useCountPointer();
							ptr.useFreeMethod = useFreeMethod;
							if (pUseCount)
							{
								++(*pUseCount);
							}
							return ptr;
						}
					else
					{
						return EarthView::World::Spatial::SystemUI::CGUIEventPtr();
					}
					}

					operator EarthView::World::Spatial::SystemUI::CGUIEventPtr()
					{
						EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

								EarthView::World::Spatial::SystemUI::CGUIEventPtr ptr;
							ptr.pRep = static_cast<EarthView::World::Spatial::SystemUI::CGUIEvent *>(getPointer());
#if EV_THREAD_SUPPORT
							ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
							ptr.pUseCount = useCountPointer();
							ptr.useFreeMethod = useFreeMethod;
							if (pUseCount)
							{
								++(*pUseCount);
							}
							return ptr;
						}
					else
					{
						return EarthView::World::Spatial::SystemUI::CGUIEventPtr();
					}
					}

				};

				class EV_GLOBECONTROL_DLL CTextBoxSetTextEvent:public EarthView::World::Spatial3D::Controls::CTextBoxEvent
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CTextBoxSetTextEvent();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CTextBoxSetTextEvent();

					/// <summary>
					/// 设置文本内容
					/// </summary>
					/// <param name="text">文本内容</param>
					/// <returns></returns>
					void setText(_in const EVString& text);
					/// <summary>
					/// 获取文本内容
					/// </summary>
					/// <returns></returns>
					EVString getText() const;
					/// <summary>
					/// 文本内容是否被设置过
					/// </summary>
					/// <returns></returns>
					ev_bool getTextSeted() const;
					/// <summary>
					/// 设置字体的名字
					/// </summary>
					/// <param name="fontName">字体的名字</param>
					/// <returns></returns>
					void setFontName(_in const EVString& fontName);
					/// <summary>
					/// 获取文本内容
					/// </summary>
					/// <returns></returns>
					EVString getFontName() const;
					/// <summary>
					/// 字体是否被设置过
					/// </summary>
					/// <returns></returns>
					ev_bool getFontSeted() const;
					/// <summary>
					/// 设置字体的颜色
					/// </summary>
					/// <param name="color">颜色</param>
					/// <returns></returns>
					void setFontColor(_in const EarthView::World::Graphic::CColourValue& color);
					/// <summary>
					/// 获取文本的颜色
					/// </summary>
					/// <returns></returns>
					EarthView::World::Graphic::CColourValue getFontColor() const;
					/// <summary>
					/// 字体颜色是否被设置过
					/// </summary>
					/// <returns></returns>
					ev_bool getFontColorHasSeted() const;


ev_private:
					CTextBoxSetTextEvent(_in EarthView::World::Core::CNameValuePairList* pList);

				protected:
					EVString mtext;
					ev_bool mtextSeted;
					EVString mfontName;
					ev_bool mfontNameSeted;
					EarthView::World::Graphic::CColourValue mcolor;
					ev_bool mfontColorSeted;
				};

				class EV_GLOBECONTROL_DLL CTextBoxSetTextEventPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent>
				{
ev_private:
					CTextBoxSetTextEventPtr(_in EarthView::World::Core::CNameValuePairList *pList);
					explicit CTextBoxSetTextEventPtr(_in CTextBoxSetTextEvent *rep, _in EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<CTextBoxSetTextEvent>(rep, inFreeMethod) {}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CTextBoxSetTextEventPtr();
					explicit CTextBoxSetTextEventPtr(_in CTextBoxSetTextEvent *rep);					
					CTextBoxSetTextEventPtr(_in const CTextBoxSetTextEventPtr &tp);

					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent *get() const
					{
						return EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent>::get();
					}

					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr &operator = (_in const EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr &r);

					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr &operator = (_in CTextBoxSetTextEvent* rep);
					/// <summary>
					/// 转换成EarthView::World::Spatial::SystemUI::CGUIEventPtr
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial::SystemUI::CGUIEventPtr toCGUIEventPtr()
					{
						EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

								EarthView::World::Spatial::SystemUI::CGUIEventPtr ptr;
							ptr.pRep = static_cast<EarthView::World::Spatial::SystemUI::CGUIEvent *>(getPointer());
#if EV_THREAD_SUPPORT
							ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
							ptr.pUseCount = useCountPointer();
							ptr.useFreeMethod = useFreeMethod;
							if (pUseCount)
							{
								++(*pUseCount);
							}
							return ptr;
						}
					else
					{
						return EarthView::World::Spatial::SystemUI::CGUIEventPtr();
					}
					}

					operator EarthView::World::Spatial::SystemUI::CGUIEventPtr()
					{
						EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

								EarthView::World::Spatial::SystemUI::CGUIEventPtr ptr;
							ptr.pRep = static_cast<EarthView::World::Spatial::SystemUI::CGUIEvent *>(getPointer());
#if EV_THREAD_SUPPORT
							ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
							ptr.pUseCount = useCountPointer();
							ptr.useFreeMethod = useFreeMethod;
							if (pUseCount)
							{
								++(*pUseCount);
							}
							return ptr;
						}
					else
					{
						return EarthView::World::Spatial::SystemUI::CGUIEventPtr();
					}
					}

				};

				/// <summary>
				/// 文本框overlay控件，主要用于显示场景状态
				/// </summary>
				class EV_GLOBECONTROL_DLL CTextBoxWidget:public EarthView::World::Spatial3D::Controls::CWidget
				{
				public:
					/// <summary>
					///构造函数
					/// </summary>
					/// <param name="name">名字</param>
					/// <param name="fontName">字体的名称</param>
					/// <param name="gha">部件的纵向布局方式</param>
					/// <param name="gva">部件的横向布局方式</param>
					/// <param name="top">左上角的Ｙ坐标</param>
					/// <param name="left">左上角的Ｘ坐标</param>
					/// <param name="width">宽度</param>
					/// <param name="height">高度</param>
					/// <param name="textOffsetX">文字在Ｘ方向上的偏移</param>
					/// <param name="textOffsetY">文字在Ｙ方向上的偏移</param>
					/// <param name="charHeight">文字的高度</param>
					/// <param name="spaceWidth">空白字符的宽度</param>
					/// <param name="color">文字的颜色</param>
					/// <returns></returns>
					CTextBoxWidget(
						_in const EVString& name,
						_in const EVString& fontName,
						_in EarthView::World::Graphic::GuiHorizontalAlignment gha,
						_in EarthView::World::Graphic::GuiVerticalAlignment gva,
						_in ev_real32 top,
						_in ev_real32 left,
						_in ev_real32 width,
						_in ev_real32 height,
						_in ev_real32 textOffsetX,
						_in ev_real32 textOffsetY,
						_in int charHeight/*=19*/,
						_in int spaceWidth/*=8*/,
						_in EarthView::World::Graphic::CColourValue color/*=EarthView::World::Graphic::CColourValue(1.0,1.0,1.0,1.0)*/
						);

					/// <summary>
					///设置文本框要显示的文字
					/// </summary>
					/// <param name="text">显示的文字内容</param>
					/// <returns></returns>
					ev_void setText(_in const EVString& text);
					/// <summary>
					///设置背景的纹理坐标
					/// </summary>
					/// <param name="matrialName">材质名</param>
					/// <param name="u1">左上角的u坐标</param>
					/// <param name="v1">左上角的v坐标</param>
					/// <param name="u2">右下角的u坐标</param>
					/// <param name="v2">右下角的v坐标</param>
					/// <returns></returns>
					ev_void setPanelMatrial(_in const EVString& matrialName,_in ev_real32 u1,_in  ev_real32 v1,_in  ev_real32 u2, _in ev_real32 v2)
					{
						setPanelMatrial(matrialName,u1,v1,u2,v2,false);
					}
					/// <summary>
					///设置背景的纹理坐标
					/// </summary>
					/// <param name="matrialName">材质名</param>
					/// <param name="u1">左上角的u坐标</param>
					/// <param name="v1">左上角的v坐标</param>
					/// <param name="u2">右下角的u坐标</param>
					/// <param name="v2">右下角的v坐标</param>
					/// <param name="transparent">是否透明</param>
					/// <returns></returns>
					ev_void setPanelMatrial(_in const EVString& matrialName,_in ev_real32 u1,_in  ev_real32 v1,_in  ev_real32 u2, _in ev_real32 v2,_in ev_bool transparent);
					/// <summary>
					/// 处理帆事件
					/// </summary>
					/// <param name="event">事件对象</param>
					/// <param name="viewport">视口</param>
					/// <returns></returns>
					virtual ev_bool handleFrameEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event,_in EarthView::World::Graphic::CViewport* viewport);

					virtual ev_bool handleUserEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
ev_private:
					CTextBoxWidget(_in EarthView::World::Core::CNameValuePairList* pList);
				ev_internal:
					friend class EarthView::World::Spatial3D::Controls::CWidgetManager;
					/// <summary>
					///析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CTextBoxWidget();
					/// <summary>
					///挎贝构造函数
					/// </summary>
					/// <returns></returns>
					CTextBoxWidget(_in const CTextBoxWidget& rhs)
						:CWidget(rhs)
					{

					}
					/// <summary>
					///赋值运算符
					/// </summary>
					/// <returns></returns>
					ev_void operator=(_in const EarthView::World::Spatial3D::Controls::CTextBoxWidget& rhs)
					{

					}

					EVString mtext;


					EarthView::World::Graphic::CTextAreaOverlayElement* mTextArea;
					EarthView::World::Graphic::CPanelOverlayElement* mPanel;
					int mcharHeight;


				};

				class EV_GLOBECONTROL_DLL CLatitudeLonitudeTextBox:public EarthView::World::Spatial3D::Controls::CTextBoxWidget
				{
				public:
					CLatitudeLonitudeTextBox(
						_in EarthView::World::Spatial3D::CGlobeCamera* globeCamera,
						_in const EVString& name,
						_in const EVString& fontName,
						_in EarthView::World::Graphic::GuiHorizontalAlignment gha,
						_in EarthView::World::Graphic::GuiVerticalAlignment vga,
						_in ev_real32 top,
						_in ev_real32 left,
						_in ev_real32 width,
						_in ev_real32 height,
						_in ev_real32 textOffsetX,
						_in ev_real32 textOffsetY,
						_in int charHeight/*=19*/,
						_in int spaceWidth/*=8*/,
						_in EarthView::World::Graphic::CColourValue color/*=EarthView::World::Graphic::CColourValue(1.0,1.0,1.0,1.0)*/
						);
					/// <summary>
					///添加globeControlListener监听
					/// </summary>
					/// <param name="listener">监听者</param>
					/// <returns></returns>
					ev_void addGlobeControlListener(_in EarthView::World::Spatial3D::Controls::CGlobeControlListener* ref_listener);

					/// <summary>
					///移除Goto监听
					/// </summary>
					/// <param name="listener">监听者</param>
					/// <returns></returns>
					ev_void removeGlobeControlListener(_in EarthView::World::Spatial3D::Controls::CGlobeControlListener* listener);

					/// <summary>
					///是否显示图层信息
					/// </summary>
					/// <param name="show"></param>
					/// <returns></returns>
					ev_void setShowLayerInfo(ev_bool show);

					virtual ev_bool handleUserEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);

					virtual ev_bool handleFrameEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event,_in EarthView::World::Graphic::CViewport* viewport);
ev_private:
					CLatitudeLonitudeTextBox(_in EarthView::World::Core::CNameValuePairList* pList);
					CBackGroundElement* mbackGroundElement;
				ev_internal:
					friend class EarthView::World::Spatial3D::Controls::CWidgetManager;
					virtual ~CLatitudeLonitudeTextBox();

					CLatitudeLonitudeTextBox(_in const CLatitudeLonitudeTextBox& rhs)
						:CTextBoxWidget(rhs)
						,mCurrentEventX(0)
						,mCurrentEventY(0)
						,mPreEventX(0)
						,mPreEventY(0)
						,mIsStartTime(FALSE)
						,mStartTime(0)
						,mStopTime(0)
						,mLat(0.0)
						,mLon(0.0)
						,mAltitude(0.0)						
						,mpGlobelControl(NULL)
					{
						
						

					}

					ev_void operator = (_in const EarthView::World::Spatial3D::Controls::CTextBoxWidget& rhs)
					{

					}

					ev_void setGlobelControl(EarthView::World::Spatial3D::Controls::CGlobeControl* globeContorl);

					ev_void setMousetPickInterval(ev_uint32 intervalTime);

					EarthView::World::Spatial3D::CGlobeCamera* mGlobeCamera;
					
					int mlastWidth;
					char* mtextInformation;
					ev_int32 mCurrentEventX;
					ev_int32 mCurrentEventY;
					ev_int32 mPreEventX;
					ev_int32 mPreEventY;
					ev_uint32 mStartTime;
					ev_uint32 mStopTime;
					ev_bool mIsStartTime;
					ev_uint32 mIntervalTime;
					EarthView::World::Spatial3D::Controls::CGlobeControl* mpGlobelControl;

					EVString mouseLatitudeString;
					EVString mouseLongitudeString;
					EVString mouseAltitudeString;

					ev_real64 mLat;
					ev_real64 mLon;
					ev_real64 mAltitude;
					

				private:
					typedef vector<EarthView::World::Spatial3D::Controls::CGlobeControlListener*> CGlobeControlListenerVector;
					CGlobeControlListenerVector mGlobeControlListenerVec;

					/// <summary>
					/// 将信息通知给控件
					/// </summary>
					/// <param name="globeIntersected">是否与球相交</param>
					/// <param name="lat">纬度</param>
					/// <param name="lon">经度</param>
					/// <param name="alt">地形高度</param>					
					/// <param name="heading">偏航角</param>
					/// <param name="tilt">俯仰角</param>
					/// <param name="camAlt">相机高度</param>
					/// <returns></returns>
					ev_void notifyMousePosition(ev_bool globeIntersected,Real lat,Real lon,Real alt,Real heading,Real tilt,Real camAlt );

					/// <summary>
					/// 设置状态栏信息
					/// </summary>
					/// <param name="globeIntersected">是否与球相交</param>
					/// <param name="lat">纬度</param>
					/// <param name="lon">经度</param>
					/// <param name="alt">地形高度</param>					
					/// <param name="heading">偏航角</param>
					/// <param name="tilt">俯仰角</param>
					/// <param name="camAlt">相机高度</param>
					/// <returns></returns>
					ev_void setStatusBarText(ev_bool globeIntersected,Real lat,Real lon,Real alt,Real heading,Real tilt,Real camAlt);

					private:
						EarthView::World::Graphic::CTextAreaOverlayElement* mTextLon;
						EarthView::World::Graphic::CTextAreaOverlayElement* mTextLat;
						EarthView::World::Graphic::CTextAreaOverlayElement* mTextHeading;
						EarthView::World::Graphic::CTextAreaOverlayElement* mTextTilt;
						EarthView::World::Graphic::CTextAreaOverlayElement* mLayerName;
						EarthView::World::Graphic::CTextAreaOverlayElement* mLayerLevel;
						EarthView::World::Graphic::CTextAreaOverlayElement* mTextHeight;	
						ev_bool mShowLayerInfo;
				};
			}
		}
	}
}

#endif
