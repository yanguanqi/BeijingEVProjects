/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/modelserializer.h"
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
			class JCModelSerializerListenerProxy : public EarthView::World::Graphic::CModelSerializerListener
			{
			 private:
				EarthView::World::Core::ev_string m_processMaterialName_CMesh_EVString_callback;
				EarthView::World::Core::ev_string m_processSkeletonName_CMesh_EVString_callback;
			public:
				JCModelSerializerListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelSerializerListener(pList)
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
						return this->CModelSerializerListener::processMaterialName(mesh, name);
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
						return this->CModelSerializerListener::processSkeletonName(mesh, name);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCModelSerializerListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializerListener_processMaterialName_1CMesh_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mesh_j, jlong name_j)
			{
				EarthView::World::Graphic::CMesh *mesh = (EarthView::World::Graphic::CMesh*) mesh_j;
				EVString &name = *(EVString*) name_j;
				EarthView::World::Graphic::CModelSerializerListener *pObjectX = (EarthView::World::Graphic::CModelSerializerListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCModelSerializerListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CModelSerializerListener::processMaterialName(mesh, name);
				}
				else
				{
					pObjectX->processMaterialName(mesh, name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializerListener_register_1processMaterialName_1CMesh_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCModelSerializerListenerProxy *pObjectX = (JCModelSerializerListenerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializerListener_processMaterialName_1CMesh_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mesh_j, jlong name_j)
			{
				EarthView::World::Graphic::CMesh *mesh = (EarthView::World::Graphic::CMesh*) mesh_j;
				EVString &name = *(EVString*) name_j;
				EarthView::World::Graphic::CModelSerializerListener *pObjectX = (EarthView::World::Graphic::CModelSerializerListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CModelSerializerListener::processMaterialName(mesh, name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializerListener_processSkeletonName_1CMesh_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mesh_j, jlong name_j)
			{
				EarthView::World::Graphic::CMesh *mesh = (EarthView::World::Graphic::CMesh*) mesh_j;
				EVString &name = *(EVString*) name_j;
				EarthView::World::Graphic::CModelSerializerListener *pObjectX = (EarthView::World::Graphic::CModelSerializerListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCModelSerializerListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CModelSerializerListener::processSkeletonName(mesh, name);
				}
				else
				{
					pObjectX->processSkeletonName(mesh, name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializerListener_register_1processSkeletonName_1CMesh_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCModelSerializerListenerProxy *pObjectX = (JCModelSerializerListenerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializerListener_processSkeletonName_1CMesh_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mesh_j, jlong name_j)
			{
				EarthView::World::Graphic::CMesh *mesh = (EarthView::World::Graphic::CMesh*) mesh_j;
				EVString &name = *(EVString*) name_j;
				EarthView::World::Graphic::CModelSerializerListener *pObjectX = (EarthView::World::Graphic::CModelSerializerListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CModelSerializerListener::processSkeletonName(mesh, name);
			}
			class JCModelSerializerProxy : public EarthView::World::Graphic::CModelSerializer
			{
			 private:
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
				JCModelSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelSerializer(pList)
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
						return this->CModelSerializer::getFileExtension();
					}
				}
				virtual void importMesh(EarthView::World::Core::DataStreamPtr& stream, EarthView::World::Graphic::CMesh* pMesh, EarthView::World::Core::CommonStringPairList& miscParams)
				{
					if (this->_gRef != NULL && this->m_importMesh_DataStreamPtr_CMesh_CommonStringPairList_callback != "" && this->isCustomExtend())
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
						jlong pMesh_j = (jlong) pMesh;
						jlong miscParams_j = (jlong) &miscParams;
						jmethodID __method = __gr->getMethod("importMesh_DataStreamPtr_CMesh_CommonStringPairList_callback");
						__env->CallVoidMethod(__obj, __method , stream_j, pMesh_j, miscParams_j);
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
						return this->CModelSerializer::importMesh(stream, pMesh, miscParams);
					}
				}
				virtual void importMesh(EarthView::World::Core::DataStreamPtr& stream, EarthView::World::Graphic::CMesh* pMesh)
				{
					if (this->_gRef != NULL && this->m_importMesh_DataStreamPtr_CMesh_callback != "" && this->isCustomExtend())
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
						jlong pMesh_j = (jlong) pMesh;
						jmethodID __method = __gr->getMethod("importMesh_DataStreamPtr_CMesh_callback");
						__env->CallVoidMethod(__obj, __method , stream_j, pMesh_j);
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
						return this->CModelSerializer::importMesh(stream, pMesh);
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
						return this->CModelSerializer::writeFileHeader();
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
						return this->CModelSerializer::writeChunkHeader(id, size);
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
						return this->CModelSerializer::readFileHeader(stream);
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
						return this->CModelSerializer::readChunk(stream);
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
						return this->CModelSerializer::flipToLittleEndian(pData, size, count);
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
						return this->CModelSerializer::flipToLittleEndian(pData, size);
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
						return this->CModelSerializer::flipFromLittleEndian(pData, size, count);
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
						return this->CModelSerializer::flipFromLittleEndian(pData, size);
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
						return this->CModelSerializer::flipEndian(pData, size, count);
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
						return this->CModelSerializer::flipEndian(pData, size);
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
						return this->CModelSerializer::determineEndianness(stream);
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
						return this->CModelSerializer::determineEndianness(requestedEndian);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCModelSerializerProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ModelSerializer_getFileExtension_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CModelSerializer *pObjectX = (EarthView::World::Graphic::CModelSerializer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCModelSerializerProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CModelSerializer::getFileExtension();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializer_register_1getFileExtension_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCModelSerializerProxy *pObjectX = (JCModelSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ModelSerializer_getFileExtension_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CModelSerializer *pObjectX = (EarthView::World::Graphic::CModelSerializer*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CModelSerializer::getFileExtension();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializer_importMesh_1DataStreamPtr_1CMesh_1CommonStringPairList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jlong pMesh_j, jlong miscParams_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				EarthView::World::Graphic::CMesh *pMesh = (EarthView::World::Graphic::CMesh*) pMesh_j;
				EarthView::World::Core::CommonStringPairList &miscParams = *(EarthView::World::Core::CommonStringPairList*) miscParams_j;
				EarthView::World::Graphic::CModelSerializer *pObjectX = (EarthView::World::Graphic::CModelSerializer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCModelSerializerProxy))
				{
					pObjectX->EarthView::World::Graphic::CModelSerializer::importMesh(stream, pMesh, miscParams);
				}
				else
				{
					pObjectX->importMesh(stream, pMesh, miscParams);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializer_register_1importMesh_1DataStreamPtr_1CMesh_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCModelSerializerProxy *pObjectX = (JCModelSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializer_importMesh_1DataStreamPtr_1CMesh_1CommonStringPairList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jlong pMesh_j, jlong miscParams_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				EarthView::World::Graphic::CMesh *pMesh = (EarthView::World::Graphic::CMesh*) pMesh_j;
				EarthView::World::Core::CommonStringPairList &miscParams = *(EarthView::World::Core::CommonStringPairList*) miscParams_j;
				EarthView::World::Graphic::CModelSerializer *pObjectX = (EarthView::World::Graphic::CModelSerializer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CModelSerializer::importMesh(stream, pMesh, miscParams);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializer_importMesh_1DataStreamPtr_1CMesh(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jlong pMesh_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				EarthView::World::Graphic::CMesh *pMesh = (EarthView::World::Graphic::CMesh*) pMesh_j;
				EarthView::World::Graphic::CModelSerializer *pObjectX = (EarthView::World::Graphic::CModelSerializer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCModelSerializerProxy))
				{
					pObjectX->EarthView::World::Graphic::CModelSerializer::importMesh(stream, pMesh);
				}
				else
				{
					pObjectX->importMesh(stream, pMesh);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializer_register_1importMesh_1DataStreamPtr_1CMesh(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCModelSerializerProxy *pObjectX = (JCModelSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializer_importMesh_1DataStreamPtr_1CMesh_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jlong pMesh_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				EarthView::World::Graphic::CMesh *pMesh = (EarthView::World::Graphic::CMesh*) pMesh_j;
				EarthView::World::Graphic::CModelSerializer *pObjectX = (EarthView::World::Graphic::CModelSerializer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CModelSerializer::importMesh(stream, pMesh);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializer_setListener_1CModelSerializerListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
			{
				EarthView::World::Graphic::CModelSerializerListener *ref_listener = (EarthView::World::Graphic::CModelSerializerListener*) ref_listener_j;
				EarthView::World::Graphic::CModelSerializer *pObjectX = (EarthView::World::Graphic::CModelSerializer*) pObjXXXX;
				pObjectX->setListener(ref_listener);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ModelSerializer_getListener_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CModelSerializer *pObjectX = (EarthView::World::Graphic::CModelSerializer*) pObjXXXX;
				EarthView::World::Graphic::CModelSerializerListener* __values1 = pObjectX->getListener();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializer_register_1writeFileHeader_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCModelSerializerProxy *pObjectX = (JCModelSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializer_register_1writeChunkHeader_1ev_1uint16_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCModelSerializerProxy *pObjectX = (JCModelSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializer_register_1readFileHeader_1DataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCModelSerializerProxy *pObjectX = (JCModelSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializer_register_1readChunk_1DataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCModelSerializerProxy *pObjectX = (JCModelSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializer_register_1flipToLittleEndian_1void_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCModelSerializerProxy *pObjectX = (JCModelSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializer_register_1flipToLittleEndian_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCModelSerializerProxy *pObjectX = (JCModelSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializer_register_1flipFromLittleEndian_1void_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCModelSerializerProxy *pObjectX = (JCModelSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializer_register_1flipFromLittleEndian_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCModelSerializerProxy *pObjectX = (JCModelSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializer_register_1flipEndian_1void_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCModelSerializerProxy *pObjectX = (JCModelSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializer_register_1flipEndian_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCModelSerializerProxy *pObjectX = (JCModelSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializer_register_1determineEndianness_1DataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCModelSerializerProxy *pObjectX = (JCModelSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializer_register_1determineEndianness_1Endian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCModelSerializerProxy *pObjectX = (JCModelSerializerProxy*) pObjXXXX;
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
			class JCModelSerializerFactoryProxy : public EarthView::World::Graphic::CModelSerializerFactory
			{
			 private:
				EarthView::World::Core::ev_string m_getFileExtension_void_callback;
				EarthView::World::Core::ev_string m_createInstance_void_callback;
				EarthView::World::Core::ev_string m_destroyInstance_CModelSerializer_callback;
			public:
				JCModelSerializerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelSerializerFactory(pList)
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
						return this->CModelSerializerFactory::getFileExtension();
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
						return this->CModelSerializerFactory::createInstance();
					}
				}
				virtual void destroyInstance(EarthView::World::Graphic::CModelSerializer* pSerializer) const
				{
					if (this->_gRef != NULL && this->m_destroyInstance_CModelSerializer_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("destroyInstance_CModelSerializer_callback");
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
						return this->CModelSerializerFactory::destroyInstance(pSerializer);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCModelSerializerFactoryProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ModelSerializerFactory_getFileExtension_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CModelSerializerFactory *pObjectX = (EarthView::World::Graphic::CModelSerializerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCModelSerializerFactoryProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CModelSerializerFactory::getFileExtension();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializerFactory_register_1getFileExtension_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCModelSerializerFactoryProxy *pObjectX = (JCModelSerializerFactoryProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ModelSerializerFactory_getFileExtension_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CModelSerializerFactory *pObjectX = (EarthView::World::Graphic::CModelSerializerFactory*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CModelSerializerFactory::getFileExtension();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ModelSerializerFactory_createInstance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CModelSerializerFactory *pObjectX = (EarthView::World::Graphic::CModelSerializerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCModelSerializerFactoryProxy))
				{
					EarthView::World::Graphic::CModelSerializer* __values1 = pObjectX->EarthView::World::Graphic::CModelSerializerFactory::createInstance();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializerFactory_register_1createInstance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCModelSerializerFactoryProxy *pObjectX = (JCModelSerializerFactoryProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ModelSerializerFactory_createInstance_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CModelSerializerFactory *pObjectX = (EarthView::World::Graphic::CModelSerializerFactory*) pObjXXXX;
				EarthView::World::Graphic::CModelSerializer* __values1 = pObjectX->EarthView::World::Graphic::CModelSerializerFactory::createInstance();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializerFactory_destroyInstance_1CModelSerializer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSerializer_j)
			{
				EarthView::World::Graphic::CModelSerializer *pSerializer = (EarthView::World::Graphic::CModelSerializer*) pSerializer_j;
				const 				EarthView::World::Graphic::CModelSerializerFactory *pObjectX = (EarthView::World::Graphic::CModelSerializerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCModelSerializerFactoryProxy))
				{
					pObjectX->EarthView::World::Graphic::CModelSerializerFactory::destroyInstance(pSerializer);
				}
				else
				{
					pObjectX->destroyInstance(pSerializer);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializerFactory_register_1destroyInstance_1CModelSerializer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCModelSerializerFactoryProxy *pObjectX = (JCModelSerializerFactoryProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ModelSerializerFactory_destroyInstance_1CModelSerializer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSerializer_j)
			{
				EarthView::World::Graphic::CModelSerializer *pSerializer = (EarthView::World::Graphic::CModelSerializer*) pSerializer_j;
				const 				EarthView::World::Graphic::CModelSerializerFactory *pObjectX = (EarthView::World::Graphic::CModelSerializerFactory*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CModelSerializerFactory::destroyInstance(pSerializer);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ModelSerializerFactoryEnum_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CModelSerializerFactoryEnum& __values1 = EarthView::World::Graphic::CModelSerializerFactoryEnum::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ModelSerializerFactoryEnum_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CModelSerializerFactoryEnum* __values1 = EarthView::World::Graphic::CModelSerializerFactoryEnum::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ModelSerializerFactoryEnum_registerFactory_1CModelSerializerFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pFactory_j)
			{
				EarthView::World::Graphic::CModelSerializerFactory *ref_pFactory = (EarthView::World::Graphic::CModelSerializerFactory*) ref_pFactory_j;
				EarthView::World::Graphic::CModelSerializerFactoryEnum *pObjectX = (EarthView::World::Graphic::CModelSerializerFactoryEnum*) pObjXXXX;
				bool __values1 = pObjectX->registerFactory(ref_pFactory);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ModelSerializerFactoryEnum_getFactory_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fileExt_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* fileExt_ch = (const ev_char*)__env->GetStringUTFChars(fileExt_j,JNI_FALSE);
				const EVString fileExt = fileExt_ch;
				__env->ReleaseStringUTFChars(fileExt_j, (const char *)fileExt_ch);
				#else
				const ev_wchar* fileExt_ch = (const ev_wchar*)__env->GetStringChars(fileExt_j,JNI_FALSE);
				const EVString fileExt = fileExt_ch;
				__env->ReleaseStringChars(fileExt_j, (const jchar *)fileExt_ch);
				#endif
				EarthView::World::Graphic::CModelSerializerFactoryEnum *pObjectX = (EarthView::World::Graphic::CModelSerializerFactoryEnum*) pObjXXXX;
				EarthView::World::Graphic::CModelSerializerFactory* __values1 = pObjectX->getFactory(fileExt);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
