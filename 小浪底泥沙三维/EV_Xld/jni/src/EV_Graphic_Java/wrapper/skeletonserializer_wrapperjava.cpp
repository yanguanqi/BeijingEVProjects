/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/skeletonserializer.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_SkeletonVersionHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					SKELETON_VERSION_1_0,
					SKELETON_VERSION_1_8,
					SKELETON_VERSION_LATEST,
					SKELETON_VERSION_X_SPECIAL
				};
				jintArray array = __env->NewIntArray(4);
				__env->SetIntArrayRegion(array, 0, 4, enum_values);
				return array;
			}
			class JCSkeletonSerializerProxy : public EarthView::World::Graphic::CSkeletonSerializer
			{
			 private:
				EarthView::World::Core::ev_string m_writeFileHeader_void_callback;
				EarthView::World::Core::ev_string m_writeChunkHeader_ev_uint16_ev_size_t_callback;
				EarthView::World::Core::ev_string m_readFileHeader_DataStreamPtr_callback;
				EarthView::World::Core::ev_string m_readChunk_DataStreamPtr_callback;
				EarthView::World::Core::ev_string m_flipToLittleEndian_void_ev_size_t_ev_size_t_callback;
				EarthView::World::Core::ev_string m_flipToLittleEndian_void_ev_size_t_callback;
				EarthView::World::Core::ev_string m_flipFromLittleEndian_void_ev_size_t_ev_size_t_callback;
				EarthView::World::Core::ev_string m_flipFromLittleEndian_void_ev_size_t_callback;
				EarthView::World::Core::ev_string m_flipEndian_void_ev_size_t_ev_size_t_callback;
				EarthView::World::Core::ev_string m_flipEndian_void_ev_size_t_callback;
				EarthView::World::Core::ev_string m_determineEndianness_DataStreamPtr_callback;
				EarthView::World::Core::ev_string m_determineEndianness_Endian_callback;
			public:
				JCSkeletonSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CSkeletonSerializer(pList)
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
				void register_writeFileHeader_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_writeFileHeader_void_callback = __method;
				}
				void register_writeChunkHeader_ev_uint16_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_writeChunkHeader_ev_uint16_ev_size_t_callback = __method;
				}
				void register_readFileHeader_DataStreamPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readFileHeader_DataStreamPtr_callback = __method;
				}
				void register_readChunk_DataStreamPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_readChunk_DataStreamPtr_callback = __method;
				}
				void register_flipToLittleEndian_void_ev_size_t_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_flipToLittleEndian_void_ev_size_t_ev_size_t_callback = __method;
				}
				void register_flipToLittleEndian_void_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_flipToLittleEndian_void_ev_size_t_callback = __method;
				}
				void register_flipFromLittleEndian_void_ev_size_t_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_flipFromLittleEndian_void_ev_size_t_ev_size_t_callback = __method;
				}
				void register_flipFromLittleEndian_void_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_flipFromLittleEndian_void_ev_size_t_callback = __method;
				}
				void register_flipEndian_void_ev_size_t_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_flipEndian_void_ev_size_t_ev_size_t_callback = __method;
				}
				void register_flipEndian_void_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_flipEndian_void_ev_size_t_callback = __method;
				}
				void register_determineEndianness_DataStreamPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_determineEndianness_DataStreamPtr_callback = __method;
				}
				void register_determineEndianness_Endian_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_determineEndianness_Endian_callback = __method;
				}
				virtual void readFileHeader(EarthView::World::Core::DataStreamPtr& stream)
				{
					if (this->_gRef != NULL && this->m_readFileHeader_DataStreamPtr_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("readFileHeader_DataStreamPtr_callback");
						__env->CallVoidMethod(__obj, __method , stream_j);
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
						return this->CSkeletonSerializer::readFileHeader(stream);
					}
				}
				virtual void writeFileHeader()
				{
					if (this->_gRef != NULL && this->m_writeFileHeader_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("writeFileHeader_void_callback");
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
						return this->CSkeletonSerializer::writeFileHeader();
					}
				}
				virtual void writeChunkHeader(ev_uint16 id, ev_size_t size)
				{
					if (this->_gRef != NULL && this->m_writeChunkHeader_ev_uint16_ev_size_t_callback != "" && this->isCustomExtend())
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
						jint id_j = (jint) id;
						jlong size_j = (jlong) size;
						jmethodID __method = __gr->getMethod("writeChunkHeader_ev_uint16_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , id_j, size_j);
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
						return this->CSkeletonSerializer::writeChunkHeader(id, size);
					}
				}
				virtual ev_uint16 readChunk(EarthView::World::Core::DataStreamPtr& stream)
				{
					if (this->_gRef != NULL && this->m_readChunk_DataStreamPtr_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("readChunk_DataStreamPtr_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , stream_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint16 __values1 = (ev_uint16) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSkeletonSerializer::readChunk(stream);
					}
				}
				virtual void flipToLittleEndian(void* pData, ev_size_t size, ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_flipToLittleEndian_void_ev_size_t_ev_size_t_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("flipToLittleEndian_void_ev_size_t_ev_size_t_callback");
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
						return this->CSkeletonSerializer::flipToLittleEndian(pData, size, count);
					}
				}
				virtual void flipToLittleEndian(void* pData, ev_size_t size)
				{
					if (this->_gRef != NULL && this->m_flipToLittleEndian_void_ev_size_t_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("flipToLittleEndian_void_ev_size_t_callback");
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
						return this->CSkeletonSerializer::flipToLittleEndian(pData, size);
					}
				}
				virtual void flipFromLittleEndian(void* pData, ev_size_t size, ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_flipFromLittleEndian_void_ev_size_t_ev_size_t_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("flipFromLittleEndian_void_ev_size_t_ev_size_t_callback");
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
						return this->CSkeletonSerializer::flipFromLittleEndian(pData, size, count);
					}
				}
				virtual void flipFromLittleEndian(void* pData, ev_size_t size)
				{
					if (this->_gRef != NULL && this->m_flipFromLittleEndian_void_ev_size_t_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("flipFromLittleEndian_void_ev_size_t_callback");
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
						return this->CSkeletonSerializer::flipFromLittleEndian(pData, size);
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
						return this->CSkeletonSerializer::flipEndian(pData, size, count);
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
						return this->CSkeletonSerializer::flipEndian(pData, size);
					}
				}
				virtual void determineEndianness(EarthView::World::Core::DataStreamPtr& stream)
				{
					if (this->_gRef != NULL && this->m_determineEndianness_DataStreamPtr_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("determineEndianness_DataStreamPtr_callback");
						__env->CallVoidMethod(__obj, __method , stream_j);
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
						return this->CSkeletonSerializer::determineEndianness(stream);
					}
				}
				virtual void determineEndianness(EarthView::World::Graphic::CSerializer::Endian requestedEndian)
				{
					if (this->_gRef != NULL && this->m_determineEndianness_Endian_callback != "" && this->isCustomExtend())
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
						jint requestedEndian_j = (jint) requestedEndian;
						jmethodID __method = __gr->getMethod("determineEndianness_Endian_callback");
						__env->CallVoidMethod(__obj, __method , requestedEndian_j);
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
						return this->CSkeletonSerializer::determineEndianness(requestedEndian);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCSkeletonSerializerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SkeletonSerializer_exportSkeleton_1CSkeleton_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSkeleton_j, jstring filename_j)
			{
				const EarthView::World::Graphic::CSkeleton *pSkeleton = (const EarthView::World::Graphic::CSkeleton*) pSkeleton_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Graphic::CSkeletonSerializer *pObjectX = (EarthView::World::Graphic::CSkeletonSerializer*) pObjXXXX;
				pObjectX->exportSkeleton(pSkeleton, filename);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SkeletonSerializer_exportSkeleton_1CSkeleton_1EVString_1SkeletonVersion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSkeleton_j, jstring filename_j, jint ver_j)
			{
				const EarthView::World::Graphic::CSkeleton *pSkeleton = (const EarthView::World::Graphic::CSkeleton*) pSkeleton_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Graphic::SkeletonVersion ver = (EarthView::World::Graphic::SkeletonVersion) ver_j;
				EarthView::World::Graphic::CSkeletonSerializer *pObjectX = (EarthView::World::Graphic::CSkeletonSerializer*) pObjXXXX;
				pObjectX->exportSkeleton(pSkeleton, filename, ver);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SkeletonSerializer_exportSkeleton_1CSkeleton_1EVString_1SkeletonVersion_1Endian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSkeleton_j, jstring filename_j, jint ver_j, jint endianMode_j)
			{
				const EarthView::World::Graphic::CSkeleton *pSkeleton = (const EarthView::World::Graphic::CSkeleton*) pSkeleton_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Graphic::SkeletonVersion ver = (EarthView::World::Graphic::SkeletonVersion) ver_j;
				EarthView::World::Graphic::CSerializer::Endian endianMode = (EarthView::World::Graphic::CSerializer::Endian) endianMode_j;
				EarthView::World::Graphic::CSkeletonSerializer *pObjectX = (EarthView::World::Graphic::CSkeletonSerializer*) pObjXXXX;
				pObjectX->exportSkeleton(pSkeleton, filename, ver, endianMode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SkeletonSerializer_exportSkeleton_1CSkeleton_1DataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSkeleton_j, jlong stream_j)
			{
				const EarthView::World::Graphic::CSkeleton *pSkeleton = (const EarthView::World::Graphic::CSkeleton*) pSkeleton_j;
				EarthView::World::Core::DataStreamPtr stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				EarthView::World::Graphic::CSkeletonSerializer *pObjectX = (EarthView::World::Graphic::CSkeletonSerializer*) pObjXXXX;
				pObjectX->exportSkeleton(pSkeleton, stream);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SkeletonSerializer_exportSkeleton_1CSkeleton_1DataStreamPtr_1SkeletonVersion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSkeleton_j, jlong stream_j, jint ver_j)
			{
				const EarthView::World::Graphic::CSkeleton *pSkeleton = (const EarthView::World::Graphic::CSkeleton*) pSkeleton_j;
				EarthView::World::Core::DataStreamPtr stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				EarthView::World::Graphic::SkeletonVersion ver = (EarthView::World::Graphic::SkeletonVersion) ver_j;
				EarthView::World::Graphic::CSkeletonSerializer *pObjectX = (EarthView::World::Graphic::CSkeletonSerializer*) pObjXXXX;
				pObjectX->exportSkeleton(pSkeleton, stream, ver);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SkeletonSerializer_exportSkeleton_1CSkeleton_1DataStreamPtr_1SkeletonVersion_1Endian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSkeleton_j, jlong stream_j, jint ver_j, jint endianMode_j)
			{
				const EarthView::World::Graphic::CSkeleton *pSkeleton = (const EarthView::World::Graphic::CSkeleton*) pSkeleton_j;
				EarthView::World::Core::DataStreamPtr stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				EarthView::World::Graphic::SkeletonVersion ver = (EarthView::World::Graphic::SkeletonVersion) ver_j;
				EarthView::World::Graphic::CSerializer::Endian endianMode = (EarthView::World::Graphic::CSerializer::Endian) endianMode_j;
				EarthView::World::Graphic::CSkeletonSerializer *pObjectX = (EarthView::World::Graphic::CSkeletonSerializer*) pObjXXXX;
				pObjectX->exportSkeleton(pSkeleton, stream, ver, endianMode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SkeletonSerializer_importSkeleton_1DataStreamPtr_1CSkeleton(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jlong pDest_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				EarthView::World::Graphic::CSkeleton *pDest = (EarthView::World::Graphic::CSkeleton*) pDest_j;
				EarthView::World::Graphic::CSkeletonSerializer *pObjectX = (EarthView::World::Graphic::CSkeletonSerializer*) pObjXXXX;
				pObjectX->importSkeleton(stream, pDest);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SkeletonSerializer_readFileHeader_1DataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				EarthView::World::Graphic::CSkeletonSerializer *pObjectX = (EarthView::World::Graphic::CSkeletonSerializer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSkeletonSerializerProxy))
				{
					pObjectX->EarthView::World::Graphic::CSkeletonSerializer::readFileHeader(stream);
				}
				else
				{
					pObjectX->readFileHeader(stream);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SkeletonSerializer_register_1readFileHeader_1DataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonSerializerProxy *pObjectX = (JCSkeletonSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readFileHeader_DataStreamPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readFileHeader_DataStreamPtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SkeletonSerializer_readFileHeader_1DataStreamPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				EarthView::World::Graphic::CSkeletonSerializer *pObjectX = (EarthView::World::Graphic::CSkeletonSerializer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSkeletonSerializer::readFileHeader(stream);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SkeletonSerializer_register_1writeFileHeader_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonSerializerProxy *pObjectX = (JCSkeletonSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_writeFileHeader_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"writeFileHeader_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SkeletonSerializer_register_1writeChunkHeader_1ev_1uint16_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonSerializerProxy *pObjectX = (JCSkeletonSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_writeChunkHeader_ev_uint16_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"writeChunkHeader_ev_uint16_ev_size_t_callback", "(IJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SkeletonSerializer_register_1readChunk_1DataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonSerializerProxy *pObjectX = (JCSkeletonSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_readChunk_DataStreamPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"readChunk_DataStreamPtr_callback", "(J)I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SkeletonSerializer_register_1flipToLittleEndian_1void_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonSerializerProxy *pObjectX = (JCSkeletonSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_flipToLittleEndian_void_ev_size_t_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"flipToLittleEndian_void_ev_size_t_ev_size_t_callback", "(JJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SkeletonSerializer_register_1flipToLittleEndian_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonSerializerProxy *pObjectX = (JCSkeletonSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_flipToLittleEndian_void_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"flipToLittleEndian_void_ev_size_t_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SkeletonSerializer_register_1flipFromLittleEndian_1void_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonSerializerProxy *pObjectX = (JCSkeletonSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_flipFromLittleEndian_void_ev_size_t_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"flipFromLittleEndian_void_ev_size_t_ev_size_t_callback", "(JJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SkeletonSerializer_register_1flipFromLittleEndian_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonSerializerProxy *pObjectX = (JCSkeletonSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_flipFromLittleEndian_void_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"flipFromLittleEndian_void_ev_size_t_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SkeletonSerializer_register_1flipEndian_1void_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonSerializerProxy *pObjectX = (JCSkeletonSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SkeletonSerializer_register_1flipEndian_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonSerializerProxy *pObjectX = (JCSkeletonSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SkeletonSerializer_register_1determineEndianness_1DataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonSerializerProxy *pObjectX = (JCSkeletonSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_determineEndianness_DataStreamPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"determineEndianness_DataStreamPtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SkeletonSerializer_register_1determineEndianness_1Endian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSkeletonSerializerProxy *pObjectX = (JCSkeletonSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_determineEndianness_Endian_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"determineEndianness_Endian_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
