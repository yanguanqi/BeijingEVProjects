/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/freeimagecodec.h"
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
			class JCFreeImageCodecProxy : public EarthView::World::Graphic::CFreeImageCodec
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
				JCFreeImageCodecProxy(EarthView::World::Core::CNameValuePairList *pList) : CFreeImageCodec(pList)
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
						return this->CFreeImageCodec::code(input, pData);
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
						return this->CFreeImageCodec::codeToFile(input, outFileName, pData);
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
						return this->CFreeImageCodec::decode(input);
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
						return this->CFreeImageCodec::getType();
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
						return this->CFreeImageCodec::magicNumberToFileExt(magicNumberPtr, maxbytes);
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
						return this->CFreeImageCodec::getDataType();
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
						return this->CFreeImageCodec::magicNumberMatch(magicNumberPtr, maxbytes);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCFreeImageCodecProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FreeImageCodec_code_1MemoryDataStreamPtr_1CodecDataPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong input_j, jlong pData_j)
			{
				EarthView::World::Core::MemoryDataStreamPtr &input = *(EarthView::World::Core::MemoryDataStreamPtr*) input_j;
				EarthView::World::Graphic::CCodec::CodecDataPtr &pData = *(EarthView::World::Graphic::CCodec::CodecDataPtr*) pData_j;
				const 				EarthView::World::Graphic::CFreeImageCodec *pObjectX = (EarthView::World::Graphic::CFreeImageCodec*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFreeImageCodecProxy))
				{
					EarthView::World::Core::DataStreamPtr __values1 = pObjectX->EarthView::World::Graphic::CFreeImageCodec::code(input, pData);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FreeImageCodec_register_1code_1MemoryDataStreamPtr_1CodecDataPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFreeImageCodecProxy *pObjectX = (JCFreeImageCodecProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FreeImageCodec_code_1MemoryDataStreamPtr_1CodecDataPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong input_j, jlong pData_j)
			{
				EarthView::World::Core::MemoryDataStreamPtr &input = *(EarthView::World::Core::MemoryDataStreamPtr*) input_j;
				EarthView::World::Graphic::CCodec::CodecDataPtr &pData = *(EarthView::World::Graphic::CCodec::CodecDataPtr*) pData_j;
				const 				EarthView::World::Graphic::CFreeImageCodec *pObjectX = (EarthView::World::Graphic::CFreeImageCodec*) pObjXXXX;
				EarthView::World::Core::DataStreamPtr __values1 = pObjectX->EarthView::World::Graphic::CFreeImageCodec::code(input, pData);
				EarthView::World::Core::DataStreamPtr *returnvalues = new EarthView::World::Core::DataStreamPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FreeImageCodec_codeToFile_1MemoryDataStreamPtr_1EVString_1CodecDataPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong input_j, jstring outFileName_j, jlong pData_j)
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
				const 				EarthView::World::Graphic::CFreeImageCodec *pObjectX = (EarthView::World::Graphic::CFreeImageCodec*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFreeImageCodecProxy))
				{
					pObjectX->EarthView::World::Graphic::CFreeImageCodec::codeToFile(input, outFileName, pData);
				}
				else
				{
					pObjectX->codeToFile(input, outFileName, pData);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FreeImageCodec_register_1codeToFile_1MemoryDataStreamPtr_1EVString_1CodecDataPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFreeImageCodecProxy *pObjectX = (JCFreeImageCodecProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FreeImageCodec_codeToFile_1MemoryDataStreamPtr_1EVString_1CodecDataPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong input_j, jstring outFileName_j, jlong pData_j)
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
				const 				EarthView::World::Graphic::CFreeImageCodec *pObjectX = (EarthView::World::Graphic::CFreeImageCodec*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CFreeImageCodec::codeToFile(input, outFileName, pData);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FreeImageCodec_decode_1DataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong input_j)
			{
				EarthView::World::Core::DataStreamPtr &input = *(EarthView::World::Core::DataStreamPtr*) input_j;
				const 				EarthView::World::Graphic::CFreeImageCodec *pObjectX = (EarthView::World::Graphic::CFreeImageCodec*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFreeImageCodecProxy))
				{
					EarthView::World::Graphic::CCodec::DecodeResult __values1 = pObjectX->EarthView::World::Graphic::CFreeImageCodec::decode(input);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FreeImageCodec_register_1decode_1DataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFreeImageCodecProxy *pObjectX = (JCFreeImageCodecProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FreeImageCodec_decode_1DataStreamPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong input_j)
			{
				EarthView::World::Core::DataStreamPtr &input = *(EarthView::World::Core::DataStreamPtr*) input_j;
				const 				EarthView::World::Graphic::CFreeImageCodec *pObjectX = (EarthView::World::Graphic::CFreeImageCodec*) pObjXXXX;
				EarthView::World::Graphic::CCodec::DecodeResult __values1 = pObjectX->EarthView::World::Graphic::CFreeImageCodec::decode(input);
				EarthView::World::Graphic::CCodec::DecodeResult *returnvalues = new EarthView::World::Graphic::CCodec::DecodeResult(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_FreeImageCodec_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CFreeImageCodec *pObjectX = (EarthView::World::Graphic::CFreeImageCodec*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFreeImageCodecProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CFreeImageCodec::getType();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FreeImageCodec_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFreeImageCodecProxy *pObjectX = (JCFreeImageCodecProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_FreeImageCodec_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CFreeImageCodec *pObjectX = (EarthView::World::Graphic::CFreeImageCodec*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CFreeImageCodec::getType();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_FreeImageCodec_magicNumberToFileExt_1ev_1char_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong magicNumberPtr_j, jlong maxbytes_j)
			{
				const ev_char *magicNumberPtr = (const ev_char*) magicNumberPtr_j;
				ev_size_t maxbytes = (ev_size_t) maxbytes_j;
				const 				EarthView::World::Graphic::CFreeImageCodec *pObjectX = (EarthView::World::Graphic::CFreeImageCodec*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFreeImageCodecProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CFreeImageCodec::magicNumberToFileExt(magicNumberPtr, maxbytes);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FreeImageCodec_register_1magicNumberToFileExt_1ev_1char_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFreeImageCodecProxy *pObjectX = (JCFreeImageCodecProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_FreeImageCodec_magicNumberToFileExt_1ev_1char_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong magicNumberPtr_j, jlong maxbytes_j)
			{
				const ev_char *magicNumberPtr = (const ev_char*) magicNumberPtr_j;
				ev_size_t maxbytes = (ev_size_t) maxbytes_j;
				const 				EarthView::World::Graphic::CFreeImageCodec *pObjectX = (EarthView::World::Graphic::CFreeImageCodec*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CFreeImageCodec::magicNumberToFileExt(magicNumberPtr, maxbytes);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FreeImageCodec_startup_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CFreeImageCodec::startup();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FreeImageCodec_shutdown_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CFreeImageCodec::shutdown();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FreeImageCodec_register_1getDataType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFreeImageCodecProxy *pObjectX = (JCFreeImageCodecProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FreeImageCodec_register_1magicNumberMatch_1ev_1char_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFreeImageCodecProxy *pObjectX = (JCFreeImageCodecProxy*) pObjXXXX;
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
		}
	}
}
