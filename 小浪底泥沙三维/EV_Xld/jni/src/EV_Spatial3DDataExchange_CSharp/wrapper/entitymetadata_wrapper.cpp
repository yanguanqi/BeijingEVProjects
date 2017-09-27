/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/entitymetadata.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CEntityMetaData_mMeshPath( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CEntityMetaData*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mMeshPath;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CEntityMetaData_mMeshPath( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CEntityMetaData*)pObjectXXXX)->mMeshPath = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CEntityMetaData_mMeshName( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CEntityMetaData*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mMeshName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CEntityMetaData_mMeshName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::DataExchange::CEntityMetaData*)pObjectXXXX)->mMeshName = value1;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CEntityMetaData_mPos( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CEntityMetaData*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mPos;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CEntityMetaData_mPos( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::DataExchange::CEntityMetaData*)pObjectXXXX)->mPos = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CEntityMetaData_mScale( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CEntityMetaData*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mScale;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CEntityMetaData_mScale( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::DataExchange::CEntityMetaData*)pObjectXXXX)->mScale = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CEntityMetaData_mQuation( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CEntityMetaData*) pObjectXXXX;
					EarthView::World::Spatial::Math::CQuaternion &objXXXX = ptrNativeObject->mQuation;
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CEntityMetaData_mQuation( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::DataExchange::CEntityMetaData*)pObjectXXXX)->mQuation = *(EarthView::World::Spatial::Math::CQuaternion*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_DataExchange_CEntityMetaData_mAttriMap( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CEntityMetaData* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CEntityMetaData*) pObjectXXXX;
					EarthView::World::Spatial3D::DataExchange::MeshAttrMap &objXXXX = ptrNativeObject->mAttriMap;
					EarthView::World::Spatial3D::DataExchange::MeshAttrMap *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_DataExchange_CEntityMetaData_mAttriMap( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::DataExchange::CEntityMetaData*)pObjectXXXX)->mAttriMap = *(EarthView::World::Spatial3D::DataExchange::MeshAttrMap*)value;
				}
			}
		}
	}
}
