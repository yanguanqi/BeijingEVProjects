/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/meshutility.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
			}
			namespace DataExchange
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshUtility_composeWorldMartix_CMatrix4_CVector3_CVector3_CVector3(_in const void* pos, _in const void* scale, _in const void* ros )
				{
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = EarthView::World::Spatial3D::DataExchange::CMeshUtility::composeWorldMartix(*(EarthView::World::Spatial::Math::CVector3*)pos, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CVector3*)ros);
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshUtility_composeWorldMartix_CMatrix4_ev_real32_ev_real32_ev_real32(_in ev_real32 lat, _in ev_real32 lon, _in ev_real32 ati )
				{
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = EarthView::World::Spatial3D::DataExchange::CMeshUtility::composeWorldMartix(lat, lon, ati);
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshUtility_decomposeWorldMatrix_void_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(_in const void* worldMatrix, _out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt, _out void* scaleInLocal, _out void* orientInLocal )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshUtility::decomposeWorldMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)worldMatrix, lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)scaleInLocal, *(EarthView::World::Spatial::Math::CQuaternion*)orientInLocal);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshUtility_decomposeMatrixToPosition_void_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(_in const void* worldMatrix, _out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt, _out void* scaleInLocal, _out void* orientInLocal )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshUtility::decomposeMatrixToPosition(*(EarthView::World::Spatial::Math::CMatrix4*)worldMatrix, lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)scaleInLocal, *(EarthView::World::Spatial::Math::CQuaternion*)orientInLocal);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshUtility_exportToModelBase_ev_bool_CMeshData_EVString(void *pObjectXXXX, _in const void* meshdata, _in const char* resourcePath )
				{
					EarthView::World::Core::ev_string resourcePath1 = resourcePath;
					EarthView::World::Spatial3D::DataExchange::CMeshUtility* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exportToModelBase(*(EarthView::World::Spatial3D::DataExchange::CMeshData*)meshdata, resourcePath1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshUtility_exportToModelBase_ev_bool_CMeshData_EVString_EVString_EVString(void *pObjectXXXX, _in const void* meshdata, _in const char* resourcePath, _in const char* attrtablename, _in const char* nodecode )
				{
					EarthView::World::Core::ev_string resourcePath1 = resourcePath;
					EarthView::World::Core::ev_string attrtablename1 = attrtablename;
					EarthView::World::Core::ev_string nodecode1 = nodecode;
					EarthView::World::Spatial3D::DataExchange::CMeshUtility* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exportToModelBase(*(EarthView::World::Spatial3D::DataExchange::CMeshData*)meshdata, resourcePath1, attrtablename1, nodecode1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshUtility_exportToModelDataset_ev_bool_CMeshData_EVString(void *pObjectXXXX, _in const void* meshdata, _in const char* resourcePath )
				{
					EarthView::World::Core::ev_string resourcePath1 = resourcePath;
					EarthView::World::Spatial3D::DataExchange::CMeshUtility* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exportToModelDataset(*(EarthView::World::Spatial3D::DataExchange::CMeshData*)meshdata, resourcePath1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshUtility_exportToModelBase_ev_bool_CMeshData(void *pObjectXXXX, _in const void* meshdata )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshUtility* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exportToModelBase(*(EarthView::World::Spatial3D::DataExchange::CMeshData*)meshdata);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshUtility_exportToModelBase_ev_bool_CMeshData_EVString_EVString(void *pObjectXXXX, _in const void* meshdata, _in const char* attrtablename, _in const char* nodecode )
				{
					EarthView::World::Core::ev_string attrtablename1 = attrtablename;
					EarthView::World::Core::ev_string nodecode1 = nodecode;
					EarthView::World::Spatial3D::DataExchange::CMeshUtility* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exportToModelBase(*(EarthView::World::Spatial3D::DataExchange::CMeshData*)meshdata, attrtablename1, nodecode1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshUtility_exportToModelDataset_ev_bool_CMeshData(void *pObjectXXXX, _in const void* meshdata )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshUtility* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exportToModelDataset(*(EarthView::World::Spatial3D::DataExchange::CMeshData*)meshdata);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshUtility_exportToLocal_ev_bool_CMeshData_EVString(void *pObjectXXXX, _in const void* meshdata, _in const char* path )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Spatial3D::DataExchange::CMeshUtility* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exportToLocal(*(EarthView::World::Spatial3D::DataExchange::CMeshData*)meshdata, path1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshUtility_setParams_void_CMeshParams(void *pObjectXXXX, _in const void* params )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshUtility* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjectXXXX;
					ptrNativeObject->setParams(*(EarthView::World::Spatial3D::DataExchange::CMeshParams*)params);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshUtility_getParams_CMeshParams(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshUtility* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjectXXXX;
					EarthView::World::Spatial3D::DataExchange::CMeshParams& objXXXX = ptrNativeObject->getParams();
					EarthView::World::Spatial3D::DataExchange::CMeshParams *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshUtility_getDatasourceHelper_CDatasourceHelper(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::CMeshUtility* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjectXXXX;
					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper* objXXXX = ptrNativeObject->getDatasourceHelper();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshUtility_publishUserType_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshUtility* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjectXXXX;
					ptrNativeObject->publishUserType();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshUtility_readWorldTransformTxt_ev_bool_CMatrix4_ev_real64_ev_real64_ev_real64_CVector3_CVector3(void *pObjectXXXX, _out void* matrix, _out ev_real64& lontitude, _out ev_real64& latitude, _out ev_real64& atitu, _out void* scale, _out void* rotate )
				{
					EarthView::World::Spatial3D::DataExchange::CMeshUtility* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->readWorldTransformTxt(*(EarthView::World::Spatial::Math::CMatrix4*)matrix, lontitude, latitude, atitu, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CVector3*)rotate);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshUtility_loadFile_MemoryDataStreamPtr_EVString(void *pObjectXXXX, _in const char* file )
				{
					EarthView::World::Core::ev_string file1 = file;
					EarthView::World::Spatial3D::DataExchange::CMeshUtility* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjectXXXX;
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->loadFile(file1);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_DataExchange_CMeshUtility_loadAniFile_MemoryDataStreamPtr_EVString(void *pObjectXXXX, _in const char* file )
				{
					EarthView::World::Core::ev_string file1 = file;
					EarthView::World::Spatial3D::DataExchange::CMeshUtility* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CMeshUtility*) pObjectXXXX;
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->loadAniFile(file1);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
