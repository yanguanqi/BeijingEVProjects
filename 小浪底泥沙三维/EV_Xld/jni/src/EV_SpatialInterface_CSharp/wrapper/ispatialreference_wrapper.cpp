/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ispatialreference.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Utility
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
			namespace Geometry
			{
				typedef const ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSamiMajor_ev_real64_Callback)();
				typedef const ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_IEllipseSpheriod_getInvFlattening_ev_real64_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSphereName_EVString_Callback)();
				typedef const int  ( _stdcall EarthView_World_Spatial_Geometry_IEllipseSpheriod_getDatumType_EVDatumType_Callback)();
				typedef const ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_IEllipseSpheriod_getFromGreenWicth_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_IEllipseSpheriod_getAngularUnits_void_EVString_ev_real64_Callback)(_out char*& pszname, _out ev_real64& dfunitsValue);
				class IEllipseSpheriodProxy : public EarthView::World::Spatial::Geometry::IEllipseSpheriod
				{
				private:
					EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSamiMajor_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSamiMajor_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_IEllipseSpheriod_getInvFlattening_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getInvFlattening_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSphereName_EVString_Callback* m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSphereName_EVString_Callback;
					EarthView_World_Spatial_Geometry_IEllipseSpheriod_getDatumType_EVDatumType_Callback* m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getDatumType_EVDatumType_Callback;
					EarthView_World_Spatial_Geometry_IEllipseSpheriod_getFromGreenWicth_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getFromGreenWicth_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_IEllipseSpheriod_getAngularUnits_void_EVString_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getAngularUnits_void_EVString_ev_real64_Callback;
				public:
					IEllipseSpheriodProxy(EarthView::World::Core::CNameValuePairList *pList) : IEllipseSpheriod(pList)
					{
						m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSamiMajor_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getInvFlattening_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSphereName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getDatumType_EVDatumType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getFromGreenWicth_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getAngularUnits_void_EVString_ev_real64_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSamiMajor_ev_real64(EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSamiMajor_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSamiMajor_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getInvFlattening_ev_real64(EarthView_World_Spatial_Geometry_IEllipseSpheriod_getInvFlattening_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getInvFlattening_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSphereName_EVString(EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSphereName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSphereName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getDatumType_EVDatumType(EarthView_World_Spatial_Geometry_IEllipseSpheriod_getDatumType_EVDatumType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getDatumType_EVDatumType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getFromGreenWicth_ev_real64(EarthView_World_Spatial_Geometry_IEllipseSpheriod_getFromGreenWicth_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getFromGreenWicth_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getAngularUnits_void_EVString_ev_real64(EarthView_World_Spatial_Geometry_IEllipseSpheriod_getAngularUnits_void_EVString_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getAngularUnits_void_EVString_ev_real64_Callback = pCallback;
					}
					virtual const ev_real64 getSamiMajor() const
					{
						if(m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSamiMajor_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							const ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSamiMajor_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IEllipseSpheriod::getSamiMajor();
					}
					virtual const ev_real64 getInvFlattening() const
					{
						if(m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getInvFlattening_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							const ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getInvFlattening_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IEllipseSpheriod::getInvFlattening();
					}
					virtual EVString getSphereName() const
					{
						if(m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSphereName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSphereName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IEllipseSpheriod::getSphereName();
					}
					virtual const EarthView::World::Spatial::Utility::EVDatumType getDatumType() const
					{
						if(m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getDatumType_EVDatumType_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Utility::EVDatumType returnValue = (EarthView::World::Spatial::Utility::EVDatumType)m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getDatumType_EVDatumType_Callback();
							return returnValue;
						}
						else
							return this->IEllipseSpheriod::getDatumType();
					}
					virtual const ev_real64 getFromGreenWicth() const
					{
						if(m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getFromGreenWicth_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							const ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getFromGreenWicth_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->IEllipseSpheriod::getFromGreenWicth();
					}
					virtual void getAngularUnits(_out EVString& pszname, _out ev_real64& dfunitsValue) const
					{
						if(m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getAngularUnits_void_EVString_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							char* pszname_Char = pszname.makeBuffer();
							m_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getAngularUnits_void_EVString_ev_real64_Callback(pszname_Char, dfunitsValue);
							pszname = pszname_Char;
							if(pszname_Char != NULL){ delete[] pszname_Char;pszname_Char = NULL;}
						}
						else
							return this->IEllipseSpheriod::getAngularUnits(pszname, dfunitsValue);
					}
				};
				REGISTER_FACTORY_CLASS(IEllipseSpheriodProxy);
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSamiMajor_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEllipseSpheriod* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjectXXXX;
					if (dynamic_cast<IEllipseSpheriodProxy*>((EarthView::World::Spatial::Geometry::IEllipseSpheriod*)ptrNativeObject) != NULL)
					{
						const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEllipseSpheriod::getSamiMajor();
						return objXXXX;
					}
					else
					{
						const ev_real64 objXXXX = ptrNativeObject->getSamiMajor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSamiMajor_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSamiMajor_ev_real64_Callback* pCallback )
				{
					IEllipseSpheriodProxy* ptr = dynamic_cast<IEllipseSpheriodProxy*>((EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSamiMajor_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSamiMajor_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEllipseSpheriod* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEllipseSpheriod::getSamiMajor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Geometry_IEllipseSpheriod_getInvFlattening_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEllipseSpheriod* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjectXXXX;
					if (dynamic_cast<IEllipseSpheriodProxy*>((EarthView::World::Spatial::Geometry::IEllipseSpheriod*)ptrNativeObject) != NULL)
					{
						const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEllipseSpheriod::getInvFlattening();
						return objXXXX;
					}
					else
					{
						const ev_real64 objXXXX = ptrNativeObject->getInvFlattening();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getInvFlattening_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEllipseSpheriod_getInvFlattening_ev_real64_Callback* pCallback )
				{
					IEllipseSpheriodProxy* ptr = dynamic_cast<IEllipseSpheriodProxy*>((EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getInvFlattening_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Geometry_IEllipseSpheriod_getInvFlattening_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEllipseSpheriod* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEllipseSpheriod::getInvFlattening();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSphereName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEllipseSpheriod* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjectXXXX;
					if (dynamic_cast<IEllipseSpheriodProxy*>((EarthView::World::Spatial::Geometry::IEllipseSpheriod*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEllipseSpheriod::getSphereName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getSphereName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSphereName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSphereName_EVString_Callback* pCallback )
				{
					IEllipseSpheriodProxy* ptr = dynamic_cast<IEllipseSpheriodProxy*>((EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSphereName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Geometry_IEllipseSpheriod_getSphereName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEllipseSpheriod* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEllipseSpheriod::getSphereName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const int  _stdcall EarthView_World_Spatial_Geometry_IEllipseSpheriod_getDatumType_EVDatumType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEllipseSpheriod* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjectXXXX;
					if (dynamic_cast<IEllipseSpheriodProxy*>((EarthView::World::Spatial::Geometry::IEllipseSpheriod*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Utility::EVDatumType objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEllipseSpheriod::getDatumType();
						return (int)objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Utility::EVDatumType objXXXX = ptrNativeObject->getDatumType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getDatumType_EVDatumType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEllipseSpheriod_getDatumType_EVDatumType_Callback* pCallback )
				{
					IEllipseSpheriodProxy* ptr = dynamic_cast<IEllipseSpheriodProxy*>((EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getDatumType_EVDatumType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const int  _stdcall EarthView_World_Spatial_Geometry_IEllipseSpheriod_getDatumType_EVDatumType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEllipseSpheriod* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjectXXXX;
					const EarthView::World::Spatial::Utility::EVDatumType objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEllipseSpheriod::getDatumType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Geometry_IEllipseSpheriod_getFromGreenWicth_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEllipseSpheriod* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjectXXXX;
					if (dynamic_cast<IEllipseSpheriodProxy*>((EarthView::World::Spatial::Geometry::IEllipseSpheriod*)ptrNativeObject) != NULL)
					{
						const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEllipseSpheriod::getFromGreenWicth();
						return objXXXX;
					}
					else
					{
						const ev_real64 objXXXX = ptrNativeObject->getFromGreenWicth();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getFromGreenWicth_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEllipseSpheriod_getFromGreenWicth_ev_real64_Callback* pCallback )
				{
					IEllipseSpheriodProxy* ptr = dynamic_cast<IEllipseSpheriodProxy*>((EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getFromGreenWicth_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Geometry_IEllipseSpheriod_getFromGreenWicth_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::IEllipseSpheriod* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::IEllipseSpheriod::getFromGreenWicth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IEllipseSpheriod_getAngularUnits_void_EVString_ev_real64(void *pObjectXXXX, _out char*& pszname, _out ev_real64& dfunitsValue )
				{
					EarthView::World::Core::ev_string pszname1 = pszname;
					const EarthView::World::Spatial::Geometry::IEllipseSpheriod* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjectXXXX;
					if (dynamic_cast<IEllipseSpheriodProxy*>((EarthView::World::Spatial::Geometry::IEllipseSpheriod*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::IEllipseSpheriod::getAngularUnits(pszname1, dfunitsValue);
					else
						ptrNativeObject->getAngularUnits(pszname1, dfunitsValue);
					pszname=pszname1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getAngularUnits_void_EVString_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_IEllipseSpheriod_getAngularUnits_void_EVString_ev_real64_Callback* pCallback )
				{
					IEllipseSpheriodProxy* ptr = dynamic_cast<IEllipseSpheriodProxy*>((EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_IEllipseSpheriod_getAngularUnits_void_EVString_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_IEllipseSpheriod_getAngularUnits_void_EVString_ev_real64_NoVirtual(void *pObjectXXXX, _out char*& pszname, _out ev_real64& dfunitsValue )
				{
					EarthView::World::Core::ev_string pszname1 = pszname;
					const EarthView::World::Spatial::Geometry::IEllipseSpheriod* ptrNativeObject = (EarthView::World::Spatial::Geometry::IEllipseSpheriod*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::IEllipseSpheriod::getAngularUnits(pszname1, dfunitsValue);
					pszname=pszname1.makeBuffer();
				}
				typedef int  ( _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getType_EVSpatialReferenceType_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getSRID_ev_uint32_Callback)();
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_clone_ISpatialReference_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEllipseSpheriod*  ( _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback)(_in int type, _out char*& pszstrText);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getCoordUnits_void_EVString_ev_real64_Callback)(_out char*& pszunitsName, _out ev_real64& dfvalue);
				typedef const ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getSamiMajor_ev_real64_Callback)();
				typedef const ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getInvFlattening_ev_real64_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getSphereName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getCoordianteSystemName_EVString_Callback)();
				typedef const void  ( _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback)(_in int type, _inout void* objStream);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_isSameAs_ev_bool_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* pref);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_bool isLatLong, _inout ev_real64& dfLeft, _inout ev_real64& dfTop, _inout ev_real64& dfRight, _inout ev_real64& dfDown);
				class ISpatialReferenceProxy : public EarthView::World::Spatial::Geometry::ISpatialReference
				{
				private:
					EarthView_World_Spatial_Geometry_ISpatialReference_getType_EVSpatialReferenceType_Callback* m_EarthView_World_Spatial_Geometry_ISpatialReference_getType_EVSpatialReferenceType_Callback;
					EarthView_World_Spatial_Geometry_ISpatialReference_getSRID_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_ISpatialReference_getSRID_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_ISpatialReference_clone_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_ISpatialReference_clone_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_ISpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback* m_EarthView_World_Spatial_Geometry_ISpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback;
					EarthView_World_Spatial_Geometry_ISpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback* m_EarthView_World_Spatial_Geometry_ISpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback;
					EarthView_World_Spatial_Geometry_ISpatialReference_getCoordUnits_void_EVString_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_ISpatialReference_getCoordUnits_void_EVString_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_ISpatialReference_getSamiMajor_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_ISpatialReference_getSamiMajor_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_ISpatialReference_getInvFlattening_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_ISpatialReference_getInvFlattening_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_ISpatialReference_getSphereName_EVString_Callback* m_EarthView_World_Spatial_Geometry_ISpatialReference_getSphereName_EVString_Callback;
					EarthView_World_Spatial_Geometry_ISpatialReference_getCoordianteSystemName_EVString_Callback* m_EarthView_World_Spatial_Geometry_ISpatialReference_getCoordianteSystemName_EVString_Callback;
					EarthView_World_Spatial_Geometry_ISpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback* m_EarthView_World_Spatial_Geometry_ISpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback;
					EarthView_World_Spatial_Geometry_ISpatialReference_isSameAs_ev_bool_ISpatialReference_Callback* m_EarthView_World_Spatial_Geometry_ISpatialReference_isSameAs_ev_bool_ISpatialReference_Callback;
					EarthView_World_Spatial_Geometry_ISpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_ISpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
				public:
					ISpatialReferenceProxy(EarthView::World::Core::CNameValuePairList *pList) : ISpatialReference(pList)
					{
						m_EarthView_World_Spatial_Geometry_ISpatialReference_getType_EVSpatialReferenceType_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_ISpatialReference_getSRID_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_ISpatialReference_clone_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_ISpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_ISpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_ISpatialReference_getCoordUnits_void_EVString_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_ISpatialReference_getSamiMajor_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_ISpatialReference_getInvFlattening_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_ISpatialReference_getSphereName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_ISpatialReference_getCoordianteSystemName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_ISpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_ISpatialReference_isSameAs_ev_bool_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_ISpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getType_EVSpatialReferenceType(EarthView_World_Spatial_Geometry_ISpatialReference_getType_EVSpatialReferenceType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_ISpatialReference_getType_EVSpatialReferenceType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getSRID_ev_uint32(EarthView_World_Spatial_Geometry_ISpatialReference_getSRID_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_ISpatialReference_getSRID_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_clone_ISpatialReference(EarthView_World_Spatial_Geometry_ISpatialReference_clone_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_ISpatialReference_clone_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getCEllipseSphere_IEllipseSpheriod(EarthView_World_Spatial_Geometry_ISpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_ISpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString(EarthView_World_Spatial_Geometry_ISpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_ISpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getCoordUnits_void_EVString_ev_real64(EarthView_World_Spatial_Geometry_ISpatialReference_getCoordUnits_void_EVString_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_ISpatialReference_getCoordUnits_void_EVString_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getSamiMajor_ev_real64(EarthView_World_Spatial_Geometry_ISpatialReference_getSamiMajor_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_ISpatialReference_getSamiMajor_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getInvFlattening_ev_real64(EarthView_World_Spatial_Geometry_ISpatialReference_getInvFlattening_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_ISpatialReference_getInvFlattening_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getSphereName_EVString(EarthView_World_Spatial_Geometry_ISpatialReference_getSphereName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_ISpatialReference_getSphereName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getCoordianteSystemName_EVString(EarthView_World_Spatial_Geometry_ISpatialReference_getCoordianteSystemName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_ISpatialReference_getCoordianteSystemName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream(EarthView_World_Spatial_Geometry_ISpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_ISpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_isSameAs_ev_bool_ISpatialReference(EarthView_World_Spatial_Geometry_ISpatialReference_isSameAs_ev_bool_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_ISpatialReference_isSameAs_ev_bool_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_ISpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_ISpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Geometry::EVSpatialReferenceType getType() const
					{
						if(m_EarthView_World_Spatial_Geometry_ISpatialReference_getType_EVSpatialReferenceType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVSpatialReferenceType returnValue = (EarthView::World::Spatial::Geometry::EVSpatialReferenceType)m_EarthView_World_Spatial_Geometry_ISpatialReference_getType_EVSpatialReferenceType_Callback();
							return returnValue;
						}
						else
							return this->ISpatialReference::getType();
					}
					virtual ev_uint32 getSRID() const
					{
						if(m_EarthView_World_Spatial_Geometry_ISpatialReference_getSRID_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Geometry_ISpatialReference_getSRID_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->ISpatialReference::getSRID();
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* clone() const
					{
						if(m_EarthView_World_Spatial_Geometry_ISpatialReference_clone_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Geometry_ISpatialReference_clone_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->ISpatialReference::clone();
					}
					virtual const EarthView::World::Spatial::Geometry::IEllipseSpheriod* getCEllipseSphere() const
					{
						if(m_EarthView_World_Spatial_Geometry_ISpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEllipseSpheriod* returnValue = m_EarthView_World_Spatial_Geometry_ISpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback();
							return returnValue;
						}
						else
							return this->ISpatialReference::getCEllipseSphere();
					}
					virtual void exportToString(_in EarthView::World::Spatial::Utility::EVSpatialReferenceStringType type, _out EVString& pszstrText) const
					{
						if(m_EarthView_World_Spatial_Geometry_ISpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* pszstrText_Char = pszstrText.makeBuffer();
							m_EarthView_World_Spatial_Geometry_ISpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback((int)type, pszstrText_Char);
							pszstrText = pszstrText_Char;
							if(pszstrText_Char != NULL){ delete[] pszstrText_Char;pszstrText_Char = NULL;}
						}
						else
							return this->ISpatialReference::exportToString(type, pszstrText);
					}
					virtual void getCoordUnits(_out EVString& pszunitsName, _out ev_real64& dfvalue) const
					{
						if(m_EarthView_World_Spatial_Geometry_ISpatialReference_getCoordUnits_void_EVString_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							char* pszunitsName_Char = pszunitsName.makeBuffer();
							m_EarthView_World_Spatial_Geometry_ISpatialReference_getCoordUnits_void_EVString_ev_real64_Callback(pszunitsName_Char, dfvalue);
							pszunitsName = pszunitsName_Char;
							if(pszunitsName_Char != NULL){ delete[] pszunitsName_Char;pszunitsName_Char = NULL;}
						}
						else
							return this->ISpatialReference::getCoordUnits(pszunitsName, dfvalue);
					}
					virtual const ev_real64 getSamiMajor() const
					{
						if(m_EarthView_World_Spatial_Geometry_ISpatialReference_getSamiMajor_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							const ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_ISpatialReference_getSamiMajor_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->ISpatialReference::getSamiMajor();
					}
					virtual const ev_real64 getInvFlattening() const
					{
						if(m_EarthView_World_Spatial_Geometry_ISpatialReference_getInvFlattening_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							const ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_ISpatialReference_getInvFlattening_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->ISpatialReference::getInvFlattening();
					}
					virtual EVString getSphereName() const
					{
						if(m_EarthView_World_Spatial_Geometry_ISpatialReference_getSphereName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Geometry_ISpatialReference_getSphereName_EVString_Callback();
							return returnValue;
						}
						else
							return this->ISpatialReference::getSphereName();
					}
					virtual EVString getCoordianteSystemName() const
					{
						if(m_EarthView_World_Spatial_Geometry_ISpatialReference_getCoordianteSystemName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Geometry_ISpatialReference_getCoordianteSystemName_EVString_Callback();
							return returnValue;
						}
						else
							return this->ISpatialReference::getCoordianteSystemName();
					}
					virtual const void toStream(_in EarthView::World::Spatial::Utility::EVSpatialReferenceStringType type, _inout EarthView::World::Core::CDataStream& objStream) const
					{
						if(m_EarthView_World_Spatial_Geometry_ISpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_ISpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback((int)type, &objStream);
						}
						else
							return this->ISpatialReference::toStream(type, objStream);
					}
					virtual ev_bool isSameAs(_in const EarthView::World::Spatial::Geometry::ISpatialReference* pref) const
					{
						if(m_EarthView_World_Spatial_Geometry_ISpatialReference_isSameAs_ev_bool_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Geometry_ISpatialReference_isSameAs_ev_bool_ISpatialReference_Callback(pref);
							return returnValue;
						}
						else
							return this->ISpatialReference::isSameAs(pref);
					}
					virtual void getInOutputRect(_in ev_bool isLatLong, _inout ev_real64& dfLeft, _inout ev_real64& dfTop, _inout ev_real64& dfRight, _inout ev_real64& dfDown) const
					{
						if(m_EarthView_World_Spatial_Geometry_ISpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_ISpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback(isLatLong, dfLeft, dfTop, dfRight, dfDown);
						}
						else
							return this->ISpatialReference::getInOutputRect(isLatLong, dfLeft, dfTop, dfRight, dfDown);
					}
				};
				REGISTER_FACTORY_CLASS(ISpatialReferenceProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getType_EVSpatialReferenceType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					if (dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::EVSpatialReferenceType objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::EVSpatialReferenceType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getType_EVSpatialReferenceType( void *pObjectXXXX, EarthView_World_Spatial_Geometry_ISpatialReference_getType_EVSpatialReferenceType_Callback* pCallback )
				{
					ISpatialReferenceProxy* ptr = dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getType_EVSpatialReferenceType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getType_EVSpatialReferenceType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::EVSpatialReferenceType objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getSRID_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					if (dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::getSRID();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getSRID();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getSRID_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_ISpatialReference_getSRID_ev_uint32_Callback* pCallback )
				{
					ISpatialReferenceProxy* ptr = dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getSRID_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getSRID_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::getSRID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_clone_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					if (dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_clone_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_ISpatialReference_clone_ISpatialReference_Callback* pCallback )
				{
					ISpatialReferenceProxy* ptr = dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_clone_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_clone_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEllipseSpheriod*  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getCEllipseSphere_IEllipseSpheriod(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					if (dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEllipseSpheriod* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::getCEllipseSphere();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEllipseSpheriod* objXXXX = ptrNativeObject->getCEllipseSphere();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getCEllipseSphere_IEllipseSpheriod( void *pObjectXXXX, EarthView_World_Spatial_Geometry_ISpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback* pCallback )
				{
					ISpatialReferenceProxy* ptr = dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getCEllipseSphere_IEllipseSpheriod(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEllipseSpheriod*  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getCEllipseSphere_IEllipseSpheriod_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEllipseSpheriod* objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::getCEllipseSphere();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString(void *pObjectXXXX, _in int type, _out char*& pszstrText )
				{
					EarthView::World::Core::ev_string pszstrText1 = pszstrText;
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					if (dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::exportToString((EarthView::World::Spatial::Utility::EVSpatialReferenceStringType)type, pszstrText1);
					else
						ptrNativeObject->exportToString((EarthView::World::Spatial::Utility::EVSpatialReferenceStringType)type, pszstrText1);
					pszstrText=pszstrText1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString( void *pObjectXXXX, EarthView_World_Spatial_Geometry_ISpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback* pCallback )
				{
					ISpatialReferenceProxy* ptr = dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_NoVirtual(void *pObjectXXXX, _in int type, _out char*& pszstrText )
				{
					EarthView::World::Core::ev_string pszstrText1 = pszstrText;
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::exportToString((EarthView::World::Spatial::Utility::EVSpatialReferenceStringType)type, pszstrText1);
					pszstrText=pszstrText1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getCoordUnits_void_EVString_ev_real64(void *pObjectXXXX, _out char*& pszunitsName, _out ev_real64& dfvalue )
				{
					EarthView::World::Core::ev_string pszunitsName1 = pszunitsName;
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					if (dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::getCoordUnits(pszunitsName1, dfvalue);
					else
						ptrNativeObject->getCoordUnits(pszunitsName1, dfvalue);
					pszunitsName=pszunitsName1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getCoordUnits_void_EVString_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_ISpatialReference_getCoordUnits_void_EVString_ev_real64_Callback* pCallback )
				{
					ISpatialReferenceProxy* ptr = dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getCoordUnits_void_EVString_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getCoordUnits_void_EVString_ev_real64_NoVirtual(void *pObjectXXXX, _out char*& pszunitsName, _out ev_real64& dfvalue )
				{
					EarthView::World::Core::ev_string pszunitsName1 = pszunitsName;
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::getCoordUnits(pszunitsName1, dfvalue);
					pszunitsName=pszunitsName1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getSamiMajor_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					if (dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*)ptrNativeObject) != NULL)
					{
						const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::getSamiMajor();
						return objXXXX;
					}
					else
					{
						const ev_real64 objXXXX = ptrNativeObject->getSamiMajor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getSamiMajor_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_ISpatialReference_getSamiMajor_ev_real64_Callback* pCallback )
				{
					ISpatialReferenceProxy* ptr = dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getSamiMajor_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getSamiMajor_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::getSamiMajor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getInvFlattening_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					if (dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*)ptrNativeObject) != NULL)
					{
						const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::getInvFlattening();
						return objXXXX;
					}
					else
					{
						const ev_real64 objXXXX = ptrNativeObject->getInvFlattening();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getInvFlattening_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_ISpatialReference_getInvFlattening_ev_real64_Callback* pCallback )
				{
					ISpatialReferenceProxy* ptr = dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getInvFlattening_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getInvFlattening_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::getInvFlattening();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getSphereName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					if (dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::getSphereName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getSphereName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getSphereName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Geometry_ISpatialReference_getSphereName_EVString_Callback* pCallback )
				{
					ISpatialReferenceProxy* ptr = dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getSphereName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getSphereName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::getSphereName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getCoordianteSystemName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					if (dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::getCoordianteSystemName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getCoordianteSystemName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getCoordianteSystemName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Geometry_ISpatialReference_getCoordianteSystemName_EVString_Callback* pCallback )
				{
					ISpatialReferenceProxy* ptr = dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getCoordianteSystemName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getCoordianteSystemName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::getCoordianteSystemName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const void  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream(void *pObjectXXXX, _in int type, _inout void* objStream )
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					if (dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::toStream((EarthView::World::Spatial::Utility::EVSpatialReferenceStringType)type, *(EarthView::World::Core::CDataStream*)objStream);
					else
						ptrNativeObject->toStream((EarthView::World::Spatial::Utility::EVSpatialReferenceStringType)type, *(EarthView::World::Core::CDataStream*)objStream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Geometry_ISpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback* pCallback )
				{
					ISpatialReferenceProxy* ptr = dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const void  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_NoVirtual(void *pObjectXXXX, _in int type, _inout void* objStream )
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::toStream((EarthView::World::Spatial::Utility::EVSpatialReferenceStringType)type, *(EarthView::World::Core::CDataStream*)objStream);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_isSameAs_ev_bool_ISpatialReference(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* pref )
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					if (dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::isSameAs(pref);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSameAs(pref);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_isSameAs_ev_bool_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Geometry_ISpatialReference_isSameAs_ev_bool_ISpatialReference_Callback* pCallback )
				{
					ISpatialReferenceProxy* ptr = dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_isSameAs_ev_bool_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_isSameAs_ev_bool_ISpatialReference_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* pref )
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::isSameAs(pref);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_bool isLatLong, _inout ev_real64& dfLeft, _inout ev_real64& dfTop, _inout ev_real64& dfRight, _inout ev_real64& dfDown )
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					if (dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::getInOutputRect(isLatLong, dfLeft, dfTop, dfRight, dfDown);
					else
						ptrNativeObject->getInOutputRect(isLatLong, dfLeft, dfTop, dfRight, dfDown);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_ISpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					ISpatialReferenceProxy* ptr = dynamic_cast<ISpatialReferenceProxy*>((EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_ISpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_ISpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_bool isLatLong, _inout ev_real64& dfLeft, _inout ev_real64& dfTop, _inout ev_real64& dfRight, _inout ev_real64& dfDown )
				{
					const EarthView::World::Spatial::Geometry::ISpatialReference* ptrNativeObject = (EarthView::World::Spatial::Geometry::ISpatialReference*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::ISpatialReference::getInOutputRect(isLatLong, dfLeft, dfTop, dfRight, dfDown);
				}
			}
		}
	}
}
