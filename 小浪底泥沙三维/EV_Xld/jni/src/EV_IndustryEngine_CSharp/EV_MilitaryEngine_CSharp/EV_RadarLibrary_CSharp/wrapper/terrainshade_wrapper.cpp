/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/militaryengine/radarlibrary/terrainshade.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace MilitaryEngine
		{
			namespace RadarLibrary
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_OperatorAssign_void_CScaleVectorList(void *pObjXXXX, _in const void* value )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList& objXXXX = *((EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjXXXX);
					objXXXX = *(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*)value;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_push_back_void_ScaleVector(void *pObjectXXXX, _in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector* value )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjectXXXX;
					ptrNativeObject->push_back(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_pop_back_void(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_front_ScaleVector(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector* objXXXX = ptrNativeObject->front();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_back_ScaleVector(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector* objXXXX = ptrNativeObject->back();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_insert_void_ev_uint32_ScaleVector(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector* value )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjectXXXX;
					ptrNativeObject->insert(pos, value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_OperatorIndex_ScaleVector_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList& objYYYY = *(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector* objXXXX = objYYYY[n];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_at_ScaleVector_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::ScaleVector* objXXXX = ptrNativeObject->at(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CScaleVectorList_clear_void(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CTerrainShade_shadeAnalysistCalculateOnlyTerrain_void_CVertexVector_ev_uint32(void *pObjectXXXX, _in const void* vertexVector, _in const ev_uint32& splitNum )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CTerrainShade* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CTerrainShade*) pObjectXXXX;
					ptrNativeObject->shadeAnalysistCalculateOnlyTerrain(*(EarthView::World::Geometry3D::CVertexVector*)vertexVector, splitNum);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CTerrainShade_shadeAnalysistCalculateOnlyNearAngle_void_CVertexVector_ev_uint32_CShadeAngleDatas(void *pObjectXXXX, _in const void* vertexVector, _in const ev_uint32& splitNum, _in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* ref_shadeDataList )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CTerrainShade* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CTerrainShade*) pObjectXXXX;
					ptrNativeObject->shadeAnalysistCalculateOnlyNearAngle(*(EarthView::World::Geometry3D::CVertexVector*)vertexVector, splitNum, ref_shadeDataList);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CTerrainShade_shadeAnalysistCalculateWithTerrainNearAngle_void_CVertexVector_ev_uint32_CShadeAngleDatas(void *pObjectXXXX, _in const void* vertexVector, _in const ev_uint32 splitNum, _in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* ref_shadeDataList )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CTerrainShade* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CTerrainShade*) pObjectXXXX;
					ptrNativeObject->shadeAnalysistCalculateWithTerrainNearAngle(*(EarthView::World::Geometry3D::CVertexVector*)vertexVector, splitNum, ref_shadeDataList);
				}
				extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList*  _stdcall EarthView_IndustryEngine_MilitaryEngine_RadarLibrary_CTerrainShade_getScaleVectorList_CScaleVectorList(void *pObjectXXXX )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CTerrainShade* ptrNativeObject = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CTerrainShade*) pObjectXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CScaleVectorList* objXXXX = ptrNativeObject->getScaleVectorList();
					return objXXXX;
				}
			}
		}
	}
}
