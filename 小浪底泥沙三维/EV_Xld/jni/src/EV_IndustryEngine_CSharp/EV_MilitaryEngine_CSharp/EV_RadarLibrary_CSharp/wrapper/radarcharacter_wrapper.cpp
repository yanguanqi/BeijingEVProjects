/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/militaryengine/radarlibrary/radarcharacter.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace MilitaryEngine
		{
			namespace RadarLibrary
			{
				typedef void*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoint_clone_CSectionPoint_Callback)();
				class CSectionPointProxy : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint
				{
				private:
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoint_clone_CSectionPoint_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoint_clone_CSectionPoint_Callback;
				public:
					CSectionPointProxy(EarthView::World::Core::CNameValuePairList *pList) : CSectionPoint(pList)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoint_clone_CSectionPoint_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoint_clone_CSectionPoint(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoint_clone_CSectionPoint_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoint_clone_CSectionPoint_Callback = pCallback;
					}
					virtual EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint clone()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoint_clone_CSectionPoint_Callback != NULL && this->isCustomExtend())
						{
							EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint returnValue = *(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint*)m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoint_clone_CSectionPoint_Callback();
							return returnValue;
						}
						else
							return this->CSectionPoint::clone();
					}
				};
				REGISTER_FACTORY_CLASS(CSectionPointProxy);
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoint_getPitchAngle_Real(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getPitchAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoint_getPitchPoint_CVector3(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getPitchPoint();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoint_setPitchAngle_void_Real(void *pObjectXXXX, _in const Real& pitchAngle )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint*) pObjectXXXX;
					ptrNativeObject->setPitchAngle(pitchAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoint_setPitchPoint_void_CVector3(void *pObjectXXXX, _in const void* pitchPoint )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint*) pObjectXXXX;
					ptrNativeObject->setPitchPoint(*(EarthView::World::Spatial::Math::CVector3*)pitchPoint);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoint_clone_CSectionPoint(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint*) pObjectXXXX;
					if (dynamic_cast<CSectionPointProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint*)ptrNativeObject) != NULL)
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint::clone();
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint *pXXXX = new EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint objXXXX = ptrNativeObject->clone();
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint *pXXXX = new EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoint_clone_CSectionPoint( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoint_clone_CSectionPoint_Callback* pCallback )
				{
					CSectionPointProxy* ptr = dynamic_cast<CSectionPointProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoint_clone_CSectionPoint(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoint_clone_CSectionPoint_NoVirtual(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint::clone();
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint *pXXXX = new EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				typedef EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_clone_CSectionPoints_Callback)();
				class CSectionPointsProxy : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints
				{
				private:
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_clone_CSectionPoints_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_clone_CSectionPoints_Callback;
				public:
					CSectionPointsProxy(EarthView::World::Core::CNameValuePairList *pList) : CSectionPoints(pList)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_clone_CSectionPoints_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_clone_CSectionPoints(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_clone_CSectionPoints_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_clone_CSectionPoints_Callback = pCallback;
					}
					virtual EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* clone()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_clone_CSectionPoints_Callback != NULL && this->isCustomExtend())
						{
							EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_clone_CSectionPoints_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CSectionPoints::clone();
					}
				};
				REGISTER_FACTORY_CLASS(CSectionPointsProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_push_back_void_CSectionPoint(void *pObjectXXXX, _in const void* t )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_pop_back_void(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_front_CSectionPoint(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint& objXXXX = ptrNativeObject->front();
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_back_CSectionPoint(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint& objXXXX = ptrNativeObject->back();
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_insert_void_ev_uint32_CSectionPoint(void *pObjectXXXX, _in ev_uint32 pos, _in const void* t )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_OperatorIndex_CSectionPoint_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints& objYYYY = *(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint& objXXXX = objYYYY[n];
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_at_CSectionPoint_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint& objXXXX = ptrNativeObject->at(n);
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_clear_void(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_clone_CSectionPoints(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjectXXXX;
					if (dynamic_cast<CSectionPointsProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*)ptrNativeObject) != NULL)
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints::clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* objXXXX = ptrNativeObject->clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_clone_CSectionPoints( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_clone_CSectionPoints_Callback* pCallback )
				{
					CSectionPointsProxy* ptr = dynamic_cast<CSectionPointsProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_clone_CSectionPoints(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CSectionPoints_clone_CSectionPoints_NoVirtual(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				typedef EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarSection_clone_CRadarSection_Callback)();
				class CRadarSectionProxy : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection
				{
				private:
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarSection_clone_CRadarSection_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarSection_clone_CRadarSection_Callback;
				public:
					CRadarSectionProxy(EarthView::World::Core::CNameValuePairList *pList) : CRadarSection(pList)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarSection_clone_CRadarSection_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarSection_clone_CRadarSection(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarSection_clone_CRadarSection_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarSection_clone_CRadarSection_Callback = pCallback;
					}
					virtual EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* clone()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarSection_clone_CRadarSection_Callback != NULL && this->isCustomExtend())
						{
							EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarSection_clone_CRadarSection_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CRadarSection::clone();
					}
				};
				REGISTER_FACTORY_CLASS(CRadarSectionProxy);
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarSection_getSectionPoints_CSectionPoints(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* objXXXX = ptrNativeObject->getSectionPoints();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarSection_setSectionPoints_void_CSectionPoints(void *pObjectXXXX, _in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* sectionPoints )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection*) pObjectXXXX;
					ptrNativeObject->setSectionPoints(sectionPoints);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CLineString*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarSection_converToLineString_CLineString(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CLineString* objXXXX = ptrNativeObject->converToLineString();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarSection_createSectionXmlElement_CXmlElement_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->createSectionXmlElement(name1);
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarSection_parseSectionXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* sectionElement )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection*) pObjectXXXX;
					ptrNativeObject->parseSectionXmlElement(*(EarthView::World::Core::CXmlElement*)sectionElement);
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarSection_clone_CRadarSection(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection*) pObjectXXXX;
					if (dynamic_cast<CRadarSectionProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection*)ptrNativeObject) != NULL)
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection::clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* objXXXX = ptrNativeObject->clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarSection_clone_CRadarSection( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarSection_clone_CRadarSection_Callback* pCallback )
				{
					CRadarSectionProxy* ptr = dynamic_cast<CRadarSectionProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarSection_clone_CRadarSection(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarSection_clone_CRadarSection_NoVirtual(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				typedef void*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleData_clone_CShadeAngleData_Callback)();
				class CShadeAngleDataProxy : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData
				{
				private:
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleData_clone_CShadeAngleData_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleData_clone_CShadeAngleData_Callback;
				public:
					CShadeAngleDataProxy(EarthView::World::Core::CNameValuePairList *pList) : CShadeAngleData(pList)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleData_clone_CShadeAngleData_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleData_clone_CShadeAngleData(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleData_clone_CShadeAngleData_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleData_clone_CShadeAngleData_Callback = pCallback;
					}
					virtual EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData clone()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleData_clone_CShadeAngleData_Callback != NULL && this->isCustomExtend())
						{
							EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData returnValue = *(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData*)m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleData_clone_CShadeAngleData_Callback();
							return returnValue;
						}
						else
							return this->CShadeAngleData::clone();
					}
				};
				REGISTER_FACTORY_CLASS(CShadeAngleDataProxy);
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleData_getHorizontalAngle_Real(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getHorizontalAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleData_getShadeAngle_Real(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getShadeAngle();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleData_setHorizontalAngle_void_Real(void *pObjectXXXX, _in const Real& horizontalAngle )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData*) pObjectXXXX;
					ptrNativeObject->setHorizontalAngle(horizontalAngle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleData_setShadeAngle_void_Real(void *pObjectXXXX, _in const Real& shadeAngle )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData*) pObjectXXXX;
					ptrNativeObject->setShadeAngle(shadeAngle);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleData_clone_CShadeAngleData(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData*) pObjectXXXX;
					if (dynamic_cast<CShadeAngleDataProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData*)ptrNativeObject) != NULL)
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData::clone();
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData *pXXXX = new EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData objXXXX = ptrNativeObject->clone();
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData *pXXXX = new EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleData_clone_CShadeAngleData( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleData_clone_CShadeAngleData_Callback* pCallback )
				{
					CShadeAngleDataProxy* ptr = dynamic_cast<CShadeAngleDataProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleData_clone_CShadeAngleData(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleData_clone_CShadeAngleData_NoVirtual(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData::clone();
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData *pXXXX = new EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				typedef EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_clone_CShadeAngleDatas_Callback)();
				class CShadeAngleDatasProxy : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas
				{
				private:
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_clone_CShadeAngleDatas_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_clone_CShadeAngleDatas_Callback;
				public:
					CShadeAngleDatasProxy(EarthView::World::Core::CNameValuePairList *pList) : CShadeAngleDatas(pList)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_clone_CShadeAngleDatas_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_clone_CShadeAngleDatas(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_clone_CShadeAngleDatas_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_clone_CShadeAngleDatas_Callback = pCallback;
					}
					virtual EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* clone()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_clone_CShadeAngleDatas_Callback != NULL && this->isCustomExtend())
						{
							EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_clone_CShadeAngleDatas_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CShadeAngleDatas::clone();
					}
				};
				REGISTER_FACTORY_CLASS(CShadeAngleDatasProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_push_back_void_CShadeAngleData(void *pObjectXXXX, _in const void* t )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_pop_back_void(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_front_CShadeAngleData(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData& objXXXX = ptrNativeObject->front();
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_back_CShadeAngleData(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData& objXXXX = ptrNativeObject->back();
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_insert_void_ev_uint32_CShadeAngleData(void *pObjectXXXX, _in ev_uint32 pos, _in const void* t )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_OperatorIndex_CShadeAngleData_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas& objYYYY = *(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData& objXXXX = objYYYY[n];
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_at_CShadeAngleData_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData& objXXXX = ptrNativeObject->at(n);
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_createShadeAngleXmlElement_CXmlElement_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->createShadeAngleXmlElement(name1);
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_parseShadeAngleXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* shadeAngleElement )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjectXXXX;
					ptrNativeObject->parseShadeAngleXmlElement(*(EarthView::World::Core::CXmlElement*)shadeAngleElement);
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_clear_void(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_clone_CShadeAngleDatas(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjectXXXX;
					if (dynamic_cast<CShadeAngleDatasProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*)ptrNativeObject) != NULL)
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas::clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* objXXXX = ptrNativeObject->clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_clone_CShadeAngleDatas( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_clone_CShadeAngleDatas_Callback* pCallback )
				{
					CShadeAngleDatasProxy* ptr = dynamic_cast<CShadeAngleDatasProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_clone_CShadeAngleDatas(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CShadeAngleDatas_clone_CShadeAngleDatas_NoVirtual(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				typedef EarthView::World::Spatial::Geometry::CLineString*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getSectionCurve_CLineString_Callback)();
				typedef EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_clone_CRadarCharacter_Callback)();
				class CRadarCharacterProxy : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter
				{
				private:
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getSectionCurve_CLineString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getSectionCurve_CLineString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_clone_CRadarCharacter_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_clone_CRadarCharacter_Callback;
				public:
					CRadarCharacterProxy(EarthView::World::Core::CNameValuePairList *pList) : CRadarCharacter(pList)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getSectionCurve_CLineString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_clone_CRadarCharacter_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getSectionCurve_CLineString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getSectionCurve_CLineString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getSectionCurve_CLineString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_clone_CRadarCharacter(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_clone_CRadarCharacter_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_clone_CRadarCharacter_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Geometry::CLineString* getSectionCurve()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getSectionCurve_CLineString_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CLineString* returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getSectionCurve_CLineString_Callback();
							return returnValue;
						}
						else
							return this->CRadarCharacter::getSectionCurve();
					}
					virtual EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* clone()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_clone_CRadarCharacter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_clone_CRadarCharacter_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CRadarCharacter::clone();
					}
				};
				REGISTER_FACTORY_CLASS(CRadarCharacterProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_setScanSpeed_void_float(void *pObjectXXXX, _in const float& value )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					ptrNativeObject->setScanSpeed(value);
				}
				extern "C" EV_DLL_EXPORT  float  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getScanSpeed_float(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					float objXXXX = ptrNativeObject->getScanSpeed();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_setHorizontalAngleSpan_void_CDegree(void *pObjectXXXX, _in const void* scannerHorizontalSpan )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					ptrNativeObject->setHorizontalAngleSpan(*(EarthView::World::Spatial::Math::CDegree*)scannerHorizontalSpan);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getHorizontalAngleSpan_CDegree(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->getHorizontalAngleSpan();
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getHorizontalNum_ev_int32(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getHorizontalNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_setHorizontalAngleDelta_void_CDegree(void *pObjectXXXX, _in const void* value )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					ptrNativeObject->setHorizontalAngleDelta(*(EarthView::World::Spatial::Math::CDegree*)value);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getHorizontalAngleDelta_CDegree(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->getHorizontalAngleDelta();
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_setInterferedDistance_void_float(void *pObjectXXXX, _in const float& interferedDistance )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					ptrNativeObject->setInterferedDistance(interferedDistance);
				}
				extern "C" EV_DLL_EXPORT  float  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getInterferedDistance_float(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					float objXXXX = ptrNativeObject->getInterferedDistance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  float  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getHeight_float(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					float objXXXX = ptrNativeObject->getHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CLineString*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getSectionCurve_CLineString(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					if (dynamic_cast<CRadarCharacterProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::CLineString* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter::getSectionCurve();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CLineString* objXXXX = ptrNativeObject->getSectionCurve();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getSectionCurve_CLineString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getSectionCurve_CLineString_Callback* pCallback )
				{
					CRadarCharacterProxy* ptr = dynamic_cast<CRadarCharacterProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getSectionCurve_CLineString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CLineString*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getSectionCurve_CLineString_NoVirtual(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CLineString* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter::getSectionCurve();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_setEnvelopSolidColor_void_ev_uint8_ev_uint8_ev_uint8_ev_uint8(void *pObjectXXXX, _in const ev_uint8& red, _in const ev_uint8& green, _in const ev_uint8& blue, _in const ev_uint8& alpha )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					ptrNativeObject->setEnvelopSolidColor(red, green, blue, alpha);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_setScannerSolidColor_void_ev_uint8_ev_uint8_ev_uint8_ev_uint8(void *pObjectXXXX, _in const ev_uint8& red, _in const ev_uint8& green, _in const ev_uint8& blue, _in const ev_uint8& alpha )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					ptrNativeObject->setScannerSolidColor(red, green, blue, alpha);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getScannerFrameColor_void_ev_uint8_ev_uint8_ev_uint8_ev_uint8(void *pObjectXXXX, _inout ev_uint8& red, _inout ev_uint8& green, _inout ev_uint8& blue, _inout ev_uint8& alpha )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					ptrNativeObject->getScannerFrameColor(red, green, blue, alpha);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_setScannerFrameColor_void_ev_uint8_ev_uint8_ev_uint8_ev_uint8(void *pObjectXXXX, _in const ev_uint8& red, _in const ev_uint8& green, _in const ev_uint8& blue, _in const ev_uint8& alpha )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					ptrNativeObject->setScannerFrameColor(red, green, blue, alpha);
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getRadarSection_CRadarSection(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* objXXXX = ptrNativeObject->getRadarSection();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getEnvelopSolidColor_void_ev_uint8_ev_uint8_ev_uint8_ev_uint8(void *pObjectXXXX, _inout ev_uint8& red, _inout ev_uint8& green, _inout ev_uint8& blue, _inout ev_uint8& alpha )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					ptrNativeObject->getEnvelopSolidColor(red, green, blue, alpha);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_setEnvelopFrameColor_void_ev_uint8_ev_uint8_ev_uint8_ev_uint8(void *pObjectXXXX, _in const ev_uint8& red, _in const ev_uint8& green, _in const ev_uint8& blue, _in const ev_uint8& alpha )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					ptrNativeObject->setEnvelopFrameColor(red, green, blue, alpha);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getEnvelopFrameColor_void_ev_uint8_ev_uint8_ev_uint8_ev_uint8(void *pObjectXXXX, _inout ev_uint8& red, _inout ev_uint8& green, _inout ev_uint8& blue, _inout ev_uint8& alpha )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					ptrNativeObject->getEnvelopFrameColor(red, green, blue, alpha);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getScannerSolidColor_void_ev_uint8_ev_uint8_ev_uint8_ev_uint8(void *pObjectXXXX, _inout ev_uint8& red, _inout ev_uint8& green, _inout ev_uint8& blue, _inout ev_uint8& alpha )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					ptrNativeObject->getScannerSolidColor(red, green, blue, alpha);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_setHeight_void_float(void *pObjectXXXX, _in const float& value )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					ptrNativeObject->setHeight(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_setRadarSection_void_CRadarSection(void *pObjectXXXX, _in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* radarSection )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					ptrNativeObject->setRadarSection(radarSection);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getUpVector_CVector3(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getUpVector();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_setUpVector_void_CVector3(void *pObjectXXXX, _in const void* value )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					ptrNativeObject->setUpVector(*(EarthView::World::Spatial::Math::CVector3*)value);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getShadeTypeId_int(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					int objXXXX = ptrNativeObject->getShadeTypeId();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getShadeSplitNum_int(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					int objXXXX = ptrNativeObject->getShadeSplitNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_setShadeTypeId_void_int(void *pObjectXXXX, _in const int& value )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					ptrNativeObject->setShadeTypeId(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_setShadeSplitNum_void_int(void *pObjectXXXX, _in const int& value )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					ptrNativeObject->setShadeSplitNum(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_setShadeAngleDatas_void_CShadeAngleDatas(void *pObjectXXXX, _in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* shadeAngleDatas )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					ptrNativeObject->setShadeAngleDatas(shadeAngleDatas);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_setTerrainShadeState_void_bool(void *pObjectXXXX, _in const bool& value )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					ptrNativeObject->setTerrainShadeState(value);
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getTerrainShadeState_bool(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->getTerrainShadeState();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_getShadeAngleDatas_CShadeAngleDatas(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* objXXXX = ptrNativeObject->getShadeAngleDatas();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_clone_CRadarCharacter(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					if (dynamic_cast<CRadarCharacterProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*)ptrNativeObject) != NULL)
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter::clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* objXXXX = ptrNativeObject->clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_clone_CRadarCharacter( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_clone_CRadarCharacter_Callback* pCallback )
				{
					CRadarCharacterProxy* ptr = dynamic_cast<CRadarCharacterProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_clone_CRadarCharacter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CRadarCharacter_clone_CRadarCharacter_NoVirtual(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
		}
	}
}
