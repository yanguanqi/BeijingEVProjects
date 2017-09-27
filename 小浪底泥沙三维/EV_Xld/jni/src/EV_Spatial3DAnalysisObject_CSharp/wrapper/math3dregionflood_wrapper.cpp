/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysisobject/math3dregionflood.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_CPositionColorTextured_mPosition( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CPositionColorTextured* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CPositionColorTextured*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mPosition;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CPositionColorTextured_mPosition( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::CPositionColorTextured*)pObjectXXXX)->mPosition = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_Analysis_CPositionColorTextured_mA( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CPositionColorTextured* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CPositionColorTextured*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mA;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CPositionColorTextured_mA( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::Analysis::CPositionColorTextured*)pObjectXXXX)->mA = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_CPositionColorTextured_mTextureUV( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CPositionColorTextured* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CPositionColorTextured*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector2 &objXXXX = ptrNativeObject->mTextureUV;
					EarthView::World::Spatial::Math::CVector2 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CPositionColorTextured_mTextureUV( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::CPositionColorTextured*)pObjectXXXX)->mTextureUV = *(EarthView::World::Spatial::Math::CVector2*)value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Analysis::CPositionColorTextured*  _stdcall EarthView_World_Spatial3D_Analysis_CPositionColorTexturedSharedPtr_get_CPositionColorTextured(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::CPositionColorTextured* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_FloodPointVector_push_back_void_CPositionColorTexturedSharedPtr(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial3D::Analysis::FloodPointVector* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_FloodPointVector_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::FloodPointVector* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_FloodPointVector_front_CPositionColorTexturedSharedPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::FloodPointVector* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_FloodPointVector_back_CPositionColorTexturedSharedPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::FloodPointVector* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_FloodPointVector_insert_void_ev_uint32_CPositionColorTexturedSharedPtr(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial3D::Analysis::FloodPointVector* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_FloodPointVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::Analysis::FloodPointVector* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_FloodPointVector_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::FloodPointVector* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_FloodPointVector_OperatorIndex_CPositionColorTexturedSharedPtr_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Analysis::FloodPointVector& objYYYY = *(EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjXXXX;
					EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr& objXXXX = objYYYY[n];
					EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_FloodPointVector_at_CPositionColorTexturedSharedPtr_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Analysis::FloodPointVector* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr& objXXXX = ptrNativeObject->at(n);
					EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Analysis_FloodPointVector_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::FloodPointVector* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_FloodPointVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::Analysis::FloodPointVector* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_FloodPointVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3D::Analysis::FloodPointVector* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_FloodPointVector_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::FloodPointVector* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_FloodPointVector_swap_void_FloodPointVector(void *pObjectXXXX, _inout void* rhs )
				{
					EarthView::World::Spatial3D::Analysis::FloodPointVector* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::FloodPointVector*) pObjectXXXX;
					ptrNativeObject->swap(*(EarthView::World::Spatial3D::Analysis::FloodPointVector*)rhs);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_Analysis_CFloodMeshPoint_mRowIndex( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CFloodMeshPoint* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CFloodMeshPoint*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mRowIndex;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CFloodMeshPoint_mRowIndex( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::Analysis::CFloodMeshPoint*)pObjectXXXX)->mRowIndex = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_Analysis_CFloodMeshPoint_mColumnIndex( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CFloodMeshPoint* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CFloodMeshPoint*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mColumnIndex;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CFloodMeshPoint_mColumnIndex( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::Analysis::CFloodMeshPoint*)pObjectXXXX)->mColumnIndex = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Analysis_CFloodMeshPoint_mAltitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CFloodMeshPoint* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CFloodMeshPoint*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mAltitude;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CFloodMeshPoint_mAltitude( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Analysis::CFloodMeshPoint*)pObjectXXXX)->mAltitude = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_CFloodRenderBlock_mVertices( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::FloodPointVector &objXXXX = ptrNativeObject->mVertices;
					EarthView::World::Spatial3D::Analysis::FloodPointVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CFloodRenderBlock_mVertices( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*)pObjectXXXX)->mVertices = *(EarthView::World::Spatial3D::Analysis::FloodPointVector*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_CFloodRenderBlock_mIndices( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*) pObjectXXXX;
					EarthView::World::Core::IntVector &objXXXX = ptrNativeObject->mIndices;
					EarthView::World::Core::IntVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CFloodRenderBlock_mIndices( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*)pObjectXXXX)->mIndices = *(EarthView::World::Core::IntVector*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_CFloodRenderBlock_mBoundingBox( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox &objXXXX = ptrNativeObject->mBoundingBox;
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CFloodRenderBlock_mBoundingBox( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*)pObjectXXXX)->mBoundingBox = *(EarthView::World::Spatial3D::Analysis::CGeoBoundingBox*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Analysis_CFloodRenderBlock_mRowCount( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mRowCount;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CFloodRenderBlock_mRowCount( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*)pObjectXXXX)->mRowCount = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Analysis_CFloodRenderBlock_mColumnCount( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mColumnCount;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CFloodRenderBlock_mColumnCount( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*)pObjectXXXX)->mColumnCount = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_CFloodRenderBlock_mCenterGeoPosition( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mCenterGeoPosition;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CFloodRenderBlock_mCenterGeoPosition( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*)pObjectXXXX)->mCenterGeoPosition = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Analysis_CFloodRenderBlock_mCenterWorldPosition( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mCenterWorldPosition;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Analysis_CFloodRenderBlock_mCenterWorldPosition( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*)pObjectXXXX)->mCenterWorldPosition = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CFRenderBlockSet_push_back_void_CFloodRenderBlock(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CFRenderBlockSet_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CFRenderBlockSet_front_CFloodRenderBlock(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CFRenderBlockSet_back_CFloodRenderBlock(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CFRenderBlockSet_insert_void_ev_uint32_CFloodRenderBlock(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::Analysis::CFloodRenderBlock*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CFRenderBlockSet_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CFRenderBlockSet_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CFRenderBlockSet* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CFRenderBlockSet_OperatorIndex_CFloodRenderBlock_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet& objYYYY = *(EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjXXXX;
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock& objXXXX = objYYYY[n];
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CFRenderBlockSet_at_CFloodRenderBlock_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock& objXXXX = ptrNativeObject->at(n);
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Analysis_CFRenderBlockSet_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CFRenderBlockSet* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CFRenderBlockSet_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CFRenderBlockSet_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CFRenderBlockSet_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CFRenderBlockSet_swap_void_CFRenderBlockSet(void *pObjectXXXX, _inout void* rhs )
				{
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*) pObjectXXXX;
					ptrNativeObject->swap(*(EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*)rhs);
				}
				typedef const EarthView::World::Spatial3D::Analysis::CAltitude3DListener*  ( _stdcall EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_getAltitude3DListener_CAltitude3DListener_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_setAltitude3DListener_void_CAltitude3DListener_Callback)(_in EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener);
				class CMath3DRegionFloodProxy : public EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood
				{
				private:
					EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_getAltitude3DListener_CAltitude3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_getAltitude3DListener_CAltitude3DListener_Callback;
					EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_setAltitude3DListener_void_CAltitude3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_setAltitude3DListener_void_CAltitude3DListener_Callback;
				public:
					CMath3DRegionFloodProxy(EarthView::World::Core::CNameValuePairList *pList) : CMath3DRegionFlood(pList)
					{
						m_EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_getAltitude3DListener_CAltitude3DListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_setAltitude3DListener_void_CAltitude3DListener_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_getAltitude3DListener_CAltitude3DListener(EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_getAltitude3DListener_CAltitude3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_getAltitude3DListener_CAltitude3DListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_setAltitude3DListener_void_CAltitude3DListener(EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_setAltitude3DListener_void_CAltitude3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_setAltitude3DListener_void_CAltitude3DListener_Callback = pCallback;
					}
					virtual const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* getAltitude3DListener() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_getAltitude3DListener_CAltitude3DListener_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Analysis::CAltitude3DListener* returnValue = m_EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_getAltitude3DListener_CAltitude3DListener_Callback();
							return returnValue;
						}
						else
							return this->CMath3DRegionFlood::getAltitude3DListener();
					}
					virtual void setAltitude3DListener(_in EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pListener)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_setAltitude3DListener_void_CAltitude3DListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_setAltitude3DListener_void_CAltitude3DListener_Callback(ref_pListener);
						}
						else
							return this->CMath3DRegionFlood::setAltitude3DListener(ref_pListener);
					}
				};
				REGISTER_FACTORY_CLASS(CMath3DRegionFloodProxy);
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_getSearchRadius_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getSearchRadius();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_setSearchRadius_void_ev_real64(void *pObjectXXXX, _in const ev_real64& value )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjectXXXX;
					ptrNativeObject->setSearchRadius(value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_getInterval_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getInterval();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_setInterval_void_ev_real64(void *pObjectXXXX, _in const ev_real64& value )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjectXXXX;
					ptrNativeObject->setInterval(value);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_getNeedStop_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getNeedStop();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_setNeedStop_void_ev_bool(void *pObjectXXXX, _in const ev_bool& value )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjectXXXX;
					ptrNativeObject->setNeedStop(value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_getAlphaDivision_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getAlphaDivision();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_setAlphaDivision_void_ev_real64(void *pObjectXXXX, _in const ev_real64& value )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjectXXXX;
					ptrNativeObject->setAlphaDivision(value);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_getSignLength_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getSignLength();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_setSignLength_void_ev_int32(void *pObjectXXXX, _in const ev_int32& value )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjectXXXX;
					ptrNativeObject->setSignLength(value);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_getProgressV_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getProgressV();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_getFloodSurfaceArea_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getFloodSurfaceArea();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_getFloodGroundArea_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getFloodGroundArea();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_getFloodVolume_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getFloodVolume();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_calcuFloodParam_void_CVector3_ev_real64(void *pObjectXXXX, _in void* center, _in ev_real64 altitude )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjectXXXX;
					ptrNativeObject->calcuFloodParam(*(EarthView::World::Spatial::Math::CVector3*)center, altitude);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_calcuRenderData_void_CFRenderBlockSet(void *pObjectXXXX, _out void* renderBlockList )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjectXXXX;
					ptrNativeObject->calcuRenderData(*(EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*)renderBlockList);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_calcuFloodAltitude_ev_real64_CVector3_ev_real64_ev_real64(void *pObjectXXXX, _in void* center, _in ev_real64 floodVolume, _in ev_real64 error )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->calcuFloodAltitude(*(EarthView::World::Spatial::Math::CVector3*)center, floodVolume, error);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_calculateOnServer_void_CVector3_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in const void* center, _in const ev_real64& altitude, _out ev_real64& floodArea, _out ev_real64& groundArea, _out ev_real64& floodVolume )
				{
					EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjectXXXX;
					ptrNativeObject->calculateOnServer(*(EarthView::World::Spatial::Math::CVector3*)center, altitude, floodArea, groundArea, floodVolume);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_getAltitude3DListener_CAltitude3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_getAltitude3DListener_CAltitude3DListener_Callback* pCallback )
				{
					CMath3DRegionFloodProxy* ptr = dynamic_cast<CMath3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_getAltitude3DListener_CAltitude3DListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_setAltitude3DListener_void_CAltitude3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_setAltitude3DListener_void_CAltitude3DListener_Callback* pCallback )
				{
					CMath3DRegionFloodProxy* ptr = dynamic_cast<CMath3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CMath3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CMath3DRegionFlood_setAltitude3DListener_void_CAltitude3DListener(pCallback);
					}
				}
			}
		}
	}
}
