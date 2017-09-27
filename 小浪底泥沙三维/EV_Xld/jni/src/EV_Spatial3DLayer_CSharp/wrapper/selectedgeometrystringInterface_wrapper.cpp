/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dlayer/selectedgeometrystringInterface.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_getParameter_EVString_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
				class CSelectedGeometryStringInterfaceProxy : public EarthView::World::Spatial3D::Atlas::CSelectedGeometryStringInterface
				{
				private:
					EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameter_ev_bool_EVString_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameterList_void_CommonStringPairList_Callback;
					EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_getParameter_EVString_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_getParameter_EVString_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_copyParametersTo_void_CStringInterface_Callback;
				public:
					CSelectedGeometryStringInterfaceProxy(EarthView::World::Core::CNameValuePairList *pList) : CSelectedGeometryStringInterface(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameter_ev_bool_EVString_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameterList_void_CommonStringPairList_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_getParameter_EVString_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_copyParametersTo_void_CStringInterface_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameter_ev_bool_EVString_EVString(EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameterList_void_CommonStringPairList(EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameterList_void_CommonStringPairList_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameterList_void_CommonStringPairList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_getParameter_EVString_EVString(EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_getParameter_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_getParameter_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_copyParametersTo_void_CStringInterface(EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_copyParametersTo_void_CStringInterface_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_copyParametersTo_void_CStringInterface_Callback = pCallback;
					}
					virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							char* value_Char = value.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
							return returnValue;
						}
						else
							return this->CSelectedGeometryStringInterface::setParameter(name, value);
					}
					virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
							return returnValue;
						}
						else
							return this->CSelectedGeometryStringInterface::setParameter(name, readOnly, enable);
					}
					virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameterList_void_CommonStringPairList_Callback(&paramList);
						}
						else
							return this->CSelectedGeometryStringInterface::setParameterList(paramList);
					}
					virtual EVString getParameter(_in const EVString& name) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EVString returnValue = m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_getParameter_EVString_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CSelectedGeometryStringInterface::getParameter(name);
					}
					virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_copyParametersTo_void_CStringInterface_Callback(dest);
						}
						else
							return this->CSelectedGeometryStringInterface::copyParametersTo(dest);
					}
				};
				REGISTER_FACTORY_CLASS(CSelectedGeometryStringInterfaceProxy);
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_getLayerName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CSelectedGeometryStringInterface* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSelectedGeometryStringInterface*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getLayerName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CSelectedGeometryStringInterface* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSelectedGeometryStringInterface*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_updateParams_ev_bool_CGeoEntity(void *pObjectXXXX, _in EarthView::World::Geometry3D::CGeoEntity* ref_geoent )
				{
					EarthView::World::Spatial3D::Atlas::CSelectedGeometryStringInterface* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSelectedGeometryStringInterface*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateParams(ref_geoent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_updateParams_ev_bool_IGlobeLayer_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Atlas::CSelectedGeometryStringInterface* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CSelectedGeometryStringInterface*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateParams(ref_layer, id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
				{
					CSelectedGeometryStringInterfaceProxy* ptr = dynamic_cast<CSelectedGeometryStringInterfaceProxy*>((EarthView::World::Spatial3D::Atlas::CSelectedGeometryStringInterface*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameter_ev_bool_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
				{
					CSelectedGeometryStringInterfaceProxy* ptr = dynamic_cast<CSelectedGeometryStringInterfaceProxy*>((EarthView::World::Spatial3D::Atlas::CSelectedGeometryStringInterface*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameterList_void_CommonStringPairList_Callback* pCallback )
				{
					CSelectedGeometryStringInterfaceProxy* ptr = dynamic_cast<CSelectedGeometryStringInterfaceProxy*>((EarthView::World::Spatial3D::Atlas::CSelectedGeometryStringInterface*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_setParameterList_void_CommonStringPairList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_getParameter_EVString_EVString_Callback* pCallback )
				{
					CSelectedGeometryStringInterfaceProxy* ptr = dynamic_cast<CSelectedGeometryStringInterfaceProxy*>((EarthView::World::Spatial3D::Atlas::CSelectedGeometryStringInterface*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_getParameter_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_copyParametersTo_void_CStringInterface_Callback* pCallback )
				{
					CSelectedGeometryStringInterfaceProxy* ptr = dynamic_cast<CSelectedGeometryStringInterfaceProxy*>((EarthView::World::Spatial3D::Atlas::CSelectedGeometryStringInterface*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CSelectedGeometryStringInterface_copyParametersTo_void_CStringInterface(pCallback);
					}
				}
			}
		}
	}
}
