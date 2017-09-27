/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "annotation/annoselection.h"
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
			namespace GeoDataset
			{
				class JCAnnoSelectionProxy : public EarthView::World::Spatial2D::GeoDataset::CAnnoSelection
				{
				 private:
					EarthView::World::Core::ev_string m_getCount_void_callback;
					EarthView::World::Core::ev_string m_getID_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getIDs_ev_uint32_callback;
					EarthView::World::Core::ev_string m_findID_ev_uint32_callback;
					EarthView::World::Core::ev_string m_query_IQueryFilter_callback;
					EarthView::World::Core::ev_string m_select_IQueryFilter_callback;
					EarthView::World::Core::ev_string m_addID_ev_uint32_callback;
					EarthView::World::Core::ev_string m_addIDs_ev_uint32_ev_uint32_callback;
					EarthView::World::Core::ev_string m_remove_ev_uint32_ev_uint32_callback;
					EarthView::World::Core::ev_string m_clear_void_callback;
					EarthView::World::Core::ev_string m_intersect_IFeatureSelection_callback;
					EarthView::World::Core::ev_string m_difference_IFeatureSelection_callback;
					EarthView::World::Core::ev_string m_append_IFeatureSelection_callback;
				public:
					JCAnnoSelectionProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnnoSelection(pList)
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
					void register_getCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getCount_void_callback = __method;
					}
					void register_getID_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getID_ev_uint32_callback = __method;
					}
					void register_getIDs_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getIDs_ev_uint32_callback = __method;
					}
					void register_findID_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_findID_ev_uint32_callback = __method;
					}
					void register_query_IQueryFilter_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_query_IQueryFilter_callback = __method;
					}
					void register_select_IQueryFilter_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_select_IQueryFilter_callback = __method;
					}
					void register_addID_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addID_ev_uint32_callback = __method;
					}
					void register_addIDs_ev_uint32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addIDs_ev_uint32_ev_uint32_callback = __method;
					}
					void register_remove_ev_uint32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_remove_ev_uint32_ev_uint32_callback = __method;
					}
					void register_clear_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_clear_void_callback = __method;
					}
					void register_intersect_IFeatureSelection_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_intersect_IFeatureSelection_callback = __method;
					}
					void register_difference_IFeatureSelection_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_difference_IFeatureSelection_callback = __method;
					}
					void register_append_IFeatureSelection_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_append_IFeatureSelection_callback = __method;
					}
					virtual ev_uint32 getCount() const
					{
						if (this->_gRef != NULL && this->m_getCount_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getCount_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_uint32 __values1 = (ev_uint32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CAnnoSelection::getCount();
						}
					}
					virtual ev_uint32 getID(ev_uint32 index) const
					{
						if (this->_gRef != NULL && this->m_getID_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong index_j = (jlong) index;
							jmethodID __method = __gr->getMethod("getID_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_uint32 __values1 = (ev_uint32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CAnnoSelection::getID(index);
						}
					}
					virtual ev_uint32 getIDs(ev_uint32* ids) const
					{
						if (this->_gRef != NULL && this->m_getIDs_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong ids_j = (jlong) ids;
							jmethodID __method = __gr->getMethod("getIDs_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , ids_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_uint32 __values1 = (ev_uint32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CAnnoSelection::getIDs(ids);
						}
					}
					virtual ev_int32 findID(ev_uint32 id) const
					{
						if (this->_gRef != NULL && this->m_findID_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong id_j = (jlong) id;
							jmethodID __method = __gr->getMethod("findID_ev_uint32_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , id_j);
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
							return this->CAnnoSelection::findID(id);
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter) const
					{
						if (this->_gRef != NULL && this->m_query_IQueryFilter_callback != "" && this->isCustomExtend())
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
							jlong filter_j = (jlong) filter;
							jmethodID __method = __gr->getMethod("query_IQueryFilter_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , filter_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::IFeatureIterator *__values1 = (EarthView::World::Spatial::GeoDataset::IFeatureIterator*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CAnnoSelection::query(filter);
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter) const
					{
						if (this->_gRef != NULL && this->m_select_IQueryFilter_callback != "" && this->isCustomExtend())
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
							jlong filter_j = (jlong) filter;
							jmethodID __method = __gr->getMethod("select_IQueryFilter_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , filter_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::IFeatureSelection *__values1 = (EarthView::World::Spatial::GeoDataset::IFeatureSelection*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CAnnoSelection::select(filter);
						}
					}
					virtual ev_bool addID(ev_uint32 id)
					{
						if (this->_gRef != NULL && this->m_addID_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong id_j = (jlong) id;
							jmethodID __method = __gr->getMethod("addID_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , id_j);
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
							return this->CAnnoSelection::addID(id);
						}
					}
					virtual ev_uint32 addIDs(ev_uint32* id, ev_uint32 size)
					{
						if (this->_gRef != NULL && this->m_addIDs_ev_uint32_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong id_j = (jlong) id;
							jlong size_j = (jlong) size;
							jmethodID __method = __gr->getMethod("addIDs_ev_uint32_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , id_j, size_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_uint32 __values1 = (ev_uint32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CAnnoSelection::addIDs(id, size);
						}
					}
					virtual ev_uint32 remove(ev_uint32 index, ev_uint32 size)
					{
						if (this->_gRef != NULL && this->m_remove_ev_uint32_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong index_j = (jlong) index;
							jlong size_j = (jlong) size;
							jmethodID __method = __gr->getMethod("remove_ev_uint32_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j, size_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_uint32 __values1 = (ev_uint32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CAnnoSelection::remove(index, size);
						}
					}
					virtual ev_uint32 clear()
					{
						if (this->_gRef != NULL && this->m_clear_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("clear_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_uint32 __values1 = (ev_uint32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CAnnoSelection::clear();
						}
					}
					virtual void intersect(const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set)
					{
						if (this->_gRef != NULL && this->m_intersect_IFeatureSelection_callback != "" && this->isCustomExtend())
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
							jlong set_j = (jlong) set;
							jmethodID __method = __gr->getMethod("intersect_IFeatureSelection_callback");
							__env->CallVoidMethod(__obj, __method , set_j);
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
							return this->CAnnoSelection::intersect(set);
						}
					}
					virtual void difference(const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set)
					{
						if (this->_gRef != NULL && this->m_difference_IFeatureSelection_callback != "" && this->isCustomExtend())
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
							jlong set_j = (jlong) set;
							jmethodID __method = __gr->getMethod("difference_IFeatureSelection_callback");
							__env->CallVoidMethod(__obj, __method , set_j);
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
							return this->CAnnoSelection::difference(set);
						}
					}
					virtual void append(const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set)
					{
						if (this->_gRef != NULL && this->m_append_IFeatureSelection_callback != "" && this->isCustomExtend())
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
							jlong set_j = (jlong) set;
							jmethodID __method = __gr->getMethod("append_IFeatureSelection_callback");
							__env->CallVoidMethod(__obj, __method , set_j);
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
							return this->CAnnoSelection::append(set);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCAnnoSelectionProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_getCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnnoSelectionProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::getCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_register_1getCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnnoSelectionProxy *pObjectX = (JCAnnoSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getCount_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_getCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::getCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_getID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnnoSelectionProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::getID(index);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getID(index);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_register_1getID_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnnoSelectionProxy *pObjectX = (JCAnnoSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getID_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getID_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_getID_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::getID(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_getIDs_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ids_j)
				{
					ev_uint32 *ids = (ev_uint32*) ids_j;
					const 					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnnoSelectionProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::getIDs(ids);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getIDs(ids);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_register_1getIDs_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnnoSelectionProxy *pObjectX = (JCAnnoSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getIDs_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getIDs_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_getIDs_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ids_j)
				{
					ev_uint32 *ids = (ev_uint32*) ids_j;
					const 					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::getIDs(ids);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_findID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					const 					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnnoSelectionProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::findID(id);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->findID(id);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_register_1findID_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnnoSelectionProxy *pObjectX = (JCAnnoSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_findID_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"findID_ev_uint32_callback", "(J)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_findID_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					const 					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::findID(id);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_query_1IQueryFilter(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					const 					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnnoSelectionProxy))
					{
						EarthView::World::Spatial::GeoDataset::IFeatureIterator* __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::query(filter);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureIterator* __values1 = pObjectX->query(filter);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_register_1query_1IQueryFilter(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnnoSelectionProxy *pObjectX = (JCAnnoSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_query_IQueryFilter_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"query_IQueryFilter_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_query_1IQueryFilter_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					const 					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureIterator* __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::query(filter);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_select_1IQueryFilter(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					const 					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnnoSelectionProxy))
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::select(filter);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* __values1 = pObjectX->select(filter);
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_register_1select_1IQueryFilter(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnnoSelectionProxy *pObjectX = (JCAnnoSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_select_IQueryFilter_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"select_IQueryFilter_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_select_1IQueryFilter_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					const 					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureSelection* __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::select(filter);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_addID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnnoSelectionProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::addID(id);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->addID(id);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_register_1addID_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnnoSelectionProxy *pObjectX = (JCAnnoSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addID_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addID_ev_uint32_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_addID_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::addID(id);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_addIDs_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jlong size_j)
				{
					ev_uint32 *id = (ev_uint32*) id_j;
					ev_uint32 size = (ev_uint32) size_j;
					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnnoSelectionProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::addIDs(id, size);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->addIDs(id, size);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_register_1addIDs_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnnoSelectionProxy *pObjectX = (JCAnnoSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addIDs_ev_uint32_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addIDs_ev_uint32_ev_uint32_callback", "(JJ)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_addIDs_1ev_1uint32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jlong size_j)
				{
					ev_uint32 *id = (ev_uint32*) id_j;
					ev_uint32 size = (ev_uint32) size_j;
					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::addIDs(id, size);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_remove_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong size_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					ev_uint32 size = (ev_uint32) size_j;
					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnnoSelectionProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::remove(index, size);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->remove(index, size);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_register_1remove_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnnoSelectionProxy *pObjectX = (JCAnnoSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_remove_ev_uint32_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"remove_ev_uint32_ev_uint32_callback", "(JJ)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_remove_1ev_1uint32_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong size_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					ev_uint32 size = (ev_uint32) size_j;
					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::remove(index, size);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnnoSelectionProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::clear();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->clear();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_register_1clear_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnnoSelectionProxy *pObjectX = (JCAnnoSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_clear_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"clear_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_clear_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::clear();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_intersect_1IFeatureSelection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong set_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeatureSelection *set = (const EarthView::World::Spatial::GeoDataset::IFeatureSelection*) set_j;
					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnnoSelectionProxy))
					{
						pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::intersect(set);
					}
					else
					{
						pObjectX->intersect(set);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_register_1intersect_1IFeatureSelection(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnnoSelectionProxy *pObjectX = (JCAnnoSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_intersect_IFeatureSelection_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"intersect_IFeatureSelection_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_intersect_1IFeatureSelection_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong set_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeatureSelection *set = (const EarthView::World::Spatial::GeoDataset::IFeatureSelection*) set_j;
					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::intersect(set);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_difference_1IFeatureSelection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong set_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeatureSelection *set = (const EarthView::World::Spatial::GeoDataset::IFeatureSelection*) set_j;
					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnnoSelectionProxy))
					{
						pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::difference(set);
					}
					else
					{
						pObjectX->difference(set);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_register_1difference_1IFeatureSelection(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnnoSelectionProxy *pObjectX = (JCAnnoSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_difference_IFeatureSelection_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"difference_IFeatureSelection_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_difference_1IFeatureSelection_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong set_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeatureSelection *set = (const EarthView::World::Spatial::GeoDataset::IFeatureSelection*) set_j;
					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::difference(set);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_append_1IFeatureSelection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong set_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeatureSelection *set = (const EarthView::World::Spatial::GeoDataset::IFeatureSelection*) set_j;
					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCAnnoSelectionProxy))
					{
						pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::append(set);
					}
					else
					{
						pObjectX->append(set);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_register_1append_1IFeatureSelection(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCAnnoSelectionProxy *pObjectX = (JCAnnoSelectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_append_IFeatureSelection_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"append_IFeatureSelection_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_geodataset_AnnoSelection_append_1IFeatureSelection_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong set_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeatureSelection *set = (const EarthView::World::Spatial::GeoDataset::IFeatureSelection*) set_j;
					EarthView::World::Spatial2D::GeoDataset::CAnnoSelection *pObjectX = (EarthView::World::Spatial2D::GeoDataset::CAnnoSelection*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::GeoDataset::CAnnoSelection::append(set);
				}
			}
		}
	}
}
