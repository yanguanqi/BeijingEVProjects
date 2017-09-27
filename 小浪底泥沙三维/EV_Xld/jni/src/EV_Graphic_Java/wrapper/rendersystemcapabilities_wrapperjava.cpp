/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/rendersystemcapabilities.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_CapabilitiesCategoryHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CAPS_CATEGORY_COMMON,
					CAPS_CATEGORY_COMMON_2,
					CAPS_CATEGORY_D3D9,
					CAPS_CATEGORY_GL,
					CAPS_CATEGORY_COUNT
				};
				jintArray array = __env->NewIntArray(5);
				__env->SetIntArrayRegion(array, 0, 5, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_CapabilitiesHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					RSC_AUTOMIPMAP,
					RSC_BLENDING,
					RSC_ANISOTROPY,
					RSC_DOT3,
					RSC_CUBEMAPPING,
					RSC_HWSTENCIL,
					RSC_VBO,
					RSC_VERTEX_PROGRAM,
					RSC_FRAGMENT_PROGRAM,
					RSC_SCISSOR_TEST,
					RSC_TWO_SIDED_STENCIL,
					RSC_STENCIL_WRAP,
					RSC_HWOCCLUSION,
					RSC_USER_CLIP_PLANES,
					RSC_VERTEX_FORMAT_UBYTE4,
					RSC_INFINITE_FAR_PLANE,
					RSC_HWRENDER_TO_TEXTURE,
					RSC_TEXTURE_FLOAT,
					RSC_NON_POWER_OF_2_TEXTURES,
					RSC_TEXTURE_3D,
					RSC_POINT_SPRITES,
					RSC_POINT_EXTENDED_PARAMETERS,
					RSC_VERTEX_TEXTURE_FETCH,
					RSC_MIPMAP_LOD_BIAS,
					RSC_GEOMETRY_PROGRAM,
					RSC_HWRENDER_TO_VERTEX_BUFFER,
					RSC_TEXTURE_COMPRESSION,
					RSC_TEXTURE_COMPRESSION_DXT,
					RSC_TEXTURE_COMPRESSION_VTC,
					RSC_TEXTURE_COMPRESSION_PVRTC,
					RSC_FIXED_FUNCTION,
					RSC_MRT_DIFFERENT_BIT_DEPTHS,
					RSC_ALPHA_TO_COVERAGE,
					RSC_ADVANCED_BLEND_OPERATIONS,
					RSC_RTT_SEPARATE_DEPTHBUFFER,
					RSC_RTT_MAIN_DEPTHBUFFER_ATTACHABLE,
					RSC_RTT_DEPTHBUFFER_RESOLUTION_LESSEQUAL,
					RSC_VERTEX_BUFFER_INSTANCE_DATA,
					RSC_CAN_GET_COMPILED_SHADER_BUFFER,
					RSC_PERSTAGECONSTANT,
					RSC_GL1_5_NOVBO,
					RSC_FBO,
					RSC_FBO_ARB,
					RSC_FBO_ATI,
					RSC_PBUFFER,
					RSC_GL1_5_NOHWOCCLUSION,
					RSC_POINT_EXTENDED_PARAMETERS_ARB,
					RSC_POINT_EXTENDED_PARAMETERS_EXT,
					RSC_SEPARATE_SHADER_OBJECTS
				};
				jintArray array = __env->NewIntArray(49);
				__env->SetIntArrayRegion(array, 0, 49, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_DriverVersion_get_1major_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::DriverVersion *pObjectX = (EarthView::World::Graphic::DriverVersion*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->major);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DriverVersion_set_1major_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::DriverVersion *pObjectX = (EarthView::World::Graphic::DriverVersion*)pObjXXXX;
				pObjectX->major = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_DriverVersion_get_1minor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::DriverVersion *pObjectX = (EarthView::World::Graphic::DriverVersion*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->minor);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DriverVersion_set_1minor_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::DriverVersion *pObjectX = (EarthView::World::Graphic::DriverVersion*)pObjXXXX;
				pObjectX->minor = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_DriverVersion_get_1release_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::DriverVersion *pObjectX = (EarthView::World::Graphic::DriverVersion*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->release);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DriverVersion_set_1release_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::DriverVersion *pObjectX = (EarthView::World::Graphic::DriverVersion*)pObjXXXX;
				pObjectX->release = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_DriverVersion_get_1build_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::DriverVersion *pObjectX = (EarthView::World::Graphic::DriverVersion*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->build);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DriverVersion_set_1build_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::DriverVersion *pObjectX = (EarthView::World::Graphic::DriverVersion*)pObjXXXX;
				pObjectX->build = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_DriverVersion_ev_1toString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::DriverVersion *pObjectX = (EarthView::World::Graphic::DriverVersion*) pObjXXXX;
				EVString __values1 = pObjectX->toString();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DriverVersion_fromString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring versionString_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* versionString_ch = (const ev_char*)__env->GetStringUTFChars(versionString_j,JNI_FALSE);
				const EVString versionString = versionString_ch;
				__env->ReleaseStringUTFChars(versionString_j, (const char *)versionString_ch);
				#else
				const ev_wchar* versionString_ch = (const ev_wchar*)__env->GetStringChars(versionString_j,JNI_FALSE);
				const EVString versionString = versionString_ch;
				__env->ReleaseStringChars(versionString_j, (const jchar *)versionString_ch);
				#endif
				EarthView::World::Graphic::DriverVersion *pObjectX = (EarthView::World::Graphic::DriverVersion*) pObjXXXX;
				pObjectX->fromString(versionString);
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_GPUVendorHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					GPU_UNKNOWN,
					GPU_NVIDIA,
					GPU_ATI,
					GPU_INTEL,
					GPU_S3,
					GPU_MATROX,
					GPU_3DLABS,
					GPU_SIS,
					GPU_IMAGINATION_TECHNOLOGIES,
					GPU_APPLE,
					GPU_NOKIA,
					GPU_MS_SOFTWARE,
					GPU_MS_WARP,
					GPU_VENDOR_COUNT
				};
				jintArray array = __env->NewIntArray(14);
				__env->SetIntArrayRegion(array, 0, 14, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ShaderProfiles_push_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::ShaderProfiles *pObjectX = (EarthView::World::Graphic::ShaderProfiles*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ShaderProfiles_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::ShaderProfiles *pObjectX = (EarthView::World::Graphic::ShaderProfiles*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShaderProfiles_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
				EarthView::World::Graphic::ShaderProfiles *pObjectX = (EarthView::World::Graphic::ShaderProfiles*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ShaderProfiles_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ShaderProfiles *pObjectX = (EarthView::World::Graphic::ShaderProfiles*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ShaderProfiles_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ShaderProfiles *pObjectX = (EarthView::World::Graphic::ShaderProfiles*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ShaderProfiles_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ShaderProfiles *pObjectX = (EarthView::World::Graphic::ShaderProfiles*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			class JCRenderSystemCapabilitiesProxy : public EarthView::World::Graphic::CRenderSystemCapabilities
			{
			 private:
				EarthView::World::Core::ev_string m_calculateSize_void_callback;
			public:
				JCRenderSystemCapabilitiesProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderSystemCapabilities(pList)
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
				void register_calculateSize_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_calculateSize_void_callback = __method;
				}
				virtual ev_size_t calculateSize() const
				{
					if (this->_gRef != NULL && this->m_calculateSize_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("calculateSize_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CRenderSystemCapabilities::calculateSize();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCRenderSystemCapabilitiesProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_calculateSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderSystemCapabilitiesProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CRenderSystemCapabilities::calculateSize();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->calculateSize();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_register_1calculateSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderSystemCapabilitiesProxy *pObjectX = (JCRenderSystemCapabilitiesProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_calculateSize_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"calculateSize_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_calculateSize_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CRenderSystemCapabilities::calculateSize();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setDriverVersion_1DriverVersion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong version_j)
			{
				const EarthView::World::Graphic::DriverVersion &version = *(EarthView::World::Graphic::DriverVersion*) version_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setDriverVersion(version);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_parseDriverVersionFromString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring versionString_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* versionString_ch = (const ev_char*)__env->GetStringUTFChars(versionString_j,JNI_FALSE);
				const EVString versionString = versionString_ch;
				__env->ReleaseStringUTFChars(versionString_j, (const char *)versionString_ch);
				#else
				const ev_wchar* versionString_ch = (const ev_wchar*)__env->GetStringChars(versionString_j,JNI_FALSE);
				const EVString versionString = versionString_ch;
				__env->ReleaseStringChars(versionString_j, (const jchar *)versionString_ch);
				#endif
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->parseDriverVersionFromString(versionString);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_getDriverVersion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				EarthView::World::Graphic::DriverVersion __values1 = pObjectX->getDriverVersion();
				EarthView::World::Graphic::DriverVersion *returnvalues = new EarthView::World::Graphic::DriverVersion(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_getVendor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				EarthView::World::Graphic::GPUVendor __values1 = pObjectX->getVendor();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setVendor_1GPUVendor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint v_j)
			{
				EarthView::World::Graphic::GPUVendor v = (EarthView::World::Graphic::GPUVendor) v_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setVendor(v);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_parseVendorFromString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring vendorString_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* vendorString_ch = (const ev_char*)__env->GetStringUTFChars(vendorString_j,JNI_FALSE);
				const EVString vendorString = vendorString_ch;
				__env->ReleaseStringUTFChars(vendorString_j, (const char *)vendorString_ch);
				#else
				const ev_wchar* vendorString_ch = (const ev_wchar*)__env->GetStringChars(vendorString_j,JNI_FALSE);
				const EVString vendorString = vendorString_ch;
				__env->ReleaseStringChars(vendorString_j, (const jchar *)vendorString_ch);
				#endif
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->parseVendorFromString(vendorString);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_vendorFromString_1EVString(JNIEnv *__env , jclass __clazz, jstring vendorString_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* vendorString_ch = (const ev_char*)__env->GetStringUTFChars(vendorString_j,JNI_FALSE);
				const EVString vendorString = vendorString_ch;
				__env->ReleaseStringUTFChars(vendorString_j, (const char *)vendorString_ch);
				#else
				const ev_wchar* vendorString_ch = (const ev_wchar*)__env->GetStringChars(vendorString_j,JNI_FALSE);
				const EVString vendorString = vendorString_ch;
				__env->ReleaseStringChars(vendorString_j, (const jchar *)vendorString_ch);
				#endif
				EarthView::World::Graphic::GPUVendor __values1 = EarthView::World::Graphic::CRenderSystemCapabilities::vendorFromString(vendorString);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_vendorToString_1GPUVendor(JNIEnv *__env , jclass __clazz, jint v_j)
			{
				EarthView::World::Graphic::GPUVendor v = (EarthView::World::Graphic::GPUVendor) v_j;
				EVString __values1 = EarthView::World::Graphic::CRenderSystemCapabilities::vendorToString(v);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_isDriverOlderThanVersion_1DriverVersion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong v_j)
			{
				EarthView::World::Graphic::DriverVersion v = *(EarthView::World::Graphic::DriverVersion*) v_j;
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				ev_bool __values1 = pObjectX->isDriverOlderThanVersion(v);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setNumWorldMatrices_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint num_j)
			{
				ev_uint16 num = (ev_uint16) num_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setNumWorldMatrices(num);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setNumTextureUnits_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint num_j)
			{
				ev_uint16 num = (ev_uint16) num_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setNumTextureUnits(num);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setStencilBufferBitDepth_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint num_j)
			{
				ev_uint16 num = (ev_uint16) num_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setStencilBufferBitDepth(num);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setNumVertexBlendMatrices_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint num_j)
			{
				ev_uint16 num = (ev_uint16) num_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setNumVertexBlendMatrices(num);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setNumMultiRenderTargets_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint num_j)
			{
				ev_uint16 num = (ev_uint16) num_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setNumMultiRenderTargets(num);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_getNumWorldMatrices_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getNumWorldMatrices();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_getNumTextureUnits_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getNumTextureUnits();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_getStencilBufferBitDepth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getStencilBufferBitDepth();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_getNumVertexBlendMatrices_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getNumVertexBlendMatrices();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_getNumMultiRenderTargets_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getNumMultiRenderTargets();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_isCapabilityRenderSystemSpecific_1Capabilities(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint c_j)
			{
				const EarthView::World::Graphic::Capabilities c = (EarthView::World::Graphic::Capabilities) c_j;
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				ev_bool __values1 = pObjectX->isCapabilityRenderSystemSpecific(c);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setCapability_1Capabilities(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint c_j)
			{
				const EarthView::World::Graphic::Capabilities c = (EarthView::World::Graphic::Capabilities) c_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setCapability(c);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_unsetCapability_1Capabilities(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint c_j)
			{
				const EarthView::World::Graphic::Capabilities c = (EarthView::World::Graphic::Capabilities) c_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->unsetCapability(c);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_hasCapability_1Capabilities(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint c_j)
			{
				const EarthView::World::Graphic::Capabilities c = (EarthView::World::Graphic::Capabilities) c_j;
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasCapability(c);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_addShaderProfile_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring profile_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* profile_ch = (const ev_char*)__env->GetStringUTFChars(profile_j,JNI_FALSE);
				const EVString profile = profile_ch;
				__env->ReleaseStringUTFChars(profile_j, (const char *)profile_ch);
				#else
				const ev_wchar* profile_ch = (const ev_wchar*)__env->GetStringChars(profile_j,JNI_FALSE);
				const EVString profile = profile_ch;
				__env->ReleaseStringChars(profile_j, (const jchar *)profile_ch);
				#endif
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->addShaderProfile(profile);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_removeShaderProfile_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring profile_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* profile_ch = (const ev_char*)__env->GetStringUTFChars(profile_j,JNI_FALSE);
				const EVString profile = profile_ch;
				__env->ReleaseStringUTFChars(profile_j, (const char *)profile_ch);
				#else
				const ev_wchar* profile_ch = (const ev_wchar*)__env->GetStringChars(profile_j,JNI_FALSE);
				const EVString profile = profile_ch;
				__env->ReleaseStringChars(profile_j, (const jchar *)profile_ch);
				#endif
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->removeShaderProfile(profile);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_isShaderProfileSupported_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring profile_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* profile_ch = (const ev_char*)__env->GetStringUTFChars(profile_j,JNI_FALSE);
				const EVString profile = profile_ch;
				__env->ReleaseStringUTFChars(profile_j, (const char *)profile_ch);
				#else
				const ev_wchar* profile_ch = (const ev_wchar*)__env->GetStringChars(profile_j,JNI_FALSE);
				const EVString profile = profile_ch;
				__env->ReleaseStringChars(profile_j, (const jchar *)profile_ch);
				#endif
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				ev_bool __values1 = pObjectX->isShaderProfileSupported(profile);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_getSupportedShaderProfiles_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				const EarthView::World::Graphic::ShaderProfiles& __values1 = pObjectX->getSupportedShaderProfiles();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_getVertexProgramConstantFloatCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getVertexProgramConstantFloatCount();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_getVertexProgramConstantIntCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getVertexProgramConstantIntCount();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_getVertexProgramConstantBoolCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getVertexProgramConstantBoolCount();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_getGeometryProgramConstantFloatCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getGeometryProgramConstantFloatCount();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_getGeometryProgramConstantIntCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getGeometryProgramConstantIntCount();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_getGeometryProgramConstantBoolCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getGeometryProgramConstantBoolCount();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_getFragmentProgramConstantFloatCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getFragmentProgramConstantFloatCount();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_getFragmentProgramConstantIntCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getFragmentProgramConstantIntCount();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_getFragmentProgramConstantBoolCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getFragmentProgramConstantBoolCount();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setDeviceName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setDeviceName(name);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_getDeviceName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				EVString __values1 = pObjectX->getDeviceName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setVertexProgramConstantFloatCount_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint c_j)
			{
				ev_uint16 c = (ev_uint16) c_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setVertexProgramConstantFloatCount(c);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setVertexProgramConstantIntCount_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint c_j)
			{
				ev_uint16 c = (ev_uint16) c_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setVertexProgramConstantIntCount(c);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setVertexProgramConstantBoolCount_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint c_j)
			{
				ev_uint16 c = (ev_uint16) c_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setVertexProgramConstantBoolCount(c);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setGeometryProgramConstantFloatCount_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint c_j)
			{
				ev_uint16 c = (ev_uint16) c_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setGeometryProgramConstantFloatCount(c);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setGeometryProgramConstantIntCount_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint c_j)
			{
				ev_uint16 c = (ev_uint16) c_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setGeometryProgramConstantIntCount(c);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setGeometryProgramConstantBoolCount_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint c_j)
			{
				ev_uint16 c = (ev_uint16) c_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setGeometryProgramConstantBoolCount(c);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setFragmentProgramConstantFloatCount_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint c_j)
			{
				ev_uint16 c = (ev_uint16) c_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setFragmentProgramConstantFloatCount(c);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setFragmentProgramConstantIntCount_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint c_j)
			{
				ev_uint16 c = (ev_uint16) c_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setFragmentProgramConstantIntCount(c);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setFragmentProgramConstantBoolCount_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint c_j)
			{
				ev_uint16 c = (ev_uint16) c_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setFragmentProgramConstantBoolCount(c);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setMaxPointSize_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble s_j)
			{
				Real s = (Real) s_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setMaxPointSize(s);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_getMaxPointSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				Real __values1 = pObjectX->getMaxPointSize();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setNonPOW2TexturesLimited_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean l_j)
			{
				ev_bool l = (ev_bool) l_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setNonPOW2TexturesLimited(l);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_getNonPOW2TexturesLimited_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				ev_bool __values1 = pObjectX->getNonPOW2TexturesLimited();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setNumVertexTextureUnits_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint n_j)
			{
				ev_uint16 n = (ev_uint16) n_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setNumVertexTextureUnits(n);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_getNumVertexTextureUnits_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getNumVertexTextureUnits();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setVertexTextureUnitsShared_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean shared_j)
			{
				ev_bool shared = (ev_bool) shared_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setVertexTextureUnitsShared(shared);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_getVertexTextureUnitsShared_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				ev_bool __values1 = pObjectX->getVertexTextureUnitsShared();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setGeometryProgramNumOutputVertices_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint numOutputVertices_j)
			{
				ev_int32 numOutputVertices = (ev_int32) numOutputVertices_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setGeometryProgramNumOutputVertices(numOutputVertices);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_getGeometryProgramNumOutputVertices_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getGeometryProgramNumOutputVertices();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_getRenderSystemName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				EVString __values1 = pObjectX->getRenderSystemName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setRenderSystemName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring rs_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* rs_ch = (const ev_char*)__env->GetStringUTFChars(rs_j,JNI_FALSE);
				const EVString rs = rs_ch;
				__env->ReleaseStringUTFChars(rs_j, (const char *)rs_ch);
				#else
				const ev_wchar* rs_ch = (const ev_wchar*)__env->GetStringChars(rs_j,JNI_FALSE);
				const EVString rs = rs_ch;
				__env->ReleaseStringChars(rs_j, (const jchar *)rs_ch);
				#endif
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setRenderSystemName(rs);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_setCategoryRelevant_1CapabilitiesCategory_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint cat_j, jboolean relevant_j)
			{
				EarthView::World::Graphic::CapabilitiesCategory cat = (EarthView::World::Graphic::CapabilitiesCategory) cat_j;
				ev_bool relevant = (ev_bool) relevant_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->setCategoryRelevant(cat, relevant);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_isCategoryRelevant_1CapabilitiesCategory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint cat_j)
			{
				EarthView::World::Graphic::CapabilitiesCategory cat = (EarthView::World::Graphic::CapabilitiesCategory) cat_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				ev_bool __values1 = pObjectX->isCategoryRelevant(cat);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderSystemCapabilities_log_1CLogger(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ptLog_j)
			{
				EarthView::World::Core::CLogger *ptLog = (EarthView::World::Core::CLogger*) ptLog_j;
				EarthView::World::Graphic::CRenderSystemCapabilities *pObjectX = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjXXXX;
				pObjectX->log(ptLog);
			}
		}
	}
}
