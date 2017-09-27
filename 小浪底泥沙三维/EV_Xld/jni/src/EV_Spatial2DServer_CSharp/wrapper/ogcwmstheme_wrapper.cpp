/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dserver/ogcwmstheme.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Theme
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_setRequestType_void_EVOGCWMSRequestType_Callback)(_in int requestType);
				typedef int  ( _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_getRequestType_EVOGCWMSRequestType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_getType_EVThemeType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_getCaption_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_setCaption_void_EVString_Callback)(_in char*& caption);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_useDefaultSymbol_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_setUseDefaultSymbol_void_ev_bool_Callback)(_in ev_bool usable);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_getDefaultSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_setDefaultSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_equals_ev_bool_ITheme_Callback)(_in const EarthView::World::Spatial::Theme::ITheme* theme);
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_clone_ITheme_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef void*  ( _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_fromXmlElement_void_CXmlElement_Callback)(_inout void* element);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IFeatureClass* fc, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback)(_in EarthView::World::Spatial::GeoDataset::IFeatureSelection* fs, _in EarthView::World::Spatial::Geometry::IGeometry* dst);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class COGCWMSThemeProxy : public EarthView::World::Spatial::Theme::COGCWMSTheme
				{
				private:
					EarthView_World_Spatial_Theme_COGCWMSTheme_setRequestType_void_EVOGCWMSRequestType_Callback* m_EarthView_World_Spatial_Theme_COGCWMSTheme_setRequestType_void_EVOGCWMSRequestType_Callback;
					EarthView_World_Spatial_Theme_COGCWMSTheme_getRequestType_EVOGCWMSRequestType_Callback* m_EarthView_World_Spatial_Theme_COGCWMSTheme_getRequestType_EVOGCWMSRequestType_Callback;
					EarthView_World_Spatial_Theme_COGCWMSTheme_getType_EVThemeType_Callback* m_EarthView_World_Spatial_Theme_COGCWMSTheme_getType_EVThemeType_Callback;
					EarthView_World_Spatial_Theme_COGCWMSTheme_getCaption_EVString_Callback* m_EarthView_World_Spatial_Theme_COGCWMSTheme_getCaption_EVString_Callback;
					EarthView_World_Spatial_Theme_COGCWMSTheme_setCaption_void_EVString_Callback* m_EarthView_World_Spatial_Theme_COGCWMSTheme_setCaption_void_EVString_Callback;
					EarthView_World_Spatial_Theme_COGCWMSTheme_useDefaultSymbol_ev_bool_Callback* m_EarthView_World_Spatial_Theme_COGCWMSTheme_useDefaultSymbol_ev_bool_Callback;
					EarthView_World_Spatial_Theme_COGCWMSTheme_setUseDefaultSymbol_void_ev_bool_Callback* m_EarthView_World_Spatial_Theme_COGCWMSTheme_setUseDefaultSymbol_void_ev_bool_Callback;
					EarthView_World_Spatial_Theme_COGCWMSTheme_getDefaultSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Theme_COGCWMSTheme_getDefaultSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Theme_COGCWMSTheme_setDefaultSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Theme_COGCWMSTheme_setDefaultSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Theme_COGCWMSTheme_equals_ev_bool_ITheme_Callback* m_EarthView_World_Spatial_Theme_COGCWMSTheme_equals_ev_bool_ITheme_Callback;
					EarthView_World_Spatial_Theme_COGCWMSTheme_clone_ITheme_Callback* m_EarthView_World_Spatial_Theme_COGCWMSTheme_clone_ITheme_Callback;
					EarthView_World_Spatial_Theme_COGCWMSTheme_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Theme_COGCWMSTheme_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Theme_COGCWMSTheme_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Theme_COGCWMSTheme_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Theme_COGCWMSTheme_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Theme_COGCWMSTheme_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Theme_COGCWMSTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback* m_EarthView_World_Spatial_Theme_COGCWMSTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback;
					EarthView_World_Spatial_Theme_COGCWMSTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback* m_EarthView_World_Spatial_Theme_COGCWMSTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback;
					EarthView_World_Spatial_Theme_COGCWMSTheme_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Theme_COGCWMSTheme_fromStream_void_CDataStream_Callback;
				public:
					COGCWMSThemeProxy(EarthView::World::Core::CNameValuePairList *pList) : COGCWMSTheme(pList)
					{
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_setRequestType_void_EVOGCWMSRequestType_Callback = NULL;
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_getRequestType_EVOGCWMSRequestType_Callback = NULL;
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_getType_EVThemeType_Callback = NULL;
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_getCaption_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_setCaption_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_useDefaultSymbol_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_setUseDefaultSymbol_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_getDefaultSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_setDefaultSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_equals_ev_bool_ITheme_Callback = NULL;
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_clone_ITheme_Callback = NULL;
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_setRequestType_void_EVOGCWMSRequestType(EarthView_World_Spatial_Theme_COGCWMSTheme_setRequestType_void_EVOGCWMSRequestType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_setRequestType_void_EVOGCWMSRequestType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_getRequestType_EVOGCWMSRequestType(EarthView_World_Spatial_Theme_COGCWMSTheme_getRequestType_EVOGCWMSRequestType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_getRequestType_EVOGCWMSRequestType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_getType_EVThemeType(EarthView_World_Spatial_Theme_COGCWMSTheme_getType_EVThemeType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_getType_EVThemeType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_getCaption_EVString(EarthView_World_Spatial_Theme_COGCWMSTheme_getCaption_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_getCaption_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_setCaption_void_EVString(EarthView_World_Spatial_Theme_COGCWMSTheme_setCaption_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_setCaption_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_useDefaultSymbol_ev_bool(EarthView_World_Spatial_Theme_COGCWMSTheme_useDefaultSymbol_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_useDefaultSymbol_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_setUseDefaultSymbol_void_ev_bool(EarthView_World_Spatial_Theme_COGCWMSTheme_setUseDefaultSymbol_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_setUseDefaultSymbol_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_getDefaultSymbol_ISymbol(EarthView_World_Spatial_Theme_COGCWMSTheme_getDefaultSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_getDefaultSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_setDefaultSymbol_void_ISymbol(EarthView_World_Spatial_Theme_COGCWMSTheme_setDefaultSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_setDefaultSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_equals_ev_bool_ITheme(EarthView_World_Spatial_Theme_COGCWMSTheme_equals_ev_bool_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_equals_ev_bool_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_clone_ITheme(EarthView_World_Spatial_Theme_COGCWMSTheme_clone_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_clone_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_toStream_void_CDataStream(EarthView_World_Spatial_Theme_COGCWMSTheme_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_toXmlElement_CXmlElement(EarthView_World_Spatial_Theme_COGCWMSTheme_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Theme_COGCWMSTheme_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter(EarthView_World_Spatial_Theme_COGCWMSTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_onAfterQuery_void_IFeatureSelection_IGeometry(EarthView_World_Spatial_Theme_COGCWMSTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_fromStream_void_CDataStream(EarthView_World_Spatial_Theme_COGCWMSTheme_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_COGCWMSTheme_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Theme::ITheme* clone() const
					{
						if(m_EarthView_World_Spatial_Theme_COGCWMSTheme_clone_ITheme_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial_Theme_COGCWMSTheme_clone_ITheme_Callback();
							return returnValue;
						}
						else
							return this->COGCWMSTheme::clone();
					}
					virtual ev_bool equals(_in const EarthView::World::Spatial::Theme::ITheme* theme)
					{
						if(m_EarthView_World_Spatial_Theme_COGCWMSTheme_equals_ev_bool_ITheme_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Theme_COGCWMSTheme_equals_ev_bool_ITheme_Callback(theme);
							return returnValue;
						}
						else
							return this->COGCWMSTheme::equals(theme);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Theme_COGCWMSTheme_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Theme_COGCWMSTheme_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->COGCWMSTheme::toXmlElement();
					}
					virtual void fromXmlElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Theme_COGCWMSTheme_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_COGCWMSTheme_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->COGCWMSTheme::fromXmlElement(element);
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Theme_COGCWMSTheme_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_COGCWMSTheme_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->COGCWMSTheme::toStream(stream);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Theme_COGCWMSTheme_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_COGCWMSTheme_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->COGCWMSTheme::fromStream(stream);
					}
					virtual void setRequestType(_in EarthView::World::Spatial::Theme::COGCWMSTheme::EVOGCWMSRequestType requestType)
					{
						if(m_EarthView_World_Spatial_Theme_COGCWMSTheme_setRequestType_void_EVOGCWMSRequestType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_COGCWMSTheme_setRequestType_void_EVOGCWMSRequestType_Callback((int)requestType);
						}
						else
							return this->COGCWMSTheme::setRequestType(requestType);
					}
					virtual EarthView::World::Spatial::Theme::COGCWMSTheme::EVOGCWMSRequestType getRequestType()
					{
						if(m_EarthView_World_Spatial_Theme_COGCWMSTheme_getRequestType_EVOGCWMSRequestType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::COGCWMSTheme::EVOGCWMSRequestType returnValue = (EarthView::World::Spatial::Theme::COGCWMSTheme::EVOGCWMSRequestType)m_EarthView_World_Spatial_Theme_COGCWMSTheme_getRequestType_EVOGCWMSRequestType_Callback();
							return returnValue;
						}
						else
							return this->COGCWMSTheme::getRequestType();
					}
					virtual EarthView::World::Spatial::Theme::EVThemeType getType() const
					{
						if(m_EarthView_World_Spatial_Theme_COGCWMSTheme_getType_EVThemeType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::EVThemeType returnValue = (EarthView::World::Spatial::Theme::EVThemeType)m_EarthView_World_Spatial_Theme_COGCWMSTheme_getType_EVThemeType_Callback();
							return returnValue;
						}
						else
							return this->COGCWMSTheme::getType();
					}
					virtual EVString getCaption() const
					{
						if(m_EarthView_World_Spatial_Theme_COGCWMSTheme_getCaption_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Theme_COGCWMSTheme_getCaption_EVString_Callback();
							return returnValue;
						}
						else
							return this->COGCWMSTheme::getCaption();
					}
					virtual void setCaption(_in const EVString& caption)
					{
						if(m_EarthView_World_Spatial_Theme_COGCWMSTheme_setCaption_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* caption_Char = caption.makeBuffer();
							m_EarthView_World_Spatial_Theme_COGCWMSTheme_setCaption_void_EVString_Callback(caption_Char);
						}
						else
							return this->COGCWMSTheme::setCaption(caption);
					}
					virtual ev_bool useDefaultSymbol() const
					{
						if(m_EarthView_World_Spatial_Theme_COGCWMSTheme_useDefaultSymbol_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Theme_COGCWMSTheme_useDefaultSymbol_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->COGCWMSTheme::useDefaultSymbol();
					}
					virtual void setUseDefaultSymbol(_in ev_bool usable)
					{
						if(m_EarthView_World_Spatial_Theme_COGCWMSTheme_setUseDefaultSymbol_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_COGCWMSTheme_setUseDefaultSymbol_void_ev_bool_Callback(usable);
						}
						else
							return this->COGCWMSTheme::setUseDefaultSymbol(usable);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getDefaultSymbol() const
					{
						if(m_EarthView_World_Spatial_Theme_COGCWMSTheme_getDefaultSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Theme_COGCWMSTheme_getDefaultSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->COGCWMSTheme::getDefaultSymbol();
					}
					virtual void setDefaultSymbol(_in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Theme_COGCWMSTheme_setDefaultSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_COGCWMSTheme_setDefaultSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->COGCWMSTheme::setDefaultSymbol(symbol);
					}
					virtual void onBeforeQuery(_in EarthView::World::Spatial::GeoDataset::IFeatureClass* fc, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial_Theme_COGCWMSTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_COGCWMSTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback(fc, filter);
						}
						else
							return this->COGCWMSTheme::onBeforeQuery(fc, filter);
					}
					virtual void onAfterQuery(_in EarthView::World::Spatial::GeoDataset::IFeatureSelection* fs, _in EarthView::World::Spatial::Geometry::IGeometry* dst)
					{
						if(m_EarthView_World_Spatial_Theme_COGCWMSTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_COGCWMSTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback(fs, dst);
						}
						else
							return this->COGCWMSTheme::onAfterQuery(fs, dst);
					}
				};
				REGISTER_FACTORY_CLASS(COGCWMSThemeProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_setBackColor_void_ev_int32_ev_int32_ev_int32_ev_bool(void *pObjectXXXX, _in ev_int32 r, _in ev_int32 g, _in ev_int32 b, _in ev_bool trans )
				{
					EarthView::World::Spatial::Theme::COGCWMSTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX;
					ptrNativeObject->setBackColor(r, g, b, trans);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_getBackColor_void_ev_int32_ev_int32_ev_int32_ev_bool(void *pObjectXXXX, _inout ev_int32& r, _inout ev_int32& g, _inout ev_int32& b, _inout ev_bool& trans )
				{
					EarthView::World::Spatial::Theme::COGCWMSTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX;
					ptrNativeObject->getBackColor(r, g, b, trans);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_getRequestStyle_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Theme::COGCWMSTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getRequestStyle();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_setRequestStyle_void_EVString(void *pObjectXXXX, _in char* style )
				{
					EarthView::World::Core::ev_string style1 = style;
					EarthView::World::Spatial::Theme::COGCWMSTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX;
					ptrNativeObject->setRequestStyle(style1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_getRequestFormat_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Theme::COGCWMSTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getRequestFormat();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_setRequestFormat_void_EVString(void *pObjectXXXX, _in char* format )
				{
					EarthView::World::Core::ev_string format1 = format;
					EarthView::World::Spatial::Theme::COGCWMSTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX;
					ptrNativeObject->setRequestFormat(format1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_clone_ITheme(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::COGCWMSTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX;
					if (dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::COGCWMSTheme::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_clone_ITheme( void *pObjectXXXX, EarthView_World_Spatial_Theme_COGCWMSTheme_clone_ITheme_Callback* pCallback )
				{
					COGCWMSThemeProxy* ptr = dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_clone_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_clone_ITheme_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::COGCWMSTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::COGCWMSTheme::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_equals_ev_bool_ITheme(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial::Theme::COGCWMSTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX;
					if (dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::COGCWMSTheme::equals(theme);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equals(theme);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_equals_ev_bool_ITheme( void *pObjectXXXX, EarthView_World_Spatial_Theme_COGCWMSTheme_equals_ev_bool_ITheme_Callback* pCallback )
				{
					COGCWMSThemeProxy* ptr = dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_equals_ev_bool_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_equals_ev_bool_ITheme_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial::Theme::COGCWMSTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::COGCWMSTheme::equals(theme);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::COGCWMSTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX;
					if (dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::COGCWMSTheme::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Theme_COGCWMSTheme_toXmlElement_CXmlElement_Callback* pCallback )
				{
					COGCWMSThemeProxy* ptr = dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::COGCWMSTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::COGCWMSTheme::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Theme::COGCWMSTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX;
					if (dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::COGCWMSTheme::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Theme_COGCWMSTheme_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					COGCWMSThemeProxy* ptr = dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Theme::COGCWMSTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::COGCWMSTheme::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Theme::COGCWMSTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX;
					if (dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::COGCWMSTheme::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Theme_COGCWMSTheme_toStream_void_CDataStream_Callback* pCallback )
				{
					COGCWMSThemeProxy* ptr = dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Theme::COGCWMSTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::COGCWMSTheme::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Theme::COGCWMSTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX;
					if (dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::COGCWMSTheme::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Theme_COGCWMSTheme_fromStream_void_CDataStream_Callback* pCallback )
				{
					COGCWMSThemeProxy* ptr = dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Theme::COGCWMSTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::COGCWMSTheme::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_setRequestType_void_EVOGCWMSRequestType(void *pObjectXXXX, _in int requestType )
				{
					EarthView::World::Spatial::Theme::COGCWMSTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX;
					if (dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::COGCWMSTheme::setRequestType((EarthView::World::Spatial::Theme::COGCWMSTheme::EVOGCWMSRequestType)requestType);
					else
						ptrNativeObject->setRequestType((EarthView::World::Spatial::Theme::COGCWMSTheme::EVOGCWMSRequestType)requestType);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_setRequestType_void_EVOGCWMSRequestType( void *pObjectXXXX, EarthView_World_Spatial_Theme_COGCWMSTheme_setRequestType_void_EVOGCWMSRequestType_Callback* pCallback )
				{
					COGCWMSThemeProxy* ptr = dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_setRequestType_void_EVOGCWMSRequestType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_setRequestType_void_EVOGCWMSRequestType_NoVirtual(void *pObjectXXXX, _in int requestType )
				{
					EarthView::World::Spatial::Theme::COGCWMSTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::COGCWMSTheme::setRequestType((EarthView::World::Spatial::Theme::COGCWMSTheme::EVOGCWMSRequestType)requestType);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_getRequestType_EVOGCWMSRequestType(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Theme::COGCWMSTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX;
					if (dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::COGCWMSTheme::EVOGCWMSRequestType objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::COGCWMSTheme::getRequestType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::COGCWMSTheme::EVOGCWMSRequestType objXXXX = ptrNativeObject->getRequestType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_getRequestType_EVOGCWMSRequestType( void *pObjectXXXX, EarthView_World_Spatial_Theme_COGCWMSTheme_getRequestType_EVOGCWMSRequestType_Callback* pCallback )
				{
					COGCWMSThemeProxy* ptr = dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_getRequestType_EVOGCWMSRequestType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Theme_COGCWMSTheme_getRequestType_EVOGCWMSRequestType_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Theme::COGCWMSTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX;
					EarthView::World::Spatial::Theme::COGCWMSTheme::EVOGCWMSRequestType objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::COGCWMSTheme::getRequestType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_getType_EVThemeType( void *pObjectXXXX, EarthView_World_Spatial_Theme_COGCWMSTheme_getType_EVThemeType_Callback* pCallback )
				{
					COGCWMSThemeProxy* ptr = dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_getType_EVThemeType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_getCaption_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_COGCWMSTheme_getCaption_EVString_Callback* pCallback )
				{
					COGCWMSThemeProxy* ptr = dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_getCaption_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_setCaption_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_COGCWMSTheme_setCaption_void_EVString_Callback* pCallback )
				{
					COGCWMSThemeProxy* ptr = dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_setCaption_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_useDefaultSymbol_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Theme_COGCWMSTheme_useDefaultSymbol_ev_bool_Callback* pCallback )
				{
					COGCWMSThemeProxy* ptr = dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_useDefaultSymbol_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_setUseDefaultSymbol_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Theme_COGCWMSTheme_setUseDefaultSymbol_void_ev_bool_Callback* pCallback )
				{
					COGCWMSThemeProxy* ptr = dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_setUseDefaultSymbol_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_getDefaultSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_COGCWMSTheme_getDefaultSymbol_ISymbol_Callback* pCallback )
				{
					COGCWMSThemeProxy* ptr = dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_getDefaultSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_setDefaultSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_COGCWMSTheme_setDefaultSymbol_void_ISymbol_Callback* pCallback )
				{
					COGCWMSThemeProxy* ptr = dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_setDefaultSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial_Theme_COGCWMSTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback* pCallback )
				{
					COGCWMSThemeProxy* ptr = dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_onAfterQuery_void_IFeatureSelection_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Theme_COGCWMSTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback* pCallback )
				{
					COGCWMSThemeProxy* ptr = dynamic_cast<COGCWMSThemeProxy*>((EarthView::World::Spatial::Theme::COGCWMSTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_COGCWMSTheme_onAfterQuery_void_IFeatureSelection_IGeometry(pCallback);
					}
				}
			}
		}
	}
}
