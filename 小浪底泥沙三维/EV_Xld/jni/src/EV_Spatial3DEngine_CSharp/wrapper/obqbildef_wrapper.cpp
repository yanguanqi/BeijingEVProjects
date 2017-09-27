/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/obqbildef.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace ModelManager
			{
				typedef EarthView::World::Graphic::CMovableObject::CUserData*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CMeshxUserData_clone_CUserData_Callback)();
				class CMeshxUserDataProxy : public EarthView::World::Spatial3D::ModelManager::CMeshxUserData
				{
				private:
					EarthView_World_Spatial3D_ModelManager_CMeshxUserData_clone_CUserData_Callback* m_EarthView_World_Spatial3D_ModelManager_CMeshxUserData_clone_CUserData_Callback;
				public:
					CMeshxUserDataProxy(EarthView::World::Core::CNameValuePairList *pList) : CMeshxUserData(pList)
					{
						m_EarthView_World_Spatial3D_ModelManager_CMeshxUserData_clone_CUserData_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshxUserData_clone_CUserData(EarthView_World_Spatial3D_ModelManager_CMeshxUserData_clone_CUserData_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CMeshxUserData_clone_CUserData_Callback = pCallback;
					}
					virtual EarthView::World::Graphic::CMovableObject::CUserData* clone()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CMeshxUserData_clone_CUserData_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CMovableObject::CUserData* returnValue = m_EarthView_World_Spatial3D_ModelManager_CMeshxUserData_clone_CUserData_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CMeshxUserData::clone();
					}
				};
				REGISTER_FACTORY_CLASS(CMeshxUserDataProxy);
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_CMeshxUserData_mObjectHandle( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CMeshxUserData* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMeshxUserData*) pObjectXXXX;
					ev_uint64 objXXXX = ptrNativeObject->mObjectHandle;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_CMeshxUserData_mObjectHandle( void *pObjectXXXX, ev_uint64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::CMeshxUserData*)pObjectXXXX)->mObjectHandle = value;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CMeshxUserData_clone_CUserData( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CMeshxUserData_clone_CUserData_Callback* pCallback )
				{
					CMeshxUserDataProxy* ptr = dynamic_cast<CMeshxUserDataProxy*>((EarthView::World::Spatial3D::ModelManager::CMeshxUserData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshxUserData_clone_CUserData(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CBILCache_getBILStruct_ev_bool_EVString_BILStruct(void *pObjectXXXX, _in const char* bilName, _in EarthView::World::Spatial3D::ModelManager::BILStruct* bil )
				{
					EarthView::World::Core::ev_string bilName1 = bilName;
					EarthView::World::Spatial3D::ModelManager::CBILCache* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CBILCache*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getBILStruct(bilName1, bil);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CBILCache_addCache_void_EVString_BILStruct(void *pObjectXXXX, _in const char* bilName, _in EarthView::World::Spatial3D::ModelManager::BILStruct* bil )
				{
					EarthView::World::Core::ev_string bilName1 = bilName;
					EarthView::World::Spatial3D::ModelManager::CBILCache* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CBILCache*) pObjectXXXX;
					ptrNativeObject->addCache(bilName1, bil);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_BILStruct_OperatorAssign_BILStruct_BILStruct(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct& objXXXX = *((EarthView::World::Spatial3D::ModelManager::BILStruct*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::ModelManager::BILStruct*)rhs;
					EarthView::World::Spatial3D::ModelManager::BILStruct *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_BILStruct_findLegalityData_ev_bool_ev_real32_ev_real32_ev_bool(void *pObjectXXXX, _in ev_real32* data, _inout ev_real32& height, _inout ev_bool& allNoData )
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::BILStruct*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->findLegalityData(data, height, allNoData);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial3D_ModelManager_BILStruct_getHeight_ev_real32_ev_real32_ev_real32(void *pObjectXXXX, _in ev_real32 x, _in ev_real32 z )
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::BILStruct*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getHeight(x, z);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_BILStruct_readBIL_ev_bool_EVString_ev_int32_ev_real32_ev_real32_ev_real32_ev_real32_ev_int32_ev_real32_ev_int32_ev_int32_CBILCache_BILStruct(void *pObjectXXXX, _in const char* desFolder, _in ev_int32 level, _in ev_real32 x, _in ev_real32 z, _in ev_real32 zeroStartX, _in ev_real32 zeroStartZ, _in ev_int32 startQuadLevel, _in ev_real32 zeroTileWidth, _in ev_int32 zeroLevelRowCount, _in ev_int32 zeroLevelColCount, _in EarthView::World::Spatial3D::ModelManager::CBILCache* cache, _inout void* bilStruct )
				{
					EarthView::World::Core::ev_string desFolder1 = desFolder;
					EarthView::World::Spatial3D::ModelManager::BILStruct* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::BILStruct*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->readBIL(desFolder1, level, x, z, zeroStartX, zeroStartZ, startQuadLevel, zeroTileWidth, zeroLevelRowCount, zeroLevelColCount, cache, *(EarthView::World::Spatial3D::ModelManager::BILStruct*)bilStruct);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real32*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_BILStruct_mData( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::BILStruct*) pObjectXXXX;
					ev_real32* objXXXX = ptrNativeObject->mData;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_BILStruct_mData( void *pObjectXXXX, ev_real32*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::BILStruct*)pObjectXXXX)->mData = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_BILStruct_mLevel( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::BILStruct*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mLevel;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_BILStruct_mLevel( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::BILStruct*)pObjectXXXX)->mLevel = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_BILStruct_mRow( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::BILStruct*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mRow;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_BILStruct_mRow( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::BILStruct*)pObjectXXXX)->mRow = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_BILStruct_mCol( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::BILStruct*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mCol;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_BILStruct_mCol( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::BILStruct*)pObjectXXXX)->mCol = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_BILStruct_mStartX( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::BILStruct*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mStartX;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_BILStruct_mStartX( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::BILStruct*)pObjectXXXX)->mStartX = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_BILStruct_mStartZ( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::BILStruct*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mStartZ;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_BILStruct_mStartZ( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::BILStruct*)pObjectXXXX)->mStartZ = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_BILStruct_mTileWidth( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::BILStruct*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mTileWidth;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_BILStruct_mTileWidth( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::BILStruct*)pObjectXXXX)->mTileWidth = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_BILStruct_mPointNumberPerSide( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::BILStruct* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::BILStruct*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mPointNumberPerSide;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_BILStruct_mPointNumberPerSide( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::BILStruct*)pObjectXXXX)->mPointNumberPerSide = value;
				}
			}
		}
	}
}
