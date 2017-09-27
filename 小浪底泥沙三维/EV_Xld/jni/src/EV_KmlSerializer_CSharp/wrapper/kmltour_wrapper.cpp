/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "kmlserializer/kmltour.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Kml
			{
				typedef int  ( _stdcall EarthView_World_Spatial_Kml_CTourUnit_getType_EVTourUnitType_Callback)();
				typedef EarthView::World::Spatial::Kml::CTourUnit*  ( _stdcall EarthView_World_Spatial_Kml_CTourUnit_clone_CTourUnit_Callback)();
				class CTourUnitProxy : public EarthView::World::Spatial::Kml::CTourUnit
				{
				private:
					EarthView_World_Spatial_Kml_CTourUnit_getType_EVTourUnitType_Callback* m_EarthView_World_Spatial_Kml_CTourUnit_getType_EVTourUnitType_Callback;
					EarthView_World_Spatial_Kml_CTourUnit_clone_CTourUnit_Callback* m_EarthView_World_Spatial_Kml_CTourUnit_clone_CTourUnit_Callback;
				public:
					CTourUnitProxy(EarthView::World::Core::CNameValuePairList *pList) : CTourUnit(pList)
					{
						m_EarthView_World_Spatial_Kml_CTourUnit_getType_EVTourUnitType_Callback = NULL;
						m_EarthView_World_Spatial_Kml_CTourUnit_clone_CTourUnit_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Kml_CTourUnit_getType_EVTourUnitType(EarthView_World_Spatial_Kml_CTourUnit_getType_EVTourUnitType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Kml_CTourUnit_getType_EVTourUnitType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Kml_CTourUnit_clone_CTourUnit(EarthView_World_Spatial_Kml_CTourUnit_clone_CTourUnit_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Kml_CTourUnit_clone_CTourUnit_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Kml::EVTourUnitType getType() const
					{
						if(m_EarthView_World_Spatial_Kml_CTourUnit_getType_EVTourUnitType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Kml::EVTourUnitType returnValue = (EarthView::World::Spatial::Kml::EVTourUnitType)m_EarthView_World_Spatial_Kml_CTourUnit_getType_EVTourUnitType_Callback();
							return returnValue;
						}
						else
							return this->CTourUnit::getType();
					}
					virtual EarthView::World::Spatial::Kml::CTourUnit* clone()
					{
						if(m_EarthView_World_Spatial_Kml_CTourUnit_clone_CTourUnit_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Kml::CTourUnit* returnValue = m_EarthView_World_Spatial_Kml_CTourUnit_clone_CTourUnit_Callback();
							return returnValue;
						}
						else
							return this->CTourUnit::clone();
					}
				};
				REGISTER_FACTORY_CLASS(CTourUnitProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial_Kml_CTourUnit_m_type( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CTourUnit* ptrNativeObject = (EarthView::World::Spatial::Kml::CTourUnit*) pObjectXXXX;
					EarthView::World::Spatial::Kml::EVTourUnitType objXXXX = ptrNativeObject->m_type;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CTourUnit_m_type( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial::Kml::CTourUnit*)pObjectXXXX)->m_type = (EarthView::World::Spatial::Kml::EVTourUnitType)value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Kml_CTourUnit_getType_EVTourUnitType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CTourUnit* ptrNativeObject = (EarthView::World::Spatial::Kml::CTourUnit*) pObjectXXXX;
					if (dynamic_cast<CTourUnitProxy*>((EarthView::World::Spatial::Kml::CTourUnit*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Kml::EVTourUnitType objXXXX = ptrNativeObject->EarthView::World::Spatial::Kml::CTourUnit::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Kml::EVTourUnitType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Kml_CTourUnit_getType_EVTourUnitType( void *pObjectXXXX, EarthView_World_Spatial_Kml_CTourUnit_getType_EVTourUnitType_Callback* pCallback )
				{
					CTourUnitProxy* ptr = dynamic_cast<CTourUnitProxy*>((EarthView::World::Spatial::Kml::CTourUnit*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Kml_CTourUnit_getType_EVTourUnitType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Kml_CTourUnit_getType_EVTourUnitType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CTourUnit* ptrNativeObject = (EarthView::World::Spatial::Kml::CTourUnit*) pObjectXXXX;
					EarthView::World::Spatial::Kml::EVTourUnitType objXXXX = ptrNativeObject->EarthView::World::Spatial::Kml::CTourUnit::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CTourUnit_setType_void_EVTourUnitType(void *pObjectXXXX, _in const int type_tour )
				{
					EarthView::World::Spatial::Kml::CTourUnit* ptrNativeObject = (EarthView::World::Spatial::Kml::CTourUnit*) pObjectXXXX;
					ptrNativeObject->setType((EarthView::World::Spatial::Kml::EVTourUnitType)type_tour);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CTourUnit*  _stdcall EarthView_World_Spatial_Kml_CTourUnit_clone_CTourUnit(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CTourUnit* ptrNativeObject = (EarthView::World::Spatial::Kml::CTourUnit*) pObjectXXXX;
					if (dynamic_cast<CTourUnitProxy*>((EarthView::World::Spatial::Kml::CTourUnit*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Kml::CTourUnit* objXXXX = ptrNativeObject->EarthView::World::Spatial::Kml::CTourUnit::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Kml::CTourUnit* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Kml_CTourUnit_clone_CTourUnit( void *pObjectXXXX, EarthView_World_Spatial_Kml_CTourUnit_clone_CTourUnit_Callback* pCallback )
				{
					CTourUnitProxy* ptr = dynamic_cast<CTourUnitProxy*>((EarthView::World::Spatial::Kml::CTourUnit*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Kml_CTourUnit_clone_CTourUnit(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CTourUnit*  _stdcall EarthView_World_Spatial_Kml_CTourUnit_clone_CTourUnit_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CTourUnit* ptrNativeObject = (EarthView::World::Spatial::Kml::CTourUnit*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CTourUnit* objXXXX = ptrNativeObject->EarthView::World::Spatial::Kml::CTourUnit::clone();
					return objXXXX;
				}
				typedef int  ( _stdcall EarthView_World_Spatial_Kml_CFlyTo_getType_EVTourUnitType_Callback)();
				typedef EarthView::World::Spatial::Kml::CTourUnit*  ( _stdcall EarthView_World_Spatial_Kml_CFlyTo_clone_CTourUnit_Callback)();
				class CFlyToProxy : public EarthView::World::Spatial::Kml::CFlyTo
				{
				private:
					EarthView_World_Spatial_Kml_CFlyTo_getType_EVTourUnitType_Callback* m_EarthView_World_Spatial_Kml_CFlyTo_getType_EVTourUnitType_Callback;
					EarthView_World_Spatial_Kml_CFlyTo_clone_CTourUnit_Callback* m_EarthView_World_Spatial_Kml_CFlyTo_clone_CTourUnit_Callback;
				public:
					CFlyToProxy(EarthView::World::Core::CNameValuePairList *pList) : CFlyTo(pList)
					{
						m_EarthView_World_Spatial_Kml_CFlyTo_getType_EVTourUnitType_Callback = NULL;
						m_EarthView_World_Spatial_Kml_CFlyTo_clone_CTourUnit_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Kml_CFlyTo_getType_EVTourUnitType(EarthView_World_Spatial_Kml_CFlyTo_getType_EVTourUnitType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Kml_CFlyTo_getType_EVTourUnitType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Kml_CFlyTo_clone_CTourUnit(EarthView_World_Spatial_Kml_CFlyTo_clone_CTourUnit_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Kml_CFlyTo_clone_CTourUnit_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Kml::CTourUnit* clone()
					{
						if(m_EarthView_World_Spatial_Kml_CFlyTo_clone_CTourUnit_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Kml::CTourUnit* returnValue = m_EarthView_World_Spatial_Kml_CFlyTo_clone_CTourUnit_Callback();
							return returnValue;
						}
						else
							return this->CFlyTo::clone();
					}
					virtual EarthView::World::Spatial::Kml::EVTourUnitType getType() const
					{
						if(m_EarthView_World_Spatial_Kml_CFlyTo_getType_EVTourUnitType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Kml::EVTourUnitType returnValue = (EarthView::World::Spatial::Kml::EVTourUnitType)m_EarthView_World_Spatial_Kml_CFlyTo_getType_EVTourUnitType_Callback();
							return returnValue;
						}
						else
							return this->CFlyTo::getType();
					}
				};
				REGISTER_FACTORY_CLASS(CFlyToProxy);
				extern "C" EV_DLL_EXPORT  double  _stdcall Get_EarthView_World_Spatial_Kml_CFlyTo_CameraStr_lon( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo::CameraStr*) pObjectXXXX;
					double objXXXX = ptrNativeObject->lon;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CFlyTo_CameraStr_lon( void *pObjectXXXX, double  value )
				{
					((EarthView::World::Spatial::Kml::CFlyTo::CameraStr*)pObjectXXXX)->lon = value;
				}
				extern "C" EV_DLL_EXPORT  double  _stdcall Get_EarthView_World_Spatial_Kml_CFlyTo_CameraStr_lat( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo::CameraStr*) pObjectXXXX;
					double objXXXX = ptrNativeObject->lat;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CFlyTo_CameraStr_lat( void *pObjectXXXX, double  value )
				{
					((EarthView::World::Spatial::Kml::CFlyTo::CameraStr*)pObjectXXXX)->lat = value;
				}
				extern "C" EV_DLL_EXPORT  double  _stdcall Get_EarthView_World_Spatial_Kml_CFlyTo_CameraStr_altitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo::CameraStr*) pObjectXXXX;
					double objXXXX = ptrNativeObject->altitude;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CFlyTo_CameraStr_altitude( void *pObjectXXXX, double  value )
				{
					((EarthView::World::Spatial::Kml::CFlyTo::CameraStr*)pObjectXXXX)->altitude = value;
				}
				extern "C" EV_DLL_EXPORT  double  _stdcall Get_EarthView_World_Spatial_Kml_CFlyTo_CameraStr_heading( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo::CameraStr*) pObjectXXXX;
					double objXXXX = ptrNativeObject->heading;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CFlyTo_CameraStr_heading( void *pObjectXXXX, double  value )
				{
					((EarthView::World::Spatial::Kml::CFlyTo::CameraStr*)pObjectXXXX)->heading = value;
				}
				extern "C" EV_DLL_EXPORT  double  _stdcall Get_EarthView_World_Spatial_Kml_CFlyTo_CameraStr_tilt( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo::CameraStr*) pObjectXXXX;
					double objXXXX = ptrNativeObject->tilt;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CFlyTo_CameraStr_tilt( void *pObjectXXXX, double  value )
				{
					((EarthView::World::Spatial::Kml::CFlyTo::CameraStr*)pObjectXXXX)->tilt = value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial_Kml_CFlyTo_CameraStr_altitidemode( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo::CameraStr*) pObjectXXXX;
					EarthView::World::Spatial::Utility::EVAltitudeMode objXXXX = ptrNativeObject->altitidemode;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CFlyTo_CameraStr_altitidemode( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial::Kml::CFlyTo::CameraStr*)pObjectXXXX)->altitidemode = (EarthView::World::Spatial::Utility::EVAltitudeMode)value;
				}
				extern "C" EV_DLL_EXPORT  double  _stdcall Get_EarthView_World_Spatial_Kml_CFlyTo_CameraStr_roll( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo::CameraStr*) pObjectXXXX;
					double objXXXX = ptrNativeObject->roll;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CFlyTo_CameraStr_roll( void *pObjectXXXX, double  value )
				{
					((EarthView::World::Spatial::Kml::CFlyTo::CameraStr*)pObjectXXXX)->roll = value;
				}
				extern "C" EV_DLL_EXPORT  double  _stdcall Get_EarthView_World_Spatial_Kml_CFlyTo_LookAtStr_lon( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*) pObjectXXXX;
					double objXXXX = ptrNativeObject->lon;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CFlyTo_LookAtStr_lon( void *pObjectXXXX, double  value )
				{
					((EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*)pObjectXXXX)->lon = value;
				}
				extern "C" EV_DLL_EXPORT  double  _stdcall Get_EarthView_World_Spatial_Kml_CFlyTo_LookAtStr_lat( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*) pObjectXXXX;
					double objXXXX = ptrNativeObject->lat;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CFlyTo_LookAtStr_lat( void *pObjectXXXX, double  value )
				{
					((EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*)pObjectXXXX)->lat = value;
				}
				extern "C" EV_DLL_EXPORT  double  _stdcall Get_EarthView_World_Spatial_Kml_CFlyTo_LookAtStr_altitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*) pObjectXXXX;
					double objXXXX = ptrNativeObject->altitude;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CFlyTo_LookAtStr_altitude( void *pObjectXXXX, double  value )
				{
					((EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*)pObjectXXXX)->altitude = value;
				}
				extern "C" EV_DLL_EXPORT  double  _stdcall Get_EarthView_World_Spatial_Kml_CFlyTo_LookAtStr_heading( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*) pObjectXXXX;
					double objXXXX = ptrNativeObject->heading;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CFlyTo_LookAtStr_heading( void *pObjectXXXX, double  value )
				{
					((EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*)pObjectXXXX)->heading = value;
				}
				extern "C" EV_DLL_EXPORT  double  _stdcall Get_EarthView_World_Spatial_Kml_CFlyTo_LookAtStr_tilt( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*) pObjectXXXX;
					double objXXXX = ptrNativeObject->tilt;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CFlyTo_LookAtStr_tilt( void *pObjectXXXX, double  value )
				{
					((EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*)pObjectXXXX)->tilt = value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial_Kml_CFlyTo_LookAtStr_altitidemode( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*) pObjectXXXX;
					EarthView::World::Spatial::Utility::EVAltitudeMode objXXXX = ptrNativeObject->altitidemode;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CFlyTo_LookAtStr_altitidemode( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*)pObjectXXXX)->altitidemode = (EarthView::World::Spatial::Utility::EVAltitudeMode)value;
				}
				extern "C" EV_DLL_EXPORT  double  _stdcall Get_EarthView_World_Spatial_Kml_CFlyTo_LookAtStr_range( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*) pObjectXXXX;
					double objXXXX = ptrNativeObject->range;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CFlyTo_LookAtStr_range( void *pObjectXXXX, double  value )
				{
					((EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*)pObjectXXXX)->range = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CFlyTo_getDuration_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CFlyTo* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getDuration();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CFlyTo_setDuration_void_double(void *pObjectXXXX, _in double durationF )
				{
					EarthView::World::Spatial::Kml::CFlyTo* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo*) pObjectXXXX;
					ptrNativeObject->setDuration(durationF);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Kml_CFlyTo_getFlyToMode_EVFlyToMode(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CFlyTo* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo*) pObjectXXXX;
					EarthView::World::Spatial::Kml::EVFlyToMode objXXXX = ptrNativeObject->getFlyToMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CFlyTo_setFlyToMode_void_EVFlyToMode(void *pObjectXXXX, _in int mode )
				{
					EarthView::World::Spatial::Kml::CFlyTo* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo*) pObjectXXXX;
					ptrNativeObject->setFlyToMode((EarthView::World::Spatial::Kml::EVFlyToMode)mode);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Kml_CFlyTo_getAbstractView_EVAbstractView(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CFlyTo* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo*) pObjectXXXX;
					EarthView::World::Spatial::Kml::EVAbstractView objXXXX = ptrNativeObject->getAbstractView();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CFlyTo_setAbstractView_void_EVAbstractView(void *pObjectXXXX, _in int abstra )
				{
					EarthView::World::Spatial::Kml::CFlyTo* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo*) pObjectXXXX;
					ptrNativeObject->setAbstractView((EarthView::World::Spatial::Kml::EVAbstractView)abstra);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CFlyTo_getCamera_CameraStr(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CFlyTo* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr& objXXXX = ptrNativeObject->getCamera();
					EarthView::World::Spatial::Kml::CFlyTo::CameraStr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CFlyTo_setCamera_void_CameraStr(void *pObjectXXXX, _in void* camera_tour )
				{
					EarthView::World::Spatial::Kml::CFlyTo* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo*) pObjectXXXX;
					ptrNativeObject->setCamera(*(EarthView::World::Spatial::Kml::CFlyTo::CameraStr*)camera_tour);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CFlyTo_getLookAt_LookAtStr(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CFlyTo* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr& objXXXX = ptrNativeObject->getLookAt();
					EarthView::World::Spatial::Kml::CFlyTo::LookAtStr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CFlyTo_setLookAt_void_LookAtStr(void *pObjectXXXX, _in void* lookat_tour )
				{
					EarthView::World::Spatial::Kml::CFlyTo* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo*) pObjectXXXX;
					ptrNativeObject->setLookAt(*(EarthView::World::Spatial::Kml::CFlyTo::LookAtStr*)lookat_tour);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CTourUnit*  _stdcall EarthView_World_Spatial_Kml_CFlyTo_clone_CTourUnit(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CFlyTo* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo*) pObjectXXXX;
					if (dynamic_cast<CFlyToProxy*>((EarthView::World::Spatial::Kml::CFlyTo*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Kml::CTourUnit* objXXXX = ptrNativeObject->EarthView::World::Spatial::Kml::CFlyTo::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Kml::CTourUnit* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Kml_CFlyTo_clone_CTourUnit( void *pObjectXXXX, EarthView_World_Spatial_Kml_CFlyTo_clone_CTourUnit_Callback* pCallback )
				{
					CFlyToProxy* ptr = dynamic_cast<CFlyToProxy*>((EarthView::World::Spatial::Kml::CFlyTo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Kml_CFlyTo_clone_CTourUnit(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CTourUnit*  _stdcall EarthView_World_Spatial_Kml_CFlyTo_clone_CTourUnit_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CFlyTo* ptrNativeObject = (EarthView::World::Spatial::Kml::CFlyTo*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CTourUnit* objXXXX = ptrNativeObject->EarthView::World::Spatial::Kml::CFlyTo::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Kml_CFlyTo_getType_EVTourUnitType( void *pObjectXXXX, EarthView_World_Spatial_Kml_CFlyTo_getType_EVTourUnitType_Callback* pCallback )
				{
					CFlyToProxy* ptr = dynamic_cast<CFlyToProxy*>((EarthView::World::Spatial::Kml::CFlyTo*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Kml_CFlyTo_getType_EVTourUnitType(pCallback);
					}
				}
				typedef int  ( _stdcall EarthView_World_Spatial_Kml_CWait_getType_EVTourUnitType_Callback)();
				typedef EarthView::World::Spatial::Kml::CTourUnit*  ( _stdcall EarthView_World_Spatial_Kml_CWait_clone_CTourUnit_Callback)();
				class CWaitProxy : public EarthView::World::Spatial::Kml::CWait
				{
				private:
					EarthView_World_Spatial_Kml_CWait_getType_EVTourUnitType_Callback* m_EarthView_World_Spatial_Kml_CWait_getType_EVTourUnitType_Callback;
					EarthView_World_Spatial_Kml_CWait_clone_CTourUnit_Callback* m_EarthView_World_Spatial_Kml_CWait_clone_CTourUnit_Callback;
				public:
					CWaitProxy(EarthView::World::Core::CNameValuePairList *pList) : CWait(pList)
					{
						m_EarthView_World_Spatial_Kml_CWait_getType_EVTourUnitType_Callback = NULL;
						m_EarthView_World_Spatial_Kml_CWait_clone_CTourUnit_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Kml_CWait_getType_EVTourUnitType(EarthView_World_Spatial_Kml_CWait_getType_EVTourUnitType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Kml_CWait_getType_EVTourUnitType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Kml_CWait_clone_CTourUnit(EarthView_World_Spatial_Kml_CWait_clone_CTourUnit_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Kml_CWait_clone_CTourUnit_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Kml::CTourUnit* clone()
					{
						if(m_EarthView_World_Spatial_Kml_CWait_clone_CTourUnit_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Kml::CTourUnit* returnValue = m_EarthView_World_Spatial_Kml_CWait_clone_CTourUnit_Callback();
							return returnValue;
						}
						else
							return this->CWait::clone();
					}
					virtual EarthView::World::Spatial::Kml::EVTourUnitType getType() const
					{
						if(m_EarthView_World_Spatial_Kml_CWait_getType_EVTourUnitType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Kml::EVTourUnitType returnValue = (EarthView::World::Spatial::Kml::EVTourUnitType)m_EarthView_World_Spatial_Kml_CWait_getType_EVTourUnitType_Callback();
							return returnValue;
						}
						else
							return this->CWait::getType();
					}
				};
				REGISTER_FACTORY_CLASS(CWaitProxy);
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Kml_CWait_getDuration_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CWait* ptrNativeObject = (EarthView::World::Spatial::Kml::CWait*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getDuration();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CWait_setDuration_void_ev_real64(void *pObjectXXXX, _in ev_real64 durationW )
				{
					EarthView::World::Spatial::Kml::CWait* ptrNativeObject = (EarthView::World::Spatial::Kml::CWait*) pObjectXXXX;
					ptrNativeObject->setDuration(durationW);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CTourUnit*  _stdcall EarthView_World_Spatial_Kml_CWait_clone_CTourUnit(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CWait* ptrNativeObject = (EarthView::World::Spatial::Kml::CWait*) pObjectXXXX;
					if (dynamic_cast<CWaitProxy*>((EarthView::World::Spatial::Kml::CWait*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Kml::CTourUnit* objXXXX = ptrNativeObject->EarthView::World::Spatial::Kml::CWait::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Kml::CTourUnit* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Kml_CWait_clone_CTourUnit( void *pObjectXXXX, EarthView_World_Spatial_Kml_CWait_clone_CTourUnit_Callback* pCallback )
				{
					CWaitProxy* ptr = dynamic_cast<CWaitProxy*>((EarthView::World::Spatial::Kml::CWait*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Kml_CWait_clone_CTourUnit(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CTourUnit*  _stdcall EarthView_World_Spatial_Kml_CWait_clone_CTourUnit_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CWait* ptrNativeObject = (EarthView::World::Spatial::Kml::CWait*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CTourUnit* objXXXX = ptrNativeObject->EarthView::World::Spatial::Kml::CWait::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Kml_CWait_getType_EVTourUnitType( void *pObjectXXXX, EarthView_World_Spatial_Kml_CWait_getType_EVTourUnitType_Callback* pCallback )
				{
					CWaitProxy* ptr = dynamic_cast<CWaitProxy*>((EarthView::World::Spatial::Kml::CWait*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Kml_CWait_getType_EVTourUnitType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CTourUnitVector_push_back_void_CTourUnit(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CTourUnit*& ref_t )
				{
					EarthView::World::Spatial::Kml::CTourUnitVector* ptrNativeObject = (EarthView::World::Spatial::Kml::CTourUnitVector*) pObjectXXXX;
					ptrNativeObject->push_back(ref_t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CTourUnitVector_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CTourUnitVector* ptrNativeObject = (EarthView::World::Spatial::Kml::CTourUnitVector*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CTourUnit*  _stdcall EarthView_World_Spatial_Kml_CTourUnitVector_front_CTourUnit(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CTourUnitVector* ptrNativeObject = (EarthView::World::Spatial::Kml::CTourUnitVector*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CTourUnit* objXXXX = ptrNativeObject->front();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CTourUnit*  _stdcall EarthView_World_Spatial_Kml_CTourUnitVector_back_CTourUnit(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CTourUnitVector* ptrNativeObject = (EarthView::World::Spatial::Kml::CTourUnitVector*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CTourUnit* objXXXX = ptrNativeObject->back();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CTourUnitVector_insert_void_ev_uint32_CTourUnit(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Spatial::Kml::CTourUnit*& ref_t )
				{
					EarthView::World::Spatial::Kml::CTourUnitVector* ptrNativeObject = (EarthView::World::Spatial::Kml::CTourUnitVector*) pObjectXXXX;
					ptrNativeObject->insert(pos, ref_t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CTourUnitVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial::Kml::CTourUnitVector* ptrNativeObject = (EarthView::World::Spatial::Kml::CTourUnitVector*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CTourUnitVector_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CTourUnitVector* ptrNativeObject = (EarthView::World::Spatial::Kml::CTourUnitVector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CTourUnit*  _stdcall EarthView_World_Spatial_Kml_CTourUnitVector_OperatorIndex_CTourUnit_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial::Kml::CTourUnitVector& objYYYY = *(EarthView::World::Spatial::Kml::CTourUnitVector*) pObjXXXX;
					EarthView::World::Spatial::Kml::CTourUnit* objXXXX = objYYYY[n];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CTourUnit*  _stdcall EarthView_World_Spatial_Kml_CTourUnitVector_at_CTourUnit_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial::Kml::CTourUnitVector* ptrNativeObject = (EarthView::World::Spatial::Kml::CTourUnitVector*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CTourUnit* objXXXX = ptrNativeObject->at(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_Kml_CTourUnitVector_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CTourUnitVector* ptrNativeObject = (EarthView::World::Spatial::Kml::CTourUnitVector*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CTourUnitVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial::Kml::CTourUnitVector* ptrNativeObject = (EarthView::World::Spatial::Kml::CTourUnitVector*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CTourUnitVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial::Kml::CTourUnitVector* ptrNativeObject = (EarthView::World::Spatial::Kml::CTourUnitVector*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CTourUnitVector_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CTourUnitVector* ptrNativeObject = (EarthView::World::Spatial::Kml::CTourUnitVector*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_Kml_CTour_mName( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CTour* ptrNativeObject = (EarthView::World::Spatial::Kml::CTour*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CTour_mName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::Kml::CTour*)pObjectXXXX)->mName = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_Kml_CTour_mId( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CTour* ptrNativeObject = (EarthView::World::Spatial::Kml::CTour*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mId;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Kml_CTour_mId( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::Kml::CTour*)pObjectXXXX)->mId = value1;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CTour_addTourUnit_void_CTourUnit(void *pObjectXXXX, _in const EarthView::World::Spatial::Kml::CTourUnit* ref_unit )
				{
					EarthView::World::Spatial::Kml::CTour* ptrNativeObject = (EarthView::World::Spatial::Kml::CTour*) pObjectXXXX;
					ptrNativeObject->addTourUnit(ref_unit);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CTour_removeTourUnit_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  index )
				{
					EarthView::World::Spatial::Kml::CTour* ptrNativeObject = (EarthView::World::Spatial::Kml::CTour*) pObjectXXXX;
					ptrNativeObject->removeTourUnit(index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CTour_clearTourUnit_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CTour* ptrNativeObject = (EarthView::World::Spatial::Kml::CTour*) pObjectXXXX;
					ptrNativeObject->clearTourUnit();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CTourUnit*  _stdcall EarthView_World_Spatial_Kml_CTour_getTourUnit_CTourUnit_ev_size_t(void *pObjectXXXX, _in ev_uint64  index )
				{
					EarthView::World::Spatial::Kml::CTour* ptrNativeObject = (EarthView::World::Spatial::Kml::CTour*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CTourUnit* objXXXX = ptrNativeObject->getTourUnit(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Kml_CTour_getTourUnitNum_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Kml::CTour* ptrNativeObject = (EarthView::World::Spatial::Kml::CTour*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getTourUnitNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CTour_isVisiable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CTour* ptrNativeObject = (EarthView::World::Spatial::Kml::CTour*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isVisiable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CTour_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visiable )
				{
					EarthView::World::Spatial::Kml::CTour* ptrNativeObject = (EarthView::World::Spatial::Kml::CTour*) pObjectXXXX;
					ptrNativeObject->setVisible(visiable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Kml_CTour_isOpen_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CTour* ptrNativeObject = (EarthView::World::Spatial::Kml::CTour*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isOpen();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CTour_setOpened_void_ev_bool(void *pObjectXXXX, _in ev_bool opened )
				{
					EarthView::World::Spatial::Kml::CTour* ptrNativeObject = (EarthView::World::Spatial::Kml::CTour*) pObjectXXXX;
					ptrNativeObject->setOpened(opened);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Kml_CTour_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CTour* ptrNativeObject = (EarthView::World::Spatial::Kml::CTour*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Kml_CTour_setDescription_void_EVString(void *pObjectXXXX, _in const char* descripton )
				{
					EarthView::World::Core::ev_string descripton1 = descripton;
					EarthView::World::Spatial::Kml::CTour* ptrNativeObject = (EarthView::World::Spatial::Kml::CTour*) pObjectXXXX;
					ptrNativeObject->setDescription(descripton1);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Kml_CTour_getTourUnits_CTourUnitVector(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Kml::CTour* ptrNativeObject = (EarthView::World::Spatial::Kml::CTour*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CTourUnitVector objXXXX = ptrNativeObject->getTourUnits();
					EarthView::World::Spatial::Kml::CTourUnitVector *pXXXX = new EarthView::World::Spatial::Kml::CTourUnitVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
