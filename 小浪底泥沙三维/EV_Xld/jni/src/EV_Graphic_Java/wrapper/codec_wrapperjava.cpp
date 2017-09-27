/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/codec.h"
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
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CodecList_push_1EVString_1CCodec(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong ref_val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CCodec *&ref_val = *(EarthView::World::Graphic::CCodec**) ref_val_j;
				EarthView::World::Graphic::CodecList *pObjectX = (EarthView::World::Graphic::CodecList*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, ref_val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CodecList_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CodecList *pObjectX = (EarthView::World::Graphic::CodecList*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CodecList_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::CodecList& pObjectX = *(EarthView::World::Graphic::CodecList*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CCodec*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CodecList_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CodecList *pObjectX = (EarthView::World::Graphic::CodecList*) pObjXXXX;
				EarthView::World::Graphic::CCodec*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CodecList_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CodecList *pObjectX = (EarthView::World::Graphic::CodecList*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_CodecList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CodecList *pObjectX = (EarthView::World::Graphic::CodecList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CodecList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CodecList *pObjectX = (EarthView::World::Graphic::CodecList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_CodecList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CodecList *pObjectX = (EarthView::World::Graphic::CodecList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			class JCCodecProxy : public EarthView::World::Graphic::CCodec
			{
			 private:
				EarthView::World::Core::ev_string m_code_MemoryDataStreamPtr_CodecDataPtr_callback;
				EarthView::World::Core::ev_string m_codeToFile_MemoryDataStreamPtr_EVString_CodecDataPtr_callback;
				EarthView::World::Core::ev_string m_decode_DataStreamPtr_callback;
				EarthView::World::Core::ev_string m_getType_void_callback;
				EarthView::World::Core::ev_string m_getDataType_void_callback;
				EarthView::World::Core::ev_string m_magicNumberMatch_ev_char_ev_size_t_callback;
				EarthView::World::Core::ev_string m_magicNumberToFileExt_ev_char_ev_size_t_callback;
			public:
				JCCodecProxy(EarthView::World::Core::CNameValuePairList *pList) : CCodec(pList)
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
				void register_code_MemoryDataStreamPtr_CodecDataPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_code_MemoryDataStreamPtr_CodecDataPtr_callback = __method;
				}
				void register_codeToFile_MemoryDataStreamPtr_EVString_CodecDataPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_codeToFile_MemoryDataStreamPtr_EVString_CodecDataPtr_callback = __method;
				}
				void register_decode_DataStreamPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_decode_DataStreamPtr_callback = __method;
				}
				void register_getType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getType_void_callback = __method;
				}
				void register_getDataType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDataType_void_callback = __method;
				}
				void register_magicNumberMatch_ev_char_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_magicNumberMatch_ev_char_ev_size_t_callback = __method;
				}
				void register_magicNumberToFileExt_ev_char_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_magicNumberToFileExt_ev_char_ev_size_t_callback = __method;
				}
				virtual EarthView::World::Core::DataStreamPtr code(EarthView::World::Core::MemoryDataStreamPtr& input, EarthView::World::Graphic::CCodec::CodecDataPtr& pData) const
				{
					if (this->_gRef != NULL && this->m_code_MemoryDataStreamPtr_CodecDataPtr_callback != "" && this->isCustomExtend())
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
						jlong input_j = (jlong) &input;
						jlong pData_j = (jlong) &pData;
						jmethodID __method = __gr->getMethod("code_MemoryDataStreamPtr_CodecDataPtr_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , input_j, pData_j);
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
						return this->CCodec::code(input, pData);
					}
				}
				virtual void codeToFile(EarthView::World::Core::MemoryDataStreamPtr& input, const EVString& outFileName, EarthView::World::Graphic::CCodec::CodecDataPtr& pData) const
				{
					if (this->_gRef != NULL && this->m_codeToFile_MemoryDataStreamPtr_EVString_CodecDataPtr_callback != "" && this->isCustomExtend())
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
						jlong input_j = (jlong) &input;
						EarthView::World::Core::ev_wstring outFileName_wch = outFileName;
						jstring outFileName_j = __env->NewString((const jchar*)outFileName_wch.getString(), outFileName_wch.size());
						jlong pData_j = (jlong) &pData;
						jmethodID __method = __gr->getMethod("codeToFile_MemoryDataStreamPtr_EVString_CodecDataPtr_callback");
						__env->CallVoidMethod(__obj, __method , input_j, outFileName_j, pData_j);
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
						return this->CCodec::codeToFile(input, outFileName, pData);
					}
				}
				virtual EarthView::World::Graphic::CCodec::DecodeResult decode(EarthView::World::Core::DataStreamPtr& input) const
				{
					if (this->_gRef != NULL && this->m_decode_DataStreamPtr_callback != "" && this->isCustomExtend())
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
						jlong input_j = (jlong) &input;
						jmethodID __method = __gr->getMethod("decode_DataStreamPtr_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , input_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CCodec::DecodeResult __values1 = *(EarthView::World::Graphic::CCodec::DecodeResult*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CCodec::decode(input);
					}
				}
				virtual EVString getType() const
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
						return this->CCodec::getType();
					}
				}
				virtual EVString getDataType() const
				{
					if (this->_gRef != NULL && this->m_getDataType_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDataType_void_callback");
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
						return this->CCodec::getDataType();
					}
				}
				virtual ev_bool magicNumberMatch(const ev_char* magicNumberPtr, ev_size_t maxbytes) const
				{
					if (this->_gRef != NULL && this->m_magicNumberMatch_ev_char_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong magicNumberPtr_j = (jlong) magicNumberPtr;
						jlong maxbytes_j = (jlong) maxbytes;
						jmethodID __method = __gr->getMethod("magicNumberMatch_ev_char_ev_size_t_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , magicNumberPtr_j, maxbytes_j);
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
						return this->CCodec::magicNumberMatch(magicNumberPtr, maxbytes);
					}
				}
				virtual EVString magicNumberToFileExt(const ev_char* magicNumberPtr, ev_size_t maxbytes) const
				{
					if (this->_gRef != NULL && this->m_magicNumberToFileExt_ev_char_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong magicNumberPtr_j = (jlong) magicNumberPtr;
						jlong maxbytes_j = (jlong) maxbytes;
						jmethodID __method = __gr->getMethod("magicNumberToFileExt_ev_char_ev_size_t_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , magicNumberPtr_j, maxbytes_j);
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
						return this->CCodec::magicNumberToFileExt(magicNumberPtr, maxbytes);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCCodecProxy);
			class JCCodecDataProxy : public EarthView::World::Graphic::CCodec::CCodecData
			{
			 private:
				EarthView::World::Core::ev_string m_dataType_void_callback;
			public:
				JCCodecDataProxy(EarthView::World::Core::CNameValuePairList *pList) : CCodecData(pList)
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
				void register_dataType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_dataType_void_callback = __method;
				}
				virtual EVString dataType() const
				{
					if (this->_gRef != NULL && this->m_dataType_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("dataType_void_callback");
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
						return this->CCodecData::dataType();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCCodecDataProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Codec_00024CodecData_dataType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCodec::CCodecData *pObjectX = (EarthView::World::Graphic::CCodec::CCodecData*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCodecDataProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CCodec::CCodecData::dataType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->dataType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Codec_00024CodecData_register_1dataType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCodecDataProxy *pObjectX = (JCCodecDataProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_dataType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"dataType_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Codec_00024CodecData_dataType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCodec::CCodecData *pObjectX = (EarthView::World::Graphic::CCodec::CCodecData*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CCodec::CCodecData::dataType();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Codec_00024CodecDataPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCodec::CodecDataPtr *pObjectX = (EarthView::World::Graphic::CCodec::CodecDataPtr*) pObjXXXX;
				EarthView::World::Graphic::CCodec::CCodecData* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Codec_00024CodecPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCodec::CCodecPair *pObjectX = (EarthView::World::Graphic::CCodec::CCodecPair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->first;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Codec_00024CodecPair_set_1first_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCodec::CCodecPair *pObjectX = (EarthView::World::Graphic::CCodec::CCodecPair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->first = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Codec_00024CodecPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCodec::CCodecPair *pObjectX = (EarthView::World::Graphic::CCodec::CCodecPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Codec_00024CodecPair_set_1second_1CCodec(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CCodec::CCodecPair *pObjectX = (EarthView::World::Graphic::CCodec::CCodecPair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::CCodec*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Codec_00024CodecIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCodec::CodecIterator *pObjectX = (EarthView::World::Graphic::CCodec::CodecIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Codec_00024CodecIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCodec::CodecIterator *pObjectX = (EarthView::World::Graphic::CCodec::CodecIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Codec_00024CodecIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCodec::CodecIterator *pObjectX = (EarthView::World::Graphic::CCodec::CodecIterator*) pObjXXXX;
				EVString __values1 = pObjectX->nextKey();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Codec_00024CodecIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCodec::CodecIterator *pObjectX = (EarthView::World::Graphic::CCodec::CodecIterator*) pObjXXXX;
				EarthView::World::Graphic::CCodec* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Codec_00024CodecIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCodec::CodecIterator *pObjectX = (EarthView::World::Graphic::CCodec::CodecIterator*) pObjXXXX;
				EarthView::World::Graphic::CCodec** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Codec_00024CodecIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCodec::CodecIterator *pObjectX = (EarthView::World::Graphic::CCodec::CodecIterator*) pObjXXXX;
				EarthView::World::Graphic::CCodec* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Codec_00024CodecIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCodec::CodecIterator *pObjectX = (EarthView::World::Graphic::CCodec::CodecIterator*) pObjXXXX;
				const EarthView::World::Graphic::CCodec::CCodecPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Codec_00024CodecIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCodec::CodecIterator *pObjectX = (EarthView::World::Graphic::CCodec::CodecIterator*) pObjXXXX;
				const EarthView::World::Graphic::CCodec::CCodecPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Codec_00024CodecIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCodec::CodecIterator *pObjectX = (EarthView::World::Graphic::CCodec::CodecIterator*) pObjXXXX;
				const EarthView::World::Graphic::CCodec::CCodecPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Codec_get_1NeedConversion_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->NeedConversion);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Codec_set_1NeedConversion_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*)pObjXXXX;
				pObjectX->NeedConversion = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Codec_get_1NeedDeCompress_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->NeedDeCompress);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Codec_set_1NeedDeCompress_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*)pObjXXXX;
				pObjectX->NeedDeCompress = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Codec_get_1IsEVG_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->IsEVG);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Codec_set_1IsEVG_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*)pObjXXXX;
				pObjectX->IsEVG = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Codec_get_1DxtFormat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->DxtFormat);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Codec_set_1DxtFormat_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*)pObjXXXX;
				pObjectX->DxtFormat = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Codec_get_1HasMipMap_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->HasMipMap);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Codec_set_1HasMipMap_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*)pObjXXXX;
				pObjectX->HasMipMap = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Codec_get_1HasOneBitAlpha_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->HasOneBitAlpha);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Codec_set_1HasOneBitAlpha_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*)pObjXXXX;
				pObjectX->HasOneBitAlpha = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Codec_registerCodec_1CCodec(JNIEnv *__env , jclass __clazz, jlong ref_pCodec_j)
			{
				EarthView::World::Graphic::CCodec *ref_pCodec = (EarthView::World::Graphic::CCodec*) ref_pCodec_j;
				EarthView::World::Graphic::CCodec::registerCodec(ref_pCodec);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Codec_isCodecRegistered_1EVString(JNIEnv *__env , jclass __clazz, jstring codecType_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* codecType_ch = (const ev_char*)__env->GetStringUTFChars(codecType_j,JNI_FALSE);
				const EVString codecType = codecType_ch;
				__env->ReleaseStringUTFChars(codecType_j, (const char *)codecType_ch);
				#else
				const ev_wchar* codecType_ch = (const ev_wchar*)__env->GetStringChars(codecType_j,JNI_FALSE);
				const EVString codecType = codecType_ch;
				__env->ReleaseStringChars(codecType_j, (const jchar *)codecType_ch);
				#endif
				ev_bool __values1 = EarthView::World::Graphic::CCodec::isCodecRegistered(codecType);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Codec_unRegisterCodec_1CCodec(JNIEnv *__env , jclass __clazz, jlong pCodec_j)
			{
				EarthView::World::Graphic::CCodec *pCodec = (EarthView::World::Graphic::CCodec*) pCodec_j;
				EarthView::World::Graphic::CCodec::unRegisterCodec(pCodec);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Codec_getCodecIterator_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CCodec::CodecIterator __values1 = EarthView::World::Graphic::CCodec::getCodecIterator();
				EarthView::World::Graphic::CCodec::CodecIterator *returnvalues = new EarthView::World::Graphic::CCodec::CodecIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Codec_getExtensions_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Core::StringVector __values1 = EarthView::World::Graphic::CCodec::getExtensions();
				EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Codec_getCodec_1EVString(JNIEnv *__env , jclass __clazz, jstring extension_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* extension_ch = (const ev_char*)__env->GetStringUTFChars(extension_j,JNI_FALSE);
				const EVString extension = extension_ch;
				__env->ReleaseStringUTFChars(extension_j, (const char *)extension_ch);
				#else
				const ev_wchar* extension_ch = (const ev_wchar*)__env->GetStringChars(extension_j,JNI_FALSE);
				const EVString extension = extension_ch;
				__env->ReleaseStringChars(extension_j, (const jchar *)extension_ch);
				#endif
				EarthView::World::Graphic::CCodec* __values1 = EarthView::World::Graphic::CCodec::getCodec(extension);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Codec_getCodec_1ev_1char_1ev_1size_1t(JNIEnv *__env , jclass __clazz, jlong magicNumberPtr_j, jlong maxbytes_j)
			{
				ev_char *magicNumberPtr = (ev_char*) magicNumberPtr_j;
				ev_size_t maxbytes = (ev_size_t) maxbytes_j;
				EarthView::World::Graphic::CCodec* __values1 = EarthView::World::Graphic::CCodec::getCodec(magicNumberPtr, maxbytes);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Codec_code_1MemoryDataStreamPtr_1CodecDataPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong input_j, jlong pData_j)
			{
				EarthView::World::Core::MemoryDataStreamPtr &input = *(EarthView::World::Core::MemoryDataStreamPtr*) input_j;
				EarthView::World::Graphic::CCodec::CodecDataPtr &pData = *(EarthView::World::Graphic::CCodec::CodecDataPtr*) pData_j;
				const 				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCodecProxy))
				{
					EarthView::World::Core::DataStreamPtr __values1 = pObjectX->EarthView::World::Graphic::CCodec::code(input, pData);
					EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::DataStreamPtr __values1 = pObjectX->code(input, pData);
					EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Codec_register_1code_1MemoryDataStreamPtr_1CodecDataPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCodecProxy *pObjectX = (JCCodecProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_code_MemoryDataStreamPtr_CodecDataPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"code_MemoryDataStreamPtr_CodecDataPtr_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Codec_code_1MemoryDataStreamPtr_1CodecDataPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong input_j, jlong pData_j)
			{
				EarthView::World::Core::MemoryDataStreamPtr &input = *(EarthView::World::Core::MemoryDataStreamPtr*) input_j;
				EarthView::World::Graphic::CCodec::CodecDataPtr &pData = *(EarthView::World::Graphic::CCodec::CodecDataPtr*) pData_j;
				const 				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->EarthView::World::Graphic::CCodec::code(input, pData);
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Codec_codeToFile_1MemoryDataStreamPtr_1EVString_1CodecDataPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong input_j, jstring outFileName_j, jlong pData_j)
			{
				EarthView::World::Core::MemoryDataStreamPtr &input = *(EarthView::World::Core::MemoryDataStreamPtr*) input_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* outFileName_ch = (const ev_char*)__env->GetStringUTFChars(outFileName_j,JNI_FALSE);
				const EVString outFileName = outFileName_ch;
				__env->ReleaseStringUTFChars(outFileName_j, (const char *)outFileName_ch);
				#else
				const ev_wchar* outFileName_ch = (const ev_wchar*)__env->GetStringChars(outFileName_j,JNI_FALSE);
				const EVString outFileName = outFileName_ch;
				__env->ReleaseStringChars(outFileName_j, (const jchar *)outFileName_ch);
				#endif
				EarthView::World::Graphic::CCodec::CodecDataPtr &pData = *(EarthView::World::Graphic::CCodec::CodecDataPtr*) pData_j;
				const 				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCodecProxy))
				{
					pObjectX->EarthView::World::Graphic::CCodec::codeToFile(input, outFileName, pData);
				}
				else
				{
					pObjectX->codeToFile(input, outFileName, pData);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Codec_register_1codeToFile_1MemoryDataStreamPtr_1EVString_1CodecDataPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCodecProxy *pObjectX = (JCCodecProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_codeToFile_MemoryDataStreamPtr_EVString_CodecDataPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"codeToFile_MemoryDataStreamPtr_EVString_CodecDataPtr_callback", "(JLjava/lang/String;J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Codec_codeToFile_1MemoryDataStreamPtr_1EVString_1CodecDataPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong input_j, jstring outFileName_j, jlong pData_j)
			{
				EarthView::World::Core::MemoryDataStreamPtr &input = *(EarthView::World::Core::MemoryDataStreamPtr*) input_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* outFileName_ch = (const ev_char*)__env->GetStringUTFChars(outFileName_j,JNI_FALSE);
				const EVString outFileName = outFileName_ch;
				__env->ReleaseStringUTFChars(outFileName_j, (const char *)outFileName_ch);
				#else
				const ev_wchar* outFileName_ch = (const ev_wchar*)__env->GetStringChars(outFileName_j,JNI_FALSE);
				const EVString outFileName = outFileName_ch;
				__env->ReleaseStringChars(outFileName_j, (const jchar *)outFileName_ch);
				#endif
				EarthView::World::Graphic::CCodec::CodecDataPtr &pData = *(EarthView::World::Graphic::CCodec::CodecDataPtr*) pData_j;
				const 				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CCodec::codeToFile(input, outFileName, pData);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Codec_00024DecodeResult_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCodec::DecodeResult *pObjectX = (EarthView::World::Graphic::CCodec::DecodeResult*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->first);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Codec_00024DecodeResult_set_1first_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CCodec::DecodeResult *pObjectX = (EarthView::World::Graphic::CCodec::DecodeResult*)pObjXXXX;
				pObjectX->first = *(EarthView::World::Core::MemoryDataStreamPtr*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Codec_00024DecodeResult_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCodec::DecodeResult *pObjectX = (EarthView::World::Graphic::CCodec::DecodeResult*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Codec_00024DecodeResult_set_1second_1CodecDataPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CCodec::DecodeResult *pObjectX = (EarthView::World::Graphic::CCodec::DecodeResult*)pObjXXXX;
				pObjectX->second = *(EarthView::World::Graphic::CCodec::CodecDataPtr*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Codec_decode_1DataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong input_j)
			{
				EarthView::World::Core::DataStreamPtr &input = *(EarthView::World::Core::DataStreamPtr*) input_j;
				const 				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCodecProxy))
				{
					EarthView::World::Graphic::CCodec::DecodeResult __values1 = pObjectX->EarthView::World::Graphic::CCodec::decode(input);
					EarthView::World::Graphic::CCodec::DecodeResult *returnvalues = new EarthView::World::Graphic::CCodec::DecodeResult(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CCodec::DecodeResult __values1 = pObjectX->decode(input);
					EarthView::World::Graphic::CCodec::DecodeResult *returnvalues = new EarthView::World::Graphic::CCodec::DecodeResult(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Codec_register_1decode_1DataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCodecProxy *pObjectX = (JCCodecProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_decode_DataStreamPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"decode_DataStreamPtr_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Codec_decode_1DataStreamPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong input_j)
			{
				EarthView::World::Core::DataStreamPtr &input = *(EarthView::World::Core::DataStreamPtr*) input_j;
				const 				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*) pObjXXXX;
				EarthView::World::Graphic::CCodec::DecodeResult __values1 = pObjectX->EarthView::World::Graphic::CCodec::decode(input);
				EarthView::World::Graphic::CCodec::DecodeResult *returnvalues = new EarthView::World::Graphic::CCodec::DecodeResult(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Codec_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCodecProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CCodec::getType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Codec_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCodecProxy *pObjectX = (JCCodecProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Codec_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CCodec::getType();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Codec_getDataType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCodecProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CCodec::getDataType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getDataType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Codec_register_1getDataType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCodecProxy *pObjectX = (JCCodecProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDataType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDataType_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Codec_getDataType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CCodec::getDataType();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Codec_magicNumberMatch_1ev_1char_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong magicNumberPtr_j, jlong maxbytes_j)
			{
				const ev_char *magicNumberPtr = (const ev_char*) magicNumberPtr_j;
				ev_size_t maxbytes = (ev_size_t) maxbytes_j;
				const 				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCodecProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CCodec::magicNumberMatch(magicNumberPtr, maxbytes);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->magicNumberMatch(magicNumberPtr, maxbytes);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Codec_register_1magicNumberMatch_1ev_1char_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCodecProxy *pObjectX = (JCCodecProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_magicNumberMatch_ev_char_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"magicNumberMatch_ev_char_ev_size_t_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Codec_magicNumberMatch_1ev_1char_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong magicNumberPtr_j, jlong maxbytes_j)
			{
				const ev_char *magicNumberPtr = (const ev_char*) magicNumberPtr_j;
				ev_size_t maxbytes = (ev_size_t) maxbytes_j;
				const 				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CCodec::magicNumberMatch(magicNumberPtr, maxbytes);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Codec_magicNumberToFileExt_1ev_1char_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong magicNumberPtr_j, jlong maxbytes_j)
			{
				const ev_char *magicNumberPtr = (const ev_char*) magicNumberPtr_j;
				ev_size_t maxbytes = (ev_size_t) maxbytes_j;
				const 				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCCodecProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CCodec::magicNumberToFileExt(magicNumberPtr, maxbytes);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->magicNumberToFileExt(magicNumberPtr, maxbytes);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Codec_register_1magicNumberToFileExt_1ev_1char_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCCodecProxy *pObjectX = (JCCodecProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_magicNumberToFileExt_ev_char_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"magicNumberToFileExt_ev_char_ev_size_t_callback", "(JJ)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Codec_magicNumberToFileExt_1ev_1char_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong magicNumberPtr_j, jlong maxbytes_j)
			{
				const ev_char *magicNumberPtr = (const ev_char*) magicNumberPtr_j;
				ev_size_t maxbytes = (ev_size_t) maxbytes_j;
				const 				EarthView::World::Graphic::CCodec *pObjectX = (EarthView::World::Graphic::CCodec*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CCodec::magicNumberToFileExt(magicNumberPtr, maxbytes);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
		}
	}
}
