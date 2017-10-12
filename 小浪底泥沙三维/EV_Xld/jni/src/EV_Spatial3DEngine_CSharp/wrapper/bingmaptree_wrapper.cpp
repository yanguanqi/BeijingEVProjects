/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/bingmaptree.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial3D
		{
			namespace ModelManager
			{
			}
		}
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_Atlas_CBingMapTree_update_void_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* camera);
				class CBingMapTreeProxy : public EarthView::World::Spatial3D::Atlas::CBingMapTree
				{
				private:
					EarthView_World_Spatial3D_Atlas_CBingMapTree_update_void_CCamera_Callback* m_EarthView_World_Spatial3D_Atlas_CBingMapTree_update_void_CCamera_Callback;
				public:
					CBingMapTreeProxy(EarthView::World::Core::CNameValuePairList *pList) : CBingMapTree(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CBingMapTree_update_void_CCamera_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CBingMapTree_update_void_CCamera(EarthView_World_Spatial3D_Atlas_CBingMapTree_update_void_CCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CBingMapTree_update_void_CCamera_Callback = pCallback;
					}
					virtual void update(_in const EarthView::World::Graphic::CCamera* camera)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CBingMapTree_update_void_CCamera_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Atlas_CBingMapTree_update_void_CCamera_Callback(camera);
						}
						else
							return this->CBingMapTree::update(camera);
					}
				};
				REGISTER_FACTORY_CLASS(CBingMapTreeProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CBingMapTree_update_void_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial3D::Atlas::CBingMapTree* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CBingMapTree*) pObjectXXXX;
					if (dynamic_cast<CBingMapTreeProxy*>((EarthView::World::Spatial3D::Atlas::CBingMapTree*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Atlas::CBingMapTree::update(camera);
					else
						ptrNativeObject->update(camera);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CBingMapTree_update_void_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CBingMapTree_update_void_CCamera_Callback* pCallback )
				{
					CBingMapTreeProxy* ptr = dynamic_cast<CBingMapTreeProxy*>((EarthView::World::Spatial3D::Atlas::CBingMapTree*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CBingMapTree_update_void_CCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CBingMapTree_update_void_CCamera_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial3D::Atlas::CBingMapTree* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CBingMapTree*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Atlas::CBingMapTree::update(camera);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CBingMapTree_init_void_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial3D::Atlas::CBingMapTree* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CBingMapTree*) pObjectXXXX;
					ptrNativeObject->init(camera);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CBingMapTree_setSceneManager_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sceneManager )
				{
					EarthView::World::Spatial3D::Atlas::CBingMapTree* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CBingMapTree*) pObjectXXXX;
					ptrNativeObject->setSceneManager(sceneManager);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Spatial3D_Atlas_CBingMapTree_getSceneManager_CSceneManager(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CBingMapTree* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CBingMapTree*) pObjectXXXX;
					EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->getSceneManager();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CBingMapTree_setDataset_void_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* pDataset )
				{
					EarthView::World::Spatial3D::Atlas::CBingMapTree* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CBingMapTree*) pObjectXXXX;
					ptrNativeObject->setDataset(pDataset);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_Atlas_CBingMapTree_getDataSet_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CBingMapTree* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CBingMapTree*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataSet();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Atlas_CBingMapTree_getRootQuadKey_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CBingMapTree* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CBingMapTree*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getRootQuadKey();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CBingMapTree_updateAltitudeValue_ev_bool_ev_real64(void *pObjectXXXX, _in ev_real64 altitudeValue )
				{
					EarthView::World::Spatial3D::Atlas::CBingMapTree* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CBingMapTree*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateAltitudeValue(altitudeValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial3D_Atlas_CBingMapTree_getCurrentLevel_ev_real32_CGlobeCamera(_in EarthView::World::Spatial3D::CGlobeCamera* globeCamera )
				{
					ev_real32 objXXXX = EarthView::World::Spatial3D::Atlas::CBingMapTree::getCurrentLevel(globeCamera);
					return objXXXX;
				}
			}
		}
	}
}
