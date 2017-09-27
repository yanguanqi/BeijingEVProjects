/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "meshoptimize/meshoptimize.h"
namespace EarthView
{
	namespace MeshOptimize
	{
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_OperatorAssign_void_CMeshOptimizeParams(void *pObjXXXX, _inout void* params )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams& objXXXX = *((EarthView::MeshOptimize::CMeshOptimizeParams*) pObjXXXX);
			objXXXX = *(EarthView::MeshOptimize::CMeshOptimizeParams*)params;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_setTriangleOptimizeType_void_EVTriangleOptimizeType(void *pObjectXXXX, _in int triOptimizeType )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ptrNativeObject->setTriangleOptimizeType((EarthView::MeshOptimize::CMeshOptimizeParams::EVTriangleOptimizeType)triOptimizeType);
		}
		extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_getTriangleOptimizeType_EVTriangleOptimizeType(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			EarthView::MeshOptimize::CMeshOptimizeParams::EVTriangleOptimizeType objXXXX = ptrNativeObject->getTriangleOptimizeType();
			return (int)objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_setTriangleOptimizeMethod_void_EVTriangleOptimizeMethod(void *pObjectXXXX, _in int triOptimizeMethod )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ptrNativeObject->setTriangleOptimizeMethod((EarthView::MeshOptimize::CMeshOptimizeParams::EVTriangleOptimizeMethod)triOptimizeMethod);
		}
		extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_getTriangleOptimizeMethod_EVTriangleOptimizeMethod(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			EarthView::MeshOptimize::CMeshOptimizeParams::EVTriangleOptimizeMethod objXXXX = ptrNativeObject->getTriangleOptimizeMethod();
			return (int)objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_setDefaultOptimizePersent_void_ev_real32(void *pObjectXXXX, _in ev_real32 defaultOptimizePersent )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ptrNativeObject->setDefaultOptimizePersent(defaultOptimizePersent);
		}
		extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_getDefaultOptimizePersent_ev_real32(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ev_real32 objXXXX = ptrNativeObject->getDefaultOptimizePersent();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_setLineOptimizePersent_void_ev_real32(void *pObjectXXXX, _in ev_real32 lineOptimizePersent )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ptrNativeObject->setLineOptimizePersent(lineOptimizePersent);
		}
		extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_getLineOptimizePersent_ev_real32(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ev_real32 objXXXX = ptrNativeObject->getLineOptimizePersent();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_setSubmeshTrangleCountLowerLimit_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 submeshTrangleCountLowerLimit )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ptrNativeObject->setSubmeshTrangleCountLowerLimit(submeshTrangleCountLowerLimit);
		}
		extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_getSubmeshTrangleCountLowerLimit_ev_uint32(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ev_uint32 objXXXX = ptrNativeObject->getSubmeshTrangleCountLowerLimit();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_setTriangleRelationshipRebulid_void_ev_bool(void *pObjectXXXX, _in ev_bool triRelationshipRebulid )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ptrNativeObject->setTriangleRelationshipRebulid(triRelationshipRebulid);
		}
		extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_getTriangleRelationshipRebulid_ev_bool(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ev_bool objXXXX = ptrNativeObject->getTriangleRelationshipRebulid();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_setConvertToDDS_void_ev_bool(void *pObjectXXXX, _in ev_bool toDDS )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ptrNativeObject->setConvertToDDS(toDDS);
		}
		extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_getConvertToDDS_ev_bool(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ev_bool objXXXX = ptrNativeObject->getConvertToDDS();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_setBuildQuadtree_void_ev_bool(void *pObjectXXXX, _in ev_bool buildQuadTree )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ptrNativeObject->setBuildQuadtree(buildQuadTree);
		}
		extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_getBuildQuadtree_ev_bool(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ev_bool objXXXX = ptrNativeObject->getBuildQuadtree();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_setCombineSubMesh_void_ev_bool(void *pObjectXXXX, _in ev_bool combineSubMesh )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ptrNativeObject->setCombineSubMesh(combineSubMesh);
		}
		extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_getCombineSubMesh_ev_bool(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ev_bool objXXXX = ptrNativeObject->getCombineSubMesh();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_setUseDoubleSideLight_void_ev_bool(void *pObjectXXXX, _in ev_bool useDoubleSideLight )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ptrNativeObject->setUseDoubleSideLight(useDoubleSideLight);
		}
		extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_getUseDoubleSideLight_ev_bool(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ev_bool objXXXX = ptrNativeObject->getUseDoubleSideLight();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_setMaxVertexCombineNormalAngle_void_ev_real32(void *pObjectXXXX, _in ev_real32 maxNormalAngle )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ptrNativeObject->setMaxVertexCombineNormalAngle(maxNormalAngle);
		}
		extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_getMaxVertexCombineNormalAngle_ev_real32(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ev_real32 objXXXX = ptrNativeObject->getMaxVertexCombineNormalAngle();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_toXml_void_CXmlElement(void *pObjectXXXX, _inout void* paramElement )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ptrNativeObject->toXml(*(EarthView::World::Core::CXmlElement*)paramElement);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_fromXml_void_CXmlElement(void *pObjectXXXX, _in void* element )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ptrNativeObject->fromXml(*(EarthView::World::Core::CXmlElement*)element);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_setEncodeTo7z_void_ev_bool(void *pObjectXXXX, _in ev_bool encodeTo7z )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ptrNativeObject->setEncodeTo7z(encodeTo7z);
		}
		extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_getEncodeTo7z_ev_bool(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ev_bool objXXXX = ptrNativeObject->getEncodeTo7z();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_setSubmeshCountUpperLimit_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 submeshCountUpperLimit )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ptrNativeObject->setSubmeshCountUpperLimit(submeshCountUpperLimit);
		}
		extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_getSubmeshCountUpperLimit_ev_uint32(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ev_uint32 objXXXX = ptrNativeObject->getSubmeshCountUpperLimit();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_setDiscardTrangleCountLowerLimit_void_ev_real32(void *pObjectXXXX, _in ev_real32 discardTrangleCountLowerLimit )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ptrNativeObject->setDiscardTrangleCountLowerLimit(discardTrangleCountLowerLimit);
		}
		extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_getDiscardTrangleCountLowerLimit_ev_real32(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ev_real32 objXXXX = ptrNativeObject->getDiscardTrangleCountLowerLimit();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_setOptimizeParamLimit_void_BoxSizeWithProportion(void *pObjectXXXX, _in EarthView::MeshOptimize::CMeshOptimizeParams::BoxSizeWithProportion bigSubmeshOptimizeParam )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ptrNativeObject->setOptimizeParamLimit(bigSubmeshOptimizeParam);
		}
		extern "C" EV_DLL_EXPORT  EarthView::MeshOptimize::CMeshOptimizeParams::BoxSizeWithProportion  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_getOptimizeParamLimit_BoxSizeWithProportion(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			EarthView::MeshOptimize::CMeshOptimizeParams::BoxSizeWithProportion objXXXX = ptrNativeObject->getOptimizeParamLimit();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_setTileVisibleMultiplier_void_ev_real32(void *pObjectXXXX, _in ev_real32 multiplier )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ptrNativeObject->setTileVisibleMultiplier(multiplier);
		}
		extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_getTileVisibleMultiplier_ev_real32(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ev_real32 objXXXX = ptrNativeObject->getTileVisibleMultiplier();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_setUseShareMaterial_void_ev_bool(void *pObjectXXXX, _in ev_bool useShareMat )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ptrNativeObject->setUseShareMaterial(useShareMat);
		}
		extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_MeshOptimize_CMeshOptimizeParams_getUseShareMaterial_ev_bool(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimizeParams* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimizeParams*) pObjectXXXX;
			ev_bool objXXXX = ptrNativeObject->getUseShareMaterial();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimize_addVertex_void_float_float_float(void *pObjectXXXX, _in float x, _in float y, _in float z )
		{
			EarthView::MeshOptimize::CMeshOptimize* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimize*) pObjectXXXX;
			ptrNativeObject->addVertex(x, y, z);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimize_addNormal_void_float_float_float(void *pObjectXXXX, _in float x, _in float y, _in float z )
		{
			EarthView::MeshOptimize::CMeshOptimize* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimize*) pObjectXXXX;
			ptrNativeObject->addNormal(x, y, z);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimize_addTex_void_float_float(void *pObjectXXXX, _in float u, _in float v )
		{
			EarthView::MeshOptimize::CMeshOptimize* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimize*) pObjectXXXX;
			ptrNativeObject->addTex(u, v);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimize_addColor_void_float_float_float_float(void *pObjectXXXX, _in float r, _in float g, _in float b, _in float a )
		{
			EarthView::MeshOptimize::CMeshOptimize* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimize*) pObjectXXXX;
			ptrNativeObject->addColor(r, g, b, a);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimize_addFace_void_ev_uint32_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 v0, _in ev_uint32 v1, _in ev_uint32 v2 )
		{
			EarthView::MeshOptimize::CMeshOptimize* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimize*) pObjectXXXX;
			ptrNativeObject->addFace(v0, v1, v2);
		}
		extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_MeshOptimize_CMeshOptimize_optimize_ev_bool(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimize* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimize*) pObjectXXXX;
			ev_bool objXXXX = ptrNativeObject->optimize();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_MeshOptimize_CMeshOptimize_vertex_is_valid_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 vertexID )
		{
			EarthView::MeshOptimize::CMeshOptimize* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimize*) pObjectXXXX;
			ev_bool objXXXX = ptrNativeObject->vertex_is_valid(vertexID);
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_MeshOptimize_CMeshOptimize_vertexCount_ev_uint32(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimize* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimize*) pObjectXXXX;
			ev_uint32 objXXXX = ptrNativeObject->vertexCount();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimize_vertex_void_ev_uint32_float_float_float(void *pObjectXXXX, _in ev_uint32 i, _inout float& x, _inout float& y, _inout float& z )
		{
			EarthView::MeshOptimize::CMeshOptimize* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimize*) pObjectXXXX;
			ptrNativeObject->vertex(i, x, y, z);
		}
		extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_MeshOptimize_CMeshOptimize_normalCount_ev_uint32(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimize* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimize*) pObjectXXXX;
			ev_uint32 objXXXX = ptrNativeObject->normalCount();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimize_normal_void_ev_uint32_float_float_float(void *pObjectXXXX, _in ev_uint32 i, _inout float& x, _inout float& y, _inout float& z )
		{
			EarthView::MeshOptimize::CMeshOptimize* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimize*) pObjectXXXX;
			ptrNativeObject->normal(i, x, y, z);
		}
		extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_MeshOptimize_CMeshOptimize_texCount_ev_uint32(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimize* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimize*) pObjectXXXX;
			ev_uint32 objXXXX = ptrNativeObject->texCount();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimize_tex_void_ev_uint32_float_float(void *pObjectXXXX, _in ev_uint32 i, _inout float& u, _inout float& v )
		{
			EarthView::MeshOptimize::CMeshOptimize* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimize*) pObjectXXXX;
			ptrNativeObject->tex(i, u, v);
		}
		extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_MeshOptimize_CMeshOptimize_face_is_valid_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 faceID )
		{
			EarthView::MeshOptimize::CMeshOptimize* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimize*) pObjectXXXX;
			ev_bool objXXXX = ptrNativeObject->face_is_valid(faceID);
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_MeshOptimize_CMeshOptimize_faceCount_ev_uint32(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimize* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimize*) pObjectXXXX;
			ev_uint32 objXXXX = ptrNativeObject->faceCount();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimize_face_void_ev_uint32_ev_uint32_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 i, _inout ev_uint32& v0, _inout ev_uint32& v1, _inout ev_uint32& v2 )
		{
			EarthView::MeshOptimize::CMeshOptimize* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimize*) pObjectXXXX;
			ptrNativeObject->face(i, v0, v1, v2);
		}
		extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_MeshOptimize_CMeshOptimize_colorCount_ev_uint32(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimize* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimize*) pObjectXXXX;
			ev_uint32 objXXXX = ptrNativeObject->colorCount();
			return objXXXX;
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimize_color_void_ev_uint32_float_float_float_float(void *pObjectXXXX, _in ev_uint32 i, _inout float& r, _inout float& g, _inout float& b, _inout float& a )
		{
			EarthView::MeshOptimize::CMeshOptimize* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimize*) pObjectXXXX;
			ptrNativeObject->color(i, r, g, b, a);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimize_dispose_void(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimize* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimize*) pObjectXXXX;
			ptrNativeObject->dispose();
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimize_createStdModel_void(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimize* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimize*) pObjectXXXX;
			ptrNativeObject->createStdModel();
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimize_initializeQSlim_void(void *pObjectXXXX )
		{
			EarthView::MeshOptimize::CMeshOptimize* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimize*) pObjectXXXX;
			ptrNativeObject->initializeQSlim();
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimize_computeFaceNormal_void_ev_uint32_float_float_float_bool(void *pObjectXXXX, _in ev_uint32 f, _inout float& x, _inout float& y, _inout float& z, _in bool will_unitize )
		{
			EarthView::MeshOptimize::CMeshOptimize* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimize*) pObjectXXXX;
			ptrNativeObject->computeFaceNormal(f, x, y, z, will_unitize);
		}
		extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_MeshOptimize_CMeshOptimize_computeVertexNormal_void_ev_uint32_float_float_float(void *pObjectXXXX, _in ev_uint32 v, _inout float& x, _inout float& y, _inout float& z )
		{
			EarthView::MeshOptimize::CMeshOptimize* ptrNativeObject = (EarthView::MeshOptimize::CMeshOptimize*) pObjectXXXX;
			ptrNativeObject->computeVertexNormal(v, x, y, z);
		}
	}
}
