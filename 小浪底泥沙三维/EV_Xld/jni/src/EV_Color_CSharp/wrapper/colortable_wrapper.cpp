/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "color/colortable.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Display_CColorTable_getColorCount_ev_uint32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CColorTable_setColorCount_void_ev_uint32_Callback)(_in ev_uint32 colorCount);
				typedef const EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CColorTable_getColor_IColor_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CColorTable_setColor_void_ev_uint32_IColor_Callback)(_in ev_uint32 index, _in const EarthView::World::Spatial::Display::IColor* pColor);
				typedef EarthView::World::Spatial::Display::CColorTable*  ( _stdcall EarthView_World_Spatial_Display_CColorTable_clone_CColorTable_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CColorTable_fromXmlElement_void_CXmlElement_Callback)(_inout void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CColorTable_toXmlElement_CXmlElement_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CColorTable_equal_ev_bool_CColorTable_Callback)(_in const EarthView::World::Spatial::Display::CColorTable* other);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CColorTable_toStream_void_CDataStream_Callback)(_inout void* stream);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CColorTable_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CColorTableProxy : public EarthView::World::Spatial::Display::CColorTable
				{
				private:
					EarthView_World_Spatial_Display_CColorTable_getColorCount_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CColorTable_getColorCount_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CColorTable_setColorCount_void_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CColorTable_setColorCount_void_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CColorTable_getColor_IColor_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CColorTable_getColor_IColor_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CColorTable_setColor_void_ev_uint32_IColor_Callback* m_EarthView_World_Spatial_Display_CColorTable_setColor_void_ev_uint32_IColor_Callback;
					EarthView_World_Spatial_Display_CColorTable_clone_CColorTable_Callback* m_EarthView_World_Spatial_Display_CColorTable_clone_CColorTable_Callback;
					EarthView_World_Spatial_Display_CColorTable_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CColorTable_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CColorTable_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CColorTable_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CColorTable_equal_ev_bool_CColorTable_Callback* m_EarthView_World_Spatial_Display_CColorTable_equal_ev_bool_CColorTable_Callback;
					EarthView_World_Spatial_Display_CColorTable_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CColorTable_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Display_CColorTable_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CColorTable_fromStream_void_CDataStream_Callback;
				public:
					CColorTableProxy(EarthView::World::Core::CNameValuePairList *pList) : CColorTable(pList)
					{
						m_EarthView_World_Spatial_Display_CColorTable_getColorCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CColorTable_setColorCount_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CColorTable_getColor_IColor_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CColorTable_setColor_void_ev_uint32_IColor_Callback = NULL;
						m_EarthView_World_Spatial_Display_CColorTable_clone_CColorTable_Callback = NULL;
						m_EarthView_World_Spatial_Display_CColorTable_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CColorTable_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CColorTable_equal_ev_bool_CColorTable_Callback = NULL;
						m_EarthView_World_Spatial_Display_CColorTable_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Display_CColorTable_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorTable_getColorCount_ev_uint32(EarthView_World_Spatial_Display_CColorTable_getColorCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorTable_getColorCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorTable_setColorCount_void_ev_uint32(EarthView_World_Spatial_Display_CColorTable_setColorCount_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorTable_setColorCount_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorTable_getColor_IColor_ev_uint32(EarthView_World_Spatial_Display_CColorTable_getColor_IColor_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorTable_getColor_IColor_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorTable_setColor_void_ev_uint32_IColor(EarthView_World_Spatial_Display_CColorTable_setColor_void_ev_uint32_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorTable_setColor_void_ev_uint32_IColor_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorTable_clone_CColorTable(EarthView_World_Spatial_Display_CColorTable_clone_CColorTable_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorTable_clone_CColorTable_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorTable_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Display_CColorTable_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorTable_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorTable_toXmlElement_CXmlElement(EarthView_World_Spatial_Display_CColorTable_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorTable_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorTable_equal_ev_bool_CColorTable(EarthView_World_Spatial_Display_CColorTable_equal_ev_bool_CColorTable_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorTable_equal_ev_bool_CColorTable_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorTable_toStream_void_CDataStream(EarthView_World_Spatial_Display_CColorTable_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorTable_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorTable_fromStream_void_CDataStream(EarthView_World_Spatial_Display_CColorTable_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorTable_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual ev_uint32 getColorCount() const
					{
						if(m_EarthView_World_Spatial_Display_CColorTable_getColorCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Display_CColorTable_getColorCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CColorTable::getColorCount();
					}
					virtual void setColorCount(_in ev_uint32 colorCount)
					{
						if(m_EarthView_World_Spatial_Display_CColorTable_setColorCount_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CColorTable_setColorCount_void_ev_uint32_Callback(colorCount);
						}
						else
							return this->CColorTable::setColorCount(colorCount);
					}
					virtual const EarthView::World::Spatial::Display::IColor* getColor(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CColorTable_getColor_IColor_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CColorTable_getColor_IColor_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CColorTable::getColor(index);
					}
					virtual void setColor(_in ev_uint32 index, _in const EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Display_CColorTable_setColor_void_ev_uint32_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CColorTable_setColor_void_ev_uint32_IColor_Callback(index, pColor);
						}
						else
							return this->CColorTable::setColor(index, pColor);
					}
					virtual EarthView::World::Spatial::Display::CColorTable* clone() const
					{
						if(m_EarthView_World_Spatial_Display_CColorTable_clone_CColorTable_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::CColorTable* returnValue = m_EarthView_World_Spatial_Display_CColorTable_clone_CColorTable_Callback();
							return returnValue;
						}
						else
							return this->CColorTable::clone();
					}
					virtual void fromXmlElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Display_CColorTable_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CColorTable_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CColorTable::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Display_CColorTable_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Display_CColorTable_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CColorTable::toXmlElement();
					}
					virtual ev_bool equal(_in const EarthView::World::Spatial::Display::CColorTable* other)
					{
						if(m_EarthView_World_Spatial_Display_CColorTable_equal_ev_bool_CColorTable_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CColorTable_equal_ev_bool_CColorTable_Callback(other);
							return returnValue;
						}
						else
							return this->CColorTable::equal(other);
					}
					virtual void toStream(_inout EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Display_CColorTable_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CColorTable_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CColorTable::toStream(stream);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Display_CColorTable_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CColorTable_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CColorTable::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(CColorTableProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Display_CColorTable_getColorCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CColorTable* ptrNativeObject = (EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX;
					if (dynamic_cast<CColorTableProxy*>((EarthView::World::Spatial::Display::CColorTable*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorTable::getColorCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getColorCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorTable_getColorCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorTable_getColorCount_ev_uint32_Callback* pCallback )
				{
					CColorTableProxy* ptr = dynamic_cast<CColorTableProxy*>((EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorTable_getColorCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Display_CColorTable_getColorCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CColorTable* ptrNativeObject = (EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorTable::getColorCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorTable_setColorCount_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 colorCount )
				{
					EarthView::World::Spatial::Display::CColorTable* ptrNativeObject = (EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX;
					if (dynamic_cast<CColorTableProxy*>((EarthView::World::Spatial::Display::CColorTable*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CColorTable::setColorCount(colorCount);
					else
						ptrNativeObject->setColorCount(colorCount);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorTable_setColorCount_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorTable_setColorCount_void_ev_uint32_Callback* pCallback )
				{
					CColorTableProxy* ptr = dynamic_cast<CColorTableProxy*>((EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorTable_setColorCount_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorTable_setColorCount_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 colorCount )
				{
					EarthView::World::Spatial::Display::CColorTable* ptrNativeObject = (EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CColorTable::setColorCount(colorCount);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Display_CColorTable_getColor_IColor_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Display::CColorTable* ptrNativeObject = (EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX;
					if (dynamic_cast<CColorTableProxy*>((EarthView::World::Spatial::Display::CColorTable*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorTable::getColor(index);
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getColor(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorTable_getColor_IColor_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorTable_getColor_IColor_ev_uint32_Callback* pCallback )
				{
					CColorTableProxy* ptr = dynamic_cast<CColorTableProxy*>((EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorTable_getColor_IColor_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Display_CColorTable_getColor_IColor_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Display::CColorTable* ptrNativeObject = (EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX;
					const EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorTable::getColor(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorTable_setColor_void_ev_uint32_IColor(void *pObjectXXXX, _in ev_uint32 index, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Display::CColorTable* ptrNativeObject = (EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX;
					if (dynamic_cast<CColorTableProxy*>((EarthView::World::Spatial::Display::CColorTable*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CColorTable::setColor(index, pColor);
					else
						ptrNativeObject->setColor(index, pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorTable_setColor_void_ev_uint32_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorTable_setColor_void_ev_uint32_IColor_Callback* pCallback )
				{
					CColorTableProxy* ptr = dynamic_cast<CColorTableProxy*>((EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorTable_setColor_void_ev_uint32_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorTable_setColor_void_ev_uint32_IColor_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in const EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Display::CColorTable* ptrNativeObject = (EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CColorTable::setColor(index, pColor);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CColorTable*  _stdcall EarthView_World_Spatial_Display_CColorTable_clone_CColorTable(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CColorTable* ptrNativeObject = (EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX;
					if (dynamic_cast<CColorTableProxy*>((EarthView::World::Spatial::Display::CColorTable*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::CColorTable* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorTable::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::CColorTable* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorTable_clone_CColorTable( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorTable_clone_CColorTable_Callback* pCallback )
				{
					CColorTableProxy* ptr = dynamic_cast<CColorTableProxy*>((EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorTable_clone_CColorTable(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CColorTable*  _stdcall EarthView_World_Spatial_Display_CColorTable_clone_CColorTable_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CColorTable* ptrNativeObject = (EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX;
					EarthView::World::Spatial::Display::CColorTable* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorTable::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorTable_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Display::CColorTable* ptrNativeObject = (EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX;
					if (dynamic_cast<CColorTableProxy*>((EarthView::World::Spatial::Display::CColorTable*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CColorTable::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorTable_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorTable_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CColorTableProxy* ptr = dynamic_cast<CColorTableProxy*>((EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorTable_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorTable_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Display::CColorTable* ptrNativeObject = (EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CColorTable::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CColorTable_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CColorTable* ptrNativeObject = (EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX;
					if (dynamic_cast<CColorTableProxy*>((EarthView::World::Spatial::Display::CColorTable*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorTable::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorTable_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorTable_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CColorTableProxy* ptr = dynamic_cast<CColorTableProxy*>((EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorTable_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CColorTable_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CColorTable* ptrNativeObject = (EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorTable::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CColorTable_equal_ev_bool_CColorTable(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::CColorTable* other )
				{
					EarthView::World::Spatial::Display::CColorTable* ptrNativeObject = (EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX;
					if (dynamic_cast<CColorTableProxy*>((EarthView::World::Spatial::Display::CColorTable*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorTable::equal(other);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equal(other);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorTable_equal_ev_bool_CColorTable( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorTable_equal_ev_bool_CColorTable_Callback* pCallback )
				{
					CColorTableProxy* ptr = dynamic_cast<CColorTableProxy*>((EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorTable_equal_ev_bool_CColorTable(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CColorTable_equal_ev_bool_CColorTable_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::CColorTable* other )
				{
					EarthView::World::Spatial::Display::CColorTable* ptrNativeObject = (EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorTable::equal(other);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorTable_toStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					const EarthView::World::Spatial::Display::CColorTable* ptrNativeObject = (EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX;
					if (dynamic_cast<CColorTableProxy*>((EarthView::World::Spatial::Display::CColorTable*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CColorTable::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorTable_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorTable_toStream_void_CDataStream_Callback* pCallback )
				{
					CColorTableProxy* ptr = dynamic_cast<CColorTableProxy*>((EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorTable_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorTable_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					const EarthView::World::Spatial::Display::CColorTable* ptrNativeObject = (EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CColorTable::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorTable_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CColorTable* ptrNativeObject = (EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX;
					if (dynamic_cast<CColorTableProxy*>((EarthView::World::Spatial::Display::CColorTable*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CColorTable::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorTable_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorTable_fromStream_void_CDataStream_Callback* pCallback )
				{
					CColorTableProxy* ptr = dynamic_cast<CColorTableProxy*>((EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorTable_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorTable_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CColorTable* ptrNativeObject = (EarthView::World::Spatial::Display::CColorTable*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CColorTable::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
			}
		}
	}
}
