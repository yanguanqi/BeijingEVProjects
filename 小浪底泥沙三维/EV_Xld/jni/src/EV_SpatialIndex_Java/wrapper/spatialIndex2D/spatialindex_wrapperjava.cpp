/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialindex/spatialIndex2D/spatialindex.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace SpatialIndex
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial2d_spatialindex_SINDEXTYPEHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						INDEX_Unkown,
						INDEX_Quad,
						INDEX_R_plus
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial2d_spatialindex_DRIVERTYPEHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						STRG_BinaryFile,
						STRG_DBTable,
						STRG_Unkown
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Data_getMBR_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dfUpleftX_j, jlong dfUpleftY_j, jlong dfDownrightX_j, jlong dfDownRightY_j)
				{
					ev_real32 &dfUpleftX = *(ev_real32*) dfUpleftX_j;
					ev_real32 &dfUpleftY = *(ev_real32*) dfUpleftY_j;
					ev_real32 &dfDownrightX = *(ev_real32*) dfDownrightX_j;
					ev_real32 &dfDownRightY = *(ev_real32*) dfDownRightY_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::Data *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::Data*) pObjXXXX;
					pObjectX->getMBR(dfUpleftX, dfUpleftY, dfDownrightX, dfDownRightY);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_spatialindex_Data_getFeatureIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::SpatialIndex::Data *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::Data*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getFeatureIndex();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				class JINodeProxy : public EarthView::World::Spatial2D::SpatialIndex::INode
				{
				 private:
					EarthView::World::Core::ev_string m_getNodeID_void_callback;
					EarthView::World::Core::ev_string m_getChildrenCount_void_callback;
					EarthView::World::Core::ev_string m_getChildNode_ev_int32_callback;
					EarthView::World::Core::ev_string m_getParent_void_callback;
					EarthView::World::Core::ev_string m_getFeatureCount_void_callback;
					EarthView::World::Core::ev_string m_getFeatrueData_ev_int32_callback;
					EarthView::World::Core::ev_string m_getNodeMBR_ev_real32_ev_real32_ev_real32_ev_real32_callback;
					EarthView::World::Core::ev_string m_isLeaf_void_callback;
					EarthView::World::Core::ev_string m_isRoot_void_callback;
					EarthView::World::Core::ev_string m_toStream_ev_uchar_ev_uint32_callback;
				public:
					JINodeProxy(EarthView::World::Core::CNameValuePairList *pList) : INode(pList)
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
					void register_getNodeID_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getNodeID_void_callback = __method;
					}
					void register_getChildrenCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getChildrenCount_void_callback = __method;
					}
					void register_getChildNode_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getChildNode_ev_int32_callback = __method;
					}
					void register_getParent_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getParent_void_callback = __method;
					}
					void register_getFeatureCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFeatureCount_void_callback = __method;
					}
					void register_getFeatrueData_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFeatrueData_ev_int32_callback = __method;
					}
					void register_getNodeMBR_ev_real32_ev_real32_ev_real32_ev_real32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getNodeMBR_ev_real32_ev_real32_ev_real32_ev_real32_callback = __method;
					}
					void register_isLeaf_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isLeaf_void_callback = __method;
					}
					void register_isRoot_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isRoot_void_callback = __method;
					}
					void register_toStream_ev_uchar_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toStream_ev_uchar_ev_uint32_callback = __method;
					}
					virtual ev_int32 getNodeID() const
					{
						if (this->_gRef != NULL && this->m_getNodeID_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getNodeID_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->INode::getNodeID();
						}
					}
					virtual ev_int32 getChildrenCount() const
					{
						if (this->_gRef != NULL && this->m_getChildrenCount_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getChildrenCount_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->INode::getChildrenCount();
						}
					}
					virtual const EarthView::World::Spatial2D::SpatialIndex::INode* getChildNode(ev_int32 index) const
					{
						if (this->_gRef != NULL && this->m_getChildNode_ev_int32_callback != "" && this->isCustomExtend())
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
							jint index_j = (jint) index;
							jmethodID __method = __gr->getMethod("getChildNode_ev_int32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial2D::SpatialIndex::INode *__values1 = (const EarthView::World::Spatial2D::SpatialIndex::INode*) __values1_j;
							return __values1;
						}
						else
						{
							return this->INode::getChildNode(index);
						}
					}
					virtual const EarthView::World::Spatial2D::SpatialIndex::INode* getParent() const
					{
						if (this->_gRef != NULL && this->m_getParent_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getParent_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial2D::SpatialIndex::INode *__values1 = (const EarthView::World::Spatial2D::SpatialIndex::INode*) __values1_j;
							return __values1;
						}
						else
						{
							return this->INode::getParent();
						}
					}
					virtual ev_int32 getFeatureCount() const
					{
						if (this->_gRef != NULL && this->m_getFeatureCount_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getFeatureCount_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->INode::getFeatureCount();
						}
					}
					virtual EarthView::World::Spatial2D::SpatialIndex::Data getFeatrueData(ev_int32 index) const
					{
						if (this->_gRef != NULL && this->m_getFeatrueData_ev_int32_callback != "" && this->isCustomExtend())
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
							jint index_j = (jint) index;
							jmethodID __method = __gr->getMethod("getFeatrueData_ev_int32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial2D::SpatialIndex::Data __values1 = *(EarthView::World::Spatial2D::SpatialIndex::Data*) __values1_j;
							return __values1;
						}
						else
						{
							return this->INode::getFeatrueData(index);
						}
					}
					virtual void getNodeMBR(ev_real32& dfUpleftX, ev_real32& dfUpleftY, ev_real32& dfDownrightX, ev_real32& dfDownRightY) const
					{
						if (this->_gRef != NULL && this->m_getNodeMBR_ev_real32_ev_real32_ev_real32_ev_real32_callback != "" && this->isCustomExtend())
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
							jlong dfUpleftX_j = (jlong) &dfUpleftX;
							jlong dfUpleftY_j = (jlong) &dfUpleftY;
							jlong dfDownrightX_j = (jlong) &dfDownrightX;
							jlong dfDownRightY_j = (jlong) &dfDownRightY;
							jmethodID __method = __gr->getMethod("getNodeMBR_ev_real32_ev_real32_ev_real32_ev_real32_callback");
							__env->CallVoidMethod(__obj, __method , dfUpleftX_j, dfUpleftY_j, dfDownrightX_j, dfDownRightY_j);
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
							return this->INode::getNodeMBR(dfUpleftX, dfUpleftY, dfDownrightX, dfDownRightY);
						}
					}
					virtual ev_bool isLeaf() const
					{
						if (this->_gRef != NULL && this->m_isLeaf_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isLeaf_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->INode::isLeaf();
						}
					}
					virtual ev_bool isRoot() const
					{
						if (this->_gRef != NULL && this->m_isRoot_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isRoot_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->INode::isRoot();
						}
					}
					virtual void toStream(ev_uchar*& pBuffer, ev_uint32& lenth) const
					{
						if (this->_gRef != NULL && this->m_toStream_ev_uchar_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong pBuffer_j = (jlong) &pBuffer;
							jlong lenth_j = (jlong) &lenth;
							jmethodID __method = __gr->getMethod("toStream_ev_uchar_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , pBuffer_j, lenth_j);
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
							return this->INode::toStream(pBuffer, lenth);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JINodeProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_getNodeID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::SpatialIndex::INode *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JINodeProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::INode::getNodeID();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getNodeID();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_register_1getNodeID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JINodeProxy *pObjectX = (JINodeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getNodeID_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getNodeID_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_getNodeID_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::SpatialIndex::INode *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::INode::getNodeID();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_getChildrenCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::SpatialIndex::INode *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JINodeProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::INode::getChildrenCount();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getChildrenCount();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_register_1getChildrenCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JINodeProxy *pObjectX = (JINodeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getChildrenCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getChildrenCount_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_getChildrenCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::SpatialIndex::INode *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::INode::getChildrenCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_getChildNode_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::INode *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JINodeProxy))
					{
						const EarthView::World::Spatial2D::SpatialIndex::INode* __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::INode::getChildNode(index);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial2D::SpatialIndex::INode* __values1 = pObjectX->getChildNode(index);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_register_1getChildNode_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JINodeProxy *pObjectX = (JINodeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getChildNode_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getChildNode_ev_int32_callback", "(I)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_getChildNode_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::INode *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjXXXX;
					const EarthView::World::Spatial2D::SpatialIndex::INode* __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::INode::getChildNode(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_getParent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::SpatialIndex::INode *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JINodeProxy))
					{
						const EarthView::World::Spatial2D::SpatialIndex::INode* __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::INode::getParent();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial2D::SpatialIndex::INode* __values1 = pObjectX->getParent();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_register_1getParent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JINodeProxy *pObjectX = (JINodeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getParent_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getParent_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_getParent_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::SpatialIndex::INode *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjXXXX;
					const EarthView::World::Spatial2D::SpatialIndex::INode* __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::INode::getParent();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_getFeatureCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::SpatialIndex::INode *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JINodeProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::INode::getFeatureCount();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getFeatureCount();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_register_1getFeatureCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JINodeProxy *pObjectX = (JINodeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFeatureCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFeatureCount_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_getFeatureCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::SpatialIndex::INode *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::INode::getFeatureCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_getFeatrueData_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::INode *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JINodeProxy))
					{
						EarthView::World::Spatial2D::SpatialIndex::Data __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::INode::getFeatrueData(index);
						EarthView::World::Spatial2D::SpatialIndex::Data *returnvalues = new EarthView::World::Spatial2D::SpatialIndex::Data(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial2D::SpatialIndex::Data __values1 = pObjectX->getFeatrueData(index);
						EarthView::World::Spatial2D::SpatialIndex::Data *returnvalues = new EarthView::World::Spatial2D::SpatialIndex::Data(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_register_1getFeatrueData_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JINodeProxy *pObjectX = (JINodeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFeatrueData_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFeatrueData_ev_int32_callback", "(I)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_getFeatrueData_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::INode *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjXXXX;
					EarthView::World::Spatial2D::SpatialIndex::Data __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::INode::getFeatrueData(index);
					EarthView::World::Spatial2D::SpatialIndex::Data *returnvalues = new EarthView::World::Spatial2D::SpatialIndex::Data(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_getNodeMBR_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dfUpleftX_j, jlong dfUpleftY_j, jlong dfDownrightX_j, jlong dfDownRightY_j)
				{
					ev_real32 &dfUpleftX = *(ev_real32*) dfUpleftX_j;
					ev_real32 &dfUpleftY = *(ev_real32*) dfUpleftY_j;
					ev_real32 &dfDownrightX = *(ev_real32*) dfDownrightX_j;
					ev_real32 &dfDownRightY = *(ev_real32*) dfDownRightY_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::INode *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JINodeProxy))
					{
						pObjectX->EarthView::World::Spatial2D::SpatialIndex::INode::getNodeMBR(dfUpleftX, dfUpleftY, dfDownrightX, dfDownRightY);
					}
					else
					{
						pObjectX->getNodeMBR(dfUpleftX, dfUpleftY, dfDownrightX, dfDownRightY);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_register_1getNodeMBR_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JINodeProxy *pObjectX = (JINodeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getNodeMBR_ev_real32_ev_real32_ev_real32_ev_real32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getNodeMBR_ev_real32_ev_real32_ev_real32_ev_real32_callback", "(JJJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_getNodeMBR_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dfUpleftX_j, jlong dfUpleftY_j, jlong dfDownrightX_j, jlong dfDownRightY_j)
				{
					ev_real32 &dfUpleftX = *(ev_real32*) dfUpleftX_j;
					ev_real32 &dfUpleftY = *(ev_real32*) dfUpleftY_j;
					ev_real32 &dfDownrightX = *(ev_real32*) dfDownrightX_j;
					ev_real32 &dfDownRightY = *(ev_real32*) dfDownRightY_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::INode *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::SpatialIndex::INode::getNodeMBR(dfUpleftX, dfUpleftY, dfDownrightX, dfDownRightY);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_isLeaf_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::SpatialIndex::INode *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JINodeProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::INode::isLeaf();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isLeaf();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_register_1isLeaf_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JINodeProxy *pObjectX = (JINodeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isLeaf_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isLeaf_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_isLeaf_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::SpatialIndex::INode *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::INode::isLeaf();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_isRoot_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::SpatialIndex::INode *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JINodeProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::INode::isRoot();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isRoot();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_register_1isRoot_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JINodeProxy *pObjectX = (JINodeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isRoot_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isRoot_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_isRoot_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::SpatialIndex::INode *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::INode::isRoot();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_toStream_1ev_1uchar_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pBuffer_j, jlong lenth_j)
				{
					ev_uchar *&pBuffer = *(ev_uchar**) pBuffer_j;
					ev_uint32 &lenth = *(ev_uint32*) lenth_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::INode *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JINodeProxy))
					{
						pObjectX->EarthView::World::Spatial2D::SpatialIndex::INode::toStream(pBuffer, lenth);
					}
					else
					{
						pObjectX->toStream(pBuffer, lenth);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_register_1toStream_1ev_1uchar_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JINodeProxy *pObjectX = (JINodeProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toStream_ev_uchar_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toStream_ev_uchar_ev_uint32_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Inode_toStream_1ev_1uchar_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pBuffer_j, jlong lenth_j)
				{
					ev_uchar *&pBuffer = *(ev_uchar**) pBuffer_j;
					ev_uint32 &lenth = *(ev_uint32*) lenth_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::INode *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::INode*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::SpatialIndex::INode::toStream(pBuffer, lenth);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_spatialindex_Idvistor_OperatorAssign_1IDVistor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Spatial2D::SpatialIndex::IDVistor& pObjectX = *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*) pObjXXXX;
					const EarthView::World::Spatial2D::SpatialIndex::IDVistor &other = *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*) other_j;
					pObjectX = other;
					EarthView::World::Spatial2D::SpatialIndex::IDVistor& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_spatialindex_Idvistor_getSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::SpatialIndex::IDVistor *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::IDVistor*) pObjXXXX;
					size_t __values1 = pObjectX->getSize();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_spatialindex_Idvistor_OperatorIndex_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong index_j )
				{
					EarthView::World::Spatial2D::SpatialIndex::IDVistor& pObjectX = *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*) pObjXXXX;
					size_t index = (size_t) index_j;
					ev_uint32& __values1 = pObjectX[index];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_spatialindex_Point2DF_OperatorEquals_1Point2DF(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Spatial2D::SpatialIndex::Point2DF& pObjectX = *(EarthView::World::Spatial2D::SpatialIndex::Point2DF*) pObjXXXX;
					const EarthView::World::Spatial2D::SpatialIndex::Point2DF &other = *(EarthView::World::Spatial2D::SpatialIndex::Point2DF*) other_j;
					ev_bool __values1 = (pObjectX == other);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_spatialindex_Point2DF_OperatorNotEquals_1Point2DF(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Spatial2D::SpatialIndex::Point2DF& pObjectX = *(EarthView::World::Spatial2D::SpatialIndex::Point2DF*) pObjXXXX;
					const EarthView::World::Spatial2D::SpatialIndex::Point2DF &other = *(EarthView::World::Spatial2D::SpatialIndex::Point2DF*) other_j;
					ev_bool __values1 = (pObjectX != other);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial2d_spatialindex_Point2DF_get_1X_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::SpatialIndex::Point2DF *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::Point2DF*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->X);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Point2DF_set_1X_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial2D::SpatialIndex::Point2DF *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::Point2DF*)pObjXXXX;
					pObjectX->X = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial2d_spatialindex_Point2DF_get_1Y_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::SpatialIndex::Point2DF *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::Point2DF*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->Y);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Point2DF_set_1Y_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial2D::SpatialIndex::Point2DF *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::Point2DF*)pObjXXXX;
					pObjectX->Y = (ev_real32)__values1_j;
				}
				class JISpatialIndexProxy : public EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex
				{
				 private:
					EarthView::World::Core::ev_string m_insertData_Data_callback;
					EarthView::World::Core::ev_string m_deleteData_Data_callback;
					EarthView::World::Core::ev_string m_containsWhatQuery_Data_IDVistor_callback;
					EarthView::World::Core::ev_string m_intersectsWithQuery_Data_IDVistor_callback;
					EarthView::World::Core::ev_string m_pointLocationQuery_Point2DF_IDVistor_callback;
					EarthView::World::Core::ev_string m_nearestNeighborQuery_ev_real32_Data_IDVistor_callback;
					EarthView::World::Core::ev_string m_getIndexType_void_callback;
					EarthView::World::Core::ev_string m_getStatistics_ev_int32_ev_int32_ev_int32_ev_int32_callback;
				public:
					JISpatialIndexProxy(EarthView::World::Core::CNameValuePairList *pList) : ISpatialIndex(pList)
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
					void register_insertData_Data_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_insertData_Data_callback = __method;
					}
					void register_deleteData_Data_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_deleteData_Data_callback = __method;
					}
					void register_containsWhatQuery_Data_IDVistor_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_containsWhatQuery_Data_IDVistor_callback = __method;
					}
					void register_intersectsWithQuery_Data_IDVistor_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_intersectsWithQuery_Data_IDVistor_callback = __method;
					}
					void register_pointLocationQuery_Point2DF_IDVistor_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_pointLocationQuery_Point2DF_IDVistor_callback = __method;
					}
					void register_nearestNeighborQuery_ev_real32_Data_IDVistor_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_nearestNeighborQuery_ev_real32_Data_IDVistor_callback = __method;
					}
					void register_getIndexType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getIndexType_void_callback = __method;
					}
					void register_getStatistics_ev_int32_ev_int32_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getStatistics_ev_int32_ev_int32_ev_int32_ev_int32_callback = __method;
					}
					virtual void insertData(const EarthView::World::Spatial2D::SpatialIndex::Data& data)
					{
						if (this->_gRef != NULL && this->m_insertData_Data_callback != "" && this->isCustomExtend())
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
							jlong data_j = (jlong) &data;
							jmethodID __method = __gr->getMethod("insertData_Data_callback");
							__env->CallVoidMethod(__obj, __method , data_j);
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
							return this->ISpatialIndex::insertData(data);
						}
					}
					virtual void deleteData(const EarthView::World::Spatial2D::SpatialIndex::Data& data)
					{
						if (this->_gRef != NULL && this->m_deleteData_Data_callback != "" && this->isCustomExtend())
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
							jlong data_j = (jlong) &data;
							jmethodID __method = __gr->getMethod("deleteData_Data_callback");
							__env->CallVoidMethod(__obj, __method , data_j);
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
							return this->ISpatialIndex::deleteData(data);
						}
					}
					virtual void containsWhatQuery(const EarthView::World::Spatial2D::SpatialIndex::Data& query, EarthView::World::Spatial2D::SpatialIndex::IDVistor& presultIDList) const
					{
						if (this->_gRef != NULL && this->m_containsWhatQuery_Data_IDVistor_callback != "" && this->isCustomExtend())
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
							jlong query_j = (jlong) &query;
							jlong presultIDList_j = (jlong) &presultIDList;
							jmethodID __method = __gr->getMethod("containsWhatQuery_Data_IDVistor_callback");
							__env->CallVoidMethod(__obj, __method , query_j, presultIDList_j);
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
							return this->ISpatialIndex::containsWhatQuery(query, presultIDList);
						}
					}
					virtual void intersectsWithQuery(const EarthView::World::Spatial2D::SpatialIndex::Data& query, EarthView::World::Spatial2D::SpatialIndex::IDVistor& presultIDList) const
					{
						if (this->_gRef != NULL && this->m_intersectsWithQuery_Data_IDVistor_callback != "" && this->isCustomExtend())
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
							jlong query_j = (jlong) &query;
							jlong presultIDList_j = (jlong) &presultIDList;
							jmethodID __method = __gr->getMethod("intersectsWithQuery_Data_IDVistor_callback");
							__env->CallVoidMethod(__obj, __method , query_j, presultIDList_j);
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
							return this->ISpatialIndex::intersectsWithQuery(query, presultIDList);
						}
					}
					virtual void pointLocationQuery(const EarthView::World::Spatial2D::SpatialIndex::Point2DF& query, EarthView::World::Spatial2D::SpatialIndex::IDVistor& presultIDList) const
					{
						if (this->_gRef != NULL && this->m_pointLocationQuery_Point2DF_IDVistor_callback != "" && this->isCustomExtend())
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
							jlong query_j = (jlong) &query;
							jlong presultIDList_j = (jlong) &presultIDList;
							jmethodID __method = __gr->getMethod("pointLocationQuery_Point2DF_IDVistor_callback");
							__env->CallVoidMethod(__obj, __method , query_j, presultIDList_j);
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
							return this->ISpatialIndex::pointLocationQuery(query, presultIDList);
						}
					}
					virtual void nearestNeighborQuery(ev_real32 dfthreshold, const EarthView::World::Spatial2D::SpatialIndex::Data& query, EarthView::World::Spatial2D::SpatialIndex::IDVistor& presultIDList) const
					{
						if (this->_gRef != NULL && this->m_nearestNeighborQuery_ev_real32_Data_IDVistor_callback != "" && this->isCustomExtend())
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
							jfloat dfthreshold_j = (jfloat) dfthreshold;
							jlong query_j = (jlong) &query;
							jlong presultIDList_j = (jlong) &presultIDList;
							jmethodID __method = __gr->getMethod("nearestNeighborQuery_ev_real32_Data_IDVistor_callback");
							__env->CallVoidMethod(__obj, __method , dfthreshold_j, query_j, presultIDList_j);
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
							return this->ISpatialIndex::nearestNeighborQuery(dfthreshold, query, presultIDList);
						}
					}
					virtual EarthView::World::Spatial2D::SpatialIndex::SINDEXTYPE getIndexType() const
					{
						if (this->_gRef != NULL && this->m_getIndexType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getIndexType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial2D::SpatialIndex::SINDEXTYPE __values1 = (EarthView::World::Spatial2D::SpatialIndex::SINDEXTYPE) __values1_j;
							return __values1;
						}
						else
						{
							return this->ISpatialIndex::getIndexType();
						}
					}
					virtual void getStatistics(ev_int32& pnFeatureCount, ev_int32& pnNodeCount, ev_int32& pnMaxDepth, ev_int32& pnMaxBucketCapacity)
					{
						if (this->_gRef != NULL && this->m_getStatistics_ev_int32_ev_int32_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
							jlong pnFeatureCount_j = (jlong) &pnFeatureCount;
							jlong pnNodeCount_j = (jlong) &pnNodeCount;
							jlong pnMaxDepth_j = (jlong) &pnMaxDepth;
							jlong pnMaxBucketCapacity_j = (jlong) &pnMaxBucketCapacity;
							jmethodID __method = __gr->getMethod("getStatistics_ev_int32_ev_int32_ev_int32_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , pnFeatureCount_j, pnNodeCount_j, pnMaxDepth_j, pnMaxBucketCapacity_j);
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
							return this->ISpatialIndex::getStatistics(pnFeatureCount, pnNodeCount, pnMaxDepth, pnMaxBucketCapacity);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JISpatialIndexProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Ispatialindex_insertData_1Data(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong data_j)
				{
					const EarthView::World::Spatial2D::SpatialIndex::Data &data = *(EarthView::World::Spatial2D::SpatialIndex::Data*) data_j;
					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialIndexProxy))
					{
						pObjectX->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::insertData(data);
					}
					else
					{
						pObjectX->insertData(data);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Ispatialindex_register_1insertData_1Data(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialIndexProxy *pObjectX = (JISpatialIndexProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_insertData_Data_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"insertData_Data_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Ispatialindex_insertData_1Data_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong data_j)
				{
					const EarthView::World::Spatial2D::SpatialIndex::Data &data = *(EarthView::World::Spatial2D::SpatialIndex::Data*) data_j;
					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::insertData(data);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Ispatialindex_deleteData_1Data(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong data_j)
				{
					const EarthView::World::Spatial2D::SpatialIndex::Data &data = *(EarthView::World::Spatial2D::SpatialIndex::Data*) data_j;
					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialIndexProxy))
					{
						pObjectX->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::deleteData(data);
					}
					else
					{
						pObjectX->deleteData(data);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Ispatialindex_register_1deleteData_1Data(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialIndexProxy *pObjectX = (JISpatialIndexProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_deleteData_Data_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"deleteData_Data_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Ispatialindex_deleteData_1Data_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong data_j)
				{
					const EarthView::World::Spatial2D::SpatialIndex::Data &data = *(EarthView::World::Spatial2D::SpatialIndex::Data*) data_j;
					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::deleteData(data);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Ispatialindex_containsWhatQuery_1Data_1IDVistor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong query_j, jlong presultIDList_j)
				{
					const EarthView::World::Spatial2D::SpatialIndex::Data &query = *(EarthView::World::Spatial2D::SpatialIndex::Data*) query_j;
					EarthView::World::Spatial2D::SpatialIndex::IDVistor &presultIDList = *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*) presultIDList_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialIndexProxy))
					{
						pObjectX->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::containsWhatQuery(query, presultIDList);
					}
					else
					{
						pObjectX->containsWhatQuery(query, presultIDList);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Ispatialindex_register_1containsWhatQuery_1Data_1IDVistor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialIndexProxy *pObjectX = (JISpatialIndexProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_containsWhatQuery_Data_IDVistor_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"containsWhatQuery_Data_IDVistor_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Ispatialindex_containsWhatQuery_1Data_1IDVistor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong query_j, jlong presultIDList_j)
				{
					const EarthView::World::Spatial2D::SpatialIndex::Data &query = *(EarthView::World::Spatial2D::SpatialIndex::Data*) query_j;
					EarthView::World::Spatial2D::SpatialIndex::IDVistor &presultIDList = *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*) presultIDList_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::containsWhatQuery(query, presultIDList);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Ispatialindex_intersectsWithQuery_1Data_1IDVistor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong query_j, jlong presultIDList_j)
				{
					const EarthView::World::Spatial2D::SpatialIndex::Data &query = *(EarthView::World::Spatial2D::SpatialIndex::Data*) query_j;
					EarthView::World::Spatial2D::SpatialIndex::IDVistor &presultIDList = *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*) presultIDList_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialIndexProxy))
					{
						pObjectX->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::intersectsWithQuery(query, presultIDList);
					}
					else
					{
						pObjectX->intersectsWithQuery(query, presultIDList);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Ispatialindex_register_1intersectsWithQuery_1Data_1IDVistor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialIndexProxy *pObjectX = (JISpatialIndexProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_intersectsWithQuery_Data_IDVistor_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"intersectsWithQuery_Data_IDVistor_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Ispatialindex_intersectsWithQuery_1Data_1IDVistor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong query_j, jlong presultIDList_j)
				{
					const EarthView::World::Spatial2D::SpatialIndex::Data &query = *(EarthView::World::Spatial2D::SpatialIndex::Data*) query_j;
					EarthView::World::Spatial2D::SpatialIndex::IDVistor &presultIDList = *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*) presultIDList_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::intersectsWithQuery(query, presultIDList);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Ispatialindex_pointLocationQuery_1Point2DF_1IDVistor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong query_j, jlong presultIDList_j)
				{
					const EarthView::World::Spatial2D::SpatialIndex::Point2DF &query = *(EarthView::World::Spatial2D::SpatialIndex::Point2DF*) query_j;
					EarthView::World::Spatial2D::SpatialIndex::IDVistor &presultIDList = *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*) presultIDList_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialIndexProxy))
					{
						pObjectX->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::pointLocationQuery(query, presultIDList);
					}
					else
					{
						pObjectX->pointLocationQuery(query, presultIDList);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Ispatialindex_register_1pointLocationQuery_1Point2DF_1IDVistor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialIndexProxy *pObjectX = (JISpatialIndexProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_pointLocationQuery_Point2DF_IDVistor_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"pointLocationQuery_Point2DF_IDVistor_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Ispatialindex_pointLocationQuery_1Point2DF_1IDVistor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong query_j, jlong presultIDList_j)
				{
					const EarthView::World::Spatial2D::SpatialIndex::Point2DF &query = *(EarthView::World::Spatial2D::SpatialIndex::Point2DF*) query_j;
					EarthView::World::Spatial2D::SpatialIndex::IDVistor &presultIDList = *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*) presultIDList_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::pointLocationQuery(query, presultIDList);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Ispatialindex_nearestNeighborQuery_1ev_1real32_1Data_1IDVistor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat dfthreshold_j, jlong query_j, jlong presultIDList_j)
				{
					ev_real32 dfthreshold = (ev_real32) dfthreshold_j;
					const EarthView::World::Spatial2D::SpatialIndex::Data &query = *(EarthView::World::Spatial2D::SpatialIndex::Data*) query_j;
					EarthView::World::Spatial2D::SpatialIndex::IDVistor &presultIDList = *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*) presultIDList_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialIndexProxy))
					{
						pObjectX->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::nearestNeighborQuery(dfthreshold, query, presultIDList);
					}
					else
					{
						pObjectX->nearestNeighborQuery(dfthreshold, query, presultIDList);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Ispatialindex_register_1nearestNeighborQuery_1ev_1real32_1Data_1IDVistor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialIndexProxy *pObjectX = (JISpatialIndexProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_nearestNeighborQuery_ev_real32_Data_IDVistor_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"nearestNeighborQuery_ev_real32_Data_IDVistor_callback", "(FJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Ispatialindex_nearestNeighborQuery_1ev_1real32_1Data_1IDVistor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat dfthreshold_j, jlong query_j, jlong presultIDList_j)
				{
					ev_real32 dfthreshold = (ev_real32) dfthreshold_j;
					const EarthView::World::Spatial2D::SpatialIndex::Data &query = *(EarthView::World::Spatial2D::SpatialIndex::Data*) query_j;
					EarthView::World::Spatial2D::SpatialIndex::IDVistor &presultIDList = *(EarthView::World::Spatial2D::SpatialIndex::IDVistor*) presultIDList_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::nearestNeighborQuery(dfthreshold, query, presultIDList);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_spatialindex_Ispatialindex_getIndexType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialIndexProxy))
					{
						EarthView::World::Spatial2D::SpatialIndex::SINDEXTYPE __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::getIndexType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial2D::SpatialIndex::SINDEXTYPE __values1 = pObjectX->getIndexType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Ispatialindex_register_1getIndexType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialIndexProxy *pObjectX = (JISpatialIndexProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getIndexType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getIndexType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_spatialindex_Ispatialindex_getIndexType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjXXXX;
					EarthView::World::Spatial2D::SpatialIndex::SINDEXTYPE __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::getIndexType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Ispatialindex_getStatistics_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pnFeatureCount_j, jlong pnNodeCount_j, jlong pnMaxDepth_j, jlong pnMaxBucketCapacity_j)
				{
					ev_int32 &pnFeatureCount = *(ev_int32*) pnFeatureCount_j;
					ev_int32 &pnNodeCount = *(ev_int32*) pnNodeCount_j;
					ev_int32 &pnMaxDepth = *(ev_int32*) pnMaxDepth_j;
					ev_int32 &pnMaxBucketCapacity = *(ev_int32*) pnMaxBucketCapacity_j;
					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JISpatialIndexProxy))
					{
						pObjectX->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::getStatistics(pnFeatureCount, pnNodeCount, pnMaxDepth, pnMaxBucketCapacity);
					}
					else
					{
						pObjectX->getStatistics(pnFeatureCount, pnNodeCount, pnMaxDepth, pnMaxBucketCapacity);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Ispatialindex_register_1getStatistics_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JISpatialIndexProxy *pObjectX = (JISpatialIndexProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getStatistics_ev_int32_ev_int32_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getStatistics_ev_int32_ev_int32_ev_int32_ev_int32_callback", "(JJJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Ispatialindex_getStatistics_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pnFeatureCount_j, jlong pnNodeCount_j, jlong pnMaxDepth_j, jlong pnMaxBucketCapacity_j)
				{
					ev_int32 &pnFeatureCount = *(ev_int32*) pnFeatureCount_j;
					ev_int32 &pnNodeCount = *(ev_int32*) pnNodeCount_j;
					ev_int32 &pnMaxDepth = *(ev_int32*) pnMaxDepth_j;
					ev_int32 &pnMaxBucketCapacity = *(ev_int32*) pnMaxBucketCapacity_j;
					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex::getStatistics(pnFeatureCount, pnNodeCount, pnMaxDepth, pnMaxBucketCapacity);
				}
				class JIStorageManagerProxy : public EarthView::World::Spatial2D::SpatialIndex::IStorageManager
				{
				 private:
					EarthView::World::Core::ev_string m_load_ev_char_callback;
					EarthView::World::Core::ev_string m_save_ISpatialIndex_ev_char_callback;
					EarthView::World::Core::ev_string m_load_CDataStream_callback;
					EarthView::World::Core::ev_string m_save_ISpatialIndex_CDataStream_callback;
					EarthView::World::Core::ev_string m_saveAllNodes_ISpatialIndex_CDataStream_callback;
					EarthView::World::Core::ev_string m_getDriverType_void_callback;
				public:
					JIStorageManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : IStorageManager(pList)
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
					void register_load_ev_char_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_load_ev_char_callback = __method;
					}
					void register_save_ISpatialIndex_ev_char_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_save_ISpatialIndex_ev_char_callback = __method;
					}
					void register_load_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_load_CDataStream_callback = __method;
					}
					void register_save_ISpatialIndex_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_save_ISpatialIndex_CDataStream_callback = __method;
					}
					void register_saveAllNodes_ISpatialIndex_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_saveAllNodes_ISpatialIndex_CDataStream_callback = __method;
					}
					void register_getDriverType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDriverType_void_callback = __method;
					}
					virtual EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* load(const ev_char* pFullpath) const
					{
						if (this->_gRef != NULL && this->m_load_ev_char_callback != "" && this->isCustomExtend())
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
							jlong pFullpath_j = (jlong) pFullpath;
							jmethodID __method = __gr->getMethod("load_ev_char_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , pFullpath_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex *__values1 = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->IStorageManager::load(pFullpath);
						}
					}
					virtual ev_bool save(const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* hSpatialIndex, const ev_char* pFilepath) const
					{
						if (this->_gRef != NULL && this->m_save_ISpatialIndex_ev_char_callback != "" && this->isCustomExtend())
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
							jlong hSpatialIndex_j = (jlong) hSpatialIndex;
							jlong pFilepath_j = (jlong) pFilepath;
							jmethodID __method = __gr->getMethod("save_ISpatialIndex_ev_char_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , hSpatialIndex_j, pFilepath_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->IStorageManager::save(hSpatialIndex, pFilepath);
						}
					}
					virtual EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* load(EarthView::World::Core::CDataStream& stream) const
					{
						if (this->_gRef != NULL && this->m_load_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("load_CDataStream_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , stream_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex *__values1 = (EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->IStorageManager::load(stream);
						}
					}
					virtual ev_bool save(const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* hSpatialIndex, EarthView::World::Core::CDataStream& stream) const
					{
						if (this->_gRef != NULL && this->m_save_ISpatialIndex_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong hSpatialIndex_j = (jlong) hSpatialIndex;
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("save_ISpatialIndex_CDataStream_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , hSpatialIndex_j, stream_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->IStorageManager::save(hSpatialIndex, stream);
						}
					}
					virtual ev_bool saveAllNodes(const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* hSpatialIndex, EarthView::World::Core::CDataStream& stream)
					{
						if (this->_gRef != NULL && this->m_saveAllNodes_ISpatialIndex_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong hSpatialIndex_j = (jlong) hSpatialIndex;
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("saveAllNodes_ISpatialIndex_CDataStream_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , hSpatialIndex_j, stream_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->IStorageManager::saveAllNodes(hSpatialIndex, stream);
						}
					}
					virtual EarthView::World::Spatial2D::SpatialIndex::DRIVERTYPE getDriverType() const
					{
						if (this->_gRef != NULL && this->m_getDriverType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getDriverType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial2D::SpatialIndex::DRIVERTYPE __values1 = (EarthView::World::Spatial2D::SpatialIndex::DRIVERTYPE) __values1_j;
							return __values1;
						}
						else
						{
							return this->IStorageManager::getDriverType();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIStorageManagerProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_spatialindex_Istoragemanager_load_1ev_1char(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pFullpath_j)
				{
					const ev_char *pFullpath = (const ev_char*) pFullpath_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::IStorageManager *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIStorageManagerProxy))
					{
						EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::IStorageManager::load(pFullpath);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* __values1 = pObjectX->load(pFullpath);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Istoragemanager_register_1load_1ev_1char(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStorageManagerProxy *pObjectX = (JIStorageManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_load_ev_char_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"load_ev_char_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_spatialindex_Istoragemanager_load_1ev_1char_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pFullpath_j)
				{
					const ev_char *pFullpath = (const ev_char*) pFullpath_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::IStorageManager *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjXXXX;
					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::IStorageManager::load(pFullpath);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_spatialindex_Istoragemanager_save_1ISpatialIndex_1ev_1char(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong hSpatialIndex_j, jlong pFilepath_j)
				{
					const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex *hSpatialIndex = (const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) hSpatialIndex_j;
					const ev_char *pFilepath = (const ev_char*) pFilepath_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::IStorageManager *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIStorageManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::IStorageManager::save(hSpatialIndex, pFilepath);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->save(hSpatialIndex, pFilepath);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Istoragemanager_register_1save_1ISpatialIndex_1ev_1char(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStorageManagerProxy *pObjectX = (JIStorageManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_save_ISpatialIndex_ev_char_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"save_ISpatialIndex_ev_char_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_spatialindex_Istoragemanager_save_1ISpatialIndex_1ev_1char_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong hSpatialIndex_j, jlong pFilepath_j)
				{
					const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex *hSpatialIndex = (const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) hSpatialIndex_j;
					const ev_char *pFilepath = (const ev_char*) pFilepath_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::IStorageManager *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::IStorageManager::save(hSpatialIndex, pFilepath);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_spatialindex_Istoragemanager_load_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::IStorageManager *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIStorageManagerProxy))
					{
						EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::IStorageManager::load(stream);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* __values1 = pObjectX->load(stream);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Istoragemanager_register_1load_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStorageManagerProxy *pObjectX = (JIStorageManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_load_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"load_CDataStream_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_spatialindex_Istoragemanager_load_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::IStorageManager *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjXXXX;
					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::IStorageManager::load(stream);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_spatialindex_Istoragemanager_save_1ISpatialIndex_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong hSpatialIndex_j, jlong stream_j)
				{
					const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex *hSpatialIndex = (const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) hSpatialIndex_j;
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::IStorageManager *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIStorageManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::IStorageManager::save(hSpatialIndex, stream);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->save(hSpatialIndex, stream);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Istoragemanager_register_1save_1ISpatialIndex_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStorageManagerProxy *pObjectX = (JIStorageManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_save_ISpatialIndex_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"save_ISpatialIndex_CDataStream_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_spatialindex_Istoragemanager_save_1ISpatialIndex_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong hSpatialIndex_j, jlong stream_j)
				{
					const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex *hSpatialIndex = (const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) hSpatialIndex_j;
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial2D::SpatialIndex::IStorageManager *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::IStorageManager::save(hSpatialIndex, stream);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_spatialindex_Istoragemanager_saveAllNodes_1ISpatialIndex_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong hSpatialIndex_j, jlong stream_j)
				{
					const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex *hSpatialIndex = (const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) hSpatialIndex_j;
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial2D::SpatialIndex::IStorageManager *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIStorageManagerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::IStorageManager::saveAllNodes(hSpatialIndex, stream);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->saveAllNodes(hSpatialIndex, stream);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Istoragemanager_register_1saveAllNodes_1ISpatialIndex_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStorageManagerProxy *pObjectX = (JIStorageManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_saveAllNodes_ISpatialIndex_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"saveAllNodes_ISpatialIndex_CDataStream_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_spatialindex_Istoragemanager_saveAllNodes_1ISpatialIndex_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong hSpatialIndex_j, jlong stream_j)
				{
					const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex *hSpatialIndex = (const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex*) hSpatialIndex_j;
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial2D::SpatialIndex::IStorageManager *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::IStorageManager::saveAllNodes(hSpatialIndex, stream);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_spatialindex_Istoragemanager_getDriverType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::SpatialIndex::IStorageManager *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIStorageManagerProxy))
					{
						EarthView::World::Spatial2D::SpatialIndex::DRIVERTYPE __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::IStorageManager::getDriverType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial2D::SpatialIndex::DRIVERTYPE __values1 = pObjectX->getDriverType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_spatialindex_Istoragemanager_register_1getDriverType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIStorageManagerProxy *pObjectX = (JIStorageManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDriverType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDriverType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_spatialindex_Istoragemanager_getDriverType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::SpatialIndex::IStorageManager *pObjectX = (EarthView::World::Spatial2D::SpatialIndex::IStorageManager*) pObjXXXX;
					EarthView::World::Spatial2D::SpatialIndex::DRIVERTYPE __values1 = pObjectX->EarthView::World::Spatial2D::SpatialIndex::IStorageManager::getDriverType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
		}
	}
}
