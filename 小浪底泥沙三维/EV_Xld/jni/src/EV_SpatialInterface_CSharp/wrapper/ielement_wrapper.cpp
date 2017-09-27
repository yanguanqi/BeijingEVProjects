/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ielement.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				typedef int  ( _stdcall EarthView_World_Spatial_Carto_IElement_getElementType_EVElementType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_IElement_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IElement_setName_void_EVString_Callback)(_in char*& name);
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Carto_IElement_getEnvelope_IEnvelope_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IElement_setEnvelope_void_IEnvelope_Callback)(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IElement_isSelected_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IElement_setSelected_void_ev_bool_Callback)(_in ev_bool bSelected);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_IElement_drawPrepare_ev_bool_ISpatialDisplay_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IElement_draw_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IElement_drawOver_void_Callback)();
				typedef EarthView::World::Spatial::Carto::IElement*  ( _stdcall EarthView_World_Spatial_Carto_IElement_clone_IElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IElement_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef char*  ( _stdcall EarthView_World_Spatial_Carto_IElement_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IElement_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Carto_IElement_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_IElement_fromStream_void_CDataStream_Callback)(_in void* stream);
				class IElementProxy : public EarthView::World::Spatial::Carto::IElement
				{
				private:
					EarthView_World_Spatial_Carto_IElement_getElementType_EVElementType_Callback* m_EarthView_World_Spatial_Carto_IElement_getElementType_EVElementType_Callback;
					EarthView_World_Spatial_Carto_IElement_getName_EVString_Callback* m_EarthView_World_Spatial_Carto_IElement_getName_EVString_Callback;
					EarthView_World_Spatial_Carto_IElement_setName_void_EVString_Callback* m_EarthView_World_Spatial_Carto_IElement_setName_void_EVString_Callback;
					EarthView_World_Spatial_Carto_IElement_getEnvelope_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_IElement_getEnvelope_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_IElement_setEnvelope_void_IEnvelope_Callback* m_EarthView_World_Spatial_Carto_IElement_setEnvelope_void_IEnvelope_Callback;
					EarthView_World_Spatial_Carto_IElement_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IElement_isSelected_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IElement_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_IElement_setSelected_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_IElement_drawPrepare_ev_bool_ISpatialDisplay_Callback* m_EarthView_World_Spatial_Carto_IElement_drawPrepare_ev_bool_ISpatialDisplay_Callback;
					EarthView_World_Spatial_Carto_IElement_draw_void_Callback* m_EarthView_World_Spatial_Carto_IElement_draw_void_Callback;
					EarthView_World_Spatial_Carto_IElement_drawOver_void_Callback* m_EarthView_World_Spatial_Carto_IElement_drawOver_void_Callback;
					EarthView_World_Spatial_Carto_IElement_clone_IElement_Callback* m_EarthView_World_Spatial_Carto_IElement_clone_IElement_Callback;
					EarthView_World_Spatial_Carto_IElement_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_IElement_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Carto_IElement_toXML_EVString_Callback* m_EarthView_World_Spatial_Carto_IElement_toXML_EVString_Callback;
					EarthView_World_Spatial_Carto_IElement_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_IElement_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_IElement_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_IElement_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_IElement_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Carto_IElement_fromStream_void_CDataStream_Callback;
				public:
					IElementProxy(EarthView::World::Core::CNameValuePairList *pList) : IElement(pList)
					{
						m_EarthView_World_Spatial_Carto_IElement_getElementType_EVElementType_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IElement_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IElement_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IElement_getEnvelope_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IElement_setEnvelope_void_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IElement_isSelected_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IElement_setSelected_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IElement_drawPrepare_ev_bool_ISpatialDisplay_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IElement_draw_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IElement_drawOver_void_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IElement_clone_IElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IElement_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IElement_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IElement_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IElement_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_IElement_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Carto_IElement_getElementType_EVElementType(EarthView_World_Spatial_Carto_IElement_getElementType_EVElementType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IElement_getElementType_EVElementType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IElement_getName_EVString(EarthView_World_Spatial_Carto_IElement_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IElement_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IElement_setName_void_EVString(EarthView_World_Spatial_Carto_IElement_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IElement_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IElement_getEnvelope_IEnvelope(EarthView_World_Spatial_Carto_IElement_getEnvelope_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IElement_getEnvelope_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IElement_setEnvelope_void_IEnvelope(EarthView_World_Spatial_Carto_IElement_setEnvelope_void_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IElement_setEnvelope_void_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IElement_isSelected_ev_bool(EarthView_World_Spatial_Carto_IElement_isSelected_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IElement_isSelected_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IElement_setSelected_void_ev_bool(EarthView_World_Spatial_Carto_IElement_setSelected_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IElement_setSelected_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IElement_drawPrepare_ev_bool_ISpatialDisplay(EarthView_World_Spatial_Carto_IElement_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IElement_drawPrepare_ev_bool_ISpatialDisplay_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IElement_draw_void(EarthView_World_Spatial_Carto_IElement_draw_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IElement_draw_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IElement_drawOver_void(EarthView_World_Spatial_Carto_IElement_drawOver_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IElement_drawOver_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IElement_clone_IElement(EarthView_World_Spatial_Carto_IElement_clone_IElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IElement_clone_IElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IElement_toStream_void_CDataStream(EarthView_World_Spatial_Carto_IElement_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IElement_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IElement_toXML_EVString(EarthView_World_Spatial_Carto_IElement_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IElement_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IElement_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Carto_IElement_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IElement_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IElement_toXmlElement_CXmlElement(EarthView_World_Spatial_Carto_IElement_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IElement_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_IElement_fromStream_void_CDataStream(EarthView_World_Spatial_Carto_IElement_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_IElement_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Carto::EVElementType getElementType() const
					{
						if(m_EarthView_World_Spatial_Carto_IElement_getElementType_EVElementType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::EVElementType returnValue = (EarthView::World::Spatial::Carto::EVElementType)m_EarthView_World_Spatial_Carto_IElement_getElementType_EVElementType_Callback();
							return returnValue;
						}
						else
							return this->IElement::getElementType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Carto_IElement_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_IElement_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IElement::getName();
					}
					virtual void setName(_in EVString name)
					{
						if(m_EarthView_World_Spatial_Carto_IElement_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Carto_IElement_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->IElement::setName(name);
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const
					{
						if(m_EarthView_World_Spatial_Carto_IElement_getEnvelope_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Carto_IElement_getEnvelope_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->IElement::getEnvelope();
					}
					virtual void setEnvelope(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if(m_EarthView_World_Spatial_Carto_IElement_setEnvelope_void_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IElement_setEnvelope_void_IEnvelope_Callback(pEnvelope);
						}
						else
							return this->IElement::setEnvelope(pEnvelope);
					}
					virtual ev_bool isSelected()
					{
						if(m_EarthView_World_Spatial_Carto_IElement_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IElement_isSelected_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IElement::isSelected();
					}
					virtual void setSelected(_in ev_bool bSelected)
					{
						if(m_EarthView_World_Spatial_Carto_IElement_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IElement_setSelected_void_ev_bool_Callback(bSelected);
						}
						else
							return this->IElement::setSelected(bSelected);
					}
					virtual ev_bool drawPrepare(_in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay)
					{
						if(m_EarthView_World_Spatial_Carto_IElement_drawPrepare_ev_bool_ISpatialDisplay_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_IElement_drawPrepare_ev_bool_ISpatialDisplay_Callback(pDisplay);
							return returnValue;
						}
						else
							return this->IElement::drawPrepare(pDisplay);
					}
					virtual void draw()
					{
						if(m_EarthView_World_Spatial_Carto_IElement_draw_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IElement_draw_void_Callback();
						}
						else
							return this->IElement::draw();
					}
					virtual void drawOver()
					{
						if(m_EarthView_World_Spatial_Carto_IElement_drawOver_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IElement_drawOver_void_Callback();
						}
						else
							return this->IElement::drawOver();
					}
					virtual EarthView::World::Spatial::Carto::IElement* clone() const
					{
						if(m_EarthView_World_Spatial_Carto_IElement_clone_IElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Carto::IElement* returnValue = m_EarthView_World_Spatial_Carto_IElement_clone_IElement_Callback();
							return returnValue;
						}
						else
							return this->IElement::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Carto_IElement_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IElement_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IElement::toStream(stream);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Carto_IElement_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Carto_IElement_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->IElement::toXML();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Carto_IElement_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IElement_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->IElement::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Carto_IElement_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Carto_IElement_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->IElement::toXmlElement();
					}
					virtual void fromStream(_in EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Carto_IElement_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_IElement_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->IElement::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(IElementProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_IElement_getElementType_EVElementType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					if (dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IElement::getElementType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->getElementType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IElement_getElementType_EVElementType( void *pObjectXXXX, EarthView_World_Spatial_Carto_IElement_getElementType_EVElementType_Callback* pCallback )
				{
					IElementProxy* ptr = dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IElement_getElementType_EVElementType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_IElement_getElementType_EVElementType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVElementType objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IElement::getElementType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IElement_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					if (dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IElement::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IElement_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IElement_getName_EVString_Callback* pCallback )
				{
					IElementProxy* ptr = dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IElement_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IElement_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IElement::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IElement_setName_void_EVString(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					if (dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IElement::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IElement_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IElement_setName_void_EVString_Callback* pCallback )
				{
					IElementProxy* ptr = dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IElement_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IElement_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IElement::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_IElement_getEnvelope_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					if (dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IElement::getEnvelope();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelope();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IElement_getEnvelope_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_IElement_getEnvelope_IEnvelope_Callback* pCallback )
				{
					IElementProxy* ptr = dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IElement_getEnvelope_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Carto_IElement_getEnvelope_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IElement::getEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IElement_setEnvelope_void_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					if (dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IElement::setEnvelope(pEnvelope);
					else
						ptrNativeObject->setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IElement_setEnvelope_void_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Carto_IElement_setEnvelope_void_IEnvelope_Callback* pCallback )
				{
					IElementProxy* ptr = dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IElement_setEnvelope_void_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IElement_setEnvelope_void_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IElement::setEnvelope(pEnvelope);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IElement_isSelected_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					if (dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IElement::isSelected();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelected();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IElement_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IElement_isSelected_ev_bool_Callback* pCallback )
				{
					IElementProxy* ptr = dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IElement_isSelected_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IElement_isSelected_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IElement::isSelected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IElement_setSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					if (dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IElement::setSelected(bSelected);
					else
						ptrNativeObject->setSelected(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IElement_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_IElement_setSelected_void_ev_bool_Callback* pCallback )
				{
					IElementProxy* ptr = dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IElement_setSelected_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IElement_setSelected_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bSelected )
				{
					EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IElement::setSelected(bSelected);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IElement_drawPrepare_ev_bool_ISpatialDisplay(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					if (dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IElement::drawPrepare(pDisplay);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->drawPrepare(pDisplay);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IElement_drawPrepare_ev_bool_ISpatialDisplay( void *pObjectXXXX, EarthView_World_Spatial_Carto_IElement_drawPrepare_ev_bool_ISpatialDisplay_Callback* pCallback )
				{
					IElementProxy* ptr = dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IElement_drawPrepare_ev_bool_ISpatialDisplay(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_IElement_drawPrepare_ev_bool_ISpatialDisplay_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay )
				{
					EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IElement::drawPrepare(pDisplay);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IElement_draw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					if (dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IElement::draw();
					else
						ptrNativeObject->draw();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IElement_draw_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_IElement_draw_void_Callback* pCallback )
				{
					IElementProxy* ptr = dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IElement_draw_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IElement_draw_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IElement::draw();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IElement_drawOver_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					if (dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IElement::drawOver();
					else
						ptrNativeObject->drawOver();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IElement_drawOver_void( void *pObjectXXXX, EarthView_World_Spatial_Carto_IElement_drawOver_void_Callback* pCallback )
				{
					IElementProxy* ptr = dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IElement_drawOver_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IElement_drawOver_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IElement::drawOver();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_IElement_clone_IElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					if (dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IElement::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IElement_clone_IElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IElement_clone_IElement_Callback* pCallback )
				{
					IElementProxy* ptr = dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IElement_clone_IElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IElement*  _stdcall EarthView_World_Spatial_Carto_IElement_clone_IElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IElement* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IElement::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IElement_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					if (dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IElement::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IElement_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_IElement_toStream_void_CDataStream_Callback* pCallback )
				{
					IElementProxy* ptr = dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IElement_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IElement_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IElement::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IElement_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					if (dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IElement::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IElement_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Carto_IElement_toXML_EVString_Callback* pCallback )
				{
					IElementProxy* ptr = dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IElement_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_IElement_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IElement::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IElement_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					if (dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IElement::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IElement_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IElement_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					IElementProxy* ptr = dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IElement_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IElement_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IElement::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_IElement_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					if (dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IElement::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IElement_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_IElement_toXmlElement_CXmlElement_Callback* pCallback )
				{
					IElementProxy* ptr = dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IElement_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_IElement_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::IElement::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IElement_fromStream_void_CDataStream(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					if (dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::IElement::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_IElement_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Carto_IElement_fromStream_void_CDataStream_Callback* pCallback )
				{
					IElementProxy* ptr = dynamic_cast<IElementProxy*>((EarthView::World::Spatial::Carto::IElement*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_IElement_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_IElement_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial::Carto::IElement* ptrNativeObject = (EarthView::World::Spatial::Carto::IElement*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::IElement::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
			}
		}
	}
}
