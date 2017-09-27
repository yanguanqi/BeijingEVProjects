/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/optimisedutil.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_COptimisedUtil_softwareVertexSkinning_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_Callback)(_in const ev_real32* srcPosPtr, _in ev_real32* destPosPtr, _in const ev_real32* srcNormPtr, _in ev_real32* destNormPtr, _in const ev_real32* blendWeightPtr, _in const ev_uchar* blendIndexPtr, _in const EarthView::World::Spatial::Math::CMatrix4** blendMatrices, _in ev_uint64  srcPosStride, _in ev_uint64  destPosStride, _in ev_uint64  srcNormStride, _in ev_uint64  destNormStride, _in ev_uint64  blendWeightStride, _in ev_uint64  blendIndexStride, _in ev_uint64  numWeightsPerVertex, _in ev_uint64  numVertices);
			typedef void  ( _stdcall EarthView_World_Graphic_COptimisedUtil_softwareVertexMorph_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback)(_in Real t, _in const ev_real32* srcPos1, _in const ev_real32* srcPos2, _in ev_real32* dstPos, _in ev_uint64  pos1VSize, _in ev_uint64  pos2VSize, _in ev_uint64  dstVSize, _in ev_uint64  numVertices, _in ev_bool morphNormals);
			typedef void  ( _stdcall EarthView_World_Graphic_COptimisedUtil_concatenateAffineMatrices_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t_Callback)(_in const void* baseMatrix, _in const EarthView::World::Spatial::Math::CMatrix4* srcMatrices, _in EarthView::World::Spatial::Math::CMatrix4* dstMatrices, _in ev_uint64  numMatrices);
			typedef void  ( _stdcall EarthView_World_Graphic_COptimisedUtil_calculateFaceNormals_void_ev_real32_CTriangle_CVector4_ev_size_t_Callback)(_in const ev_real32* positions, _in const EarthView::World::Graphic::CEdgeData::CTriangle* triangles, _in EarthView::World::Spatial::Math::CVector4* faceNormals, _in ev_uint64  numTriangles);
			typedef void  ( _stdcall EarthView_World_Graphic_COptimisedUtil_calculateLightFacing_void_CVector4_CVector4_ev_char_ev_size_t_Callback)(_in const void* lightPos, _in const EarthView::World::Spatial::Math::CVector4* faceNormals, _in ev_char* lightFacings, _in ev_uint64  numFaces);
			typedef void  ( _stdcall EarthView_World_Graphic_COptimisedUtil_extrudeVertices_void_CVector4_Real_ev_real32_ev_real32_ev_size_t_Callback)(_in const void* lightPos, _in Real extrudeDist, _in const ev_real32* srcPositions, _in ev_real32* destPositions, _in ev_uint64  numVertices);
			class COptimisedUtilProxy : public EarthView::World::Graphic::COptimisedUtil
			{
			private:
				EarthView_World_Graphic_COptimisedUtil_softwareVertexSkinning_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_COptimisedUtil_softwareVertexSkinning_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_COptimisedUtil_softwareVertexMorph_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback* m_EarthView_World_Graphic_COptimisedUtil_softwareVertexMorph_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback;
				EarthView_World_Graphic_COptimisedUtil_concatenateAffineMatrices_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t_Callback* m_EarthView_World_Graphic_COptimisedUtil_concatenateAffineMatrices_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t_Callback;
				EarthView_World_Graphic_COptimisedUtil_calculateFaceNormals_void_ev_real32_CTriangle_CVector4_ev_size_t_Callback* m_EarthView_World_Graphic_COptimisedUtil_calculateFaceNormals_void_ev_real32_CTriangle_CVector4_ev_size_t_Callback;
				EarthView_World_Graphic_COptimisedUtil_calculateLightFacing_void_CVector4_CVector4_ev_char_ev_size_t_Callback* m_EarthView_World_Graphic_COptimisedUtil_calculateLightFacing_void_CVector4_CVector4_ev_char_ev_size_t_Callback;
				EarthView_World_Graphic_COptimisedUtil_extrudeVertices_void_CVector4_Real_ev_real32_ev_real32_ev_size_t_Callback* m_EarthView_World_Graphic_COptimisedUtil_extrudeVertices_void_CVector4_Real_ev_real32_ev_real32_ev_size_t_Callback;
			public:
				COptimisedUtilProxy(EarthView::World::Core::CNameValuePairList *pList) : COptimisedUtil(pList)
				{
					m_EarthView_World_Graphic_COptimisedUtil_softwareVertexSkinning_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_COptimisedUtil_softwareVertexMorph_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COptimisedUtil_concatenateAffineMatrices_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_COptimisedUtil_calculateFaceNormals_void_ev_real32_CTriangle_CVector4_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_COptimisedUtil_calculateLightFacing_void_CVector4_CVector4_ev_char_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_COptimisedUtil_extrudeVertices_void_CVector4_Real_ev_real32_ev_real32_ev_size_t_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_COptimisedUtil_softwareVertexSkinning_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t(EarthView_World_Graphic_COptimisedUtil_softwareVertexSkinning_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COptimisedUtil_softwareVertexSkinning_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COptimisedUtil_softwareVertexMorph_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool(EarthView_World_Graphic_COptimisedUtil_softwareVertexMorph_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COptimisedUtil_softwareVertexMorph_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COptimisedUtil_concatenateAffineMatrices_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t(EarthView_World_Graphic_COptimisedUtil_concatenateAffineMatrices_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COptimisedUtil_concatenateAffineMatrices_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COptimisedUtil_calculateFaceNormals_void_ev_real32_CTriangle_CVector4_ev_size_t(EarthView_World_Graphic_COptimisedUtil_calculateFaceNormals_void_ev_real32_CTriangle_CVector4_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COptimisedUtil_calculateFaceNormals_void_ev_real32_CTriangle_CVector4_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COptimisedUtil_calculateLightFacing_void_CVector4_CVector4_ev_char_ev_size_t(EarthView_World_Graphic_COptimisedUtil_calculateLightFacing_void_CVector4_CVector4_ev_char_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COptimisedUtil_calculateLightFacing_void_CVector4_CVector4_ev_char_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COptimisedUtil_extrudeVertices_void_CVector4_Real_ev_real32_ev_real32_ev_size_t(EarthView_World_Graphic_COptimisedUtil_extrudeVertices_void_CVector4_Real_ev_real32_ev_real32_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COptimisedUtil_extrudeVertices_void_CVector4_Real_ev_real32_ev_real32_ev_size_t_Callback = pCallback;
				}
				virtual void softwareVertexSkinning(_in const ev_real32* srcPosPtr, _in ev_real32* destPosPtr, _in const ev_real32* srcNormPtr, _in ev_real32* destNormPtr, _in const ev_real32* blendWeightPtr, _in const ev_uchar* blendIndexPtr, _in const EarthView::World::Spatial::Math::CMatrix4** blendMatrices, _in ev_size_t srcPosStride, _in ev_size_t destPosStride, _in ev_size_t srcNormStride, _in ev_size_t destNormStride, _in ev_size_t blendWeightStride, _in ev_size_t blendIndexStride, _in ev_size_t numWeightsPerVertex, _in ev_size_t numVertices)
				{
					if(m_EarthView_World_Graphic_COptimisedUtil_softwareVertexSkinning_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COptimisedUtil_softwareVertexSkinning_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_Callback(srcPosPtr, destPosPtr, srcNormPtr, destNormPtr, blendWeightPtr, blendIndexPtr, blendMatrices, srcPosStride, destPosStride, srcNormStride, destNormStride, blendWeightStride, blendIndexStride, numWeightsPerVertex, numVertices);
					}
					else
						return this->COptimisedUtil::softwareVertexSkinning(srcPosPtr, destPosPtr, srcNormPtr, destNormPtr, blendWeightPtr, blendIndexPtr, blendMatrices, srcPosStride, destPosStride, srcNormStride, destNormStride, blendWeightStride, blendIndexStride, numWeightsPerVertex, numVertices);
				}
				virtual void softwareVertexMorph(_in Real t, _in const ev_real32* srcPos1, _in const ev_real32* srcPos2, _in ev_real32* dstPos, _in ev_size_t pos1VSize, _in ev_size_t pos2VSize, _in ev_size_t dstVSize, _in ev_size_t numVertices, _in ev_bool morphNormals)
				{
					if(m_EarthView_World_Graphic_COptimisedUtil_softwareVertexMorph_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COptimisedUtil_softwareVertexMorph_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback(t, srcPos1, srcPos2, dstPos, pos1VSize, pos2VSize, dstVSize, numVertices, morphNormals);
					}
					else
						return this->COptimisedUtil::softwareVertexMorph(t, srcPos1, srcPos2, dstPos, pos1VSize, pos2VSize, dstVSize, numVertices, morphNormals);
				}
				virtual void concatenateAffineMatrices(_in const EarthView::World::Spatial::Math::CMatrix4& baseMatrix, _in const EarthView::World::Spatial::Math::CMatrix4* srcMatrices, _in EarthView::World::Spatial::Math::CMatrix4* dstMatrices, _in ev_size_t numMatrices)
				{
					if(m_EarthView_World_Graphic_COptimisedUtil_concatenateAffineMatrices_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COptimisedUtil_concatenateAffineMatrices_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t_Callback(&baseMatrix, srcMatrices, dstMatrices, numMatrices);
					}
					else
						return this->COptimisedUtil::concatenateAffineMatrices(baseMatrix, srcMatrices, dstMatrices, numMatrices);
				}
				virtual void calculateFaceNormals(_in const ev_real32* positions, _in const EarthView::World::Graphic::CEdgeData::CTriangle* triangles, _in EarthView::World::Spatial::Math::CVector4* faceNormals, _in ev_size_t numTriangles)
				{
					if(m_EarthView_World_Graphic_COptimisedUtil_calculateFaceNormals_void_ev_real32_CTriangle_CVector4_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COptimisedUtil_calculateFaceNormals_void_ev_real32_CTriangle_CVector4_ev_size_t_Callback(positions, triangles, faceNormals, numTriangles);
					}
					else
						return this->COptimisedUtil::calculateFaceNormals(positions, triangles, faceNormals, numTriangles);
				}
				virtual void calculateLightFacing(_in const EarthView::World::Spatial::Math::CVector4& lightPos, _in const EarthView::World::Spatial::Math::CVector4* faceNormals, _in ev_char* lightFacings, _in ev_size_t numFaces)
				{
					if(m_EarthView_World_Graphic_COptimisedUtil_calculateLightFacing_void_CVector4_CVector4_ev_char_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COptimisedUtil_calculateLightFacing_void_CVector4_CVector4_ev_char_ev_size_t_Callback(&lightPos, faceNormals, lightFacings, numFaces);
					}
					else
						return this->COptimisedUtil::calculateLightFacing(lightPos, faceNormals, lightFacings, numFaces);
				}
				virtual void extrudeVertices(_in const EarthView::World::Spatial::Math::CVector4& lightPos, _in Real extrudeDist, _in const ev_real32* srcPositions, _in ev_real32* destPositions, _in ev_size_t numVertices)
				{
					if(m_EarthView_World_Graphic_COptimisedUtil_extrudeVertices_void_CVector4_Real_ev_real32_ev_real32_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COptimisedUtil_extrudeVertices_void_CVector4_Real_ev_real32_ev_real32_ev_size_t_Callback(&lightPos, extrudeDist, srcPositions, destPositions, numVertices);
					}
					else
						return this->COptimisedUtil::extrudeVertices(lightPos, extrudeDist, srcPositions, destPositions, numVertices);
				}
			};
			REGISTER_FACTORY_CLASS(COptimisedUtilProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COptimisedUtil*  _stdcall EarthView_World_Graphic_COptimisedUtil_getImplementation_COptimisedUtil( )
			{
				EarthView::World::Graphic::COptimisedUtil* objXXXX = EarthView::World::Graphic::COptimisedUtil::getImplementation();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COptimisedUtil_softwareVertexSkinning_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t(void *pObjectXXXX, _in const ev_real32* srcPosPtr, _in ev_real32* destPosPtr, _in const ev_real32* srcNormPtr, _in ev_real32* destNormPtr, _in const ev_real32* blendWeightPtr, _in const ev_uchar* blendIndexPtr, _in const EarthView::World::Spatial::Math::CMatrix4** blendMatrices, _in ev_uint64  srcPosStride, _in ev_uint64  destPosStride, _in ev_uint64  srcNormStride, _in ev_uint64  destNormStride, _in ev_uint64  blendWeightStride, _in ev_uint64  blendIndexStride, _in ev_uint64  numWeightsPerVertex, _in ev_uint64  numVertices )
			{
				EarthView::World::Graphic::COptimisedUtil* ptrNativeObject = (EarthView::World::Graphic::COptimisedUtil*) pObjectXXXX;
				if (dynamic_cast<COptimisedUtilProxy*>((EarthView::World::Graphic::COptimisedUtil*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::COptimisedUtil::softwareVertexSkinning(srcPosPtr, destPosPtr, srcNormPtr, destNormPtr, blendWeightPtr, blendIndexPtr, blendMatrices, srcPosStride, destPosStride, srcNormStride, destNormStride, blendWeightStride, blendIndexStride, numWeightsPerVertex, numVertices);
				else
					ptrNativeObject->softwareVertexSkinning(srcPosPtr, destPosPtr, srcNormPtr, destNormPtr, blendWeightPtr, blendIndexPtr, blendMatrices, srcPosStride, destPosStride, srcNormStride, destNormStride, blendWeightStride, blendIndexStride, numWeightsPerVertex, numVertices);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COptimisedUtil_softwareVertexSkinning_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_COptimisedUtil_softwareVertexSkinning_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_Callback* pCallback )
			{
				COptimisedUtilProxy* ptr = dynamic_cast<COptimisedUtilProxy*>((EarthView::World::Graphic::COptimisedUtil*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COptimisedUtil_softwareVertexSkinning_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COptimisedUtil_softwareVertexSkinning_void_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_NoVirtual(void *pObjectXXXX, _in const ev_real32* srcPosPtr, _in ev_real32* destPosPtr, _in const ev_real32* srcNormPtr, _in ev_real32* destNormPtr, _in const ev_real32* blendWeightPtr, _in const ev_uchar* blendIndexPtr, _in const EarthView::World::Spatial::Math::CMatrix4** blendMatrices, _in ev_uint64  srcPosStride, _in ev_uint64  destPosStride, _in ev_uint64  srcNormStride, _in ev_uint64  destNormStride, _in ev_uint64  blendWeightStride, _in ev_uint64  blendIndexStride, _in ev_uint64  numWeightsPerVertex, _in ev_uint64  numVertices )
			{
				EarthView::World::Graphic::COptimisedUtil* ptrNativeObject = (EarthView::World::Graphic::COptimisedUtil*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::COptimisedUtil::softwareVertexSkinning(srcPosPtr, destPosPtr, srcNormPtr, destNormPtr, blendWeightPtr, blendIndexPtr, blendMatrices, srcPosStride, destPosStride, srcNormStride, destNormStride, blendWeightStride, blendIndexStride, numWeightsPerVertex, numVertices);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COptimisedUtil_softwareVertexMorph_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool(void *pObjectXXXX, _in Real t, _in const ev_real32* srcPos1, _in const ev_real32* srcPos2, _in ev_real32* dstPos, _in ev_uint64  pos1VSize, _in ev_uint64  pos2VSize, _in ev_uint64  dstVSize, _in ev_uint64  numVertices, _in ev_bool morphNormals )
			{
				EarthView::World::Graphic::COptimisedUtil* ptrNativeObject = (EarthView::World::Graphic::COptimisedUtil*) pObjectXXXX;
				if (dynamic_cast<COptimisedUtilProxy*>((EarthView::World::Graphic::COptimisedUtil*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::COptimisedUtil::softwareVertexMorph(t, srcPos1, srcPos2, dstPos, pos1VSize, pos2VSize, dstVSize, numVertices, morphNormals);
				else
					ptrNativeObject->softwareVertexMorph(t, srcPos1, srcPos2, dstPos, pos1VSize, pos2VSize, dstVSize, numVertices, morphNormals);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COptimisedUtil_softwareVertexMorph_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COptimisedUtil_softwareVertexMorph_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback* pCallback )
			{
				COptimisedUtilProxy* ptr = dynamic_cast<COptimisedUtilProxy*>((EarthView::World::Graphic::COptimisedUtil*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COptimisedUtil_softwareVertexMorph_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COptimisedUtil_softwareVertexMorph_void_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_NoVirtual(void *pObjectXXXX, _in Real t, _in const ev_real32* srcPos1, _in const ev_real32* srcPos2, _in ev_real32* dstPos, _in ev_uint64  pos1VSize, _in ev_uint64  pos2VSize, _in ev_uint64  dstVSize, _in ev_uint64  numVertices, _in ev_bool morphNormals )
			{
				EarthView::World::Graphic::COptimisedUtil* ptrNativeObject = (EarthView::World::Graphic::COptimisedUtil*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::COptimisedUtil::softwareVertexMorph(t, srcPos1, srcPos2, dstPos, pos1VSize, pos2VSize, dstVSize, numVertices, morphNormals);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COptimisedUtil_concatenateAffineMatrices_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t(void *pObjectXXXX, _in const void* baseMatrix, _in const EarthView::World::Spatial::Math::CMatrix4* srcMatrices, _in EarthView::World::Spatial::Math::CMatrix4* dstMatrices, _in ev_uint64  numMatrices )
			{
				EarthView::World::Graphic::COptimisedUtil* ptrNativeObject = (EarthView::World::Graphic::COptimisedUtil*) pObjectXXXX;
				if (dynamic_cast<COptimisedUtilProxy*>((EarthView::World::Graphic::COptimisedUtil*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::COptimisedUtil::concatenateAffineMatrices(*(EarthView::World::Spatial::Math::CMatrix4*)baseMatrix, srcMatrices, dstMatrices, numMatrices);
				else
					ptrNativeObject->concatenateAffineMatrices(*(EarthView::World::Spatial::Math::CMatrix4*)baseMatrix, srcMatrices, dstMatrices, numMatrices);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COptimisedUtil_concatenateAffineMatrices_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_COptimisedUtil_concatenateAffineMatrices_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t_Callback* pCallback )
			{
				COptimisedUtilProxy* ptr = dynamic_cast<COptimisedUtilProxy*>((EarthView::World::Graphic::COptimisedUtil*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COptimisedUtil_concatenateAffineMatrices_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COptimisedUtil_concatenateAffineMatrices_void_CMatrix4_CMatrix4_CMatrix4_ev_size_t_NoVirtual(void *pObjectXXXX, _in const void* baseMatrix, _in const EarthView::World::Spatial::Math::CMatrix4* srcMatrices, _in EarthView::World::Spatial::Math::CMatrix4* dstMatrices, _in ev_uint64  numMatrices )
			{
				EarthView::World::Graphic::COptimisedUtil* ptrNativeObject = (EarthView::World::Graphic::COptimisedUtil*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::COptimisedUtil::concatenateAffineMatrices(*(EarthView::World::Spatial::Math::CMatrix4*)baseMatrix, srcMatrices, dstMatrices, numMatrices);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COptimisedUtil_calculateFaceNormals_void_ev_real32_CTriangle_CVector4_ev_size_t(void *pObjectXXXX, _in const ev_real32* positions, _in const EarthView::World::Graphic::CEdgeData::CTriangle* triangles, _in EarthView::World::Spatial::Math::CVector4* faceNormals, _in ev_uint64  numTriangles )
			{
				EarthView::World::Graphic::COptimisedUtil* ptrNativeObject = (EarthView::World::Graphic::COptimisedUtil*) pObjectXXXX;
				if (dynamic_cast<COptimisedUtilProxy*>((EarthView::World::Graphic::COptimisedUtil*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::COptimisedUtil::calculateFaceNormals(positions, triangles, faceNormals, numTriangles);
				else
					ptrNativeObject->calculateFaceNormals(positions, triangles, faceNormals, numTriangles);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COptimisedUtil_calculateFaceNormals_void_ev_real32_CTriangle_CVector4_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_COptimisedUtil_calculateFaceNormals_void_ev_real32_CTriangle_CVector4_ev_size_t_Callback* pCallback )
			{
				COptimisedUtilProxy* ptr = dynamic_cast<COptimisedUtilProxy*>((EarthView::World::Graphic::COptimisedUtil*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COptimisedUtil_calculateFaceNormals_void_ev_real32_CTriangle_CVector4_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COptimisedUtil_calculateFaceNormals_void_ev_real32_CTriangle_CVector4_ev_size_t_NoVirtual(void *pObjectXXXX, _in const ev_real32* positions, _in const EarthView::World::Graphic::CEdgeData::CTriangle* triangles, _in EarthView::World::Spatial::Math::CVector4* faceNormals, _in ev_uint64  numTriangles )
			{
				EarthView::World::Graphic::COptimisedUtil* ptrNativeObject = (EarthView::World::Graphic::COptimisedUtil*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::COptimisedUtil::calculateFaceNormals(positions, triangles, faceNormals, numTriangles);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COptimisedUtil_calculateLightFacing_void_CVector4_CVector4_ev_char_ev_size_t(void *pObjectXXXX, _in const void* lightPos, _in const EarthView::World::Spatial::Math::CVector4* faceNormals, _in ev_char* lightFacings, _in ev_uint64  numFaces )
			{
				EarthView::World::Graphic::COptimisedUtil* ptrNativeObject = (EarthView::World::Graphic::COptimisedUtil*) pObjectXXXX;
				if (dynamic_cast<COptimisedUtilProxy*>((EarthView::World::Graphic::COptimisedUtil*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::COptimisedUtil::calculateLightFacing(*(EarthView::World::Spatial::Math::CVector4*)lightPos, faceNormals, lightFacings, numFaces);
				else
					ptrNativeObject->calculateLightFacing(*(EarthView::World::Spatial::Math::CVector4*)lightPos, faceNormals, lightFacings, numFaces);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COptimisedUtil_calculateLightFacing_void_CVector4_CVector4_ev_char_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_COptimisedUtil_calculateLightFacing_void_CVector4_CVector4_ev_char_ev_size_t_Callback* pCallback )
			{
				COptimisedUtilProxy* ptr = dynamic_cast<COptimisedUtilProxy*>((EarthView::World::Graphic::COptimisedUtil*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COptimisedUtil_calculateLightFacing_void_CVector4_CVector4_ev_char_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COptimisedUtil_calculateLightFacing_void_CVector4_CVector4_ev_char_ev_size_t_NoVirtual(void *pObjectXXXX, _in const void* lightPos, _in const EarthView::World::Spatial::Math::CVector4* faceNormals, _in ev_char* lightFacings, _in ev_uint64  numFaces )
			{
				EarthView::World::Graphic::COptimisedUtil* ptrNativeObject = (EarthView::World::Graphic::COptimisedUtil*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::COptimisedUtil::calculateLightFacing(*(EarthView::World::Spatial::Math::CVector4*)lightPos, faceNormals, lightFacings, numFaces);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COptimisedUtil_extrudeVertices_void_CVector4_Real_ev_real32_ev_real32_ev_size_t(void *pObjectXXXX, _in const void* lightPos, _in Real extrudeDist, _in const ev_real32* srcPositions, _in ev_real32* destPositions, _in ev_uint64  numVertices )
			{
				EarthView::World::Graphic::COptimisedUtil* ptrNativeObject = (EarthView::World::Graphic::COptimisedUtil*) pObjectXXXX;
				if (dynamic_cast<COptimisedUtilProxy*>((EarthView::World::Graphic::COptimisedUtil*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::COptimisedUtil::extrudeVertices(*(EarthView::World::Spatial::Math::CVector4*)lightPos, extrudeDist, srcPositions, destPositions, numVertices);
				else
					ptrNativeObject->extrudeVertices(*(EarthView::World::Spatial::Math::CVector4*)lightPos, extrudeDist, srcPositions, destPositions, numVertices);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COptimisedUtil_extrudeVertices_void_CVector4_Real_ev_real32_ev_real32_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_COptimisedUtil_extrudeVertices_void_CVector4_Real_ev_real32_ev_real32_ev_size_t_Callback* pCallback )
			{
				COptimisedUtilProxy* ptr = dynamic_cast<COptimisedUtilProxy*>((EarthView::World::Graphic::COptimisedUtil*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COptimisedUtil_extrudeVertices_void_CVector4_Real_ev_real32_ev_real32_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COptimisedUtil_extrudeVertices_void_CVector4_Real_ev_real32_ev_real32_ev_size_t_NoVirtual(void *pObjectXXXX, _in const void* lightPos, _in Real extrudeDist, _in const ev_real32* srcPositions, _in ev_real32* destPositions, _in ev_uint64  numVertices )
			{
				EarthView::World::Graphic::COptimisedUtil* ptrNativeObject = (EarthView::World::Graphic::COptimisedUtil*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::COptimisedUtil::extrudeVertices(*(EarthView::World::Spatial::Math::CVector4*)lightPos, extrudeDist, srcPositions, destPositions, numVertices);
			}
		}
	}
}
