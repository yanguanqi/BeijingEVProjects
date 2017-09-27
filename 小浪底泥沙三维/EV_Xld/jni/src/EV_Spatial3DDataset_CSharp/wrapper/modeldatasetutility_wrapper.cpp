/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/modeldatasetutility.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
			namespace Geometry
			{
			}
			namespace Math
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
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_getTableFields_ev_uint32_CSqlDatabase_EVString_IFields(_inout void* db, _in const char* tab, _out EarthView::World::Spatial::GeoDataset::IFields* flds )
				{
					EarthView::World::Core::ev_string tab1 = tab;
					ev_uint32 objXXXX = EarthView::World::Spatial3D::Dataset::CModelDatasetUtility::getTableFields(*(EarthView::World::Core::Database::CSqlDatabase*)db, tab1, flds);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_clearTable_ev_bool_CSqlDatabase_EVString(_inout void* db, _inout char*& tab )
				{
					EarthView::World::Core::ev_string tab1 = tab;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelDatasetUtility::clearTable(*(EarthView::World::Core::Database::CSqlDatabase*)db, tab1);
					tab=tab1.makeBuffer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_convertToWgs84_void_ISpatialReference_CEnvelope_CEnvelope(_in const EarthView::World::Spatial::Geometry::ISpatialReference* spatialRef, _in const void* resEnvelope, _out void* desEnvelope )
				{
					EarthView::World::Spatial3D::Dataset::CModelDatasetUtility::convertToWgs84(spatialRef, *(EarthView::World::Spatial::Geometry::CEnvelope*)resEnvelope, *(EarthView::World::Spatial::Geometry::CEnvelope*)desEnvelope);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_convertToWgs84_void_ISpatialReference_CVector3_CVector3(_in const EarthView::World::Spatial::Geometry::ISpatialReference* spatialRef, _in const void* resVector, _out void* desVector )
				{
					EarthView::World::Spatial3D::Dataset::CModelDatasetUtility::convertToWgs84(spatialRef, *(EarthView::World::Spatial::Math::CVector3*)resVector, *(EarthView::World::Spatial::Math::CVector3*)desVector);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_convertWgs84ToProjCoordinateData_void_ISpatialReference_CEnvelope_CEnvelope(_in const EarthView::World::Spatial::Geometry::ISpatialReference* spatialRef, _in const void* resEnvelope, _inout void* desEnvelope )
				{
					EarthView::World::Spatial3D::Dataset::CModelDatasetUtility::convertWgs84ToProjCoordinateData(spatialRef, *(EarthView::World::Spatial::Geometry::CEnvelope*)resEnvelope, *(EarthView::World::Spatial::Geometry::CEnvelope*)desEnvelope);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_convertWgs84ToProjCoordinateData_void_ISpatialReference_CVector3_CVector3(_in const EarthView::World::Spatial::Geometry::ISpatialReference* spatialRef, _in const void* resVector, _inout void* desVector )
				{
					EarthView::World::Spatial3D::Dataset::CModelDatasetUtility::convertWgs84ToProjCoordinateData(spatialRef, *(EarthView::World::Spatial::Math::CVector3*)resVector, *(EarthView::World::Spatial::Math::CVector3*)desVector);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_QuaterToAngle_CVector3_CQuaternion(_in const void* quter )
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = EarthView::World::Spatial3D::Dataset::CModelDatasetUtility::QuaterToAngle(*(EarthView::World::Spatial::Math::CQuaternion*)quter);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_AngleToQuater_CQuaternion_CVector3(_in const void* v3 )
				{
					EarthView::World::Spatial::Math::CQuaternion objXXXX = EarthView::World::Spatial3D::Dataset::CModelDatasetUtility::AngleToQuater(*(EarthView::World::Spatial::Math::CVector3*)v3);
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelDatasetUtility_isCubeTexture_ev_bool_EVString(_in const char* filename )
				{
					EarthView::World::Core::ev_string filename1 = filename;
					ev_bool objXXXX = EarthView::World::Spatial3D::Dataset::CModelDatasetUtility::isCubeTexture(filename1);
					return objXXXX;
				}
			}
		}
	}
}
