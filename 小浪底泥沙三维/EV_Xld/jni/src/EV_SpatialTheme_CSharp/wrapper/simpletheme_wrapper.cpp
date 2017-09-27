/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialtheme/simpletheme.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Theme
			{
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_getSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_setSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef int  ( _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_getType_EVThemeType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_getCaption_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_setCaption_void_EVString_Callback)(_in char*& caption);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_useDefaultSymbol_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_setUseDefaultSymbol_void_ev_bool_Callback)(_in ev_bool usable);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_getDefaultSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_setDefaultSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_equals_ev_bool_ITheme_Callback)(_in const EarthView::World::Spatial::Theme::ITheme* theme);
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_clone_ITheme_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef void*  ( _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_fromXmlElement_void_CXmlElement_Callback)(_inout void* element);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IFeatureClass* fc, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback)(_in EarthView::World::Spatial::GeoDataset::IFeatureSelection* fs, _in EarthView::World::Spatial::Geometry::IGeometry* dst);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CSimpleThemeProxy : public EarthView::World::Spatial::Theme::CSimpleTheme
				{
				private:
					EarthView_World_Spatial_Theme_CSimpleTheme_getSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Theme_CSimpleTheme_getSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Theme_CSimpleTheme_setSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Theme_CSimpleTheme_setSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Theme_CSimpleTheme_getType_EVThemeType_Callback* m_EarthView_World_Spatial_Theme_CSimpleTheme_getType_EVThemeType_Callback;
					EarthView_World_Spatial_Theme_CSimpleTheme_getCaption_EVString_Callback* m_EarthView_World_Spatial_Theme_CSimpleTheme_getCaption_EVString_Callback;
					EarthView_World_Spatial_Theme_CSimpleTheme_setCaption_void_EVString_Callback* m_EarthView_World_Spatial_Theme_CSimpleTheme_setCaption_void_EVString_Callback;
					EarthView_World_Spatial_Theme_CSimpleTheme_useDefaultSymbol_ev_bool_Callback* m_EarthView_World_Spatial_Theme_CSimpleTheme_useDefaultSymbol_ev_bool_Callback;
					EarthView_World_Spatial_Theme_CSimpleTheme_setUseDefaultSymbol_void_ev_bool_Callback* m_EarthView_World_Spatial_Theme_CSimpleTheme_setUseDefaultSymbol_void_ev_bool_Callback;
					EarthView_World_Spatial_Theme_CSimpleTheme_getDefaultSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Theme_CSimpleTheme_getDefaultSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Theme_CSimpleTheme_setDefaultSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Theme_CSimpleTheme_setDefaultSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Theme_CSimpleTheme_equals_ev_bool_ITheme_Callback* m_EarthView_World_Spatial_Theme_CSimpleTheme_equals_ev_bool_ITheme_Callback;
					EarthView_World_Spatial_Theme_CSimpleTheme_clone_ITheme_Callback* m_EarthView_World_Spatial_Theme_CSimpleTheme_clone_ITheme_Callback;
					EarthView_World_Spatial_Theme_CSimpleTheme_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Theme_CSimpleTheme_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Theme_CSimpleTheme_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Theme_CSimpleTheme_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Theme_CSimpleTheme_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Theme_CSimpleTheme_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Theme_CSimpleTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback* m_EarthView_World_Spatial_Theme_CSimpleTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback;
					EarthView_World_Spatial_Theme_CSimpleTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback* m_EarthView_World_Spatial_Theme_CSimpleTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback;
					EarthView_World_Spatial_Theme_CSimpleTheme_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Theme_CSimpleTheme_fromStream_void_CDataStream_Callback;
				public:
					CSimpleThemeProxy(EarthView::World::Core::CNameValuePairList *pList) : CSimpleTheme(pList)
					{
						m_EarthView_World_Spatial_Theme_CSimpleTheme_getSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CSimpleTheme_setSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CSimpleTheme_getType_EVThemeType_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CSimpleTheme_getCaption_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CSimpleTheme_setCaption_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CSimpleTheme_useDefaultSymbol_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CSimpleTheme_setUseDefaultSymbol_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CSimpleTheme_getDefaultSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CSimpleTheme_setDefaultSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CSimpleTheme_equals_ev_bool_ITheme_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CSimpleTheme_clone_ITheme_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CSimpleTheme_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CSimpleTheme_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CSimpleTheme_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CSimpleTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CSimpleTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Theme_CSimpleTheme_fromStream_void_CDataStream_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CSimpleThemeProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_getSymbol_ISymbol(EarthView_World_Spatial_Theme_CSimpleTheme_getSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CSimpleTheme_getSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_setSymbol_void_ISymbol(EarthView_World_Spatial_Theme_CSimpleTheme_setSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CSimpleTheme_setSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_getType_EVThemeType(EarthView_World_Spatial_Theme_CSimpleTheme_getType_EVThemeType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CSimpleTheme_getType_EVThemeType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_getCaption_EVString(EarthView_World_Spatial_Theme_CSimpleTheme_getCaption_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CSimpleTheme_getCaption_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_setCaption_void_EVString(EarthView_World_Spatial_Theme_CSimpleTheme_setCaption_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CSimpleTheme_setCaption_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_useDefaultSymbol_ev_bool(EarthView_World_Spatial_Theme_CSimpleTheme_useDefaultSymbol_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CSimpleTheme_useDefaultSymbol_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_setUseDefaultSymbol_void_ev_bool(EarthView_World_Spatial_Theme_CSimpleTheme_setUseDefaultSymbol_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CSimpleTheme_setUseDefaultSymbol_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_getDefaultSymbol_ISymbol(EarthView_World_Spatial_Theme_CSimpleTheme_getDefaultSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CSimpleTheme_getDefaultSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_setDefaultSymbol_void_ISymbol(EarthView_World_Spatial_Theme_CSimpleTheme_setDefaultSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CSimpleTheme_setDefaultSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_equals_ev_bool_ITheme(EarthView_World_Spatial_Theme_CSimpleTheme_equals_ev_bool_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CSimpleTheme_equals_ev_bool_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_clone_ITheme(EarthView_World_Spatial_Theme_CSimpleTheme_clone_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CSimpleTheme_clone_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_toStream_void_CDataStream(EarthView_World_Spatial_Theme_CSimpleTheme_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CSimpleTheme_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_toXmlElement_CXmlElement(EarthView_World_Spatial_Theme_CSimpleTheme_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CSimpleTheme_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Theme_CSimpleTheme_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CSimpleTheme_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter(EarthView_World_Spatial_Theme_CSimpleTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CSimpleTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_onAfterQuery_void_IFeatureSelection_IGeometry(EarthView_World_Spatial_Theme_CSimpleTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CSimpleTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_fromStream_void_CDataStream(EarthView_World_Spatial_Theme_CSimpleTheme_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_CSimpleTheme_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Theme::EVThemeType getType() const
					{
						if(m_EarthView_World_Spatial_Theme_CSimpleTheme_getType_EVThemeType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::EVThemeType returnValue = (EarthView::World::Spatial::Theme::EVThemeType)m_EarthView_World_Spatial_Theme_CSimpleTheme_getType_EVThemeType_Callback();
							return returnValue;
						}
						else
							return this->CSimpleTheme::getType();
					}
					virtual EVString getCaption() const
					{
						if(m_EarthView_World_Spatial_Theme_CSimpleTheme_getCaption_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Theme_CSimpleTheme_getCaption_EVString_Callback();
							return returnValue;
						}
						else
							return this->CSimpleTheme::getCaption();
					}
					virtual void setCaption(_in const EVString& caption)
					{
						if(m_EarthView_World_Spatial_Theme_CSimpleTheme_setCaption_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* caption_Char = caption.makeBuffer();
							m_EarthView_World_Spatial_Theme_CSimpleTheme_setCaption_void_EVString_Callback(caption_Char);
						}
						else
							return this->CSimpleTheme::setCaption(caption);
					}
					virtual ev_bool useDefaultSymbol() const
					{
						if(m_EarthView_World_Spatial_Theme_CSimpleTheme_useDefaultSymbol_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Theme_CSimpleTheme_useDefaultSymbol_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CSimpleTheme::useDefaultSymbol();
					}
					virtual void setUseDefaultSymbol(_in ev_bool usable)
					{
						if(m_EarthView_World_Spatial_Theme_CSimpleTheme_setUseDefaultSymbol_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CSimpleTheme_setUseDefaultSymbol_void_ev_bool_Callback(usable);
						}
						else
							return this->CSimpleTheme::setUseDefaultSymbol(usable);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getDefaultSymbol() const
					{
						if(m_EarthView_World_Spatial_Theme_CSimpleTheme_getDefaultSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Theme_CSimpleTheme_getDefaultSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CSimpleTheme::getDefaultSymbol();
					}
					virtual void setDefaultSymbol(_in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Theme_CSimpleTheme_setDefaultSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CSimpleTheme_setDefaultSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->CSimpleTheme::setDefaultSymbol(symbol);
					}
					virtual EarthView::World::Spatial::Theme::ITheme* clone() const
					{
						if(m_EarthView_World_Spatial_Theme_CSimpleTheme_clone_ITheme_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial_Theme_CSimpleTheme_clone_ITheme_Callback();
							return returnValue;
						}
						else
							return this->CSimpleTheme::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Theme_CSimpleTheme_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CSimpleTheme_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CSimpleTheme::toStream(stream);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Theme_CSimpleTheme_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Theme_CSimpleTheme_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CSimpleTheme::toXmlElement();
					}
					virtual void fromXmlElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Theme_CSimpleTheme_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CSimpleTheme_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CSimpleTheme::fromXmlElement(element);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getSymbol() const
					{
						if(m_EarthView_World_Spatial_Theme_CSimpleTheme_getSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Theme_CSimpleTheme_getSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CSimpleTheme::getSymbol();
					}
					virtual void setSymbol(_in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Theme_CSimpleTheme_setSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CSimpleTheme_setSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->CSimpleTheme::setSymbol(symbol);
					}
					virtual ev_bool equals(_in const EarthView::World::Spatial::Theme::ITheme* theme)
					{
						if(m_EarthView_World_Spatial_Theme_CSimpleTheme_equals_ev_bool_ITheme_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Theme_CSimpleTheme_equals_ev_bool_ITheme_Callback(theme);
							return returnValue;
						}
						else
							return this->CSimpleTheme::equals(theme);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Theme_CSimpleTheme_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CSimpleTheme_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CSimpleTheme::fromStream(stream);
					}
					virtual void onBeforeQuery(_in EarthView::World::Spatial::GeoDataset::IFeatureClass* fc, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial_Theme_CSimpleTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CSimpleTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback(fc, filter);
						}
						else
							return this->CSimpleTheme::onBeforeQuery(fc, filter);
					}
					virtual void onAfterQuery(_in EarthView::World::Spatial::GeoDataset::IFeatureSelection* fs, _in EarthView::World::Spatial::Geometry::IGeometry* dst)
					{
						if(m_EarthView_World_Spatial_Theme_CSimpleTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_CSimpleTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback(fs, dst);
						}
						else
							return this->CSimpleTheme::onAfterQuery(fs, dst);
					}
				};
				REGISTER_FACTORY_CLASS(CSimpleThemeProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_getType_EVThemeType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					if (dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::EVThemeType objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::EVThemeType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CSimpleTheme_getType_EVThemeType( void *pObjectXXXX, EarthView_World_Spatial_Theme_CSimpleTheme_getType_EVThemeType_Callback* pCallback )
				{
					CSimpleThemeProxy* ptr = dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_getType_EVThemeType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_getType_EVThemeType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					EarthView::World::Spatial::Theme::EVThemeType objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_getCaption_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					if (dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::getCaption();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getCaption();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CSimpleTheme_getCaption_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CSimpleTheme_getCaption_EVString_Callback* pCallback )
				{
					CSimpleThemeProxy* ptr = dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_getCaption_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_getCaption_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::getCaption();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_setCaption_void_EVString(void *pObjectXXXX, _in const char* caption )
				{
					EarthView::World::Core::ev_string caption1 = caption;
					EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					if (dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::setCaption(caption1);
					else
						ptrNativeObject->setCaption(caption1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CSimpleTheme_setCaption_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_CSimpleTheme_setCaption_void_EVString_Callback* pCallback )
				{
					CSimpleThemeProxy* ptr = dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_setCaption_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_setCaption_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* caption )
				{
					EarthView::World::Core::ev_string caption1 = caption;
					EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::setCaption(caption1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_useDefaultSymbol_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					if (dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::useDefaultSymbol();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->useDefaultSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CSimpleTheme_useDefaultSymbol_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Theme_CSimpleTheme_useDefaultSymbol_ev_bool_Callback* pCallback )
				{
					CSimpleThemeProxy* ptr = dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_useDefaultSymbol_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_useDefaultSymbol_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::useDefaultSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_setUseDefaultSymbol_void_ev_bool(void *pObjectXXXX, _in ev_bool usable )
				{
					EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					if (dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::setUseDefaultSymbol(usable);
					else
						ptrNativeObject->setUseDefaultSymbol(usable);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CSimpleTheme_setUseDefaultSymbol_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Theme_CSimpleTheme_setUseDefaultSymbol_void_ev_bool_Callback* pCallback )
				{
					CSimpleThemeProxy* ptr = dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_setUseDefaultSymbol_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_setUseDefaultSymbol_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool usable )
				{
					EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::setUseDefaultSymbol(usable);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_getDefaultSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					if (dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::getDefaultSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getDefaultSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CSimpleTheme_getDefaultSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_CSimpleTheme_getDefaultSymbol_ISymbol_Callback* pCallback )
				{
					CSimpleThemeProxy* ptr = dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_getDefaultSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_getDefaultSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::getDefaultSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_setDefaultSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					if (dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::setDefaultSymbol(symbol);
					else
						ptrNativeObject->setDefaultSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CSimpleTheme_setDefaultSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_CSimpleTheme_setDefaultSymbol_void_ISymbol_Callback* pCallback )
				{
					CSimpleThemeProxy* ptr = dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_setDefaultSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_setDefaultSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::setDefaultSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_clone_ITheme(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					if (dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CSimpleTheme_clone_ITheme( void *pObjectXXXX, EarthView_World_Spatial_Theme_CSimpleTheme_clone_ITheme_Callback* pCallback )
				{
					CSimpleThemeProxy* ptr = dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_clone_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_clone_ITheme_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					if (dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CSimpleTheme_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Theme_CSimpleTheme_toStream_void_CDataStream_Callback* pCallback )
				{
					CSimpleThemeProxy* ptr = dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					if (dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CSimpleTheme_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Theme_CSimpleTheme_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CSimpleThemeProxy* ptr = dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					if (dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CSimpleTheme_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Theme_CSimpleTheme_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CSimpleThemeProxy* ptr = dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_getSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					if (dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::getSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CSimpleTheme_getSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_CSimpleTheme_getSymbol_ISymbol_Callback* pCallback )
				{
					CSimpleThemeProxy* ptr = dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_getSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_getSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::getSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_setSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					if (dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::setSymbol(symbol);
					else
						ptrNativeObject->setSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CSimpleTheme_setSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_CSimpleTheme_setSymbol_void_ISymbol_Callback* pCallback )
				{
					CSimpleThemeProxy* ptr = dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_setSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_setSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::setSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_equals_ev_bool_ITheme(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					if (dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::equals(theme);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equals(theme);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CSimpleTheme_equals_ev_bool_ITheme( void *pObjectXXXX, EarthView_World_Spatial_Theme_CSimpleTheme_equals_ev_bool_ITheme_Callback* pCallback )
				{
					CSimpleThemeProxy* ptr = dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_equals_ev_bool_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_equals_ev_bool_ITheme_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::equals(theme);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_getGradeDrawEnable_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->getGradeDrawEnable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_setGradeDrawEnable_void_ev_bool(void *pObjectXXXX, _in ev_bool bFlag )
				{
					EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					ptrNativeObject->setGradeDrawEnable(bFlag);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					if (dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CSimpleTheme_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Theme_CSimpleTheme_fromStream_void_CDataStream_Callback* pCallback )
				{
					CSimpleThemeProxy* ptr = dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_CSimpleTheme_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Theme::CSimpleTheme* ptrNativeObject = (EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::CSimpleTheme::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CSimpleTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial_Theme_CSimpleTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback* pCallback )
				{
					CSimpleThemeProxy* ptr = dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_onBeforeQuery_void_IFeatureClass_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_CSimpleTheme_onAfterQuery_void_IFeatureSelection_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Theme_CSimpleTheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback* pCallback )
				{
					CSimpleThemeProxy* ptr = dynamic_cast<CSimpleThemeProxy*>((EarthView::World::Spatial::Theme::CSimpleTheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_CSimpleTheme_onAfterQuery_void_IFeatureSelection_IGeometry(pCallback);
					}
				}
			}
		}
	}
}
