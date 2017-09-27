/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/featureuserdata.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
			namespace Kml
			{
			}
		}
		namespace Spatial3D
		{
			typedef EarthView::World::Graphic::CMovableObject::CUserData*  ( _stdcall EarthView_World_Spatial3D_CFeatureUserData_clone_CUserData_Callback)();
			class CFeatureUserDataProxy : public EarthView::World::Spatial3D::CFeatureUserData
			{
			private:
				EarthView_World_Spatial3D_CFeatureUserData_clone_CUserData_Callback* m_EarthView_World_Spatial3D_CFeatureUserData_clone_CUserData_Callback;
			public:
				CFeatureUserDataProxy(EarthView::World::Core::CNameValuePairList *pList) : CFeatureUserData(pList)
				{
					m_EarthView_World_Spatial3D_CFeatureUserData_clone_CUserData_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3D_CFeatureUserData_clone_CUserData(EarthView_World_Spatial3D_CFeatureUserData_clone_CUserData_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CFeatureUserData_clone_CUserData_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CMovableObject::CUserData* clone()
				{
					if(m_EarthView_World_Spatial3D_CFeatureUserData_clone_CUserData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CUserData* returnValue = m_EarthView_World_Spatial3D_CFeatureUserData_clone_CUserData_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CFeatureUserData::clone();
				}
			};
			REGISTER_FACTORY_CLASS(CFeatureUserDataProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject::CUserData*  _stdcall EarthView_World_Spatial3D_CFeatureUserData_clone_CUserData(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFeatureUserData* ptrNativeObject = (EarthView::World::Spatial3D::CFeatureUserData*) pObjectXXXX;
				if (dynamic_cast<CFeatureUserDataProxy*>((EarthView::World::Spatial3D::CFeatureUserData*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CMovableObject::CUserData* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CFeatureUserData::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject::CUserData* objXXXX = ptrNativeObject->clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CFeatureUserData_clone_CUserData( void *pObjectXXXX, EarthView_World_Spatial3D_CFeatureUserData_clone_CUserData_Callback* pCallback )
			{
				CFeatureUserDataProxy* ptr = dynamic_cast<CFeatureUserDataProxy*>((EarthView::World::Spatial3D::CFeatureUserData*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CFeatureUserData_clone_CUserData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject::CUserData*  _stdcall EarthView_World_Spatial3D_CFeatureUserData_clone_CUserData_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFeatureUserData* ptrNativeObject = (EarthView::World::Spatial3D::CFeatureUserData*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject::CUserData* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CFeatureUserData::clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::IGlobeLayer*  _stdcall Get_EarthView_World_Spatial3D_CFeatureUserData_OwnerLayer( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFeatureUserData* ptrNativeObject = (EarthView::World::Spatial3D::CFeatureUserData*) pObjectXXXX;
				EarthView::World::Spatial3D::Atlas::IGlobeLayer* objXXXX = ptrNativeObject->OwnerLayer;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFeatureUserData_OwnerLayer( void *pObjectXXXX, EarthView::World::Spatial3D::Atlas::IGlobeLayer*  value )
			{
				((EarthView::World::Spatial3D::CFeatureUserData*)pObjectXXXX)->OwnerLayer = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CFeatureUserData_IDs( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CFeatureUserData* ptrNativeObject = (EarthView::World::Spatial3D::CFeatureUserData*) pObjectXXXX;
				EarthView::World::Core::IntVector &objXXXX = ptrNativeObject->IDs;
				EarthView::World::Core::IntVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CFeatureUserData_IDs( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CFeatureUserData*)pObjectXXXX)->IDs = *(EarthView::World::Core::IntVector*)value;
			}
			typedef EarthView::World::Graphic::CMovableObject::CUserData*  ( _stdcall EarthView_World_Spatial3D_CKmlFeatureUserData_clone_CUserData_Callback)();
			class CKmlFeatureUserDataProxy : public EarthView::World::Spatial3D::CKmlFeatureUserData
			{
			private:
				EarthView_World_Spatial3D_CKmlFeatureUserData_clone_CUserData_Callback* m_EarthView_World_Spatial3D_CKmlFeatureUserData_clone_CUserData_Callback;
			public:
				CKmlFeatureUserDataProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlFeatureUserData(pList)
				{
					m_EarthView_World_Spatial3D_CKmlFeatureUserData_clone_CUserData_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3D_CKmlFeatureUserData_clone_CUserData(EarthView_World_Spatial3D_CKmlFeatureUserData_clone_CUserData_Callback* pCallback)
				{
					m_EarthView_World_Spatial3D_CKmlFeatureUserData_clone_CUserData_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CMovableObject::CUserData* clone()
				{
					if(m_EarthView_World_Spatial3D_CKmlFeatureUserData_clone_CUserData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CUserData* returnValue = m_EarthView_World_Spatial3D_CKmlFeatureUserData_clone_CUserData_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CKmlFeatureUserData::clone();
				}
			};
			REGISTER_FACTORY_CLASS(CKmlFeatureUserDataProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject::CUserData*  _stdcall EarthView_World_Spatial3D_CKmlFeatureUserData_clone_CUserData(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CKmlFeatureUserData* ptrNativeObject = (EarthView::World::Spatial3D::CKmlFeatureUserData*) pObjectXXXX;
				if (dynamic_cast<CKmlFeatureUserDataProxy*>((EarthView::World::Spatial3D::CKmlFeatureUserData*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CMovableObject::CUserData* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CKmlFeatureUserData::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject::CUserData* objXXXX = ptrNativeObject->clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_CKmlFeatureUserData_clone_CUserData( void *pObjectXXXX, EarthView_World_Spatial3D_CKmlFeatureUserData_clone_CUserData_Callback* pCallback )
			{
				CKmlFeatureUserDataProxy* ptr = dynamic_cast<CKmlFeatureUserDataProxy*>((EarthView::World::Spatial3D::CKmlFeatureUserData*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3D_CKmlFeatureUserData_clone_CUserData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject::CUserData*  _stdcall EarthView_World_Spatial3D_CKmlFeatureUserData_clone_CUserData_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CKmlFeatureUserData* ptrNativeObject = (EarthView::World::Spatial3D::CKmlFeatureUserData*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject::CUserData* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::CKmlFeatureUserData::clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CGeoObjectExtension*  _stdcall Get_EarthView_World_Spatial3D_CKmlFeatureUserData_pGeoObjectExtension( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CKmlFeatureUserData* ptrNativeObject = (EarthView::World::Spatial3D::CKmlFeatureUserData*) pObjectXXXX;
				EarthView::World::Spatial::Kml::CGeoObjectExtension* objXXXX = ptrNativeObject->pGeoObjectExtension;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CKmlFeatureUserData_pGeoObjectExtension( void *pObjectXXXX, EarthView::World::Spatial::Kml::CGeoObjectExtension*  value )
			{
				((EarthView::World::Spatial3D::CKmlFeatureUserData*)pObjectXXXX)->pGeoObjectExtension = value;
			}
		}
	}
}
