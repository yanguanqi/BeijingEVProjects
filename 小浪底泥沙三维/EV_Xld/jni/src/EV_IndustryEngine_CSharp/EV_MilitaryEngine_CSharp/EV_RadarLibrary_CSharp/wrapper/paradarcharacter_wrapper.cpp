/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/militaryengine/radarlibrary/paradarcharacter.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace MilitaryEngine
		{
			namespace RadarLibrary
			{
				typedef EarthView::World::Spatial::Geometry::CLineString*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getSectionCurve_CLineString_Callback)();
				typedef EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_clone_CRadarCharacter_Callback)();
				class CPARadarCharacterProxy : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter
				{
				private:
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getSectionCurve_CLineString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getSectionCurve_CLineString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_clone_CRadarCharacter_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_clone_CRadarCharacter_Callback;
				public:
					CPARadarCharacterProxy(EarthView::World::Core::CNameValuePairList *pList) : CPARadarCharacter(pList)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getSectionCurve_CLineString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_clone_CRadarCharacter_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getSectionCurve_CLineString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getSectionCurve_CLineString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getSectionCurve_CLineString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_clone_CRadarCharacter(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_clone_CRadarCharacter_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_clone_CRadarCharacter_Callback = pCallback;
					}
					virtual EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* clone()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_clone_CRadarCharacter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_clone_CRadarCharacter_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CPARadarCharacter::clone();
					}
					virtual EarthView::World::Spatial::Geometry::CLineString* getSectionCurve()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getSectionCurve_CLineString_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CLineString* returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getSectionCurve_CLineString_Callback();
							return returnValue;
						}
						else
							return this->CPARadarCharacter::getSectionCurve();
					}
				};
				REGISTER_FACTORY_CLASS(CPARadarCharacterProxy);
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_createRadarSection_CRadarSection_CDegree_ev_int32_ev_real64(_in const void* verticalAngleSpan, _in const ev_int32& verticalNum, _in const ev_real64& overaweDistance )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* objXXXX = EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter::createRadarSection(*(EarthView::World::Spatial::Math::CDegree*)verticalAngleSpan, verticalNum, overaweDistance);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_createRadarSection_CRadarSection_CDegree_CDegree_ev_real64(_in const void* verticalAngleSpan, _in const void* verticalAngleDelta, _in const ev_real64& overaweDistance )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* objXXXX = EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter::createRadarSection(*(EarthView::World::Spatial::Math::CDegree*)verticalAngleSpan, *(EarthView::World::Spatial::Math::CDegree*)verticalAngleDelta, overaweDistance);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getVerticalNum_ev_int32(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getVerticalNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_setVerticalNum_void_ev_int32(void *pObjectXXXX, _in const ev_int32& verticalNum )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter*) pObjectXXXX;
					ptrNativeObject->setVerticalNum(verticalNum);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getVerticalAngleSpan_CDegree(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter*) pObjectXXXX;
					EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->getVerticalAngleSpan();
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_setVerticalAngleSpan_void_CDegree(void *pObjectXXXX, _in const void* value )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter*) pObjectXXXX;
					ptrNativeObject->setVerticalAngleSpan(*(EarthView::World::Spatial::Math::CDegree*)value);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getVerticalAngleDelta_CDegree(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter*) pObjectXXXX;
					EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->getVerticalAngleDelta();
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_setVerticalAngleDelta_void_CDegree(void *pObjectXXXX, _in const void* value )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter*) pObjectXXXX;
					ptrNativeObject->setVerticalAngleDelta(*(EarthView::World::Spatial::Math::CDegree*)value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getOveraweDistance_ev_real64(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getOveraweDistance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_setOveraweDistance_void_ev_real64(void *pObjectXXXX, _in const ev_real64& overaweDistance )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter*) pObjectXXXX;
					ptrNativeObject->setOveraweDistance(overaweDistance);
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_clone_CRadarCharacter(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter*) pObjectXXXX;
					if (dynamic_cast<CPARadarCharacterProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter*)ptrNativeObject) != NULL)
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_clone_CRadarCharacter( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_clone_CRadarCharacter_Callback* pCallback )
				{
					CPARadarCharacterProxy* ptr = dynamic_cast<CPARadarCharacterProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_clone_CRadarCharacter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_clone_CRadarCharacter_NoVirtual(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getSectionCurve_CLineString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getSectionCurve_CLineString_Callback* pCallback )
				{
					CPARadarCharacterProxy* ptr = dynamic_cast<CPARadarCharacterProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CPARadarCharacter_getSectionCurve_CLineString(pCallback);
					}
				}
			}
		}
	}
}
