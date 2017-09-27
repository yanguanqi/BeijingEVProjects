/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "color/colorramp.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CColorRamp_createRamp_void_ev_uint32_Callback)(_in ev_uint32 count);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Display_CColorRamp_getColorCount_ev_uint32_Callback)();
				typedef const EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CColorRamp_getColorRef_IColor_ev_uint32_Callback)(_in ev_uint32 index);
				typedef int  ( _stdcall EarthView_World_Spatial_Display_CColorRamp_getColorRampType_EVColorRampType_Callback)();
				typedef EarthView::World::Spatial::Display::CColorRamp*  ( _stdcall EarthView_World_Spatial_Display_CColorRamp_clone_CColorRamp_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CColorRamp_toStream_void_CDataStream_Callback)(_out void* stream);
				typedef void*  ( _stdcall EarthView_World_Spatial_Display_CColorRamp_toXmlElement_CXmlElement_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CColorRamp_fromXmlElement_void_CXmlElement_Callback)(_inout void* element);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CColorRamp_equal_ev_bool_CColorRamp_Callback)(_in const EarthView::World::Spatial::Display::CColorRamp* pColorRamp);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CColorRamp_fromStream_void_CDataStream_Callback)(_inout void* stream);
				class CColorRampProxy : public EarthView::World::Spatial::Display::CColorRamp
				{
				private:
					EarthView_World_Spatial_Display_CColorRamp_createRamp_void_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CColorRamp_createRamp_void_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CColorRamp_getColorCount_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CColorRamp_getColorCount_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CColorRamp_getColorRef_IColor_ev_uint32_Callback* m_EarthView_World_Spatial_Display_CColorRamp_getColorRef_IColor_ev_uint32_Callback;
					EarthView_World_Spatial_Display_CColorRamp_getColorRampType_EVColorRampType_Callback* m_EarthView_World_Spatial_Display_CColorRamp_getColorRampType_EVColorRampType_Callback;
					EarthView_World_Spatial_Display_CColorRamp_clone_CColorRamp_Callback* m_EarthView_World_Spatial_Display_CColorRamp_clone_CColorRamp_Callback;
					EarthView_World_Spatial_Display_CColorRamp_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CColorRamp_toStream_void_CDataStream_Callback;
					EarthView_World_Spatial_Display_CColorRamp_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CColorRamp_toXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CColorRamp_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CColorRamp_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CColorRamp_equal_ev_bool_CColorRamp_Callback* m_EarthView_World_Spatial_Display_CColorRamp_equal_ev_bool_CColorRamp_Callback;
					EarthView_World_Spatial_Display_CColorRamp_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_Display_CColorRamp_fromStream_void_CDataStream_Callback;
				public:
					CColorRampProxy(EarthView::World::Core::CNameValuePairList *pList) : CColorRamp(pList)
					{
						m_EarthView_World_Spatial_Display_CColorRamp_createRamp_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CColorRamp_getColorCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CColorRamp_getColorRef_IColor_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CColorRamp_getColorRampType_EVColorRampType_Callback = NULL;
						m_EarthView_World_Spatial_Display_CColorRamp_clone_CColorRamp_Callback = NULL;
						m_EarthView_World_Spatial_Display_CColorRamp_toStream_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Display_CColorRamp_toXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CColorRamp_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CColorRamp_equal_ev_bool_CColorRamp_Callback = NULL;
						m_EarthView_World_Spatial_Display_CColorRamp_fromStream_void_CDataStream_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorRamp_createRamp_void_ev_uint32(EarthView_World_Spatial_Display_CColorRamp_createRamp_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorRamp_createRamp_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorRamp_getColorCount_ev_uint32(EarthView_World_Spatial_Display_CColorRamp_getColorCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorRamp_getColorCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorRamp_getColorRef_IColor_ev_uint32(EarthView_World_Spatial_Display_CColorRamp_getColorRef_IColor_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorRamp_getColorRef_IColor_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorRamp_getColorRampType_EVColorRampType(EarthView_World_Spatial_Display_CColorRamp_getColorRampType_EVColorRampType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorRamp_getColorRampType_EVColorRampType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorRamp_clone_CColorRamp(EarthView_World_Spatial_Display_CColorRamp_clone_CColorRamp_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorRamp_clone_CColorRamp_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorRamp_toStream_void_CDataStream(EarthView_World_Spatial_Display_CColorRamp_toStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorRamp_toStream_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorRamp_toXmlElement_CXmlElement(EarthView_World_Spatial_Display_CColorRamp_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorRamp_toXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorRamp_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Display_CColorRamp_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorRamp_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorRamp_equal_ev_bool_CColorRamp(EarthView_World_Spatial_Display_CColorRamp_equal_ev_bool_CColorRamp_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorRamp_equal_ev_bool_CColorRamp_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorRamp_fromStream_void_CDataStream(EarthView_World_Spatial_Display_CColorRamp_fromStream_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorRamp_fromStream_void_CDataStream_Callback = pCallback;
					}
					virtual void createRamp(_in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Display_CColorRamp_createRamp_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CColorRamp_createRamp_void_ev_uint32_Callback(count);
						}
						else
							return this->CColorRamp::createRamp(count);
					}
					virtual ev_uint32 getColorCount() const
					{
						if(m_EarthView_World_Spatial_Display_CColorRamp_getColorCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Display_CColorRamp_getColorCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CColorRamp::getColorCount();
					}
					virtual const EarthView::World::Spatial::Display::IColor* getColorRef(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Display_CColorRamp_getColorRef_IColor_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CColorRamp_getColorRef_IColor_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CColorRamp::getColorRef(index);
					}
					virtual EarthView::World::Spatial::Display::EVColorRampType getColorRampType() const
					{
						if(m_EarthView_World_Spatial_Display_CColorRamp_getColorRampType_EVColorRampType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::EVColorRampType returnValue = (EarthView::World::Spatial::Display::EVColorRampType)m_EarthView_World_Spatial_Display_CColorRamp_getColorRampType_EVColorRampType_Callback();
							return returnValue;
						}
						else
							return this->CColorRamp::getColorRampType();
					}
					virtual EarthView::World::Spatial::Display::CColorRamp* clone() const
					{
						if(m_EarthView_World_Spatial_Display_CColorRamp_clone_CColorRamp_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::CColorRamp* returnValue = m_EarthView_World_Spatial_Display_CColorRamp_clone_CColorRamp_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CColorRamp::clone();
					}
					virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
					{
						if(m_EarthView_World_Spatial_Display_CColorRamp_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CColorRamp_toStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CColorRamp::toStream(stream);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Display_CColorRamp_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Display_CColorRamp_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CColorRamp::toXmlElement();
					}
					virtual void fromXmlElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Display_CColorRamp_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CColorRamp_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CColorRamp::fromXmlElement(element);
					}
					virtual ev_bool equal(_in const EarthView::World::Spatial::Display::CColorRamp* pColorRamp)
					{
						if(m_EarthView_World_Spatial_Display_CColorRamp_equal_ev_bool_CColorRamp_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CColorRamp_equal_ev_bool_CColorRamp_Callback(pColorRamp);
							return returnValue;
						}
						else
							return this->CColorRamp::equal(pColorRamp);
					}
					virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Display_CColorRamp_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CColorRamp_fromStream_void_CDataStream_Callback(&stream);
						}
						else
							return this->CColorRamp::fromStream(stream);
					}
				};
				REGISTER_FACTORY_CLASS(CColorRampProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorRamp_createRamp_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Display::CColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX;
					if (dynamic_cast<CColorRampProxy*>((EarthView::World::Spatial::Display::CColorRamp*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CColorRamp::createRamp(count);
					else
						ptrNativeObject->createRamp(count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorRamp_createRamp_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorRamp_createRamp_void_ev_uint32_Callback* pCallback )
				{
					CColorRampProxy* ptr = dynamic_cast<CColorRampProxy*>((EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorRamp_createRamp_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorRamp_createRamp_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Display::CColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CColorRamp::createRamp(count);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Display_CColorRamp_getColorCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX;
					if (dynamic_cast<CColorRampProxy*>((EarthView::World::Spatial::Display::CColorRamp*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorRamp::getColorCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getColorCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorRamp_getColorCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorRamp_getColorCount_ev_uint32_Callback* pCallback )
				{
					CColorRampProxy* ptr = dynamic_cast<CColorRampProxy*>((EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorRamp_getColorCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Display_CColorRamp_getColorCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorRamp::getColorCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Display_CColorRamp_getColorRef_IColor_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Display::CColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX;
					if (dynamic_cast<CColorRampProxy*>((EarthView::World::Spatial::Display::CColorRamp*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorRamp::getColorRef(index);
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getColorRef(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorRamp_getColorRef_IColor_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorRamp_getColorRef_IColor_ev_uint32_Callback* pCallback )
				{
					CColorRampProxy* ptr = dynamic_cast<CColorRampProxy*>((EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorRamp_getColorRef_IColor_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Display_CColorRamp_getColorRef_IColor_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Display::CColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX;
					const EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorRamp::getColorRef(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CColorRamp_getColorRampType_EVColorRampType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX;
					if (dynamic_cast<CColorRampProxy*>((EarthView::World::Spatial::Display::CColorRamp*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::EVColorRampType objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorRamp::getColorRampType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::EVColorRampType objXXXX = ptrNativeObject->getColorRampType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorRamp_getColorRampType_EVColorRampType( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorRamp_getColorRampType_EVColorRampType_Callback* pCallback )
				{
					CColorRampProxy* ptr = dynamic_cast<CColorRampProxy*>((EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorRamp_getColorRampType_EVColorRampType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CColorRamp_getColorRampType_EVColorRampType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX;
					EarthView::World::Spatial::Display::EVColorRampType objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorRamp::getColorRampType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CColorRamp*  _stdcall EarthView_World_Spatial_Display_CColorRamp_clone_CColorRamp(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX;
					if (dynamic_cast<CColorRampProxy*>((EarthView::World::Spatial::Display::CColorRamp*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::CColorRamp* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorRamp::clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::CColorRamp* objXXXX = ptrNativeObject->clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorRamp_clone_CColorRamp( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorRamp_clone_CColorRamp_Callback* pCallback )
				{
					CColorRampProxy* ptr = dynamic_cast<CColorRampProxy*>((EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorRamp_clone_CColorRamp(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CColorRamp*  _stdcall EarthView_World_Spatial_Display_CColorRamp_clone_CColorRamp_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX;
					EarthView::World::Spatial::Display::CColorRamp* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorRamp::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CColorRamp_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorRamp_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX;
					if (dynamic_cast<CColorRampProxy*>((EarthView::World::Spatial::Display::CColorRamp*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CColorRamp::toStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorRamp_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorRamp_toStream_void_CDataStream_Callback* pCallback )
				{
					CColorRampProxy* ptr = dynamic_cast<CColorRampProxy*>((EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorRamp_toStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorRamp_toStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial::Display::CColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CColorRamp::toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CColorRamp_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX;
					if (dynamic_cast<CColorRampProxy*>((EarthView::World::Spatial::Display::CColorRamp*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorRamp::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorRamp_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorRamp_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CColorRampProxy* ptr = dynamic_cast<CColorRampProxy*>((EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorRamp_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CColorRamp_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorRamp::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorRamp_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Display::CColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX;
					if (dynamic_cast<CColorRampProxy*>((EarthView::World::Spatial::Display::CColorRamp*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CColorRamp::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorRamp_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorRamp_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CColorRampProxy* ptr = dynamic_cast<CColorRampProxy*>((EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorRamp_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorRamp_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Display::CColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CColorRamp::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CColorRamp_equal_ev_bool_CColorRamp(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::CColorRamp* pColorRamp )
				{
					EarthView::World::Spatial::Display::CColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX;
					if (dynamic_cast<CColorRampProxy*>((EarthView::World::Spatial::Display::CColorRamp*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorRamp::equal(pColorRamp);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->equal(pColorRamp);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorRamp_equal_ev_bool_CColorRamp( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorRamp_equal_ev_bool_CColorRamp_Callback* pCallback )
				{
					CColorRampProxy* ptr = dynamic_cast<CColorRampProxy*>((EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorRamp_equal_ev_bool_CColorRamp(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CColorRamp_equal_ev_bool_CColorRamp_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::CColorRamp* pColorRamp )
				{
					EarthView::World::Spatial::Display::CColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorRamp::equal(pColorRamp);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorRamp_fromStream_void_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX;
					if (dynamic_cast<CColorRampProxy*>((EarthView::World::Spatial::Display::CColorRamp*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CColorRamp::fromStream(*(EarthView::World::Core::CDataStream*)stream);
					else
						ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorRamp_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorRamp_fromStream_void_CDataStream_Callback* pCallback )
				{
					CColorRampProxy* ptr = dynamic_cast<CColorRampProxy*>((EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorRamp_fromStream_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorRamp_fromStream_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CColorRamp* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRamp*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CColorRamp::fromStream(*(EarthView::World::Core::CDataStream*)stream);
				}
			}
		}
	}
}
