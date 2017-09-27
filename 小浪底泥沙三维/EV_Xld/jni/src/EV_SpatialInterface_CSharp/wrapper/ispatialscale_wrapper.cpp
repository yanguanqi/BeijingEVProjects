/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ispatialscale.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_isActive_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_setActive_void_ev_bool_Callback)(_in ev_bool active);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_addSR_void_ISpatialReference_ev_real64_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64 bottomScale);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_removeSR_void_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_changeSR_void_ev_uint32_ISpatialReference_Callback)(_in ev_uint32 index, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest);
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_changeScale_void_ev_uint32_ev_real64_Callback)(_in ev_uint32 index, _in ev_real64 scale);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_uint32_Callback)(_in ev_uint32 index);
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_getScale_ev_real64_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_getSRCount_ev_uint32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_toXmlElement_CXmlElement_Callback)();
				class ISpatialScaleProxy : public EarthView::World::Spatial::Atlas::ISpatialScale
				{
				private:
					EarthView_World_Spatial_Atlas_ISpatialScale_isActive_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_ISpatialScale_isActive_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_ISpatialScale_setActive_void_ev_bool_Callback* m_EarthView_World_Spatial_Atlas_ISpatialScale_setActive_void_ev_bool_Callback;
					EarthView_World_Spatial_Atlas_ISpatialScale_addSR_void_ISpatialReference_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_ISpatialScale_addSR_void_ISpatialReference_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_ISpatialScale_removeSR_void_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_ISpatialScale_removeSR_void_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_ISpatialScale_changeSR_void_ev_uint32_ISpatialReference_Callback* m_EarthView_World_Spatial_Atlas_ISpatialScale_changeSR_void_ev_uint32_ISpatialReference_Callback;
					EarthView_World_Spatial_Atlas_ISpatialScale_changeScale_void_ev_uint32_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_ISpatialScale_changeScale_void_ev_uint32_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_real64_Callback* m_EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_real64_Callback;
					EarthView_World_Spatial_Atlas_ISpatialScale_getScale_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_ISpatialScale_getScale_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_ISpatialScale_getSRCount_ev_uint32_Callback* m_EarthView_World_Spatial_Atlas_ISpatialScale_getSRCount_ev_uint32_Callback;
					EarthView_World_Spatial_Atlas_ISpatialScale_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Atlas_ISpatialScale_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Atlas_ISpatialScale_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Atlas_ISpatialScale_toXmlElement_CXmlElement_Callback;
				public:
					ISpatialScaleProxy(EarthView::World::Core::CNameValuePairList *pList) : ISpatialScale(pList)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialScale_isActive_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ISpatialScale_setActive_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ISpatialScale_addSR_void_ISpatialReference_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ISpatialScale_removeSR_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ISpatialScale_changeSR_void_ev_uint32_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ISpatialScale_changeScale_void_ev_uint32_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ISpatialScale_getScale_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ISpatialScale_getSRCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ISpatialScale_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Atlas_ISpatialScale_toXmlElement_CXmlElement_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ISpatialScale_isActive_ev_bool(EarthView_World_Spatial_Atlas_ISpatialScale_isActive_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialScale_isActive_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ISpatialScale_setActive_void_ev_bool(EarthView_World_Spatial_Atlas_ISpatialScale_setActive_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialScale_setActive_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ISpatialScale_addSR_void_ISpatialReference_ev_real64(EarthView_World_Spatial_Atlas_ISpatialScale_addSR_void_ISpatialReference_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialScale_addSR_void_ISpatialReference_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ISpatialScale_removeSR_void_ev_uint32(EarthView_World_Spatial_Atlas_ISpatialScale_removeSR_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialScale_removeSR_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ISpatialScale_changeSR_void_ev_uint32_ISpatialReference(EarthView_World_Spatial_Atlas_ISpatialScale_changeSR_void_ev_uint32_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialScale_changeSR_void_ev_uint32_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ISpatialScale_changeScale_void_ev_uint32_ev_real64(EarthView_World_Spatial_Atlas_ISpatialScale_changeScale_void_ev_uint32_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialScale_changeScale_void_ev_uint32_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_uint32(EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_real64(EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ISpatialScale_getScale_ev_real64_ev_uint32(EarthView_World_Spatial_Atlas_ISpatialScale_getScale_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialScale_getScale_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ISpatialScale_getSRCount_ev_uint32(EarthView_World_Spatial_Atlas_ISpatialScale_getSRCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialScale_getSRCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ISpatialScale_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Atlas_ISpatialScale_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialScale_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Atlas_ISpatialScale_toXmlElement_CXmlElement(EarthView_World_Spatial_Atlas_ISpatialScale_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Atlas_ISpatialScale_toXmlElement_CXmlElement_Callback = pCallback;
					}
					virtual ev_bool isActive() const
					{
						if(m_EarthView_World_Spatial_Atlas_ISpatialScale_isActive_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Atlas_ISpatialScale_isActive_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ISpatialScale::isActive();
					}
					virtual void setActive(_in ev_bool active)
					{
						if(m_EarthView_World_Spatial_Atlas_ISpatialScale_setActive_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_ISpatialScale_setActive_void_ev_bool_Callback(active);
						}
						else
							return this->ISpatialScale::setActive(active);
					}
					virtual void addSR(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64 bottomScale)
					{
						if(m_EarthView_World_Spatial_Atlas_ISpatialScale_addSR_void_ISpatialReference_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_ISpatialScale_addSR_void_ISpatialReference_ev_real64_Callback(sr, bottomScale);
						}
						else
							return this->ISpatialScale::addSR(sr, bottomScale);
					}
					virtual void removeSR(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_Atlas_ISpatialScale_removeSR_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_ISpatialScale_removeSR_void_ev_uint32_Callback(index);
						}
						else
							return this->ISpatialScale::removeSR(index);
					}
					virtual void changeSR(_in ev_uint32 index, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest)
					{
						if(m_EarthView_World_Spatial_Atlas_ISpatialScale_changeSR_void_ev_uint32_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_ISpatialScale_changeSR_void_ev_uint32_ISpatialReference_Callback(index, dest);
						}
						else
							return this->ISpatialScale::changeSR(index, dest);
					}
					virtual void changeScale(_in ev_uint32 index, _in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial_Atlas_ISpatialScale_changeScale_void_ev_uint32_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_ISpatialScale_changeScale_void_ev_uint32_ev_real64_Callback(index, scale);
						}
						else
							return this->ISpatialScale::changeScale(index, scale);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSR(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->ISpatialScale::getSR(index);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSR(_in ev_real64 scale) const
					{
						if(m_EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_real64_Callback(scale);
							return returnValue;
						}
						else
							return this->ISpatialScale::getSR(scale);
					}
					virtual ev_real64 getScale(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_Atlas_ISpatialScale_getScale_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Atlas_ISpatialScale_getScale_ev_real64_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->ISpatialScale::getScale(index);
					}
					virtual ev_uint32 getSRCount() const
					{
						if(m_EarthView_World_Spatial_Atlas_ISpatialScale_getSRCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Atlas_ISpatialScale_getSRCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->ISpatialScale::getSRCount();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Atlas_ISpatialScale_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Atlas_ISpatialScale_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->ISpatialScale::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Atlas_ISpatialScale_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Atlas_ISpatialScale_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->ISpatialScale::toXmlElement();
					}
				};
				REGISTER_FACTORY_CLASS(ISpatialScaleProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_isActive_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					if (dynamic_cast<ISpatialScaleProxy*>((EarthView::World::Spatial::Atlas::ISpatialScale*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialScale::isActive();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isActive();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialScale_isActive_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ISpatialScale_isActive_ev_bool_Callback* pCallback )
				{
					ISpatialScaleProxy* ptr = dynamic_cast<ISpatialScaleProxy*>((EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ISpatialScale_isActive_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_isActive_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialScale::isActive();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_setActive_void_ev_bool(void *pObjectXXXX, _in ev_bool active )
				{
					EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					if (dynamic_cast<ISpatialScaleProxy*>((EarthView::World::Spatial::Atlas::ISpatialScale*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialScale::setActive(active);
					else
						ptrNativeObject->setActive(active);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialScale_setActive_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ISpatialScale_setActive_void_ev_bool_Callback* pCallback )
				{
					ISpatialScaleProxy* ptr = dynamic_cast<ISpatialScaleProxy*>((EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ISpatialScale_setActive_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_setActive_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool active )
				{
					EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialScale::setActive(active);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_addSR_void_ISpatialReference_ev_real64(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64 bottomScale )
				{
					EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					if (dynamic_cast<ISpatialScaleProxy*>((EarthView::World::Spatial::Atlas::ISpatialScale*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialScale::addSR(sr, bottomScale);
					else
						ptrNativeObject->addSR(sr, bottomScale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialScale_addSR_void_ISpatialReference_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ISpatialScale_addSR_void_ISpatialReference_ev_real64_Callback* pCallback )
				{
					ISpatialScaleProxy* ptr = dynamic_cast<ISpatialScaleProxy*>((EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ISpatialScale_addSR_void_ISpatialReference_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_addSR_void_ISpatialReference_ev_real64_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr, _in ev_real64 bottomScale )
				{
					EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialScale::addSR(sr, bottomScale);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_removeSR_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					if (dynamic_cast<ISpatialScaleProxy*>((EarthView::World::Spatial::Atlas::ISpatialScale*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialScale::removeSR(index);
					else
						ptrNativeObject->removeSR(index);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialScale_removeSR_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ISpatialScale_removeSR_void_ev_uint32_Callback* pCallback )
				{
					ISpatialScaleProxy* ptr = dynamic_cast<ISpatialScaleProxy*>((EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ISpatialScale_removeSR_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_removeSR_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialScale::removeSR(index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_changeSR_void_ev_uint32_ISpatialReference(void *pObjectXXXX, _in ev_uint32 index, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest )
				{
					EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					if (dynamic_cast<ISpatialScaleProxy*>((EarthView::World::Spatial::Atlas::ISpatialScale*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialScale::changeSR(index, dest);
					else
						ptrNativeObject->changeSR(index, dest);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialScale_changeSR_void_ev_uint32_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ISpatialScale_changeSR_void_ev_uint32_ISpatialReference_Callback* pCallback )
				{
					ISpatialScaleProxy* ptr = dynamic_cast<ISpatialScaleProxy*>((EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ISpatialScale_changeSR_void_ev_uint32_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_changeSR_void_ev_uint32_ISpatialReference_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in const EarthView::World::Spatial::Geometry::ISpatialReference* dest )
				{
					EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialScale::changeSR(index, dest);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_changeScale_void_ev_uint32_ev_real64(void *pObjectXXXX, _in ev_uint32 index, _in ev_real64 scale )
				{
					EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					if (dynamic_cast<ISpatialScaleProxy*>((EarthView::World::Spatial::Atlas::ISpatialScale*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialScale::changeScale(index, scale);
					else
						ptrNativeObject->changeScale(index, scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialScale_changeScale_void_ev_uint32_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ISpatialScale_changeScale_void_ev_uint32_ev_real64_Callback* pCallback )
				{
					ISpatialScaleProxy* ptr = dynamic_cast<ISpatialScaleProxy*>((EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ISpatialScale_changeScale_void_ev_uint32_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_changeScale_void_ev_uint32_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in ev_real64 scale )
				{
					EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialScale::changeScale(index, scale);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					if (dynamic_cast<ISpatialScaleProxy*>((EarthView::World::Spatial::Atlas::ISpatialScale*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialScale::getSR(index);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSR(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_uint32_Callback* pCallback )
				{
					ISpatialScaleProxy* ptr = dynamic_cast<ISpatialScaleProxy*>((EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialScale::getSR(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_real64(void *pObjectXXXX, _in ev_real64 scale )
				{
					const EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					if (dynamic_cast<ISpatialScaleProxy*>((EarthView::World::Spatial::Atlas::ISpatialScale*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialScale::getSR(scale);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSR(scale);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_real64_Callback* pCallback )
				{
					ISpatialScaleProxy* ptr = dynamic_cast<ISpatialScaleProxy*>((EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_getSR_ISpatialReference_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale )
				{
					const EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialScale::getSR(scale);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_getScale_ev_real64_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					if (dynamic_cast<ISpatialScaleProxy*>((EarthView::World::Spatial::Atlas::ISpatialScale*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialScale::getScale(index);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getScale(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialScale_getScale_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ISpatialScale_getScale_ev_real64_ev_uint32_Callback* pCallback )
				{
					ISpatialScaleProxy* ptr = dynamic_cast<ISpatialScaleProxy*>((EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ISpatialScale_getScale_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_getScale_ev_real64_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialScale::getScale(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_getSRCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					if (dynamic_cast<ISpatialScaleProxy*>((EarthView::World::Spatial::Atlas::ISpatialScale*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialScale::getSRCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getSRCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialScale_getSRCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ISpatialScale_getSRCount_ev_uint32_Callback* pCallback )
				{
					ISpatialScaleProxy* ptr = dynamic_cast<ISpatialScaleProxy*>((EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ISpatialScale_getSRCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_getSRCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialScale::getSRCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					if (dynamic_cast<ISpatialScaleProxy*>((EarthView::World::Spatial::Atlas::ISpatialScale*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialScale::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialScale_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ISpatialScale_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					ISpatialScaleProxy* ptr = dynamic_cast<ISpatialScaleProxy*>((EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ISpatialScale_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialScale::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					if (dynamic_cast<ISpatialScaleProxy*>((EarthView::World::Spatial::Atlas::ISpatialScale*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialScale::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Atlas_ISpatialScale_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Atlas_ISpatialScale_toXmlElement_CXmlElement_Callback* pCallback )
				{
					ISpatialScaleProxy* ptr = dynamic_cast<ISpatialScaleProxy*>((EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Atlas_ISpatialScale_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Atlas_ISpatialScale_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Atlas::ISpatialScale* ptrNativeObject = (EarthView::World::Spatial::Atlas::ISpatialScale*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Atlas::ISpatialScale::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
