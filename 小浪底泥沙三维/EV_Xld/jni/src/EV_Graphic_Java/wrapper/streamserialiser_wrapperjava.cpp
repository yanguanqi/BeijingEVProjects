/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/streamserialiser.h"
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
			namespace Math
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class JCStreamSerialiserProxy : public EarthView::World::Graphic::CStreamSerialiser
			{
			 private:
				EarthView::World::Core::ev_string m_getEndian_void_callback;
				EarthView::World::Core::ev_string m_readChunkBegin_void_callback;
				EarthView::World::Core::ev_string m_readChunkBegin_ev_uint32_ev_uint16_EVString_callback;
				EarthView::World::Core::ev_string m_readChunkBegin_ev_uint32_ev_uint16_callback;
				EarthView::World::Core::ev_string m_undoReadChunk_ev_uint32_callback;
				EarthView::World::Core::ev_string m_peekNextChunkID_void_callback;
				EarthView::World::Core::ev_string m_readChunkEnd_ev_uint32_callback;
				EarthView::World::Core::ev_string m_isEndOfChunk_ev_uint32_callback;
				EarthView::World::Core::ev_string m_eof_void_callback;
				EarthView::World::Core::ev_string m_getCurrentChunk_void_callback;
				EarthView::World::Core::ev_string m_writeChunkBegin_ev_uint32_ev_uint16_callback;
				EarthView::World::Core::ev_string m_writeChunkBegin_ev_uint32_callback;
				EarthView::World::Core::ev_string m_writeChunkEnd_ev_uint32_callback;
				EarthView::World::Core::ev_string m_writeData_void_ev_size_t_ev_size_t_callback;
				EarthView::World::Core::ev_string m_readChunkImpl_void_callback;
				EarthView::World::Core::ev_string m_writeChunkImpl_ev_uint32_ev_uint16_callback;
				EarthView::World::Core::ev_string m_readHeader_void_callback;
				EarthView::World::Core::ev_string m_writeHeader_void_callback;
				EarthView::World::Core::ev_string m_calculateChecksum_Chunk_callback;
				EarthView::World::Core::ev_string m_checkStream_ev_bool_ev_bool_ev_bool_callback;
				EarthView::World::Core::ev_string m_checkStream_ev_bool_ev_bool_callback;
				EarthView::World::Core::ev_string m_checkStream_ev_bool_callback;
				EarthView::World::Core::ev_string m_checkStream_void_callback;
				EarthView::World::Core::ev_string m_flipEndian_void_ev_size_t_ev_size_t_callback;
				EarthView::World::Core::ev_string m_flipEndian_void_ev_size_t_callback;
				EarthView::World::Core::ev_string m_determineEndianness_void_callback;
				EarthView::World::Core::ev_string m_popChunk_ev_uint32_callback;
				EarthView::World::Core::ev_string m_writeFloatsAsDoubles_ev_real32_ev_size_t_callback;
				EarthView::World::Core::ev_string m_writeDoublesAsFloats_ev_real64_ev_size_t_callback;
				EarthView::World::Core::ev_string m_readFloatsAsDoubles_ev_real64_ev_size_t_callback;
				EarthView::World::Core::ev_string m_readDoublesAsFloats_ev_real32_ev_size_t_callback;
			public:
				JCStreamSerialiserProxy(EarthView::World::Core::CNameValuePairList *pList) : CStreamSerialiser(pList)
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
				void register_getEndian_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getEndian_void_callback = __method;
				}
				void register_readChunkBegin_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readChunkBegin_void_callback = __method;
				}
				void register_readChunkBegin_ev_uint32_ev_uint16_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readChunkBegin_ev_uint32_ev_uint16_EVString_callback = __method;
				}
				void register_readChunkBegin_ev_uint32_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readChunkBegin_ev_uint32_ev_uint16_callback = __method;
				}
				void register_undoReadChunk_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_undoReadChunk_ev_uint32_callback = __method;
				}
				void register_peekNextChunkID_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_peekNextChunkID_void_callback = __method;
				}
				void register_readChunkEnd_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readChunkEnd_ev_uint32_callback = __method;
				}
				void register_isEndOfChunk_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isEndOfChunk_ev_uint32_callback = __method;
				}
				void register_eof_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_eof_void_callback = __method;
				}
				void register_getCurrentChunk_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCurrentChunk_void_callback = __method;
				}
				void register_writeChunkBegin_ev_uint32_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_writeChunkBegin_ev_uint32_ev_uint16_callback = __method;
				}
				void register_writeChunkBegin_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_writeChunkBegin_ev_uint32_callback = __method;
				}
				void register_writeChunkEnd_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_writeChunkEnd_ev_uint32_callback = __method;
				}
				void register_writeData_void_ev_size_t_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_writeData_void_ev_size_t_ev_size_t_callback = __method;
				}
				void register_readChunkImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readChunkImpl_void_callback = __method;
				}
				void register_writeChunkImpl_ev_uint32_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_writeChunkImpl_ev_uint32_ev_uint16_callback = __method;
				}
				void register_readHeader_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readHeader_void_callback = __method;
				}
				void register_writeHeader_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_writeHeader_void_callback = __method;
				}
				void register_calculateChecksum_Chunk_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_calculateChecksum_Chunk_callback = __method;
				}
				void register_checkStream_ev_bool_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_checkStream_ev_bool_ev_bool_ev_bool_callback = __method;
				}
				void register_checkStream_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_checkStream_ev_bool_ev_bool_callback = __method;
				}
				void register_checkStream_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_checkStream_ev_bool_callback = __method;
				}
				void register_checkStream_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_checkStream_void_callback = __method;
				}
				void register_flipEndian_void_ev_size_t_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_flipEndian_void_ev_size_t_ev_size_t_callback = __method;
				}
				void register_flipEndian_void_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_flipEndian_void_ev_size_t_callback = __method;
				}
				void register_determineEndianness_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_determineEndianness_void_callback = __method;
				}
				void register_popChunk_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_popChunk_ev_uint32_callback = __method;
				}
				void register_writeFloatsAsDoubles_ev_real32_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_writeFloatsAsDoubles_ev_real32_ev_size_t_callback = __method;
				}
				void register_writeDoublesAsFloats_ev_real64_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_writeDoublesAsFloats_ev_real64_ev_size_t_callback = __method;
				}
				void register_readFloatsAsDoubles_ev_real64_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readFloatsAsDoubles_ev_real64_ev_size_t_callback = __method;
				}
				void register_readDoublesAsFloats_ev_real32_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readDoublesAsFloats_ev_real32_ev_size_t_callback = __method;
				}
				virtual EarthView::World::Graphic::CStreamSerialiser::Endian getEndian() const
				{
					if (this->_gRef != NULL && this->m_getEndian_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getEndian_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CStreamSerialiser::Endian __values1 = (EarthView::World::Graphic::CStreamSerialiser::Endian) __values1_j;
						return __values1;
					}
					else
					{
						return this->CStreamSerialiser::getEndian();
					}
				}
				virtual const EarthView::World::Graphic::CStreamSerialiser::Chunk* readChunkBegin()
				{
					if (this->_gRef != NULL && this->m_readChunkBegin_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("readChunkBegin_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CStreamSerialiser::Chunk *__values1 = (const EarthView::World::Graphic::CStreamSerialiser::Chunk*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CStreamSerialiser::readChunkBegin();
					}
				}
				virtual const EarthView::World::Graphic::CStreamSerialiser::Chunk* readChunkBegin(ev_uint32 id, ev_uint16 maxVersion, const EVString& msg)
				{
					if (this->_gRef != NULL && this->m_readChunkBegin_ev_uint32_ev_uint16_EVString_callback != "" && this->isCustomExtend())
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
						jint maxVersion_j = (jint) maxVersion;
						EarthView::World::Core::ev_wstring msg_wch = msg;
						jstring msg_j = __env->NewString((const jchar*)msg_wch.getString(), msg_wch.size());
						jmethodID __method = __gr->getMethod("readChunkBegin_ev_uint32_ev_uint16_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , id_j, maxVersion_j, msg_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CStreamSerialiser::Chunk *__values1 = (const EarthView::World::Graphic::CStreamSerialiser::Chunk*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CStreamSerialiser::readChunkBegin(id, maxVersion, msg);
					}
				}
				virtual const EarthView::World::Graphic::CStreamSerialiser::Chunk* readChunkBegin(ev_uint32 id, ev_uint16 maxVersion)
				{
					if (this->_gRef != NULL && this->m_readChunkBegin_ev_uint32_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint maxVersion_j = (jint) maxVersion;
						jmethodID __method = __gr->getMethod("readChunkBegin_ev_uint32_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , id_j, maxVersion_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CStreamSerialiser::Chunk *__values1 = (const EarthView::World::Graphic::CStreamSerialiser::Chunk*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CStreamSerialiser::readChunkBegin(id, maxVersion);
					}
				}
				virtual void undoReadChunk(ev_uint32 id)
				{
					if (this->_gRef != NULL && this->m_undoReadChunk_ev_uint32_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("undoReadChunk_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , id_j);
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
						return this->CStreamSerialiser::undoReadChunk(id);
					}
				}
				virtual ev_uint32 peekNextChunkID()
				{
					if (this->_gRef != NULL && this->m_peekNextChunkID_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("peekNextChunkID_void_callback");
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
						return this->CStreamSerialiser::peekNextChunkID();
					}
				}
				virtual void readChunkEnd(ev_uint32 id)
				{
					if (this->_gRef != NULL && this->m_readChunkEnd_ev_uint32_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("readChunkEnd_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , id_j);
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
						return this->CStreamSerialiser::readChunkEnd(id);
					}
				}
				virtual ev_bool isEndOfChunk(ev_uint32 id)
				{
					if (this->_gRef != NULL && this->m_isEndOfChunk_ev_uint32_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isEndOfChunk_ev_uint32_callback");
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
						return this->CStreamSerialiser::isEndOfChunk(id);
					}
				}
				virtual ev_bool eof() const
				{
					if (this->_gRef != NULL && this->m_eof_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("eof_void_callback");
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
						return this->CStreamSerialiser::eof();
					}
				}
				virtual const EarthView::World::Graphic::CStreamSerialiser::Chunk* getCurrentChunk() const
				{
					if (this->_gRef != NULL && this->m_getCurrentChunk_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCurrentChunk_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CStreamSerialiser::Chunk *__values1 = (const EarthView::World::Graphic::CStreamSerialiser::Chunk*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CStreamSerialiser::getCurrentChunk();
					}
				}
				virtual void writeChunkBegin(ev_uint32 id, ev_uint16 version)
				{
					if (this->_gRef != NULL && this->m_writeChunkBegin_ev_uint32_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint version_j = (jint) version;
						jmethodID __method = __gr->getMethod("writeChunkBegin_ev_uint32_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , id_j, version_j);
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
						return this->CStreamSerialiser::writeChunkBegin(id, version);
					}
				}
				virtual void writeChunkBegin(ev_uint32 id)
				{
					if (this->_gRef != NULL && this->m_writeChunkBegin_ev_uint32_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("writeChunkBegin_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , id_j);
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
						return this->CStreamSerialiser::writeChunkBegin(id);
					}
				}
				virtual void writeChunkEnd(ev_uint32 id)
				{
					if (this->_gRef != NULL && this->m_writeChunkEnd_ev_uint32_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("writeChunkEnd_ev_uint32_callback");
						__env->CallVoidMethod(__obj, __method , id_j);
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
						return this->CStreamSerialiser::writeChunkEnd(id);
					}
				}
				virtual void writeData(const void* buf, ev_size_t size, ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_writeData_void_ev_size_t_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong buf_j = (jlong) buf;
						jlong size_j = (jlong) size;
						jlong count_j = (jlong) count;
						jmethodID __method = __gr->getMethod("writeData_void_ev_size_t_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , buf_j, size_j, count_j);
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
						return this->CStreamSerialiser::writeData(buf, size, count);
					}
				}
				virtual EarthView::World::Graphic::CStreamSerialiser::Chunk* readChunkImpl()
				{
					if (this->_gRef != NULL && this->m_readChunkImpl_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("readChunkImpl_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CStreamSerialiser::Chunk *__values1 = (EarthView::World::Graphic::CStreamSerialiser::Chunk*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CStreamSerialiser::readChunkImpl();
					}
				}
				virtual void writeChunkImpl(ev_uint32 id, ev_uint16 version)
				{
					if (this->_gRef != NULL && this->m_writeChunkImpl_ev_uint32_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint version_j = (jint) version;
						jmethodID __method = __gr->getMethod("writeChunkImpl_ev_uint32_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , id_j, version_j);
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
						return this->CStreamSerialiser::writeChunkImpl(id, version);
					}
				}
				virtual void readHeader()
				{
					if (this->_gRef != NULL && this->m_readHeader_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("readHeader_void_callback");
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
						return this->CStreamSerialiser::readHeader();
					}
				}
				virtual void writeHeader()
				{
					if (this->_gRef != NULL && this->m_writeHeader_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("writeHeader_void_callback");
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
						return this->CStreamSerialiser::writeHeader();
					}
				}
				virtual ev_uint32 calculateChecksum(EarthView::World::Graphic::CStreamSerialiser::Chunk* c)
				{
					if (this->_gRef != NULL && this->m_calculateChecksum_Chunk_callback != "" && this->isCustomExtend())
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
						jlong c_j = (jlong) c;
						jmethodID __method = __gr->getMethod("calculateChecksum_Chunk_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , c_j);
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
						return this->CStreamSerialiser::calculateChecksum(c);
					}
				}
				virtual void checkStream(ev_bool failOnEof, ev_bool validateReadable, ev_bool validateWriteable) const
				{
					if (this->_gRef != NULL && this->m_checkStream_ev_bool_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean failOnEof_j = (jboolean) failOnEof;
						jboolean validateReadable_j = (jboolean) validateReadable;
						jboolean validateWriteable_j = (jboolean) validateWriteable;
						jmethodID __method = __gr->getMethod("checkStream_ev_bool_ev_bool_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , failOnEof_j, validateReadable_j, validateWriteable_j);
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
						return this->CStreamSerialiser::checkStream(failOnEof, validateReadable, validateWriteable);
					}
				}
				virtual void checkStream(ev_bool failOnEof, ev_bool validateReadable) const
				{
					if (this->_gRef != NULL && this->m_checkStream_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean failOnEof_j = (jboolean) failOnEof;
						jboolean validateReadable_j = (jboolean) validateReadable;
						jmethodID __method = __gr->getMethod("checkStream_ev_bool_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , failOnEof_j, validateReadable_j);
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
						return this->CStreamSerialiser::checkStream(failOnEof, validateReadable);
					}
				}
				virtual void checkStream(ev_bool failOnEof) const
				{
					if (this->_gRef != NULL && this->m_checkStream_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean failOnEof_j = (jboolean) failOnEof;
						jmethodID __method = __gr->getMethod("checkStream_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , failOnEof_j);
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
						return this->CStreamSerialiser::checkStream(failOnEof);
					}
				}
				virtual void checkStream() const
				{
					if (this->_gRef != NULL && this->m_checkStream_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("checkStream_void_callback");
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
						return this->CStreamSerialiser::checkStream();
					}
				}
				virtual void flipEndian(void* pData, ev_size_t size, ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_flipEndian_void_ev_size_t_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong pData_j = (jlong) pData;
						jlong size_j = (jlong) size;
						jlong count_j = (jlong) count;
						jmethodID __method = __gr->getMethod("flipEndian_void_ev_size_t_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , pData_j, size_j, count_j);
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
						return this->CStreamSerialiser::flipEndian(pData, size, count);
					}
				}
				virtual void flipEndian(void* pData, ev_size_t size)
				{
					if (this->_gRef != NULL && this->m_flipEndian_void_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong pData_j = (jlong) pData;
						jlong size_j = (jlong) size;
						jmethodID __method = __gr->getMethod("flipEndian_void_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , pData_j, size_j);
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
						return this->CStreamSerialiser::flipEndian(pData, size);
					}
				}
				virtual void determineEndianness()
				{
					if (this->_gRef != NULL && this->m_determineEndianness_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("determineEndianness_void_callback");
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
						return this->CStreamSerialiser::determineEndianness();
					}
				}
				virtual EarthView::World::Graphic::CStreamSerialiser::Chunk* popChunk(ev_uint32 id)
				{
					if (this->_gRef != NULL && this->m_popChunk_ev_uint32_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("popChunk_ev_uint32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , id_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CStreamSerialiser::Chunk *__values1 = (EarthView::World::Graphic::CStreamSerialiser::Chunk*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CStreamSerialiser::popChunk(id);
					}
				}
				virtual void writeFloatsAsDoubles(const ev_real32* val, ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_writeFloatsAsDoubles_ev_real32_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong val_j = (jlong) val;
						jlong count_j = (jlong) count;
						jmethodID __method = __gr->getMethod("writeFloatsAsDoubles_ev_real32_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , val_j, count_j);
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
						return this->CStreamSerialiser::writeFloatsAsDoubles(val, count);
					}
				}
				virtual void writeDoublesAsFloats(const ev_real64* val, ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_writeDoublesAsFloats_ev_real64_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong val_j = (jlong) val;
						jlong count_j = (jlong) count;
						jmethodID __method = __gr->getMethod("writeDoublesAsFloats_ev_real64_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , val_j, count_j);
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
						return this->CStreamSerialiser::writeDoublesAsFloats(val, count);
					}
				}
				virtual void readFloatsAsDoubles(ev_real64* val, ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_readFloatsAsDoubles_ev_real64_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong val_j = (jlong) val;
						jlong count_j = (jlong) count;
						jmethodID __method = __gr->getMethod("readFloatsAsDoubles_ev_real64_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , val_j, count_j);
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
						return this->CStreamSerialiser::readFloatsAsDoubles(val, count);
					}
				}
				virtual void readDoublesAsFloats(ev_real32* val, ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_readDoublesAsFloats_ev_real32_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong val_j = (jlong) val;
						jlong count_j = (jlong) count;
						jmethodID __method = __gr->getMethod("readDoublesAsFloats_ev_real32_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , val_j, count_j);
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
						return this->CStreamSerialiser::readDoublesAsFloats(val, count);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCStreamSerialiserProxy);
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_StreamSerialiser_00024EndianHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CStreamSerialiser::ENDIAN_AUTO,
					CStreamSerialiser::ENDIAN_BIG,
					CStreamSerialiser::ENDIAN_LITTLE
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_StreamSerialiser_00024RealStorageFormatHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CStreamSerialiser::REAL_FLOAT,
					CStreamSerialiser::REAL_DOUBLE
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_StreamSerialiser_00024Chunk_get_1id_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CStreamSerialiser::Chunk *pObjectX = (EarthView::World::Graphic::CStreamSerialiser::Chunk*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->id);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_00024Chunk_set_1id_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CStreamSerialiser::Chunk *pObjectX = (EarthView::World::Graphic::CStreamSerialiser::Chunk*)pObjXXXX;
				pObjectX->id = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_StreamSerialiser_00024Chunk_get_1version_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CStreamSerialiser::Chunk *pObjectX = (EarthView::World::Graphic::CStreamSerialiser::Chunk*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->version);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_00024Chunk_set_1version_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CStreamSerialiser::Chunk *pObjectX = (EarthView::World::Graphic::CStreamSerialiser::Chunk*)pObjXXXX;
				pObjectX->version = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_StreamSerialiser_00024Chunk_get_1length_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CStreamSerialiser::Chunk *pObjectX = (EarthView::World::Graphic::CStreamSerialiser::Chunk*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->length);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_00024Chunk_set_1length_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CStreamSerialiser::Chunk *pObjectX = (EarthView::World::Graphic::CStreamSerialiser::Chunk*)pObjXXXX;
				pObjectX->length = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_StreamSerialiser_00024Chunk_get_1offset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CStreamSerialiser::Chunk *pObjectX = (EarthView::World::Graphic::CStreamSerialiser::Chunk*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->offset);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_00024Chunk_set_1offset_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CStreamSerialiser::Chunk *pObjectX = (EarthView::World::Graphic::CStreamSerialiser::Chunk*)pObjXXXX;
				pObjectX->offset = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_StreamSerialiser_getEndian_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					EarthView::World::Graphic::CStreamSerialiser::Endian __values1 = pObjectX->EarthView::World::Graphic::CStreamSerialiser::getEndian();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CStreamSerialiser::Endian __values1 = pObjectX->getEndian();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1getEndian_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getEndian_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getEndian_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_StreamSerialiser_getEndian_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				EarthView::World::Graphic::CStreamSerialiser::Endian __values1 = pObjectX->EarthView::World::Graphic::CStreamSerialiser::getEndian();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_StreamSerialiser_makeIdentifier_1EVString(JNIEnv *__env , jclass __clazz, jstring code_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
				#else
				const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
				const EVString code = code_ch;
				__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
				#endif
				ev_uint32 __values1 = EarthView::World::Graphic::CStreamSerialiser::makeIdentifier(code);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_StreamSerialiser_getCurrentChunkDepth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getCurrentChunkDepth();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_StreamSerialiser_getCurrentChunkID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getCurrentChunkID();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_StreamSerialiser_getOffsetFromChunkStart_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getOffsetFromChunkStart();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_StreamSerialiser_readChunkBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					const EarthView::World::Graphic::CStreamSerialiser::Chunk* __values1 = pObjectX->EarthView::World::Graphic::CStreamSerialiser::readChunkBegin();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CStreamSerialiser::Chunk* __values1 = pObjectX->readChunkBegin();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1readChunkBegin_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readChunkBegin_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readChunkBegin_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_StreamSerialiser_readChunkBegin_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				const EarthView::World::Graphic::CStreamSerialiser::Chunk* __values1 = pObjectX->EarthView::World::Graphic::CStreamSerialiser::readChunkBegin();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_StreamSerialiser_readChunkBegin_1ev_1uint32_1ev_1uint16_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jint maxVersion_j, jstring msg_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				ev_uint16 maxVersion = (ev_uint16) maxVersion_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* msg_ch = (const ev_char*)__env->GetStringUTFChars(msg_j,JNI_FALSE);
				const EVString msg = msg_ch;
				__env->ReleaseStringUTFChars(msg_j, (const char *)msg_ch);
				#else
				const ev_wchar* msg_ch = (const ev_wchar*)__env->GetStringChars(msg_j,JNI_FALSE);
				const EVString msg = msg_ch;
				__env->ReleaseStringChars(msg_j, (const jchar *)msg_ch);
				#endif
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					const EarthView::World::Graphic::CStreamSerialiser::Chunk* __values1 = pObjectX->EarthView::World::Graphic::CStreamSerialiser::readChunkBegin(id, maxVersion, msg);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CStreamSerialiser::Chunk* __values1 = pObjectX->readChunkBegin(id, maxVersion, msg);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1readChunkBegin_1ev_1uint32_1ev_1uint16_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readChunkBegin_ev_uint32_ev_uint16_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readChunkBegin_ev_uint32_ev_uint16_EVString_callback", "(JILjava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_StreamSerialiser_readChunkBegin_1ev_1uint32_1ev_1uint16_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jint maxVersion_j, jstring msg_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				ev_uint16 maxVersion = (ev_uint16) maxVersion_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* msg_ch = (const ev_char*)__env->GetStringUTFChars(msg_j,JNI_FALSE);
				const EVString msg = msg_ch;
				__env->ReleaseStringUTFChars(msg_j, (const char *)msg_ch);
				#else
				const ev_wchar* msg_ch = (const ev_wchar*)__env->GetStringChars(msg_j,JNI_FALSE);
				const EVString msg = msg_ch;
				__env->ReleaseStringChars(msg_j, (const jchar *)msg_ch);
				#endif
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				const EarthView::World::Graphic::CStreamSerialiser::Chunk* __values1 = pObjectX->EarthView::World::Graphic::CStreamSerialiser::readChunkBegin(id, maxVersion, msg);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_StreamSerialiser_readChunkBegin_1ev_1uint32_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jint maxVersion_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				ev_uint16 maxVersion = (ev_uint16) maxVersion_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					const EarthView::World::Graphic::CStreamSerialiser::Chunk* __values1 = pObjectX->EarthView::World::Graphic::CStreamSerialiser::readChunkBegin(id, maxVersion);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CStreamSerialiser::Chunk* __values1 = pObjectX->readChunkBegin(id, maxVersion);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1readChunkBegin_1ev_1uint32_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readChunkBegin_ev_uint32_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readChunkBegin_ev_uint32_ev_uint16_callback", "(JI)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_StreamSerialiser_readChunkBegin_1ev_1uint32_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jint maxVersion_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				ev_uint16 maxVersion = (ev_uint16) maxVersion_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				const EarthView::World::Graphic::CStreamSerialiser::Chunk* __values1 = pObjectX->EarthView::World::Graphic::CStreamSerialiser::readChunkBegin(id, maxVersion);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_undoReadChunk_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					pObjectX->EarthView::World::Graphic::CStreamSerialiser::undoReadChunk(id);
				}
				else
				{
					pObjectX->undoReadChunk(id);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1undoReadChunk_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_undoReadChunk_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"undoReadChunk_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_undoReadChunk_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CStreamSerialiser::undoReadChunk(id);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_StreamSerialiser_peekNextChunkID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CStreamSerialiser::peekNextChunkID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->peekNextChunkID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1peekNextChunkID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_peekNextChunkID_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"peekNextChunkID_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_StreamSerialiser_peekNextChunkID_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CStreamSerialiser::peekNextChunkID();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_readChunkEnd_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					pObjectX->EarthView::World::Graphic::CStreamSerialiser::readChunkEnd(id);
				}
				else
				{
					pObjectX->readChunkEnd(id);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1readChunkEnd_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readChunkEnd_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readChunkEnd_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_readChunkEnd_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CStreamSerialiser::readChunkEnd(id);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_StreamSerialiser_isEndOfChunk_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CStreamSerialiser::isEndOfChunk(id);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isEndOfChunk(id);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1isEndOfChunk_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isEndOfChunk_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isEndOfChunk_ev_uint32_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_StreamSerialiser_isEndOfChunk_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CStreamSerialiser::isEndOfChunk(id);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_StreamSerialiser_eof_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CStreamSerialiser::eof();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->eof();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1eof_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_eof_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"eof_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_StreamSerialiser_eof_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CStreamSerialiser::eof();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_StreamSerialiser_getCurrentChunk_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					const EarthView::World::Graphic::CStreamSerialiser::Chunk* __values1 = pObjectX->EarthView::World::Graphic::CStreamSerialiser::getCurrentChunk();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CStreamSerialiser::Chunk* __values1 = pObjectX->getCurrentChunk();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1getCurrentChunk_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCurrentChunk_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCurrentChunk_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_StreamSerialiser_getCurrentChunk_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				const EarthView::World::Graphic::CStreamSerialiser::Chunk* __values1 = pObjectX->EarthView::World::Graphic::CStreamSerialiser::getCurrentChunk();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_writeChunkBegin_1ev_1uint32_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jint version_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				ev_uint16 version = (ev_uint16) version_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					pObjectX->EarthView::World::Graphic::CStreamSerialiser::writeChunkBegin(id, version);
				}
				else
				{
					pObjectX->writeChunkBegin(id, version);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1writeChunkBegin_1ev_1uint32_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_writeChunkBegin_ev_uint32_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"writeChunkBegin_ev_uint32_ev_uint16_callback", "(JI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_writeChunkBegin_1ev_1uint32_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jint version_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				ev_uint16 version = (ev_uint16) version_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CStreamSerialiser::writeChunkBegin(id, version);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_writeChunkBegin_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					pObjectX->EarthView::World::Graphic::CStreamSerialiser::writeChunkBegin(id);
				}
				else
				{
					pObjectX->writeChunkBegin(id);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1writeChunkBegin_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_writeChunkBegin_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"writeChunkBegin_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_writeChunkBegin_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CStreamSerialiser::writeChunkBegin(id);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_writeChunkEnd_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					pObjectX->EarthView::World::Graphic::CStreamSerialiser::writeChunkEnd(id);
				}
				else
				{
					pObjectX->writeChunkEnd(id);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1writeChunkEnd_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_writeChunkEnd_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"writeChunkEnd_ev_uint32_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_writeChunkEnd_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CStreamSerialiser::writeChunkEnd(id);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_writeData_1void_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong size_j, jlong count_j)
			{
				const void *buf = (const void*) buf_j;
				ev_size_t size = (ev_size_t) size_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					pObjectX->EarthView::World::Graphic::CStreamSerialiser::writeData(buf, size, count);
				}
				else
				{
					pObjectX->writeData(buf, size, count);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1writeData_1void_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_writeData_void_ev_size_t_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"writeData_void_ev_size_t_ev_size_t_callback", "(JJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_writeData_1void_1ev_1size_1t_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j, jlong size_j, jlong count_j)
			{
				const void *buf = (const void*) buf_j;
				ev_size_t size = (ev_size_t) size_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CStreamSerialiser::writeData(buf, size, count);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_StreamSerialiser_readChunkImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					EarthView::World::Graphic::CStreamSerialiser::Chunk* __values1 = pObjectX->EarthView::World::Graphic::CStreamSerialiser::readChunkImpl();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CStreamSerialiser::Chunk* __values1 = pObjectX->readChunkImpl();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1readChunkImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readChunkImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readChunkImpl_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_StreamSerialiser_readChunkImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				EarthView::World::Graphic::CStreamSerialiser::Chunk* __values1 = pObjectX->EarthView::World::Graphic::CStreamSerialiser::readChunkImpl();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_writeChunkImpl_1ev_1uint32_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jint version_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				ev_uint16 version = (ev_uint16) version_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					pObjectX->EarthView::World::Graphic::CStreamSerialiser::writeChunkImpl(id, version);
				}
				else
				{
					pObjectX->writeChunkImpl(id, version);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1writeChunkImpl_1ev_1uint32_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_writeChunkImpl_ev_uint32_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"writeChunkImpl_ev_uint32_ev_uint16_callback", "(JI)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_writeChunkImpl_1ev_1uint32_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jint version_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				ev_uint16 version = (ev_uint16) version_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CStreamSerialiser::writeChunkImpl(id, version);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_readHeader_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					pObjectX->EarthView::World::Graphic::CStreamSerialiser::readHeader();
				}
				else
				{
					pObjectX->readHeader();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1readHeader_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readHeader_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readHeader_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_readHeader_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CStreamSerialiser::readHeader();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_writeHeader_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					pObjectX->EarthView::World::Graphic::CStreamSerialiser::writeHeader();
				}
				else
				{
					pObjectX->writeHeader();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1writeHeader_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_writeHeader_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"writeHeader_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_writeHeader_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CStreamSerialiser::writeHeader();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_StreamSerialiser_calculateChecksum_1Chunk(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong c_j)
			{
				EarthView::World::Graphic::CStreamSerialiser::Chunk *c = (EarthView::World::Graphic::CStreamSerialiser::Chunk*) c_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CStreamSerialiser::calculateChecksum(c);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->calculateChecksum(c);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1calculateChecksum_1Chunk(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_calculateChecksum_Chunk_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"calculateChecksum_Chunk_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_StreamSerialiser_calculateChecksum_1Chunk_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong c_j)
			{
				EarthView::World::Graphic::CStreamSerialiser::Chunk *c = (EarthView::World::Graphic::CStreamSerialiser::Chunk*) c_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CStreamSerialiser::calculateChecksum(c);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_checkStream_1ev_1bool_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean failOnEof_j, jboolean validateReadable_j, jboolean validateWriteable_j)
			{
				ev_bool failOnEof = (ev_bool) failOnEof_j;
				ev_bool validateReadable = (ev_bool) validateReadable_j;
				ev_bool validateWriteable = (ev_bool) validateWriteable_j;
				const 				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					pObjectX->EarthView::World::Graphic::CStreamSerialiser::checkStream(failOnEof, validateReadable, validateWriteable);
				}
				else
				{
					pObjectX->checkStream(failOnEof, validateReadable, validateWriteable);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1checkStream_1ev_1bool_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_checkStream_ev_bool_ev_bool_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"checkStream_ev_bool_ev_bool_ev_bool_callback", "(ZZZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_checkStream_1ev_1bool_1ev_1bool_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean failOnEof_j, jboolean validateReadable_j, jboolean validateWriteable_j)
			{
				ev_bool failOnEof = (ev_bool) failOnEof_j;
				ev_bool validateReadable = (ev_bool) validateReadable_j;
				ev_bool validateWriteable = (ev_bool) validateWriteable_j;
				const 				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CStreamSerialiser::checkStream(failOnEof, validateReadable, validateWriteable);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_checkStream_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean failOnEof_j, jboolean validateReadable_j)
			{
				ev_bool failOnEof = (ev_bool) failOnEof_j;
				ev_bool validateReadable = (ev_bool) validateReadable_j;
				const 				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					pObjectX->EarthView::World::Graphic::CStreamSerialiser::checkStream(failOnEof, validateReadable);
				}
				else
				{
					pObjectX->checkStream(failOnEof, validateReadable);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1checkStream_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_checkStream_ev_bool_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"checkStream_ev_bool_ev_bool_callback", "(ZZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_checkStream_1ev_1bool_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean failOnEof_j, jboolean validateReadable_j)
			{
				ev_bool failOnEof = (ev_bool) failOnEof_j;
				ev_bool validateReadable = (ev_bool) validateReadable_j;
				const 				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CStreamSerialiser::checkStream(failOnEof, validateReadable);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_checkStream_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean failOnEof_j)
			{
				ev_bool failOnEof = (ev_bool) failOnEof_j;
				const 				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					pObjectX->EarthView::World::Graphic::CStreamSerialiser::checkStream(failOnEof);
				}
				else
				{
					pObjectX->checkStream(failOnEof);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1checkStream_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_checkStream_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"checkStream_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_checkStream_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean failOnEof_j)
			{
				ev_bool failOnEof = (ev_bool) failOnEof_j;
				const 				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CStreamSerialiser::checkStream(failOnEof);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_checkStream_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					pObjectX->EarthView::World::Graphic::CStreamSerialiser::checkStream();
				}
				else
				{
					pObjectX->checkStream();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1checkStream_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_checkStream_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"checkStream_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_checkStream_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CStreamSerialiser::checkStream();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_flipEndian_1void_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pData_j, jlong size_j, jlong count_j)
			{
				void *pData = (void*) pData_j;
				ev_size_t size = (ev_size_t) size_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					pObjectX->EarthView::World::Graphic::CStreamSerialiser::flipEndian(pData, size, count);
				}
				else
				{
					pObjectX->flipEndian(pData, size, count);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1flipEndian_1void_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_flipEndian_void_ev_size_t_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"flipEndian_void_ev_size_t_ev_size_t_callback", "(JJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_flipEndian_1void_1ev_1size_1t_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pData_j, jlong size_j, jlong count_j)
			{
				void *pData = (void*) pData_j;
				ev_size_t size = (ev_size_t) size_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CStreamSerialiser::flipEndian(pData, size, count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_flipEndian_1void_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pData_j, jlong size_j)
			{
				void *pData = (void*) pData_j;
				ev_size_t size = (ev_size_t) size_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					pObjectX->EarthView::World::Graphic::CStreamSerialiser::flipEndian(pData, size);
				}
				else
				{
					pObjectX->flipEndian(pData, size);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1flipEndian_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_flipEndian_void_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"flipEndian_void_ev_size_t_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_flipEndian_1void_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pData_j, jlong size_j)
			{
				void *pData = (void*) pData_j;
				ev_size_t size = (ev_size_t) size_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CStreamSerialiser::flipEndian(pData, size);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_determineEndianness_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					pObjectX->EarthView::World::Graphic::CStreamSerialiser::determineEndianness();
				}
				else
				{
					pObjectX->determineEndianness();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1determineEndianness_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_determineEndianness_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"determineEndianness_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_determineEndianness_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CStreamSerialiser::determineEndianness();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_StreamSerialiser_popChunk_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					EarthView::World::Graphic::CStreamSerialiser::Chunk* __values1 = pObjectX->EarthView::World::Graphic::CStreamSerialiser::popChunk(id);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CStreamSerialiser::Chunk* __values1 = pObjectX->popChunk(id);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1popChunk_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_popChunk_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"popChunk_ev_uint32_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_StreamSerialiser_popChunk_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				EarthView::World::Graphic::CStreamSerialiser::Chunk* __values1 = pObjectX->EarthView::World::Graphic::CStreamSerialiser::popChunk(id);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_writeFloatsAsDoubles_1ev_1real32_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j, jlong count_j)
			{
				const ev_real32 *val = (const ev_real32*) val_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					pObjectX->EarthView::World::Graphic::CStreamSerialiser::writeFloatsAsDoubles(val, count);
				}
				else
				{
					pObjectX->writeFloatsAsDoubles(val, count);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1writeFloatsAsDoubles_1ev_1real32_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_writeFloatsAsDoubles_ev_real32_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"writeFloatsAsDoubles_ev_real32_ev_size_t_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_writeFloatsAsDoubles_1ev_1real32_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j, jlong count_j)
			{
				const ev_real32 *val = (const ev_real32*) val_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CStreamSerialiser::writeFloatsAsDoubles(val, count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_writeDoublesAsFloats_1ev_1real64_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j, jlong count_j)
			{
				const ev_real64 *val = (const ev_real64*) val_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					pObjectX->EarthView::World::Graphic::CStreamSerialiser::writeDoublesAsFloats(val, count);
				}
				else
				{
					pObjectX->writeDoublesAsFloats(val, count);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1writeDoublesAsFloats_1ev_1real64_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_writeDoublesAsFloats_ev_real64_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"writeDoublesAsFloats_ev_real64_ev_size_t_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_writeDoublesAsFloats_1ev_1real64_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j, jlong count_j)
			{
				const ev_real64 *val = (const ev_real64*) val_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CStreamSerialiser::writeDoublesAsFloats(val, count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_readFloatsAsDoubles_1ev_1real64_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j, jlong count_j)
			{
				ev_real64 *val = (ev_real64*) val_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					pObjectX->EarthView::World::Graphic::CStreamSerialiser::readFloatsAsDoubles(val, count);
				}
				else
				{
					pObjectX->readFloatsAsDoubles(val, count);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1readFloatsAsDoubles_1ev_1real64_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readFloatsAsDoubles_ev_real64_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readFloatsAsDoubles_ev_real64_ev_size_t_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_readFloatsAsDoubles_1ev_1real64_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j, jlong count_j)
			{
				ev_real64 *val = (ev_real64*) val_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CStreamSerialiser::readFloatsAsDoubles(val, count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_readDoublesAsFloats_1ev_1real32_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j, jlong count_j)
			{
				ev_real32 *val = (ev_real32*) val_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCStreamSerialiserProxy))
				{
					pObjectX->EarthView::World::Graphic::CStreamSerialiser::readDoublesAsFloats(val, count);
				}
				else
				{
					pObjectX->readDoublesAsFloats(val, count);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_register_1readDoublesAsFloats_1ev_1real32_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCStreamSerialiserProxy *pObjectX = (JCStreamSerialiserProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readDoublesAsFloats_ev_real32_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readDoublesAsFloats_ev_real32_ev_size_t_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_StreamSerialiser_readDoublesAsFloats_1ev_1real32_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j, jlong count_j)
			{
				ev_real32 *val = (ev_real32*) val_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CStreamSerialiser *pObjectX = (EarthView::World::Graphic::CStreamSerialiser*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CStreamSerialiser::readDoublesAsFloats(val, count);
			}
		}
	}
}
