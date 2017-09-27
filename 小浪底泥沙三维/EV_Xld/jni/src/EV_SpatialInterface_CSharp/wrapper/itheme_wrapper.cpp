/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/itheme.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
			namespace Geometry
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Theme
			{
				typedef int  ( _stdcall EarthView_World_Spatial_Theme_ITheme_getType_EVThemeType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Theme_ITheme_getCaption_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_ITheme_setCaption_void_EVString_Callback)(_in char*& caption);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Theme_ITheme_useDefaultSymbol_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_ITheme_setUseDefaultSymbol_void_ev_bool_Callback)(_in ev_bool usable);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Theme_ITheme_getDefaultSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_ITheme_setDefaultSymbol_void_ISymbol_Callback)(_in const EarthView::World::Spatial::Display::ISymbol* symbol);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Theme_ITheme_equals_ev_bool_ITheme_Callback)(_in const EarthView::World::Spatial::Theme::ITheme* theme);
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial_Theme_ITheme_clone_ITheme_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_ITheme_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef void*  ( _stdcall EarthView_World_Spatial_Theme_ITheme_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_ITheme_fromXmlElement_void_CXmlElement_Callback)(_inout void* element);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_ITheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IFeatureClass* fc, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_ITheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback)(_in EarthView::World::Spatial::GeoDataset::IFeatureSelection* fs, _in EarthView::World::Spatial::Geometry::IGeometry* dst);
				typedef void  ( _stdcall EarthView_World_Spatial_Theme_ITheme_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class IThemeProxy : public EarthView::World::Spatial::Theme::ITheme
				{
				private:
					EarthView_World_Spatial_Theme_ITheme_getType_EVThemeType_Callback* m_EarthView_World_Spatial_Theme_ITheme_getType_EVThemeType_Callback;
					EarthView_World_Spatial_Theme_ITheme_getCaption_EVString_Callback* m_EarthView_World_Spatial_Theme_ITheme_getCaption_EVString_Callback;
					EarthView_World_Spatial_Theme_ITheme_setCaption_void_EVString_Callback* m_EarthView_World_Spatial_Theme_ITheme_setCaption_void_EVString_Callback;
					EarthView_World_Spatial_Theme_ITheme_useDefaultSymbol_ev_bool_Callback* m_EarthView_World_Spatial_Theme_ITheme_useDefaultSymbol_ev_bool_Callback;
					EarthView_World_Spatial_Theme_ITheme_setUseDefaultSymbol_void_ev_bool_Callback* m_EarthView_World_Spatial_Theme_ITheme_setUseDefaultSymbol_void_ev_bool_Callback;
					EarthView_World_Spatial_Theme_ITheme_getDefaultSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Theme_ITheme_getDefaultSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Theme_ITheme_setDefaultSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Theme_ITheme_setDefaultSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Theme_ITheme_equals_ev_bool_ITheme_Callback* m_EarthView_World_Spatial_Theme_ITheme_equals_ev_bool_ITheme_Callback;
					EarthView_World_Spatial_Theme_ITheme_clone_ITheme_Callback* m_EarthView_World_Spatial_Theme_ITheme_clone_ITheme_Callback;
					EarthView_World_Spatial_Theme_ITheme_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Theme_ITheme_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Theme_ITheme_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Theme_ITheme_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Theme_ITheme_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Theme_ITheme_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Theme_ITheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback* m_EarthView_World_Spatial_Theme_ITheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback;
					EarthView_World_Spatial_Theme_ITheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback* m_EarthView_World_Spatial_Theme_ITheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback;
					EarthView_World_Spatial_Theme_ITheme_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Theme_ITheme_fromStream_void_CDataStream_Callback;
				public:
					IThemeProxy(EarthView::World::Core::CNameValuePairList *pList) : ITheme(pList)
					{
						m_EarthView_World_Spatial_Theme_ITheme_getType_EVThemeType_Callback = NULL;
						m_EarthView_World_Spatial_Theme_ITheme_getCaption_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_ITheme_setCaption_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Theme_ITheme_useDefaultSymbol_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Theme_ITheme_setUseDefaultSymbol_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Theme_ITheme_getDefaultSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_ITheme_setDefaultSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Theme_ITheme_equals_ev_bool_ITheme_Callback = NULL;
						m_EarthView_World_Spatial_Theme_ITheme_clone_ITheme_Callback = NULL;
						m_EarthView_World_Spatial_Theme_ITheme_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Theme_ITheme_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Theme_ITheme_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Theme_ITheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial_Theme_ITheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback = NULL;
						m_EarthView_World_Spatial_Theme_ITheme_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Theme_ITheme_getType_EVThemeType(EarthView_World_Spatial_Theme_ITheme_getType_EVThemeType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_ITheme_getType_EVThemeType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_ITheme_getCaption_EVString(EarthView_World_Spatial_Theme_ITheme_getCaption_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_ITheme_getCaption_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_ITheme_setCaption_void_EVString(EarthView_World_Spatial_Theme_ITheme_setCaption_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_ITheme_setCaption_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_ITheme_useDefaultSymbol_ev_bool(EarthView_World_Spatial_Theme_ITheme_useDefaultSymbol_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_ITheme_useDefaultSymbol_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_ITheme_setUseDefaultSymbol_void_ev_bool(EarthView_World_Spatial_Theme_ITheme_setUseDefaultSymbol_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_ITheme_setUseDefaultSymbol_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_ITheme_getDefaultSymbol_ISymbol(EarthView_World_Spatial_Theme_ITheme_getDefaultSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_ITheme_getDefaultSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_ITheme_setDefaultSymbol_void_ISymbol(EarthView_World_Spatial_Theme_ITheme_setDefaultSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_ITheme_setDefaultSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_ITheme_equals_ev_bool_ITheme(EarthView_World_Spatial_Theme_ITheme_equals_ev_bool_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_ITheme_equals_ev_bool_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_ITheme_clone_ITheme(EarthView_World_Spatial_Theme_ITheme_clone_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_ITheme_clone_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_ITheme_toStream_void_CDataStream(EarthView_World_Spatial_Theme_ITheme_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_ITheme_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_ITheme_toXmlElement_CXmlElement(EarthView_World_Spatial_Theme_ITheme_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_ITheme_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_ITheme_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Theme_ITheme_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_ITheme_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_ITheme_onBeforeQuery_void_IFeatureClass_IQueryFilter(EarthView_World_Spatial_Theme_ITheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_ITheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_ITheme_onAfterQuery_void_IFeatureSelection_IGeometry(EarthView_World_Spatial_Theme_ITheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_ITheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Theme_ITheme_fromStream_void_CDataStream(EarthView_World_Spatial_Theme_ITheme_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Theme_ITheme_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Theme::EVThemeType getType() const
					{
						if(m_EarthView_World_Spatial_Theme_ITheme_getType_EVThemeType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::EVThemeType returnValue = (EarthView::World::Spatial::Theme::EVThemeType)m_EarthView_World_Spatial_Theme_ITheme_getType_EVThemeType_Callback();
							return returnValue;
						}
						else
							return this->ITheme::getType();
					}
					virtual EVString getCaption() const
					{
						if(m_EarthView_World_Spatial_Theme_ITheme_getCaption_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Theme_ITheme_getCaption_EVString_Callback();
							return returnValue;
						}
						else
							return this->ITheme::getCaption();
					}
					virtual void setCaption(_in const EVString& caption)
					{
						if(m_EarthView_World_Spatial_Theme_ITheme_setCaption_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* caption_Char = caption.makeBuffer();
							m_EarthView_World_Spatial_Theme_ITheme_setCaption_void_EVString_Callback(caption_Char);
						}
						else
							return this->ITheme::setCaption(caption);
					}
					virtual ev_bool useDefaultSymbol() const
					{
						if(m_EarthView_World_Spatial_Theme_ITheme_useDefaultSymbol_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Theme_ITheme_useDefaultSymbol_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ITheme::useDefaultSymbol();
					}
					virtual void setUseDefaultSymbol(_in ev_bool usable)
					{
						if(m_EarthView_World_Spatial_Theme_ITheme_setUseDefaultSymbol_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_ITheme_setUseDefaultSymbol_void_ev_bool_Callback(usable);
						}
						else
							return this->ITheme::setUseDefaultSymbol(usable);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getDefaultSymbol() const
					{
						if(m_EarthView_World_Spatial_Theme_ITheme_getDefaultSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Theme_ITheme_getDefaultSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->ITheme::getDefaultSymbol();
					}
					virtual void setDefaultSymbol(_in const EarthView::World::Spatial::Display::ISymbol* symbol)
					{
						if(m_EarthView_World_Spatial_Theme_ITheme_setDefaultSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_ITheme_setDefaultSymbol_void_ISymbol_Callback(symbol);
						}
						else
							return this->ITheme::setDefaultSymbol(symbol);
					}
					virtual ev_bool equals(_in const EarthView::World::Spatial::Theme::ITheme* theme)
					{
						if(m_EarthView_World_Spatial_Theme_ITheme_equals_ev_bool_ITheme_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Theme_ITheme_equals_ev_bool_ITheme_Callback(theme);
							return returnValue;
						}
						else
							return this->ITheme::equals(theme);
					}
					virtual EarthView::World::Spatial::Theme::ITheme* clone() const
					{
						if(m_EarthView_World_Spatial_Theme_ITheme_clone_ITheme_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial_Theme_ITheme_clone_ITheme_Callback();
							return returnValue;
						}
						else
							return this->ITheme::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Theme_ITheme_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_ITheme_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->ITheme::toStream(stream);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Theme_ITheme_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Theme_ITheme_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->ITheme::toXmlElement();
					}
					virtual void fromXmlElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Theme_ITheme_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_ITheme_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->ITheme::fromXmlElement(element);
					}
					virtual void onBeforeQuery(_in EarthView::World::Spatial::GeoDataset::IFeatureClass* fc, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial_Theme_ITheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_ITheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback(fc, filter);
						}
						else
							return this->ITheme::onBeforeQuery(fc, filter);
					}
					virtual void onAfterQuery(_in EarthView::World::Spatial::GeoDataset::IFeatureSelection* fs, _in EarthView::World::Spatial::Geometry::IGeometry* dst)
					{
						if(m_EarthView_World_Spatial_Theme_ITheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_ITheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback(fs, dst);
						}
						else
							return this->ITheme::onAfterQuery(fs, dst);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Theme_ITheme_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Theme_ITheme_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->ITheme::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(IThemeProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Theme_ITheme_getType_EVThemeType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					if (dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::EVThemeType objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::EVThemeType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_ITheme_getType_EVThemeType( void *pObjectXXXX, EarthView_World_Spatial_Theme_ITheme_getType_EVThemeType_Callback* pCallback )
				{
					IThemeProxy* ptr = dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_ITheme_getType_EVThemeType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Theme_ITheme_getType_EVThemeType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					EarthView::World::Spatial::Theme::EVThemeType objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_ITheme_getCaption_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					if (dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::getCaption();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getCaption();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_ITheme_getCaption_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_ITheme_getCaption_EVString_Callback* pCallback )
				{
					IThemeProxy* ptr = dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_ITheme_getCaption_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_ITheme_getCaption_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::getCaption();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_ITheme_setCaption_void_EVString(void *pObjectXXXX, _in const char* caption )
				{
					EarthView::World::Core::ev_string caption1 = caption;
					EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					if (dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::setCaption(caption1);
					else
						ptrNativeObject->setCaption(caption1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_ITheme_setCaption_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Theme_ITheme_setCaption_void_EVString_Callback* pCallback )
				{
					IThemeProxy* ptr = dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_ITheme_setCaption_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_ITheme_setCaption_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* caption )
				{
					EarthView::World::Core::ev_string caption1 = caption;
					EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::setCaption(caption1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_ITheme_useDefaultSymbol_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					if (dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::useDefaultSymbol();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->useDefaultSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_ITheme_useDefaultSymbol_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Theme_ITheme_useDefaultSymbol_ev_bool_Callback* pCallback )
				{
					IThemeProxy* ptr = dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_ITheme_useDefaultSymbol_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_ITheme_useDefaultSymbol_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::useDefaultSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_ITheme_setUseDefaultSymbol_void_ev_bool(void *pObjectXXXX, _in ev_bool usable )
				{
					EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					if (dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::setUseDefaultSymbol(usable);
					else
						ptrNativeObject->setUseDefaultSymbol(usable);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_ITheme_setUseDefaultSymbol_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Theme_ITheme_setUseDefaultSymbol_void_ev_bool_Callback* pCallback )
				{
					IThemeProxy* ptr = dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_ITheme_setUseDefaultSymbol_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_ITheme_setUseDefaultSymbol_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool usable )
				{
					EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::setUseDefaultSymbol(usable);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_ITheme_getDefaultSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					if (dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::getDefaultSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getDefaultSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_ITheme_getDefaultSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_ITheme_getDefaultSymbol_ISymbol_Callback* pCallback )
				{
					IThemeProxy* ptr = dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_ITheme_getDefaultSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Theme_ITheme_getDefaultSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::getDefaultSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_ITheme_setDefaultSymbol_void_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					if (dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::setDefaultSymbol(symbol);
					else
						ptrNativeObject->setDefaultSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_ITheme_setDefaultSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Theme_ITheme_setDefaultSymbol_void_ISymbol_Callback* pCallback )
				{
					IThemeProxy* ptr = dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_ITheme_setDefaultSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_ITheme_setDefaultSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::setDefaultSymbol(symbol);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_ITheme_equals_ev_bool_ITheme(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					if (dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::equals(theme);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equals(theme);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_ITheme_equals_ev_bool_ITheme( void *pObjectXXXX, EarthView_World_Spatial_Theme_ITheme_equals_ev_bool_ITheme_Callback* pCallback )
				{
					IThemeProxy* ptr = dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_ITheme_equals_ev_bool_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Theme_ITheme_equals_ev_bool_ITheme_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* theme )
				{
					EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::equals(theme);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial_Theme_ITheme_clone_ITheme(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					if (dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_ITheme_clone_ITheme( void *pObjectXXXX, EarthView_World_Spatial_Theme_ITheme_clone_ITheme_Callback* pCallback )
				{
					IThemeProxy* ptr = dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_ITheme_clone_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial_Theme_ITheme_clone_ITheme_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_ITheme_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					if (dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_ITheme_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Theme_ITheme_toStream_void_CDataStream_Callback* pCallback )
				{
					IThemeProxy* ptr = dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_ITheme_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_ITheme_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Theme_ITheme_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Theme_ITheme_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					if (dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_ITheme_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Theme_ITheme_toXmlElement_CXmlElement_Callback* pCallback )
				{
					IThemeProxy* ptr = dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_ITheme_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Theme_ITheme_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_ITheme_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					if (dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_ITheme_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Theme_ITheme_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					IThemeProxy* ptr = dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_ITheme_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_ITheme_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_ITheme_onBeforeQuery_void_IFeatureClass_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeatureClass* fc, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					if (dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::onBeforeQuery(fc, filter);
					else
						ptrNativeObject->onBeforeQuery(fc, filter);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_ITheme_onBeforeQuery_void_IFeatureClass_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial_Theme_ITheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_Callback* pCallback )
				{
					IThemeProxy* ptr = dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_ITheme_onBeforeQuery_void_IFeatureClass_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_ITheme_onBeforeQuery_void_IFeatureClass_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeatureClass* fc, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::onBeforeQuery(fc, filter);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_ITheme_onAfterQuery_void_IFeatureSelection_IGeometry(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeatureSelection* fs, _in EarthView::World::Spatial::Geometry::IGeometry* dst )
				{
					EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					if (dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::onAfterQuery(fs, dst);
					else
						ptrNativeObject->onAfterQuery(fs, dst);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_ITheme_onAfterQuery_void_IFeatureSelection_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_Theme_ITheme_onAfterQuery_void_IFeatureSelection_IGeometry_Callback* pCallback )
				{
					IThemeProxy* ptr = dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_ITheme_onAfterQuery_void_IFeatureSelection_IGeometry(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_ITheme_onAfterQuery_void_IFeatureSelection_IGeometry_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeatureSelection* fs, _in EarthView::World::Spatial::Geometry::IGeometry* dst )
				{
					EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::onAfterQuery(fs, dst);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_ITheme_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					if (dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Theme_ITheme_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Theme_ITheme_fromStream_void_CDataStream_Callback* pCallback )
				{
					IThemeProxy* ptr = dynamic_cast<IThemeProxy*>((EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Theme_ITheme_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Theme_ITheme_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Theme::ITheme* ptrNativeObject = (EarthView::World::Spatial::Theme::ITheme*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Theme::ITheme::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
			}
		}
	}
}
