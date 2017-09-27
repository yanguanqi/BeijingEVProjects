/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/cmddatamodel.h"
namespace EarthView
{
	namespace World
	{
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
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCmdDataModel_setUndoPose_void_CVector3_CVector3_CQuaternion_ev_real64(void *pObjectXXXX, _in const void* pose, _in const void* scale, _in const void* qua, _in ev_real64 demHeight )
			{
				EarthView::World::Spatial3D::CCmdDataModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataModel*) pObjectXXXX;
				ptrNativeObject->setUndoPose(*(EarthView::World::Spatial::Math::CVector3*)pose, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua, demHeight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCmdDataModel_getUndoPose_void_CVector3_CVector3_CQuaternion_ev_real64(void *pObjectXXXX, _inout void* pose, _inout void* scale, _inout void* qua, _inout ev_real64& demHeight )
			{
				EarthView::World::Spatial3D::CCmdDataModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataModel*) pObjectXXXX;
				ptrNativeObject->getUndoPose(*(EarthView::World::Spatial::Math::CVector3*)pose, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua, demHeight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCmdDataModel_setRedoPose_void_CVector3_CVector3_CQuaternion_ev_real64(void *pObjectXXXX, _in const void* pose, _in const void* scale, _in const void* qua, _in ev_real64 demHeight )
			{
				EarthView::World::Spatial3D::CCmdDataModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataModel*) pObjectXXXX;
				ptrNativeObject->setRedoPose(*(EarthView::World::Spatial::Math::CVector3*)pose, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua, demHeight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCmdDataModel_getRedoPose_void_CVector3_CVector3_CQuaternion_ev_real64(void *pObjectXXXX, _inout void* pose, _inout void* scale, _inout void* qua, _inout ev_real64& demHeight )
			{
				EarthView::World::Spatial3D::CCmdDataModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataModel*) pObjectXXXX;
				ptrNativeObject->getRedoPose(*(EarthView::World::Spatial::Math::CVector3*)pose, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua, demHeight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCmdDataModel_setMeshItem_void_IFeature(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeature* ref_f )
			{
				EarthView::World::Spatial3D::CCmdDataModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataModel*) pObjectXXXX;
				ptrNativeObject->setMeshItem(ref_f);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_CCmdDataModel_getMeshItem_IFeature(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataModel*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->getMeshItem();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCmdDataModel_addResItem_void_IFeature(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeature* ref_f )
			{
				EarthView::World::Spatial3D::CCmdDataModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataModel*) pObjectXXXX;
				ptrNativeObject->addResItem(ref_f);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CCmdDataModel_getNumResItem_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataModel*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getNumResItem();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_CCmdDataModel_getResItem_IFeature_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Spatial3D::CCmdDataModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataModel*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->getResItem(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCmdDataModel_setMatrix_void_CMatrix4(void *pObjectXXXX, _in const void* mat )
			{
				EarthView::World::Spatial3D::CCmdDataModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataModel*) pObjectXXXX;
				ptrNativeObject->setMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)mat);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_CCmdDataModel_getMatrix_CMatrix4(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataModel*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->getMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCmdDataModel_setMeshInstID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
			{
				EarthView::World::Spatial3D::CCmdDataModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataModel*) pObjectXXXX;
				ptrNativeObject->setMeshInstID(id);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CCmdDataModel_getMeshInstID_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataModel*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getMeshInstID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCmdDataModel_setUndoAttr_void_IFeature(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeature* ref_f )
			{
				EarthView::World::Spatial3D::CCmdDataModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataModel*) pObjectXXXX;
				ptrNativeObject->setUndoAttr(ref_f);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_CCmdDataModel_getUndoAttr_IFeature(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataModel*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->getUndoAttr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCmdDataModel_setRedoAttr_void_IFeature(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeature* ref_f )
			{
				EarthView::World::Spatial3D::CCmdDataModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataModel*) pObjectXXXX;
				ptrNativeObject->setRedoAttr(ref_f);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_CCmdDataModel_getRedoAttr_IFeature(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataModel*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->getRedoAttr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CCmdDataLodModel_mUndoLat( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataLodModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataLodModel*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mUndoLat;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCmdDataLodModel_mUndoLat( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CCmdDataLodModel*)pObjectXXXX)->mUndoLat = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CCmdDataLodModel_mUndoLon( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataLodModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataLodModel*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mUndoLon;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCmdDataLodModel_mUndoLon( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CCmdDataLodModel*)pObjectXXXX)->mUndoLon = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CCmdDataLodModel_mUndoAlt( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataLodModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataLodModel*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mUndoAlt;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCmdDataLodModel_mUndoAlt( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CCmdDataLodModel*)pObjectXXXX)->mUndoAlt = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CCmdDataLodModel_mUndoLocalScale( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataLodModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataLodModel*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mUndoLocalScale;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCmdDataLodModel_mUndoLocalScale( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CCmdDataLodModel*)pObjectXXXX)->mUndoLocalScale = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CCmdDataLodModel_mUndoLocalOrientation( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataLodModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataLodModel*) pObjectXXXX;
				EarthView::World::Spatial::Math::CQuaternion &objXXXX = ptrNativeObject->mUndoLocalOrientation;
				EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCmdDataLodModel_mUndoLocalOrientation( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CCmdDataLodModel*)pObjectXXXX)->mUndoLocalOrientation = *(EarthView::World::Spatial::Math::CQuaternion*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CCmdDataLodModel_mRedoLat( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataLodModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataLodModel*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mRedoLat;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCmdDataLodModel_mRedoLat( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CCmdDataLodModel*)pObjectXXXX)->mRedoLat = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CCmdDataLodModel_mRedoLon( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataLodModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataLodModel*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mRedoLon;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCmdDataLodModel_mRedoLon( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CCmdDataLodModel*)pObjectXXXX)->mRedoLon = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_CCmdDataLodModel_mRedoAlt( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataLodModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataLodModel*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->mRedoAlt;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCmdDataLodModel_mRedoAlt( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Spatial3D::CCmdDataLodModel*)pObjectXXXX)->mRedoAlt = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CCmdDataLodModel_mRedoLocalScale( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataLodModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataLodModel*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mRedoLocalScale;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCmdDataLodModel_mRedoLocalScale( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CCmdDataLodModel*)pObjectXXXX)->mRedoLocalScale = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_CCmdDataLodModel_mRedoLocalOrientation( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataLodModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataLodModel*) pObjectXXXX;
				EarthView::World::Spatial::Math::CQuaternion &objXXXX = ptrNativeObject->mRedoLocalOrientation;
				EarthView::World::Spatial::Math::CQuaternion *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCmdDataLodModel_mRedoLocalOrientation( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Spatial3D::CCmdDataLodModel*)pObjectXXXX)->mRedoLocalOrientation = *(EarthView::World::Spatial::Math::CQuaternion*)value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_CCmdDataLodModel_mMeshxFile( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataLodModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataLodModel*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mMeshxFile;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCmdDataLodModel_mMeshxFile( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Spatial3D::CCmdDataLodModel*)pObjectXXXX)->mMeshxFile = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_CCmdDataLodModel_mIsInstance( void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataLodModel* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataLodModel*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mIsInstance;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_CCmdDataLodModel_mIsInstance( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Spatial3D::CCmdDataLodModel*)pObjectXXXX)->mIsInstance = value;
			}
		}
	}
}
