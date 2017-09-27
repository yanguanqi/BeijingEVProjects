/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/archive.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_FileInfo_get_1archive_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::FileInfo *pObjectX = (EarthView::World::Core::FileInfo*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->archive);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileInfo_set_1archive_1CArchive(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Core::FileInfo *pObjectX = (EarthView::World::Core::FileInfo*)pObjXXXX;
				pObjectX->archive = (EarthView::World::Core::CArchive*) __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_FileInfo_get_1filename_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::FileInfo *pObjectX = (EarthView::World::Core::FileInfo*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->filename;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileInfo_set_1filename_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Core::FileInfo *pObjectX = (EarthView::World::Core::FileInfo*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->filename = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_FileInfo_get_1path_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::FileInfo *pObjectX = (EarthView::World::Core::FileInfo*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->path;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileInfo_set_1path_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Core::FileInfo *pObjectX = (EarthView::World::Core::FileInfo*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->path = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_FileInfo_get_1basename_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::FileInfo *pObjectX = (EarthView::World::Core::FileInfo*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->basename;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileInfo_set_1basename_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Core::FileInfo *pObjectX = (EarthView::World::Core::FileInfo*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->basename = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_FileInfo_get_1compressedSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::FileInfo *pObjectX = (EarthView::World::Core::FileInfo*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->compressedSize);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileInfo_set_1compressedSize_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Core::FileInfo *pObjectX = (EarthView::World::Core::FileInfo*)pObjXXXX;
				pObjectX->compressedSize = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_FileInfo_get_1uncompressedSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::FileInfo *pObjectX = (EarthView::World::Core::FileInfo*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->uncompressedSize);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileInfo_set_1uncompressedSize_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Core::FileInfo *pObjectX = (EarthView::World::Core::FileInfo*)pObjXXXX;
				pObjectX->uncompressedSize = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileInfoList_push_1back_1FileInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				const EarthView::World::Core::FileInfo &t = *(EarthView::World::Core::FileInfo*) t_j;
				EarthView::World::Core::FileInfoList *pObjectX = (EarthView::World::Core::FileInfoList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileInfoList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Core::FileInfoList *pObjectX = (EarthView::World::Core::FileInfoList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_FileInfoList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::FileInfoList *pObjectX = (EarthView::World::Core::FileInfoList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_FileInfoList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Core::FileInfoList& pObjectX = *(EarthView::World::Core::FileInfoList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Core::FileInfo& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_FileInfoList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Core::FileInfoList *pObjectX = (EarthView::World::Core::FileInfoList*) pObjXXXX;
				EarthView::World::Core::FileInfo& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_FileInfoList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::FileInfoList *pObjectX = (EarthView::World::Core::FileInfoList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_FileInfoList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::FileInfoList *pObjectX = (EarthView::World::Core::FileInfoList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_FileInfoListPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::FileInfoListPtr *pObjectX = (EarthView::World::Core::FileInfoListPtr*) pObjXXXX;
				EarthView::World::Core::FileInfoList* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCArchiveProxy : public EarthView::World::Core::CArchive
			{
			 private:
				EarthView::World::Core::ev_string m_isCaseSensitive_void_callback;
				EarthView::World::Core::ev_string m_load_void_callback;
				EarthView::World::Core::ev_string m_unload_void_callback;
				EarthView::World::Core::ev_string m_isReadOnly_void_callback;
				EarthView::World::Core::ev_string m_open_EVString_callback;
				EarthView::World::Core::ev_string m_open_EVString_ev_bool_callback;
				EarthView::World::Core::ev_string m_create_EVString_callback;
				EarthView::World::Core::ev_string m_remove_EVString_callback;
				EarthView::World::Core::ev_string m_list_ev_bool_ev_bool_callback;
				EarthView::World::Core::ev_string m_list_ev_bool_callback;
				EarthView::World::Core::ev_string m_list_void_callback;
				EarthView::World::Core::ev_string m_listFileInfo_ev_bool_ev_bool_callback;
				EarthView::World::Core::ev_string m_listFileInfo_ev_bool_callback;
				EarthView::World::Core::ev_string m_listFileInfo_void_callback;
				EarthView::World::Core::ev_string m_find_EVString_ev_bool_ev_bool_callback;
				EarthView::World::Core::ev_string m_find_EVString_ev_bool_callback;
				EarthView::World::Core::ev_string m_find_EVString_callback;
				EarthView::World::Core::ev_string m_exists_EVString_callback;
				EarthView::World::Core::ev_string m_findFileInfo_EVString_ev_bool_ev_bool_callback;
				EarthView::World::Core::ev_string m_findFileInfo_EVString_ev_bool_callback;
				EarthView::World::Core::ev_string m_findFileInfo_EVString_callback;
				EarthView::World::Core::ev_string m_getModifiedTime_EVString_callback;
			public:
				JCArchiveProxy(EarthView::World::Core::CNameValuePairList *pList) : CArchive(pList)
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
				void register_isCaseSensitive_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isCaseSensitive_void_callback = __method;
				}
				void register_load_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_void_callback = __method;
				}
				void register_unload_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unload_void_callback = __method;
				}
				void register_isReadOnly_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isReadOnly_void_callback = __method;
				}
				void register_open_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_open_EVString_callback = __method;
				}
				void register_open_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_open_EVString_ev_bool_callback = __method;
				}
				void register_create_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_create_EVString_callback = __method;
				}
				void register_remove_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_remove_EVString_callback = __method;
				}
				void register_list_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_list_ev_bool_ev_bool_callback = __method;
				}
				void register_list_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_list_ev_bool_callback = __method;
				}
				void register_list_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_list_void_callback = __method;
				}
				void register_listFileInfo_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_listFileInfo_ev_bool_ev_bool_callback = __method;
				}
				void register_listFileInfo_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_listFileInfo_ev_bool_callback = __method;
				}
				void register_listFileInfo_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_listFileInfo_void_callback = __method;
				}
				void register_find_EVString_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_find_EVString_ev_bool_ev_bool_callback = __method;
				}
				void register_find_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_find_EVString_ev_bool_callback = __method;
				}
				void register_find_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_find_EVString_callback = __method;
				}
				void register_exists_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_exists_EVString_callback = __method;
				}
				void register_findFileInfo_EVString_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_findFileInfo_EVString_ev_bool_ev_bool_callback = __method;
				}
				void register_findFileInfo_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_findFileInfo_EVString_ev_bool_callback = __method;
				}
				void register_findFileInfo_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_findFileInfo_EVString_callback = __method;
				}
				void register_getModifiedTime_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getModifiedTime_EVString_callback = __method;
				}
				virtual ev_bool isCaseSensitive() const
				{
					if (this->_gRef != NULL && this->m_isCaseSensitive_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isCaseSensitive_void_callback");
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
						return this->CArchive::isCaseSensitive();
					}
				}
				virtual void load()
				{
					if (this->_gRef != NULL && this->m_load_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("load_void_callback");
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
						return this->CArchive::load();
					}
				}
				virtual void unload()
				{
					if (this->_gRef != NULL && this->m_unload_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("unload_void_callback");
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
						return this->CArchive::unload();
					}
				}
				virtual ev_bool isReadOnly() const
				{
					if (this->_gRef != NULL && this->m_isReadOnly_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isReadOnly_void_callback");
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
						return this->CArchive::isReadOnly();
					}
				}
				virtual EarthView::World::Core::DataStreamPtr open(const EVString& filename) const
				{
					if (this->_gRef != NULL && this->m_open_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring filename_wch = filename;
						jstring filename_j = __env->NewString((const jchar*)filename_wch.getString(), filename_wch.size());
						jmethodID __method = __gr->getMethod("open_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , filename_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::DataStreamPtr __values1 = *(EarthView::World::Core::DataStreamPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CArchive::open(filename);
					}
				}
				virtual EarthView::World::Core::DataStreamPtr open(const EVString& filename, ev_bool readOnly) const
				{
					if (this->_gRef != NULL && this->m_open_EVString_ev_bool_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring filename_wch = filename;
						jstring filename_j = __env->NewString((const jchar*)filename_wch.getString(), filename_wch.size());
						jboolean readOnly_j = (jboolean) readOnly;
						jmethodID __method = __gr->getMethod("open_EVString_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , filename_j, readOnly_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::DataStreamPtr __values1 = *(EarthView::World::Core::DataStreamPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CArchive::open(filename, readOnly);
					}
				}
				virtual EarthView::World::Core::DataStreamPtr create(const EVString& filename) const
				{
					if (this->_gRef != NULL && this->m_create_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring filename_wch = filename;
						jstring filename_j = __env->NewString((const jchar*)filename_wch.getString(), filename_wch.size());
						jmethodID __method = __gr->getMethod("create_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , filename_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::DataStreamPtr __values1 = *(EarthView::World::Core::DataStreamPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CArchive::create(filename);
					}
				}
				virtual void remove(const EVString& filename) const
				{
					if (this->_gRef != NULL && this->m_remove_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring filename_wch = filename;
						jstring filename_j = __env->NewString((const jchar*)filename_wch.getString(), filename_wch.size());
						jmethodID __method = __gr->getMethod("remove_EVString_callback");
						__env->CallVoidMethod(__obj, __method , filename_j);
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
						return this->CArchive::remove(filename);
					}
				}
				virtual EarthView::World::Core::StringVectorPtr list(ev_bool recursive, ev_bool dirs)
				{
					if (this->_gRef != NULL && this->m_list_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean recursive_j = (jboolean) recursive;
						jboolean dirs_j = (jboolean) dirs;
						jmethodID __method = __gr->getMethod("list_ev_bool_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , recursive_j, dirs_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::StringVectorPtr __values1 = *(EarthView::World::Core::StringVectorPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CArchive::list(recursive, dirs);
					}
				}
				virtual EarthView::World::Core::StringVectorPtr list(ev_bool recursive)
				{
					if (this->_gRef != NULL && this->m_list_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean recursive_j = (jboolean) recursive;
						jmethodID __method = __gr->getMethod("list_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , recursive_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::StringVectorPtr __values1 = *(EarthView::World::Core::StringVectorPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CArchive::list(recursive);
					}
				}
				virtual EarthView::World::Core::StringVectorPtr list()
				{
					if (this->_gRef != NULL && this->m_list_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("list_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::StringVectorPtr __values1 = *(EarthView::World::Core::StringVectorPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CArchive::list();
					}
				}
				virtual EarthView::World::Core::FileInfoListPtr listFileInfo(ev_bool recursive, ev_bool dirs)
				{
					if (this->_gRef != NULL && this->m_listFileInfo_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean recursive_j = (jboolean) recursive;
						jboolean dirs_j = (jboolean) dirs;
						jmethodID __method = __gr->getMethod("listFileInfo_ev_bool_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , recursive_j, dirs_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::FileInfoListPtr __values1 = *(EarthView::World::Core::FileInfoListPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CArchive::listFileInfo(recursive, dirs);
					}
				}
				virtual EarthView::World::Core::FileInfoListPtr listFileInfo(ev_bool recursive)
				{
					if (this->_gRef != NULL && this->m_listFileInfo_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean recursive_j = (jboolean) recursive;
						jmethodID __method = __gr->getMethod("listFileInfo_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , recursive_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::FileInfoListPtr __values1 = *(EarthView::World::Core::FileInfoListPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CArchive::listFileInfo(recursive);
					}
				}
				virtual EarthView::World::Core::FileInfoListPtr listFileInfo()
				{
					if (this->_gRef != NULL && this->m_listFileInfo_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("listFileInfo_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::FileInfoListPtr __values1 = *(EarthView::World::Core::FileInfoListPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CArchive::listFileInfo();
					}
				}
				virtual EarthView::World::Core::StringVectorPtr find(const EVString& pattern, ev_bool recursive, ev_bool dirs)
				{
					if (this->_gRef != NULL && this->m_find_EVString_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring pattern_wch = pattern;
						jstring pattern_j = __env->NewString((const jchar*)pattern_wch.getString(), pattern_wch.size());
						jboolean recursive_j = (jboolean) recursive;
						jboolean dirs_j = (jboolean) dirs;
						jmethodID __method = __gr->getMethod("find_EVString_ev_bool_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , pattern_j, recursive_j, dirs_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::StringVectorPtr __values1 = *(EarthView::World::Core::StringVectorPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CArchive::find(pattern, recursive, dirs);
					}
				}
				virtual EarthView::World::Core::StringVectorPtr find(const EVString& pattern, ev_bool recursive)
				{
					if (this->_gRef != NULL && this->m_find_EVString_ev_bool_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring pattern_wch = pattern;
						jstring pattern_j = __env->NewString((const jchar*)pattern_wch.getString(), pattern_wch.size());
						jboolean recursive_j = (jboolean) recursive;
						jmethodID __method = __gr->getMethod("find_EVString_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , pattern_j, recursive_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::StringVectorPtr __values1 = *(EarthView::World::Core::StringVectorPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CArchive::find(pattern, recursive);
					}
				}
				virtual EarthView::World::Core::StringVectorPtr find(const EVString& pattern)
				{
					if (this->_gRef != NULL && this->m_find_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring pattern_wch = pattern;
						jstring pattern_j = __env->NewString((const jchar*)pattern_wch.getString(), pattern_wch.size());
						jmethodID __method = __gr->getMethod("find_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , pattern_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::StringVectorPtr __values1 = *(EarthView::World::Core::StringVectorPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CArchive::find(pattern);
					}
				}
				virtual ev_bool exists(const EVString& filename)
				{
					if (this->_gRef != NULL && this->m_exists_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring filename_wch = filename;
						jstring filename_j = __env->NewString((const jchar*)filename_wch.getString(), filename_wch.size());
						jmethodID __method = __gr->getMethod("exists_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , filename_j);
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
						return this->CArchive::exists(filename);
					}
				}
				virtual EarthView::World::Core::FileInfoListPtr findFileInfo(const EVString& pattern, ev_bool recursive, ev_bool dirs) const
				{
					if (this->_gRef != NULL && this->m_findFileInfo_EVString_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring pattern_wch = pattern;
						jstring pattern_j = __env->NewString((const jchar*)pattern_wch.getString(), pattern_wch.size());
						jboolean recursive_j = (jboolean) recursive;
						jboolean dirs_j = (jboolean) dirs;
						jmethodID __method = __gr->getMethod("findFileInfo_EVString_ev_bool_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , pattern_j, recursive_j, dirs_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::FileInfoListPtr __values1 = *(EarthView::World::Core::FileInfoListPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CArchive::findFileInfo(pattern, recursive, dirs);
					}
				}
				virtual EarthView::World::Core::FileInfoListPtr findFileInfo(const EVString& pattern, ev_bool recursive) const
				{
					if (this->_gRef != NULL && this->m_findFileInfo_EVString_ev_bool_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring pattern_wch = pattern;
						jstring pattern_j = __env->NewString((const jchar*)pattern_wch.getString(), pattern_wch.size());
						jboolean recursive_j = (jboolean) recursive;
						jmethodID __method = __gr->getMethod("findFileInfo_EVString_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , pattern_j, recursive_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::FileInfoListPtr __values1 = *(EarthView::World::Core::FileInfoListPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CArchive::findFileInfo(pattern, recursive);
					}
				}
				virtual EarthView::World::Core::FileInfoListPtr findFileInfo(const EVString& pattern) const
				{
					if (this->_gRef != NULL && this->m_findFileInfo_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring pattern_wch = pattern;
						jstring pattern_j = __env->NewString((const jchar*)pattern_wch.getString(), pattern_wch.size());
						jmethodID __method = __gr->getMethod("findFileInfo_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , pattern_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Core::FileInfoListPtr __values1 = *(EarthView::World::Core::FileInfoListPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CArchive::findFileInfo(pattern);
					}
				}
				virtual ev_int64 getModifiedTime(const EVString& filename)
				{
					if (this->_gRef != NULL && this->m_getModifiedTime_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring filename_wch = filename;
						jstring filename_j = __env->NewString((const jchar*)filename_wch.getString(), filename_wch.size());
						jmethodID __method = __gr->getMethod("getModifiedTime_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , filename_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_int64 __values1 = (ev_int64) __values1_j;
						return __values1;
					}
					else
					{
						return this->CArchive::getModifiedTime(filename);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCArchiveProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				const EVString& __values1 = pObjectX->getName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Archive_isCaseSensitive_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCArchiveProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CArchive::isCaseSensitive();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isCaseSensitive();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_register_1isCaseSensitive_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCArchiveProxy *pObjectX = (JCArchiveProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isCaseSensitive_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isCaseSensitive_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Archive_isCaseSensitive_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CArchive::isCaseSensitive();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_load_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCArchiveProxy))
				{
					pObjectX->EarthView::World::Core::CArchive::load();
				}
				else
				{
					pObjectX->load();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_register_1load_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCArchiveProxy *pObjectX = (JCArchiveProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_load_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				pObjectX->EarthView::World::Core::CArchive::load();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_unload_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCArchiveProxy))
				{
					pObjectX->EarthView::World::Core::CArchive::unload();
				}
				else
				{
					pObjectX->unload();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_register_1unload_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCArchiveProxy *pObjectX = (JCArchiveProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unload_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unload_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_unload_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				pObjectX->EarthView::World::Core::CArchive::unload();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Archive_isReadOnly_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCArchiveProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CArchive::isReadOnly();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isReadOnly();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_register_1isReadOnly_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCArchiveProxy *pObjectX = (JCArchiveProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isReadOnly_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isReadOnly_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Archive_isReadOnly_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CArchive::isReadOnly();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_open_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				const 				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCArchiveProxy))
				{
					EarthView::World::Core::DataStreamPtr __values1 = pObjectX->EarthView::World::Core::CArchive::open(filename);
					EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::DataStreamPtr __values1 = pObjectX->open(filename);
					EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_register_1open_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCArchiveProxy *pObjectX = (JCArchiveProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_open_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"open_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_open_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				const 				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->EarthView::World::Core::CArchive::open(filename);
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_open_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jboolean readOnly_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				ev_bool readOnly = (ev_bool) readOnly_j;
				const 				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCArchiveProxy))
				{
					EarthView::World::Core::DataStreamPtr __values1 = pObjectX->EarthView::World::Core::CArchive::open(filename, readOnly);
					EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::DataStreamPtr __values1 = pObjectX->open(filename, readOnly);
					EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_register_1open_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCArchiveProxy *pObjectX = (JCArchiveProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_open_EVString_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"open_EVString_ev_bool_callback", "(Ljava/lang/String;Z)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_open_1EVString_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jboolean readOnly_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				ev_bool readOnly = (ev_bool) readOnly_j;
				const 				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->EarthView::World::Core::CArchive::open(filename, readOnly);
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_create_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				const 				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCArchiveProxy))
				{
					EarthView::World::Core::DataStreamPtr __values1 = pObjectX->EarthView::World::Core::CArchive::create(filename);
					EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::DataStreamPtr __values1 = pObjectX->create(filename);
					EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_register_1create_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCArchiveProxy *pObjectX = (JCArchiveProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_create_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"create_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_create_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				const 				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->EarthView::World::Core::CArchive::create(filename);
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_remove_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				const 				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCArchiveProxy))
				{
					pObjectX->EarthView::World::Core::CArchive::remove(filename);
				}
				else
				{
					pObjectX->remove(filename);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_register_1remove_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCArchiveProxy *pObjectX = (JCArchiveProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_remove_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"remove_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_remove_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				const 				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				pObjectX->EarthView::World::Core::CArchive::remove(filename);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_list_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean recursive_j, jboolean dirs_j)
			{
				ev_bool recursive = (ev_bool) recursive_j;
				ev_bool dirs = (ev_bool) dirs_j;
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCArchiveProxy))
				{
					EarthView::World::Core::StringVectorPtr __values1 = pObjectX->EarthView::World::Core::CArchive::list(recursive, dirs);
					EarthView::World::Core::StringVectorPtr *returnvalues = new EarthView::World::Core::StringVectorPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::StringVectorPtr __values1 = pObjectX->list(recursive, dirs);
					EarthView::World::Core::StringVectorPtr *returnvalues = new EarthView::World::Core::StringVectorPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_register_1list_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCArchiveProxy *pObjectX = (JCArchiveProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_list_ev_bool_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"list_ev_bool_ev_bool_callback", "(ZZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_list_1ev_1bool_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean recursive_j, jboolean dirs_j)
			{
				ev_bool recursive = (ev_bool) recursive_j;
				ev_bool dirs = (ev_bool) dirs_j;
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				EarthView::World::Core::StringVectorPtr __values1 = pObjectX->EarthView::World::Core::CArchive::list(recursive, dirs);
				EarthView::World::Core::StringVectorPtr *returnvalues = new EarthView::World::Core::StringVectorPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_list_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean recursive_j)
			{
				ev_bool recursive = (ev_bool) recursive_j;
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCArchiveProxy))
				{
					EarthView::World::Core::StringVectorPtr __values1 = pObjectX->EarthView::World::Core::CArchive::list(recursive);
					EarthView::World::Core::StringVectorPtr *returnvalues = new EarthView::World::Core::StringVectorPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::StringVectorPtr __values1 = pObjectX->list(recursive);
					EarthView::World::Core::StringVectorPtr *returnvalues = new EarthView::World::Core::StringVectorPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_register_1list_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCArchiveProxy *pObjectX = (JCArchiveProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_list_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"list_ev_bool_callback", "(Z)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_list_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean recursive_j)
			{
				ev_bool recursive = (ev_bool) recursive_j;
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				EarthView::World::Core::StringVectorPtr __values1 = pObjectX->EarthView::World::Core::CArchive::list(recursive);
				EarthView::World::Core::StringVectorPtr *returnvalues = new EarthView::World::Core::StringVectorPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_list_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCArchiveProxy))
				{
					EarthView::World::Core::StringVectorPtr __values1 = pObjectX->EarthView::World::Core::CArchive::list();
					EarthView::World::Core::StringVectorPtr *returnvalues = new EarthView::World::Core::StringVectorPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::StringVectorPtr __values1 = pObjectX->list();
					EarthView::World::Core::StringVectorPtr *returnvalues = new EarthView::World::Core::StringVectorPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_register_1list_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCArchiveProxy *pObjectX = (JCArchiveProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_list_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"list_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_list_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				EarthView::World::Core::StringVectorPtr __values1 = pObjectX->EarthView::World::Core::CArchive::list();
				EarthView::World::Core::StringVectorPtr *returnvalues = new EarthView::World::Core::StringVectorPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_listFileInfo_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean recursive_j, jboolean dirs_j)
			{
				ev_bool recursive = (ev_bool) recursive_j;
				ev_bool dirs = (ev_bool) dirs_j;
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCArchiveProxy))
				{
					EarthView::World::Core::FileInfoListPtr __values1 = pObjectX->EarthView::World::Core::CArchive::listFileInfo(recursive, dirs);
					EarthView::World::Core::FileInfoListPtr *returnvalues = new EarthView::World::Core::FileInfoListPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::FileInfoListPtr __values1 = pObjectX->listFileInfo(recursive, dirs);
					EarthView::World::Core::FileInfoListPtr *returnvalues = new EarthView::World::Core::FileInfoListPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_register_1listFileInfo_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCArchiveProxy *pObjectX = (JCArchiveProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_listFileInfo_ev_bool_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"listFileInfo_ev_bool_ev_bool_callback", "(ZZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_listFileInfo_1ev_1bool_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean recursive_j, jboolean dirs_j)
			{
				ev_bool recursive = (ev_bool) recursive_j;
				ev_bool dirs = (ev_bool) dirs_j;
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				EarthView::World::Core::FileInfoListPtr __values1 = pObjectX->EarthView::World::Core::CArchive::listFileInfo(recursive, dirs);
				EarthView::World::Core::FileInfoListPtr *returnvalues = new EarthView::World::Core::FileInfoListPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_listFileInfo_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean recursive_j)
			{
				ev_bool recursive = (ev_bool) recursive_j;
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCArchiveProxy))
				{
					EarthView::World::Core::FileInfoListPtr __values1 = pObjectX->EarthView::World::Core::CArchive::listFileInfo(recursive);
					EarthView::World::Core::FileInfoListPtr *returnvalues = new EarthView::World::Core::FileInfoListPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::FileInfoListPtr __values1 = pObjectX->listFileInfo(recursive);
					EarthView::World::Core::FileInfoListPtr *returnvalues = new EarthView::World::Core::FileInfoListPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_register_1listFileInfo_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCArchiveProxy *pObjectX = (JCArchiveProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_listFileInfo_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"listFileInfo_ev_bool_callback", "(Z)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_listFileInfo_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean recursive_j)
			{
				ev_bool recursive = (ev_bool) recursive_j;
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				EarthView::World::Core::FileInfoListPtr __values1 = pObjectX->EarthView::World::Core::CArchive::listFileInfo(recursive);
				EarthView::World::Core::FileInfoListPtr *returnvalues = new EarthView::World::Core::FileInfoListPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_listFileInfo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCArchiveProxy))
				{
					EarthView::World::Core::FileInfoListPtr __values1 = pObjectX->EarthView::World::Core::CArchive::listFileInfo();
					EarthView::World::Core::FileInfoListPtr *returnvalues = new EarthView::World::Core::FileInfoListPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::FileInfoListPtr __values1 = pObjectX->listFileInfo();
					EarthView::World::Core::FileInfoListPtr *returnvalues = new EarthView::World::Core::FileInfoListPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_register_1listFileInfo_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCArchiveProxy *pObjectX = (JCArchiveProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_listFileInfo_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"listFileInfo_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_listFileInfo_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				EarthView::World::Core::FileInfoListPtr __values1 = pObjectX->EarthView::World::Core::CArchive::listFileInfo();
				EarthView::World::Core::FileInfoListPtr *returnvalues = new EarthView::World::Core::FileInfoListPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_find_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pattern_j, jboolean recursive_j, jboolean dirs_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				ev_bool recursive = (ev_bool) recursive_j;
				ev_bool dirs = (ev_bool) dirs_j;
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCArchiveProxy))
				{
					EarthView::World::Core::StringVectorPtr __values1 = pObjectX->EarthView::World::Core::CArchive::find(pattern, recursive, dirs);
					EarthView::World::Core::StringVectorPtr *returnvalues = new EarthView::World::Core::StringVectorPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::StringVectorPtr __values1 = pObjectX->find(pattern, recursive, dirs);
					EarthView::World::Core::StringVectorPtr *returnvalues = new EarthView::World::Core::StringVectorPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_register_1find_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCArchiveProxy *pObjectX = (JCArchiveProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_find_EVString_ev_bool_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"find_EVString_ev_bool_ev_bool_callback", "(Ljava/lang/String;ZZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_find_1EVString_1ev_1bool_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pattern_j, jboolean recursive_j, jboolean dirs_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				ev_bool recursive = (ev_bool) recursive_j;
				ev_bool dirs = (ev_bool) dirs_j;
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				EarthView::World::Core::StringVectorPtr __values1 = pObjectX->EarthView::World::Core::CArchive::find(pattern, recursive, dirs);
				EarthView::World::Core::StringVectorPtr *returnvalues = new EarthView::World::Core::StringVectorPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_find_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pattern_j, jboolean recursive_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				ev_bool recursive = (ev_bool) recursive_j;
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCArchiveProxy))
				{
					EarthView::World::Core::StringVectorPtr __values1 = pObjectX->EarthView::World::Core::CArchive::find(pattern, recursive);
					EarthView::World::Core::StringVectorPtr *returnvalues = new EarthView::World::Core::StringVectorPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::StringVectorPtr __values1 = pObjectX->find(pattern, recursive);
					EarthView::World::Core::StringVectorPtr *returnvalues = new EarthView::World::Core::StringVectorPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_register_1find_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCArchiveProxy *pObjectX = (JCArchiveProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_find_EVString_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"find_EVString_ev_bool_callback", "(Ljava/lang/String;Z)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_find_1EVString_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pattern_j, jboolean recursive_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				ev_bool recursive = (ev_bool) recursive_j;
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				EarthView::World::Core::StringVectorPtr __values1 = pObjectX->EarthView::World::Core::CArchive::find(pattern, recursive);
				EarthView::World::Core::StringVectorPtr *returnvalues = new EarthView::World::Core::StringVectorPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_find_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pattern_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCArchiveProxy))
				{
					EarthView::World::Core::StringVectorPtr __values1 = pObjectX->EarthView::World::Core::CArchive::find(pattern);
					EarthView::World::Core::StringVectorPtr *returnvalues = new EarthView::World::Core::StringVectorPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::StringVectorPtr __values1 = pObjectX->find(pattern);
					EarthView::World::Core::StringVectorPtr *returnvalues = new EarthView::World::Core::StringVectorPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_register_1find_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCArchiveProxy *pObjectX = (JCArchiveProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_find_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"find_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_find_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pattern_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				EarthView::World::Core::StringVectorPtr __values1 = pObjectX->EarthView::World::Core::CArchive::find(pattern);
				EarthView::World::Core::StringVectorPtr *returnvalues = new EarthView::World::Core::StringVectorPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Archive_exists_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCArchiveProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Core::CArchive::exists(filename);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->exists(filename);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_register_1exists_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCArchiveProxy *pObjectX = (JCArchiveProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_exists_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"exists_EVString_callback", "(Ljava/lang/String;)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_Archive_exists_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Core::CArchive::exists(filename);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_findFileInfo_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pattern_j, jboolean recursive_j, jboolean dirs_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				ev_bool recursive = (ev_bool) recursive_j;
				ev_bool dirs = (ev_bool) dirs_j;
				const 				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCArchiveProxy))
				{
					EarthView::World::Core::FileInfoListPtr __values1 = pObjectX->EarthView::World::Core::CArchive::findFileInfo(pattern, recursive, dirs);
					EarthView::World::Core::FileInfoListPtr *returnvalues = new EarthView::World::Core::FileInfoListPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::FileInfoListPtr __values1 = pObjectX->findFileInfo(pattern, recursive, dirs);
					EarthView::World::Core::FileInfoListPtr *returnvalues = new EarthView::World::Core::FileInfoListPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_register_1findFileInfo_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCArchiveProxy *pObjectX = (JCArchiveProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_findFileInfo_EVString_ev_bool_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"findFileInfo_EVString_ev_bool_ev_bool_callback", "(Ljava/lang/String;ZZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_findFileInfo_1EVString_1ev_1bool_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pattern_j, jboolean recursive_j, jboolean dirs_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				ev_bool recursive = (ev_bool) recursive_j;
				ev_bool dirs = (ev_bool) dirs_j;
				const 				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				EarthView::World::Core::FileInfoListPtr __values1 = pObjectX->EarthView::World::Core::CArchive::findFileInfo(pattern, recursive, dirs);
				EarthView::World::Core::FileInfoListPtr *returnvalues = new EarthView::World::Core::FileInfoListPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_findFileInfo_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pattern_j, jboolean recursive_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				ev_bool recursive = (ev_bool) recursive_j;
				const 				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCArchiveProxy))
				{
					EarthView::World::Core::FileInfoListPtr __values1 = pObjectX->EarthView::World::Core::CArchive::findFileInfo(pattern, recursive);
					EarthView::World::Core::FileInfoListPtr *returnvalues = new EarthView::World::Core::FileInfoListPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::FileInfoListPtr __values1 = pObjectX->findFileInfo(pattern, recursive);
					EarthView::World::Core::FileInfoListPtr *returnvalues = new EarthView::World::Core::FileInfoListPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_register_1findFileInfo_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCArchiveProxy *pObjectX = (JCArchiveProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_findFileInfo_EVString_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"findFileInfo_EVString_ev_bool_callback", "(Ljava/lang/String;Z)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_findFileInfo_1EVString_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pattern_j, jboolean recursive_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				ev_bool recursive = (ev_bool) recursive_j;
				const 				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				EarthView::World::Core::FileInfoListPtr __values1 = pObjectX->EarthView::World::Core::CArchive::findFileInfo(pattern, recursive);
				EarthView::World::Core::FileInfoListPtr *returnvalues = new EarthView::World::Core::FileInfoListPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_findFileInfo_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pattern_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				const 				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCArchiveProxy))
				{
					EarthView::World::Core::FileInfoListPtr __values1 = pObjectX->EarthView::World::Core::CArchive::findFileInfo(pattern);
					EarthView::World::Core::FileInfoListPtr *returnvalues = new EarthView::World::Core::FileInfoListPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::FileInfoListPtr __values1 = pObjectX->findFileInfo(pattern);
					EarthView::World::Core::FileInfoListPtr *returnvalues = new EarthView::World::Core::FileInfoListPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_register_1findFileInfo_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCArchiveProxy *pObjectX = (JCArchiveProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_findFileInfo_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"findFileInfo_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_findFileInfo_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pattern_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				const 				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				EarthView::World::Core::FileInfoListPtr __values1 = pObjectX->EarthView::World::Core::CArchive::findFileInfo(pattern);
				EarthView::World::Core::FileInfoListPtr *returnvalues = new EarthView::World::Core::FileInfoListPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				const EVString& __values1 = pObjectX->getType();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_getModifiedTime_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCArchiveProxy))
				{
					ev_int64 __values1 = pObjectX->EarthView::World::Core::CArchive::getModifiedTime(filename);
					jlong __values1_j = (jlong)__values1;
					return __values1_j;
				}
				else
				{
					ev_int64 __values1 = pObjectX->getModifiedTime(filename);
					jlong __values1_j = (jlong)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_Archive_register_1getModifiedTime_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCArchiveProxy *pObjectX = (JCArchiveProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getModifiedTime_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getModifiedTime_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_Archive_getModifiedTime_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Core::CArchive *pObjectX = (EarthView::World::Core::CArchive*) pObjXXXX;
				ev_int64 __values1 = pObjectX->EarthView::World::Core::CArchive::getModifiedTime(filename);
				jlong __values1_j = (jlong)__values1;
				return __values1_j;
			}
		}
	}
}
