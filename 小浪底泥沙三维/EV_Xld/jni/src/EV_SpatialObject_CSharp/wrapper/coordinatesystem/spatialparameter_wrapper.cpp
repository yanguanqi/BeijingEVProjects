/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/coordinatesystem/spatialparameter.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Utility
			{
				typedef const ev_real64  ( _stdcall EarthView_World_Spatial_Utility_CEllipseSpheriod_getSamiMajor_ev_real64_Callback)();
				typedef const ev_real64  ( _stdcall EarthView_World_Spatial_Utility_CEllipseSpheriod_getInvFlattening_ev_real64_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Utility_CEllipseSpheriod_getSphereName_EVString_Callback)();
				typedef const int  ( _stdcall EarthView_World_Spatial_Utility_CEllipseSpheriod_getDatumType_EVDatumType_Callback)();
				typedef const ev_real64  ( _stdcall EarthView_World_Spatial_Utility_CEllipseSpheriod_getFromGreenWicth_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Utility_CEllipseSpheriod_getAngularUnits_void_EVString_ev_real64_Callback)(_out char*& pszname, _out ev_real64& dfunitsValue);
				class CEllipseSpheriodProxy : public EarthView::World::Spatial::Utility::CEllipseSpheriod
				{
				private:
					EarthView_World_Spatial_Utility_CEllipseSpheriod_getSamiMajor_ev_real64_Callback* m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getSamiMajor_ev_real64_Callback;
					EarthView_World_Spatial_Utility_CEllipseSpheriod_getInvFlattening_ev_real64_Callback* m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getInvFlattening_ev_real64_Callback;
					EarthView_World_Spatial_Utility_CEllipseSpheriod_getSphereName_EVString_Callback* m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getSphereName_EVString_Callback;
					EarthView_World_Spatial_Utility_CEllipseSpheriod_getDatumType_EVDatumType_Callback* m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getDatumType_EVDatumType_Callback;
					EarthView_World_Spatial_Utility_CEllipseSpheriod_getFromGreenWicth_ev_real64_Callback* m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getFromGreenWicth_ev_real64_Callback;
					EarthView_World_Spatial_Utility_CEllipseSpheriod_getAngularUnits_void_EVString_ev_real64_Callback* m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getAngularUnits_void_EVString_ev_real64_Callback;
				public:
					CEllipseSpheriodProxy(EarthView::World::Core::CNameValuePairList *pList) : CEllipseSpheriod(pList)
					{
						m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getSamiMajor_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getInvFlattening_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getSphereName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getDatumType_EVDatumType_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getFromGreenWicth_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getAngularUnits_void_EVString_ev_real64_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Utility_CEllipseSpheriod_getSamiMajor_ev_real64(EarthView_World_Spatial_Utility_CEllipseSpheriod_getSamiMajor_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getSamiMajor_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CEllipseSpheriod_getInvFlattening_ev_real64(EarthView_World_Spatial_Utility_CEllipseSpheriod_getInvFlattening_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getInvFlattening_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CEllipseSpheriod_getSphereName_EVString(EarthView_World_Spatial_Utility_CEllipseSpheriod_getSphereName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getSphereName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CEllipseSpheriod_getDatumType_EVDatumType(EarthView_World_Spatial_Utility_CEllipseSpheriod_getDatumType_EVDatumType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getDatumType_EVDatumType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CEllipseSpheriod_getFromGreenWicth_ev_real64(EarthView_World_Spatial_Utility_CEllipseSpheriod_getFromGreenWicth_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getFromGreenWicth_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CEllipseSpheriod_getAngularUnits_void_EVString_ev_real64(EarthView_World_Spatial_Utility_CEllipseSpheriod_getAngularUnits_void_EVString_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getAngularUnits_void_EVString_ev_real64_Callback = pCallback;
					}
					virtual const ev_real64 getSamiMajor() const
					{
						if(m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getSamiMajor_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							const ev_real64 returnValue = m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getSamiMajor_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEllipseSpheriod::getSamiMajor();
					}
					virtual const ev_real64 getInvFlattening() const
					{
						if(m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getInvFlattening_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							const ev_real64 returnValue = m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getInvFlattening_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEllipseSpheriod::getInvFlattening();
					}
					virtual EVString getSphereName() const
					{
						if(m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getSphereName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getSphereName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEllipseSpheriod::getSphereName();
					}
					virtual const EarthView::World::Spatial::Utility::EVDatumType getDatumType() const
					{
						if(m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getDatumType_EVDatumType_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Utility::EVDatumType returnValue = (EarthView::World::Spatial::Utility::EVDatumType)m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getDatumType_EVDatumType_Callback();
							return returnValue;
						}
						else
							return this->CEllipseSpheriod::getDatumType();
					}
					virtual const ev_real64 getFromGreenWicth() const
					{
						if(m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getFromGreenWicth_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							const ev_real64 returnValue = m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getFromGreenWicth_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CEllipseSpheriod::getFromGreenWicth();
					}
					virtual void getAngularUnits(_out EVString& pszname, _out ev_real64& dfunitsValue) const
					{
						if(m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getAngularUnits_void_EVString_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							char* pszname_Char = pszname.makeBuffer();
							m_EarthView_World_Spatial_Utility_CEllipseSpheriod_getAngularUnits_void_EVString_ev_real64_Callback(pszname_Char, dfunitsValue);
							pszname = pszname_Char;
							if(pszname_Char != NULL){ delete[] pszname_Char;pszname_Char = NULL;}
						}
						else
							return this->CEllipseSpheriod::getAngularUnits(pszname, dfunitsValue);
					}
				};
				REGISTER_FACTORY_CLASS(CEllipseSpheriodProxy);
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Utility_CEllipseSpheriod_OperatorAssign_CEllipseSpheriod_CEllipseSpheriod(void *pObjXXXX, _in const void* objEllipse )
				{
					EarthView::World::Spatial::Utility::CEllipseSpheriod& objXXXX = *((EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::Utility::CEllipseSpheriod*)objEllipse;
					EarthView::World::Spatial::Utility::CEllipseSpheriod *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Utility_CEllipseSpheriod_getSamiMajor_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CEllipseSpheriod* ptrNativeObject = (EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjectXXXX;
					if (dynamic_cast<CEllipseSpheriodProxy*>((EarthView::World::Spatial::Utility::CEllipseSpheriod*)ptrNativeObject) != NULL)
					{
						const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CEllipseSpheriod::getSamiMajor();
						return objXXXX;
					}
					else
					{
						const ev_real64 objXXXX = ptrNativeObject->getSamiMajor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CEllipseSpheriod_getSamiMajor_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Utility_CEllipseSpheriod_getSamiMajor_ev_real64_Callback* pCallback )
				{
					CEllipseSpheriodProxy* ptr = dynamic_cast<CEllipseSpheriodProxy*>((EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CEllipseSpheriod_getSamiMajor_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Utility_CEllipseSpheriod_getSamiMajor_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CEllipseSpheriod* ptrNativeObject = (EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CEllipseSpheriod::getSamiMajor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Utility_CEllipseSpheriod_getInvFlattening_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CEllipseSpheriod* ptrNativeObject = (EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjectXXXX;
					if (dynamic_cast<CEllipseSpheriodProxy*>((EarthView::World::Spatial::Utility::CEllipseSpheriod*)ptrNativeObject) != NULL)
					{
						const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CEllipseSpheriod::getInvFlattening();
						return objXXXX;
					}
					else
					{
						const ev_real64 objXXXX = ptrNativeObject->getInvFlattening();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CEllipseSpheriod_getInvFlattening_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Utility_CEllipseSpheriod_getInvFlattening_ev_real64_Callback* pCallback )
				{
					CEllipseSpheriodProxy* ptr = dynamic_cast<CEllipseSpheriodProxy*>((EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CEllipseSpheriod_getInvFlattening_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Utility_CEllipseSpheriod_getInvFlattening_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CEllipseSpheriod* ptrNativeObject = (EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CEllipseSpheriod::getInvFlattening();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Utility_CEllipseSpheriod_getSphereName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CEllipseSpheriod* ptrNativeObject = (EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjectXXXX;
					if (dynamic_cast<CEllipseSpheriodProxy*>((EarthView::World::Spatial::Utility::CEllipseSpheriod*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CEllipseSpheriod::getSphereName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getSphereName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CEllipseSpheriod_getSphereName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Utility_CEllipseSpheriod_getSphereName_EVString_Callback* pCallback )
				{
					CEllipseSpheriodProxy* ptr = dynamic_cast<CEllipseSpheriodProxy*>((EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CEllipseSpheriod_getSphereName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Utility_CEllipseSpheriod_getSphereName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CEllipseSpheriod* ptrNativeObject = (EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CEllipseSpheriod::getSphereName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const int  _stdcall EarthView_World_Spatial_Utility_CEllipseSpheriod_getDatumType_EVDatumType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CEllipseSpheriod* ptrNativeObject = (EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjectXXXX;
					if (dynamic_cast<CEllipseSpheriodProxy*>((EarthView::World::Spatial::Utility::CEllipseSpheriod*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Utility::EVDatumType objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CEllipseSpheriod::getDatumType();
						return (int)objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Utility::EVDatumType objXXXX = ptrNativeObject->getDatumType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CEllipseSpheriod_getDatumType_EVDatumType( void *pObjectXXXX, EarthView_World_Spatial_Utility_CEllipseSpheriod_getDatumType_EVDatumType_Callback* pCallback )
				{
					CEllipseSpheriodProxy* ptr = dynamic_cast<CEllipseSpheriodProxy*>((EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CEllipseSpheriod_getDatumType_EVDatumType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const int  _stdcall EarthView_World_Spatial_Utility_CEllipseSpheriod_getDatumType_EVDatumType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CEllipseSpheriod* ptrNativeObject = (EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjectXXXX;
					const EarthView::World::Spatial::Utility::EVDatumType objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CEllipseSpheriod::getDatumType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Utility_CEllipseSpheriod_getFromGreenWicth_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CEllipseSpheriod* ptrNativeObject = (EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjectXXXX;
					if (dynamic_cast<CEllipseSpheriodProxy*>((EarthView::World::Spatial::Utility::CEllipseSpheriod*)ptrNativeObject) != NULL)
					{
						const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CEllipseSpheriod::getFromGreenWicth();
						return objXXXX;
					}
					else
					{
						const ev_real64 objXXXX = ptrNativeObject->getFromGreenWicth();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CEllipseSpheriod_getFromGreenWicth_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Utility_CEllipseSpheriod_getFromGreenWicth_ev_real64_Callback* pCallback )
				{
					CEllipseSpheriodProxy* ptr = dynamic_cast<CEllipseSpheriodProxy*>((EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CEllipseSpheriod_getFromGreenWicth_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Utility_CEllipseSpheriod_getFromGreenWicth_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CEllipseSpheriod* ptrNativeObject = (EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CEllipseSpheriod::getFromGreenWicth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CEllipseSpheriod_getAngularUnits_void_EVString_ev_real64(void *pObjectXXXX, _out char*& pszname, _out ev_real64& dfunitsValue )
				{
					EarthView::World::Core::ev_string pszname1 = pszname;
					const EarthView::World::Spatial::Utility::CEllipseSpheriod* ptrNativeObject = (EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjectXXXX;
					if (dynamic_cast<CEllipseSpheriodProxy*>((EarthView::World::Spatial::Utility::CEllipseSpheriod*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Utility::CEllipseSpheriod::getAngularUnits(pszname1, dfunitsValue);
					else
						ptrNativeObject->getAngularUnits(pszname1, dfunitsValue);
					pszname=pszname1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CEllipseSpheriod_getAngularUnits_void_EVString_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Utility_CEllipseSpheriod_getAngularUnits_void_EVString_ev_real64_Callback* pCallback )
				{
					CEllipseSpheriodProxy* ptr = dynamic_cast<CEllipseSpheriodProxy*>((EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CEllipseSpheriod_getAngularUnits_void_EVString_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CEllipseSpheriod_getAngularUnits_void_EVString_ev_real64_NoVirtual(void *pObjectXXXX, _out char*& pszname, _out ev_real64& dfunitsValue )
				{
					EarthView::World::Core::ev_string pszname1 = pszname;
					const EarthView::World::Spatial::Utility::CEllipseSpheriod* ptrNativeObject = (EarthView::World::Spatial::Utility::CEllipseSpheriod*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Utility::CEllipseSpheriod::getAngularUnits(pszname1, dfunitsValue);
					pszname=pszname1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjParameter_setCenterLong_void_ev_real64(void *pObjectXXXX, _in ev_real64 dfCenterLong )
				{
					EarthView::World::Spatial::Utility::CProjParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjParameter*) pObjectXXXX;
					ptrNativeObject->setCenterLong(dfCenterLong);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjParameter_setOriginLatitude_void_ev_real64(void *pObjectXXXX, _in ev_real64 dfCenterLat )
				{
					EarthView::World::Spatial::Utility::CProjParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjParameter*) pObjectXXXX;
					ptrNativeObject->setOriginLatitude(dfCenterLat);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjParameter_setSacleFactor_void_ev_real64(void *pObjectXXXX, _in ev_real64 dfsacleFactor )
				{
					EarthView::World::Spatial::Utility::CProjParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjParameter*) pObjectXXXX;
					ptrNativeObject->setSacleFactor(dfsacleFactor);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjParameter_setStandarPrallel_1_void_ev_real64(void *pObjectXXXX, _in ev_real64 dfstandParallel )
				{
					EarthView::World::Spatial::Utility::CProjParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjParameter*) pObjectXXXX;
					ptrNativeObject->setStandarPrallel_1(dfstandParallel);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjParameter_setStandarPrallel_2_void_ev_real64(void *pObjectXXXX, _in ev_real64 dfstandParallel )
				{
					EarthView::World::Spatial::Utility::CProjParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjParameter*) pObjectXXXX;
					ptrNativeObject->setStandarPrallel_2(dfstandParallel);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjParameter_setFalseEasting_void_ev_real64(void *pObjectXXXX, _in ev_real64 dfEasting )
				{
					EarthView::World::Spatial::Utility::CProjParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjParameter*) pObjectXXXX;
					ptrNativeObject->setFalseEasting(dfEasting);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjParameter_setFalseNorthing_void_ev_real64(void *pObjectXXXX, _in ev_real64 dfNothing )
				{
					EarthView::World::Spatial::Utility::CProjParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjParameter*) pObjectXXXX;
					ptrNativeObject->setFalseNorthing(dfNothing);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjParameter_setNorthing_void_ev_bool(void *pObjectXXXX, _in ev_bool bnorth )
				{
					EarthView::World::Spatial::Utility::CProjParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjParameter*) pObjectXXXX;
					ptrNativeObject->setNorthing(bnorth);
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Utility_CProjParameter_getCenterLong_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjParameter*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->getCenterLong();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Utility_CProjParameter_getOriginLatitude_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjParameter*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->getOriginLatitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Utility_CProjParameter_getSacleFactor_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjParameter*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->getSacleFactor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Utility_CProjParameter_getStandarPrallel_1_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjParameter*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->getStandarPrallel_1();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Utility_CProjParameter_getStandarPrallel_2_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjParameter*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->getStandarPrallel_2();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Utility_CProjParameter_getFalseEasting_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjParameter*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->getFalseEasting();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Utility_CProjParameter_getFalseNorthing_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjParameter*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->getFalseNorthing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjParameter_isNorthing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjParameter*) pObjectXXXX;
					const ev_bool objXXXX = ptrNativeObject->isNorthing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const int  _stdcall EarthView_World_Spatial_Utility_CProjParameter_getProjectionType_EVProjectionType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjParameter*) pObjectXXXX;
					const EarthView::World::Spatial::Utility::EVProjectionType objXXXX = ptrNativeObject->getProjectionType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CTransParameter_setTransX_void_ev_real64(void *pObjectXXXX, _in ev_real64 dfX )
				{
					EarthView::World::Spatial::Utility::CTransParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CTransParameter*) pObjectXXXX;
					ptrNativeObject->setTransX(dfX);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CTransParameter_setTransY_void_ev_real64(void *pObjectXXXX, _in ev_real64 dfY )
				{
					EarthView::World::Spatial::Utility::CTransParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CTransParameter*) pObjectXXXX;
					ptrNativeObject->setTransY(dfY);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CTransParameter_setTransZ_void_ev_real64(void *pObjectXXXX, _in ev_real64 dfZ )
				{
					EarthView::World::Spatial::Utility::CTransParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CTransParameter*) pObjectXXXX;
					ptrNativeObject->setTransZ(dfZ);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CTransParameter_setRotateX_void_ev_real64(void *pObjectXXXX, _in ev_real64 dfRX )
				{
					EarthView::World::Spatial::Utility::CTransParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CTransParameter*) pObjectXXXX;
					ptrNativeObject->setRotateX(dfRX);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CTransParameter_setRotateY_void_ev_real64(void *pObjectXXXX, _in ev_real64 dfRY )
				{
					EarthView::World::Spatial::Utility::CTransParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CTransParameter*) pObjectXXXX;
					ptrNativeObject->setRotateY(dfRY);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CTransParameter_setRotateZ_void_ev_real64(void *pObjectXXXX, _in ev_real64 dfRZ )
				{
					EarthView::World::Spatial::Utility::CTransParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CTransParameter*) pObjectXXXX;
					ptrNativeObject->setRotateZ(dfRZ);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CTransParameter_setSaclePPM_void_ev_real64(void *pObjectXXXX, _in ev_real64 dfPPM )
				{
					EarthView::World::Spatial::Utility::CTransParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CTransParameter*) pObjectXXXX;
					ptrNativeObject->setSaclePPM(dfPPM);
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Utility_CTransParameter_getTransX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CTransParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CTransParameter*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->getTransX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Utility_CTransParameter_getTransY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CTransParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CTransParameter*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->getTransY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Utility_CTransParameter_getTransZ_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CTransParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CTransParameter*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->getTransZ();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Utility_CTransParameter_getRotateX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CTransParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CTransParameter*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->getRotateX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Utility_CTransParameter_getRotateY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CTransParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CTransParameter*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->getRotateY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Utility_CTransParameter_getRotateZ_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CTransParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CTransParameter*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->getRotateZ();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Utility_CTransParameter_getSaclePPM_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CTransParameter* ptrNativeObject = (EarthView::World::Spatial::Utility::CTransParameter*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->getSaclePPM();
					return objXXXX;
				}
			}
		}
	}
}
