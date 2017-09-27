/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/coordinatesystem/spatialreference.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Utility
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Utility_CSpatialReference_setCoordianteSystemName_void_EVString_Callback)(_in char*& name);
				typedef int  ( _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getType_EVSpatialReferenceType_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getSRID_ev_uint32_Callback)();
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Utility_CSpatialReference_clone_ISpatialReference_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEllipseSpheriod*  ( _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Utility_CSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback)(_in int type, _out char*& pszstrText);
				typedef void  ( _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getCoordUnits_void_EVString_ev_real64_Callback)(_out char*& pszunitsName, _out ev_real64& dfvalue);
				typedef const ev_real64  ( _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getSamiMajor_ev_real64_Callback)();
				typedef const ev_real64  ( _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getInvFlattening_ev_real64_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getSphereName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getCoordianteSystemName_EVString_Callback)();
				typedef const void  ( _stdcall EarthView_World_Spatial_Utility_CSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback)(_in int type, _inout void* objStream);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Utility_CSpatialReference_isSameAs_ev_bool_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* pref);
				typedef void  ( _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_bool isLatLong, _inout ev_real64& dfLeft, _inout ev_real64& dfTop, _inout ev_real64& dfRight, _inout ev_real64& dfDown);
				class CSpatialReferenceProxy : public EarthView::World::Spatial::Utility::CSpatialReference
				{
				private:
					EarthView_World_Spatial_Utility_CSpatialReference_setCoordianteSystemName_void_EVString_Callback* m_EarthView_World_Spatial_Utility_CSpatialReference_setCoordianteSystemName_void_EVString_Callback;
					EarthView_World_Spatial_Utility_CSpatialReference_getType_EVSpatialReferenceType_Callback* m_EarthView_World_Spatial_Utility_CSpatialReference_getType_EVSpatialReferenceType_Callback;
					EarthView_World_Spatial_Utility_CSpatialReference_getSRID_ev_uint32_Callback* m_EarthView_World_Spatial_Utility_CSpatialReference_getSRID_ev_uint32_Callback;
					EarthView_World_Spatial_Utility_CSpatialReference_clone_ISpatialReference_Callback* m_EarthView_World_Spatial_Utility_CSpatialReference_clone_ISpatialReference_Callback;
					EarthView_World_Spatial_Utility_CSpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback* m_EarthView_World_Spatial_Utility_CSpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback;
					EarthView_World_Spatial_Utility_CSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback* m_EarthView_World_Spatial_Utility_CSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback;
					EarthView_World_Spatial_Utility_CSpatialReference_getCoordUnits_void_EVString_ev_real64_Callback* m_EarthView_World_Spatial_Utility_CSpatialReference_getCoordUnits_void_EVString_ev_real64_Callback;
					EarthView_World_Spatial_Utility_CSpatialReference_getSamiMajor_ev_real64_Callback* m_EarthView_World_Spatial_Utility_CSpatialReference_getSamiMajor_ev_real64_Callback;
					EarthView_World_Spatial_Utility_CSpatialReference_getInvFlattening_ev_real64_Callback* m_EarthView_World_Spatial_Utility_CSpatialReference_getInvFlattening_ev_real64_Callback;
					EarthView_World_Spatial_Utility_CSpatialReference_getSphereName_EVString_Callback* m_EarthView_World_Spatial_Utility_CSpatialReference_getSphereName_EVString_Callback;
					EarthView_World_Spatial_Utility_CSpatialReference_getCoordianteSystemName_EVString_Callback* m_EarthView_World_Spatial_Utility_CSpatialReference_getCoordianteSystemName_EVString_Callback;
					EarthView_World_Spatial_Utility_CSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback* m_EarthView_World_Spatial_Utility_CSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback;
					EarthView_World_Spatial_Utility_CSpatialReference_isSameAs_ev_bool_ISpatialReference_Callback* m_EarthView_World_Spatial_Utility_CSpatialReference_isSameAs_ev_bool_ISpatialReference_Callback;
					EarthView_World_Spatial_Utility_CSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Utility_CSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
				public:
					CSpatialReferenceProxy(EarthView::World::Core::CNameValuePairList *pList) : CSpatialReference(pList)
					{
						m_EarthView_World_Spatial_Utility_CSpatialReference_setCoordianteSystemName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CSpatialReference_getType_EVSpatialReferenceType_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CSpatialReference_getSRID_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CSpatialReference_clone_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CSpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CSpatialReference_getCoordUnits_void_EVString_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CSpatialReference_getSamiMajor_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CSpatialReference_getInvFlattening_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CSpatialReference_getSphereName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CSpatialReference_getCoordianteSystemName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CSpatialReference_isSameAs_ev_bool_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_setCoordianteSystemName_void_EVString(EarthView_World_Spatial_Utility_CSpatialReference_setCoordianteSystemName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CSpatialReference_setCoordianteSystemName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_getType_EVSpatialReferenceType(EarthView_World_Spatial_Utility_CSpatialReference_getType_EVSpatialReferenceType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CSpatialReference_getType_EVSpatialReferenceType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_getSRID_ev_uint32(EarthView_World_Spatial_Utility_CSpatialReference_getSRID_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CSpatialReference_getSRID_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_clone_ISpatialReference(EarthView_World_Spatial_Utility_CSpatialReference_clone_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CSpatialReference_clone_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_getCEllipseSphere_IEllipseSpheriod(EarthView_World_Spatial_Utility_CSpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CSpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString(EarthView_World_Spatial_Utility_CSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_getCoordUnits_void_EVString_ev_real64(EarthView_World_Spatial_Utility_CSpatialReference_getCoordUnits_void_EVString_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CSpatialReference_getCoordUnits_void_EVString_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_getSamiMajor_ev_real64(EarthView_World_Spatial_Utility_CSpatialReference_getSamiMajor_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CSpatialReference_getSamiMajor_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_getInvFlattening_ev_real64(EarthView_World_Spatial_Utility_CSpatialReference_getInvFlattening_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CSpatialReference_getInvFlattening_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_getSphereName_EVString(EarthView_World_Spatial_Utility_CSpatialReference_getSphereName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CSpatialReference_getSphereName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_getCoordianteSystemName_EVString(EarthView_World_Spatial_Utility_CSpatialReference_getCoordianteSystemName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CSpatialReference_getCoordianteSystemName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream(EarthView_World_Spatial_Utility_CSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_isSameAs_ev_bool_ISpatialReference(EarthView_World_Spatial_Utility_CSpatialReference_isSameAs_ev_bool_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CSpatialReference_isSameAs_ev_bool_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Utility_CSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					virtual const EarthView::World::Spatial::Geometry::IEllipseSpheriod* getCEllipseSphere() const
					{
						if(m_EarthView_World_Spatial_Utility_CSpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEllipseSpheriod* returnValue = m_EarthView_World_Spatial_Utility_CSpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback();
							return returnValue;
						}
						else
							return this->CSpatialReference::getCEllipseSphere();
					}
					virtual void exportToString(_in EarthView::World::Spatial::Utility::EVSpatialReferenceStringType type, _out EVString& pszstrText) const
					{
						if(m_EarthView_World_Spatial_Utility_CSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* pszstrText_Char = pszstrText.makeBuffer();
							m_EarthView_World_Spatial_Utility_CSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback((int)type, pszstrText_Char);
							pszstrText = pszstrText_Char;
							if(pszstrText_Char != NULL){ delete[] pszstrText_Char;pszstrText_Char = NULL;}
						}
						else
							return this->CSpatialReference::exportToString(type, pszstrText);
					}
					virtual void getCoordUnits(_out EVString& pszunitsName, _out ev_real64& dfvalue) const
					{
						if(m_EarthView_World_Spatial_Utility_CSpatialReference_getCoordUnits_void_EVString_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							char* pszunitsName_Char = pszunitsName.makeBuffer();
							m_EarthView_World_Spatial_Utility_CSpatialReference_getCoordUnits_void_EVString_ev_real64_Callback(pszunitsName_Char, dfvalue);
							pszunitsName = pszunitsName_Char;
							if(pszunitsName_Char != NULL){ delete[] pszunitsName_Char;pszunitsName_Char = NULL;}
						}
						else
							return this->CSpatialReference::getCoordUnits(pszunitsName, dfvalue);
					}
					virtual const ev_real64 getSamiMajor() const
					{
						if(m_EarthView_World_Spatial_Utility_CSpatialReference_getSamiMajor_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							const ev_real64 returnValue = m_EarthView_World_Spatial_Utility_CSpatialReference_getSamiMajor_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CSpatialReference::getSamiMajor();
					}
					virtual const ev_real64 getInvFlattening() const
					{
						if(m_EarthView_World_Spatial_Utility_CSpatialReference_getInvFlattening_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							const ev_real64 returnValue = m_EarthView_World_Spatial_Utility_CSpatialReference_getInvFlattening_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CSpatialReference::getInvFlattening();
					}
					virtual EVString getSphereName() const
					{
						if(m_EarthView_World_Spatial_Utility_CSpatialReference_getSphereName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Utility_CSpatialReference_getSphereName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CSpatialReference::getSphereName();
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* clone() const
					{
						if(m_EarthView_World_Spatial_Utility_CSpatialReference_clone_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Utility_CSpatialReference_clone_ISpatialReference_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CSpatialReference::clone();
					}
					virtual EarthView::World::Spatial::Geometry::EVSpatialReferenceType getType() const
					{
						if(m_EarthView_World_Spatial_Utility_CSpatialReference_getType_EVSpatialReferenceType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVSpatialReferenceType returnValue = (EarthView::World::Spatial::Geometry::EVSpatialReferenceType)m_EarthView_World_Spatial_Utility_CSpatialReference_getType_EVSpatialReferenceType_Callback();
							return returnValue;
						}
						else
							return this->CSpatialReference::getType();
					}
					virtual ev_uint32 getSRID() const
					{
						if(m_EarthView_World_Spatial_Utility_CSpatialReference_getSRID_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Utility_CSpatialReference_getSRID_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CSpatialReference::getSRID();
					}
					virtual EVString getCoordianteSystemName() const
					{
						if(m_EarthView_World_Spatial_Utility_CSpatialReference_getCoordianteSystemName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Utility_CSpatialReference_getCoordianteSystemName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CSpatialReference::getCoordianteSystemName();
					}
					virtual void setCoordianteSystemName(_in EVString& name) const
					{
						if(m_EarthView_World_Spatial_Utility_CSpatialReference_setCoordianteSystemName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Utility_CSpatialReference_setCoordianteSystemName_void_EVString_Callback(name_Char);
						}
						else
							return this->CSpatialReference::setCoordianteSystemName(name);
					}
					virtual const void toStream(_in EarthView::World::Spatial::Utility::EVSpatialReferenceStringType type, _inout EarthView::World::Core::CDataStream& objStream) const
					{
						if(m_EarthView_World_Spatial_Utility_CSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Utility_CSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback((int)type, &objStream);
						}
						else
							return this->CSpatialReference::toStream(type, objStream);
					}
					virtual ev_bool isSameAs(_in const EarthView::World::Spatial::Geometry::ISpatialReference* pref) const
					{
						if(m_EarthView_World_Spatial_Utility_CSpatialReference_isSameAs_ev_bool_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Utility_CSpatialReference_isSameAs_ev_bool_ISpatialReference_Callback(pref);
							return returnValue;
						}
						else
							return this->CSpatialReference::isSameAs(pref);
					}
					virtual void getInOutputRect(_in ev_bool isLatLong, _inout ev_real64& dfLeft, _inout ev_real64& dfTop, _inout ev_real64& dfRight, _inout ev_real64& dfDown) const
					{
						if(m_EarthView_World_Spatial_Utility_CSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Utility_CSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback(isLatLong, dfLeft, dfTop, dfRight, dfDown);
						}
						else
							return this->CSpatialReference::getInOutputRect(isLatLong, dfLeft, dfTop, dfRight, dfDown);
					}
				};
				REGISTER_FACTORY_CLASS(CSpatialReferenceProxy);
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEllipseSpheriod*  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getCEllipseSphere_IEllipseSpheriod(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					if (dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEllipseSpheriod* objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::getCEllipseSphere();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEllipseSpheriod* objXXXX = ptrNativeObject->getCEllipseSphere();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CSpatialReference_getCEllipseSphere_IEllipseSpheriod( void *pObjectXXXX, EarthView_World_Spatial_Utility_CSpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback* pCallback )
				{
					CSpatialReferenceProxy* ptr = dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_getCEllipseSphere_IEllipseSpheriod(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEllipseSpheriod*  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getCEllipseSphere_IEllipseSpheriod_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEllipseSpheriod* objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::getCEllipseSphere();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString(void *pObjectXXXX, _in int type, _out char*& pszstrText )
				{
					EarthView::World::Core::ev_string pszstrText1 = pszstrText;
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					if (dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::exportToString((EarthView::World::Spatial::Utility::EVSpatialReferenceStringType)type, pszstrText1);
					else
						ptrNativeObject->exportToString((EarthView::World::Spatial::Utility::EVSpatialReferenceStringType)type, pszstrText1);
					pszstrText=pszstrText1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString( void *pObjectXXXX, EarthView_World_Spatial_Utility_CSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback* pCallback )
				{
					CSpatialReferenceProxy* ptr = dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_NoVirtual(void *pObjectXXXX, _in int type, _out char*& pszstrText )
				{
					EarthView::World::Core::ev_string pszstrText1 = pszstrText;
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::exportToString((EarthView::World::Spatial::Utility::EVSpatialReferenceStringType)type, pszstrText1);
					pszstrText=pszstrText1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getCoordUnits_void_EVString_ev_real64(void *pObjectXXXX, _out char*& pszunitsName, _out ev_real64& dfvalue )
				{
					EarthView::World::Core::ev_string pszunitsName1 = pszunitsName;
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					if (dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::getCoordUnits(pszunitsName1, dfvalue);
					else
						ptrNativeObject->getCoordUnits(pszunitsName1, dfvalue);
					pszunitsName=pszunitsName1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CSpatialReference_getCoordUnits_void_EVString_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Utility_CSpatialReference_getCoordUnits_void_EVString_ev_real64_Callback* pCallback )
				{
					CSpatialReferenceProxy* ptr = dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_getCoordUnits_void_EVString_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getCoordUnits_void_EVString_ev_real64_NoVirtual(void *pObjectXXXX, _out char*& pszunitsName, _out ev_real64& dfvalue )
				{
					EarthView::World::Core::ev_string pszunitsName1 = pszunitsName;
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::getCoordUnits(pszunitsName1, dfvalue);
					pszunitsName=pszunitsName1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getSamiMajor_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					if (dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*)ptrNativeObject) != NULL)
					{
						const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::getSamiMajor();
						return objXXXX;
					}
					else
					{
						const ev_real64 objXXXX = ptrNativeObject->getSamiMajor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CSpatialReference_getSamiMajor_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Utility_CSpatialReference_getSamiMajor_ev_real64_Callback* pCallback )
				{
					CSpatialReferenceProxy* ptr = dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_getSamiMajor_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getSamiMajor_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::getSamiMajor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getInvFlattening_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					if (dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*)ptrNativeObject) != NULL)
					{
						const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::getInvFlattening();
						return objXXXX;
					}
					else
					{
						const ev_real64 objXXXX = ptrNativeObject->getInvFlattening();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CSpatialReference_getInvFlattening_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Utility_CSpatialReference_getInvFlattening_ev_real64_Callback* pCallback )
				{
					CSpatialReferenceProxy* ptr = dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_getInvFlattening_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getInvFlattening_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::getInvFlattening();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getSphereName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					if (dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::getSphereName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getSphereName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CSpatialReference_getSphereName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Utility_CSpatialReference_getSphereName_EVString_Callback* pCallback )
				{
					CSpatialReferenceProxy* ptr = dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_getSphereName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getSphereName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::getSphereName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_clone_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					if (dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CSpatialReference_clone_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Utility_CSpatialReference_clone_ISpatialReference_Callback* pCallback )
				{
					CSpatialReferenceProxy* ptr = dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_clone_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_clone_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_bool  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_isGeographic_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					const ev_bool objXXXX = ptrNativeObject->isGeographic();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_bool  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_isProjected_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					const ev_bool objXXXX = ptrNativeObject->isProjected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getType_EVSpatialReferenceType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					if (dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::EVSpatialReferenceType objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::EVSpatialReferenceType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CSpatialReference_getType_EVSpatialReferenceType( void *pObjectXXXX, EarthView_World_Spatial_Utility_CSpatialReference_getType_EVSpatialReferenceType_Callback* pCallback )
				{
					CSpatialReferenceProxy* ptr = dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_getType_EVSpatialReferenceType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getType_EVSpatialReferenceType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::EVSpatialReferenceType objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getSRID_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					if (dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::getSRID();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getSRID();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CSpatialReference_getSRID_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Utility_CSpatialReference_getSRID_ev_uint32_Callback* pCallback )
				{
					CSpatialReferenceProxy* ptr = dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_getSRID_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getSRID_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::getSRID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getCoordianteSystemName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					if (dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::getCoordianteSystemName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getCoordianteSystemName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CSpatialReference_getCoordianteSystemName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Utility_CSpatialReference_getCoordianteSystemName_EVString_Callback* pCallback )
				{
					CSpatialReferenceProxy* ptr = dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_getCoordianteSystemName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getCoordianteSystemName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::getCoordianteSystemName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_setCoordianteSystemName_void_EVString(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					if (dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::setCoordianteSystemName(name1);
					else
						ptrNativeObject->setCoordianteSystemName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CSpatialReference_setCoordianteSystemName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Utility_CSpatialReference_setCoordianteSystemName_void_EVString_Callback* pCallback )
				{
					CSpatialReferenceProxy* ptr = dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_setCoordianteSystemName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_setCoordianteSystemName_void_EVString_NoVirtual(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::setCoordianteSystemName(name1);
				}
				extern "C" EV_DLL_EXPORT  const void  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream(void *pObjectXXXX, _in int type, _inout void* objStream )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					if (dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::toStream((EarthView::World::Spatial::Utility::EVSpatialReferenceStringType)type, *(EarthView::World::Core::CDataStream*)objStream);
					else
						ptrNativeObject->toStream((EarthView::World::Spatial::Utility::EVSpatialReferenceStringType)type, *(EarthView::World::Core::CDataStream*)objStream);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Utility_CSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback* pCallback )
				{
					CSpatialReferenceProxy* ptr = dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const void  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_NoVirtual(void *pObjectXXXX, _in int type, _inout void* objStream )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::toStream((EarthView::World::Spatial::Utility::EVSpatialReferenceStringType)type, *(EarthView::World::Core::CDataStream*)objStream);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_reference_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->reference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_dereference_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->dereference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getReferenceCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getReferenceCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_release_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					ptrNativeObject->release();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_isSameAs_ev_bool_ISpatialReference(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* pref )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					if (dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::isSameAs(pref);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSameAs(pref);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CSpatialReference_isSameAs_ev_bool_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Utility_CSpatialReference_isSameAs_ev_bool_ISpatialReference_Callback* pCallback )
				{
					CSpatialReferenceProxy* ptr = dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_isSameAs_ev_bool_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_isSameAs_ev_bool_ISpatialReference_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* pref )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::isSameAs(pref);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_bool isLatLong, _inout ev_real64& dfLeft, _inout ev_real64& dfTop, _inout ev_real64& dfRight, _inout ev_real64& dfDown )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					if (dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::getInOutputRect(isLatLong, dfLeft, dfTop, dfRight, dfDown);
					else
						ptrNativeObject->getInOutputRect(isLatLong, dfLeft, dfTop, dfRight, dfDown);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Utility_CSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CSpatialReferenceProxy* ptr = dynamic_cast<CSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_bool isLatLong, _inout ev_real64& dfLeft, _inout ev_real64& dfTop, _inout ev_real64& dfRight, _inout ev_real64& dfDown )
				{
					const EarthView::World::Spatial::Utility::CSpatialReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CSpatialReference*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Utility::CSpatialReference::getInOutputRect(isLatLong, dfLeft, dfTop, dfRight, dfDown);
				}
				typedef void  ( _stdcall EarthView_World_Spatial_Utility_CGeoSpatialReference_setCoordianteSystemName_void_EVString_Callback)(_in char*& name);
				typedef int  ( _stdcall EarthView_World_Spatial_Utility_CGeoSpatialReference_getType_EVSpatialReferenceType_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Utility_CGeoSpatialReference_getSRID_ev_uint32_Callback)();
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Utility_CGeoSpatialReference_clone_ISpatialReference_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEllipseSpheriod*  ( _stdcall EarthView_World_Spatial_Utility_CGeoSpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Utility_CGeoSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback)(_in int type, _out char*& pszstrText);
				typedef void  ( _stdcall EarthView_World_Spatial_Utility_CGeoSpatialReference_getCoordUnits_void_EVString_ev_real64_Callback)(_out char*& pszunitsName, _out ev_real64& dfvalue);
				typedef const ev_real64  ( _stdcall EarthView_World_Spatial_Utility_CGeoSpatialReference_getSamiMajor_ev_real64_Callback)();
				typedef const ev_real64  ( _stdcall EarthView_World_Spatial_Utility_CGeoSpatialReference_getInvFlattening_ev_real64_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Utility_CGeoSpatialReference_getSphereName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Utility_CGeoSpatialReference_getCoordianteSystemName_EVString_Callback)();
				typedef const void  ( _stdcall EarthView_World_Spatial_Utility_CGeoSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback)(_in int type, _inout void* objStream);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Utility_CGeoSpatialReference_isSameAs_ev_bool_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* pref);
				typedef void  ( _stdcall EarthView_World_Spatial_Utility_CGeoSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_bool isLatLong, _inout ev_real64& dfLeft, _inout ev_real64& dfTop, _inout ev_real64& dfRight, _inout ev_real64& dfDown);
				class CGeoSpatialReferenceProxy : public EarthView::World::Spatial::Utility::CGeoSpatialReference
				{
				private:
					EarthView_World_Spatial_Utility_CGeoSpatialReference_setCoordianteSystemName_void_EVString_Callback* m_EarthView_World_Spatial_Utility_CGeoSpatialReference_setCoordianteSystemName_void_EVString_Callback;
					EarthView_World_Spatial_Utility_CGeoSpatialReference_getType_EVSpatialReferenceType_Callback* m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getType_EVSpatialReferenceType_Callback;
					EarthView_World_Spatial_Utility_CGeoSpatialReference_getSRID_ev_uint32_Callback* m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getSRID_ev_uint32_Callback;
					EarthView_World_Spatial_Utility_CGeoSpatialReference_clone_ISpatialReference_Callback* m_EarthView_World_Spatial_Utility_CGeoSpatialReference_clone_ISpatialReference_Callback;
					EarthView_World_Spatial_Utility_CGeoSpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback* m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback;
					EarthView_World_Spatial_Utility_CGeoSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback* m_EarthView_World_Spatial_Utility_CGeoSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback;
					EarthView_World_Spatial_Utility_CGeoSpatialReference_getCoordUnits_void_EVString_ev_real64_Callback* m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getCoordUnits_void_EVString_ev_real64_Callback;
					EarthView_World_Spatial_Utility_CGeoSpatialReference_getSamiMajor_ev_real64_Callback* m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getSamiMajor_ev_real64_Callback;
					EarthView_World_Spatial_Utility_CGeoSpatialReference_getInvFlattening_ev_real64_Callback* m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getInvFlattening_ev_real64_Callback;
					EarthView_World_Spatial_Utility_CGeoSpatialReference_getSphereName_EVString_Callback* m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getSphereName_EVString_Callback;
					EarthView_World_Spatial_Utility_CGeoSpatialReference_getCoordianteSystemName_EVString_Callback* m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getCoordianteSystemName_EVString_Callback;
					EarthView_World_Spatial_Utility_CGeoSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback* m_EarthView_World_Spatial_Utility_CGeoSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback;
					EarthView_World_Spatial_Utility_CGeoSpatialReference_isSameAs_ev_bool_ISpatialReference_Callback* m_EarthView_World_Spatial_Utility_CGeoSpatialReference_isSameAs_ev_bool_ISpatialReference_Callback;
					EarthView_World_Spatial_Utility_CGeoSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
				public:
					CGeoSpatialReferenceProxy(EarthView::World::Core::CNameValuePairList *pList) : CGeoSpatialReference(pList)
					{
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_setCoordianteSystemName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getType_EVSpatialReferenceType_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getSRID_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_clone_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getCoordUnits_void_EVString_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getSamiMajor_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getInvFlattening_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getSphereName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getCoordianteSystemName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_isSameAs_ev_bool_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_setCoordianteSystemName_void_EVString(EarthView_World_Spatial_Utility_CGeoSpatialReference_setCoordianteSystemName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_setCoordianteSystemName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getType_EVSpatialReferenceType(EarthView_World_Spatial_Utility_CGeoSpatialReference_getType_EVSpatialReferenceType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getType_EVSpatialReferenceType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getSRID_ev_uint32(EarthView_World_Spatial_Utility_CGeoSpatialReference_getSRID_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getSRID_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_clone_ISpatialReference(EarthView_World_Spatial_Utility_CGeoSpatialReference_clone_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_clone_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getCEllipseSphere_IEllipseSpheriod(EarthView_World_Spatial_Utility_CGeoSpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString(EarthView_World_Spatial_Utility_CGeoSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getCoordUnits_void_EVString_ev_real64(EarthView_World_Spatial_Utility_CGeoSpatialReference_getCoordUnits_void_EVString_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getCoordUnits_void_EVString_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getSamiMajor_ev_real64(EarthView_World_Spatial_Utility_CGeoSpatialReference_getSamiMajor_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getSamiMajor_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getInvFlattening_ev_real64(EarthView_World_Spatial_Utility_CGeoSpatialReference_getInvFlattening_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getInvFlattening_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getSphereName_EVString(EarthView_World_Spatial_Utility_CGeoSpatialReference_getSphereName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getSphereName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getCoordianteSystemName_EVString(EarthView_World_Spatial_Utility_CGeoSpatialReference_getCoordianteSystemName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getCoordianteSystemName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream(EarthView_World_Spatial_Utility_CGeoSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_isSameAs_ev_bool_ISpatialReference(EarthView_World_Spatial_Utility_CGeoSpatialReference_isSameAs_ev_bool_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_isSameAs_ev_bool_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Utility_CGeoSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					virtual const EarthView::World::Spatial::Geometry::IEllipseSpheriod* getCEllipseSphere() const
					{
						if(m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEllipseSpheriod* returnValue = m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback();
							return returnValue;
						}
						else
							return this->CGeoSpatialReference::getCEllipseSphere();
					}
					virtual void exportToString(_in EarthView::World::Spatial::Utility::EVSpatialReferenceStringType type, _out EVString& pszstrText) const
					{
						if(m_EarthView_World_Spatial_Utility_CGeoSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* pszstrText_Char = pszstrText.makeBuffer();
							m_EarthView_World_Spatial_Utility_CGeoSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback((int)type, pszstrText_Char);
							pszstrText = pszstrText_Char;
							if(pszstrText_Char != NULL){ delete[] pszstrText_Char;pszstrText_Char = NULL;}
						}
						else
							return this->CGeoSpatialReference::exportToString(type, pszstrText);
					}
					virtual void getCoordUnits(_out EVString& pszunitsName, _out ev_real64& dfvalue) const
					{
						if(m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getCoordUnits_void_EVString_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							char* pszunitsName_Char = pszunitsName.makeBuffer();
							m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getCoordUnits_void_EVString_ev_real64_Callback(pszunitsName_Char, dfvalue);
							pszunitsName = pszunitsName_Char;
							if(pszunitsName_Char != NULL){ delete[] pszunitsName_Char;pszunitsName_Char = NULL;}
						}
						else
							return this->CGeoSpatialReference::getCoordUnits(pszunitsName, dfvalue);
					}
					virtual const ev_real64 getSamiMajor() const
					{
						if(m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getSamiMajor_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							const ev_real64 returnValue = m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getSamiMajor_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CGeoSpatialReference::getSamiMajor();
					}
					virtual const ev_real64 getInvFlattening() const
					{
						if(m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getInvFlattening_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							const ev_real64 returnValue = m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getInvFlattening_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CGeoSpatialReference::getInvFlattening();
					}
					virtual EVString getSphereName() const
					{
						if(m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getSphereName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getSphereName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CGeoSpatialReference::getSphereName();
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* clone() const
					{
						if(m_EarthView_World_Spatial_Utility_CGeoSpatialReference_clone_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Utility_CGeoSpatialReference_clone_ISpatialReference_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CGeoSpatialReference::clone();
					}
					virtual EarthView::World::Spatial::Geometry::EVSpatialReferenceType getType() const
					{
						if(m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getType_EVSpatialReferenceType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVSpatialReferenceType returnValue = (EarthView::World::Spatial::Geometry::EVSpatialReferenceType)m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getType_EVSpatialReferenceType_Callback();
							return returnValue;
						}
						else
							return this->CGeoSpatialReference::getType();
					}
					virtual ev_uint32 getSRID() const
					{
						if(m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getSRID_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getSRID_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CGeoSpatialReference::getSRID();
					}
					virtual EVString getCoordianteSystemName() const
					{
						if(m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getCoordianteSystemName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getCoordianteSystemName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CGeoSpatialReference::getCoordianteSystemName();
					}
					virtual void setCoordianteSystemName(_in EVString& name) const
					{
						if(m_EarthView_World_Spatial_Utility_CGeoSpatialReference_setCoordianteSystemName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Utility_CGeoSpatialReference_setCoordianteSystemName_void_EVString_Callback(name_Char);
						}
						else
							return this->CGeoSpatialReference::setCoordianteSystemName(name);
					}
					virtual const void toStream(_in EarthView::World::Spatial::Utility::EVSpatialReferenceStringType type, _inout EarthView::World::Core::CDataStream& objStream) const
					{
						if(m_EarthView_World_Spatial_Utility_CGeoSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Utility_CGeoSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback((int)type, &objStream);
						}
						else
							return this->CGeoSpatialReference::toStream(type, objStream);
					}
					virtual ev_bool isSameAs(_in const EarthView::World::Spatial::Geometry::ISpatialReference* pref) const
					{
						if(m_EarthView_World_Spatial_Utility_CGeoSpatialReference_isSameAs_ev_bool_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Utility_CGeoSpatialReference_isSameAs_ev_bool_ISpatialReference_Callback(pref);
							return returnValue;
						}
						else
							return this->CGeoSpatialReference::isSameAs(pref);
					}
					virtual void getInOutputRect(_in ev_bool isLatLong, _inout ev_real64& dfLeft, _inout ev_real64& dfTop, _inout ev_real64& dfRight, _inout ev_real64& dfDown) const
					{
						if(m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Utility_CGeoSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback(isLatLong, dfLeft, dfTop, dfRight, dfDown);
						}
						else
							return this->CGeoSpatialReference::getInOutputRect(isLatLong, dfLeft, dfTop, dfRight, dfDown);
					}
				};
				REGISTER_FACTORY_CLASS(CGeoSpatialReferenceProxy);
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_setCoordianteSystemName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Utility_CGeoSpatialReference_setCoordianteSystemName_void_EVString_Callback* pCallback )
				{
					CGeoSpatialReferenceProxy* ptr = dynamic_cast<CGeoSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CGeoSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_setCoordianteSystemName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getType_EVSpatialReferenceType( void *pObjectXXXX, EarthView_World_Spatial_Utility_CGeoSpatialReference_getType_EVSpatialReferenceType_Callback* pCallback )
				{
					CGeoSpatialReferenceProxy* ptr = dynamic_cast<CGeoSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CGeoSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getType_EVSpatialReferenceType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getSRID_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Utility_CGeoSpatialReference_getSRID_ev_uint32_Callback* pCallback )
				{
					CGeoSpatialReferenceProxy* ptr = dynamic_cast<CGeoSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CGeoSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getSRID_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_clone_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Utility_CGeoSpatialReference_clone_ISpatialReference_Callback* pCallback )
				{
					CGeoSpatialReferenceProxy* ptr = dynamic_cast<CGeoSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CGeoSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_clone_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getCEllipseSphere_IEllipseSpheriod( void *pObjectXXXX, EarthView_World_Spatial_Utility_CGeoSpatialReference_getCEllipseSphere_IEllipseSpheriod_Callback* pCallback )
				{
					CGeoSpatialReferenceProxy* ptr = dynamic_cast<CGeoSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CGeoSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getCEllipseSphere_IEllipseSpheriod(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString( void *pObjectXXXX, EarthView_World_Spatial_Utility_CGeoSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback* pCallback )
				{
					CGeoSpatialReferenceProxy* ptr = dynamic_cast<CGeoSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CGeoSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_exportToString_void_EVSpatialReferenceStringType_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getCoordUnits_void_EVString_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Utility_CGeoSpatialReference_getCoordUnits_void_EVString_ev_real64_Callback* pCallback )
				{
					CGeoSpatialReferenceProxy* ptr = dynamic_cast<CGeoSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CGeoSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getCoordUnits_void_EVString_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getSamiMajor_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Utility_CGeoSpatialReference_getSamiMajor_ev_real64_Callback* pCallback )
				{
					CGeoSpatialReferenceProxy* ptr = dynamic_cast<CGeoSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CGeoSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getSamiMajor_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getInvFlattening_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Utility_CGeoSpatialReference_getInvFlattening_ev_real64_Callback* pCallback )
				{
					CGeoSpatialReferenceProxy* ptr = dynamic_cast<CGeoSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CGeoSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getInvFlattening_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getSphereName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Utility_CGeoSpatialReference_getSphereName_EVString_Callback* pCallback )
				{
					CGeoSpatialReferenceProxy* ptr = dynamic_cast<CGeoSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CGeoSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getSphereName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getCoordianteSystemName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Utility_CGeoSpatialReference_getCoordianteSystemName_EVString_Callback* pCallback )
				{
					CGeoSpatialReferenceProxy* ptr = dynamic_cast<CGeoSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CGeoSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getCoordianteSystemName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Utility_CGeoSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback* pCallback )
				{
					CGeoSpatialReferenceProxy* ptr = dynamic_cast<CGeoSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CGeoSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_toStream_void_EVSpatialReferenceStringType_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_isSameAs_ev_bool_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Utility_CGeoSpatialReference_isSameAs_ev_bool_ISpatialReference_Callback* pCallback )
				{
					CGeoSpatialReferenceProxy* ptr = dynamic_cast<CGeoSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CGeoSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_isSameAs_ev_bool_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Utility_CGeoSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CGeoSpatialReferenceProxy* ptr = dynamic_cast<CGeoSpatialReferenceProxy*>((EarthView::World::Spatial::Utility::CGeoSpatialReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CGeoSpatialReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				typedef void  ( _stdcall EarthView_World_Spatial_Utility_CProjectedReference_setCoordianteSystemName_void_EVString_Callback)(_in char*& name);
				typedef int  ( _stdcall EarthView_World_Spatial_Utility_CProjectedReference_getType_EVSpatialReferenceType_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Utility_CProjectedReference_getSRID_ev_uint32_Callback)();
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Utility_CProjectedReference_clone_ISpatialReference_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEllipseSpheriod*  ( _stdcall EarthView_World_Spatial_Utility_CProjectedReference_getCEllipseSphere_IEllipseSpheriod_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Utility_CProjectedReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback)(_in int type, _out char*& pszstrText);
				typedef void  ( _stdcall EarthView_World_Spatial_Utility_CProjectedReference_getCoordUnits_void_EVString_ev_real64_Callback)(_out char*& pszunitsName, _out ev_real64& dfvalue);
				typedef const ev_real64  ( _stdcall EarthView_World_Spatial_Utility_CProjectedReference_getSamiMajor_ev_real64_Callback)();
				typedef const ev_real64  ( _stdcall EarthView_World_Spatial_Utility_CProjectedReference_getInvFlattening_ev_real64_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Utility_CProjectedReference_getSphereName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Utility_CProjectedReference_getCoordianteSystemName_EVString_Callback)();
				typedef const void  ( _stdcall EarthView_World_Spatial_Utility_CProjectedReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback)(_in int type, _inout void* objStream);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Utility_CProjectedReference_isSameAs_ev_bool_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* pref);
				typedef void  ( _stdcall EarthView_World_Spatial_Utility_CProjectedReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_bool isLatLong, _inout ev_real64& dfLeft, _inout ev_real64& dfTop, _inout ev_real64& dfRight, _inout ev_real64& dfDown);
				class CProjectedReferenceProxy : public EarthView::World::Spatial::Utility::CProjectedReference
				{
				private:
					EarthView_World_Spatial_Utility_CProjectedReference_setCoordianteSystemName_void_EVString_Callback* m_EarthView_World_Spatial_Utility_CProjectedReference_setCoordianteSystemName_void_EVString_Callback;
					EarthView_World_Spatial_Utility_CProjectedReference_getType_EVSpatialReferenceType_Callback* m_EarthView_World_Spatial_Utility_CProjectedReference_getType_EVSpatialReferenceType_Callback;
					EarthView_World_Spatial_Utility_CProjectedReference_getSRID_ev_uint32_Callback* m_EarthView_World_Spatial_Utility_CProjectedReference_getSRID_ev_uint32_Callback;
					EarthView_World_Spatial_Utility_CProjectedReference_clone_ISpatialReference_Callback* m_EarthView_World_Spatial_Utility_CProjectedReference_clone_ISpatialReference_Callback;
					EarthView_World_Spatial_Utility_CProjectedReference_getCEllipseSphere_IEllipseSpheriod_Callback* m_EarthView_World_Spatial_Utility_CProjectedReference_getCEllipseSphere_IEllipseSpheriod_Callback;
					EarthView_World_Spatial_Utility_CProjectedReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback* m_EarthView_World_Spatial_Utility_CProjectedReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback;
					EarthView_World_Spatial_Utility_CProjectedReference_getCoordUnits_void_EVString_ev_real64_Callback* m_EarthView_World_Spatial_Utility_CProjectedReference_getCoordUnits_void_EVString_ev_real64_Callback;
					EarthView_World_Spatial_Utility_CProjectedReference_getSamiMajor_ev_real64_Callback* m_EarthView_World_Spatial_Utility_CProjectedReference_getSamiMajor_ev_real64_Callback;
					EarthView_World_Spatial_Utility_CProjectedReference_getInvFlattening_ev_real64_Callback* m_EarthView_World_Spatial_Utility_CProjectedReference_getInvFlattening_ev_real64_Callback;
					EarthView_World_Spatial_Utility_CProjectedReference_getSphereName_EVString_Callback* m_EarthView_World_Spatial_Utility_CProjectedReference_getSphereName_EVString_Callback;
					EarthView_World_Spatial_Utility_CProjectedReference_getCoordianteSystemName_EVString_Callback* m_EarthView_World_Spatial_Utility_CProjectedReference_getCoordianteSystemName_EVString_Callback;
					EarthView_World_Spatial_Utility_CProjectedReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback* m_EarthView_World_Spatial_Utility_CProjectedReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback;
					EarthView_World_Spatial_Utility_CProjectedReference_isSameAs_ev_bool_ISpatialReference_Callback* m_EarthView_World_Spatial_Utility_CProjectedReference_isSameAs_ev_bool_ISpatialReference_Callback;
					EarthView_World_Spatial_Utility_CProjectedReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Utility_CProjectedReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
				public:
					CProjectedReferenceProxy(EarthView::World::Core::CNameValuePairList *pList) : CProjectedReference(pList)
					{
						m_EarthView_World_Spatial_Utility_CProjectedReference_setCoordianteSystemName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CProjectedReference_getType_EVSpatialReferenceType_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CProjectedReference_getSRID_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CProjectedReference_clone_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CProjectedReference_getCEllipseSphere_IEllipseSpheriod_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CProjectedReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CProjectedReference_getCoordUnits_void_EVString_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CProjectedReference_getSamiMajor_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CProjectedReference_getInvFlattening_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CProjectedReference_getSphereName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CProjectedReference_getCoordianteSystemName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CProjectedReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CProjectedReference_isSameAs_ev_bool_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CProjectedReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_setCoordianteSystemName_void_EVString(EarthView_World_Spatial_Utility_CProjectedReference_setCoordianteSystemName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CProjectedReference_setCoordianteSystemName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_getType_EVSpatialReferenceType(EarthView_World_Spatial_Utility_CProjectedReference_getType_EVSpatialReferenceType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CProjectedReference_getType_EVSpatialReferenceType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_getSRID_ev_uint32(EarthView_World_Spatial_Utility_CProjectedReference_getSRID_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CProjectedReference_getSRID_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_clone_ISpatialReference(EarthView_World_Spatial_Utility_CProjectedReference_clone_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CProjectedReference_clone_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_getCEllipseSphere_IEllipseSpheriod(EarthView_World_Spatial_Utility_CProjectedReference_getCEllipseSphere_IEllipseSpheriod_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CProjectedReference_getCEllipseSphere_IEllipseSpheriod_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_exportToString_void_EVSpatialReferenceStringType_EVString(EarthView_World_Spatial_Utility_CProjectedReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CProjectedReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_getCoordUnits_void_EVString_ev_real64(EarthView_World_Spatial_Utility_CProjectedReference_getCoordUnits_void_EVString_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CProjectedReference_getCoordUnits_void_EVString_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_getSamiMajor_ev_real64(EarthView_World_Spatial_Utility_CProjectedReference_getSamiMajor_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CProjectedReference_getSamiMajor_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_getInvFlattening_ev_real64(EarthView_World_Spatial_Utility_CProjectedReference_getInvFlattening_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CProjectedReference_getInvFlattening_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_getSphereName_EVString(EarthView_World_Spatial_Utility_CProjectedReference_getSphereName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CProjectedReference_getSphereName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_getCoordianteSystemName_EVString(EarthView_World_Spatial_Utility_CProjectedReference_getCoordianteSystemName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CProjectedReference_getCoordianteSystemName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_toStream_void_EVSpatialReferenceStringType_CDataStream(EarthView_World_Spatial_Utility_CProjectedReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CProjectedReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_isSameAs_ev_bool_ISpatialReference(EarthView_World_Spatial_Utility_CProjectedReference_isSameAs_ev_bool_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CProjectedReference_isSameAs_ev_bool_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_Utility_CProjectedReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CProjectedReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					virtual void getCoordUnits(_out EVString& pszunitsName, _out ev_real64& dfvalue) const
					{
						if(m_EarthView_World_Spatial_Utility_CProjectedReference_getCoordUnits_void_EVString_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							char* pszunitsName_Char = pszunitsName.makeBuffer();
							m_EarthView_World_Spatial_Utility_CProjectedReference_getCoordUnits_void_EVString_ev_real64_Callback(pszunitsName_Char, dfvalue);
							pszunitsName = pszunitsName_Char;
							if(pszunitsName_Char != NULL){ delete[] pszunitsName_Char;pszunitsName_Char = NULL;}
						}
						else
							return this->CProjectedReference::getCoordUnits(pszunitsName, dfvalue);
					}
					virtual void exportToString(_in EarthView::World::Spatial::Utility::EVSpatialReferenceStringType type, _out EVString& pszstrText) const
					{
						if(m_EarthView_World_Spatial_Utility_CProjectedReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* pszstrText_Char = pszstrText.makeBuffer();
							m_EarthView_World_Spatial_Utility_CProjectedReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback((int)type, pszstrText_Char);
							pszstrText = pszstrText_Char;
							if(pszstrText_Char != NULL){ delete[] pszstrText_Char;pszstrText_Char = NULL;}
						}
						else
							return this->CProjectedReference::exportToString(type, pszstrText);
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* clone() const
					{
						if(m_EarthView_World_Spatial_Utility_CProjectedReference_clone_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Utility_CProjectedReference_clone_ISpatialReference_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CProjectedReference::clone();
					}
					virtual EarthView::World::Spatial::Geometry::EVSpatialReferenceType getType() const
					{
						if(m_EarthView_World_Spatial_Utility_CProjectedReference_getType_EVSpatialReferenceType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVSpatialReferenceType returnValue = (EarthView::World::Spatial::Geometry::EVSpatialReferenceType)m_EarthView_World_Spatial_Utility_CProjectedReference_getType_EVSpatialReferenceType_Callback();
							return returnValue;
						}
						else
							return this->CProjectedReference::getType();
					}
					virtual const EarthView::World::Spatial::Geometry::IEllipseSpheriod* getCEllipseSphere() const
					{
						if(m_EarthView_World_Spatial_Utility_CProjectedReference_getCEllipseSphere_IEllipseSpheriod_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEllipseSpheriod* returnValue = m_EarthView_World_Spatial_Utility_CProjectedReference_getCEllipseSphere_IEllipseSpheriod_Callback();
							return returnValue;
						}
						else
							return this->CProjectedReference::getCEllipseSphere();
					}
					virtual const ev_real64 getSamiMajor() const
					{
						if(m_EarthView_World_Spatial_Utility_CProjectedReference_getSamiMajor_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							const ev_real64 returnValue = m_EarthView_World_Spatial_Utility_CProjectedReference_getSamiMajor_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CProjectedReference::getSamiMajor();
					}
					virtual const ev_real64 getInvFlattening() const
					{
						if(m_EarthView_World_Spatial_Utility_CProjectedReference_getInvFlattening_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							const ev_real64 returnValue = m_EarthView_World_Spatial_Utility_CProjectedReference_getInvFlattening_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CProjectedReference::getInvFlattening();
					}
					virtual EVString getSphereName() const
					{
						if(m_EarthView_World_Spatial_Utility_CProjectedReference_getSphereName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Utility_CProjectedReference_getSphereName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CProjectedReference::getSphereName();
					}
					virtual ev_uint32 getSRID() const
					{
						if(m_EarthView_World_Spatial_Utility_CProjectedReference_getSRID_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Utility_CProjectedReference_getSRID_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CProjectedReference::getSRID();
					}
					virtual EVString getCoordianteSystemName() const
					{
						if(m_EarthView_World_Spatial_Utility_CProjectedReference_getCoordianteSystemName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Utility_CProjectedReference_getCoordianteSystemName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CProjectedReference::getCoordianteSystemName();
					}
					virtual void setCoordianteSystemName(_in EVString& name) const
					{
						if(m_EarthView_World_Spatial_Utility_CProjectedReference_setCoordianteSystemName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Utility_CProjectedReference_setCoordianteSystemName_void_EVString_Callback(name_Char);
						}
						else
							return this->CProjectedReference::setCoordianteSystemName(name);
					}
					virtual const void toStream(_in EarthView::World::Spatial::Utility::EVSpatialReferenceStringType type, _inout EarthView::World::Core::CDataStream& objStream) const
					{
						if(m_EarthView_World_Spatial_Utility_CProjectedReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Utility_CProjectedReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback((int)type, &objStream);
						}
						else
							return this->CProjectedReference::toStream(type, objStream);
					}
					virtual ev_bool isSameAs(_in const EarthView::World::Spatial::Geometry::ISpatialReference* pref) const
					{
						if(m_EarthView_World_Spatial_Utility_CProjectedReference_isSameAs_ev_bool_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Utility_CProjectedReference_isSameAs_ev_bool_ISpatialReference_Callback(pref);
							return returnValue;
						}
						else
							return this->CProjectedReference::isSameAs(pref);
					}
					virtual void getInOutputRect(_in ev_bool isLatLong, _inout ev_real64& dfLeft, _inout ev_real64& dfTop, _inout ev_real64& dfRight, _inout ev_real64& dfDown) const
					{
						if(m_EarthView_World_Spatial_Utility_CProjectedReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Utility_CProjectedReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback(isLatLong, dfLeft, dfTop, dfRight, dfDown);
						}
						else
							return this->CProjectedReference::getInOutputRect(isLatLong, dfLeft, dfTop, dfRight, dfDown);
					}
				};
				REGISTER_FACTORY_CLASS(CProjectedReferenceProxy);
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Utility::CProjParameter*  _stdcall EarthView_World_Spatial_Utility_CProjectedReference_getProjParameter_CProjParameter(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjectedReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectedReference*) pObjectXXXX;
					const EarthView::World::Spatial::Utility::CProjParameter* objXXXX = ptrNativeObject->getProjParameter();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectedReference_getCoordUnits_void_EVString_ev_real64(void *pObjectXXXX, _out char*& pszunitsName, _out ev_real64& dfvalue )
				{
					EarthView::World::Core::ev_string pszunitsName1 = pszunitsName;
					const EarthView::World::Spatial::Utility::CProjectedReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectedReference*) pObjectXXXX;
					if (dynamic_cast<CProjectedReferenceProxy*>((EarthView::World::Spatial::Utility::CProjectedReference*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Utility::CProjectedReference::getCoordUnits(pszunitsName1, dfvalue);
					else
						ptrNativeObject->getCoordUnits(pszunitsName1, dfvalue);
					pszunitsName=pszunitsName1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CProjectedReference_getCoordUnits_void_EVString_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Utility_CProjectedReference_getCoordUnits_void_EVString_ev_real64_Callback* pCallback )
				{
					CProjectedReferenceProxy* ptr = dynamic_cast<CProjectedReferenceProxy*>((EarthView::World::Spatial::Utility::CProjectedReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_getCoordUnits_void_EVString_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectedReference_getCoordUnits_void_EVString_ev_real64_NoVirtual(void *pObjectXXXX, _out char*& pszunitsName, _out ev_real64& dfvalue )
				{
					EarthView::World::Core::ev_string pszunitsName1 = pszunitsName;
					const EarthView::World::Spatial::Utility::CProjectedReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectedReference*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Utility::CProjectedReference::getCoordUnits(pszunitsName1, dfvalue);
					pszunitsName=pszunitsName1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectedReference_exportToString_void_EVSpatialReferenceStringType_EVString(void *pObjectXXXX, _in int type, _out char*& pszstrText )
				{
					EarthView::World::Core::ev_string pszstrText1 = pszstrText;
					const EarthView::World::Spatial::Utility::CProjectedReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectedReference*) pObjectXXXX;
					if (dynamic_cast<CProjectedReferenceProxy*>((EarthView::World::Spatial::Utility::CProjectedReference*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Utility::CProjectedReference::exportToString((EarthView::World::Spatial::Utility::EVSpatialReferenceStringType)type, pszstrText1);
					else
						ptrNativeObject->exportToString((EarthView::World::Spatial::Utility::EVSpatialReferenceStringType)type, pszstrText1);
					pszstrText=pszstrText1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CProjectedReference_exportToString_void_EVSpatialReferenceStringType_EVString( void *pObjectXXXX, EarthView_World_Spatial_Utility_CProjectedReference_exportToString_void_EVSpatialReferenceStringType_EVString_Callback* pCallback )
				{
					CProjectedReferenceProxy* ptr = dynamic_cast<CProjectedReferenceProxy*>((EarthView::World::Spatial::Utility::CProjectedReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_exportToString_void_EVSpatialReferenceStringType_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectedReference_exportToString_void_EVSpatialReferenceStringType_EVString_NoVirtual(void *pObjectXXXX, _in int type, _out char*& pszstrText )
				{
					EarthView::World::Core::ev_string pszstrText1 = pszstrText;
					const EarthView::World::Spatial::Utility::CProjectedReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectedReference*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Utility::CProjectedReference::exportToString((EarthView::World::Spatial::Utility::EVSpatialReferenceStringType)type, pszstrText1);
					pszstrText=pszstrText1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Utility_CProjectedReference_clone_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjectedReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectedReference*) pObjectXXXX;
					if (dynamic_cast<CProjectedReferenceProxy*>((EarthView::World::Spatial::Utility::CProjectedReference*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CProjectedReference::clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CProjectedReference_clone_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Utility_CProjectedReference_clone_ISpatialReference_Callback* pCallback )
				{
					CProjectedReferenceProxy* ptr = dynamic_cast<CProjectedReferenceProxy*>((EarthView::World::Spatial::Utility::CProjectedReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_clone_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Utility_CProjectedReference_clone_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjectedReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectedReference*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CProjectedReference::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Utility_CProjectedReference_getType_EVSpatialReferenceType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjectedReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectedReference*) pObjectXXXX;
					if (dynamic_cast<CProjectedReferenceProxy*>((EarthView::World::Spatial::Utility::CProjectedReference*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::EVSpatialReferenceType objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CProjectedReference::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::EVSpatialReferenceType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CProjectedReference_getType_EVSpatialReferenceType( void *pObjectXXXX, EarthView_World_Spatial_Utility_CProjectedReference_getType_EVSpatialReferenceType_Callback* pCallback )
				{
					CProjectedReferenceProxy* ptr = dynamic_cast<CProjectedReferenceProxy*>((EarthView::World::Spatial::Utility::CProjectedReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_getType_EVSpatialReferenceType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Utility_CProjectedReference_getType_EVSpatialReferenceType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjectedReference* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectedReference*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::EVSpatialReferenceType objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CProjectedReference::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CProjectedReference_setCoordianteSystemName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Utility_CProjectedReference_setCoordianteSystemName_void_EVString_Callback* pCallback )
				{
					CProjectedReferenceProxy* ptr = dynamic_cast<CProjectedReferenceProxy*>((EarthView::World::Spatial::Utility::CProjectedReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_setCoordianteSystemName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CProjectedReference_getSRID_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Utility_CProjectedReference_getSRID_ev_uint32_Callback* pCallback )
				{
					CProjectedReferenceProxy* ptr = dynamic_cast<CProjectedReferenceProxy*>((EarthView::World::Spatial::Utility::CProjectedReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_getSRID_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CProjectedReference_getCEllipseSphere_IEllipseSpheriod( void *pObjectXXXX, EarthView_World_Spatial_Utility_CProjectedReference_getCEllipseSphere_IEllipseSpheriod_Callback* pCallback )
				{
					CProjectedReferenceProxy* ptr = dynamic_cast<CProjectedReferenceProxy*>((EarthView::World::Spatial::Utility::CProjectedReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_getCEllipseSphere_IEllipseSpheriod(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CProjectedReference_getSamiMajor_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Utility_CProjectedReference_getSamiMajor_ev_real64_Callback* pCallback )
				{
					CProjectedReferenceProxy* ptr = dynamic_cast<CProjectedReferenceProxy*>((EarthView::World::Spatial::Utility::CProjectedReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_getSamiMajor_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CProjectedReference_getInvFlattening_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Utility_CProjectedReference_getInvFlattening_ev_real64_Callback* pCallback )
				{
					CProjectedReferenceProxy* ptr = dynamic_cast<CProjectedReferenceProxy*>((EarthView::World::Spatial::Utility::CProjectedReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_getInvFlattening_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CProjectedReference_getSphereName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Utility_CProjectedReference_getSphereName_EVString_Callback* pCallback )
				{
					CProjectedReferenceProxy* ptr = dynamic_cast<CProjectedReferenceProxy*>((EarthView::World::Spatial::Utility::CProjectedReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_getSphereName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CProjectedReference_getCoordianteSystemName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Utility_CProjectedReference_getCoordianteSystemName_EVString_Callback* pCallback )
				{
					CProjectedReferenceProxy* ptr = dynamic_cast<CProjectedReferenceProxy*>((EarthView::World::Spatial::Utility::CProjectedReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_getCoordianteSystemName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CProjectedReference_toStream_void_EVSpatialReferenceStringType_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Utility_CProjectedReference_toStream_void_EVSpatialReferenceStringType_CDataStream_Callback* pCallback )
				{
					CProjectedReferenceProxy* ptr = dynamic_cast<CProjectedReferenceProxy*>((EarthView::World::Spatial::Utility::CProjectedReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_toStream_void_EVSpatialReferenceStringType_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CProjectedReference_isSameAs_ev_bool_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Utility_CProjectedReference_isSameAs_ev_bool_ISpatialReference_Callback* pCallback )
				{
					CProjectedReferenceProxy* ptr = dynamic_cast<CProjectedReferenceProxy*>((EarthView::World::Spatial::Utility::CProjectedReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_isSameAs_ev_bool_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CProjectedReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Utility_CProjectedReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CProjectedReferenceProxy* ptr = dynamic_cast<CProjectedReferenceProxy*>((EarthView::World::Spatial::Utility::CProjectedReference*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CProjectedReference_getInOutputRect_void_ev_bool_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
			}
		}
	}
}
