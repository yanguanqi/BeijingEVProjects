/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dcarto/legenditem.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_CLegendItem_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegendItem_setName_void_EVString_Callback)(_in char*& strName);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Carto_CLegendItem_getFeatureSymbol_ISymbol_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegendItem_setFeatureSymbol_void_ISymbol_Callback)(_in EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_CLegendItem_getGeometryType_EVGeometryType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegendItem_setGeometryType_void_EVGeometryType_Callback)(_in int type);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_CLegendItem_getDatasetName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegendItem_setDatasetName_void_EVString_Callback)(_in char*& strName);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CLegendItem_isParentItem_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegendItem_setParentItem_void_ev_bool_Callback)(_in const ev_bool bParent);
				typedef EarthView::World::Spatial::Carto::ILegendItem*  ( _stdcall EarthView_World_Spatial_Carto_CLegendItem_clone_ILegendItem_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegendItem_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Carto_CLegendItem_toXmlElement_CXmlElement_Callback)();
				class CLegendItemProxy : public EarthView::World::Spatial::Carto::CLegendItem
				{
				private:
					EarthView_World_Spatial_Carto_CLegendItem_getName_EVString_Callback* m_EarthView_World_Spatial_Carto_CLegendItem_getName_EVString_Callback;
					EarthView_World_Spatial_Carto_CLegendItem_setName_void_EVString_Callback* m_EarthView_World_Spatial_Carto_CLegendItem_setName_void_EVString_Callback;
					EarthView_World_Spatial_Carto_CLegendItem_getFeatureSymbol_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CLegendItem_getFeatureSymbol_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CLegendItem_setFeatureSymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Carto_CLegendItem_setFeatureSymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Carto_CLegendItem_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial_Carto_CLegendItem_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial_Carto_CLegendItem_setGeometryType_void_EVGeometryType_Callback* m_EarthView_World_Spatial_Carto_CLegendItem_setGeometryType_void_EVGeometryType_Callback;
					EarthView_World_Spatial_Carto_CLegendItem_getDatasetName_EVString_Callback* m_EarthView_World_Spatial_Carto_CLegendItem_getDatasetName_EVString_Callback;
					EarthView_World_Spatial_Carto_CLegendItem_setDatasetName_void_EVString_Callback* m_EarthView_World_Spatial_Carto_CLegendItem_setDatasetName_void_EVString_Callback;
					EarthView_World_Spatial_Carto_CLegendItem_isParentItem_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CLegendItem_isParentItem_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CLegendItem_setParentItem_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CLegendItem_setParentItem_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CLegendItem_clone_ILegendItem_Callback* m_EarthView_World_Spatial_Carto_CLegendItem_clone_ILegendItem_Callback;
					EarthView_World_Spatial_Carto_CLegendItem_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_CLegendItem_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_CLegendItem_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_CLegendItem_toXmlElement_CXmlElement_Callback;
				public:
					CLegendItemProxy(EarthView::World::Core::CNameValuePairList *pList) : CLegendItem(pList)
					{
						m_EarthView_World_Spatial_Carto_CLegendItem_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItem_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItem_getFeatureSymbol_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItem_setFeatureSymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItem_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItem_setGeometryType_void_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItem_getDatasetName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItem_setDatasetName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItem_isParentItem_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItem_setParentItem_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItem_clone_ILegendItem_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItem_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItem_toXmlElement_CXmlElement_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CLegendItemProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItem_getName_EVString(EarthView_World_Spatial_Carto_CLegendItem_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItem_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItem_setName_void_EVString(EarthView_World_Spatial_Carto_CLegendItem_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItem_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItem_getFeatureSymbol_ISymbol(EarthView_World_Spatial_Carto_CLegendItem_getFeatureSymbol_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItem_getFeatureSymbol_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItem_setFeatureSymbol_void_ISymbol(EarthView_World_Spatial_Carto_CLegendItem_setFeatureSymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItem_setFeatureSymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItem_getGeometryType_EVGeometryType(EarthView_World_Spatial_Carto_CLegendItem_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItem_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItem_setGeometryType_void_EVGeometryType(EarthView_World_Spatial_Carto_CLegendItem_setGeometryType_void_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItem_setGeometryType_void_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItem_getDatasetName_EVString(EarthView_World_Spatial_Carto_CLegendItem_getDatasetName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItem_getDatasetName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItem_setDatasetName_void_EVString(EarthView_World_Spatial_Carto_CLegendItem_setDatasetName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItem_setDatasetName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItem_isParentItem_ev_bool(EarthView_World_Spatial_Carto_CLegendItem_isParentItem_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItem_isParentItem_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItem_setParentItem_void_ev_bool(EarthView_World_Spatial_Carto_CLegendItem_setParentItem_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItem_setParentItem_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItem_clone_ILegendItem(EarthView_World_Spatial_Carto_CLegendItem_clone_ILegendItem_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItem_clone_ILegendItem_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItem_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Carto_CLegendItem_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItem_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItem_toXmlElement_CXmlElement(EarthView_World_Spatial_Carto_CLegendItem_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItem_toXmlElement_CXmlElement_Callback = pCallback;
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItem_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_CLegendItem_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CLegendItem::getName();
					}
					virtual void setName(_in const EVString& strName)
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItem_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strName_Char = strName.makeBuffer();
							m_EarthView_World_Spatial_Carto_CLegendItem_setName_void_EVString_Callback(strName_Char);
						}
						else
							return this->CLegendItem::setName(strName);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* getFeatureSymbol() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItem_getFeatureSymbol_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Carto_CLegendItem_getFeatureSymbol_ISymbol_Callback();
							return returnValue;
						}
						else
							return this->CLegendItem::getFeatureSymbol();
					}
					virtual void setFeatureSymbol(_in EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItem_setFeatureSymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegendItem_setFeatureSymbol_void_ISymbol_Callback(pSymbol);
						}
						else
							return this->CLegendItem::setFeatureSymbol(pSymbol);
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItem_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial_Carto_CLegendItem_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CLegendItem::getGeometryType();
					}
					virtual void setGeometryType(_in EarthView::World::Spatial::Geometry::EVGeometryType type)
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItem_setGeometryType_void_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegendItem_setGeometryType_void_EVGeometryType_Callback((int)type);
						}
						else
							return this->CLegendItem::setGeometryType(type);
					}
					virtual EVString getDatasetName() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItem_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_CLegendItem_getDatasetName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CLegendItem::getDatasetName();
					}
					virtual void setDatasetName(_in EVString strName)
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItem_setDatasetName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strName_Char = strName.makeBuffer();
							m_EarthView_World_Spatial_Carto_CLegendItem_setDatasetName_void_EVString_Callback(strName_Char);
						}
						else
							return this->CLegendItem::setDatasetName(strName);
					}
					virtual ev_bool isParentItem() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItem_isParentItem_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CLegendItem_isParentItem_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CLegendItem::isParentItem();
					}
					virtual void setParentItem(_in const ev_bool bParent)
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItem_setParentItem_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegendItem_setParentItem_void_ev_bool_Callback(bParent);
						}
						else
							return this->CLegendItem::setParentItem(bParent);
					}
					virtual EarthView::World::Spatial::Carto::ILegendItem* clone() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItem_clone_ILegendItem_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::ILegendItem* returnValue = m_EarthView_World_Spatial_Carto_CLegendItem_clone_ILegendItem_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLegendItem::clone();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItem_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegendItem_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CLegendItem::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItem_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Carto_CLegendItem_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CLegendItem::toXmlElement();
					}
				};
				REGISTER_FACTORY_CLASS(CLegendItemProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CLegendItem_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					if (dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItem_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItem_getName_EVString_Callback* pCallback )
				{
					CLegendItemProxy* ptr = dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItem_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CLegendItem_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItem_setName_void_EVString(void *pObjectXXXX, _in const char* strName )
				{
					EarthView::World::Core::ev_string strName1 = strName;
					EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					if (dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::setName(strName1);
					else
						ptrNativeObject->setName(strName1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItem_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItem_setName_void_EVString_Callback* pCallback )
				{
					CLegendItemProxy* ptr = dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItem_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItem_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* strName )
				{
					EarthView::World::Core::ev_string strName1 = strName;
					EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::setName(strName1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_CLegendItem_getFeatureSymbol_ISymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					if (dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::getFeatureSymbol();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getFeatureSymbol();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItem_getFeatureSymbol_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItem_getFeatureSymbol_ISymbol_Callback* pCallback )
				{
					CLegendItemProxy* ptr = dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItem_getFeatureSymbol_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Carto_CLegendItem_getFeatureSymbol_ISymbol_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::getFeatureSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItem_setFeatureSymbol_void_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					if (dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::setFeatureSymbol(pSymbol);
					else
						ptrNativeObject->setFeatureSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItem_setFeatureSymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItem_setFeatureSymbol_void_ISymbol_Callback* pCallback )
				{
					CLegendItemProxy* ptr = dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItem_setFeatureSymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItem_setFeatureSymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::setFeatureSymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CLegendItem_getGeometryType_EVGeometryType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					if (dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::getGeometryType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->getGeometryType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItem_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItem_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CLegendItemProxy* ptr = dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItem_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CLegendItem_getGeometryType_EVGeometryType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::getGeometryType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItem_setGeometryType_void_EVGeometryType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					if (dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::setGeometryType((EarthView::World::Spatial::Geometry::EVGeometryType)type);
					else
						ptrNativeObject->setGeometryType((EarthView::World::Spatial::Geometry::EVGeometryType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItem_setGeometryType_void_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItem_setGeometryType_void_EVGeometryType_Callback* pCallback )
				{
					CLegendItemProxy* ptr = dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItem_setGeometryType_void_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItem_setGeometryType_void_EVGeometryType_NoVirtual(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::setGeometryType((EarthView::World::Spatial::Geometry::EVGeometryType)type);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CLegendItem_getDatasetName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					if (dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::getDatasetName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDatasetName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItem_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItem_getDatasetName_EVString_Callback* pCallback )
				{
					CLegendItemProxy* ptr = dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItem_getDatasetName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CLegendItem_getDatasetName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::getDatasetName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItem_setDatasetName_void_EVString(void *pObjectXXXX, _in char* strName )
				{
					EarthView::World::Core::ev_string strName1 = strName;
					EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					if (dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::setDatasetName(strName1);
					else
						ptrNativeObject->setDatasetName(strName1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItem_setDatasetName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItem_setDatasetName_void_EVString_Callback* pCallback )
				{
					CLegendItemProxy* ptr = dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItem_setDatasetName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItem_setDatasetName_void_EVString_NoVirtual(void *pObjectXXXX, _in char* strName )
				{
					EarthView::World::Core::ev_string strName1 = strName;
					EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::setDatasetName(strName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItem_setTransparentValue_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 nValue )
				{
					EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					ptrNativeObject->setTransparentValue(nValue);
				}
				extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Spatial_Carto_CLegendItem_getTransparentValue_ev_uint8(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					ev_uint8 objXXXX = ptrNativeObject->getTransparentValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CLegendItem_isParentItem_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					if (dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::isParentItem();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isParentItem();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItem_isParentItem_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItem_isParentItem_ev_bool_Callback* pCallback )
				{
					CLegendItemProxy* ptr = dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItem_isParentItem_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CLegendItem_isParentItem_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::isParentItem();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItem_setParentItem_void_ev_bool(void *pObjectXXXX, _in const ev_bool bParent )
				{
					EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					if (dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::setParentItem(bParent);
					else
						ptrNativeObject->setParentItem(bParent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItem_setParentItem_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItem_setParentItem_void_ev_bool_Callback* pCallback )
				{
					CLegendItemProxy* ptr = dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItem_setParentItem_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItem_setParentItem_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool bParent )
				{
					EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::setParentItem(bParent);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::ILegendItem*  _stdcall EarthView_World_Spatial_Carto_CLegendItem_clone_ILegendItem(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					if (dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::ILegendItem* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::ILegendItem* objXXXX = ptrNativeObject->clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItem_clone_ILegendItem( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItem_clone_ILegendItem_Callback* pCallback )
				{
					CLegendItemProxy* ptr = dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItem_clone_ILegendItem(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::ILegendItem*  _stdcall EarthView_World_Spatial_Carto_CLegendItem_clone_ILegendItem_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					EarthView::World::Spatial::Carto::ILegendItem* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItem_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					if (dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItem_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItem_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CLegendItemProxy* ptr = dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItem_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItem_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_CLegendItem_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					if (dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItem_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItem_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CLegendItemProxy* ptr = dynamic_cast<CLegendItemProxy*>((EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItem_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_CLegendItem_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegendItem* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItem*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItem::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_removeLegendItem_void_ev_int32_Callback)(_in const ev_int32 nIndex);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_addLegendItem_void_ILegendItem_Callback)(_in const ILegendItem* pItem);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_getItemCount_ev_int32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_getParentItemCount_ev_int32_Callback)();
				typedef ILegendItem*  ( _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_getLegendItem_ILegendItem_ev_int32_Callback)(_in const ev_int32 nIndex);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_addIgnoreDataset_void_EVString_Callback)(_in char*& strName);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_removeIgnoreDataset_ev_bool_EVString_Callback)(_in char*& strName);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDataset_EVString_ev_int32_Callback)(_in ev_int32 nIndex);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDatasetCount_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_clearIgnoreDataset_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_isIgnoreDataset_ev_bool_EVString_Callback)(_in char*& strName);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_clearAllItem_void_Callback)();
				typedef EarthView::World::Spatial::Carto::ILegendItemVector*  ( _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_clone_ILegendItemVector_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_toXmlElement_CXmlElement_Callback)();
				class CLegendItemVectorProxy : public EarthView::World::Spatial::Carto::CLegendItemVector
				{
				private:
					EarthView_World_Spatial_Carto_CLegendItemVector_removeLegendItem_void_ev_int32_Callback* m_EarthView_World_Spatial_Carto_CLegendItemVector_removeLegendItem_void_ev_int32_Callback;
					EarthView_World_Spatial_Carto_CLegendItemVector_addLegendItem_void_ILegendItem_Callback* m_EarthView_World_Spatial_Carto_CLegendItemVector_addLegendItem_void_ILegendItem_Callback;
					EarthView_World_Spatial_Carto_CLegendItemVector_getItemCount_ev_int32_Callback* m_EarthView_World_Spatial_Carto_CLegendItemVector_getItemCount_ev_int32_Callback;
					EarthView_World_Spatial_Carto_CLegendItemVector_getParentItemCount_ev_int32_Callback* m_EarthView_World_Spatial_Carto_CLegendItemVector_getParentItemCount_ev_int32_Callback;
					EarthView_World_Spatial_Carto_CLegendItemVector_getLegendItem_ILegendItem_ev_int32_Callback* m_EarthView_World_Spatial_Carto_CLegendItemVector_getLegendItem_ILegendItem_ev_int32_Callback;
					EarthView_World_Spatial_Carto_CLegendItemVector_addIgnoreDataset_void_EVString_Callback* m_EarthView_World_Spatial_Carto_CLegendItemVector_addIgnoreDataset_void_EVString_Callback;
					EarthView_World_Spatial_Carto_CLegendItemVector_removeIgnoreDataset_ev_bool_EVString_Callback* m_EarthView_World_Spatial_Carto_CLegendItemVector_removeIgnoreDataset_ev_bool_EVString_Callback;
					EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDataset_EVString_ev_int32_Callback* m_EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDataset_EVString_ev_int32_Callback;
					EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDatasetCount_ev_int32_Callback* m_EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDatasetCount_ev_int32_Callback;
					EarthView_World_Spatial_Carto_CLegendItemVector_clearIgnoreDataset_void_Callback* m_EarthView_World_Spatial_Carto_CLegendItemVector_clearIgnoreDataset_void_Callback;
					EarthView_World_Spatial_Carto_CLegendItemVector_isIgnoreDataset_ev_bool_EVString_Callback* m_EarthView_World_Spatial_Carto_CLegendItemVector_isIgnoreDataset_ev_bool_EVString_Callback;
					EarthView_World_Spatial_Carto_CLegendItemVector_clearAllItem_void_Callback* m_EarthView_World_Spatial_Carto_CLegendItemVector_clearAllItem_void_Callback;
					EarthView_World_Spatial_Carto_CLegendItemVector_clone_ILegendItemVector_Callback* m_EarthView_World_Spatial_Carto_CLegendItemVector_clone_ILegendItemVector_Callback;
					EarthView_World_Spatial_Carto_CLegendItemVector_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_CLegendItemVector_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_CLegendItemVector_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_CLegendItemVector_toXmlElement_CXmlElement_Callback;
				public:
					CLegendItemVectorProxy(EarthView::World::Core::CNameValuePairList *pList) : CLegendItemVector(pList)
					{
						m_EarthView_World_Spatial_Carto_CLegendItemVector_removeLegendItem_void_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItemVector_addLegendItem_void_ILegendItem_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItemVector_getItemCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItemVector_getParentItemCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItemVector_getLegendItem_ILegendItem_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItemVector_addIgnoreDataset_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItemVector_removeIgnoreDataset_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDataset_EVString_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDatasetCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItemVector_clearIgnoreDataset_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItemVector_isIgnoreDataset_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItemVector_clearAllItem_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItemVector_clone_ILegendItemVector_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItemVector_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CLegendItemVector_toXmlElement_CXmlElement_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CLegendItemVectorProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_removeLegendItem_void_ev_int32(EarthView_World_Spatial_Carto_CLegendItemVector_removeLegendItem_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItemVector_removeLegendItem_void_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_addLegendItem_void_ILegendItem(EarthView_World_Spatial_Carto_CLegendItemVector_addLegendItem_void_ILegendItem_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItemVector_addLegendItem_void_ILegendItem_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_getItemCount_ev_int32(EarthView_World_Spatial_Carto_CLegendItemVector_getItemCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItemVector_getItemCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_getParentItemCount_ev_int32(EarthView_World_Spatial_Carto_CLegendItemVector_getParentItemCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItemVector_getParentItemCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_getLegendItem_ILegendItem_ev_int32(EarthView_World_Spatial_Carto_CLegendItemVector_getLegendItem_ILegendItem_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItemVector_getLegendItem_ILegendItem_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_addIgnoreDataset_void_EVString(EarthView_World_Spatial_Carto_CLegendItemVector_addIgnoreDataset_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItemVector_addIgnoreDataset_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_removeIgnoreDataset_ev_bool_EVString(EarthView_World_Spatial_Carto_CLegendItemVector_removeIgnoreDataset_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItemVector_removeIgnoreDataset_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDataset_EVString_ev_int32(EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDataset_EVString_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDataset_EVString_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDatasetCount_ev_int32(EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDatasetCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDatasetCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_clearIgnoreDataset_void(EarthView_World_Spatial_Carto_CLegendItemVector_clearIgnoreDataset_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItemVector_clearIgnoreDataset_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_isIgnoreDataset_ev_bool_EVString(EarthView_World_Spatial_Carto_CLegendItemVector_isIgnoreDataset_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItemVector_isIgnoreDataset_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_clearAllItem_void(EarthView_World_Spatial_Carto_CLegendItemVector_clearAllItem_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItemVector_clearAllItem_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_clone_ILegendItemVector(EarthView_World_Spatial_Carto_CLegendItemVector_clone_ILegendItemVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItemVector_clone_ILegendItemVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Carto_CLegendItemVector_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItemVector_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_toXmlElement_CXmlElement(EarthView_World_Spatial_Carto_CLegendItemVector_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CLegendItemVector_toXmlElement_CXmlElement_Callback = pCallback;
					}
					virtual void removeLegendItem(_in const ev_int32 nIndex)
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItemVector_removeLegendItem_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegendItemVector_removeLegendItem_void_ev_int32_Callback(nIndex);
						}
						else
							return this->CLegendItemVector::removeLegendItem(nIndex);
					}
					virtual void addLegendItem(_in const ILegendItem* pItem)
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItemVector_addLegendItem_void_ILegendItem_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegendItemVector_addLegendItem_void_ILegendItem_Callback(pItem);
						}
						else
							return this->CLegendItemVector::addLegendItem(pItem);
					}
					virtual ev_int32 getItemCount()
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItemVector_getItemCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Carto_CLegendItemVector_getItemCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CLegendItemVector::getItemCount();
					}
					virtual ev_int32 getParentItemCount() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItemVector_getParentItemCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Carto_CLegendItemVector_getParentItemCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CLegendItemVector::getParentItemCount();
					}
					virtual ILegendItem* getLegendItem(_in const ev_int32 nIndex)
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItemVector_getLegendItem_ILegendItem_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ILegendItem* returnValue = m_EarthView_World_Spatial_Carto_CLegendItemVector_getLegendItem_ILegendItem_ev_int32_Callback(nIndex);
							return returnValue;
						}
						else
							return this->CLegendItemVector::getLegendItem(nIndex);
					}
					virtual void addIgnoreDataset(_in EVString strName)
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItemVector_addIgnoreDataset_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strName_Char = strName.makeBuffer();
							m_EarthView_World_Spatial_Carto_CLegendItemVector_addIgnoreDataset_void_EVString_Callback(strName_Char);
						}
						else
							return this->CLegendItemVector::addIgnoreDataset(strName);
					}
					virtual ev_bool removeIgnoreDataset(_in EVString strName)
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItemVector_removeIgnoreDataset_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strName_Char = strName.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CLegendItemVector_removeIgnoreDataset_ev_bool_EVString_Callback(strName_Char);
							return returnValue;
						}
						else
							return this->CLegendItemVector::removeIgnoreDataset(strName);
					}
					virtual EVString getIgnoreDataset(_in ev_int32 nIndex)
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDataset_EVString_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDataset_EVString_ev_int32_Callback(nIndex);
							return returnValue;
						}
						else
							return this->CLegendItemVector::getIgnoreDataset(nIndex);
					}
					virtual ev_int32 getIgnoreDatasetCount()
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDatasetCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDatasetCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CLegendItemVector::getIgnoreDatasetCount();
					}
					virtual void clearIgnoreDataset()
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItemVector_clearIgnoreDataset_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegendItemVector_clearIgnoreDataset_void_Callback();
						}
						else
							return this->CLegendItemVector::clearIgnoreDataset();
					}
					virtual ev_bool isIgnoreDataset(_in EVString strName)
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItemVector_isIgnoreDataset_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strName_Char = strName.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CLegendItemVector_isIgnoreDataset_ev_bool_EVString_Callback(strName_Char);
							return returnValue;
						}
						else
							return this->CLegendItemVector::isIgnoreDataset(strName);
					}
					virtual void clearAllItem()
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItemVector_clearAllItem_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegendItemVector_clearAllItem_void_Callback();
						}
						else
							return this->CLegendItemVector::clearAllItem();
					}
					virtual EarthView::World::Spatial::Carto::ILegendItemVector* clone() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItemVector_clone_ILegendItemVector_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::ILegendItemVector* returnValue = m_EarthView_World_Spatial_Carto_CLegendItemVector_clone_ILegendItemVector_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CLegendItemVector::clone();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItemVector_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CLegendItemVector_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CLegendItemVector::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Carto_CLegendItemVector_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Carto_CLegendItemVector_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CLegendItemVector::toXmlElement();
					}
				};
				REGISTER_FACTORY_CLASS(CLegendItemVectorProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_removeLegendItem_void_ev_int32(void *pObjectXXXX, _in const ev_int32 nIndex )
				{
					EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					if (dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::removeLegendItem(nIndex);
					else
						ptrNativeObject->removeLegendItem(nIndex);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItemVector_removeLegendItem_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItemVector_removeLegendItem_void_ev_int32_Callback* pCallback )
				{
					CLegendItemVectorProxy* ptr = dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_removeLegendItem_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_removeLegendItem_void_ev_int32_NoVirtual(void *pObjectXXXX, _in const ev_int32 nIndex )
				{
					EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::removeLegendItem(nIndex);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_addLegendItem_void_ILegendItem(void *pObjectXXXX, _in const ILegendItem* pItem )
				{
					EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					if (dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::addLegendItem(pItem);
					else
						ptrNativeObject->addLegendItem(pItem);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItemVector_addLegendItem_void_ILegendItem( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItemVector_addLegendItem_void_ILegendItem_Callback* pCallback )
				{
					CLegendItemVectorProxy* ptr = dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_addLegendItem_void_ILegendItem(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_addLegendItem_void_ILegendItem_NoVirtual(void *pObjectXXXX, _in const ILegendItem* pItem )
				{
					EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::addLegendItem(pItem);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_getItemCount_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					if (dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::getItemCount();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getItemCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItemVector_getItemCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItemVector_getItemCount_ev_int32_Callback* pCallback )
				{
					CLegendItemVectorProxy* ptr = dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_getItemCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_getItemCount_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::getItemCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_getParentItemCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					if (dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::getParentItemCount();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getParentItemCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItemVector_getParentItemCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItemVector_getParentItemCount_ev_int32_Callback* pCallback )
				{
					CLegendItemVectorProxy* ptr = dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_getParentItemCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_getParentItemCount_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::getParentItemCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ILegendItem*  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_getLegendItem_ILegendItem_ev_int32(void *pObjectXXXX, _in const ev_int32 nIndex )
				{
					EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					if (dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*)ptrNativeObject) != NULL)
					{
						ILegendItem* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::getLegendItem(nIndex);
						return objXXXX;
					}
					else
					{
						ILegendItem* objXXXX = ptrNativeObject->getLegendItem(nIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItemVector_getLegendItem_ILegendItem_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItemVector_getLegendItem_ILegendItem_ev_int32_Callback* pCallback )
				{
					CLegendItemVectorProxy* ptr = dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_getLegendItem_ILegendItem_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ILegendItem*  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_getLegendItem_ILegendItem_ev_int32_NoVirtual(void *pObjectXXXX, _in const ev_int32 nIndex )
				{
					EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					ILegendItem* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::getLegendItem(nIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_addIgnoreDataset_void_EVString(void *pObjectXXXX, _in char* strName )
				{
					EarthView::World::Core::ev_string strName1 = strName;
					EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					if (dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::addIgnoreDataset(strName1);
					else
						ptrNativeObject->addIgnoreDataset(strName1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItemVector_addIgnoreDataset_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItemVector_addIgnoreDataset_void_EVString_Callback* pCallback )
				{
					CLegendItemVectorProxy* ptr = dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_addIgnoreDataset_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_addIgnoreDataset_void_EVString_NoVirtual(void *pObjectXXXX, _in char* strName )
				{
					EarthView::World::Core::ev_string strName1 = strName;
					EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::addIgnoreDataset(strName1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_removeIgnoreDataset_ev_bool_EVString(void *pObjectXXXX, _in char* strName )
				{
					EarthView::World::Core::ev_string strName1 = strName;
					EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					if (dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::removeIgnoreDataset(strName1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->removeIgnoreDataset(strName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItemVector_removeIgnoreDataset_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItemVector_removeIgnoreDataset_ev_bool_EVString_Callback* pCallback )
				{
					CLegendItemVectorProxy* ptr = dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_removeIgnoreDataset_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_removeIgnoreDataset_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in char* strName )
				{
					EarthView::World::Core::ev_string strName1 = strName;
					EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::removeIgnoreDataset(strName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDataset_EVString_ev_int32(void *pObjectXXXX, _in ev_int32 nIndex )
				{
					EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					if (dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::getIgnoreDataset(nIndex);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getIgnoreDataset(nIndex);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDataset_EVString_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDataset_EVString_ev_int32_Callback* pCallback )
				{
					CLegendItemVectorProxy* ptr = dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDataset_EVString_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDataset_EVString_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 nIndex )
				{
					EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::getIgnoreDataset(nIndex);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDatasetCount_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					if (dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::getIgnoreDatasetCount();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getIgnoreDatasetCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDatasetCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDatasetCount_ev_int32_Callback* pCallback )
				{
					CLegendItemVectorProxy* ptr = dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDatasetCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_getIgnoreDatasetCount_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::getIgnoreDatasetCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_clearIgnoreDataset_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					if (dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::clearIgnoreDataset();
					else
						ptrNativeObject->clearIgnoreDataset();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItemVector_clearIgnoreDataset_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItemVector_clearIgnoreDataset_void_Callback* pCallback )
				{
					CLegendItemVectorProxy* ptr = dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_clearIgnoreDataset_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_clearIgnoreDataset_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::clearIgnoreDataset();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_isIgnoreDataset_ev_bool_EVString(void *pObjectXXXX, _in char* strName )
				{
					EarthView::World::Core::ev_string strName1 = strName;
					EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					if (dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::isIgnoreDataset(strName1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isIgnoreDataset(strName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItemVector_isIgnoreDataset_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItemVector_isIgnoreDataset_ev_bool_EVString_Callback* pCallback )
				{
					CLegendItemVectorProxy* ptr = dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_isIgnoreDataset_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_isIgnoreDataset_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in char* strName )
				{
					EarthView::World::Core::ev_string strName1 = strName;
					EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::isIgnoreDataset(strName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_clearAllItem_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					if (dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::clearAllItem();
					else
						ptrNativeObject->clearAllItem();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItemVector_clearAllItem_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItemVector_clearAllItem_void_Callback* pCallback )
				{
					CLegendItemVectorProxy* ptr = dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_clearAllItem_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_clearAllItem_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::clearAllItem();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::ILegendItemVector*  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_clone_ILegendItemVector(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					if (dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::ILegendItemVector* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::ILegendItemVector* objXXXX = ptrNativeObject->clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItemVector_clone_ILegendItemVector( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItemVector_clone_ILegendItemVector_Callback* pCallback )
				{
					CLegendItemVectorProxy* ptr = dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_clone_ILegendItemVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::ILegendItemVector*  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_clone_ILegendItemVector_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					EarthView::World::Spatial::Carto::ILegendItemVector* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					if (dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItemVector_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItemVector_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CLegendItemVectorProxy* ptr = dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					if (dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CLegendItemVector_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CLegendItemVector_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CLegendItemVectorProxy* ptr = dynamic_cast<CLegendItemVectorProxy*>((EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CLegendItemVector_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_CLegendItemVector_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CLegendItemVector* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemVector*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CLegendItemVector::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItemManager_createLegendItem_void_ILegendItemVector_ILayer(void *pObjectXXXX, _in ILegendItemVector* pItemVector, _in EarthView::World::Spatial::Atlas::ILayer* pLayer )
				{
					EarthView::World::Spatial::Carto::CLegendItemManager* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemManager*) pObjectXXXX;
					ptrNativeObject->createLegendItem(pItemVector, pLayer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CLegendItemManager_removeLegendItem_void_ILegendItemVector_ILayer(void *pObjectXXXX, _in ILegendItemVector* pItemVector, _in EarthView::World::Spatial::Atlas::ILayer* pLayer )
				{
					EarthView::World::Spatial::Carto::CLegendItemManager* ptrNativeObject = (EarthView::World::Spatial::Carto::CLegendItemManager*) pObjectXXXX;
					ptrNativeObject->removeLegendItem(pItemVector, pLayer);
				}
			}
		}
	}
}
