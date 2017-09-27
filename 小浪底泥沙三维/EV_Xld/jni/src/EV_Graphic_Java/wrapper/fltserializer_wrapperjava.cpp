/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/fltserializer.h"
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
			class JCFltSerializerListenerProxy : public EarthView::World::Graphic::CFltSerializerListener
			{
			 private:
				EarthView::World::Core::ev_string m_processMaterialName_CMesh_EVString_callback;
				EarthView::World::Core::ev_string m_processSkeletonName_CMesh_EVString_callback;
			public:
				JCFltSerializerListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CFltSerializerListener(pList)
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
				void register_processMaterialName_CMesh_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_processMaterialName_CMesh_EVString_callback = __method;
				}
				void register_processSkeletonName_CMesh_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_processSkeletonName_CMesh_EVString_callback = __method;
				}
				virtual void processMaterialName(EarthView::World::Graphic::CMesh* mesh, EVString& name)
				{
					if (this->_gRef != NULL && this->m_processMaterialName_CMesh_EVString_callback != "" && this->isCustomExtend())
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
						jlong mesh_j = (jlong) mesh;
						jlong name_j = (jlong) &name;
						jmethodID __method = __gr->getMethod("processMaterialName_CMesh_EVString_callback");
						__env->CallVoidMethod(__obj, __method , mesh_j, name_j);
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
						return this->CFltSerializerListener::processMaterialName(mesh, name);
					}
				}
				virtual void processSkeletonName(EarthView::World::Graphic::CMesh* mesh, EVString& name)
				{
					if (this->_gRef != NULL && this->m_processSkeletonName_CMesh_EVString_callback != "" && this->isCustomExtend())
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
						jlong mesh_j = (jlong) mesh;
						jlong name_j = (jlong) &name;
						jmethodID __method = __gr->getMethod("processSkeletonName_CMesh_EVString_callback");
						__env->CallVoidMethod(__obj, __method , mesh_j, name_j);
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
						return this->CFltSerializerListener::processSkeletonName(mesh, name);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCFltSerializerListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializerListener_processMaterialName_1CMesh_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mesh_j, jlong name_j)
			{
				EarthView::World::Graphic::CMesh *mesh = (EarthView::World::Graphic::CMesh*) mesh_j;
				EVString &name = *(EVString*) name_j;
				EarthView::World::Graphic::CFltSerializerListener *pObjectX = (EarthView::World::Graphic::CFltSerializerListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFltSerializerListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CFltSerializerListener::processMaterialName(mesh, name);
				}
				else
				{
					pObjectX->processMaterialName(mesh, name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializerListener_register_1processMaterialName_1CMesh_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFltSerializerListenerProxy *pObjectX = (JCFltSerializerListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_processMaterialName_CMesh_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"processMaterialName_CMesh_EVString_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializerListener_processMaterialName_1CMesh_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mesh_j, jlong name_j)
			{
				EarthView::World::Graphic::CMesh *mesh = (EarthView::World::Graphic::CMesh*) mesh_j;
				EVString &name = *(EVString*) name_j;
				EarthView::World::Graphic::CFltSerializerListener *pObjectX = (EarthView::World::Graphic::CFltSerializerListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CFltSerializerListener::processMaterialName(mesh, name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializerListener_processSkeletonName_1CMesh_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mesh_j, jlong name_j)
			{
				EarthView::World::Graphic::CMesh *mesh = (EarthView::World::Graphic::CMesh*) mesh_j;
				EVString &name = *(EVString*) name_j;
				EarthView::World::Graphic::CFltSerializerListener *pObjectX = (EarthView::World::Graphic::CFltSerializerListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFltSerializerListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CFltSerializerListener::processSkeletonName(mesh, name);
				}
				else
				{
					pObjectX->processSkeletonName(mesh, name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializerListener_register_1processSkeletonName_1CMesh_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFltSerializerListenerProxy *pObjectX = (JCFltSerializerListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_processSkeletonName_CMesh_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"processSkeletonName_CMesh_EVString_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializerListener_processSkeletonName_1CMesh_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mesh_j, jlong name_j)
			{
				EarthView::World::Graphic::CMesh *mesh = (EarthView::World::Graphic::CMesh*) mesh_j;
				EVString &name = *(EVString*) name_j;
				EarthView::World::Graphic::CFltSerializerListener *pObjectX = (EarthView::World::Graphic::CFltSerializerListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CFltSerializerListener::processSkeletonName(mesh, name);
			}
			class JCFltSerializerProxy : public EarthView::World::Graphic::CFltSerializer
			{
			 private:
				EarthView::World::Core::ev_string m_importMesh_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_callback;
				EarthView::World::Core::ev_string m_getFileExtension_void_callback;
				EarthView::World::Core::ev_string m_importMesh_DataStreamPtr_CMesh_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_importMesh_DataStreamPtr_CMesh_callback;
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
				JCFltSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CFltSerializer(pList)
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
				void register_importMesh_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_importMesh_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_callback = __method;
				}
				void register_getFileExtension_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getFileExtension_void_callback = __method;
				}
				void register_importMesh_DataStreamPtr_CMesh_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_importMesh_DataStreamPtr_CMesh_CommonStringPairList_callback = __method;
				}
				void register_importMesh_DataStreamPtr_CMesh_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_importMesh_DataStreamPtr_CMesh_callback = __method;
				}
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
				virtual EVString getFileExtension() const
				{
					if (this->_gRef != NULL && this->m_getFileExtension_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getFileExtension_void_callback");
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
						return this->CFltSerializer::getFileExtension();
					}
				}
				virtual void importMesh(const EVString& filePath, EarthView::World::Graphic::CMesh* pMesh, EarthView::World::Core::MemoryDataStreamPtr& aniStream, EarthView::World::Core::MemoryDataStreamPtr& skeletonStream)
				{
					if (this->_gRef != NULL && this->m_importMesh_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring filePath_wch = filePath;
						jstring filePath_j = __env->NewString((const jchar*)filePath_wch.getString(), filePath_wch.size());
						jlong pMesh_j = (jlong) pMesh;
						jlong aniStream_j = (jlong) &aniStream;
						jlong skeletonStream_j = (jlong) &skeletonStream;
						jmethodID __method = __gr->getMethod("importMesh_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_callback");
						__env->CallVoidMethod(__obj, __method , filePath_j, pMesh_j, aniStream_j, skeletonStream_j);
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
						return this->CFltSerializer::importMesh(filePath, pMesh, aniStream, skeletonStream);
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
						return this->CFltSerializer::writeFileHeader();
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
						return this->CFltSerializer::writeChunkHeader(id, size);
					}
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
						return this->CFltSerializer::readFileHeader(stream);
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
						return this->CFltSerializer::readChunk(stream);
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
						return this->CFltSerializer::flipToLittleEndian(pData, size, count);
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
						return this->CFltSerializer::flipToLittleEndian(pData, size);
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
						return this->CFltSerializer::flipFromLittleEndian(pData, size, count);
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
						return this->CFltSerializer::flipFromLittleEndian(pData, size);
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
						return this->CFltSerializer::flipEndian(pData, size, count);
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
						return this->CFltSerializer::flipEndian(pData, size);
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
						return this->CFltSerializer::determineEndianness(stream);
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
						return this->CFltSerializer::determineEndianness(requestedEndian);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCFltSerializerProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_FltSerializer_getFileExtension_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CFltSerializer *pObjectX = (EarthView::World::Graphic::CFltSerializer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFltSerializerProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CFltSerializer::getFileExtension();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getFileExtension();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializer_register_1getFileExtension_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFltSerializerProxy *pObjectX = (JCFltSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getFileExtension_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getFileExtension_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_FltSerializer_getFileExtension_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CFltSerializer *pObjectX = (EarthView::World::Graphic::CFltSerializer*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CFltSerializer::getFileExtension();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializer_importMesh_1EVString_1CMesh_1MemoryDataStreamPtr_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filePath_j, jlong pMesh_j, jlong aniStream_j, jlong skeletonStream_j)
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
				EarthView::World::Graphic::CMesh *pMesh = (EarthView::World::Graphic::CMesh*) pMesh_j;
				EarthView::World::Core::MemoryDataStreamPtr &aniStream = *(EarthView::World::Core::MemoryDataStreamPtr*) aniStream_j;
				EarthView::World::Core::MemoryDataStreamPtr &skeletonStream = *(EarthView::World::Core::MemoryDataStreamPtr*) skeletonStream_j;
				EarthView::World::Graphic::CFltSerializer *pObjectX = (EarthView::World::Graphic::CFltSerializer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFltSerializerProxy))
				{
					pObjectX->EarthView::World::Graphic::CFltSerializer::importMesh(filePath, pMesh, aniStream, skeletonStream);
				}
				else
				{
					pObjectX->importMesh(filePath, pMesh, aniStream, skeletonStream);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializer_register_1importMesh_1EVString_1CMesh_1MemoryDataStreamPtr_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFltSerializerProxy *pObjectX = (JCFltSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_importMesh_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"importMesh_EVString_CMesh_MemoryDataStreamPtr_MemoryDataStreamPtr_callback", "(Ljava/lang/String;JJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializer_importMesh_1EVString_1CMesh_1MemoryDataStreamPtr_1MemoryDataStreamPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filePath_j, jlong pMesh_j, jlong aniStream_j, jlong skeletonStream_j)
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
				EarthView::World::Graphic::CMesh *pMesh = (EarthView::World::Graphic::CMesh*) pMesh_j;
				EarthView::World::Core::MemoryDataStreamPtr &aniStream = *(EarthView::World::Core::MemoryDataStreamPtr*) aniStream_j;
				EarthView::World::Core::MemoryDataStreamPtr &skeletonStream = *(EarthView::World::Core::MemoryDataStreamPtr*) skeletonStream_j;
				EarthView::World::Graphic::CFltSerializer *pObjectX = (EarthView::World::Graphic::CFltSerializer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CFltSerializer::importMesh(filePath, pMesh, aniStream, skeletonStream);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializer_setCompositorAllSubmesh_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean b_j)
			{
				const ev_bool b = (ev_bool) b_j;
				EarthView::World::Graphic::CFltSerializer *pObjectX = (EarthView::World::Graphic::CFltSerializer*) pObjXXXX;
				pObjectX->setCompositorAllSubmesh(b);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializer_setAlphaRejection_1ev_1byte(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort alphaRejection_j)
			{
				ev_byte alphaRejection = (ev_byte) alphaRejection_j;
				EarthView::World::Graphic::CFltSerializer *pObjectX = (EarthView::World::Graphic::CFltSerializer*) pObjXXXX;
				pObjectX->setAlphaRejection(alphaRejection);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_FltSerializer_flt2mesh_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fltFile_j, jstring desFolder_j, jboolean toDDS_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* fltFile_ch = (const ev_char*)__env->GetStringUTFChars(fltFile_j,JNI_FALSE);
				const EVString fltFile = fltFile_ch;
				__env->ReleaseStringUTFChars(fltFile_j, (const char *)fltFile_ch);
				#else
				const ev_wchar* fltFile_ch = (const ev_wchar*)__env->GetStringChars(fltFile_j,JNI_FALSE);
				const EVString fltFile = fltFile_ch;
				__env->ReleaseStringChars(fltFile_j, (const jchar *)fltFile_ch);
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
				ev_bool toDDS = (ev_bool) toDDS_j;
				EarthView::World::Graphic::CFltSerializer *pObjectX = (EarthView::World::Graphic::CFltSerializer*) pObjXXXX;
				ev_bool __values1 = pObjectX->flt2mesh(fltFile, desFolder, toDDS);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializer_useDoubleSideLight_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean doubleSideLight_j)
			{
				ev_bool doubleSideLight = (ev_bool) doubleSideLight_j;
				EarthView::World::Graphic::CFltSerializer *pObjectX = (EarthView::World::Graphic::CFltSerializer*) pObjXXXX;
				pObjectX->useDoubleSideLight(doubleSideLight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializer_setLocalMatrix_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong localMatrix_j)
			{
				EarthView::World::Spatial::Math::CMatrix4 localMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) localMatrix_j;
				EarthView::World::Graphic::CFltSerializer *pObjectX = (EarthView::World::Graphic::CFltSerializer*) pObjXXXX;
				pObjectX->setLocalMatrix(localMatrix);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializer_register_1importMesh_1DataStreamPtr_1CMesh_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFltSerializerProxy *pObjectX = (JCFltSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_importMesh_DataStreamPtr_CMesh_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"importMesh_DataStreamPtr_CMesh_CommonStringPairList_callback", "(JJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializer_register_1importMesh_1DataStreamPtr_1CMesh(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFltSerializerProxy *pObjectX = (JCFltSerializerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_importMesh_DataStreamPtr_CMesh_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"importMesh_DataStreamPtr_CMesh_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializer_register_1writeFileHeader_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFltSerializerProxy *pObjectX = (JCFltSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializer_register_1writeChunkHeader_1ev_1uint16_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFltSerializerProxy *pObjectX = (JCFltSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializer_register_1readFileHeader_1DataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFltSerializerProxy *pObjectX = (JCFltSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializer_register_1readChunk_1DataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFltSerializerProxy *pObjectX = (JCFltSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializer_register_1flipToLittleEndian_1void_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFltSerializerProxy *pObjectX = (JCFltSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializer_register_1flipToLittleEndian_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFltSerializerProxy *pObjectX = (JCFltSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializer_register_1flipFromLittleEndian_1void_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFltSerializerProxy *pObjectX = (JCFltSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializer_register_1flipFromLittleEndian_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFltSerializerProxy *pObjectX = (JCFltSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializer_register_1flipEndian_1void_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFltSerializerProxy *pObjectX = (JCFltSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializer_register_1flipEndian_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFltSerializerProxy *pObjectX = (JCFltSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializer_register_1determineEndianness_1DataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFltSerializerProxy *pObjectX = (JCFltSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializer_register_1determineEndianness_1Endian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFltSerializerProxy *pObjectX = (JCFltSerializerProxy*) pObjXXXX;
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
			class JCFltSerializerFactoryProxy : public EarthView::World::Graphic::CFltSerializerFactory
			{
			 private:
				EarthView::World::Core::ev_string m_destroyInstance_CFltSerializer_callback;
				EarthView::World::Core::ev_string m_getFileExtension_void_callback;
				EarthView::World::Core::ev_string m_createInstance_void_callback;
				EarthView::World::Core::ev_string m_destroyInstance_CModelSerializer_callback;
			public:
				JCFltSerializerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CFltSerializerFactory(pList)
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
				void register_destroyInstance_CFltSerializer_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyInstance_CFltSerializer_callback = __method;
				}
				void register_getFileExtension_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getFileExtension_void_callback = __method;
				}
				void register_createInstance_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createInstance_void_callback = __method;
				}
				void register_destroyInstance_CModelSerializer_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyInstance_CModelSerializer_callback = __method;
				}
				virtual EVString getFileExtension() const
				{
					if (this->_gRef != NULL && this->m_getFileExtension_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getFileExtension_void_callback");
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
						return this->CFltSerializerFactory::getFileExtension();
					}
				}
				virtual EarthView::World::Graphic::CModelSerializer* createInstance() const
				{
					if (this->_gRef != NULL && this->m_createInstance_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("createInstance_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CModelSerializer *__values1 = (EarthView::World::Graphic::CModelSerializer*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CFltSerializerFactory::createInstance();
					}
				}
				virtual void destroyInstance(EarthView::World::Graphic::CFltSerializer* pSerializer) const
				{
					if (this->_gRef != NULL && this->m_destroyInstance_CFltSerializer_callback != "" && this->isCustomExtend())
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
						jlong pSerializer_j = (jlong) pSerializer;
						jmethodID __method = __gr->getMethod("destroyInstance_CFltSerializer_callback");
						__env->CallVoidMethod(__obj, __method , pSerializer_j);
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
						return this->CFltSerializerFactory::destroyInstance(pSerializer);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCFltSerializerFactoryProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_FltSerializerFactory_getFileExtension_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CFltSerializerFactory *pObjectX = (EarthView::World::Graphic::CFltSerializerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFltSerializerFactoryProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CFltSerializerFactory::getFileExtension();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getFileExtension();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializerFactory_register_1getFileExtension_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFltSerializerFactoryProxy *pObjectX = (JCFltSerializerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getFileExtension_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getFileExtension_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_FltSerializerFactory_getFileExtension_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CFltSerializerFactory *pObjectX = (EarthView::World::Graphic::CFltSerializerFactory*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CFltSerializerFactory::getFileExtension();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FltSerializerFactory_createInstance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CFltSerializerFactory *pObjectX = (EarthView::World::Graphic::CFltSerializerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFltSerializerFactoryProxy))
				{
					EarthView::World::Graphic::CModelSerializer* __values1 = pObjectX->EarthView::World::Graphic::CFltSerializerFactory::createInstance();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CModelSerializer* __values1 = pObjectX->createInstance();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializerFactory_register_1createInstance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFltSerializerFactoryProxy *pObjectX = (JCFltSerializerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createInstance_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createInstance_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_FltSerializerFactory_createInstance_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CFltSerializerFactory *pObjectX = (EarthView::World::Graphic::CFltSerializerFactory*) pObjXXXX;
				EarthView::World::Graphic::CModelSerializer* __values1 = pObjectX->EarthView::World::Graphic::CFltSerializerFactory::createInstance();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializerFactory_destroyInstance_1CFltSerializer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSerializer_j)
			{
				EarthView::World::Graphic::CFltSerializer *pSerializer = (EarthView::World::Graphic::CFltSerializer*) pSerializer_j;
				const 				EarthView::World::Graphic::CFltSerializerFactory *pObjectX = (EarthView::World::Graphic::CFltSerializerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCFltSerializerFactoryProxy))
				{
					pObjectX->EarthView::World::Graphic::CFltSerializerFactory::destroyInstance(pSerializer);
				}
				else
				{
					pObjectX->destroyInstance(pSerializer);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializerFactory_register_1destroyInstance_1CFltSerializer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFltSerializerFactoryProxy *pObjectX = (JCFltSerializerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyInstance_CFltSerializer_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyInstance_CFltSerializer_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializerFactory_destroyInstance_1CFltSerializer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSerializer_j)
			{
				EarthView::World::Graphic::CFltSerializer *pSerializer = (EarthView::World::Graphic::CFltSerializer*) pSerializer_j;
				const 				EarthView::World::Graphic::CFltSerializerFactory *pObjectX = (EarthView::World::Graphic::CFltSerializerFactory*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CFltSerializerFactory::destroyInstance(pSerializer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_FltSerializerFactory_register_1destroyInstance_1CModelSerializer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCFltSerializerFactoryProxy *pObjectX = (JCFltSerializerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyInstance_CModelSerializer_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyInstance_CModelSerializer_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
