/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatiallasproxy/lasoptimizetool.h"
namespace EarthView
{
	namespace World
	{
		namespace SpatialLASConvertProxy
		{
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_SpatialLASConvertProxy_CTempVertex_pos( void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertex* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CTempVertex*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->pos;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_SpatialLASConvertProxy_CTempVertex_pos( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::SpatialLASConvertProxy::CTempVertex*)pObjectXXXX)->pos = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_SpatialLASConvertProxy_CTempVertex_tex( void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertex* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CTempVertex*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector4 &objXXXX = ptrNativeObject->tex;
				EarthView::World::Spatial::Math::CVector4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_SpatialLASConvertProxy_CTempVertex_tex( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::SpatialLASConvertProxy::CTempVertex*)pObjectXXXX)->tex = *(EarthView::World::Spatial::Math::CVector4*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_SpatialLASConvertProxy_CTempVertex_color( void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertex* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CTempVertex*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue &objXXXX = ptrNativeObject->color;
				EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_SpatialLASConvertProxy_CTempVertex_color( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::SpatialLASConvertProxy::CTempVertex*)pObjectXXXX)->color = *(EarthView::World::Graphic::CColourValue*)value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CTempVertexVector_push_back_void_CTempVertex(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::SpatialLASConvertProxy::CTempVertex*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CTempVertexVector_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_SpatialLASConvertProxy_CTempVertexVector_front_CTempVertex(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjectXXXX;
				EarthView::World::SpatialLASConvertProxy::CTempVertex& objXXXX = ptrNativeObject->front();
				EarthView::World::SpatialLASConvertProxy::CTempVertex *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_SpatialLASConvertProxy_CTempVertexVector_back_CTempVertex(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjectXXXX;
				EarthView::World::SpatialLASConvertProxy::CTempVertex& objXXXX = ptrNativeObject->back();
				EarthView::World::SpatialLASConvertProxy::CTempVertex *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CTempVertexVector_insert_void_ev_uint32_CTempVertex(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::SpatialLASConvertProxy::CTempVertex*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CTempVertexVector_insert_void_ev_uint32_CTempVertexVector(void *pObjectXXXX, _in ev_uint32 pos, _in void* other )
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::SpatialLASConvertProxy::CTempVertexVector*)other);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CTempVertexVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_SpatialLASConvertProxy_CTempVertexVector_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::SpatialLASConvertProxy::CTempVertexVector* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_SpatialLASConvertProxy_CTempVertexVector_OperatorIndex_CTempVertex_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector& objYYYY = *(EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjXXXX;
				EarthView::World::SpatialLASConvertProxy::CTempVertex& objXXXX = objYYYY[n];
				EarthView::World::SpatialLASConvertProxy::CTempVertex *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_SpatialLASConvertProxy_CTempVertexVector_at_CTempVertex_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjectXXXX;
				EarthView::World::SpatialLASConvertProxy::CTempVertex& objXXXX = ptrNativeObject->at(n);
				EarthView::World::SpatialLASConvertProxy::CTempVertex *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_SpatialLASConvertProxy_CTempVertexVector_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::SpatialLASConvertProxy::CTempVertexVector* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CTempVertexVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CTempVertexVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CTempVertexVector_clear_void(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CTempVertexVector_swap_void_CTempVertexVector(void *pObjectXXXX, _in void* rhs )
			{
				EarthView::World::SpatialLASConvertProxy::CTempVertexVector* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CTempVertexVector*) pObjectXXXX;
				ptrNativeObject->swap(*(EarthView::World::SpatialLASConvertProxy::CTempVertexVector*)rhs);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeParams_OperatorAssign_void_CLasOptimizeParams(void *pObjXXXX, _inout void* params )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams& objXXXX = *((EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjXXXX);
				objXXXX = *(EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*)params;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeParams_setLasOptimizeMethod_void_EVLasOptimizeMethod(void *pObjectXXXX, _in int lasOptimizeMethod )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjectXXXX;
				ptrNativeObject->setLasOptimizeMethod((EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams::EVLasOptimizeMethod)lasOptimizeMethod);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeParams_getLasOptimizeMethod_EVLasOptimizeMethod(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjectXXXX;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams::EVLasOptimizeMethod objXXXX = ptrNativeObject->getLasOptimizeMethod();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeParams_setLasOptimizePersent_void_ev_real32(void *pObjectXXXX, _in ev_real32 lasOptimizePersent )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjectXXXX;
				ptrNativeObject->setLasOptimizePersent(lasOptimizePersent);
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeParams_getLasOptimizePersent_ev_real32(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->getLasOptimizePersent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeParams_setLasCountLowerLimit_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 lasCountLowerLimit )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjectXXXX;
				ptrNativeObject->setLasCountLowerLimit(lasCountLowerLimit);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeParams_getLasCountLowerLimit_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getLasCountLowerLimit();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeParams_setTileVisibleMultiplier_void_ev_real32(void *pObjectXXXX, _in ev_real32 multiplier )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjectXXXX;
				ptrNativeObject->setTileVisibleMultiplier(multiplier);
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeParams_getTileVisibleMultiplier_ev_real32(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->getTileVisibleMultiplier();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeParams_setConvertToDDS_void_ev_bool(void *pObjectXXXX, _in ev_bool convertToDDS )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjectXXXX;
				ptrNativeObject->setConvertToDDS(convertToDDS);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeParams_getConvertToDDS_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getConvertToDDS();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeParams_setBuildQuadtree_void_ev_bool(void *pObjectXXXX, _in ev_bool buildQuadTree )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjectXXXX;
				ptrNativeObject->setBuildQuadtree(buildQuadTree);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeParams_getBuildQuadtree_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getBuildQuadtree();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeParams_setCombineSubMesh_void_ev_bool(void *pObjectXXXX, _in ev_bool combineSubMesh )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjectXXXX;
				ptrNativeObject->setCombineSubMesh(combineSubMesh);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeParams_getCombineSubMesh_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getCombineSubMesh();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeParams_setUseDoubleSideLight_void_ev_bool(void *pObjectXXXX, _in ev_bool useDoubleSideLight )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjectXXXX;
				ptrNativeObject->setUseDoubleSideLight(useDoubleSideLight);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeParams_getUseDoubleSideLight_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getUseDoubleSideLight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeParams_setEncodeTo7z_void_ev_bool(void *pObjectXXXX, _in ev_bool encodeTo7z )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjectXXXX;
				ptrNativeObject->setEncodeTo7z(encodeTo7z);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeParams_getEncodeTo7z_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getEncodeTo7z();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeParams_setUseShareMaterial_void_ev_bool(void *pObjectXXXX, _in ev_bool useShareMat )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjectXXXX;
				ptrNativeObject->setUseShareMaterial(useShareMat);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeParams_getUseShareMaterial_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getUseShareMaterial();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeParams_toXml_void_CXmlElement(void *pObjectXXXX, _inout void* paramElement )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjectXXXX;
				ptrNativeObject->toXml(*(EarthView::World::Core::CXmlElement*)paramElement);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeParams_fromXml_void_CXmlElement(void *pObjectXXXX, _in void* element )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*) pObjectXXXX;
				ptrNativeObject->fromXml(*(EarthView::World::Core::CXmlElement*)element);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool*  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeTool_getSingleton_CLasOptimizeTool( )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool* objXXXX = EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool::getSingleton();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeTool_destorySingleton_void( )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool::destorySingleton();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeTool_optimizeLas_void_StringVector_CAxisAlignedBox_CLasOptimizeParams(void *pObjectXXXX, _inout void* dataFiles, _inout void* box, _inout void* params )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool*) pObjectXXXX;
				ptrNativeObject->optimizeLas(*(EarthView::World::Core::StringVector*)dataFiles, *(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, *(EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams*)params);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeTool_writeVertsToFile_void_EVString_CTempVertexVector(void *pObjectXXXX, _in const char* dataFile, _in const void* vertsList )
			{
				EarthView::World::Core::ev_string dataFile1 = dataFile;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool*) pObjectXXXX;
				ptrNativeObject->writeVertsToFile(dataFile1, *(EarthView::World::SpatialLASConvertProxy::CTempVertexVector*)vertsList);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeTool_translateSubMesh_void_CMatrix4_CSubMesh(void *pObjectXXXX, _in void* translateM, _in EarthView::World::Graphic::CSubMesh* subMesh )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool*) pObjectXXXX;
				ptrNativeObject->translateSubMesh(*(EarthView::World::Spatial::Math::CMatrix4*)translateM, subMesh);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeTool_createLasMetaInfoDB_ev_bool_CObliqueDBUtility(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility )
			{
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->createLasMetaInfoDB(dbUtility);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_SpatialLASConvertProxy_CLasOptimizeTool_writeLasMetaInfo2DB_ev_bool_CObliqueDBUtility_EVString_ev_real32_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, _in char* name, _in ev_real32 value, _in ev_uint32 type )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool* ptrNativeObject = (EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->writeLasMetaInfo2DB(dbUtility, name1, value, type);
				return objXXXX;
			}
		}
	}
}
