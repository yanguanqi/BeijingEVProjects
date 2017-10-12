/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2datlas/spatialthemescale.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Theme
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Atlas
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_isActive_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_setActive_void_ev_bool_Callback)(_in ev_bool active);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_addTheme_void_ITheme_ev_real64_Callback)(_in const EarthView::World::Spatial::Theme::ITheme* pTheme, _in ev_real64 bottomScale);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_removeTheme_void_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeTheme_void_ev_uint32_ITheme_Callback)(_in ev_uint32 index, _in const EarthView::World::Spatial::Theme::ITheme* dest);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeScale_void_ev_uint32_ev_real64_Callback)(_in ev_uint32 index, _in ev_real64 scale);
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_uint32_Callback)(_in ev_uint32 index);
				typedef EarthView::World::Spatial::Theme::ITheme*  ( _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_real64_Callback)(_in ev_real64 scale);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getScale_ev_real64_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeCount_ev_uint32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeIndex_ev_uint32_ev_real64_Callback)(_in ev_real64 scale);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_toXmlElement_CXmlElement_Callback)();
				class CSpatialThemeScaleProxy : public EarthView::World::Spatial2D::Atlas::CSpatialThemeScale
				{
				private:
					EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_isActive_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_isActive_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_setActive_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_setActive_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_addTheme_void_ITheme_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_addTheme_void_ITheme_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_removeTheme_void_ev_uint32_Callback* m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_removeTheme_void_ev_uint32_Callback;
					EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeTheme_void_ev_uint32_ITheme_Callback* m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeTheme_void_ev_uint32_ITheme_Callback;
					EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeScale_void_ev_uint32_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeScale_void_ev_uint32_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_uint32_Callback* m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_uint32_Callback;
					EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getScale_ev_real64_ev_uint32_Callback* m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getScale_ev_real64_ev_uint32_Callback;
					EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeCount_ev_uint32_Callback* m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeCount_ev_uint32_Callback;
					EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeIndex_ev_uint32_ev_real64_Callback* m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeIndex_ev_uint32_ev_real64_Callback;
					EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_toXmlElement_CXmlElement_Callback;
				public:
					CSpatialThemeScaleProxy(EarthView::World::Core::CNameValuePairList *pList) : CSpatialThemeScale(pList)
					{
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_isActive_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_setActive_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_addTheme_void_ITheme_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_removeTheme_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeTheme_void_ev_uint32_ITheme_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeScale_void_ev_uint32_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getScale_ev_real64_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeIndex_ev_uint32_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_toXmlElement_CXmlElement_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_isActive_ev_bool(EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_isActive_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_isActive_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_setActive_void_ev_bool(EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_setActive_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_setActive_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_addTheme_void_ITheme_ev_real64(EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_addTheme_void_ITheme_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_addTheme_void_ITheme_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_removeTheme_void_ev_uint32(EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_removeTheme_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_removeTheme_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeTheme_void_ev_uint32_ITheme(EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeTheme_void_ev_uint32_ITheme_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeTheme_void_ev_uint32_ITheme_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeScale_void_ev_uint32_ev_real64(EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeScale_void_ev_uint32_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeScale_void_ev_uint32_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_uint32(EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_real64(EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getScale_ev_real64_ev_uint32(EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getScale_ev_real64_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getScale_ev_real64_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeCount_ev_uint32(EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_fromXmlElement_void_CXmlElement(EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeIndex_ev_uint32_ev_real64(EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeIndex_ev_uint32_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeIndex_ev_uint32_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_toXmlElement_CXmlElement(EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_toXmlElement_CXmlElement_Callback = pCallback;
					}
					virtual ev_bool isActive() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_isActive_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_isActive_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CSpatialThemeScale::isActive();
					}
					virtual void setActive(_in ev_bool active)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_setActive_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_setActive_void_ev_bool_Callback(active);
						}
						else
							return this->CSpatialThemeScale::setActive(active);
					}
					virtual void addTheme(_in const EarthView::World::Spatial::Theme::ITheme* pTheme, _in ev_real64 bottomScale)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_addTheme_void_ITheme_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_addTheme_void_ITheme_ev_real64_Callback(pTheme, bottomScale);
						}
						else
							return this->CSpatialThemeScale::addTheme(pTheme, bottomScale);
					}
					virtual void removeTheme(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_removeTheme_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_removeTheme_void_ev_uint32_Callback(index);
						}
						else
							return this->CSpatialThemeScale::removeTheme(index);
					}
					virtual void changeTheme(_in ev_uint32 index, _in const EarthView::World::Spatial::Theme::ITheme* dest)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeTheme_void_ev_uint32_ITheme_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeTheme_void_ev_uint32_ITheme_Callback(index, dest);
						}
						else
							return this->CSpatialThemeScale::changeTheme(index, dest);
					}
					virtual void changeScale(_in ev_uint32 index, _in ev_real64 scale)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeScale_void_ev_uint32_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeScale_void_ev_uint32_ev_real64_Callback(index, scale);
						}
						else
							return this->CSpatialThemeScale::changeScale(index, scale);
					}
					virtual EarthView::World::Spatial::Theme::ITheme* getTheme(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CSpatialThemeScale::getTheme(index);
					}
					virtual EarthView::World::Spatial::Theme::ITheme* getTheme(_in ev_real64 scale) const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Theme::ITheme* returnValue = m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_real64_Callback(scale);
							return returnValue;
						}
						else
							return this->CSpatialThemeScale::getTheme(scale);
					}
					virtual ev_real64 getScale(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getScale_ev_real64_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getScale_ev_real64_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CSpatialThemeScale::getScale(index);
					}
					virtual ev_uint32 getThemeCount() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CSpatialThemeScale::getThemeCount();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CSpatialThemeScale::fromXmlElement(element);
					}
					virtual ev_uint32 getThemeIndex(_in ev_real64 scale) const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeIndex_ev_uint32_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeIndex_ev_uint32_ev_real64_Callback(scale);
							return returnValue;
						}
						else
							return this->CSpatialThemeScale::getThemeIndex(scale);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CSpatialThemeScale::toXmlElement();
					}
				};
				REGISTER_FACTORY_CLASS(CSpatialThemeScaleProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_isActive_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					if (dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::isActive();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isActive();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_isActive_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_isActive_ev_bool_Callback* pCallback )
				{
					CSpatialThemeScaleProxy* ptr = dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_isActive_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_isActive_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::isActive();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_setActive_void_ev_bool(void *pObjectXXXX, _in ev_bool active )
				{
					EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					if (dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::setActive(active);
					else
						ptrNativeObject->setActive(active);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_setActive_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_setActive_void_ev_bool_Callback* pCallback )
				{
					CSpatialThemeScaleProxy* ptr = dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_setActive_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_setActive_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool active )
				{
					EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::setActive(active);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_addTheme_void_ITheme_ev_real64(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* pTheme, _in ev_real64 bottomScale )
				{
					EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					if (dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::addTheme(pTheme, bottomScale);
					else
						ptrNativeObject->addTheme(pTheme, bottomScale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_addTheme_void_ITheme_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_addTheme_void_ITheme_ev_real64_Callback* pCallback )
				{
					CSpatialThemeScaleProxy* ptr = dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_addTheme_void_ITheme_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_addTheme_void_ITheme_ev_real64_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Theme::ITheme* pTheme, _in ev_real64 bottomScale )
				{
					EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::addTheme(pTheme, bottomScale);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_removeTheme_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					if (dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::removeTheme(index);
					else
						ptrNativeObject->removeTheme(index);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_removeTheme_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_removeTheme_void_ev_uint32_Callback* pCallback )
				{
					CSpatialThemeScaleProxy* ptr = dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_removeTheme_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_removeTheme_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::removeTheme(index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeTheme_void_ev_uint32_ITheme(void *pObjectXXXX, _in ev_uint32 index, _in const EarthView::World::Spatial::Theme::ITheme* dest )
				{
					EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					if (dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::changeTheme(index, dest);
					else
						ptrNativeObject->changeTheme(index, dest);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeTheme_void_ev_uint32_ITheme( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeTheme_void_ev_uint32_ITheme_Callback* pCallback )
				{
					CSpatialThemeScaleProxy* ptr = dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeTheme_void_ev_uint32_ITheme(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeTheme_void_ev_uint32_ITheme_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in const EarthView::World::Spatial::Theme::ITheme* dest )
				{
					EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::changeTheme(index, dest);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeScale_void_ev_uint32_ev_real64(void *pObjectXXXX, _in ev_uint32 index, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					if (dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::changeScale(index, scale);
					else
						ptrNativeObject->changeScale(index, scale);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeScale_void_ev_uint32_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeScale_void_ev_uint32_ev_real64_Callback* pCallback )
				{
					CSpatialThemeScaleProxy* ptr = dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeScale_void_ev_uint32_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_changeScale_void_ev_uint32_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in ev_real64 scale )
				{
					EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::changeScale(index, scale);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					if (dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::getTheme(index);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->getTheme(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_uint32_Callback* pCallback )
				{
					CSpatialThemeScaleProxy* ptr = dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::getTheme(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_real64(void *pObjectXXXX, _in ev_real64 scale )
				{
					const EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					if (dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::getTheme(scale);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->getTheme(scale);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_real64_Callback* pCallback )
				{
					CSpatialThemeScaleProxy* ptr = dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Theme::ITheme*  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getTheme_ITheme_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale )
				{
					const EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					EarthView::World::Spatial::Theme::ITheme* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::getTheme(scale);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getScale_ev_real64_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					if (dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::getScale(index);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getScale(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getScale_ev_real64_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getScale_ev_real64_ev_uint32_Callback* pCallback )
				{
					CSpatialThemeScaleProxy* ptr = dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getScale_ev_real64_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getScale_ev_real64_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::getScale(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					if (dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::getThemeCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getThemeCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeCount_ev_uint32_Callback* pCallback )
				{
					CSpatialThemeScaleProxy* ptr = dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::getThemeCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					if (dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CSpatialThemeScaleProxy* ptr = dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeIndex_ev_uint32_ev_real64(void *pObjectXXXX, _in ev_real64 scale )
				{
					const EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					if (dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::getThemeIndex(scale);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getThemeIndex(scale);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeIndex_ev_uint32_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeIndex_ev_uint32_ev_real64_Callback* pCallback )
				{
					CSpatialThemeScaleProxy* ptr = dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeIndex_ev_uint32_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_getThemeIndex_ev_uint32_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 scale )
				{
					const EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::getThemeIndex(scale);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					if (dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CSpatialThemeScaleProxy* ptr = dynamic_cast<CSpatialThemeScaleProxy*>((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CSpatialThemeScale* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CSpatialThemeScale::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_Atlas_CSpatialThemeScale_OperatorAssign_CSpatialThemeScale_CSpatialThemeScale(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Spatial2D::Atlas::CSpatialThemeScale& objXXXX = *((EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial2D::Atlas::CSpatialThemeScale*)other;
					EarthView::World::Spatial2D::Atlas::CSpatialThemeScale *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
		}
	}
}
