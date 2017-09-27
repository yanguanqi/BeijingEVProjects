/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/optimisedutil.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class JCOptimisedUtilProxy : public EarthView::World::Graphic::COptimisedUtil
			{
			 private:
				EarthView::World::Core::ev_string m_softwareVertexSkinning_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_callback;
				EarthView::World::Core::ev_string m_softwareVertexMorph_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_callback;
				EarthView::World::Core::ev_string m_concatenateAffineMatrices_CMatrix4_CMatrix4_CMatrix4_ev_size_t_callback;
				EarthView::World::Core::ev_string m_calculateFaceNormals_ev_real32_CTriangle_CVector4_ev_size_t_callback;
				EarthView::World::Core::ev_string m_calculateLightFacing_CVector4_CVector4_ev_char_ev_size_t_callback;
				EarthView::World::Core::ev_string m_extrudeVertices_CVector4_Real_ev_real32_ev_real32_ev_size_t_callback;
			public:
				JCOptimisedUtilProxy(EarthView::World::Core::CNameValuePairList *pList) : COptimisedUtil(pList)
				{
				}
				ev_void unRegisterJavaReference()
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
					if(__gr != NULL)
					{
						delete __gr;
						this->registerJavaReference(NULL);
					}
				}
			public:
				void register_softwareVertexSkinning_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_softwareVertexSkinning_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_callback = __method;
				}
				void register_softwareVertexMorph_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_softwareVertexMorph_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_callback = __method;
				}
				void register_concatenateAffineMatrices_CMatrix4_CMatrix4_CMatrix4_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_concatenateAffineMatrices_CMatrix4_CMatrix4_CMatrix4_ev_size_t_callback = __method;
				}
				void register_calculateFaceNormals_ev_real32_CTriangle_CVector4_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_calculateFaceNormals_ev_real32_CTriangle_CVector4_ev_size_t_callback = __method;
				}
				void register_calculateLightFacing_CVector4_CVector4_ev_char_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_calculateLightFacing_CVector4_CVector4_ev_char_ev_size_t_callback = __method;
				}
				void register_extrudeVertices_CVector4_Real_ev_real32_ev_real32_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_extrudeVertices_CVector4_Real_ev_real32_ev_real32_ev_size_t_callback = __method;
				}
				virtual void softwareVertexSkinning(const ev_real32* srcPosPtr, ev_real32* destPosPtr, const ev_real32* srcNormPtr, ev_real32* destNormPtr, const ev_real32* blendWeightPtr, const ev_uchar* blendIndexPtr, const EarthView::World::Spatial::Math::CMatrix4** blendMatrices, ev_size_t srcPosStride, ev_size_t destPosStride, ev_size_t srcNormStride, ev_size_t destNormStride, ev_size_t blendWeightStride, ev_size_t blendIndexStride, ev_size_t numWeightsPerVertex, ev_size_t numVertices)
				{
					if (this->_gRef != NULL && this->m_softwareVertexSkinning_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong srcPosPtr_j = (jlong) srcPosPtr;
						jlong destPosPtr_j = (jlong) destPosPtr;
						jlong srcNormPtr_j = (jlong) srcNormPtr;
						jlong destNormPtr_j = (jlong) destNormPtr;
						jlong blendWeightPtr_j = (jlong) blendWeightPtr;
						jlong blendIndexPtr_j = (jlong) blendIndexPtr;
						jlong blendMatrices_j = (jlong) blendMatrices;
						jlong srcPosStride_j = (jlong) srcPosStride;
						jlong destPosStride_j = (jlong) destPosStride;
						jlong srcNormStride_j = (jlong) srcNormStride;
						jlong destNormStride_j = (jlong) destNormStride;
						jlong blendWeightStride_j = (jlong) blendWeightStride;
						jlong blendIndexStride_j = (jlong) blendIndexStride;
						jlong numWeightsPerVertex_j = (jlong) numWeightsPerVertex;
						jlong numVertices_j = (jlong) numVertices;
						jmethodID __method = __gr->getMethod("softwareVertexSkinning_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , srcPosPtr_j, destPosPtr_j, srcNormPtr_j, destNormPtr_j, blendWeightPtr_j, blendIndexPtr_j, blendMatrices_j, srcPosStride_j, destPosStride_j, srcNormStride_j, destNormStride_j, blendWeightStride_j, blendIndexStride_j, numWeightsPerVertex_j, numVertices_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->COptimisedUtil::softwareVertexSkinning(srcPosPtr, destPosPtr, srcNormPtr, destNormPtr, blendWeightPtr, blendIndexPtr, blendMatrices, srcPosStride, destPosStride, srcNormStride, destNormStride, blendWeightStride, blendIndexStride, numWeightsPerVertex, numVertices);
					}
				}
				virtual void softwareVertexMorph(Real t, const ev_real32* srcPos1, const ev_real32* srcPos2, ev_real32* dstPos, ev_size_t pos1VSize, ev_size_t pos2VSize, ev_size_t dstVSize, ev_size_t numVertices, ev_bool morphNormals)
				{
					if (this->_gRef != NULL && this->m_softwareVertexMorph_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble t_j = (jdouble) t;
						jlong srcPos1_j = (jlong) srcPos1;
						jlong srcPos2_j = (jlong) srcPos2;
						jlong dstPos_j = (jlong) dstPos;
						jlong pos1VSize_j = (jlong) pos1VSize;
						jlong pos2VSize_j = (jlong) pos2VSize;
						jlong dstVSize_j = (jlong) dstVSize;
						jlong numVertices_j = (jlong) numVertices;
						jboolean morphNormals_j = (jboolean) morphNormals;
						jmethodID __method = __gr->getMethod("softwareVertexMorph_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , t_j, srcPos1_j, srcPos2_j, dstPos_j, pos1VSize_j, pos2VSize_j, dstVSize_j, numVertices_j, morphNormals_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->COptimisedUtil::softwareVertexMorph(t, srcPos1, srcPos2, dstPos, pos1VSize, pos2VSize, dstVSize, numVertices, morphNormals);
					}
				}
				virtual void concatenateAffineMatrices(const EarthView::World::Spatial::Math::CMatrix4& baseMatrix, const EarthView::World::Spatial::Math::CMatrix4* srcMatrices, EarthView::World::Spatial::Math::CMatrix4* dstMatrices, ev_size_t numMatrices)
				{
					if (this->_gRef != NULL && this->m_concatenateAffineMatrices_CMatrix4_CMatrix4_CMatrix4_ev_size_t_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong baseMatrix_j = (jlong) &baseMatrix;
						jlong srcMatrices_j = (jlong) srcMatrices;
						jlong dstMatrices_j = (jlong) dstMatrices;
						jlong numMatrices_j = (jlong) numMatrices;
						jmethodID __method = __gr->getMethod("concatenateAffineMatrices_CMatrix4_CMatrix4_CMatrix4_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , baseMatrix_j, srcMatrices_j, dstMatrices_j, numMatrices_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->COptimisedUtil::concatenateAffineMatrices(baseMatrix, srcMatrices, dstMatrices, numMatrices);
					}
				}
				virtual void calculateFaceNormals(const ev_real32* positions, const EarthView::World::Graphic::CEdgeData::CTriangle* triangles, EarthView::World::Spatial::Math::CVector4* faceNormals, ev_size_t numTriangles)
				{
					if (this->_gRef != NULL && this->m_calculateFaceNormals_ev_real32_CTriangle_CVector4_ev_size_t_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong positions_j = (jlong) positions;
						jlong triangles_j = (jlong) triangles;
						jlong faceNormals_j = (jlong) faceNormals;
						jlong numTriangles_j = (jlong) numTriangles;
						jmethodID __method = __gr->getMethod("calculateFaceNormals_ev_real32_CTriangle_CVector4_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , positions_j, triangles_j, faceNormals_j, numTriangles_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->COptimisedUtil::calculateFaceNormals(positions, triangles, faceNormals, numTriangles);
					}
				}
				virtual void calculateLightFacing(const EarthView::World::Spatial::Math::CVector4& lightPos, const EarthView::World::Spatial::Math::CVector4* faceNormals, ev_char* lightFacings, ev_size_t numFaces)
				{
					if (this->_gRef != NULL && this->m_calculateLightFacing_CVector4_CVector4_ev_char_ev_size_t_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong lightPos_j = (jlong) &lightPos;
						jlong faceNormals_j = (jlong) faceNormals;
						jlong lightFacings_j = (jlong) lightFacings;
						jlong numFaces_j = (jlong) numFaces;
						jmethodID __method = __gr->getMethod("calculateLightFacing_CVector4_CVector4_ev_char_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , lightPos_j, faceNormals_j, lightFacings_j, numFaces_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->COptimisedUtil::calculateLightFacing(lightPos, faceNormals, lightFacings, numFaces);
					}
				}
				virtual void extrudeVertices(const EarthView::World::Spatial::Math::CVector4& lightPos, Real extrudeDist, const ev_real32* srcPositions, ev_real32* destPositions, ev_size_t numVertices)
				{
					if (this->_gRef != NULL && this->m_extrudeVertices_CVector4_Real_ev_real32_ev_real32_ev_size_t_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong lightPos_j = (jlong) &lightPos;
						jdouble extrudeDist_j = (jdouble) extrudeDist;
						jlong srcPositions_j = (jlong) srcPositions;
						jlong destPositions_j = (jlong) destPositions;
						jlong numVertices_j = (jlong) numVertices;
						jmethodID __method = __gr->getMethod("extrudeVertices_CVector4_Real_ev_real32_ev_real32_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , lightPos_j, extrudeDist_j, srcPositions_j, destPositions_j, numVertices_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->COptimisedUtil::extrudeVertices(lightPos, extrudeDist, srcPositions, destPositions, numVertices);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCOptimisedUtilProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OptimisedUtil_getImplementation_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::COptimisedUtil* __values1 = EarthView::World::Graphic::COptimisedUtil::getImplementation();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OptimisedUtil_softwareVertexSkinning_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1uchar_1CMatrix4_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong srcPosPtr_j, jlong destPosPtr_j, jlong srcNormPtr_j, jlong destNormPtr_j, jlong blendWeightPtr_j, jlong blendIndexPtr_j, jlong blendMatrices_j, jlong srcPosStride_j, jlong destPosStride_j, jlong srcNormStride_j, jlong destNormStride_j, jlong blendWeightStride_j, jlong blendIndexStride_j, jlong numWeightsPerVertex_j, jlong numVertices_j)
			{
				const ev_real32 *srcPosPtr = (const ev_real32*) srcPosPtr_j;
				ev_real32 *destPosPtr = (ev_real32*) destPosPtr_j;
				const ev_real32 *srcNormPtr = (const ev_real32*) srcNormPtr_j;
				ev_real32 *destNormPtr = (ev_real32*) destNormPtr_j;
				const ev_real32 *blendWeightPtr = (const ev_real32*) blendWeightPtr_j;
				const ev_uchar *blendIndexPtr = (const ev_uchar*) blendIndexPtr_j;
				const EarthView::World::Spatial::Math::CMatrix4 **blendMatrices = (const EarthView::World::Spatial::Math::CMatrix4**) blendMatrices_j;
				ev_size_t srcPosStride = (ev_size_t) srcPosStride_j;
				ev_size_t destPosStride = (ev_size_t) destPosStride_j;
				ev_size_t srcNormStride = (ev_size_t) srcNormStride_j;
				ev_size_t destNormStride = (ev_size_t) destNormStride_j;
				ev_size_t blendWeightStride = (ev_size_t) blendWeightStride_j;
				ev_size_t blendIndexStride = (ev_size_t) blendIndexStride_j;
				ev_size_t numWeightsPerVertex = (ev_size_t) numWeightsPerVertex_j;
				ev_size_t numVertices = (ev_size_t) numVertices_j;
				EarthView::World::Graphic::COptimisedUtil *pObjectX = (EarthView::World::Graphic::COptimisedUtil*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOptimisedUtilProxy))
				{
					pObjectX->EarthView::World::Graphic::COptimisedUtil::softwareVertexSkinning(srcPosPtr, destPosPtr, srcNormPtr, destNormPtr, blendWeightPtr, blendIndexPtr, blendMatrices, srcPosStride, destPosStride, srcNormStride, destNormStride, blendWeightStride, blendIndexStride, numWeightsPerVertex, numVertices);
				}
				else
				{
					pObjectX->softwareVertexSkinning(srcPosPtr, destPosPtr, srcNormPtr, destNormPtr, blendWeightPtr, blendIndexPtr, blendMatrices, srcPosStride, destPosStride, srcNormStride, destNormStride, blendWeightStride, blendIndexStride, numWeightsPerVertex, numVertices);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OptimisedUtil_register_1softwareVertexSkinning_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1uchar_1CMatrix4_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOptimisedUtilProxy *pObjectX = (JCOptimisedUtilProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_softwareVertexSkinning_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"softwareVertexSkinning_ev_real32_ev_real32_ev_real32_ev_real32_ev_real32_ev_uchar_CMatrix4_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_size_t_callback", "(JJJJJJJJJJJJJJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OptimisedUtil_softwareVertexSkinning_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1uchar_1CMatrix4_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong srcPosPtr_j, jlong destPosPtr_j, jlong srcNormPtr_j, jlong destNormPtr_j, jlong blendWeightPtr_j, jlong blendIndexPtr_j, jlong blendMatrices_j, jlong srcPosStride_j, jlong destPosStride_j, jlong srcNormStride_j, jlong destNormStride_j, jlong blendWeightStride_j, jlong blendIndexStride_j, jlong numWeightsPerVertex_j, jlong numVertices_j)
			{
				const ev_real32 *srcPosPtr = (const ev_real32*) srcPosPtr_j;
				ev_real32 *destPosPtr = (ev_real32*) destPosPtr_j;
				const ev_real32 *srcNormPtr = (const ev_real32*) srcNormPtr_j;
				ev_real32 *destNormPtr = (ev_real32*) destNormPtr_j;
				const ev_real32 *blendWeightPtr = (const ev_real32*) blendWeightPtr_j;
				const ev_uchar *blendIndexPtr = (const ev_uchar*) blendIndexPtr_j;
				const EarthView::World::Spatial::Math::CMatrix4 **blendMatrices = (const EarthView::World::Spatial::Math::CMatrix4**) blendMatrices_j;
				ev_size_t srcPosStride = (ev_size_t) srcPosStride_j;
				ev_size_t destPosStride = (ev_size_t) destPosStride_j;
				ev_size_t srcNormStride = (ev_size_t) srcNormStride_j;
				ev_size_t destNormStride = (ev_size_t) destNormStride_j;
				ev_size_t blendWeightStride = (ev_size_t) blendWeightStride_j;
				ev_size_t blendIndexStride = (ev_size_t) blendIndexStride_j;
				ev_size_t numWeightsPerVertex = (ev_size_t) numWeightsPerVertex_j;
				ev_size_t numVertices = (ev_size_t) numVertices_j;
				EarthView::World::Graphic::COptimisedUtil *pObjectX = (EarthView::World::Graphic::COptimisedUtil*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COptimisedUtil::softwareVertexSkinning(srcPosPtr, destPosPtr, srcNormPtr, destNormPtr, blendWeightPtr, blendIndexPtr, blendMatrices, srcPosStride, destPosStride, srcNormStride, destNormStride, blendWeightStride, blendIndexStride, numWeightsPerVertex, numVertices);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OptimisedUtil_softwareVertexMorph_1Real_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble t_j, jlong srcPos1_j, jlong srcPos2_j, jlong dstPos_j, jlong pos1VSize_j, jlong pos2VSize_j, jlong dstVSize_j, jlong numVertices_j, jboolean morphNormals_j)
			{
				Real t = (Real) t_j;
				const ev_real32 *srcPos1 = (const ev_real32*) srcPos1_j;
				const ev_real32 *srcPos2 = (const ev_real32*) srcPos2_j;
				ev_real32 *dstPos = (ev_real32*) dstPos_j;
				ev_size_t pos1VSize = (ev_size_t) pos1VSize_j;
				ev_size_t pos2VSize = (ev_size_t) pos2VSize_j;
				ev_size_t dstVSize = (ev_size_t) dstVSize_j;
				ev_size_t numVertices = (ev_size_t) numVertices_j;
				ev_bool morphNormals = (ev_bool) morphNormals_j;
				EarthView::World::Graphic::COptimisedUtil *pObjectX = (EarthView::World::Graphic::COptimisedUtil*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOptimisedUtilProxy))
				{
					pObjectX->EarthView::World::Graphic::COptimisedUtil::softwareVertexMorph(t, srcPos1, srcPos2, dstPos, pos1VSize, pos2VSize, dstVSize, numVertices, morphNormals);
				}
				else
				{
					pObjectX->softwareVertexMorph(t, srcPos1, srcPos2, dstPos, pos1VSize, pos2VSize, dstVSize, numVertices, morphNormals);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OptimisedUtil_register_1softwareVertexMorph_1Real_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOptimisedUtilProxy *pObjectX = (JCOptimisedUtilProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_softwareVertexMorph_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"softwareVertexMorph_Real_ev_real32_ev_real32_ev_real32_ev_size_t_ev_size_t_ev_size_t_ev_size_t_ev_bool_callback", "(DJJJJJJJZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OptimisedUtil_softwareVertexMorph_1Real_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1size_1t_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble t_j, jlong srcPos1_j, jlong srcPos2_j, jlong dstPos_j, jlong pos1VSize_j, jlong pos2VSize_j, jlong dstVSize_j, jlong numVertices_j, jboolean morphNormals_j)
			{
				Real t = (Real) t_j;
				const ev_real32 *srcPos1 = (const ev_real32*) srcPos1_j;
				const ev_real32 *srcPos2 = (const ev_real32*) srcPos2_j;
				ev_real32 *dstPos = (ev_real32*) dstPos_j;
				ev_size_t pos1VSize = (ev_size_t) pos1VSize_j;
				ev_size_t pos2VSize = (ev_size_t) pos2VSize_j;
				ev_size_t dstVSize = (ev_size_t) dstVSize_j;
				ev_size_t numVertices = (ev_size_t) numVertices_j;
				ev_bool morphNormals = (ev_bool) morphNormals_j;
				EarthView::World::Graphic::COptimisedUtil *pObjectX = (EarthView::World::Graphic::COptimisedUtil*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COptimisedUtil::softwareVertexMorph(t, srcPos1, srcPos2, dstPos, pos1VSize, pos2VSize, dstVSize, numVertices, morphNormals);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OptimisedUtil_concatenateAffineMatrices_1CMatrix4_1CMatrix4_1CMatrix4_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong baseMatrix_j, jlong srcMatrices_j, jlong dstMatrices_j, jlong numMatrices_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &baseMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) baseMatrix_j;
				const EarthView::World::Spatial::Math::CMatrix4 *srcMatrices = (const EarthView::World::Spatial::Math::CMatrix4*) srcMatrices_j;
				EarthView::World::Spatial::Math::CMatrix4 *dstMatrices = (EarthView::World::Spatial::Math::CMatrix4*) dstMatrices_j;
				ev_size_t numMatrices = (ev_size_t) numMatrices_j;
				EarthView::World::Graphic::COptimisedUtil *pObjectX = (EarthView::World::Graphic::COptimisedUtil*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOptimisedUtilProxy))
				{
					pObjectX->EarthView::World::Graphic::COptimisedUtil::concatenateAffineMatrices(baseMatrix, srcMatrices, dstMatrices, numMatrices);
				}
				else
				{
					pObjectX->concatenateAffineMatrices(baseMatrix, srcMatrices, dstMatrices, numMatrices);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OptimisedUtil_register_1concatenateAffineMatrices_1CMatrix4_1CMatrix4_1CMatrix4_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOptimisedUtilProxy *pObjectX = (JCOptimisedUtilProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_concatenateAffineMatrices_CMatrix4_CMatrix4_CMatrix4_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"concatenateAffineMatrices_CMatrix4_CMatrix4_CMatrix4_ev_size_t_callback", "(JJJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OptimisedUtil_concatenateAffineMatrices_1CMatrix4_1CMatrix4_1CMatrix4_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong baseMatrix_j, jlong srcMatrices_j, jlong dstMatrices_j, jlong numMatrices_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &baseMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) baseMatrix_j;
				const EarthView::World::Spatial::Math::CMatrix4 *srcMatrices = (const EarthView::World::Spatial::Math::CMatrix4*) srcMatrices_j;
				EarthView::World::Spatial::Math::CMatrix4 *dstMatrices = (EarthView::World::Spatial::Math::CMatrix4*) dstMatrices_j;
				ev_size_t numMatrices = (ev_size_t) numMatrices_j;
				EarthView::World::Graphic::COptimisedUtil *pObjectX = (EarthView::World::Graphic::COptimisedUtil*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COptimisedUtil::concatenateAffineMatrices(baseMatrix, srcMatrices, dstMatrices, numMatrices);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OptimisedUtil_calculateFaceNormals_1ev_1real32_1CTriangle_1CVector4_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong positions_j, jlong triangles_j, jlong faceNormals_j, jlong numTriangles_j)
			{
				const ev_real32 *positions = (const ev_real32*) positions_j;
				const EarthView::World::Graphic::CEdgeData::CTriangle *triangles = (const EarthView::World::Graphic::CEdgeData::CTriangle*) triangles_j;
				EarthView::World::Spatial::Math::CVector4 *faceNormals = (EarthView::World::Spatial::Math::CVector4*) faceNormals_j;
				ev_size_t numTriangles = (ev_size_t) numTriangles_j;
				EarthView::World::Graphic::COptimisedUtil *pObjectX = (EarthView::World::Graphic::COptimisedUtil*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOptimisedUtilProxy))
				{
					pObjectX->EarthView::World::Graphic::COptimisedUtil::calculateFaceNormals(positions, triangles, faceNormals, numTriangles);
				}
				else
				{
					pObjectX->calculateFaceNormals(positions, triangles, faceNormals, numTriangles);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OptimisedUtil_register_1calculateFaceNormals_1ev_1real32_1CTriangle_1CVector4_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOptimisedUtilProxy *pObjectX = (JCOptimisedUtilProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_calculateFaceNormals_ev_real32_CTriangle_CVector4_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"calculateFaceNormals_ev_real32_CTriangle_CVector4_ev_size_t_callback", "(JJJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OptimisedUtil_calculateFaceNormals_1ev_1real32_1CTriangle_1CVector4_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong positions_j, jlong triangles_j, jlong faceNormals_j, jlong numTriangles_j)
			{
				const ev_real32 *positions = (const ev_real32*) positions_j;
				const EarthView::World::Graphic::CEdgeData::CTriangle *triangles = (const EarthView::World::Graphic::CEdgeData::CTriangle*) triangles_j;
				EarthView::World::Spatial::Math::CVector4 *faceNormals = (EarthView::World::Spatial::Math::CVector4*) faceNormals_j;
				ev_size_t numTriangles = (ev_size_t) numTriangles_j;
				EarthView::World::Graphic::COptimisedUtil *pObjectX = (EarthView::World::Graphic::COptimisedUtil*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COptimisedUtil::calculateFaceNormals(positions, triangles, faceNormals, numTriangles);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OptimisedUtil_calculateLightFacing_1CVector4_1CVector4_1ev_1char_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lightPos_j, jlong faceNormals_j, jlong lightFacings_j, jlong numFaces_j)
			{
				const EarthView::World::Spatial::Math::CVector4 &lightPos = *(EarthView::World::Spatial::Math::CVector4*) lightPos_j;
				const EarthView::World::Spatial::Math::CVector4 *faceNormals = (const EarthView::World::Spatial::Math::CVector4*) faceNormals_j;
				ev_char *lightFacings = (ev_char*) lightFacings_j;
				ev_size_t numFaces = (ev_size_t) numFaces_j;
				EarthView::World::Graphic::COptimisedUtil *pObjectX = (EarthView::World::Graphic::COptimisedUtil*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOptimisedUtilProxy))
				{
					pObjectX->EarthView::World::Graphic::COptimisedUtil::calculateLightFacing(lightPos, faceNormals, lightFacings, numFaces);
				}
				else
				{
					pObjectX->calculateLightFacing(lightPos, faceNormals, lightFacings, numFaces);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OptimisedUtil_register_1calculateLightFacing_1CVector4_1CVector4_1ev_1char_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOptimisedUtilProxy *pObjectX = (JCOptimisedUtilProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_calculateLightFacing_CVector4_CVector4_ev_char_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"calculateLightFacing_CVector4_CVector4_ev_char_ev_size_t_callback", "(JJJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OptimisedUtil_calculateLightFacing_1CVector4_1CVector4_1ev_1char_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lightPos_j, jlong faceNormals_j, jlong lightFacings_j, jlong numFaces_j)
			{
				const EarthView::World::Spatial::Math::CVector4 &lightPos = *(EarthView::World::Spatial::Math::CVector4*) lightPos_j;
				const EarthView::World::Spatial::Math::CVector4 *faceNormals = (const EarthView::World::Spatial::Math::CVector4*) faceNormals_j;
				ev_char *lightFacings = (ev_char*) lightFacings_j;
				ev_size_t numFaces = (ev_size_t) numFaces_j;
				EarthView::World::Graphic::COptimisedUtil *pObjectX = (EarthView::World::Graphic::COptimisedUtil*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COptimisedUtil::calculateLightFacing(lightPos, faceNormals, lightFacings, numFaces);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OptimisedUtil_extrudeVertices_1CVector4_1Real_1ev_1real32_1ev_1real32_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lightPos_j, jdouble extrudeDist_j, jlong srcPositions_j, jlong destPositions_j, jlong numVertices_j)
			{
				const EarthView::World::Spatial::Math::CVector4 &lightPos = *(EarthView::World::Spatial::Math::CVector4*) lightPos_j;
				Real extrudeDist = (Real) extrudeDist_j;
				const ev_real32 *srcPositions = (const ev_real32*) srcPositions_j;
				ev_real32 *destPositions = (ev_real32*) destPositions_j;
				ev_size_t numVertices = (ev_size_t) numVertices_j;
				EarthView::World::Graphic::COptimisedUtil *pObjectX = (EarthView::World::Graphic::COptimisedUtil*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOptimisedUtilProxy))
				{
					pObjectX->EarthView::World::Graphic::COptimisedUtil::extrudeVertices(lightPos, extrudeDist, srcPositions, destPositions, numVertices);
				}
				else
				{
					pObjectX->extrudeVertices(lightPos, extrudeDist, srcPositions, destPositions, numVertices);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OptimisedUtil_register_1extrudeVertices_1CVector4_1Real_1ev_1real32_1ev_1real32_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOptimisedUtilProxy *pObjectX = (JCOptimisedUtilProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_extrudeVertices_CVector4_Real_ev_real32_ev_real32_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"extrudeVertices_CVector4_Real_ev_real32_ev_real32_ev_size_t_callback", "(JDJJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OptimisedUtil_extrudeVertices_1CVector4_1Real_1ev_1real32_1ev_1real32_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lightPos_j, jdouble extrudeDist_j, jlong srcPositions_j, jlong destPositions_j, jlong numVertices_j)
			{
				const EarthView::World::Spatial::Math::CVector4 &lightPos = *(EarthView::World::Spatial::Math::CVector4*) lightPos_j;
				Real extrudeDist = (Real) extrudeDist_j;
				const ev_real32 *srcPositions = (const ev_real32*) srcPositions_j;
				ev_real32 *destPositions = (ev_real32*) destPositions_j;
				ev_size_t numVertices = (ev_size_t) numVertices_j;
				EarthView::World::Graphic::COptimisedUtil *pObjectX = (EarthView::World::Graphic::COptimisedUtil*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COptimisedUtil::extrudeVertices(lightPos, extrudeDist, srcPositions, destPositions, numVertices);
			}
		}
	}
}
