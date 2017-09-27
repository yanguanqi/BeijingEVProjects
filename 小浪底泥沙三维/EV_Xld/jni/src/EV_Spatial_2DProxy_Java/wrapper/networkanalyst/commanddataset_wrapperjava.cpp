/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dproxy/networkanalyst/commanddataset.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
class JCNACmdDatasetProxy : public CNACmdDataset
{
 private:
	EarthView::World::Core::ev_string m_getWidth_void_callback;
	EarthView::World::Core::ev_string m_getEntryCount_void_callback;
	EarthView::World::Core::ev_string m_getEntry_ev_uint32_callback;
	EarthView::World::Core::ev_string m_getCurrentIndex_void_callback;
	EarthView::World::Core::ev_string m_currentIndexChanged_ev_uint32_callback;
	EarthView::World::Core::ev_string m_getToolBarType_void_callback;
	EarthView::World::Core::ev_string m_getType_void_callback;
	EarthView::World::Core::ev_string m_getName_void_callback;
	EarthView::World::Core::ev_string m_getCategory_void_callback;
	EarthView::World::Core::ev_string m_getToolTip_void_callback;
	EarthView::World::Core::ev_string m_getIcon_void_callback;
	EarthView::World::Core::ev_string m_isCheckable_void_callback;
	EarthView::World::Core::ev_string m_onClicked_void_callback;
	EarthView::World::Core::ev_string m_getChecked_void_callback;
	EarthView::World::Core::ev_string m_setChecked_ev_bool_callback;
	EarthView::World::Core::ev_string m_getEnabled_void_callback;
	EarthView::World::Core::ev_string m_setEnabled_ev_bool_callback;
	EarthView::World::Core::ev_string m_create_ISpatialControl_callback;
	EarthView::World::Core::ev_string m_update_CEvent_callback;
public:
	JCNACmdDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CNACmdDataset(pList)
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
protected:
	C_DISABLE_COPY(JCNACmdDatasetProxy)
public:
	void register_getWidth_void_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_getWidth_void_callback = __method;
	}
	void register_getEntryCount_void_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_getEntryCount_void_callback = __method;
	}
	void register_getEntry_ev_uint32_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_getEntry_ev_uint32_callback = __method;
	}
	void register_getCurrentIndex_void_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_getCurrentIndex_void_callback = __method;
	}
	void register_currentIndexChanged_ev_uint32_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_currentIndexChanged_ev_uint32_callback = __method;
	}
	void register_getToolBarType_void_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_getToolBarType_void_callback = __method;
	}
	void register_getType_void_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_getType_void_callback = __method;
	}
	void register_getName_void_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_getName_void_callback = __method;
	}
	void register_getCategory_void_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_getCategory_void_callback = __method;
	}
	void register_getToolTip_void_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_getToolTip_void_callback = __method;
	}
	void register_getIcon_void_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_getIcon_void_callback = __method;
	}
	void register_isCheckable_void_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_isCheckable_void_callback = __method;
	}
	void register_onClicked_void_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_onClicked_void_callback = __method;
	}
	void register_getChecked_void_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_getChecked_void_callback = __method;
	}
	void register_setChecked_ev_bool_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_setChecked_ev_bool_callback = __method;
	}
	void register_getEnabled_void_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_getEnabled_void_callback = __method;
	}
	void register_setEnabled_ev_bool_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_setEnabled_ev_bool_callback = __method;
	}
	void register_create_ISpatialControl_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_create_ISpatialControl_callback = __method;
	}
	void register_update_CEvent_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_update_CEvent_callback = __method;
	}
	virtual ev_int32 getCurrentIndex() const
	{
		if (this->_gRef != NULL && this->m_getCurrentIndex_void_callback != "" && this->isCustomExtend())
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
			jmethodID __method = __gr->getMethod("getCurrentIndex_void_callback");
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
			return this->CNACmdDataset::getCurrentIndex();
		}
	}
	virtual ev_uint32 getEntryCount() const
	{
		if (this->_gRef != NULL && this->m_getEntryCount_void_callback != "" && this->isCustomExtend())
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
			jmethodID __method = __gr->getMethod("getEntryCount_void_callback");
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
			return this->CNACmdDataset::getEntryCount();
		}
	}
	virtual EVString getEntry(ev_uint32 index) const
	{
		if (this->_gRef != NULL && this->m_getEntry_ev_uint32_callback != "" && this->isCustomExtend())
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
			jmethodID __method = __gr->getMethod("getEntry_ev_uint32_callback");
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
			return this->CNACmdDataset::getEntry(index);
		}
	}
	virtual void currentIndexChanged(ev_uint32 index)
	{
		if (this->_gRef != NULL && this->m_currentIndexChanged_ev_uint32_callback != "" && this->isCustomExtend())
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
			jmethodID __method = __gr->getMethod("currentIndexChanged_ev_uint32_callback");
			__env->CallVoidMethod(__obj, __method , index_j);
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
			return this->CNACmdDataset::currentIndexChanged(index);
		}
	}
	virtual ev_uint32 getToolBarType() const
	{
		if (this->_gRef != NULL && this->m_getToolBarType_void_callback != "" && this->isCustomExtend())
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
			jmethodID __method = __gr->getMethod("getToolBarType_void_callback");
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
			return this->CNACmdDataset::getToolBarType();
		}
	}
	virtual ev_uint32 getType() const
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
			return this->CNACmdDataset::getType();
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
			return this->CNACmdDataset::getName();
		}
	}
	virtual EVString getCategory() const
	{
		if (this->_gRef != NULL && this->m_getCategory_void_callback != "" && this->isCustomExtend())
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
			jmethodID __method = __gr->getMethod("getCategory_void_callback");
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
			return this->CNACmdDataset::getCategory();
		}
	}
	virtual EVString getToolTip() const
	{
		if (this->_gRef != NULL && this->m_getToolTip_void_callback != "" && this->isCustomExtend())
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
			jmethodID __method = __gr->getMethod("getToolTip_void_callback");
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
			return this->CNACmdDataset::getToolTip();
		}
	}
	virtual EarthView::World::Display::IBitmap* getIcon() const
	{
		if (this->_gRef != NULL && this->m_getIcon_void_callback != "" && this->isCustomExtend())
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
			jmethodID __method = __gr->getMethod("getIcon_void_callback");
			jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
			#if EV_PLATFORM == EV_PLATFORM_ANDROID
			if(__jniAttachable)
			{
				EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
			}
			#else
			EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
			#endif
			EarthView::World::Display::IBitmap *__values1 = (EarthView::World::Display::IBitmap*) __values1_j;
			return __values1;
		}
		else
		{
			return this->CNACmdDataset::getIcon();
		}
	}
	virtual ev_bool isCheckable() const
	{
		if (this->_gRef != NULL && this->m_isCheckable_void_callback != "" && this->isCustomExtend())
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
			jmethodID __method = __gr->getMethod("isCheckable_void_callback");
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
			return this->CNACmdDataset::isCheckable();
		}
	}
	virtual void onClicked()
	{
		if (this->_gRef != NULL && this->m_onClicked_void_callback != "" && this->isCustomExtend())
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
			jmethodID __method = __gr->getMethod("onClicked_void_callback");
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
			return this->CNACmdDataset::onClicked();
		}
	}
	virtual ev_bool getChecked() const
	{
		if (this->_gRef != NULL && this->m_getChecked_void_callback != "" && this->isCustomExtend())
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
			jmethodID __method = __gr->getMethod("getChecked_void_callback");
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
			return this->CNACmdDataset::getChecked();
		}
	}
	virtual void setChecked(ev_bool checked)
	{
		if (this->_gRef != NULL && this->m_setChecked_ev_bool_callback != "" && this->isCustomExtend())
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
			jboolean checked_j = (jboolean) checked;
			jmethodID __method = __gr->getMethod("setChecked_ev_bool_callback");
			__env->CallVoidMethod(__obj, __method , checked_j);
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
			return this->CNACmdDataset::setChecked(checked);
		}
	}
	virtual ev_bool getEnabled() const
	{
		if (this->_gRef != NULL && this->m_getEnabled_void_callback != "" && this->isCustomExtend())
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
			jmethodID __method = __gr->getMethod("getEnabled_void_callback");
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
			return this->CNACmdDataset::getEnabled();
		}
	}
	virtual void setEnabled(ev_bool enabled)
	{
		if (this->_gRef != NULL && this->m_setEnabled_ev_bool_callback != "" && this->isCustomExtend())
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
			jboolean enabled_j = (jboolean) enabled;
			jmethodID __method = __gr->getMethod("setEnabled_ev_bool_callback");
			__env->CallVoidMethod(__obj, __method , enabled_j);
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
			return this->CNACmdDataset::setEnabled(enabled);
		}
	}
	virtual void create(EarthView::World::Spatial::Atlas::ISpatialControl* ctrl)
	{
		if (this->_gRef != NULL && this->m_create_ISpatialControl_callback != "" && this->isCustomExtend())
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
			jlong ctrl_j = (jlong) ctrl;
			jmethodID __method = __gr->getMethod("create_ISpatialControl_callback");
			__env->CallVoidMethod(__obj, __method , ctrl_j);
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
			return this->CNACmdDataset::create(ctrl);
		}
	}
	virtual ev_bool update(EarthView::World::Core::CEvent* e)
	{
		if (this->_gRef != NULL && this->m_update_CEvent_callback != "" && this->isCustomExtend())
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
			jlong e_j = (jlong) e;
			jmethodID __method = __gr->getMethod("update_CEvent_callback");
			jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
			return this->CNACmdDataset::update(e);
		}
	}
	virtual ev_uint32 getWidth() const
	{
		if (this->_gRef != NULL && this->m_getWidth_void_callback != "" && this->isCustomExtend())
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
			jmethodID __method = __gr->getMethod("getWidth_void_callback");
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
			return this->CNACmdDataset::getWidth();
		}
	}
};
REGISTER_FACTORY_CLASS(JCNACmdDatasetProxy);
extern "C" JNIEXPORT jint JNICALL Java_global_Nacmddataset_getCurrentIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdDatasetProxy))
	{
		ev_int32 __values1 = pObjectX->CNACmdDataset::getCurrentIndex();
		jint __values1_j = (jint)__values1;
		return __values1_j;
	}
	else
	{
		ev_int32 __values1 = pObjectX->getCurrentIndex();
		jint __values1_j = (jint)__values1;
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_register_1getCurrentIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdDatasetProxy *pObjectX = (JCNACmdDatasetProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_getCurrentIndex_void_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"getCurrentIndex_void_callback", "()I");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT jint JNICALL Java_global_Nacmddataset_getCurrentIndex_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	ev_int32 __values1 = pObjectX->CNACmdDataset::getCurrentIndex();
	jint __values1_j = (jint)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_Nacmddataset_getEntryCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdDatasetProxy))
	{
		ev_uint32 __values1 = pObjectX->CNACmdDataset::getEntryCount();
		jlong __values1_j = (jlong) __values1;
		return __values1_j;
	}
	else
	{
		ev_uint32 __values1 = pObjectX->getEntryCount();
		jlong __values1_j = (jlong) __values1;
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_register_1getEntryCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdDatasetProxy *pObjectX = (JCNACmdDatasetProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_getEntryCount_void_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"getEntryCount_void_callback", "()J");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT jlong JNICALL Java_global_Nacmddataset_getEntryCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	ev_uint32 __values1 = pObjectX->CNACmdDataset::getEntryCount();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jstring JNICALL Java_global_Nacmddataset_getEntry_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
{
	ev_uint32 index = (ev_uint32) index_j;
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdDatasetProxy))
	{
		EVString __values1 = pObjectX->CNACmdDataset::getEntry(index);
		EarthView::World::Core::ev_wstring valuesw1 = __values1;
		jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
		return __values1_j;
	}
	else
	{
		EVString __values1 = pObjectX->getEntry(index);
		EarthView::World::Core::ev_wstring valuesw1 = __values1;
		jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_register_1getEntry_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdDatasetProxy *pObjectX = (JCNACmdDatasetProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_getEntry_ev_uint32_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"getEntry_ev_uint32_callback", "(J)Ljava/lang/String;");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT jstring JNICALL Java_global_Nacmddataset_getEntry_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
{
	ev_uint32 index = (ev_uint32) index_j;
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	EVString __values1 = pObjectX->CNACmdDataset::getEntry(index);
	EarthView::World::Core::ev_wstring valuesw1 = __values1;
	jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_currentIndexChanged_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
{
	ev_uint32 index = (ev_uint32) index_j;
	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdDatasetProxy))
	{
		pObjectX->CNACmdDataset::currentIndexChanged(index);
	}
	else
	{
		pObjectX->currentIndexChanged(index);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_register_1currentIndexChanged_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdDatasetProxy *pObjectX = (JCNACmdDatasetProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_currentIndexChanged_ev_uint32_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"currentIndexChanged_ev_uint32_callback", "(J)V");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_currentIndexChanged_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
{
	ev_uint32 index = (ev_uint32) index_j;
	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	pObjectX->CNACmdDataset::currentIndexChanged(index);
}
extern "C" JNIEXPORT jlong JNICALL Java_global_Nacmddataset_getToolBarType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdDatasetProxy))
	{
		ev_uint32 __values1 = pObjectX->CNACmdDataset::getToolBarType();
		jlong __values1_j = (jlong) __values1;
		return __values1_j;
	}
	else
	{
		ev_uint32 __values1 = pObjectX->getToolBarType();
		jlong __values1_j = (jlong) __values1;
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_register_1getToolBarType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdDatasetProxy *pObjectX = (JCNACmdDatasetProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_getToolBarType_void_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"getToolBarType_void_callback", "()J");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT jlong JNICALL Java_global_Nacmddataset_getToolBarType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	ev_uint32 __values1 = pObjectX->CNACmdDataset::getToolBarType();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_Nacmddataset_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdDatasetProxy))
	{
		ev_uint32 __values1 = pObjectX->CNACmdDataset::getType();
		jlong __values1_j = (jlong) __values1;
		return __values1_j;
	}
	else
	{
		ev_uint32 __values1 = pObjectX->getType();
		jlong __values1_j = (jlong) __values1;
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdDatasetProxy *pObjectX = (JCNACmdDatasetProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_getType_void_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()J");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT jlong JNICALL Java_global_Nacmddataset_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	ev_uint32 __values1 = pObjectX->CNACmdDataset::getType();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jstring JNICALL Java_global_Nacmddataset_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdDatasetProxy))
	{
		EVString __values1 = pObjectX->CNACmdDataset::getName();
		EarthView::World::Core::ev_wstring valuesw1 = __values1;
		jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
		return __values1_j;
	}
	else
	{
		EVString __values1 = pObjectX->getName();
		EarthView::World::Core::ev_wstring valuesw1 = __values1;
		jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdDatasetProxy *pObjectX = (JCNACmdDatasetProxy*) pObjXXXX;
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
extern "C" JNIEXPORT jstring JNICALL Java_global_Nacmddataset_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	EVString __values1 = pObjectX->CNACmdDataset::getName();
	EarthView::World::Core::ev_wstring valuesw1 = __values1;
	jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
	return __values1_j;
}
extern "C" JNIEXPORT jstring JNICALL Java_global_Nacmddataset_getCategory_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdDatasetProxy))
	{
		EVString __values1 = pObjectX->CNACmdDataset::getCategory();
		EarthView::World::Core::ev_wstring valuesw1 = __values1;
		jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
		return __values1_j;
	}
	else
	{
		EVString __values1 = pObjectX->getCategory();
		EarthView::World::Core::ev_wstring valuesw1 = __values1;
		jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_register_1getCategory_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdDatasetProxy *pObjectX = (JCNACmdDatasetProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_getCategory_void_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"getCategory_void_callback", "()Ljava/lang/String;");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT jstring JNICALL Java_global_Nacmddataset_getCategory_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	EVString __values1 = pObjectX->CNACmdDataset::getCategory();
	EarthView::World::Core::ev_wstring valuesw1 = __values1;
	jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
	return __values1_j;
}
extern "C" JNIEXPORT jstring JNICALL Java_global_Nacmddataset_getToolTip_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdDatasetProxy))
	{
		EVString __values1 = pObjectX->CNACmdDataset::getToolTip();
		EarthView::World::Core::ev_wstring valuesw1 = __values1;
		jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
		return __values1_j;
	}
	else
	{
		EVString __values1 = pObjectX->getToolTip();
		EarthView::World::Core::ev_wstring valuesw1 = __values1;
		jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_register_1getToolTip_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdDatasetProxy *pObjectX = (JCNACmdDatasetProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_getToolTip_void_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"getToolTip_void_callback", "()Ljava/lang/String;");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT jstring JNICALL Java_global_Nacmddataset_getToolTip_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	EVString __values1 = pObjectX->CNACmdDataset::getToolTip();
	EarthView::World::Core::ev_wstring valuesw1 = __values1;
	jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_Nacmddataset_getIcon_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdDatasetProxy))
	{
		EarthView::World::Display::IBitmap* __values1 = pObjectX->CNACmdDataset::getIcon();
		jlong __values1_j = (jlong) __values1;
		return __values1_j;
	}
	else
	{
		EarthView::World::Display::IBitmap* __values1 = pObjectX->getIcon();
		jlong __values1_j = (jlong) __values1;
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_register_1getIcon_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdDatasetProxy *pObjectX = (JCNACmdDatasetProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_getIcon_void_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"getIcon_void_callback", "()J");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT jlong JNICALL Java_global_Nacmddataset_getIcon_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	EarthView::World::Display::IBitmap* __values1 = pObjectX->CNACmdDataset::getIcon();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Nacmddataset_isCheckable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdDatasetProxy))
	{
		ev_bool __values1 = pObjectX->CNACmdDataset::isCheckable();
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
	else
	{
		ev_bool __values1 = pObjectX->isCheckable();
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_register_1isCheckable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdDatasetProxy *pObjectX = (JCNACmdDatasetProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_isCheckable_void_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"isCheckable_void_callback", "()Z");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Nacmddataset_isCheckable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	ev_bool __values1 = pObjectX->CNACmdDataset::isCheckable();
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_onClicked_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdDatasetProxy))
	{
		pObjectX->CNACmdDataset::onClicked();
	}
	else
	{
		pObjectX->onClicked();
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_register_1onClicked_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdDatasetProxy *pObjectX = (JCNACmdDatasetProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_onClicked_void_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"onClicked_void_callback", "()V");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_onClicked_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	pObjectX->CNACmdDataset::onClicked();
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Nacmddataset_getChecked_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdDatasetProxy))
	{
		ev_bool __values1 = pObjectX->CNACmdDataset::getChecked();
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
	else
	{
		ev_bool __values1 = pObjectX->getChecked();
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_register_1getChecked_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdDatasetProxy *pObjectX = (JCNACmdDatasetProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_getChecked_void_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"getChecked_void_callback", "()Z");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Nacmddataset_getChecked_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	ev_bool __values1 = pObjectX->CNACmdDataset::getChecked();
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_setChecked_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean checked_j)
{
	ev_bool checked = (ev_bool) checked_j;
	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdDatasetProxy))
	{
		pObjectX->CNACmdDataset::setChecked(checked);
	}
	else
	{
		pObjectX->setChecked(checked);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_register_1setChecked_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdDatasetProxy *pObjectX = (JCNACmdDatasetProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_setChecked_ev_bool_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"setChecked_ev_bool_callback", "(Z)V");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_setChecked_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean checked_j)
{
	ev_bool checked = (ev_bool) checked_j;
	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	pObjectX->CNACmdDataset::setChecked(checked);
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Nacmddataset_getEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdDatasetProxy))
	{
		ev_bool __values1 = pObjectX->CNACmdDataset::getEnabled();
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
	else
	{
		ev_bool __values1 = pObjectX->getEnabled();
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_register_1getEnabled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdDatasetProxy *pObjectX = (JCNACmdDatasetProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_getEnabled_void_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"getEnabled_void_callback", "()Z");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Nacmddataset_getEnabled_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	ev_bool __values1 = pObjectX->CNACmdDataset::getEnabled();
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_setEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
{
	ev_bool enabled = (ev_bool) enabled_j;
	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdDatasetProxy))
	{
		pObjectX->CNACmdDataset::setEnabled(enabled);
	}
	else
	{
		pObjectX->setEnabled(enabled);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_register_1setEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdDatasetProxy *pObjectX = (JCNACmdDatasetProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_setEnabled_ev_bool_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"setEnabled_ev_bool_callback", "(Z)V");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_setEnabled_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
{
	ev_bool enabled = (ev_bool) enabled_j;
	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	pObjectX->CNACmdDataset::setEnabled(enabled);
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_create_1ISpatialControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ctrl_j)
{
	EarthView::World::Spatial::Atlas::ISpatialControl *ctrl = (EarthView::World::Spatial::Atlas::ISpatialControl*) ctrl_j;
	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdDatasetProxy))
	{
		pObjectX->CNACmdDataset::create(ctrl);
	}
	else
	{
		pObjectX->create(ctrl);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_register_1create_1ISpatialControl(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdDatasetProxy *pObjectX = (JCNACmdDatasetProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_create_ISpatialControl_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"create_ISpatialControl_callback", "(J)V");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_create_1ISpatialControl_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ctrl_j)
{
	EarthView::World::Spatial::Atlas::ISpatialControl *ctrl = (EarthView::World::Spatial::Atlas::ISpatialControl*) ctrl_j;
	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	pObjectX->CNACmdDataset::create(ctrl);
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Nacmddataset_update_1CEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
{
	EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdDatasetProxy))
	{
		ev_bool __values1 = pObjectX->CNACmdDataset::update(e);
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
	else
	{
		ev_bool __values1 = pObjectX->update(e);
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_register_1update_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdDatasetProxy *pObjectX = (JCNACmdDatasetProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_update_CEvent_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"update_CEvent_callback", "(J)Z");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Nacmddataset_update_1CEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
{
	EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	ev_bool __values1 = pObjectX->CNACmdDataset::update(e);
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_Nacmddataset_getCurrentDataset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdDataset *pObjectX = (CNACmdDataset*) pObjXXXX;
	EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->getCurrentDataset();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmddataset_register_1getWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdDatasetProxy *pObjectX = (JCNACmdDatasetProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_getWidth_void_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"getWidth_void_callback", "()J");
		__gr->setMethod(sMethod, __method);
	}
}
