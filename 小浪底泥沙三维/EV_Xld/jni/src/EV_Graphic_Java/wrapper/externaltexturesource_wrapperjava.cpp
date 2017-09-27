/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/externaltexturesource.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_eTexturePlayModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					TextureEffectPause,
					TextureEffectPlay_ASAP,
					TextureEffectPlay_Looping
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			class JCExternalTextureSourceProxy : public EarthView::World::Graphic::CExternalTextureSource
			{
			 private:
				EarthView::World::Core::ev_string m_initialise_void_callback;
				EarthView::World::Core::ev_string m_shutDown_void_callback;
				EarthView::World::Core::ev_string m_createDefinedTexture_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_createDefinedTexture_EVString_callback;
				EarthView::World::Core::ev_string m_destroyAdvancedTexture_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_destroyAdvancedTexture_EVString_callback;
				EarthView::World::Core::ev_string m_setParameter_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_setParameter_EVString_ev_bool_ev_bool_callback;
				EarthView::World::Core::ev_string m_setParameterList_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_getParameter_EVString_callback;
				EarthView::World::Core::ev_string m_copyParametersTo_CStringInterface_callback;
			public:
				JCExternalTextureSourceProxy(EarthView::World::Core::CNameValuePairList *pList) : CExternalTextureSource(pList)
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
				void register_initialise_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_initialise_void_callback = __method;
				}
				void register_shutDown_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_shutDown_void_callback = __method;
				}
				void register_createDefinedTexture_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createDefinedTexture_EVString_EVString_callback = __method;
				}
				void register_createDefinedTexture_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createDefinedTexture_EVString_callback = __method;
				}
				void register_destroyAdvancedTexture_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyAdvancedTexture_EVString_EVString_callback = __method;
				}
				void register_destroyAdvancedTexture_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyAdvancedTexture_EVString_callback = __method;
				}
				void register_setParameter_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParameter_EVString_EVString_callback = __method;
				}
				void register_setParameter_EVString_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParameter_EVString_ev_bool_ev_bool_callback = __method;
				}
				void register_setParameterList_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParameterList_CommonStringPairList_callback = __method;
				}
				void register_getParameter_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getParameter_EVString_callback = __method;
				}
				void register_copyParametersTo_CStringInterface_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_copyParametersTo_CStringInterface_callback = __method;
				}
				virtual ev_bool initialise()
				{
					if (this->_gRef != NULL && this->m_initialise_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("initialise_void_callback");
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
						return this->CExternalTextureSource::initialise();
					}
				}
				virtual void shutDown()
				{
					if (this->_gRef != NULL && this->m_shutDown_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("shutDown_void_callback");
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
						return this->CExternalTextureSource::shutDown();
					}
				}
				virtual void createDefinedTexture(const EVString& sMaterialName, const EVString& groupName)
				{
					if (this->_gRef != NULL && this->m_createDefinedTexture_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring sMaterialName_wch = sMaterialName;
						jstring sMaterialName_j = __env->NewString((const jchar*)sMaterialName_wch.getString(), sMaterialName_wch.size());
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jmethodID __method = __gr->getMethod("createDefinedTexture_EVString_EVString_callback");
						__env->CallVoidMethod(__obj, __method , sMaterialName_j, groupName_j);
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
						return this->CExternalTextureSource::createDefinedTexture(sMaterialName, groupName);
					}
				}
				virtual void createDefinedTexture(const EVString& sMaterialName)
				{
					if (this->_gRef != NULL && this->m_createDefinedTexture_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring sMaterialName_wch = sMaterialName;
						jstring sMaterialName_j = __env->NewString((const jchar*)sMaterialName_wch.getString(), sMaterialName_wch.size());
						jmethodID __method = __gr->getMethod("createDefinedTexture_EVString_callback");
						__env->CallVoidMethod(__obj, __method , sMaterialName_j);
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
						return this->CExternalTextureSource::createDefinedTexture(sMaterialName);
					}
				}
				virtual void destroyAdvancedTexture(const EVString& sTextureName, const EVString& groupName)
				{
					if (this->_gRef != NULL && this->m_destroyAdvancedTexture_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring sTextureName_wch = sTextureName;
						jstring sTextureName_j = __env->NewString((const jchar*)sTextureName_wch.getString(), sTextureName_wch.size());
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jmethodID __method = __gr->getMethod("destroyAdvancedTexture_EVString_EVString_callback");
						__env->CallVoidMethod(__obj, __method , sTextureName_j, groupName_j);
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
						return this->CExternalTextureSource::destroyAdvancedTexture(sTextureName, groupName);
					}
				}
				virtual void destroyAdvancedTexture(const EVString& sTextureName)
				{
					if (this->_gRef != NULL && this->m_destroyAdvancedTexture_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring sTextureName_wch = sTextureName;
						jstring sTextureName_j = __env->NewString((const jchar*)sTextureName_wch.getString(), sTextureName_wch.size());
						jmethodID __method = __gr->getMethod("destroyAdvancedTexture_EVString_callback");
						__env->CallVoidMethod(__obj, __method , sTextureName_j);
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
						return this->CExternalTextureSource::destroyAdvancedTexture(sTextureName);
					}
				}
				virtual ev_bool setParameter(const EVString& name, const EVString& value)
				{
					if (this->_gRef != NULL && this->m_setParameter_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring value_wch = value;
						jstring value_j = __env->NewString((const jchar*)value_wch.getString(), value_wch.size());
						jmethodID __method = __gr->getMethod("setParameter_EVString_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j, value_j);
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
						return this->CExternalTextureSource::setParameter(name, value);
					}
				}
				virtual ev_bool setParameter(const EVString& name, ev_bool readOnly, ev_bool enable)
				{
					if (this->_gRef != NULL && this->m_setParameter_EVString_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jboolean readOnly_j = (jboolean) readOnly;
						jboolean enable_j = (jboolean) enable;
						jmethodID __method = __gr->getMethod("setParameter_EVString_ev_bool_ev_bool_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j, readOnly_j, enable_j);
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
						return this->CExternalTextureSource::setParameter(name, readOnly, enable);
					}
				}
				virtual void setParameterList(const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if (this->_gRef != NULL && this->m_setParameterList_CommonStringPairList_callback != "" && this->isCustomExtend())
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
						jlong paramList_j = (jlong) &paramList;
						jmethodID __method = __gr->getMethod("setParameterList_CommonStringPairList_callback");
						__env->CallVoidMethod(__obj, __method , paramList_j);
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
						return this->CExternalTextureSource::setParameterList(paramList);
					}
				}
				virtual EVString getParameter(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m_getParameter_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("getParameter_EVString_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , name_j);
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
						return this->CExternalTextureSource::getParameter(name);
					}
				}
				virtual void copyParametersTo(EarthView::World::Core::CStringInterface* dest) const
				{
					if (this->_gRef != NULL && this->m_copyParametersTo_CStringInterface_callback != "" && this->isCustomExtend())
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
						jlong dest_j = (jlong) dest;
						jmethodID __method = __gr->getMethod("copyParametersTo_CStringInterface_callback");
						__env->CallVoidMethod(__obj, __method , dest_j);
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
						return this->CExternalTextureSource::copyParametersTo(dest);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCExternalTextureSourceProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_setInputName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sIN_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sIN_ch = (const ev_char*)__env->GetStringUTFChars(sIN_j,JNI_FALSE);
				EVString sIN = sIN_ch;
				__env->ReleaseStringUTFChars(sIN_j, (const char *)sIN_ch);
				#else
				const ev_wchar* sIN_ch = (const ev_wchar*)__env->GetStringChars(sIN_j,JNI_FALSE);
				EVString sIN = sIN_ch;
				__env->ReleaseStringChars(sIN_j, (const jchar *)sIN_ch);
				#endif
				EarthView::World::Graphic::CExternalTextureSource *pObjectX = (EarthView::World::Graphic::CExternalTextureSource*) pObjXXXX;
				pObjectX->setInputName(sIN);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_getInputName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CExternalTextureSource *pObjectX = (EarthView::World::Graphic::CExternalTextureSource*) pObjXXXX;
				const EVString& __values1 = pObjectX->getInputName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_setFPS_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint iFPS_j)
			{
				ev_int32 iFPS = (ev_int32) iFPS_j;
				EarthView::World::Graphic::CExternalTextureSource *pObjectX = (EarthView::World::Graphic::CExternalTextureSource*) pObjXXXX;
				pObjectX->setFPS(iFPS);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_getFPS_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CExternalTextureSource *pObjectX = (EarthView::World::Graphic::CExternalTextureSource*) pObjXXXX;
				const ev_int32 __values1 = pObjectX->getFPS();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_setPlayMode_1eTexturePlayMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint eMode_j)
			{
				EarthView::World::Graphic::eTexturePlayMode eMode = (EarthView::World::Graphic::eTexturePlayMode) eMode_j;
				EarthView::World::Graphic::CExternalTextureSource *pObjectX = (EarthView::World::Graphic::CExternalTextureSource*) pObjXXXX;
				pObjectX->setPlayMode(eMode);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_getPlayMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CExternalTextureSource *pObjectX = (EarthView::World::Graphic::CExternalTextureSource*) pObjXXXX;
				EarthView::World::Graphic::eTexturePlayMode __values1 = pObjectX->getPlayMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_setTextureTecPassStateLevel_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint t_j, jint p_j, jint s_j)
			{
				ev_int32 t = (ev_int32) t_j;
				ev_int32 p = (ev_int32) p_j;
				ev_int32 s = (ev_int32) s_j;
				EarthView::World::Graphic::CExternalTextureSource *pObjectX = (EarthView::World::Graphic::CExternalTextureSource*) pObjXXXX;
				pObjectX->setTextureTecPassStateLevel(t, p, s);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_getTextureTecPassStateLevel_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j, jlong p_j, jlong s_j)
			{
				ev_int32 &t = *(ev_int32*) t_j;
				ev_int32 &p = *(ev_int32*) p_j;
				ev_int32 &s = *(ev_int32*) s_j;
				const 				EarthView::World::Graphic::CExternalTextureSource *pObjectX = (EarthView::World::Graphic::CExternalTextureSource*) pObjXXXX;
				pObjectX->getTextureTecPassStateLevel(t, p, s);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_addBaseParams_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CExternalTextureSource *pObjectX = (EarthView::World::Graphic::CExternalTextureSource*) pObjXXXX;
				pObjectX->addBaseParams();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_getPluginStringName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CExternalTextureSource *pObjectX = (EarthView::World::Graphic::CExternalTextureSource*) pObjXXXX;
				const EVString& __values1 = pObjectX->getPluginStringName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_getDictionaryStringName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CExternalTextureSource *pObjectX = (EarthView::World::Graphic::CExternalTextureSource*) pObjXXXX;
				const EVString& __values1 = pObjectX->getDictionaryStringName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_initialise_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CExternalTextureSource *pObjectX = (EarthView::World::Graphic::CExternalTextureSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCExternalTextureSourceProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CExternalTextureSource::initialise();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->initialise();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_register_1initialise_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCExternalTextureSourceProxy *pObjectX = (JCExternalTextureSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_initialise_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"initialise_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_initialise_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CExternalTextureSource *pObjectX = (EarthView::World::Graphic::CExternalTextureSource*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CExternalTextureSource::initialise();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_shutDown_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CExternalTextureSource *pObjectX = (EarthView::World::Graphic::CExternalTextureSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCExternalTextureSourceProxy))
				{
					pObjectX->EarthView::World::Graphic::CExternalTextureSource::shutDown();
				}
				else
				{
					pObjectX->shutDown();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_register_1shutDown_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCExternalTextureSourceProxy *pObjectX = (JCExternalTextureSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_shutDown_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"shutDown_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_shutDown_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CExternalTextureSource *pObjectX = (EarthView::World::Graphic::CExternalTextureSource*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CExternalTextureSource::shutDown();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_createDefinedTexture_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sMaterialName_j, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sMaterialName_ch = (const ev_char*)__env->GetStringUTFChars(sMaterialName_j,JNI_FALSE);
				const EVString sMaterialName = sMaterialName_ch;
				__env->ReleaseStringUTFChars(sMaterialName_j, (const char *)sMaterialName_ch);
				#else
				const ev_wchar* sMaterialName_ch = (const ev_wchar*)__env->GetStringChars(sMaterialName_j,JNI_FALSE);
				const EVString sMaterialName = sMaterialName_ch;
				__env->ReleaseStringChars(sMaterialName_j, (const jchar *)sMaterialName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CExternalTextureSource *pObjectX = (EarthView::World::Graphic::CExternalTextureSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCExternalTextureSourceProxy))
				{
					pObjectX->EarthView::World::Graphic::CExternalTextureSource::createDefinedTexture(sMaterialName, groupName);
				}
				else
				{
					pObjectX->createDefinedTexture(sMaterialName, groupName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_register_1createDefinedTexture_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCExternalTextureSourceProxy *pObjectX = (JCExternalTextureSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createDefinedTexture_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createDefinedTexture_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_createDefinedTexture_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sMaterialName_j, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sMaterialName_ch = (const ev_char*)__env->GetStringUTFChars(sMaterialName_j,JNI_FALSE);
				const EVString sMaterialName = sMaterialName_ch;
				__env->ReleaseStringUTFChars(sMaterialName_j, (const char *)sMaterialName_ch);
				#else
				const ev_wchar* sMaterialName_ch = (const ev_wchar*)__env->GetStringChars(sMaterialName_j,JNI_FALSE);
				const EVString sMaterialName = sMaterialName_ch;
				__env->ReleaseStringChars(sMaterialName_j, (const jchar *)sMaterialName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CExternalTextureSource *pObjectX = (EarthView::World::Graphic::CExternalTextureSource*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CExternalTextureSource::createDefinedTexture(sMaterialName, groupName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_createDefinedTexture_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sMaterialName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sMaterialName_ch = (const ev_char*)__env->GetStringUTFChars(sMaterialName_j,JNI_FALSE);
				const EVString sMaterialName = sMaterialName_ch;
				__env->ReleaseStringUTFChars(sMaterialName_j, (const char *)sMaterialName_ch);
				#else
				const ev_wchar* sMaterialName_ch = (const ev_wchar*)__env->GetStringChars(sMaterialName_j,JNI_FALSE);
				const EVString sMaterialName = sMaterialName_ch;
				__env->ReleaseStringChars(sMaterialName_j, (const jchar *)sMaterialName_ch);
				#endif
				EarthView::World::Graphic::CExternalTextureSource *pObjectX = (EarthView::World::Graphic::CExternalTextureSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCExternalTextureSourceProxy))
				{
					pObjectX->EarthView::World::Graphic::CExternalTextureSource::createDefinedTexture(sMaterialName);
				}
				else
				{
					pObjectX->createDefinedTexture(sMaterialName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_register_1createDefinedTexture_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCExternalTextureSourceProxy *pObjectX = (JCExternalTextureSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createDefinedTexture_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createDefinedTexture_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_createDefinedTexture_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sMaterialName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sMaterialName_ch = (const ev_char*)__env->GetStringUTFChars(sMaterialName_j,JNI_FALSE);
				const EVString sMaterialName = sMaterialName_ch;
				__env->ReleaseStringUTFChars(sMaterialName_j, (const char *)sMaterialName_ch);
				#else
				const ev_wchar* sMaterialName_ch = (const ev_wchar*)__env->GetStringChars(sMaterialName_j,JNI_FALSE);
				const EVString sMaterialName = sMaterialName_ch;
				__env->ReleaseStringChars(sMaterialName_j, (const jchar *)sMaterialName_ch);
				#endif
				EarthView::World::Graphic::CExternalTextureSource *pObjectX = (EarthView::World::Graphic::CExternalTextureSource*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CExternalTextureSource::createDefinedTexture(sMaterialName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_destroyAdvancedTexture_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sTextureName_j, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sTextureName_ch = (const ev_char*)__env->GetStringUTFChars(sTextureName_j,JNI_FALSE);
				const EVString sTextureName = sTextureName_ch;
				__env->ReleaseStringUTFChars(sTextureName_j, (const char *)sTextureName_ch);
				#else
				const ev_wchar* sTextureName_ch = (const ev_wchar*)__env->GetStringChars(sTextureName_j,JNI_FALSE);
				const EVString sTextureName = sTextureName_ch;
				__env->ReleaseStringChars(sTextureName_j, (const jchar *)sTextureName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CExternalTextureSource *pObjectX = (EarthView::World::Graphic::CExternalTextureSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCExternalTextureSourceProxy))
				{
					pObjectX->EarthView::World::Graphic::CExternalTextureSource::destroyAdvancedTexture(sTextureName, groupName);
				}
				else
				{
					pObjectX->destroyAdvancedTexture(sTextureName, groupName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_register_1destroyAdvancedTexture_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCExternalTextureSourceProxy *pObjectX = (JCExternalTextureSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyAdvancedTexture_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyAdvancedTexture_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_destroyAdvancedTexture_1EVString_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sTextureName_j, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sTextureName_ch = (const ev_char*)__env->GetStringUTFChars(sTextureName_j,JNI_FALSE);
				const EVString sTextureName = sTextureName_ch;
				__env->ReleaseStringUTFChars(sTextureName_j, (const char *)sTextureName_ch);
				#else
				const ev_wchar* sTextureName_ch = (const ev_wchar*)__env->GetStringChars(sTextureName_j,JNI_FALSE);
				const EVString sTextureName = sTextureName_ch;
				__env->ReleaseStringChars(sTextureName_j, (const jchar *)sTextureName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CExternalTextureSource *pObjectX = (EarthView::World::Graphic::CExternalTextureSource*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CExternalTextureSource::destroyAdvancedTexture(sTextureName, groupName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_destroyAdvancedTexture_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sTextureName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sTextureName_ch = (const ev_char*)__env->GetStringUTFChars(sTextureName_j,JNI_FALSE);
				const EVString sTextureName = sTextureName_ch;
				__env->ReleaseStringUTFChars(sTextureName_j, (const char *)sTextureName_ch);
				#else
				const ev_wchar* sTextureName_ch = (const ev_wchar*)__env->GetStringChars(sTextureName_j,JNI_FALSE);
				const EVString sTextureName = sTextureName_ch;
				__env->ReleaseStringChars(sTextureName_j, (const jchar *)sTextureName_ch);
				#endif
				EarthView::World::Graphic::CExternalTextureSource *pObjectX = (EarthView::World::Graphic::CExternalTextureSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCExternalTextureSourceProxy))
				{
					pObjectX->EarthView::World::Graphic::CExternalTextureSource::destroyAdvancedTexture(sTextureName);
				}
				else
				{
					pObjectX->destroyAdvancedTexture(sTextureName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_register_1destroyAdvancedTexture_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCExternalTextureSourceProxy *pObjectX = (JCExternalTextureSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyAdvancedTexture_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyAdvancedTexture_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_destroyAdvancedTexture_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring sTextureName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* sTextureName_ch = (const ev_char*)__env->GetStringUTFChars(sTextureName_j,JNI_FALSE);
				const EVString sTextureName = sTextureName_ch;
				__env->ReleaseStringUTFChars(sTextureName_j, (const char *)sTextureName_ch);
				#else
				const ev_wchar* sTextureName_ch = (const ev_wchar*)__env->GetStringChars(sTextureName_j,JNI_FALSE);
				const EVString sTextureName = sTextureName_ch;
				__env->ReleaseStringChars(sTextureName_j, (const jchar *)sTextureName_ch);
				#endif
				EarthView::World::Graphic::CExternalTextureSource *pObjectX = (EarthView::World::Graphic::CExternalTextureSource*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CExternalTextureSource::destroyAdvancedTexture(sTextureName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_register_1setParameter_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCExternalTextureSourceProxy *pObjectX = (JCExternalTextureSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParameter_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParameter_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_register_1setParameter_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCExternalTextureSourceProxy *pObjectX = (JCExternalTextureSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParameter_EVString_ev_bool_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParameter_EVString_ev_bool_ev_bool_callback", "(Ljava/lang/String;ZZ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_register_1setParameterList_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCExternalTextureSourceProxy *pObjectX = (JCExternalTextureSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParameterList_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParameterList_CommonStringPairList_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_register_1getParameter_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCExternalTextureSourceProxy *pObjectX = (JCExternalTextureSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getParameter_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getParameter_EVString_callback", "(Ljava/lang/String;)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ExternalTextureSource_register_1copyParametersTo_1CStringInterface(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCExternalTextureSourceProxy *pObjectX = (JCExternalTextureSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_copyParametersTo_CStringInterface_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"copyParametersTo_CStringInterface_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
