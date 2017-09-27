/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/kmldataset.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Kml
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
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
			namespace KmlManager
			{
				class JCKmlDataSetProxy : public EarthView::World::Spatial3D::KmlManager::CKmlDataSet
				{
				 private:
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_getDataVersion_void_callback;
					EarthView::World::Core::ev_string m_getDescription_void_callback;
					EarthView::World::Core::ev_string m_getUpdateTime_void_callback;
					EarthView::World::Core::ev_string m_hasSubDataset_void_callback;
					EarthView::World::Core::ev_string m_getDataSourceRef_void_callback;
					EarthView::World::Core::ev_string m_canEdit_void_callback;
					EarthView::World::Core::ev_string m_isEditing_void_callback;
					EarthView::World::Core::ev_string m_startEditing_ev_bool_callback;
					EarthView::World::Core::ev_string m_stopEditing_ev_bool_callback;
					EarthView::World::Core::ev_string m_isBeginEditingOperation_void_callback;
					EarthView::World::Core::ev_string m_beginEditingOperation_void_callback;
					EarthView::World::Core::ev_string m_endEditingOperation_ev_bool_callback;
				public:
					JCKmlDataSetProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlDataSet(pList)
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
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
					}
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_getDataVersion_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDataVersion_void_callback = __method;
					}
					void register_getDescription_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDescription_void_callback = __method;
					}
					void register_getUpdateTime_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getUpdateTime_void_callback = __method;
					}
					void register_hasSubDataset_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_hasSubDataset_void_callback = __method;
					}
					void register_getDataSourceRef_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDataSourceRef_void_callback = __method;
					}
					void register_canEdit_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_canEdit_void_callback = __method;
					}
					void register_isEditing_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isEditing_void_callback = __method;
					}
					void register_startEditing_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_startEditing_ev_bool_callback = __method;
					}
					void register_stopEditing_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_stopEditing_ev_bool_callback = __method;
					}
					void register_isBeginEditingOperation_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isBeginEditingOperation_void_callback = __method;
					}
					void register_beginEditingOperation_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_beginEditingOperation_void_callback = __method;
					}
					void register_endEditingOperation_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_endEditingOperation_ev_bool_callback = __method;
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
					{
						if (this->_gRef != NULL && this->m_getType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = (EarthView::World::Spatial::GeoDataset::EVDatasetType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CKmlDataSet::getType();
						}
					}
					virtual EVString getName() const
					{
						if (this->_gRef != NULL && this->m_getName_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getName_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CKmlDataSet::getName();
						}
					}
					virtual ev_uint64 getDataVersion() const
					{
						if (this->_gRef != NULL && this->m_getDataVersion_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getDataVersion_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1_s = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							ev_uint64 __values1 = __values1_s.getUint64();
							return __values1;
						}
						else
						{
							return this->CKmlDataSet::getDataVersion();
						}
					}
					virtual EVString getDescription() const
					{
						if (this->_gRef != NULL && this->m_getDescription_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getDescription_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CKmlDataSet::getDescription();
						}
					}
					virtual EVString getUpdateTime() const
					{
						if (this->_gRef != NULL && this->m_getUpdateTime_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getUpdateTime_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CKmlDataSet::getUpdateTime();
						}
					}
					virtual ev_bool hasSubDataset() const
					{
						if (this->_gRef != NULL && this->m_hasSubDataset_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("hasSubDataset_void_callback");
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
							return this->CKmlDataSet::hasSubDataset();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
					{
						if (this->_gRef != NULL && this->m_getDataSourceRef_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getDataSourceRef_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CKmlDataSet::getDataSourceRef();
						}
					}
					virtual ev_bool canEdit() const
					{
						if (this->_gRef != NULL && this->m_canEdit_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("canEdit_void_callback");
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
							return this->CKmlDataSet::canEdit();
						}
					}
					virtual ev_bool isEditing() const
					{
						if (this->_gRef != NULL && this->m_isEditing_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isEditing_void_callback");
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
							return this->CKmlDataSet::isEditing();
						}
					}
					virtual ev_bool startEditing(ev_bool withUndo)
					{
						if (this->_gRef != NULL && this->m_startEditing_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean withUndo_j = (jboolean) withUndo;
							jmethodID __method = __gr->getMethod("startEditing_ev_bool_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , withUndo_j);
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
							return this->CKmlDataSet::startEditing(withUndo);
						}
					}
					virtual ev_bool stopEditing(ev_bool isSave)
					{
						if (this->_gRef != NULL && this->m_stopEditing_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean isSave_j = (jboolean) isSave;
							jmethodID __method = __gr->getMethod("stopEditing_ev_bool_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , isSave_j);
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
							return this->CKmlDataSet::stopEditing(isSave);
						}
					}
					virtual ev_bool isBeginEditingOperation()
					{
						if (this->_gRef != NULL && this->m_isBeginEditingOperation_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isBeginEditingOperation_void_callback");
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
							return this->CKmlDataSet::isBeginEditingOperation();
						}
					}
					virtual ev_bool beginEditingOperation()
					{
						if (this->_gRef != NULL && this->m_beginEditingOperation_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("beginEditingOperation_void_callback");
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
							return this->CKmlDataSet::beginEditingOperation();
						}
					}
					virtual ev_bool endEditingOperation(ev_bool isConfirm)
					{
						if (this->_gRef != NULL && this->m_endEditingOperation_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean isConfirm_j = (jboolean) isConfirm;
							jmethodID __method = __gr->getMethod("endEditingOperation_ev_bool_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , isConfirm_j);
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
							return this->CKmlDataSet::endEditingOperation(isConfirm);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCKmlDataSetProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_00024KmlDataSets_push_1back_1CKmlDataSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *&t = *(EarthView::World::Spatial3D::KmlManager::CKmlDataSet**) t_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_00024KmlDataSets_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_00024KmlDataSets_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_00024KmlDataSets_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets& pObjectX = *(EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet*& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_00024KmlDataSets_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets*) pObjXXXX;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet*& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_00024KmlDataSets_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_00024KmlDataSets_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_00024KmlDataSets_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_00024KmlDataSets_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_get_1mParentDataSets_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mParentDataSets);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_set_1mParentDataSets_1CKmlDataSets(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)pObjXXXX;
					pObjectX->mParentDataSets = *(EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_get_1mSubDataSets_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mSubDataSets);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_set_1mSubDataSets_1CKmlDataSets(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)pObjXXXX;
					pObjectX->mSubDataSets = *(EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets*) __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_get_1mIsDirty_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mIsDirty);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_set_1mIsDirty_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)pObjXXXX;
					pObjectX->mIsDirty = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_get_1mIsAddGeoObject_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mIsAddGeoObject);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_set_1mIsAddGeoObject_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)pObjXXXX;
					pObjectX->mIsAddGeoObject = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_get_1mIsDeRenderGeoObject_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mIsDeRenderGeoObject);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_set_1mIsDeRenderGeoObject_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)pObjXXXX;
					pObjectX->mIsDeRenderGeoObject = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlDataSetProxy))
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlDataSetProxy *pObjectX = (JCKmlDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlDataSetProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlDataSetProxy *pObjectX = (JCKmlDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_getDataVersion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlDataSetProxy))
					{
						ev_uint64 __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::getDataVersion();
						EarthView::World::Core::ev_string __values1_ch;
						__values1_ch<<__values1;
						jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
						return __values1_j;
					}
					else
					{
						ev_uint64 __values1 = pObjectX->getDataVersion();
						EarthView::World::Core::ev_string __values1_ch;
						__values1_ch<<__values1;
						jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_register_1getDataVersion_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlDataSetProxy *pObjectX = (JCKmlDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDataVersion_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDataVersion_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_getDataVersion_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					ev_uint64 __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::getDataVersion();
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_getDescription_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlDataSetProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::getDescription();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getDescription();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_register_1getDescription_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlDataSetProxy *pObjectX = (JCKmlDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDescription_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDescription_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_getDescription_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::getDescription();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_getUpdateTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlDataSetProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::getUpdateTime();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getUpdateTime();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_register_1getUpdateTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlDataSetProxy *pObjectX = (JCKmlDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getUpdateTime_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getUpdateTime_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_getUpdateTime_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::getUpdateTime();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_hasSubDataset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlDataSetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::hasSubDataset();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->hasSubDataset();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_register_1hasSubDataset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlDataSetProxy *pObjectX = (JCKmlDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_hasSubDataset_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"hasSubDataset_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_hasSubDataset_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::hasSubDataset();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_getDataSourceRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlDataSetProxy))
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::getDataSourceRef();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->getDataSourceRef();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_register_1getDataSourceRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlDataSetProxy *pObjectX = (JCKmlDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDataSourceRef_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDataSourceRef_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_getDataSourceRef_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::getDataSourceRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_canEdit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlDataSetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::canEdit();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->canEdit();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_register_1canEdit_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlDataSetProxy *pObjectX = (JCKmlDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_canEdit_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"canEdit_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_canEdit_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::canEdit();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_isEditing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlDataSetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::isEditing();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isEditing();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_register_1isEditing_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlDataSetProxy *pObjectX = (JCKmlDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isEditing_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isEditing_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_isEditing_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::isEditing();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_startEditing_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean withUndo_j)
				{
					ev_bool withUndo = (ev_bool) withUndo_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlDataSetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::startEditing(withUndo);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->startEditing(withUndo);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_register_1startEditing_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlDataSetProxy *pObjectX = (JCKmlDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_startEditing_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"startEditing_ev_bool_callback", "(Z)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_startEditing_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean withUndo_j)
				{
					ev_bool withUndo = (ev_bool) withUndo_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::startEditing(withUndo);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_stopEditing_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isSave_j)
				{
					ev_bool isSave = (ev_bool) isSave_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlDataSetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::stopEditing(isSave);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->stopEditing(isSave);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_register_1stopEditing_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlDataSetProxy *pObjectX = (JCKmlDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_stopEditing_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"stopEditing_ev_bool_callback", "(Z)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_stopEditing_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isSave_j)
				{
					ev_bool isSave = (ev_bool) isSave_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::stopEditing(isSave);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_isBeginEditingOperation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlDataSetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::isBeginEditingOperation();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isBeginEditingOperation();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_register_1isBeginEditingOperation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlDataSetProxy *pObjectX = (JCKmlDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isBeginEditingOperation_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isBeginEditingOperation_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_isBeginEditingOperation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::isBeginEditingOperation();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_beginEditingOperation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlDataSetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::beginEditingOperation();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->beginEditingOperation();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_register_1beginEditingOperation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlDataSetProxy *pObjectX = (JCKmlDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_beginEditingOperation_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"beginEditingOperation_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_beginEditingOperation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::beginEditingOperation();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_endEditingOperation_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isConfirm_j)
				{
					ev_bool isConfirm = (ev_bool) isConfirm_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlDataSetProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::endEditingOperation(isConfirm);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->endEditingOperation(isConfirm);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_register_1endEditingOperation_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlDataSetProxy *pObjectX = (JCKmlDataSetProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_endEditingOperation_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"endEditingOperation_ev_bool_callback", "(Z)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_endEditingOperation_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isConfirm_j)
				{
					ev_bool isConfirm = (ev_bool) isConfirm_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::endEditingOperation(isConfirm);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_setDataSourceRef_1CKmlDataSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_dataSource_j)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSource *ref_dataSource = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) ref_dataSource_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					pObjectX->setDataSourceRef(ref_dataSource);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_addFolder_1CKmlDocument_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_kmlDocument_j, jlong ref_parent_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *ref_kmlDocument = (EarthView::World::Spatial::Kml::CKmlDocument*) ref_kmlDocument_j;
					EarthView::World::Spatial::Kml::CKmlDocument *ref_parent = (EarthView::World::Spatial::Kml::CKmlDocument*) ref_parent_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					pObjectX->addFolder(ref_kmlDocument, ref_parent);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_addKmlFile_1EVString_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filePath_j, jlong parent_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* filePath_ch = (const ev_char*)__env->GetStringUTFChars(filePath_j,JNI_FALSE);
					const EVString filePath = filePath_ch;
					__env->ReleaseStringUTFChars(filePath_j, (const char *)filePath_ch);
					#else
					const ev_wchar* filePath_ch = (const ev_wchar*)__env->GetStringChars(filePath_j,JNI_FALSE);
					const EVString filePath = filePath_ch;
					__env->ReleaseStringChars(filePath_j, (const jchar *)filePath_ch);
					#endif
					EarthView::World::Spatial::Kml::CKmlDocument *parent = (EarthView::World::Spatial::Kml::CKmlDocument*) parent_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* __values1 = pObjectX->addKmlFile(filePath, parent);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_addNetworkLink_1CKmlNetworkLink_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_kmlNet_j, jlong parent_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *ref_kmlNet = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) ref_kmlNet_j;
					EarthView::World::Spatial::Kml::CKmlDocument *parent = (EarthView::World::Spatial::Kml::CKmlDocument*) parent_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* __values1 = pObjectX->addNetworkLink(ref_kmlNet, parent);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_addKmlObject_1CGeoObjectExtension_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_geoObj_j, jlong ref_parent_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *ref_geoObj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) ref_geoObj_j;
					EarthView::World::Spatial::Kml::CKmlDocument *ref_parent = (EarthView::World::Spatial::Kml::CKmlDocument*) ref_parent_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					pObjectX->addKmlObject(ref_geoObj, ref_parent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_updateKmlObject_1CGeoObjectExtension_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_geoObj_j, jlong parent_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *ref_geoObj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) ref_geoObj_j;
					EarthView::World::Spatial::Kml::CKmlDocument *parent = (EarthView::World::Spatial::Kml::CKmlDocument*) parent_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					pObjectX->updateKmlObject(ref_geoObj, parent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_addTour_1CTour_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_tour_j, jlong ref_parent_j)
				{
					EarthView::World::Spatial::Kml::CTour *ref_tour = (EarthView::World::Spatial::Kml::CTour*) ref_tour_j;
					EarthView::World::Spatial::Kml::CKmlDocument *ref_parent = (EarthView::World::Spatial::Kml::CKmlDocument*) ref_parent_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					pObjectX->addTour(ref_tour, ref_parent);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_removeKmlObject_1CGeoObjectExtension_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_geoObj_j, jlong ref_parent_j)
				{
					EarthView::World::Spatial::Kml::CGeoObjectExtension *ref_geoObj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) ref_geoObj_j;
					EarthView::World::Spatial::Kml::CKmlDocument *ref_parent = (EarthView::World::Spatial::Kml::CKmlDocument*) ref_parent_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeKmlObject(ref_geoObj, ref_parent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_removeFolder_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_kmlDocument_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *ref_kmlDocument = (EarthView::World::Spatial::Kml::CKmlDocument*) ref_kmlDocument_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeFolder(ref_kmlDocument);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_removeKmlNetworkLink_1CKmlNetworkLink_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong netLink_j, jlong parent_j)
				{
					EarthView::World::Spatial::Kml::CKmlNetworkLink *netLink = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) netLink_j;
					EarthView::World::Spatial::Kml::CKmlDocument *parent = (EarthView::World::Spatial::Kml::CKmlDocument*) parent_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeKmlNetworkLink(netLink, parent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_removeTour_1CTour_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_tour_j, jlong ref_parent_j)
				{
					EarthView::World::Spatial::Kml::CTour *ref_tour = (EarthView::World::Spatial::Kml::CTour*) ref_tour_j;
					EarthView::World::Spatial::Kml::CKmlDocument *ref_parent = (EarthView::World::Spatial::Kml::CKmlDocument*) ref_parent_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeTour(ref_tour, ref_parent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_save_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring savePath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* savePath_ch = (const ev_char*)__env->GetStringUTFChars(savePath_j,JNI_FALSE);
					const EVString savePath = savePath_ch;
					__env->ReleaseStringUTFChars(savePath_j, (const char *)savePath_ch);
					#else
					const ev_wchar* savePath_ch = (const ev_wchar*)__env->GetStringChars(savePath_j,JNI_FALSE);
					const EVString savePath = savePath_ch;
					__env->ReleaseStringChars(savePath_j, (const jchar *)savePath_ch);
					#endif
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->save(savePath);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_saveKmlObject_1EVString_1CGeoObjectExtension(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring savePath_j, jlong geoObj_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* savePath_ch = (const ev_char*)__env->GetStringUTFChars(savePath_j,JNI_FALSE);
					EVString savePath = savePath_ch;
					__env->ReleaseStringUTFChars(savePath_j, (const char *)savePath_ch);
					#else
					const ev_wchar* savePath_ch = (const ev_wchar*)__env->GetStringChars(savePath_j,JNI_FALSE);
					EVString savePath = savePath_ch;
					__env->ReleaseStringChars(savePath_j, (const jchar *)savePath_ch);
					#endif
					EarthView::World::Spatial::Kml::CGeoObjectExtension *geoObj = (EarthView::World::Spatial::Kml::CGeoObjectExtension*) geoObj_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->saveKmlObject(savePath, geoObj);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_saveKmlNetworkLink_1EVString_1CKmlNetworkLink(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring savePath_j, jlong netLink_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* savePath_ch = (const ev_char*)__env->GetStringUTFChars(savePath_j,JNI_FALSE);
					EVString savePath = savePath_ch;
					__env->ReleaseStringUTFChars(savePath_j, (const char *)savePath_ch);
					#else
					const ev_wchar* savePath_ch = (const ev_wchar*)__env->GetStringChars(savePath_j,JNI_FALSE);
					EVString savePath = savePath_ch;
					__env->ReleaseStringChars(savePath_j, (const jchar *)savePath_ch);
					#endif
					EarthView::World::Spatial::Kml::CKmlNetworkLink *netLink = (EarthView::World::Spatial::Kml::CKmlNetworkLink*) netLink_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->saveKmlNetworkLink(savePath, netLink);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_saveFolder_1EVString_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring savePath_j, jlong ref_folder_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* savePath_ch = (const ev_char*)__env->GetStringUTFChars(savePath_j,JNI_FALSE);
					EVString savePath = savePath_ch;
					__env->ReleaseStringUTFChars(savePath_j, (const char *)savePath_ch);
					#else
					const ev_wchar* savePath_ch = (const ev_wchar*)__env->GetStringChars(savePath_j,JNI_FALSE);
					EVString savePath = savePath_ch;
					__env->ReleaseStringChars(savePath_j, (const jchar *)savePath_ch);
					#endif
					EarthView::World::Spatial::Kml::CKmlDocument *ref_folder = (EarthView::World::Spatial::Kml::CKmlDocument*) ref_folder_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->saveFolder(savePath, ref_folder);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_saveTour_1EVString_1CTour(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring savePath_j, jlong tour_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* savePath_ch = (const ev_char*)__env->GetStringUTFChars(savePath_j,JNI_FALSE);
					const EVString savePath = savePath_ch;
					__env->ReleaseStringUTFChars(savePath_j, (const char *)savePath_ch);
					#else
					const ev_wchar* savePath_ch = (const ev_wchar*)__env->GetStringChars(savePath_j,JNI_FALSE);
					const EVString savePath = savePath_ch;
					__env->ReleaseStringChars(savePath_j, (const jchar *)savePath_ch);
					#endif
					EarthView::World::Spatial::Kml::CTour *tour = (EarthView::World::Spatial::Kml::CTour*) tour_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->saveTour(savePath, tour);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_getEnvelopeRef_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong hasData_j)
				{
					ev_bool &hasData = *(ev_bool*) hasData_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CEnvelope __values1 = pObjectX->getEnvelopeRef(hasData);
					EarthView::World::Spatial::Geometry::CEnvelope *returnvalues = new EarthView::World::Spatial::Geometry::CEnvelope(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_get_1mFilePath_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mFilePath;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_set_1mFilePath_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mFilePath = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_get_1misShare_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->misShare);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_set_1misShare_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)pObjXXXX;
					pObjectX->misShare = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_get_1mKmlDocument_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->mKmlDocument);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_set_1mKmlDocument_1CKmlDocument(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)pObjXXXX;
					pObjectX->mKmlDocument = (EarthView::World::Spatial::Kml::CKmlDocument*) __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_kmlmanager_KmlDataSet_removeFolder_1CKmlDocument_1CKmlDocument(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_kmlDocument_j, jlong ref_parent_j)
				{
					EarthView::World::Spatial::Kml::CKmlDocument *ref_kmlDocument = (EarthView::World::Spatial::Kml::CKmlDocument*) ref_kmlDocument_j;
					EarthView::World::Spatial::Kml::CKmlDocument *ref_parent = (EarthView::World::Spatial::Kml::CKmlDocument*) ref_parent_j;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet *pObjectX = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeFolder(ref_kmlDocument, ref_parent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
