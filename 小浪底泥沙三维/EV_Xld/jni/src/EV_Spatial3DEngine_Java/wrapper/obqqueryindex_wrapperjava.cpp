/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/obqqueryindex.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace ModelManager
			{
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelnode_getMinRange_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::OBQModelNode *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelNode*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getMinRange();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelnode_getRadius_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::OBQModelNode *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelNode*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getRadius();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelnode_getCenterX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::OBQModelNode *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelNode*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getCenterX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelnode_getCenterY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::OBQModelNode *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelNode*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getCenterY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelnode_getCenterZ_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::OBQModelNode *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelNode*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getCenterZ();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelnode_getModelPath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::OBQModelNode *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelNode*) pObjXXXX;
					const EVString& __values1 = pObjectX->getModelPath();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelnode_getTileFileFolder_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::OBQModelNode *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelNode*) pObjXXXX;
					const EVString& __values1 = pObjectX->getTileFileFolder();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtree_setCenter_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble centerX_j, jdouble centerY_j)
				{
					ev_real64 centerX = (ev_real64) centerX_j;
					ev_real64 centerY = (ev_real64) centerY_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjXXXX;
					pObjectX->setCenter(centerX, centerY);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtree_setLevle_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j)
				{
					ev_int32 level = (ev_int32) level_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjXXXX;
					pObjectX->setLevle(level);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtree_getCenterX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getCenterX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtree_getCenterY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getCenterY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtree_getMinX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getMinX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtree_getMinY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getMinY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtree_getMaxX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getMaxX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtree_getMaxY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getMaxY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtree_addOBQModelNode_1OBQModelNode_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong modelNode_j, jint level_j)
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelNode &modelNode = *(EarthView::World::Spatial3D::ModelManager::OBQModelNode*) modelNode_j;
					ev_int32 level = (ev_int32) level_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjXXXX;
					ev_bool __values1 = pObjectX->addOBQModelNode(modelNode, level);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtree_getNode_1EVString_1OBQModelNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring nodename_j, jlong node_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* nodename_ch = (const ev_char*)__env->GetStringUTFChars(nodename_j,JNI_FALSE);
					const EVString nodename = nodename_ch;
					__env->ReleaseStringUTFChars(nodename_j, (const char *)nodename_ch);
					#else
					const ev_wchar* nodename_ch = (const ev_wchar*)__env->GetStringChars(nodename_j,JNI_FALSE);
					const EVString nodename = nodename_ch;
					__env->ReleaseStringChars(nodename_j, (const jchar *)nodename_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::OBQModelNode &node = *(EarthView::World::Spatial3D::ModelManager::OBQModelNode*) node_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjXXXX;
					ev_bool __values1 = pObjectX->getNode(nodename, node);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtree_getModelFiles_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jdouble minx_j, jdouble miny_j, jdouble maxx_j, jdouble maxy_j)
				{
					ev_int32 level = (ev_int32) level_j;
					ev_real64 minx = (ev_real64) minx_j;
					ev_real64 miny = (ev_real64) miny_j;
					ev_real64 maxx = (ev_real64) maxx_j;
					ev_real64 maxy = (ev_real64) maxy_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjXXXX;
					EVString __values1 = pObjectX->getModelFiles(level, minx, miny, maxx, maxy);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtree_getCode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjXXXX;
					const EVString& __values1 = pObjectX->getCode();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtree_child_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					const 					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjXXXX;
					const EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree* __values1 = pObjectX->child(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtree_getMyModelPathList_1OBQModelQuadRootTree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tree_j)
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree &tree = *(EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree*) tree_j;
					const 					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjXXXX;
					EVString __values1 = pObjectX->getMyModelPathList(tree);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtree_getMyModelCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTree*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getMyModelCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadroottree_setLocal_1ev_1real64_1ev_1real64_1ev_1real64_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble localX_j, jdouble localY_j, jdouble localZ_j, jstring srs_j)
				{
					ev_real64 localX = (ev_real64) localX_j;
					ev_real64 localY = (ev_real64) localY_j;
					ev_real64 localZ = (ev_real64) localZ_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* srs_ch = (const ev_char*)__env->GetStringUTFChars(srs_j,JNI_FALSE);
					const EVString srs = srs_ch;
					__env->ReleaseStringUTFChars(srs_j, (const char *)srs_ch);
					#else
					const ev_wchar* srs_ch = (const ev_wchar*)__env->GetStringChars(srs_j,JNI_FALSE);
					const EVString srs = srs_ch;
					__env->ReleaseStringChars(srs_j, (const jchar *)srs_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree*) pObjXXXX;
					pObjectX->setLocal(localX, localY, localZ, srs);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadroottree_getLocalX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getLocalX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadroottree_getLocalY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getLocalY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadroottree_getLocalZ_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getLocalZ();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadroottree_getSRS_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree*) pObjXXXX;
					EVString __values1 = pObjectX->getSRS();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadroottree_initTree_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble minCenterX_j, jdouble minCenterY_j, jdouble maxCenterX_j, jdouble maxCenterY_j, jint levelCount_j)
				{
					ev_real64 minCenterX = (ev_real64) minCenterX_j;
					ev_real64 minCenterY = (ev_real64) minCenterY_j;
					ev_real64 maxCenterX = (ev_real64) maxCenterX_j;
					ev_real64 maxCenterY = (ev_real64) maxCenterY_j;
					ev_int32 levelCount = (ev_int32) levelCount_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree*) pObjXXXX;
					ev_bool __values1 = pObjectX->initTree(minCenterX, minCenterY, maxCenterX, maxCenterY, levelCount);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				class JInfoListenerProxy : public EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener
				{
				 private:
					EarthView::World::Core::ev_string m_printInfo_EVString_callback;
					EarthView::World::Core::ev_string m_printProcess_ev_int32_callback;
					EarthView::World::Core::ev_string m_setRange_int_int_callback;
					EarthView::World::Core::ev_string m_renderSystemError_void_callback;
				public:
					JInfoListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : InfoListener(pList)
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
					void register_printInfo_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_printInfo_EVString_callback = __method;
					}
					void register_printProcess_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_printProcess_ev_int32_callback = __method;
					}
					void register_setRange_int_int_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setRange_int_int_callback = __method;
					}
					void register_renderSystemError_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_renderSystemError_void_callback = __method;
					}
					virtual void printInfo(const EVString& info)
					{
						if (this->_gRef != NULL && this->m_printInfo_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring info_wch = info;
							jstring info_j = __env->NewString((const jchar*)info_wch.getString(), info_wch.size());
							jmethodID __method = __gr->getMethod("printInfo_EVString_callback");
							__env->CallVoidMethod(__obj, __method , info_j);
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
							return this->InfoListener::printInfo(info);
						}
					}
					virtual void printProcess(ev_int32 process)
					{
						if (this->_gRef != NULL && this->m_printProcess_ev_int32_callback != "" && this->isCustomExtend())
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
							jint process_j = (jint) process;
							jmethodID __method = __gr->getMethod("printProcess_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , process_j);
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
							return this->InfoListener::printProcess(process);
						}
					}
					virtual void setRange(int min, int max)
					{
						if (this->_gRef != NULL && this->m_setRange_int_int_callback != "" && this->isCustomExtend())
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
							jint min_j = (jint) min;
							jint max_j = (jint) max;
							jmethodID __method = __gr->getMethod("setRange_int_int_callback");
							__env->CallVoidMethod(__obj, __method , min_j, max_j);
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
							return this->InfoListener::setRange(min, max);
						}
					}
					virtual void renderSystemError()
					{
						if (this->_gRef != NULL && this->m_renderSystemError_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("renderSystemError_void_callback");
							__env->CallVoidMethod(__obj, __method );
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
							return this->InfoListener::renderSystemError();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JInfoListenerProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_00024InfoListener_printInfo_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring info_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* info_ch = (const ev_char*)__env->GetStringUTFChars(info_j,JNI_FALSE);
					const EVString info = info_ch;
					__env->ReleaseStringUTFChars(info_j, (const char *)info_ch);
					#else
					const ev_wchar* info_ch = (const ev_wchar*)__env->GetStringChars(info_j,JNI_FALSE);
					const EVString info = info_ch;
					__env->ReleaseStringChars(info_j, (const jchar *)info_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JInfoListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener::printInfo(info);
					}
					else
					{
						pObjectX->printInfo(info);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_00024InfoListener_register_1printInfo_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JInfoListenerProxy *pObjectX = (JInfoListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_printInfo_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"printInfo_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_00024InfoListener_printInfo_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring info_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* info_ch = (const ev_char*)__env->GetStringUTFChars(info_j,JNI_FALSE);
					const EVString info = info_ch;
					__env->ReleaseStringUTFChars(info_j, (const char *)info_ch);
					#else
					const ev_wchar* info_ch = (const ev_wchar*)__env->GetStringChars(info_j,JNI_FALSE);
					const EVString info = info_ch;
					__env->ReleaseStringChars(info_j, (const jchar *)info_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener::printInfo(info);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_00024InfoListener_printProcess_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint process_j)
				{
					ev_int32 process = (ev_int32) process_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JInfoListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener::printProcess(process);
					}
					else
					{
						pObjectX->printProcess(process);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_00024InfoListener_register_1printProcess_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JInfoListenerProxy *pObjectX = (JInfoListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_printProcess_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"printProcess_ev_int32_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_00024InfoListener_printProcess_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint process_j)
				{
					ev_int32 process = (ev_int32) process_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener::printProcess(process);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_00024InfoListener_setRange_1int_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint min_j, jint max_j)
				{
					int min = (int) min_j;
					int max = (int) max_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JInfoListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener::setRange(min, max);
					}
					else
					{
						pObjectX->setRange(min, max);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_00024InfoListener_register_1setRange_1int_1int(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JInfoListenerProxy *pObjectX = (JInfoListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setRange_int_int_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setRange_int_int_callback", "(II)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_00024InfoListener_setRange_1int_1int_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint min_j, jint max_j)
				{
					int min = (int) min_j;
					int max = (int) max_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener::setRange(min, max);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_00024InfoListener_renderSystemError_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JInfoListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener::renderSystemError();
					}
					else
					{
						pObjectX->renderSystemError();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_00024InfoListener_register_1renderSystemError_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JInfoListenerProxy *pObjectX = (JInfoListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_renderSystemError_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"renderSystemError_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_00024InfoListener_renderSystemError_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener::renderSystemError();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_convertObqXmlToIndexDB_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strTileXml_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strTileXml_ch = (const ev_char*)__env->GetStringUTFChars(strTileXml_j,JNI_FALSE);
					const EVString strTileXml = strTileXml_ch;
					__env->ReleaseStringUTFChars(strTileXml_j, (const char *)strTileXml_ch);
					#else
					const ev_wchar* strTileXml_ch = (const ev_wchar*)__env->GetStringChars(strTileXml_j,JNI_FALSE);
					const EVString strTileXml = strTileXml_ch;
					__env->ReleaseStringChars(strTileXml_j, (const jchar *)strTileXml_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjXXXX;
					ev_bool __values1 = pObjectX->convertObqXmlToIndexDB(strTileXml);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_queryMeshFilesByRegion_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jdouble minLon_j, jdouble minLat_j, jdouble maxLon_j, jdouble maxLat_j)
				{
					ev_int32 level = (ev_int32) level_j;
					ev_real64 minLon = (ev_real64) minLon_j;
					ev_real64 minLat = (ev_real64) minLat_j;
					ev_real64 maxLon = (ev_real64) maxLon_j;
					ev_real64 maxLat = (ev_real64) maxLat_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjXXXX;
					EarthView::World::Core::StringVector __values1 = pObjectX->queryMeshFilesByRegion(level, minLon, minLat, maxLon, maxLat);
					EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_queryCpdStreamByRegion_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jdouble minLon_j, jdouble minLat_j, jdouble maxLon_j, jdouble maxLat_j)
				{
					ev_int32 level = (ev_int32) level_j;
					ev_real64 minLon = (ev_real64) minLon_j;
					ev_real64 minLat = (ev_real64) minLat_j;
					ev_real64 maxLon = (ev_real64) maxLon_j;
					ev_real64 maxLat = (ev_real64) maxLat_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjXXXX;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->queryCpdStreamByRegion(level, minLon, minLat, maxLon, maxLat);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_getCpdFileByRegion_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jdouble minLon_j, jdouble minLat_j, jdouble maxLon_j, jdouble maxLat_j)
				{
					ev_int32 level = (ev_int32) level_j;
					ev_real64 minLon = (ev_real64) minLon_j;
					ev_real64 minLat = (ev_real64) minLat_j;
					ev_real64 maxLon = (ev_real64) maxLon_j;
					ev_real64 maxLat = (ev_real64) maxLat_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjXXXX;
					EVString __values1 = pObjectX->getCpdFileByRegion(level, minLon, minLat, maxLon, maxLat);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_cpd2mesh_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring cpdFilePath_j, jstring meshPath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* cpdFilePath_ch = (const ev_char*)__env->GetStringUTFChars(cpdFilePath_j,JNI_FALSE);
					const EVString cpdFilePath = cpdFilePath_ch;
					__env->ReleaseStringUTFChars(cpdFilePath_j, (const char *)cpdFilePath_ch);
					#else
					const ev_wchar* cpdFilePath_ch = (const ev_wchar*)__env->GetStringChars(cpdFilePath_j,JNI_FALSE);
					const EVString cpdFilePath = cpdFilePath_ch;
					__env->ReleaseStringChars(cpdFilePath_j, (const jchar *)cpdFilePath_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* meshPath_ch = (const ev_char*)__env->GetStringUTFChars(meshPath_j,JNI_FALSE);
					const EVString meshPath = meshPath_ch;
					__env->ReleaseStringUTFChars(meshPath_j, (const char *)meshPath_ch);
					#else
					const ev_wchar* meshPath_ch = (const ev_wchar*)__env->GetStringChars(meshPath_j,JNI_FALSE);
					const EVString meshPath = meshPath_ch;
					__env->ReleaseStringChars(meshPath_j, (const jchar *)meshPath_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjXXXX;
					pObjectX->cpd2mesh(cpdFilePath, meshPath);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_getLevelRange_1ev_1int32_1ev_1int32_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong minLevel_j, jlong maxLevel_j, jlong minLon_j, jlong minLat_j, jlong maxLon_j, jlong maxLat_j)
				{
					ev_int32 &minLevel = *(ev_int32*) minLevel_j;
					ev_int32 &maxLevel = *(ev_int32*) maxLevel_j;
					ev_real64 &minLon = *(ev_real64*) minLon_j;
					ev_real64 &minLat = *(ev_real64*) minLat_j;
					ev_real64 &maxLon = *(ev_real64*) maxLon_j;
					ev_real64 &maxLat = *(ev_real64*) maxLat_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjXXXX;
					ev_bool __values1 = pObjectX->getLevelRange(minLevel, maxLevel, minLon, minLat, maxLon, maxLat);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_addInfoListener_1InfoListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pListener_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener *pListener = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*) pListener_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjXXXX;
					pObjectX->addInfoListener(pListener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_removeInfoListener_1InfoListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pListener_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener *pListener = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator::InfoListener*) pListener_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjXXXX;
					pObjectX->removeInfoListener(pListener);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_initFromXMLSource_1EVString_1OBQModelQuadRootTree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring xmlSourcePath_j, jlong tree_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* xmlSourcePath_ch = (const ev_char*)__env->GetStringUTFChars(xmlSourcePath_j,JNI_FALSE);
					const EVString xmlSourcePath = xmlSourcePath_ch;
					__env->ReleaseStringUTFChars(xmlSourcePath_j, (const char *)xmlSourcePath_ch);
					#else
					const ev_wchar* xmlSourcePath_ch = (const ev_wchar*)__env->GetStringChars(xmlSourcePath_j,JNI_FALSE);
					const EVString xmlSourcePath = xmlSourcePath_ch;
					__env->ReleaseStringChars(xmlSourcePath_j, (const jchar *)xmlSourcePath_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree &tree = *(EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree*) tree_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjXXXX;
					ev_bool __values1 = pObjectX->initFromXMLSource(xmlSourcePath, tree);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_initFromQueryIndexDB_1OBQModelQuadRootTree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tree_j)
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree &tree = *(EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree*) tree_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjXXXX;
					ev_bool __values1 = pObjectX->initFromQueryIndexDB(tree);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_saveToQueryIndexDB_1OBQModelQuadRootTree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tree_j)
				{
					const EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree &tree = *(EarthView::World::Spatial3D::ModelManager::OBQModelQuadRootTree*) tree_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjXXXX;
					ev_bool __values1 = pObjectX->saveToQueryIndexDB(tree);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_dae2mesh_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring srcFolder_j, jstring desFolder_j, jboolean coverExistentMesh_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* srcFolder_ch = (const ev_char*)__env->GetStringUTFChars(srcFolder_j,JNI_FALSE);
					const EVString srcFolder = srcFolder_ch;
					__env->ReleaseStringUTFChars(srcFolder_j, (const char *)srcFolder_ch);
					#else
					const ev_wchar* srcFolder_ch = (const ev_wchar*)__env->GetStringChars(srcFolder_j,JNI_FALSE);
					const EVString srcFolder = srcFolder_ch;
					__env->ReleaseStringChars(srcFolder_j, (const jchar *)srcFolder_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* desFolder_ch = (const ev_char*)__env->GetStringUTFChars(desFolder_j,JNI_FALSE);
					const EVString desFolder = desFolder_ch;
					__env->ReleaseStringUTFChars(desFolder_j, (const char *)desFolder_ch);
					#else
					const ev_wchar* desFolder_ch = (const ev_wchar*)__env->GetStringChars(desFolder_j,JNI_FALSE);
					const EVString desFolder = desFolder_ch;
					__env->ReleaseStringChars(desFolder_j, (const jchar *)desFolder_ch);
					#endif
					ev_bool coverExistentMesh = (ev_bool) coverExistentMesh_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjXXXX;
					ev_int32 __values1 = pObjectX->dae2mesh(srcFolder, desFolder, coverExistentMesh);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_createDEM_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring srcFolder_j, jstring desFolder_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* srcFolder_ch = (const ev_char*)__env->GetStringUTFChars(srcFolder_j,JNI_FALSE);
					const EVString srcFolder = srcFolder_ch;
					__env->ReleaseStringUTFChars(srcFolder_j, (const char *)srcFolder_ch);
					#else
					const ev_wchar* srcFolder_ch = (const ev_wchar*)__env->GetStringChars(srcFolder_j,JNI_FALSE);
					const EVString srcFolder = srcFolder_ch;
					__env->ReleaseStringChars(srcFolder_j, (const jchar *)srcFolder_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* desFolder_ch = (const ev_char*)__env->GetStringUTFChars(desFolder_j,JNI_FALSE);
					const EVString desFolder = desFolder_ch;
					__env->ReleaseStringUTFChars(desFolder_j, (const char *)desFolder_ch);
					#else
					const ev_wchar* desFolder_ch = (const ev_wchar*)__env->GetStringChars(desFolder_j,JNI_FALSE);
					const EVString desFolder = desFolder_ch;
					__env->ReleaseStringChars(desFolder_j, (const jchar *)desFolder_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjXXXX;
					pObjectX->createDEM(srcFolder, desFolder);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_initDae2MeshThread_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring srcFolder_j, jstring desFolder_j, jboolean coverExistentMesh_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* srcFolder_ch = (const ev_char*)__env->GetStringUTFChars(srcFolder_j,JNI_FALSE);
					const EVString srcFolder = srcFolder_ch;
					__env->ReleaseStringUTFChars(srcFolder_j, (const char *)srcFolder_ch);
					#else
					const ev_wchar* srcFolder_ch = (const ev_wchar*)__env->GetStringChars(srcFolder_j,JNI_FALSE);
					const EVString srcFolder = srcFolder_ch;
					__env->ReleaseStringChars(srcFolder_j, (const jchar *)srcFolder_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* desFolder_ch = (const ev_char*)__env->GetStringUTFChars(desFolder_j,JNI_FALSE);
					const EVString desFolder = desFolder_ch;
					__env->ReleaseStringUTFChars(desFolder_j, (const char *)desFolder_ch);
					#else
					const ev_wchar* desFolder_ch = (const ev_wchar*)__env->GetStringChars(desFolder_j,JNI_FALSE);
					const EVString desFolder = desFolder_ch;
					__env->ReleaseStringChars(desFolder_j, (const jchar *)desFolder_ch);
					#endif
					ev_bool coverExistentMesh = (ev_bool) coverExistentMesh_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjXXXX;
					pObjectX->initDae2MeshThread(srcFolder, desFolder, coverExistentMesh);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_startCreateQueryIndex_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring srcFolder_j, jstring desFolder_j, jboolean coverExistentMesh_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* srcFolder_ch = (const ev_char*)__env->GetStringUTFChars(srcFolder_j,JNI_FALSE);
					const EVString srcFolder = srcFolder_ch;
					__env->ReleaseStringUTFChars(srcFolder_j, (const char *)srcFolder_ch);
					#else
					const ev_wchar* srcFolder_ch = (const ev_wchar*)__env->GetStringChars(srcFolder_j,JNI_FALSE);
					const EVString srcFolder = srcFolder_ch;
					__env->ReleaseStringChars(srcFolder_j, (const jchar *)srcFolder_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* desFolder_ch = (const ev_char*)__env->GetStringUTFChars(desFolder_j,JNI_FALSE);
					const EVString desFolder = desFolder_ch;
					__env->ReleaseStringUTFChars(desFolder_j, (const char *)desFolder_ch);
					#else
					const ev_wchar* desFolder_ch = (const ev_wchar*)__env->GetStringChars(desFolder_j,JNI_FALSE);
					const EVString desFolder = desFolder_ch;
					__env->ReleaseStringChars(desFolder_j, (const jchar *)desFolder_ch);
					#endif
					ev_bool coverExistentMesh = (ev_bool) coverExistentMesh_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjXXXX;
					pObjectX->startCreateQueryIndex(srcFolder, desFolder, coverExistentMesh);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_stopCreateQueryIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjXXXX;
					pObjectX->stopCreateQueryIndex();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_printInfo_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring info_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* info_ch = (const ev_char*)__env->GetStringUTFChars(info_j,JNI_FALSE);
					const EVString info = info_ch;
					__env->ReleaseStringUTFChars(info_j, (const char *)info_ch);
					#else
					const ev_wchar* info_ch = (const ev_wchar*)__env->GetStringChars(info_j,JNI_FALSE);
					const EVString info = info_ch;
					__env->ReleaseStringChars(info_j, (const jchar *)info_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjXXXX;
					pObjectX->printInfo(info);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_printProcess_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint process_j)
				{
					ev_int32 process = (ev_int32) process_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjXXXX;
					pObjectX->printProcess(process);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_setRange_1int_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint min_j, jint max_j)
				{
					int min = (int) min_j;
					int max = (int) max_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjXXXX;
					pObjectX->setRange(min, max);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_renderSystemError_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjXXXX;
					pObjectX->renderSystemError();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_dae2meshSdate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjXXXX;
					ev_bool __values1 = pObjectX->dae2meshSdate();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_Obqmodelquadtreecreator_setLocalMatrix_1CMatrix4_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong localMatrix_j, jboolean available_j)
				{
					const EarthView::World::Spatial::Math::CMatrix4 &localMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) localMatrix_j;
					ev_bool available = (ev_bool) available_j;
					EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator *pObjectX = (EarthView::World::Spatial3D::ModelManager::OBQModelQuadTreeCreator*) pObjXXXX;
					pObjectX->setLocalMatrix(localMatrix, available);
				}
			}
		}
	}
}
