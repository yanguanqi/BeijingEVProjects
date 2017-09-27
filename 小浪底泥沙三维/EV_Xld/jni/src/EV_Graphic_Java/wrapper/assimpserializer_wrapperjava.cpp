/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/assimpserializer.h"
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
			class JCAssimpSerializerListenerProxy : public EarthView::World::Graphic::CAssimpSerializerListener
			{
			 private:
				EarthView::World::Core::ev_string m_processMaterialName_CMesh_EVString_callback;
				EarthView::World::Core::ev_string m_processSkeletonName_CMesh_EVString_callback;
			public:
				JCAssimpSerializerListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CAssimpSerializerListener(pList)
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
						return this->CAssimpSerializerListener::processMaterialName(mesh, name);
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
						return this->CAssimpSerializerListener::processSkeletonName(mesh, name);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCAssimpSerializerListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializerListener_processMaterialName_1CMesh_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mesh_j, jlong name_j)
			{
				EarthView::World::Graphic::CMesh *mesh = (EarthView::World::Graphic::CMesh*) mesh_j;
				EVString &name = *(EVString*) name_j;
				EarthView::World::Graphic::CAssimpSerializerListener *pObjectX = (EarthView::World::Graphic::CAssimpSerializerListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAssimpSerializerListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CAssimpSerializerListener::processMaterialName(mesh, name);
				}
				else
				{
					pObjectX->processMaterialName(mesh, name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializerListener_register_1processMaterialName_1CMesh_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAssimpSerializerListenerProxy *pObjectX = (JCAssimpSerializerListenerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializerListener_processMaterialName_1CMesh_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mesh_j, jlong name_j)
			{
				EarthView::World::Graphic::CMesh *mesh = (EarthView::World::Graphic::CMesh*) mesh_j;
				EVString &name = *(EVString*) name_j;
				EarthView::World::Graphic::CAssimpSerializerListener *pObjectX = (EarthView::World::Graphic::CAssimpSerializerListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAssimpSerializerListener::processMaterialName(mesh, name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializerListener_processSkeletonName_1CMesh_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mesh_j, jlong name_j)
			{
				EarthView::World::Graphic::CMesh *mesh = (EarthView::World::Graphic::CMesh*) mesh_j;
				EVString &name = *(EVString*) name_j;
				EarthView::World::Graphic::CAssimpSerializerListener *pObjectX = (EarthView::World::Graphic::CAssimpSerializerListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAssimpSerializerListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CAssimpSerializerListener::processSkeletonName(mesh, name);
				}
				else
				{
					pObjectX->processSkeletonName(mesh, name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializerListener_register_1processSkeletonName_1CMesh_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAssimpSerializerListenerProxy *pObjectX = (JCAssimpSerializerListenerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializerListener_processSkeletonName_1CMesh_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mesh_j, jlong name_j)
			{
				EarthView::World::Graphic::CMesh *mesh = (EarthView::World::Graphic::CMesh*) mesh_j;
				EVString &name = *(EVString*) name_j;
				EarthView::World::Graphic::CAssimpSerializerListener *pObjectX = (EarthView::World::Graphic::CAssimpSerializerListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAssimpSerializerListener::processSkeletonName(mesh, name);
			}
			class JCAssimpToMeshListenerProxy : public EarthView::World::Graphic::CAssimpToMeshListener
			{
			 private:
				EarthView::World::Core::ev_string m_beforeWriteToFile_CMeshPtr_callback;
				EarthView::World::Core::ev_string m_beforeWriteTo7Z_MeshStream_callback;
			public:
				JCAssimpToMeshListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CAssimpToMeshListener(pList)
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
				void register_beforeWriteToFile_CMeshPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_beforeWriteToFile_CMeshPtr_callback = __method;
				}
				void register_beforeWriteTo7Z_MeshStream_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_beforeWriteTo7Z_MeshStream_callback = __method;
				}
				virtual void beforeWriteToFile(const EarthView::World::Graphic::CMeshPtr& meshPtr)
				{
					if (this->_gRef != NULL && this->m_beforeWriteToFile_CMeshPtr_callback != "" && this->isCustomExtend())
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
						jlong meshPtr_j = (jlong) &meshPtr;
						jmethodID __method = __gr->getMethod("beforeWriteToFile_CMeshPtr_callback");
						__env->CallVoidMethod(__obj, __method , meshPtr_j);
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
						return this->CAssimpToMeshListener::beforeWriteToFile(meshPtr);
					}
				}
				virtual void beforeWriteTo7Z(EarthView::World::Spatial::MeshStream& m7zStream)
				{
					if (this->_gRef != NULL && this->m_beforeWriteTo7Z_MeshStream_callback != "" && this->isCustomExtend())
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
						jlong m7zStream_j = (jlong) &m7zStream;
						jmethodID __method = __gr->getMethod("beforeWriteTo7Z_MeshStream_callback");
						__env->CallVoidMethod(__obj, __method , m7zStream_j);
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
						return this->CAssimpToMeshListener::beforeWriteTo7Z(m7zStream);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCAssimpToMeshListenerProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpToMeshListener_beforeWriteToFile_1CMeshPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshPtr_j)
			{
				const EarthView::World::Graphic::CMeshPtr &meshPtr = *(EarthView::World::Graphic::CMeshPtr*) meshPtr_j;
				EarthView::World::Graphic::CAssimpToMeshListener *pObjectX = (EarthView::World::Graphic::CAssimpToMeshListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAssimpToMeshListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CAssimpToMeshListener::beforeWriteToFile(meshPtr);
				}
				else
				{
					pObjectX->beforeWriteToFile(meshPtr);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpToMeshListener_register_1beforeWriteToFile_1CMeshPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAssimpToMeshListenerProxy *pObjectX = (JCAssimpToMeshListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_beforeWriteToFile_CMeshPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"beforeWriteToFile_CMeshPtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpToMeshListener_beforeWriteToFile_1CMeshPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong meshPtr_j)
			{
				const EarthView::World::Graphic::CMeshPtr &meshPtr = *(EarthView::World::Graphic::CMeshPtr*) meshPtr_j;
				EarthView::World::Graphic::CAssimpToMeshListener *pObjectX = (EarthView::World::Graphic::CAssimpToMeshListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAssimpToMeshListener::beforeWriteToFile(meshPtr);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpToMeshListener_beforeWriteTo7Z_1MeshStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong m7zStream_j)
			{
				EarthView::World::Spatial::MeshStream &m7zStream = *(EarthView::World::Spatial::MeshStream*) m7zStream_j;
				EarthView::World::Graphic::CAssimpToMeshListener *pObjectX = (EarthView::World::Graphic::CAssimpToMeshListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAssimpToMeshListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CAssimpToMeshListener::beforeWriteTo7Z(m7zStream);
				}
				else
				{
					pObjectX->beforeWriteTo7Z(m7zStream);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpToMeshListener_register_1beforeWriteTo7Z_1MeshStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAssimpToMeshListenerProxy *pObjectX = (JCAssimpToMeshListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_beforeWriteTo7Z_MeshStream_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"beforeWriteTo7Z_MeshStream_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpToMeshListener_beforeWriteTo7Z_1MeshStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong m7zStream_j)
			{
				EarthView::World::Spatial::MeshStream &m7zStream = *(EarthView::World::Spatial::MeshStream*) m7zStream_j;
				EarthView::World::Graphic::CAssimpToMeshListener *pObjectX = (EarthView::World::Graphic::CAssimpToMeshListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAssimpToMeshListener::beforeWriteTo7Z(m7zStream);
			}
			class JCAssimpSerializerProxy : public EarthView::World::Graphic::CAssimpSerializer
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
				JCAssimpSerializerProxy(EarthView::World::Core::CNameValuePairList *pList) : CAssimpSerializer(pList)
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
						return this->CAssimpSerializer::getFileExtension();
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
						return this->CAssimpSerializer::importMesh(filePath, pMesh, aniStream, skeletonStream);
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
						return this->CAssimpSerializer::writeFileHeader();
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
						return this->CAssimpSerializer::writeChunkHeader(id, size);
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
						return this->CAssimpSerializer::readFileHeader(stream);
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
						return this->CAssimpSerializer::readChunk(stream);
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
						return this->CAssimpSerializer::flipToLittleEndian(pData, size, count);
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
						return this->CAssimpSerializer::flipToLittleEndian(pData, size);
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
						return this->CAssimpSerializer::flipFromLittleEndian(pData, size, count);
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
						return this->CAssimpSerializer::flipFromLittleEndian(pData, size);
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
						return this->CAssimpSerializer::flipEndian(pData, size, count);
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
						return this->CAssimpSerializer::flipEndian(pData, size);
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
						return this->CAssimpSerializer::determineEndianness(stream);
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
						return this->CAssimpSerializer::determineEndianness(requestedEndian);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCAssimpSerializerProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_AssimpSerializer_getFileExtension_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAssimpSerializer *pObjectX = (EarthView::World::Graphic::CAssimpSerializer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAssimpSerializerProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CAssimpSerializer::getFileExtension();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_register_1getFileExtension_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAssimpSerializerProxy *pObjectX = (JCAssimpSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_AssimpSerializer_getFileExtension_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAssimpSerializer *pObjectX = (EarthView::World::Graphic::CAssimpSerializer*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CAssimpSerializer::getFileExtension();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_useDoubleSideLight_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean doubleSideLight_j)
			{
				ev_bool doubleSideLight = (ev_bool) doubleSideLight_j;
				EarthView::World::Graphic::CAssimpSerializer *pObjectX = (EarthView::World::Graphic::CAssimpSerializer*) pObjXXXX;
				pObjectX->useDoubleSideLight(doubleSideLight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_setIsLeftHand_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isLeftHand_j)
			{
				ev_bool isLeftHand = (ev_bool) isLeftHand_j;
				EarthView::World::Graphic::CAssimpSerializer *pObjectX = (EarthView::World::Graphic::CAssimpSerializer*) pObjXXXX;
				pObjectX->setIsLeftHand(isLeftHand);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_importMesh_1EVString_1CMesh_1MemoryDataStreamPtr_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filePath_j, jlong pMesh_j, jlong aniStream_j, jlong skeletonStream_j)
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
				EarthView::World::Graphic::CAssimpSerializer *pObjectX = (EarthView::World::Graphic::CAssimpSerializer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAssimpSerializerProxy))
				{
					pObjectX->EarthView::World::Graphic::CAssimpSerializer::importMesh(filePath, pMesh, aniStream, skeletonStream);
				}
				else
				{
					pObjectX->importMesh(filePath, pMesh, aniStream, skeletonStream);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_register_1importMesh_1EVString_1CMesh_1MemoryDataStreamPtr_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAssimpSerializerProxy *pObjectX = (JCAssimpSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_importMesh_1EVString_1CMesh_1MemoryDataStreamPtr_1MemoryDataStreamPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filePath_j, jlong pMesh_j, jlong aniStream_j, jlong skeletonStream_j)
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
				EarthView::World::Graphic::CAssimpSerializer *pObjectX = (EarthView::World::Graphic::CAssimpSerializer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAssimpSerializer::importMesh(filePath, pMesh, aniStream, skeletonStream);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_setAlphaRejection_1ev_1byte(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort alphaRejection_j)
			{
				ev_byte alphaRejection = (ev_byte) alphaRejection_j;
				EarthView::World::Graphic::CAssimpSerializer *pObjectX = (EarthView::World::Graphic::CAssimpSerializer*) pObjXXXX;
				pObjectX->setAlphaRejection(alphaRejection);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_setCompositorAllSubmesh_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean b_j)
			{
				const ev_bool b = (ev_bool) b_j;
				EarthView::World::Graphic::CAssimpSerializer *pObjectX = (EarthView::World::Graphic::CAssimpSerializer*) pObjXXXX;
				pObjectX->setCompositorAllSubmesh(b);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_setExportNormal_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean exportNormal_j)
			{
				ev_bool exportNormal = (ev_bool) exportNormal_j;
				EarthView::World::Graphic::CAssimpSerializer *pObjectX = (EarthView::World::Graphic::CAssimpSerializer*) pObjXXXX;
				pObjectX->setExportNormal(exportNormal);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_setOptimizeVertex_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean optimizeVertex_j)
			{
				ev_bool optimizeVertex = (ev_bool) optimizeVertex_j;
				EarthView::World::Graphic::CAssimpSerializer *pObjectX = (EarthView::World::Graphic::CAssimpSerializer*) pObjXXXX;
				pObjectX->setOptimizeVertex(optimizeVertex);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_setLocalMatrix_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong localMatrix_j)
			{
				EarthView::World::Spatial::Math::CMatrix4 localMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) localMatrix_j;
				EarthView::World::Graphic::CAssimpSerializer *pObjectX = (EarthView::World::Graphic::CAssimpSerializer*) pObjXXXX;
				pObjectX->setLocalMatrix(localMatrix);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AssimpSerializer_assimp2mesh_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring daeFile_j, jstring desFolder_j, jboolean toDDS_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* daeFile_ch = (const ev_char*)__env->GetStringUTFChars(daeFile_j,JNI_FALSE);
				const EVString daeFile = daeFile_ch;
				__env->ReleaseStringUTFChars(daeFile_j, (const char *)daeFile_ch);
				#else
				const ev_wchar* daeFile_ch = (const ev_wchar*)__env->GetStringChars(daeFile_j,JNI_FALSE);
				const EVString daeFile = daeFile_ch;
				__env->ReleaseStringChars(daeFile_j, (const jchar *)daeFile_ch);
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
				EarthView::World::Graphic::CAssimpSerializer *pObjectX = (EarthView::World::Graphic::CAssimpSerializer*) pObjXXXX;
				ev_bool __values1 = pObjectX->assimp2mesh(daeFile, desFolder, toDDS);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AssimpSerializer_assimp2mesh2_1EVString_1EVString_1ev_1bool_1CAssimpToMeshListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring daeFile_j, jstring desFolder_j, jboolean toDDS_j, jlong listener_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* daeFile_ch = (const ev_char*)__env->GetStringUTFChars(daeFile_j,JNI_FALSE);
				const EVString daeFile = daeFile_ch;
				__env->ReleaseStringUTFChars(daeFile_j, (const char *)daeFile_ch);
				#else
				const ev_wchar* daeFile_ch = (const ev_wchar*)__env->GetStringChars(daeFile_j,JNI_FALSE);
				const EVString daeFile = daeFile_ch;
				__env->ReleaseStringChars(daeFile_j, (const jchar *)daeFile_ch);
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
				EarthView::World::Graphic::CAssimpToMeshListener *listener = (EarthView::World::Graphic::CAssimpToMeshListener*) listener_j;
				EarthView::World::Graphic::CAssimpSerializer *pObjectX = (EarthView::World::Graphic::CAssimpSerializer*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->assimp2mesh2(daeFile, desFolder, toDDS, listener);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AssimpSerializer_assimp2mesh2_1no_1initresource_1EVString_1EVString_1ev_1bool_1CAssimpToMeshListener_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring daeFile_j, jstring desFolder_j, jboolean toDDS_j, jlong listener_j, jstring resourceGroup_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* daeFile_ch = (const ev_char*)__env->GetStringUTFChars(daeFile_j,JNI_FALSE);
				const EVString daeFile = daeFile_ch;
				__env->ReleaseStringUTFChars(daeFile_j, (const char *)daeFile_ch);
				#else
				const ev_wchar* daeFile_ch = (const ev_wchar*)__env->GetStringChars(daeFile_j,JNI_FALSE);
				const EVString daeFile = daeFile_ch;
				__env->ReleaseStringChars(daeFile_j, (const jchar *)daeFile_ch);
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
				EarthView::World::Graphic::CAssimpToMeshListener *listener = (EarthView::World::Graphic::CAssimpToMeshListener*) listener_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resourceGroup_ch = (const ev_char*)__env->GetStringUTFChars(resourceGroup_j,JNI_FALSE);
				const EVString resourceGroup = resourceGroup_ch;
				__env->ReleaseStringUTFChars(resourceGroup_j, (const char *)resourceGroup_ch);
				#else
				const ev_wchar* resourceGroup_ch = (const ev_wchar*)__env->GetStringChars(resourceGroup_j,JNI_FALSE);
				const EVString resourceGroup = resourceGroup_ch;
				__env->ReleaseStringChars(resourceGroup_j, (const jchar *)resourceGroup_ch);
				#endif
				EarthView::World::Graphic::CAssimpSerializer *pObjectX = (EarthView::World::Graphic::CAssimpSerializer*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->assimp2mesh2_no_initresource(daeFile, desFolder, toDDS, listener, resourceGroup);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AssimpSerializer_assimp2mesh2_17z_1no_1initresource_1EVString_1EVString_1ev_1bool_1CAssimpToMeshListener_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring daeFile_j, jstring desFolder_j, jboolean toDDS_j, jlong listener_j, jstring resourceGroup_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* daeFile_ch = (const ev_char*)__env->GetStringUTFChars(daeFile_j,JNI_FALSE);
				const EVString daeFile = daeFile_ch;
				__env->ReleaseStringUTFChars(daeFile_j, (const char *)daeFile_ch);
				#else
				const ev_wchar* daeFile_ch = (const ev_wchar*)__env->GetStringChars(daeFile_j,JNI_FALSE);
				const EVString daeFile = daeFile_ch;
				__env->ReleaseStringChars(daeFile_j, (const jchar *)daeFile_ch);
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
				EarthView::World::Graphic::CAssimpToMeshListener *listener = (EarthView::World::Graphic::CAssimpToMeshListener*) listener_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* resourceGroup_ch = (const ev_char*)__env->GetStringUTFChars(resourceGroup_j,JNI_FALSE);
				const EVString resourceGroup = resourceGroup_ch;
				__env->ReleaseStringUTFChars(resourceGroup_j, (const char *)resourceGroup_ch);
				#else
				const ev_wchar* resourceGroup_ch = (const ev_wchar*)__env->GetStringChars(resourceGroup_j,JNI_FALSE);
				const EVString resourceGroup = resourceGroup_ch;
				__env->ReleaseStringChars(resourceGroup_j, (const jchar *)resourceGroup_ch);
				#endif
				EarthView::World::Graphic::CAssimpSerializer *pObjectX = (EarthView::World::Graphic::CAssimpSerializer*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->assimp2mesh2_7z_no_initresource(daeFile, desFolder, toDDS, listener, resourceGroup);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_getSourceTextureNames_1EVString_1CStringArray(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring daeFile_j, jlong textures_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* daeFile_ch = (const ev_char*)__env->GetStringUTFChars(daeFile_j,JNI_FALSE);
				const EVString daeFile = daeFile_ch;
				__env->ReleaseStringUTFChars(daeFile_j, (const char *)daeFile_ch);
				#else
				const ev_wchar* daeFile_ch = (const ev_wchar*)__env->GetStringChars(daeFile_j,JNI_FALSE);
				const EVString daeFile = daeFile_ch;
				__env->ReleaseStringChars(daeFile_j, (const jchar *)daeFile_ch);
				#endif
				EarthView::World::Core::CStringArray &textures = *(EarthView::World::Core::CStringArray*) textures_j;
				EarthView::World::Graphic::CAssimpSerializer *pObjectX = (EarthView::World::Graphic::CAssimpSerializer*) pObjXXXX;
				pObjectX->getSourceTextureNames(daeFile, textures);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_exportMesh_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring meshFilePath_j, jstring exportFilePath_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* meshFilePath_ch = (const ev_char*)__env->GetStringUTFChars(meshFilePath_j,JNI_FALSE);
				EVString meshFilePath = meshFilePath_ch;
				__env->ReleaseStringUTFChars(meshFilePath_j, (const char *)meshFilePath_ch);
				#else
				const ev_wchar* meshFilePath_ch = (const ev_wchar*)__env->GetStringChars(meshFilePath_j,JNI_FALSE);
				EVString meshFilePath = meshFilePath_ch;
				__env->ReleaseStringChars(meshFilePath_j, (const jchar *)meshFilePath_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* exportFilePath_ch = (const ev_char*)__env->GetStringUTFChars(exportFilePath_j,JNI_FALSE);
				const EVString exportFilePath = exportFilePath_ch;
				__env->ReleaseStringUTFChars(exportFilePath_j, (const char *)exportFilePath_ch);
				#else
				const ev_wchar* exportFilePath_ch = (const ev_wchar*)__env->GetStringChars(exportFilePath_j,JNI_FALSE);
				const EVString exportFilePath = exportFilePath_ch;
				__env->ReleaseStringChars(exportFilePath_j, (const jchar *)exportFilePath_ch);
				#endif
				EarthView::World::Graphic::CAssimpSerializer *pObjectX = (EarthView::World::Graphic::CAssimpSerializer*) pObjXXXX;
				pObjectX->exportMesh(meshFilePath, exportFilePath);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_exportMesh_1CMesh_1DataStreamPtr_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMesh_j, jlong aniDataPtr_j, jstring exportFilePath_j, jboolean exportFromLocal_j)
			{
				EarthView::World::Graphic::CMesh *pMesh = (EarthView::World::Graphic::CMesh*) pMesh_j;
				EarthView::World::Core::DataStreamPtr aniDataPtr = *(EarthView::World::Core::DataStreamPtr*) aniDataPtr_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* exportFilePath_ch = (const ev_char*)__env->GetStringUTFChars(exportFilePath_j,JNI_FALSE);
				const EVString exportFilePath = exportFilePath_ch;
				__env->ReleaseStringUTFChars(exportFilePath_j, (const char *)exportFilePath_ch);
				#else
				const ev_wchar* exportFilePath_ch = (const ev_wchar*)__env->GetStringChars(exportFilePath_j,JNI_FALSE);
				const EVString exportFilePath = exportFilePath_ch;
				__env->ReleaseStringChars(exportFilePath_j, (const jchar *)exportFilePath_ch);
				#endif
				const ev_bool exportFromLocal = (const ev_bool) exportFromLocal_j;
				EarthView::World::Graphic::CAssimpSerializer *pObjectX = (EarthView::World::Graphic::CAssimpSerializer*) pObjXXXX;
				pObjectX->exportMesh(pMesh, aniDataPtr, exportFilePath, exportFromLocal);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AssimpSerializer_isValidExportFormat_1CMesh_1DataStreamPtr_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pMesh_j, jlong aniDataPtr_j, jstring exportFilePath_j, jlong isValidFormat_j, jboolean exportFromLocal_j)
			{
				EarthView::World::Graphic::CMesh *pMesh = (EarthView::World::Graphic::CMesh*) pMesh_j;
				EarthView::World::Core::DataStreamPtr aniDataPtr = *(EarthView::World::Core::DataStreamPtr*) aniDataPtr_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* exportFilePath_ch = (const ev_char*)__env->GetStringUTFChars(exportFilePath_j,JNI_FALSE);
				const EVString exportFilePath = exportFilePath_ch;
				__env->ReleaseStringUTFChars(exportFilePath_j, (const char *)exportFilePath_ch);
				#else
				const ev_wchar* exportFilePath_ch = (const ev_wchar*)__env->GetStringChars(exportFilePath_j,JNI_FALSE);
				const EVString exportFilePath = exportFilePath_ch;
				__env->ReleaseStringChars(exportFilePath_j, (const jchar *)exportFilePath_ch);
				#endif
				ev_bool &isValidFormat = *(ev_bool*) isValidFormat_j;
				const ev_bool exportFromLocal = (const ev_bool) exportFromLocal_j;
				EarthView::World::Graphic::CAssimpSerializer *pObjectX = (EarthView::World::Graphic::CAssimpSerializer*) pObjXXXX;
				ev_bool __values1 = pObjectX->isValidExportFormat(pMesh, aniDataPtr, exportFilePath, isValidFormat, exportFromLocal);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AssimpSerializer_isValidExportFormat_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring meshFilePath_j, jstring exportFilePath_j, jlong isValidFormat_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* meshFilePath_ch = (const ev_char*)__env->GetStringUTFChars(meshFilePath_j,JNI_FALSE);
				EVString meshFilePath = meshFilePath_ch;
				__env->ReleaseStringUTFChars(meshFilePath_j, (const char *)meshFilePath_ch);
				#else
				const ev_wchar* meshFilePath_ch = (const ev_wchar*)__env->GetStringChars(meshFilePath_j,JNI_FALSE);
				EVString meshFilePath = meshFilePath_ch;
				__env->ReleaseStringChars(meshFilePath_j, (const jchar *)meshFilePath_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* exportFilePath_ch = (const ev_char*)__env->GetStringUTFChars(exportFilePath_j,JNI_FALSE);
				const EVString exportFilePath = exportFilePath_ch;
				__env->ReleaseStringUTFChars(exportFilePath_j, (const char *)exportFilePath_ch);
				#else
				const ev_wchar* exportFilePath_ch = (const ev_wchar*)__env->GetStringChars(exportFilePath_j,JNI_FALSE);
				const EVString exportFilePath = exportFilePath_ch;
				__env->ReleaseStringChars(exportFilePath_j, (const jchar *)exportFilePath_ch);
				#endif
				ev_bool &isValidFormat = *(ev_bool*) isValidFormat_j;
				EarthView::World::Graphic::CAssimpSerializer *pObjectX = (EarthView::World::Graphic::CAssimpSerializer*) pObjXXXX;
				ev_bool __values1 = pObjectX->isValidExportFormat(meshFilePath, exportFilePath, isValidFormat);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_register_1importMesh_1DataStreamPtr_1CMesh_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAssimpSerializerProxy *pObjectX = (JCAssimpSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_register_1importMesh_1DataStreamPtr_1CMesh(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAssimpSerializerProxy *pObjectX = (JCAssimpSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_register_1writeFileHeader_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAssimpSerializerProxy *pObjectX = (JCAssimpSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_register_1writeChunkHeader_1ev_1uint16_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAssimpSerializerProxy *pObjectX = (JCAssimpSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_register_1readFileHeader_1DataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAssimpSerializerProxy *pObjectX = (JCAssimpSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_register_1readChunk_1DataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAssimpSerializerProxy *pObjectX = (JCAssimpSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_register_1flipToLittleEndian_1void_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAssimpSerializerProxy *pObjectX = (JCAssimpSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_register_1flipToLittleEndian_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAssimpSerializerProxy *pObjectX = (JCAssimpSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_register_1flipFromLittleEndian_1void_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAssimpSerializerProxy *pObjectX = (JCAssimpSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_register_1flipFromLittleEndian_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAssimpSerializerProxy *pObjectX = (JCAssimpSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_register_1flipEndian_1void_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAssimpSerializerProxy *pObjectX = (JCAssimpSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_register_1flipEndian_1void_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAssimpSerializerProxy *pObjectX = (JCAssimpSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_register_1determineEndianness_1DataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAssimpSerializerProxy *pObjectX = (JCAssimpSerializerProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializer_register_1determineEndianness_1Endian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAssimpSerializerProxy *pObjectX = (JCAssimpSerializerProxy*) pObjXXXX;
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
			class JCAssimpSerializerFactoryProxy : public EarthView::World::Graphic::CAssimpSerializerFactory
			{
			 private:
				EarthView::World::Core::ev_string m_destroyInstance_CAssimpSerializer_callback;
				EarthView::World::Core::ev_string m_getFileExtension_void_callback;
				EarthView::World::Core::ev_string m_createInstance_void_callback;
				EarthView::World::Core::ev_string m_destroyInstance_CModelSerializer_callback;
			public:
				JCAssimpSerializerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CAssimpSerializerFactory(pList)
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
				void register_destroyInstance_CAssimpSerializer_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyInstance_CAssimpSerializer_callback = __method;
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
						return this->CAssimpSerializerFactory::getFileExtension();
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
						return this->CAssimpSerializerFactory::createInstance();
					}
				}
				virtual void destroyInstance(EarthView::World::Graphic::CAssimpSerializer* pSerializer) const
				{
					if (this->_gRef != NULL && this->m_destroyInstance_CAssimpSerializer_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("destroyInstance_CAssimpSerializer_callback");
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
						return this->CAssimpSerializerFactory::destroyInstance(pSerializer);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCAssimpSerializerFactoryProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_AssimpSerializerFactory_getFileExtension_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAssimpSerializerFactory *pObjectX = (EarthView::World::Graphic::CAssimpSerializerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAssimpSerializerFactoryProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CAssimpSerializerFactory::getFileExtension();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializerFactory_register_1getFileExtension_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAssimpSerializerFactoryProxy *pObjectX = (JCAssimpSerializerFactoryProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_AssimpSerializerFactory_getFileExtension_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAssimpSerializerFactory *pObjectX = (EarthView::World::Graphic::CAssimpSerializerFactory*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CAssimpSerializerFactory::getFileExtension();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AssimpSerializerFactory_createInstance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAssimpSerializerFactory *pObjectX = (EarthView::World::Graphic::CAssimpSerializerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAssimpSerializerFactoryProxy))
				{
					EarthView::World::Graphic::CModelSerializer* __values1 = pObjectX->EarthView::World::Graphic::CAssimpSerializerFactory::createInstance();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializerFactory_register_1createInstance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAssimpSerializerFactoryProxy *pObjectX = (JCAssimpSerializerFactoryProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AssimpSerializerFactory_createInstance_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAssimpSerializerFactory *pObjectX = (EarthView::World::Graphic::CAssimpSerializerFactory*) pObjXXXX;
				EarthView::World::Graphic::CModelSerializer* __values1 = pObjectX->EarthView::World::Graphic::CAssimpSerializerFactory::createInstance();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializerFactory_destroyInstance_1CAssimpSerializer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSerializer_j)
			{
				EarthView::World::Graphic::CAssimpSerializer *pSerializer = (EarthView::World::Graphic::CAssimpSerializer*) pSerializer_j;
				const 				EarthView::World::Graphic::CAssimpSerializerFactory *pObjectX = (EarthView::World::Graphic::CAssimpSerializerFactory*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAssimpSerializerFactoryProxy))
				{
					pObjectX->EarthView::World::Graphic::CAssimpSerializerFactory::destroyInstance(pSerializer);
				}
				else
				{
					pObjectX->destroyInstance(pSerializer);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializerFactory_register_1destroyInstance_1CAssimpSerializer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAssimpSerializerFactoryProxy *pObjectX = (JCAssimpSerializerFactoryProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyInstance_CAssimpSerializer_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyInstance_CAssimpSerializer_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializerFactory_destroyInstance_1CAssimpSerializer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSerializer_j)
			{
				EarthView::World::Graphic::CAssimpSerializer *pSerializer = (EarthView::World::Graphic::CAssimpSerializer*) pSerializer_j;
				const 				EarthView::World::Graphic::CAssimpSerializerFactory *pObjectX = (EarthView::World::Graphic::CAssimpSerializerFactory*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAssimpSerializerFactory::destroyInstance(pSerializer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AssimpSerializerFactory_register_1destroyInstance_1CModelSerializer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAssimpSerializerFactoryProxy *pObjectX = (JCAssimpSerializerFactoryProxy*) pObjXXXX;
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
