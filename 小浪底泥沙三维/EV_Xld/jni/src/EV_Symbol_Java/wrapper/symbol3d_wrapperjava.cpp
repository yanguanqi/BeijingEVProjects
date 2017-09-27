/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/symbol3d.h"
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
			namespace Display
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_display_EVSymbol3DDrawingModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						SDM_ALL,
						SDM_FILL,
						SDM_FRAME
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_display_EVTextureAddressModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						TAM_Wrap,
						TAM_Clamp,
						TAM_Mirror,
						TAM_Border
					};
					jintArray array = __env->NewIntArray(4);
					__env->SetIntArrayRegion(array, 0, 4, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_TextureInfo_equal_1CTextureInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
				{
					const EarthView::World::Spatial::Display::CTextureInfo &rhs = *(EarthView::World::Spatial::Display::CTextureInfo*) rhs_j;
					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*) pObjXXXX;
					ev_bool __values1 = pObjectX->equal(rhs);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_TextureInfo_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*) pObjXXXX;
					pObjectX->toStream(stream);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_TextureInfo_fromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*) pObjXXXX;
					pObjectX->fromStream(stream);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_TextureInfo_getDirty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*) pObjXXXX;
					ev_bool __values1 = pObjectX->getDirty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_TextureInfo_setDirty_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean dirty_j)
				{
					ev_bool dirty = (ev_bool) dirty_j;
					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*) pObjXXXX;
					pObjectX->setDirty(dirty);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_TextureInfo_get_1TextureID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->TextureID;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_TextureInfo_set_1TextureID_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->TextureID = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_display_TextureInfo_get_1MinX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->MinX);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_TextureInfo_set_1MinX_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*)pObjXXXX;
					pObjectX->MinX = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_display_TextureInfo_get_1MaxX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->MaxX);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_TextureInfo_set_1MaxX_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*)pObjXXXX;
					pObjectX->MaxX = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_display_TextureInfo_get_1MinY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->MinY);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_TextureInfo_set_1MinY_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*)pObjXXXX;
					pObjectX->MinY = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_display_TextureInfo_get_1MaxY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->MaxY);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_TextureInfo_set_1MaxY_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*)pObjXXXX;
					pObjectX->MaxY = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_display_TextureInfo_get_1UnitSizeX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->UnitSizeX);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_TextureInfo_set_1UnitSizeX_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*)pObjXXXX;
					pObjectX->UnitSizeX = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_display_TextureInfo_get_1UnitSizeY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->UnitSizeY);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_TextureInfo_set_1UnitSizeY_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*)pObjXXXX;
					pObjectX->UnitSizeY = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_TextureInfo_get_1TAM_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->TAM);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_TextureInfo_set_1TAM_1EVTextureAddressMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*)pObjXXXX;
					pObjectX->TAM = (EarthView::World::Spatial::Display::EVTextureAddressMode)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_TextureInfo_get_1TextureStream_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->TextureStream);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_TextureInfo_set_1TextureStream_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*)pObjXXXX;
					pObjectX->TextureStream = *(EarthView::World::Core::MemoryDataStreamPtr*) __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_display_TextureInfo_get_1PicTransparency_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->PicTransparency);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_TextureInfo_set_1PicTransparency_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial::Display::CTextureInfo *pObjectX = (EarthView::World::Spatial::Display::CTextureInfo*)pObjXXXX;
					pObjectX->PicTransparency = (ev_real32)__values1_j;
				}
				class JCSymbol3DProxy : public EarthView::World::Spatial::Display::CSymbol3D
				{
				 private:
					EarthView::World::Core::ev_string m_similar_ISymbol_callback;
					EarthView::World::Core::ev_string m_getFontColor_void_callback;
					EarthView::World::Core::ev_string m_getFontOutlineColor_void_callback;
					EarthView::World::Core::ev_string m_setFontOutlineColor_IColor_callback;
					EarthView::World::Core::ev_string m_setFontColor_IColor_callback;
					EarthView::World::Core::ev_string m_fromXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_toXmlElement_void_callback;
					EarthView::World::Core::ev_string m_getSize_void_callback;
					EarthView::World::Core::ev_string m_getColorRef_void_callback;
					EarthView::World::Core::ev_string m_toStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_toSLD_void_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
					EarthView::World::Core::ev_string m_getColor_void_callback;
					EarthView::World::Core::ev_string m_setColor_IColor_callback;
					EarthView::World::Core::ev_string m_getSymbolType_void_callback;
					EarthView::World::Core::ev_string m_hasImage_void_callback;
					EarthView::World::Core::ev_string m_getImageCount_void_callback;
					EarthView::World::Core::ev_string m_getImageID_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getImage_ev_uint32_callback;
					EarthView::World::Core::ev_string m_setImage_ev_uint32_EVString_MemoryDataStreamPtr_callback;
					EarthView::World::Core::ev_string m_equal_ISymbol_callback;
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_setName_EVString_callback;
					EarthView::World::Core::ev_string m_fromSLD_EVString_callback;
					EarthView::World::Core::ev_string m_fromStream_CDataStream_callback;
				public:
					JCSymbol3DProxy(EarthView::World::Core::CNameValuePairList *pList) : CSymbol3D(pList)
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
					void register_similar_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_similar_ISymbol_callback = __method;
					}
					void register_getFontColor_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFontColor_void_callback = __method;
					}
					void register_getFontOutlineColor_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFontOutlineColor_void_callback = __method;
					}
					void register_setFontOutlineColor_IColor_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setFontOutlineColor_IColor_callback = __method;
					}
					void register_setFontColor_IColor_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setFontColor_IColor_callback = __method;
					}
					void register_fromXmlElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromXmlElement_CXmlElement_callback = __method;
					}
					void register_toXmlElement_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toXmlElement_void_callback = __method;
					}
					void register_getSize_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSize_void_callback = __method;
					}
					void register_getColorRef_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getColorRef_void_callback = __method;
					}
					void register_toStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toStream_CDataStream_callback = __method;
					}
					void register_toSLD_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toSLD_void_callback = __method;
					}
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					void register_getColor_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getColor_void_callback = __method;
					}
					void register_setColor_IColor_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setColor_IColor_callback = __method;
					}
					void register_getSymbolType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSymbolType_void_callback = __method;
					}
					void register_hasImage_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_hasImage_void_callback = __method;
					}
					void register_getImageCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getImageCount_void_callback = __method;
					}
					void register_getImageID_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getImageID_ev_uint32_callback = __method;
					}
					void register_getImage_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getImage_ev_uint32_callback = __method;
					}
					void register_setImage_ev_uint32_EVString_MemoryDataStreamPtr_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setImage_ev_uint32_EVString_MemoryDataStreamPtr_callback = __method;
					}
					void register_equal_ISymbol_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_equal_ISymbol_callback = __method;
					}
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_setName_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setName_EVString_callback = __method;
					}
					void register_fromSLD_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromSLD_EVString_callback = __method;
					}
					void register_fromStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromStream_CDataStream_callback = __method;
					}
					virtual ev_int32 getSymbolType() const
					{
						if (this->_gRef != NULL && this->m_getSymbolType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSymbolType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSymbol3D::getSymbolType();
						}
					}
					virtual void toStream(EarthView::World::Core::CDataStream& stream) const
					{
						if (this->_gRef != NULL && this->m_toStream_CDataStream_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("toStream_CDataStream_callback");
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
							return this->CSymbol3D::toStream(stream);
						}
					}
					virtual EarthView::World::Spatial::Display::ISymbol* clone() const
					{
						if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("ev_clone_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::ISymbol *__values1 = (EarthView::World::Spatial::Display::ISymbol*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSymbol3D::clone();
						}
					}
					virtual ev_bool equal(const EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if (this->_gRef != NULL && this->m_equal_ISymbol_callback != "" && this->isCustomExtend())
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
							jlong pSymbol_j = (jlong) pSymbol;
							jmethodID __method = __gr->getMethod("equal_ISymbol_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pSymbol_j);
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
							return this->CSymbol3D::equal(pSymbol);
						}
					}
					virtual ev_bool similar(const EarthView::World::Spatial::Display::ISymbol* pSymbol) const
					{
						if (this->_gRef != NULL && this->m_similar_ISymbol_callback != "" && this->isCustomExtend())
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
							jlong pSymbol_j = (jlong) pSymbol;
							jmethodID __method = __gr->getMethod("similar_ISymbol_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pSymbol_j);
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
							return this->CSymbol3D::similar(pSymbol);
						}
					}
					virtual ev_bool hasImage() const
					{
						if (this->_gRef != NULL && this->m_hasImage_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("hasImage_void_callback");
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
							return this->CSymbol3D::hasImage();
						}
					}
					virtual ev_uint32 getImageCount() const
					{
						if (this->_gRef != NULL && this->m_getImageCount_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getImageCount_void_callback");
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
							return this->CSymbol3D::getImageCount();
						}
					}
					virtual EVString getImageID(ev_uint32 index) const
					{
						if (this->_gRef != NULL && this->m_getImageID_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong index_j = (jlong) index;
							jmethodID __method = __gr->getMethod("getImageID_ev_uint32_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , index_j);
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
							return this->CSymbol3D::getImageID(index);
						}
					}
					virtual EarthView::World::Core::MemoryDataStreamPtr getImage(ev_uint32 index) const
					{
						if (this->_gRef != NULL && this->m_getImage_ev_uint32_callback != "" && this->isCustomExtend())
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
							jlong index_j = (jlong) index;
							jmethodID __method = __gr->getMethod("getImage_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::MemoryDataStreamPtr __values1 = *(EarthView::World::Core::MemoryDataStreamPtr*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSymbol3D::getImage(index);
						}
					}
					virtual void setImage(ev_uint32 index, const EVString& imageID, EarthView::World::Core::MemoryDataStreamPtr stream)
					{
						if (this->_gRef != NULL && this->m_setImage_ev_uint32_EVString_MemoryDataStreamPtr_callback != "" && this->isCustomExtend())
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
							jlong index_j = (jlong) index;
							EarthView::World::Core::ev_wstring imageID_wch = imageID;
							jstring imageID_j = __env->NewString((const jchar*)imageID_wch.getString(), imageID_wch.size());
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("setImage_ev_uint32_EVString_MemoryDataStreamPtr_callback");
							__env->CallVoidMethod(__obj, __method , index_j, imageID_j, stream_j);
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
							return this->CSymbol3D::setImage(index, imageID, stream);
						}
					}
					virtual EarthView::World::Spatial::Display::IColor* getFontColor() const
					{
						if (this->_gRef != NULL && this->m_getFontColor_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getFontColor_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::IColor *__values1 = (EarthView::World::Spatial::Display::IColor*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSymbol3D::getFontColor();
						}
					}
					virtual EarthView::World::Spatial::Display::IColor* getFontOutlineColor() const
					{
						if (this->_gRef != NULL && this->m_getFontOutlineColor_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getFontOutlineColor_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::IColor *__values1 = (EarthView::World::Spatial::Display::IColor*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSymbol3D::getFontOutlineColor();
						}
					}
					virtual void setFontOutlineColor(const EarthView::World::Spatial::Display::IColor* color)
					{
						if (this->_gRef != NULL && this->m_setFontOutlineColor_IColor_callback != "" && this->isCustomExtend())
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
							jlong color_j = (jlong) color;
							jmethodID __method = __gr->getMethod("setFontOutlineColor_IColor_callback");
							__env->CallVoidMethod(__obj, __method , color_j);
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
							return this->CSymbol3D::setFontOutlineColor(color);
						}
					}
					virtual void setFontColor(const EarthView::World::Spatial::Display::IColor* color)
					{
						if (this->_gRef != NULL && this->m_setFontColor_IColor_callback != "" && this->isCustomExtend())
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
							jlong color_j = (jlong) color;
							jmethodID __method = __gr->getMethod("setFontColor_IColor_callback");
							__env->CallVoidMethod(__obj, __method , color_j);
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
							return this->CSymbol3D::setFontColor(color);
						}
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if (this->_gRef != NULL && this->m_toXmlElement_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("toXmlElement_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::CXmlElement __values1 = *(EarthView::World::Core::CXmlElement*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSymbol3D::toXmlElement();
						}
					}
					virtual void fromXmlElement(EarthView::World::Core::CXmlElement& element)
					{
						if (this->_gRef != NULL && this->m_fromXmlElement_CXmlElement_callback != "" && this->isCustomExtend())
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
							jlong element_j = (jlong) &element;
							jmethodID __method = __gr->getMethod("fromXmlElement_CXmlElement_callback");
							__env->CallVoidMethod(__obj, __method , element_j);
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
							return this->CSymbol3D::fromXmlElement(element);
						}
					}
					virtual void fromStream(EarthView::World::Core::CDataStream& stream)
					{
						if (this->_gRef != NULL && this->m_fromStream_CDataStream_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("fromStream_CDataStream_callback");
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
							return this->CSymbol3D::fromStream(stream);
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
							return this->CSymbol3D::getName();
						}
					}
					virtual void setName(const EVString& szName)
					{
						if (this->_gRef != NULL && this->m_setName_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring szName_wch = szName;
							jstring szName_j = __env->NewString((const jchar*)szName_wch.getString(), szName_wch.size());
							jmethodID __method = __gr->getMethod("setName_EVString_callback");
							__env->CallVoidMethod(__obj, __method , szName_j);
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
							return this->CSymbol3D::setName(szName);
						}
					}
					virtual EarthView::World::Spatial::Display::IColor* getColor() const
					{
						if (this->_gRef != NULL && this->m_getColor_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getColor_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::IColor *__values1 = (EarthView::World::Spatial::Display::IColor*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSymbol3D::getColor();
						}
					}
					virtual void setColor(const EarthView::World::Spatial::Display::IColor* color)
					{
						if (this->_gRef != NULL && this->m_setColor_IColor_callback != "" && this->isCustomExtend())
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
							jlong color_j = (jlong) color;
							jmethodID __method = __gr->getMethod("setColor_IColor_callback");
							__env->CallVoidMethod(__obj, __method , color_j);
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
							return this->CSymbol3D::setColor(color);
						}
					}
					virtual EVString toSLD() const
					{
						if (this->_gRef != NULL && this->m_toSLD_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("toSLD_void_callback");
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
							return this->CSymbol3D::toSLD();
						}
					}
					virtual void fromSLD(EVString& sld)
					{
						if (this->_gRef != NULL && this->m_fromSLD_EVString_callback != "" && this->isCustomExtend())
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
							jlong sld_j = (jlong) &sld;
							jmethodID __method = __gr->getMethod("fromSLD_EVString_callback");
							__env->CallVoidMethod(__obj, __method , sld_j);
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
							return this->CSymbol3D::fromSLD(sld);
						}
					}
					virtual ev_real64 getSize() const
					{
						if (this->_gRef != NULL && this->m_getSize_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSize_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSymbol3D::getSize();
						}
					}
					virtual const EarthView::World::Spatial::Display::IColor* getColorRef() const
					{
						if (this->_gRef != NULL && this->m_getColorRef_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getColorRef_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Display::IColor *__values1 = (const EarthView::World::Spatial::Display::IColor*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSymbol3D::getColorRef();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCSymbol3DProxy);
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getHightenValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getHightenValue();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_setHightenValue_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat h_j)
				{
					ev_real32 h = (ev_real32) h_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					pObjectX->setHightenValue(h);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getHightenField_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					const EVString& __values1 = pObjectX->getHightenField();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_setHightenField_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring hf_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* hf_ch = (const ev_char*)__env->GetStringUTFChars(hf_j,JNI_FALSE);
					const EVString hf = hf_ch;
					__env->ReleaseStringUTFChars(hf_j, (const char *)hf_ch);
					#else
					const ev_wchar* hf_ch = (const ev_wchar*)__env->GetStringChars(hf_j,JNI_FALSE);
					const EVString hf = hf_ch;
					__env->ReleaseStringChars(hf_j, (const jchar *)hf_ch);
					#endif
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					pObjectX->setHightenField(hf);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getAltitudeMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					EarthView::World::Spatial::Utility::EVAltitudeMode __values1 = pObjectX->getAltitudeMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_setAltitudeMode_1EVAltitudeMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint m_j)
				{
					EarthView::World::Spatial::Utility::EVAltitudeMode m = (EarthView::World::Spatial::Utility::EVAltitudeMode) m_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					pObjectX->setAltitudeMode(m);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getSymbolType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbol3DProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbol3D::getSymbolType();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getSymbolType();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1getSymbolType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSymbolType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSymbolType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getSymbolType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbol3D::getSymbolType();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbol3DProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CSymbol3D::toStream(stream);
					}
					else
					{
						pObjectX->toStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toStream_CDataStream_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_toStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CSymbol3D::toStream(stream);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Symbol3D_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbol3DProxy))
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbol3D::clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_clone_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Symbol3D_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbol3D::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_Symbol3D_equal_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *pSymbol = (const EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbol3DProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbol3D::equal(pSymbol);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->equal(pSymbol);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1equal_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_equal_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"equal_ISymbol_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_Symbol3D_equal_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *pSymbol = (const EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbol3D::equal(pSymbol);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_Symbol3D_similar_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *pSymbol = (const EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbol3DProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbol3D::similar(pSymbol);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->similar(pSymbol);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1similar_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_similar_ISymbol_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"similar_ISymbol_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_Symbol3D_similar_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *pSymbol = (const EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbol3D::similar(pSymbol);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_Symbol3D_hasImage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbol3DProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbol3D::hasImage();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->hasImage();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1hasImage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_hasImage_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"hasImage_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_Symbol3D_hasImage_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbol3D::hasImage();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getImageCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbol3DProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbol3D::getImageCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getImageCount();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1getImageCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getImageCount_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getImageCount_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getImageCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbol3D::getImageCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getImageID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbol3DProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbol3D::getImageID(index);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getImageID(index);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1getImageID_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getImageID_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getImageID_ev_uint32_callback", "(J)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getImageID_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbol3D::getImageID(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getImage_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbol3DProxy))
					{
						EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbol3D::getImage(index);
						EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->getImage(index);
						EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1getImage_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getImage_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getImage_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getImage_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbol3D::getImage(index);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_setImage_1ev_1uint32_1EVString_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jstring imageID_j, jlong stream_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* imageID_ch = (const ev_char*)__env->GetStringUTFChars(imageID_j,JNI_FALSE);
					const EVString imageID = imageID_ch;
					__env->ReleaseStringUTFChars(imageID_j, (const char *)imageID_ch);
					#else
					const ev_wchar* imageID_ch = (const ev_wchar*)__env->GetStringChars(imageID_j,JNI_FALSE);
					const EVString imageID = imageID_ch;
					__env->ReleaseStringChars(imageID_j, (const jchar *)imageID_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr stream = *(EarthView::World::Core::MemoryDataStreamPtr*) stream_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbol3DProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CSymbol3D::setImage(index, imageID, stream);
					}
					else
					{
						pObjectX->setImage(index, imageID, stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1setImage_1ev_1uint32_1EVString_1MemoryDataStreamPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setImage_ev_uint32_EVString_MemoryDataStreamPtr_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setImage_ev_uint32_EVString_MemoryDataStreamPtr_callback", "(JLjava/lang/String;J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_setImage_1ev_1uint32_1EVString_1MemoryDataStreamPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jstring imageID_j, jlong stream_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* imageID_ch = (const ev_char*)__env->GetStringUTFChars(imageID_j,JNI_FALSE);
					const EVString imageID = imageID_ch;
					__env->ReleaseStringUTFChars(imageID_j, (const char *)imageID_ch);
					#else
					const ev_wchar* imageID_ch = (const ev_wchar*)__env->GetStringChars(imageID_j,JNI_FALSE);
					const EVString imageID = imageID_ch;
					__env->ReleaseStringChars(imageID_j, (const jchar *)imageID_ch);
					#endif
					EarthView::World::Core::MemoryDataStreamPtr stream = *(EarthView::World::Core::MemoryDataStreamPtr*) stream_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CSymbol3D::setImage(index, imageID, stream);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getPropertyName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					const EVString& __values1 = pObjectX->getPropertyName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_setPropertyName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fieldName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* fieldName_ch = (const ev_char*)__env->GetStringUTFChars(fieldName_j,JNI_FALSE);
					const EVString fieldName = fieldName_ch;
					__env->ReleaseStringUTFChars(fieldName_j, (const char *)fieldName_ch);
					#else
					const ev_wchar* fieldName_ch = (const ev_wchar*)__env->GetStringChars(fieldName_j,JNI_FALSE);
					const EVString fieldName = fieldName_ch;
					__env->ReleaseStringChars(fieldName_j, (const jchar *)fieldName_ch);
					#endif
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					pObjectX->setPropertyName(fieldName);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getFontName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					const EVString& __values1 = pObjectX->getFontName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_setFontName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fontName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* fontName_ch = (const ev_char*)__env->GetStringUTFChars(fontName_j,JNI_FALSE);
					const EVString fontName = fontName_ch;
					__env->ReleaseStringUTFChars(fontName_j, (const char *)fontName_ch);
					#else
					const ev_wchar* fontName_ch = (const ev_wchar*)__env->GetStringChars(fontName_j,JNI_FALSE);
					const EVString fontName = fontName_ch;
					__env->ReleaseStringChars(fontName_j, (const jchar *)fontName_ch);
					#endif
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					pObjectX->setFontName(fontName);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getFontSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getFontSize();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_setFontSize_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat fontSize_j)
				{
					ev_real32 fontSize = (ev_real32) fontSize_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					pObjectX->setFontSize(fontSize);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getFontColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbol3DProxy))
					{
						EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbol3D::getFontColor();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->getFontColor();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1getFontColor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFontColor_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFontColor_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getFontColor_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbol3D::getFontColor();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getFontOutlineColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbol3DProxy))
					{
						EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbol3D::getFontOutlineColor();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->getFontOutlineColor();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1getFontOutlineColor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFontOutlineColor_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFontOutlineColor_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getFontOutlineColor_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					EarthView::World::Spatial::Display::IColor* __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbol3D::getFontOutlineColor();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_setFontOutlineColor_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
				{
					const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbol3DProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CSymbol3D::setFontOutlineColor(color);
					}
					else
					{
						pObjectX->setFontOutlineColor(color);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1setFontOutlineColor_1IColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setFontOutlineColor_IColor_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setFontOutlineColor_IColor_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_setFontOutlineColor_1IColor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
				{
					const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CSymbol3D::setFontOutlineColor(color);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_setFontColor_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
				{
					const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbol3DProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CSymbol3D::setFontColor(color);
					}
					else
					{
						pObjectX->setFontColor(color);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1setFontColor_1IColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setFontColor_IColor_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setFontColor_IColor_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_setFontColor_1IColor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
				{
					const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CSymbol3D::setFontColor(color);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getTextRightToLeft_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					ev_bool __values1 = pObjectX->getTextRightToLeft();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_setTextRightToLeft_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean r2l_j)
				{
					ev_bool r2l = (ev_bool) r2l_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					pObjectX->setTextRightToLeft(r2l);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getTextOffsetX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getTextOffsetX();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_setTextOffsetX_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat x_j)
				{
					ev_real32 x = (ev_real32) x_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					pObjectX->setTextOffsetX(x);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getTextOffsetY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getTextOffsetY();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_setTextOffsetY_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat y_j)
				{
					ev_real32 y = (ev_real32) y_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					pObjectX->setTextOffsetY(y);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getTextAngle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getTextAngle();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_setTextAngle_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat angle_j)
				{
					ev_real32 angle = (ev_real32) angle_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					pObjectX->setTextAngle(angle);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getTextHAlignment_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					EarthView::World::Core::EVTextHorizontalAlignment __values1 = pObjectX->getTextHAlignment();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_setTextHAlignment_1EVTextHorizontalAlignment(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint alignment_j)
				{
					EarthView::World::Core::EVTextHorizontalAlignment alignment = (EarthView::World::Core::EVTextHorizontalAlignment) alignment_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					pObjectX->setTextHAlignment(alignment);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getTextVAlignment_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					EarthView::World::Core::EVTextVerticalAlignment __values1 = pObjectX->getTextVAlignment();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_setTextVAlignment_1EVTextVerticalAlignment(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint alignment_j)
				{
					EarthView::World::Core::EVTextVerticalAlignment alignment = (EarthView::World::Core::EVTextVerticalAlignment) alignment_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					pObjectX->setTextVAlignment(alignment);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_setBoldEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isBold_j)
				{
					ev_bool isBold = (ev_bool) isBold_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					pObjectX->setBoldEnabled(isBold);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_setItalicEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isItalic_j)
				{
					ev_bool isItalic = (ev_bool) isItalic_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					pObjectX->setItalicEnabled(isItalic);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getBoldEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					ev_bool __values1 = pObjectX->getBoldEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getItalicEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					ev_bool __values1 = pObjectX->getItalicEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_setAntiAliasEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isAntiAlias_j)
				{
					ev_bool isAntiAlias = (ev_bool) isAntiAlias_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					pObjectX->setAntiAliasEnabled(isAntiAlias);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getAntiAliasEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					ev_bool __values1 = pObjectX->getAntiAliasEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getShowText_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					ev_bool __values1 = pObjectX->getShowText();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_setShowText_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bShow_j)
				{
					ev_bool bShow = (ev_bool) bShow_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					pObjectX->setShowText(bShow);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_setTextShadowEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean hasShadow_j)
				{
					ev_bool hasShadow = (ev_bool) hasShadow_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					pObjectX->setTextShadowEnabled(hasShadow);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_Symbol3D_getTextShadowEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					ev_bool __values1 = pObjectX->getTextShadowEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Symbol3D_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbol3DProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbol3D::toXmlElement();
						EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->toXmlElement();
						EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toXmlElement_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toXmlElement_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_Symbol3D_toXmlElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Display::CSymbol3D::toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbol3DProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CSymbol3D::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_fromXmlElement_CXmlElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"fromXmlElement_CXmlElement_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CSymbol3D::fromXmlElement(element);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_fromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSymbol3DProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CSymbol3D::fromStream(stream);
					}
					else
					{
						pObjectX->fromStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1fromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_fromStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"fromStream_CDataStream_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_fromStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Display::CSymbol3D *pObjectX = (EarthView::World::Spatial::Display::CSymbol3D*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CSymbol3D::fromStream(stream);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1getSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSize_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSize_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1getColorRef_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getColorRef_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getColorRef_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1toSLD_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toSLD_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toSLD_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1getColor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getColor_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getColor_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1setColor_1IColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setColor_IColor_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setColor_IColor_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1setName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setName_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setName_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_Symbol3D_register_1fromSLD_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSymbol3DProxy *pObjectX = (JCSymbol3DProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_fromSLD_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"fromSLD_EVString_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
