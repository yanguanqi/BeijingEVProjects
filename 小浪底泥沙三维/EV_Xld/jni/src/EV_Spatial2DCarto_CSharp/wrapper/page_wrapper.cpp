/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dcarto/page.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_CPage_getPageType_EVPageSize_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPage_setPageType_void_EVPageSize_Callback)(_in int type);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_CPage_getBoderSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPage_setBoderSymbol_void_ISymbol_Callback)(_in EarthView::World::Spatial::Display::ISymbol* boder);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Carto_CPage_getBackgroundColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPage_setBackgroundColor_void_IColor_Callback)(_in EarthView::World::Spatial::Display::IColor* background);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Carto_CPage_getShadowColor_IColor_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPage_setShadowColor_void_IColor_Callback)(_in EarthView::World::Spatial::Display::IColor* pColor);
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_CPage_getOrientation_EVPageOrientation_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPage_setPageSize_void_ev_real64_ev_real64_Callback)(_in ev_real64 width, _in ev_real64 height);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPage_setOrientation_void_EVPageOrientation_Callback)(_in int oritention);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPage_queryPageSize_void_ev_real64_ev_real64_EVPageUnits_Callback)(_out ev_real64& width, _out ev_real64& height, _out int& pageUnit);
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_CPage_getPageUnits_EVPageUnits_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPage_setPageUnits_void_EVPageUnits_Callback)(_in int pageUnit);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPage_setCustomPageWidth_void_ev_real64_Callback)(_in ev_real64 dPageCustomWidth);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPage_setCustomPageHeight_void_ev_real64_Callback)(_in ev_real64 dPageCustomHeight);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPage_draw_void_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display);
				typedef IPage*  ( _stdcall EarthView_World_Spatial_Carto_CPage_clone_IPage_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPage_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_CPage_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPage_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Carto_CPage_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CPage_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CPageProxy : public EarthView::World::Spatial::Carto::CPage
				{
				private:
					EarthView_World_Spatial_Carto_CPage_getPageType_EVPageSize_Callback* m_EarthView_World_Spatial_Carto_CPage_getPageType_EVPageSize_Callback;
					EarthView_World_Spatial_Carto_CPage_setPageType_void_EVPageSize_Callback* m_EarthView_World_Spatial_Carto_CPage_setPageType_void_EVPageSize_Callback;
					EarthView_World_Spatial_Carto_CPage_getBoderSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CPage_getBoderSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CPage_setBoderSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CPage_setBoderSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CPage_getBackgroundColor_IColor_Callback* m_EarthView_World_Spatial_Carto_CPage_getBackgroundColor_IColor_Callback;
					EarthView_World_Spatial_Carto_CPage_setBackgroundColor_void_IColor_Callback* m_EarthView_World_Spatial_Carto_CPage_setBackgroundColor_void_IColor_Callback;
					EarthView_World_Spatial_Carto_CPage_getShadowColor_IColor_Callback* m_EarthView_World_Spatial_Carto_CPage_getShadowColor_IColor_Callback;
					EarthView_World_Spatial_Carto_CPage_setShadowColor_void_IColor_Callback* m_EarthView_World_Spatial_Carto_CPage_setShadowColor_void_IColor_Callback;
					EarthView_World_Spatial_Carto_CPage_getOrientation_EVPageOrientation_Callback* m_EarthView_World_Spatial_Carto_CPage_getOrientation_EVPageOrientation_Callback;
					EarthView_World_Spatial_Carto_CPage_setPageSize_void_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Carto_CPage_setPageSize_void_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_Carto_CPage_setOrientation_void_EVPageOrientation_Callback* m_EarthView_World_Spatial_Carto_CPage_setOrientation_void_EVPageOrientation_Callback;
					EarthView_World_Spatial_Carto_CPage_queryPageSize_void_ev_real64_ev_real64_EVPageUnits_Callback* m_EarthView_World_Spatial_Carto_CPage_queryPageSize_void_ev_real64_ev_real64_EVPageUnits_Callback;
					EarthView_World_Spatial_Carto_CPage_getPageUnits_EVPageUnits_Callback* m_EarthView_World_Spatial_Carto_CPage_getPageUnits_EVPageUnits_Callback;
					EarthView_World_Spatial_Carto_CPage_setPageUnits_void_EVPageUnits_Callback* m_EarthView_World_Spatial_Carto_CPage_setPageUnits_void_EVPageUnits_Callback;
					EarthView_World_Spatial_Carto_CPage_setCustomPageWidth_void_ev_real64_Callback* m_EarthView_World_Spatial_Carto_CPage_setCustomPageWidth_void_ev_real64_Callback;
					EarthView_World_Spatial_Carto_CPage_setCustomPageHeight_void_ev_real64_Callback* m_EarthView_World_Spatial_Carto_CPage_setCustomPageHeight_void_ev_real64_Callback;
					EarthView_World_Spatial_Carto_CPage_draw_void_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_CPage_draw_void_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_CPage_clone_IPage_Callback* m_EarthView_World_Spatial_Carto_CPage_clone_IPage_Callback;
					EarthView_World_Spatial_Carto_CPage_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_CPage_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Carto_CPage_toXML_EVString_Callback* m_EarthView_World_Spatial_Carto_CPage_toXML_EVString_Callback;
					EarthView_World_Spatial_Carto_CPage_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_CPage_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_CPage_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_CPage_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_CPage_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_CPage_fromStream_void_CDataStream_Callback;
				public:
					CPageProxy(EarthView::World::Core::CNameValuePairList *pList) : CPage(pList)
					{
						m_EarthView_World_Spatial_Carto_CPage_getPageType_EVPageSize_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPage_setPageType_void_EVPageSize_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPage_getBoderSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPage_setBoderSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPage_getBackgroundColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPage_setBackgroundColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPage_getShadowColor_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPage_setShadowColor_void_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPage_getOrientation_EVPageOrientation_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPage_setPageSize_void_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPage_setOrientation_void_EVPageOrientation_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPage_queryPageSize_void_ev_real64_ev_real64_EVPageUnits_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPage_getPageUnits_EVPageUnits_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPage_setPageUnits_void_EVPageUnits_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPage_setCustomPageWidth_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPage_setCustomPageHeight_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPage_draw_void_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPage_clone_IPage_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPage_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPage_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPage_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPage_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CPage_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPage_getPageType_EVPageSize(EarthView_World_Spatial_Carto_CPage_getPageType_EVPageSize_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPage_getPageType_EVPageSize_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPage_setPageType_void_EVPageSize(EarthView_World_Spatial_Carto_CPage_setPageType_void_EVPageSize_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPage_setPageType_void_EVPageSize_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPage_getBoderSymbol_ISymbol(EarthView_World_Spatial_Carto_CPage_getBoderSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPage_getBoderSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPage_setBoderSymbol_void_ISymbol(EarthView_World_Spatial_Carto_CPage_setBoderSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPage_setBoderSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPage_getBackgroundColor_IColor(EarthView_World_Spatial_Carto_CPage_getBackgroundColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPage_getBackgroundColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPage_setBackgroundColor_void_IColor(EarthView_World_Spatial_Carto_CPage_setBackgroundColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPage_setBackgroundColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPage_getShadowColor_IColor(EarthView_World_Spatial_Carto_CPage_getShadowColor_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPage_getShadowColor_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPage_setShadowColor_void_IColor(EarthView_World_Spatial_Carto_CPage_setShadowColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPage_setShadowColor_void_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPage_getOrientation_EVPageOrientation(EarthView_World_Spatial_Carto_CPage_getOrientation_EVPageOrientation_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPage_getOrientation_EVPageOrientation_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPage_setPageSize_void_ev_real64_ev_real64(EarthView_World_Spatial_Carto_CPage_setPageSize_void_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPage_setPageSize_void_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPage_setOrientation_void_EVPageOrientation(EarthView_World_Spatial_Carto_CPage_setOrientation_void_EVPageOrientation_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPage_setOrientation_void_EVPageOrientation_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPage_queryPageSize_void_ev_real64_ev_real64_EVPageUnits(EarthView_World_Spatial_Carto_CPage_queryPageSize_void_ev_real64_ev_real64_EVPageUnits_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPage_queryPageSize_void_ev_real64_ev_real64_EVPageUnits_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPage_getPageUnits_EVPageUnits(EarthView_World_Spatial_Carto_CPage_getPageUnits_EVPageUnits_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPage_getPageUnits_EVPageUnits_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPage_setPageUnits_void_EVPageUnits(EarthView_World_Spatial_Carto_CPage_setPageUnits_void_EVPageUnits_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPage_setPageUnits_void_EVPageUnits_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPage_setCustomPageWidth_void_ev_real64(EarthView_World_Spatial_Carto_CPage_setCustomPageWidth_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPage_setCustomPageWidth_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPage_setCustomPageHeight_void_ev_real64(EarthView_World_Spatial_Carto_CPage_setCustomPageHeight_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPage_setCustomPageHeight_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPage_draw_void_ISpatialDisplay(EarthView_World_Spatial_Carto_CPage_draw_void_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPage_draw_void_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPage_clone_IPage(EarthView_World_Spatial_Carto_CPage_clone_IPage_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPage_clone_IPage_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPage_toStream_void_CDataStream(EarthView_World_Spatial_Carto_CPage_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPage_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPage_toXML_EVString(EarthView_World_Spatial_Carto_CPage_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPage_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPage_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Carto_CPage_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPage_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPage_toXmlElement_CXmlElement(EarthView_World_Spatial_Carto_CPage_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPage_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CPage_fromStream_void_CDataStream(EarthView_World_Spatial_Carto_CPage_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CPage_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Carto::EVPageSize getPageType() const
					{
						if(m_EarthView_World_Spatial_Carto_CPage_getPageType_EVPageSize_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVPageSize returnValue = (EarthView::World::Spatial::Carto::EVPageSize)m_EarthView_World_Spatial_Carto_CPage_getPageType_EVPageSize_Callback();
							return returnValue;
						}
						else
							return this->CPage::getPageType();
					}
					virtual void setPageType(_in EarthView::World::Spatial::Carto::EVPageSize type)
					{
						if(m_EarthView_World_Spatial_Carto_CPage_setPageType_void_EVPageSize_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPage_setPageType_void_EVPageSize_Callback((int)type);
						}
						else
							return this->CPage::setPageType(type);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getBoderSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_CPage_getBoderSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_CPage_getBoderSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CPage::getBoderSymbol();
					}
					virtual void setBoderSymbol(_in EarthView::World::Spatial::Display::ISymbol* boder)
					{
						if(m_EarthView_World_Spatial_Carto_CPage_setBoderSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPage_setBoderSymbol_void_ISymbol_Callback(boder);
						}
						else
							return this->CPage::setBoderSymbol(boder);
					}
					virtual EarthView::World::Spatial::Display::IColor* getBackgroundColor() const
					{
						if(m_EarthView_World_Spatial_Carto_CPage_getBackgroundColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Carto_CPage_getBackgroundColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CPage::getBackgroundColor();
					}
					virtual void setBackgroundColor(_in EarthView::World::Spatial::Display::IColor* background)
					{
						if(m_EarthView_World_Spatial_Carto_CPage_setBackgroundColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPage_setBackgroundColor_void_IColor_Callback(background);
						}
						else
							return this->CPage::setBackgroundColor(background);
					}
					virtual EarthView::World::Spatial::Display::IColor* getShadowColor() const
					{
						if(m_EarthView_World_Spatial_Carto_CPage_getShadowColor_IColor_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Carto_CPage_getShadowColor_IColor_Callback();
							return returnValue;
						}
						else
							return this->CPage::getShadowColor();
					}
					virtual void setShadowColor(_in EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Carto_CPage_setShadowColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPage_setShadowColor_void_IColor_Callback(pColor);
						}
						else
							return this->CPage::setShadowColor(pColor);
					}
					virtual EarthView::World::Spatial::Carto::EVPageOrientation getOrientation() const
					{
						if(m_EarthView_World_Spatial_Carto_CPage_getOrientation_EVPageOrientation_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVPageOrientation returnValue = (EarthView::World::Spatial::Carto::EVPageOrientation)m_EarthView_World_Spatial_Carto_CPage_getOrientation_EVPageOrientation_Callback();
							return returnValue;
						}
						else
							return this->CPage::getOrientation();
					}
					virtual void setPageSize(_in ev_real64 width, _in ev_real64 height)
					{
						if(m_EarthView_World_Spatial_Carto_CPage_setPageSize_void_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPage_setPageSize_void_ev_real64_ev_real64_Callback(width, height);
						}
						else
							return this->CPage::setPageSize(width, height);
					}
					virtual void setOrientation(_in EarthView::World::Spatial::Carto::EVPageOrientation oritention)
					{
						if(m_EarthView_World_Spatial_Carto_CPage_setOrientation_void_EVPageOrientation_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPage_setOrientation_void_EVPageOrientation_Callback((int)oritention);
						}
						else
							return this->CPage::setOrientation(oritention);
					}
					virtual void queryPageSize(_out ev_real64& width, _out ev_real64& height, _out EarthView::World::Spatial::Carto::EVPageUnits& pageUnit)
					{
						if(m_EarthView_World_Spatial_Carto_CPage_queryPageSize_void_ev_real64_ev_real64_EVPageUnits_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPage_queryPageSize_void_ev_real64_ev_real64_EVPageUnits_Callback(width, height, (int&)pageUnit);
						}
						else
							return this->CPage::queryPageSize(width, height, pageUnit);
					}
					virtual EarthView::World::Spatial::Carto::EVPageUnits getPageUnits() const
					{
						if(m_EarthView_World_Spatial_Carto_CPage_getPageUnits_EVPageUnits_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVPageUnits returnValue = (EarthView::World::Spatial::Carto::EVPageUnits)m_EarthView_World_Spatial_Carto_CPage_getPageUnits_EVPageUnits_Callback();
							return returnValue;
						}
						else
							return this->CPage::getPageUnits();
					}
					virtual void setPageUnits(_in EarthView::World::Spatial::Carto::EVPageUnits pageUnit)
					{
						if(m_EarthView_World_Spatial_Carto_CPage_setPageUnits_void_EVPageUnits_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPage_setPageUnits_void_EVPageUnits_Callback((int)pageUnit);
						}
						else
							return this->CPage::setPageUnits(pageUnit);
					}
					virtual void setCustomPageWidth(_in ev_real64 dPageCustomWidth)
					{
						if(m_EarthView_World_Spatial_Carto_CPage_setCustomPageWidth_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPage_setCustomPageWidth_void_ev_real64_Callback(dPageCustomWidth);
						}
						else
							return this->CPage::setCustomPageWidth(dPageCustomWidth);
					}
					virtual void setCustomPageHeight(_in ev_real64 dPageCustomHeight)
					{
						if(m_EarthView_World_Spatial_Carto_CPage_setCustomPageHeight_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPage_setCustomPageHeight_void_ev_real64_Callback(dPageCustomHeight);
						}
						else
							return this->CPage::setCustomPageHeight(dPageCustomHeight);
					}
					virtual void draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display)
					{
						if(m_EarthView_World_Spatial_Carto_CPage_draw_void_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPage_draw_void_ISpatialDisplay_Callback(display);
						}
						else
							return this->CPage::draw(display);
					}
					virtual IPage* clone() const
					{
						if(m_EarthView_World_Spatial_Carto_CPage_clone_IPage_Callback != NULL && this->isCustomExtend())
						{
							IPage* returnValue = m_EarthView_World_Spatial_Carto_CPage_clone_IPage_Callback();
							return returnValue;
						}
						else
							return this->CPage::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Carto_CPage_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPage_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CPage::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Carto_CPage_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_CPage_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CPage::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Carto_CPage_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPage_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CPage::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Carto_CPage_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Carto_CPage_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CPage::toXmlElement();
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Carto_CPage_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CPage_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CPage::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(CPageProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CPage_getPageType_EVPageSize(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					if (dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::EVPageSize objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPage::getPageType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVPageSize objXXXX = ptrNativeObject->getPageType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPage_getPageType_EVPageSize( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPage_getPageType_EVPageSize_Callback* pCallback )
				{
					CPageProxy* ptr = dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPage_getPageType_EVPageSize(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CPage_getPageType_EVPageSize_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVPageSize objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPage::getPageType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_setPageType_void_EVPageSize(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					if (dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPage::setPageType((EarthView::World::Spatial::Carto::EVPageSize)type);
					else
						ptrNativeObject->setPageType((EarthView::World::Spatial::Carto::EVPageSize)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPage_setPageType_void_EVPageSize( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPage_setPageType_void_EVPageSize_Callback* pCallback )
				{
					CPageProxy* ptr = dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPage_setPageType_void_EVPageSize(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_setPageType_void_EVPageSize_NoVirtual(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPage::setPageType((EarthView::World::Spatial::Carto::EVPageSize)type);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_CPage_getBoderSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					if (dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPage::getBoderSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getBoderSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPage_getBoderSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPage_getBoderSymbol_ISymbol_Callback* pCallback )
				{
					CPageProxy* ptr = dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPage_getBoderSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_CPage_getBoderSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPage::getBoderSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_setBoderSymbol_void_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* boder )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					if (dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPage::setBoderSymbol(boder);
					else
						ptrNativeObject->setBoderSymbol(boder);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPage_setBoderSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPage_setBoderSymbol_void_ISymbol_Callback* pCallback )
				{
					CPageProxy* ptr = dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPage_setBoderSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_setBoderSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* boder )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPage::setBoderSymbol(boder);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_CPage_getBackgroundColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					if (dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPage::getBackgroundColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getBackgroundColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPage_getBackgroundColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPage_getBackgroundColor_IColor_Callback* pCallback )
				{
					CPageProxy* ptr = dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPage_getBackgroundColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_CPage_getBackgroundColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPage::getBackgroundColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_setBackgroundColor_void_IColor(void *pObjectXXXX, _in EarthView::World::Spatial::Display::IColor* background )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					if (dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPage::setBackgroundColor(background);
					else
						ptrNativeObject->setBackgroundColor(background);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPage_setBackgroundColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPage_setBackgroundColor_void_IColor_Callback* pCallback )
				{
					CPageProxy* ptr = dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPage_setBackgroundColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_setBackgroundColor_void_IColor_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::IColor* background )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPage::setBackgroundColor(background);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_CPage_getShadowColor_IColor(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					if (dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPage::getShadowColor();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getShadowColor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPage_getShadowColor_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPage_getShadowColor_IColor_Callback* pCallback )
				{
					CPageProxy* ptr = dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPage_getShadowColor_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Carto_CPage_getShadowColor_IColor_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPage::getShadowColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_setShadowColor_void_IColor(void *pObjectXXXX, _in EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					if (dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPage::setShadowColor(pColor);
					else
						ptrNativeObject->setShadowColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPage_setShadowColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPage_setShadowColor_void_IColor_Callback* pCallback )
				{
					CPageProxy* ptr = dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPage_setShadowColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_setShadowColor_void_IColor_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPage::setShadowColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CPage_getOrientation_EVPageOrientation(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					if (dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::EVPageOrientation objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPage::getOrientation();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVPageOrientation objXXXX = ptrNativeObject->getOrientation();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPage_getOrientation_EVPageOrientation( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPage_getOrientation_EVPageOrientation_Callback* pCallback )
				{
					CPageProxy* ptr = dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPage_getOrientation_EVPageOrientation(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CPage_getOrientation_EVPageOrientation_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVPageOrientation objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPage::getOrientation();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_setPageSize_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 width, _in ev_real64 height )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					if (dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPage::setPageSize(width, height);
					else
						ptrNativeObject->setPageSize(width, height);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPage_setPageSize_void_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPage_setPageSize_void_ev_real64_ev_real64_Callback* pCallback )
				{
					CPageProxy* ptr = dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPage_setPageSize_void_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_setPageSize_void_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 width, _in ev_real64 height )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPage::setPageSize(width, height);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_setOrientation_void_EVPageOrientation(void *pObjectXXXX, _in int oritention )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					if (dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPage::setOrientation((EarthView::World::Spatial::Carto::EVPageOrientation)oritention);
					else
						ptrNativeObject->setOrientation((EarthView::World::Spatial::Carto::EVPageOrientation)oritention);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPage_setOrientation_void_EVPageOrientation( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPage_setOrientation_void_EVPageOrientation_Callback* pCallback )
				{
					CPageProxy* ptr = dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPage_setOrientation_void_EVPageOrientation(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_setOrientation_void_EVPageOrientation_NoVirtual(void *pObjectXXXX, _in int oritention )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPage::setOrientation((EarthView::World::Spatial::Carto::EVPageOrientation)oritention);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_queryPageSize_void_ev_real64_ev_real64_EVPageUnits(void *pObjectXXXX, _out ev_real64& width, _out ev_real64& height, _out int& pageUnit )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					if (dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPage::queryPageSize(width, height, (EarthView::World::Spatial::Carto::EVPageUnits&)pageUnit);
					else
						ptrNativeObject->queryPageSize(width, height, (EarthView::World::Spatial::Carto::EVPageUnits&)pageUnit);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPage_queryPageSize_void_ev_real64_ev_real64_EVPageUnits( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPage_queryPageSize_void_ev_real64_ev_real64_EVPageUnits_Callback* pCallback )
				{
					CPageProxy* ptr = dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPage_queryPageSize_void_ev_real64_ev_real64_EVPageUnits(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_queryPageSize_void_ev_real64_ev_real64_EVPageUnits_NoVirtual(void *pObjectXXXX, _out ev_real64& width, _out ev_real64& height, _out int& pageUnit )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPage::queryPageSize(width, height, (EarthView::World::Spatial::Carto::EVPageUnits&)pageUnit);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CPage_getPageUnits_EVPageUnits(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					if (dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::EVPageUnits objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPage::getPageUnits();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVPageUnits objXXXX = ptrNativeObject->getPageUnits();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPage_getPageUnits_EVPageUnits( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPage_getPageUnits_EVPageUnits_Callback* pCallback )
				{
					CPageProxy* ptr = dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPage_getPageUnits_EVPageUnits(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CPage_getPageUnits_EVPageUnits_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVPageUnits objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPage::getPageUnits();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_setPageUnits_void_EVPageUnits(void *pObjectXXXX, _in int pageUnit )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					if (dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPage::setPageUnits((EarthView::World::Spatial::Carto::EVPageUnits)pageUnit);
					else
						ptrNativeObject->setPageUnits((EarthView::World::Spatial::Carto::EVPageUnits)pageUnit);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPage_setPageUnits_void_EVPageUnits( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPage_setPageUnits_void_EVPageUnits_Callback* pCallback )
				{
					CPageProxy* ptr = dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPage_setPageUnits_void_EVPageUnits(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_setPageUnits_void_EVPageUnits_NoVirtual(void *pObjectXXXX, _in int pageUnit )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPage::setPageUnits((EarthView::World::Spatial::Carto::EVPageUnits)pageUnit);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_setCustomPageWidth_void_ev_real64(void *pObjectXXXX, _in ev_real64 dPageCustomWidth )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					if (dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPage::setCustomPageWidth(dPageCustomWidth);
					else
						ptrNativeObject->setCustomPageWidth(dPageCustomWidth);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPage_setCustomPageWidth_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPage_setCustomPageWidth_void_ev_real64_Callback* pCallback )
				{
					CPageProxy* ptr = dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPage_setCustomPageWidth_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_setCustomPageWidth_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 dPageCustomWidth )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPage::setCustomPageWidth(dPageCustomWidth);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_setCustomPageHeight_void_ev_real64(void *pObjectXXXX, _in ev_real64 dPageCustomHeight )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					if (dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPage::setCustomPageHeight(dPageCustomHeight);
					else
						ptrNativeObject->setCustomPageHeight(dPageCustomHeight);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPage_setCustomPageHeight_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPage_setCustomPageHeight_void_ev_real64_Callback* pCallback )
				{
					CPageProxy* ptr = dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPage_setCustomPageHeight_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_setCustomPageHeight_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 dPageCustomHeight )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPage::setCustomPageHeight(dPageCustomHeight);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_draw_void_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					if (dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPage::draw(display);
					else
						ptrNativeObject->draw(display);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPage_draw_void_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPage_draw_void_ISpatialDisplay_Callback* pCallback )
				{
					CPageProxy* ptr = dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPage_draw_void_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_draw_void_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPage::draw(display);
				}
				extern "C" EV_DLL_EXPORT  IPage*  _stdcall EarthView_World_Spatial_Carto_CPage_clone_IPage(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					if (dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*)ptrNativeObject) != NULL)
					{
						IPage* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPage::clone();
						return objXXXX;
					}
					else
					{
						IPage* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPage_clone_IPage( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPage_clone_IPage_Callback* pCallback )
				{
					CPageProxy* ptr = dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPage_clone_IPage(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  IPage*  _stdcall EarthView_World_Spatial_Carto_CPage_clone_IPage_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					IPage* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPage::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					if (dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPage::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPage_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPage_toStream_void_CDataStream_Callback* pCallback )
				{
					CPageProxy* ptr = dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPage_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPage::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CPage_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					if (dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPage::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPage_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPage_toXML_EVString_Callback* pCallback )
				{
					CPageProxy* ptr = dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPage_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CPage_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPage::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					if (dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPage::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPage_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPage_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CPageProxy* ptr = dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPage_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPage::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_CPage_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					if (dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPage::toXmlElement();
						EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->toXmlElement();
						EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPage_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPage_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CPageProxy* ptr = dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPage_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_CPage_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CPage::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					if (dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CPage::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CPage_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_CPage_fromStream_void_CDataStream_Callback* pCallback )
				{
					CPageProxy* ptr = dynamic_cast<CPageProxy*>((EarthView::World::Spatial::Carto::CPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CPage_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CPage_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Carto::CPage* ptrNativeObject = (EarthView::World::Spatial::Carto::CPage*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CPage::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
			}
		}
	}
}
