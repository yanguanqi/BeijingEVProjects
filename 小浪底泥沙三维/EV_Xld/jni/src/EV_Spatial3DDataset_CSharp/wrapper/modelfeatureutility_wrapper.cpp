/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/modelfeatureutility.h"
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
		namespace Spatial
		{
			namespace Geometry
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
			namespace Dataset
			{
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_checkDDS_ev_bool_EVString(_in const char* filename )
				{
					EarthView::World::Core::ev_string filename1 = filename;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::checkDDS(filename1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_releaseFeatureVector_void_FeatureVector(_inout void* featureVec )
				{
					EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::releaseFeatureVector(*(EarthView::World::Spatial3D::Dataset::FeatureVector*)featureVec);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_releaseFeature_void_IFeature(_in EarthView::World::Spatial::GeoDataset::IFeature* feature )
				{
					EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::releaseFeature(feature);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setFeatureVectorDataStreamNull_void_FeatureVector(_in const void* featureVec )
				{
					EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setFeatureVectorDataStreamNull(*(EarthView::World::Spatial3D::Dataset::FeatureVector*)featureVec);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setEntityID_ev_bool_IFeature_ev_uint32(_in EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, _in ev_uint32 entID )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setEntityID(pMeshFeature, entID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getEntityID_ev_uint32_IFeature(_in const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature )
				{
					ev_uint32 objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getEntityID(pMeshFeature);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setEntityName_ev_bool_IFeature_EVString(_in EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, _in const char* entName )
				{
					EarthView::World::Core::ev_string entName1 = entName;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setEntityName(pMeshFeature, entName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getEntityName_EVString_IFeature(_in const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature )
				{
					EVString objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getEntityName(pMeshFeature);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setEntityBound_ev_bool_IFeature_CAxisAlignedBox(_in EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, _in const void* box )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setEntityBound(pMeshFeature, *(EarthView::World::Spatial::Math::CAxisAlignedBox*)box);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getEntityBound_CAxisAlignedBox_IFeature(_in const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getEntityBound(pMeshFeature);
					EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setEntityPos_ev_bool_ISpatialReference_IFeature_CVector3(_in EarthView::World::Spatial::Geometry::ISpatialReference* spatialRef, _in EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, _in const void* pos )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setEntityPos(spatialRef, pMeshFeature, *(EarthView::World::Spatial::Math::CVector3*)pos);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setEntityPos_ev_bool_IFeature_CVector3(_in EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, _in const void* pos )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setEntityPos(pMeshFeature, *(EarthView::World::Spatial::Math::CVector3*)pos);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getOriginalEntityPos_CVector3_IFeature(_in const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature )
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getOriginalEntityPos(pMeshFeature);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getWgs84EntityPos_CVector3_ISpatialReference_IFeature(_in EarthView::World::Spatial::Geometry::ISpatialReference* spatialRef, _in const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature )
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getWgs84EntityPos(spatialRef, pMeshFeature);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setEntityScale_ev_bool_IFeature_CVector3(_in EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, _in const void* scale )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setEntityScale(pMeshFeature, *(EarthView::World::Spatial::Math::CVector3*)scale);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getEntityScale_CVector3_IFeature(_in const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature )
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getEntityScale(pMeshFeature);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setEntityQuaternion_ev_bool_IFeature_CQuaternion(_in EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, _in const void* qua )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setEntityQuaternion(pMeshFeature, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getEntityQuaternion_CQuaternion_IFeature(_in const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature )
				{
					EarthView::World::Spatial::Math::CQuaternion objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getEntityQuaternion(pMeshFeature);
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setEntityFromTemplate_ev_bool_IFeature_ev_bool(_in EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, _in ev_bool flag )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setEntityFromTemplate(pMeshFeature, flag);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getEntityFromTemplate_ev_bool_IFeature(_in const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getEntityFromTemplate(pMeshFeature);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setAltitude_ev_bool_IFeature_EVAltitudeMode_ev_real64(_in EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, _in int altitudeMode, _in ev_real64 altitudeVal )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setAltitude(pMeshFeature, (EarthView::World::Spatial::Utility::EVAltitudeMode)altitudeMode, altitudeVal);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getAltitude_ev_bool_IFeature_EVAltitudeMode_ev_real64(_in const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, _out int& altitudeMode, _out ev_real64& altitudeVal )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getAltitude(pMeshFeature, (EarthView::World::Spatial::Utility::EVAltitudeMode&)altitudeMode, altitudeVal);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setMeshID_ev_bool_IFeature_ev_uint32(_in EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, _in ev_uint32 meshID )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setMeshID(pMeshFeature, meshID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getMeshID_ev_uint32_IFeature(_in const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature )
				{
					ev_uint32 objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getMeshID(pMeshFeature);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setMeshTmplID_ev_bool_IFeature_ev_uint32(_in EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, _in ev_uint32 meshTmplID )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setMeshTmplID(pMeshFeature, meshTmplID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getMeshTmplID_ev_uint32_IFeature(_in const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature )
				{
					ev_uint32 objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getMeshTmplID(pMeshFeature);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setMeshName_ev_bool_IFeature_EVString(_in EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, _in const char* meshName )
				{
					EarthView::World::Core::ev_string meshName1 = meshName;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setMeshName(pMeshFeature, meshName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getMeshName_EVString_IFeature(_in const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature )
				{
					EVString objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getMeshName(pMeshFeature);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setMeshFilename_ev_bool_IFeature_EVString(_in EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, _in const char* meshFilename )
				{
					EarthView::World::Core::ev_string meshFilename1 = meshFilename;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setMeshFilename(pMeshFeature, meshFilename1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getMeshFilename_EVString_IFeature(_in const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature )
				{
					EVString objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getMeshFilename(pMeshFeature);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setMeshData_ev_bool_IFeature_MemoryDataStreamPtr(_in EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, _in void* meshData )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setMeshData(pMeshFeature, *(EarthView::World::Core::MemoryDataStreamPtr*)meshData);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getMeshData_MemoryDataStreamPtr_IFeature(_in const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature )
				{
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getMeshData(pMeshFeature);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setMeshPos_ev_bool_IFeature_CVector3(_in EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, _in const void* pos )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setMeshPos(pMeshFeature, *(EarthView::World::Spatial::Math::CVector3*)pos);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getMeshPos_CVector3_IFeature(_in const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature )
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getMeshPos(pMeshFeature);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setMeshScale_ev_bool_IFeature_CVector3(_in EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, _in const void* scale )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setMeshScale(pMeshFeature, *(EarthView::World::Spatial::Math::CVector3*)scale);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getMeshScale_CVector3_IFeature(_in const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature )
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getMeshScale(pMeshFeature);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setMeshQuaternion_ev_bool_IFeature_CQuaternion(_in EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, _in const void* qua )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setMeshQuaternion(pMeshFeature, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getMeshQuaternion_CQuaternion_IFeature(_in const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature )
				{
					EarthView::World::Spatial::Math::CQuaternion objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getMeshQuaternion(pMeshFeature);
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setResID_ev_bool_IFeature_ev_uint32(_in EarthView::World::Spatial::GeoDataset::IFeature* pResFeature, _in ev_uint32 resID )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setResID(pResFeature, resID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getResID_ev_uint32_IFeature(_in const EarthView::World::Spatial::GeoDataset::IFeature* pResFeature )
				{
					ev_uint32 objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getResID(pResFeature);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setResFilename_ev_bool_IFeature_EVString(_in EarthView::World::Spatial::GeoDataset::IFeature* pResFeature, _in const char* resFilename )
				{
					EarthView::World::Core::ev_string resFilename1 = resFilename;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setResFilename(pResFeature, resFilename1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getResFilename_EVString_IFeature(_in const EarthView::World::Spatial::GeoDataset::IFeature* pResFeature )
				{
					EVString objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getResFilename(pResFeature);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setResType_ev_bool_IFeature_MaterialResourceType(_in EarthView::World::Spatial::GeoDataset::IFeature* pResFeature, _in int type )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setResType(pResFeature, (EarthView::World::Spatial3D::Dataset::MaterialResourceType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getResType_MaterialResourceType_IFeature(_in const EarthView::World::Spatial::GeoDataset::IFeature* pResFeature )
				{
					EarthView::World::Spatial3D::Dataset::MaterialResourceType objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getResType(pResFeature);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setResData_ev_bool_IFeature_MemoryDataStreamPtr(_in EarthView::World::Spatial::GeoDataset::IFeature* pResFeature, _in void* resData )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setResData(pResFeature, *(EarthView::World::Core::MemoryDataStreamPtr*)resData);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getResData_MemoryDataStreamPtr_IFeature(_in const EarthView::World::Spatial::GeoDataset::IFeature* pResFeature )
				{
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getResData(pResFeature);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setRefResID_ev_bool_IFeature_ev_uint32(_in EarthView::World::Spatial::GeoDataset::IFeature* pResFeature, _in ev_uint32 resID )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setRefResID(pResFeature, resID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getRefResID_ev_uint32_IFeature(_in const EarthView::World::Spatial::GeoDataset::IFeature* pResFeature )
				{
					ev_uint32 objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getRefResID(pResFeature);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setRefMeshID_ev_bool_IFeature_ev_uint32(_in EarthView::World::Spatial::GeoDataset::IFeature* pResFeature, _in ev_uint32 meshID )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setRefMeshID(pResFeature, meshID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getRefMeshID_ev_uint32_IFeature(_in const EarthView::World::Spatial::GeoDataset::IFeature* pResFeature )
				{
					ev_uint32 objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getRefMeshID(pResFeature);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_setResRefCount_ev_bool_IFeature_ev_uint32(_in EarthView::World::Spatial::GeoDataset::IFeature* pResFeature, _in ev_uint32 refCount )
				{
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::setResRefCount(pResFeature, refCount);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getResRefCount_ev_uint32_IFeature(_in const EarthView::World::Spatial::GeoDataset::IFeature* pResFeature )
				{
					ev_uint32 objXXXX = EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getResRefCount(pResFeature);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_getBoundCenter_void_IFeature_ev_real64_ev_real64_ev_real64(_in const EarthView::World::Spatial::GeoDataset::IFeature* pMeshFeature, _out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude )
				{
					EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::getBoundCenter(pMeshFeature, latitude, longitude, altitude);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelFeatureUtility_mergeFeature_void_IFeature_IFeature(_inout EarthView::World::Spatial::GeoDataset::IFeature*& pOutFeature, _in const EarthView::World::Spatial::GeoDataset::IFeature* pSrcFeature )
				{
					EarthView::World::Spatial3D::Dataset::CModelFeatureUtility::mergeFeature(pOutFeature, pSrcFeature);
				}
			}
		}
	}
}
