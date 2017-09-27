/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/viewargs.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
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
			typedef int  ( _stdcall EarthView_World_Spatial_IViewArgs_getType_ViewArgsType_Callback)();
			class IViewArgsProxy : public EarthView::World::Spatial::IViewArgs
			{
			private:
				EarthView_World_Spatial_IViewArgs_getType_ViewArgsType_Callback* m_EarthView_World_Spatial_IViewArgs_getType_ViewArgsType_Callback;
			public:
				IViewArgsProxy(EarthView::World::Core::CNameValuePairList *pList) : IViewArgs(pList)
				{
					m_EarthView_World_Spatial_IViewArgs_getType_ViewArgsType_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_IViewArgs_getType_ViewArgsType(EarthView_World_Spatial_IViewArgs_getType_ViewArgsType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_IViewArgs_getType_ViewArgsType_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::IViewArgs::ViewArgsType getType() const
				{
					if(m_EarthView_World_Spatial_IViewArgs_getType_ViewArgsType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::IViewArgs::ViewArgsType returnValue = (EarthView::World::Spatial::IViewArgs::ViewArgsType)m_EarthView_World_Spatial_IViewArgs_getType_ViewArgsType_Callback();
						return returnValue;
					}
					else
						return this->IViewArgs::getType();
				}
			};
			REGISTER_FACTORY_CLASS(IViewArgsProxy);
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_IViewArgs_getType_ViewArgsType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::IViewArgs* ptrNativeObject = (EarthView::World::Spatial::IViewArgs*) pObjectXXXX;
				if (dynamic_cast<IViewArgsProxy*>((EarthView::World::Spatial::IViewArgs*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::IViewArgs::ViewArgsType objXXXX = ptrNativeObject->EarthView::World::Spatial::IViewArgs::getType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::IViewArgs::ViewArgsType objXXXX = ptrNativeObject->getType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_IViewArgs_getType_ViewArgsType( void *pObjectXXXX, EarthView_World_Spatial_IViewArgs_getType_ViewArgsType_Callback* pCallback )
			{
				IViewArgsProxy* ptr = dynamic_cast<IViewArgsProxy*>((EarthView::World::Spatial::IViewArgs*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_IViewArgs_getType_ViewArgsType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_IViewArgs_getType_ViewArgsType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::IViewArgs* ptrNativeObject = (EarthView::World::Spatial::IViewArgs*) pObjectXXXX;
				EarthView::World::Spatial::IViewArgs::ViewArgsType objXXXX = ptrNativeObject->EarthView::World::Spatial::IViewArgs::getType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ISpatialControl*  _stdcall Get_EarthView_World_Spatial_IViewArgs_control( void *pObjectXXXX )
			{
				EarthView::World::Spatial::IViewArgs* ptrNativeObject = (EarthView::World::Spatial::IViewArgs*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ISpatialControl* objXXXX = ptrNativeObject->control;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_IViewArgs_control( void *pObjectXXXX, EarthView::World::Spatial::Atlas::ISpatialControl*  value )
			{
				((EarthView::World::Spatial::IViewArgs*)pObjectXXXX)->control = value;
			}
			typedef int  ( _stdcall EarthView_World_Spatial_CMapViewArgs_getType_ViewArgsType_Callback)();
			class CMapViewArgsProxy : public EarthView::World::Spatial::CMapViewArgs
			{
			private:
				EarthView_World_Spatial_CMapViewArgs_getType_ViewArgsType_Callback* m_EarthView_World_Spatial_CMapViewArgs_getType_ViewArgsType_Callback;
			public:
				CMapViewArgsProxy(EarthView::World::Core::CNameValuePairList *pList) : CMapViewArgs(pList)
				{
					m_EarthView_World_Spatial_CMapViewArgs_getType_ViewArgsType_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CMapViewArgs_getType_ViewArgsType(EarthView_World_Spatial_CMapViewArgs_getType_ViewArgsType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CMapViewArgs_getType_ViewArgsType_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::IViewArgs::ViewArgsType getType() const
				{
					if(m_EarthView_World_Spatial_CMapViewArgs_getType_ViewArgsType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::IViewArgs::ViewArgsType returnValue = (EarthView::World::Spatial::IViewArgs::ViewArgsType)m_EarthView_World_Spatial_CMapViewArgs_getType_ViewArgsType_Callback();
						return returnValue;
					}
					else
						return this->CMapViewArgs::getType();
				}
			};
			REGISTER_FACTORY_CLASS(CMapViewArgsProxy);
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CMapViewArgs_getType_ViewArgsType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CMapViewArgs* ptrNativeObject = (EarthView::World::Spatial::CMapViewArgs*) pObjectXXXX;
				if (dynamic_cast<CMapViewArgsProxy*>((EarthView::World::Spatial::CMapViewArgs*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::IViewArgs::ViewArgsType objXXXX = ptrNativeObject->EarthView::World::Spatial::CMapViewArgs::getType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::IViewArgs::ViewArgsType objXXXX = ptrNativeObject->getType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CMapViewArgs_getType_ViewArgsType( void *pObjectXXXX, EarthView_World_Spatial_CMapViewArgs_getType_ViewArgsType_Callback* pCallback )
			{
				CMapViewArgsProxy* ptr = dynamic_cast<CMapViewArgsProxy*>((EarthView::World::Spatial::CMapViewArgs*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CMapViewArgs_getType_ViewArgsType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CMapViewArgs_getType_ViewArgsType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CMapViewArgs* ptrNativeObject = (EarthView::World::Spatial::CMapViewArgs*) pObjectXXXX;
				EarthView::World::Spatial::IViewArgs::ViewArgsType objXXXX = ptrNativeObject->EarthView::World::Spatial::CMapViewArgs::getType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_CMapViewArgs_centerX( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CMapViewArgs* ptrNativeObject = (EarthView::World::Spatial::CMapViewArgs*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->centerX;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CMapViewArgs_centerX( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial::CMapViewArgs*)pObjectXXXX)->centerX = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_CMapViewArgs_centerY( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CMapViewArgs* ptrNativeObject = (EarthView::World::Spatial::CMapViewArgs*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->centerY;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CMapViewArgs_centerY( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial::CMapViewArgs*)pObjectXXXX)->centerY = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_CMapViewArgs_heading( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CMapViewArgs* ptrNativeObject = (EarthView::World::Spatial::CMapViewArgs*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->heading;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CMapViewArgs_heading( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial::CMapViewArgs*)pObjectXXXX)->heading = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_CMapViewArgs_scale( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CMapViewArgs* ptrNativeObject = (EarthView::World::Spatial::CMapViewArgs*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->scale;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CMapViewArgs_scale( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial::CMapViewArgs*)pObjectXXXX)->scale = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_CMapViewArgs_minLat( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CMapViewArgs* ptrNativeObject = (EarthView::World::Spatial::CMapViewArgs*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->minLat;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CMapViewArgs_minLat( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial::CMapViewArgs*)pObjectXXXX)->minLat = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_CMapViewArgs_minLon( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CMapViewArgs* ptrNativeObject = (EarthView::World::Spatial::CMapViewArgs*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->minLon;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CMapViewArgs_minLon( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial::CMapViewArgs*)pObjectXXXX)->minLon = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_CMapViewArgs_maxLat( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CMapViewArgs* ptrNativeObject = (EarthView::World::Spatial::CMapViewArgs*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->maxLat;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CMapViewArgs_maxLat( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial::CMapViewArgs*)pObjectXXXX)->maxLat = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_CMapViewArgs_maxLon( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CMapViewArgs* ptrNativeObject = (EarthView::World::Spatial::CMapViewArgs*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->maxLon;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CMapViewArgs_maxLon( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial::CMapViewArgs*)pObjectXXXX)->maxLon = value;
			}
			typedef int  ( _stdcall EarthView_World_Spatial_CSceneViewArgs_getType_ViewArgsType_Callback)();
			class CSceneViewArgsProxy : public EarthView::World::Spatial::CSceneViewArgs
			{
			private:
				EarthView_World_Spatial_CSceneViewArgs_getType_ViewArgsType_Callback* m_EarthView_World_Spatial_CSceneViewArgs_getType_ViewArgsType_Callback;
			public:
				CSceneViewArgsProxy(EarthView::World::Core::CNameValuePairList *pList) : CSceneViewArgs(pList)
				{
					m_EarthView_World_Spatial_CSceneViewArgs_getType_ViewArgsType_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CSceneViewArgs_getType_ViewArgsType(EarthView_World_Spatial_CSceneViewArgs_getType_ViewArgsType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CSceneViewArgs_getType_ViewArgsType_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::IViewArgs::ViewArgsType getType() const
				{
					if(m_EarthView_World_Spatial_CSceneViewArgs_getType_ViewArgsType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::IViewArgs::ViewArgsType returnValue = (EarthView::World::Spatial::IViewArgs::ViewArgsType)m_EarthView_World_Spatial_CSceneViewArgs_getType_ViewArgsType_Callback();
						return returnValue;
					}
					else
						return this->CSceneViewArgs::getType();
				}
			};
			REGISTER_FACTORY_CLASS(CSceneViewArgsProxy);
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CSceneViewArgs_getType_ViewArgsType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CSceneViewArgs* ptrNativeObject = (EarthView::World::Spatial::CSceneViewArgs*) pObjectXXXX;
				if (dynamic_cast<CSceneViewArgsProxy*>((EarthView::World::Spatial::CSceneViewArgs*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::IViewArgs::ViewArgsType objXXXX = ptrNativeObject->EarthView::World::Spatial::CSceneViewArgs::getType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::IViewArgs::ViewArgsType objXXXX = ptrNativeObject->getType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CSceneViewArgs_getType_ViewArgsType( void *pObjectXXXX, EarthView_World_Spatial_CSceneViewArgs_getType_ViewArgsType_Callback* pCallback )
			{
				CSceneViewArgsProxy* ptr = dynamic_cast<CSceneViewArgsProxy*>((EarthView::World::Spatial::CSceneViewArgs*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CSceneViewArgs_getType_ViewArgsType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CSceneViewArgs_getType_ViewArgsType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CSceneViewArgs* ptrNativeObject = (EarthView::World::Spatial::CSceneViewArgs*) pObjectXXXX;
				EarthView::World::Spatial::IViewArgs::ViewArgsType objXXXX = ptrNativeObject->EarthView::World::Spatial::CSceneViewArgs::getType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CBaseObject*  _stdcall Get_EarthView_World_Spatial_CSceneViewArgs_camera( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CSceneViewArgs* ptrNativeObject = (EarthView::World::Spatial::CSceneViewArgs*) pObjectXXXX;
				EarthView::World::Core::CBaseObject* objXXXX = ptrNativeObject->camera;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CSceneViewArgs_camera( void *pObjectXXXX, EarthView::World::Core::CBaseObject*  value )
			{
				((EarthView::World::Spatial::CSceneViewArgs*)pObjectXXXX)->camera = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_CSceneViewArgs_altitude( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CSceneViewArgs* ptrNativeObject = (EarthView::World::Spatial::CSceneViewArgs*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->altitude;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CSceneViewArgs_altitude( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial::CSceneViewArgs*)pObjectXXXX)->altitude = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_CSceneViewArgs_longtitude( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CSceneViewArgs* ptrNativeObject = (EarthView::World::Spatial::CSceneViewArgs*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->longtitude;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CSceneViewArgs_longtitude( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial::CSceneViewArgs*)pObjectXXXX)->longtitude = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_CSceneViewArgs_latitude( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CSceneViewArgs* ptrNativeObject = (EarthView::World::Spatial::CSceneViewArgs*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->latitude;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CSceneViewArgs_latitude( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial::CSceneViewArgs*)pObjectXXXX)->latitude = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_CSceneViewArgs_heading( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CSceneViewArgs* ptrNativeObject = (EarthView::World::Spatial::CSceneViewArgs*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->heading;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CSceneViewArgs_heading( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial::CSceneViewArgs*)pObjectXXXX)->heading = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_CSceneViewArgs_tilt( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CSceneViewArgs* ptrNativeObject = (EarthView::World::Spatial::CSceneViewArgs*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->tilt;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CSceneViewArgs_tilt( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial::CSceneViewArgs*)pObjectXXXX)->tilt = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_CSceneViewArgs_moditifAltitude( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CSceneViewArgs* ptrNativeObject = (EarthView::World::Spatial::CSceneViewArgs*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->moditifAltitude;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CSceneViewArgs_moditifAltitude( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial::CSceneViewArgs*)pObjectXXXX)->moditifAltitude = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_CSceneViewArgs_operationOver( void *pObjectXXXX )
			{
				EarthView::World::Spatial::CSceneViewArgs* ptrNativeObject = (EarthView::World::Spatial::CSceneViewArgs*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->operationOver;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_CSceneViewArgs_operationOver( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial::CSceneViewArgs*)pObjectXXXX)->operationOver = value;
			}
		}
	}
}
