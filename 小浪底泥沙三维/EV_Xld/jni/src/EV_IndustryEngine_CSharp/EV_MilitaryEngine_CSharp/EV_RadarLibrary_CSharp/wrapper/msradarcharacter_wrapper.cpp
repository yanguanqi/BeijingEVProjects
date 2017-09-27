/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/militaryengine/radarlibrary/msradarcharacter.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace MilitaryEngine
		{
			namespace RadarLibrary
			{
				typedef EarthView::World::Spatial::Geometry::CLineString*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_getSectionCurve_CLineString_Callback)();
				typedef EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*  ( _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_clone_CRadarCharacter_Callback)();
				class CMSRadarCharacterProxy : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter
				{
				private:
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_getSectionCurve_CLineString_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_getSectionCurve_CLineString_Callback;
					EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_clone_CRadarCharacter_Callback* m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_clone_CRadarCharacter_Callback;
				public:
					CMSRadarCharacterProxy(EarthView::World::Core::CNameValuePairList *pList) : CMSRadarCharacter(pList)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_getSectionCurve_CLineString_Callback = NULL;
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_clone_CRadarCharacter_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_getSectionCurve_CLineString(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_getSectionCurve_CLineString_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_getSectionCurve_CLineString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_clone_CRadarCharacter(EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_clone_CRadarCharacter_Callback* pCallback)
					{
						m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_clone_CRadarCharacter_Callback = pCallback;
					}
					virtual EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* clone()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_clone_CRadarCharacter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_clone_CRadarCharacter_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CMSRadarCharacter::clone();
					}
					virtual EarthView::World::Spatial::Geometry::CLineString* getSectionCurve()
					{
						if(m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_getSectionCurve_CLineString_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::CLineString* returnValue = m_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_getSectionCurve_CLineString_Callback();
							return returnValue;
						}
						else
							return this->CMSRadarCharacter::getSectionCurve();
					}
				};
				REGISTER_FACTORY_CLASS(CMSRadarCharacterProxy);
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_getScannerHorizontalAngleSpan_CDegree(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter*) pObjectXXXX;
					EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->getScannerHorizontalAngleSpan();
					EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_setScannerHorizontalAngleSpan_void_CDegree(void *pObjectXXXX, _in const void* degree )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter*) pObjectXXXX;
					ptrNativeObject->setScannerHorizontalAngleSpan(*(EarthView::World::Spatial::Math::CDegree*)degree);
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_clone_CRadarCharacter(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter*) pObjectXXXX;
					if (dynamic_cast<CMSRadarCharacterProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter*)ptrNativeObject) != NULL)
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter::clone();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_clone_CRadarCharacter( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_clone_CRadarCharacter_Callback* pCallback )
				{
					CMSRadarCharacterProxy* ptr = dynamic_cast<CMSRadarCharacterProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_clone_CRadarCharacter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_clone_CRadarCharacter_NoVirtual(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* objXXXX = ptrNativeObject->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_getSectionCurve_CLineString( void *pObjectXXXX, EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_getSectionCurve_CLineString_Callback* pCallback )
				{
					CMSRadarCharacterProxy* ptr = dynamic_cast<CMSRadarCharacterProxy*>((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CMSRadarCharacter_getSectionCurve_CLineString(pCallback);
					}
				}
			}
		}
	}
}
