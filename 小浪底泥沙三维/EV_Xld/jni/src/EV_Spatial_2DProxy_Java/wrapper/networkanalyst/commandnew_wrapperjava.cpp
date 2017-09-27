/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dproxy/networkanalyst/commandnew.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
class JCNACmdNewProxy : public CNACmdNew
{
 private:
	EarthView::World::Core::ev_string m_addCommand_ICommand_callback;
	EarthView::World::Core::ev_string m_getCount_void_callback;
	EarthView::World::Core::ev_string m_getCommand_ev_uint32_callback;
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
	JCNACmdNewProxy(EarthView::World::Core::CNameValuePairList *pList) : CNACmdNew(pList)
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
	C_DISABLE_COPY(JCNACmdNewProxy)
public:
	void register_addCommand_ICommand_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_addCommand_ICommand_callback = __method;
	}
	void register_getCount_void_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_getCount_void_callback = __method;
	}
	void register_getCommand_ev_uint32_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_getCommand_ev_uint32_callback = __method;
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
	virtual ev_uint32 getCount() const
	{
		if (this->_gRef != NULL && this->m_getCount_void_callback != "" && this->isCustomExtend())
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
			jmethodID __method = __gr->getMethod("getCount_void_callback");
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
			return this->CNACmdNew::getCount();
		}
	}
	virtual EarthView::World::Spatial::SystemUI::ICommand* getCommand(ev_uint32 index) const
	{
		if (this->_gRef != NULL && this->m_getCommand_ev_uint32_callback != "" && this->isCustomExtend())
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
			jmethodID __method = __gr->getMethod("getCommand_ev_uint32_callback");
			jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
			#if EV_PLATFORM == EV_PLATFORM_ANDROID
			if(__jniAttachable)
			{
				EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
			}
			#else
			EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
			#endif
			EarthView::World::Spatial::SystemUI::ICommand *__values1 = (EarthView::World::Spatial::SystemUI::ICommand*) __values1_j;
			return __values1;
		}
		else
		{
			return this->CNACmdNew::getCommand(index);
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
			return this->CNACmdNew::getToolBarType();
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
			return this->CNACmdNew::getType();
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
			return this->CNACmdNew::getName();
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
			return this->CNACmdNew::getCategory();
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
			return this->CNACmdNew::getToolTip();
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
			return this->CNACmdNew::getIcon();
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
			return this->CNACmdNew::isCheckable();
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
			return this->CNACmdNew::onClicked();
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
			return this->CNACmdNew::getChecked();
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
			return this->CNACmdNew::setChecked(checked);
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
			return this->CNACmdNew::getEnabled();
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
			return this->CNACmdNew::setEnabled(enabled);
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
			return this->CNACmdNew::create(ctrl);
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
			return this->CNACmdNew::update(e);
		}
	}
	virtual void addCommand(EarthView::World::Spatial::SystemUI::ICommand* ref_cmd)
	{
		if (this->_gRef != NULL && this->m_addCommand_ICommand_callback != "" && this->isCustomExtend())
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
			jlong ref_cmd_j = (jlong) ref_cmd;
			jmethodID __method = __gr->getMethod("addCommand_ICommand_callback");
			__env->CallVoidMethod(__obj, __method , ref_cmd_j);
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
			return this->CNACmdNew::addCommand(ref_cmd);
		}
	}
};
REGISTER_FACTORY_CLASS(JCNACmdNewProxy);
extern "C" JNIEXPORT jlong JNICALL Java_global_Nacmdnew_getCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdNewProxy))
	{
		ev_uint32 __values1 = pObjectX->CNACmdNew::getCount();
		jlong __values1_j = (jlong) __values1;
		return __values1_j;
	}
	else
	{
		ev_uint32 __values1 = pObjectX->getCount();
		jlong __values1_j = (jlong) __values1;
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_register_1getCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdNewProxy *pObjectX = (JCNACmdNewProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_getCount_void_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"getCount_void_callback", "()J");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT jlong JNICALL Java_global_Nacmdnew_getCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	ev_uint32 __values1 = pObjectX->CNACmdNew::getCount();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_Nacmdnew_getCommand_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
{
	ev_uint32 index = (ev_uint32) index_j;
	const 	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdNewProxy))
	{
		EarthView::World::Spatial::SystemUI::ICommand* __values1 = pObjectX->CNACmdNew::getCommand(index);
		jlong __values1_j = (jlong) __values1;
		return __values1_j;
	}
	else
	{
		EarthView::World::Spatial::SystemUI::ICommand* __values1 = pObjectX->getCommand(index);
		jlong __values1_j = (jlong) __values1;
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_register_1getCommand_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdNewProxy *pObjectX = (JCNACmdNewProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_getCommand_ev_uint32_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"getCommand_ev_uint32_callback", "(J)J");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT jlong JNICALL Java_global_Nacmdnew_getCommand_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
{
	ev_uint32 index = (ev_uint32) index_j;
	const 	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	EarthView::World::Spatial::SystemUI::ICommand* __values1 = pObjectX->CNACmdNew::getCommand(index);
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_Nacmdnew_getToolBarType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdNewProxy))
	{
		ev_uint32 __values1 = pObjectX->CNACmdNew::getToolBarType();
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
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_register_1getToolBarType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdNewProxy *pObjectX = (JCNACmdNewProxy*) pObjXXXX;
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
extern "C" JNIEXPORT jlong JNICALL Java_global_Nacmdnew_getToolBarType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	ev_uint32 __values1 = pObjectX->CNACmdNew::getToolBarType();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_Nacmdnew_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdNewProxy))
	{
		ev_uint32 __values1 = pObjectX->CNACmdNew::getType();
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
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdNewProxy *pObjectX = (JCNACmdNewProxy*) pObjXXXX;
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
extern "C" JNIEXPORT jlong JNICALL Java_global_Nacmdnew_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	ev_uint32 __values1 = pObjectX->CNACmdNew::getType();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jstring JNICALL Java_global_Nacmdnew_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdNewProxy))
	{
		EVString __values1 = pObjectX->CNACmdNew::getName();
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
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdNewProxy *pObjectX = (JCNACmdNewProxy*) pObjXXXX;
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
extern "C" JNIEXPORT jstring JNICALL Java_global_Nacmdnew_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	EVString __values1 = pObjectX->CNACmdNew::getName();
	EarthView::World::Core::ev_wstring valuesw1 = __values1;
	jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
	return __values1_j;
}
extern "C" JNIEXPORT jstring JNICALL Java_global_Nacmdnew_getCategory_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdNewProxy))
	{
		EVString __values1 = pObjectX->CNACmdNew::getCategory();
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
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_register_1getCategory_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdNewProxy *pObjectX = (JCNACmdNewProxy*) pObjXXXX;
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
extern "C" JNIEXPORT jstring JNICALL Java_global_Nacmdnew_getCategory_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	EVString __values1 = pObjectX->CNACmdNew::getCategory();
	EarthView::World::Core::ev_wstring valuesw1 = __values1;
	jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
	return __values1_j;
}
extern "C" JNIEXPORT jstring JNICALL Java_global_Nacmdnew_getToolTip_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdNewProxy))
	{
		EVString __values1 = pObjectX->CNACmdNew::getToolTip();
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
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_register_1getToolTip_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdNewProxy *pObjectX = (JCNACmdNewProxy*) pObjXXXX;
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
extern "C" JNIEXPORT jstring JNICALL Java_global_Nacmdnew_getToolTip_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	EVString __values1 = pObjectX->CNACmdNew::getToolTip();
	EarthView::World::Core::ev_wstring valuesw1 = __values1;
	jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_Nacmdnew_getIcon_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdNewProxy))
	{
		EarthView::World::Display::IBitmap* __values1 = pObjectX->CNACmdNew::getIcon();
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
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_register_1getIcon_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdNewProxy *pObjectX = (JCNACmdNewProxy*) pObjXXXX;
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
extern "C" JNIEXPORT jlong JNICALL Java_global_Nacmdnew_getIcon_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	EarthView::World::Display::IBitmap* __values1 = pObjectX->CNACmdNew::getIcon();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Nacmdnew_isCheckable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdNewProxy))
	{
		ev_bool __values1 = pObjectX->CNACmdNew::isCheckable();
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
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_register_1isCheckable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdNewProxy *pObjectX = (JCNACmdNewProxy*) pObjXXXX;
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
extern "C" JNIEXPORT jboolean JNICALL Java_global_Nacmdnew_isCheckable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	ev_bool __values1 = pObjectX->CNACmdNew::isCheckable();
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_onClicked_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdNewProxy))
	{
		pObjectX->CNACmdNew::onClicked();
	}
	else
	{
		pObjectX->onClicked();
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_register_1onClicked_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdNewProxy *pObjectX = (JCNACmdNewProxy*) pObjXXXX;
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
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_onClicked_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	pObjectX->CNACmdNew::onClicked();
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Nacmdnew_getChecked_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdNewProxy))
	{
		ev_bool __values1 = pObjectX->CNACmdNew::getChecked();
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
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_register_1getChecked_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdNewProxy *pObjectX = (JCNACmdNewProxy*) pObjXXXX;
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
extern "C" JNIEXPORT jboolean JNICALL Java_global_Nacmdnew_getChecked_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	ev_bool __values1 = pObjectX->CNACmdNew::getChecked();
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_setChecked_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean checked_j)
{
	ev_bool checked = (ev_bool) checked_j;
	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdNewProxy))
	{
		pObjectX->CNACmdNew::setChecked(checked);
	}
	else
	{
		pObjectX->setChecked(checked);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_register_1setChecked_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdNewProxy *pObjectX = (JCNACmdNewProxy*) pObjXXXX;
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
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_setChecked_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean checked_j)
{
	ev_bool checked = (ev_bool) checked_j;
	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	pObjectX->CNACmdNew::setChecked(checked);
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Nacmdnew_getEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdNewProxy))
	{
		ev_bool __values1 = pObjectX->CNACmdNew::getEnabled();
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
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_register_1getEnabled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdNewProxy *pObjectX = (JCNACmdNewProxy*) pObjXXXX;
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
extern "C" JNIEXPORT jboolean JNICALL Java_global_Nacmdnew_getEnabled_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	ev_bool __values1 = pObjectX->CNACmdNew::getEnabled();
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_setEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
{
	ev_bool enabled = (ev_bool) enabled_j;
	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdNewProxy))
	{
		pObjectX->CNACmdNew::setEnabled(enabled);
	}
	else
	{
		pObjectX->setEnabled(enabled);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_register_1setEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdNewProxy *pObjectX = (JCNACmdNewProxy*) pObjXXXX;
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
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_setEnabled_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
{
	ev_bool enabled = (ev_bool) enabled_j;
	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	pObjectX->CNACmdNew::setEnabled(enabled);
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_create_1ISpatialControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ctrl_j)
{
	EarthView::World::Spatial::Atlas::ISpatialControl *ctrl = (EarthView::World::Spatial::Atlas::ISpatialControl*) ctrl_j;
	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdNewProxy))
	{
		pObjectX->CNACmdNew::create(ctrl);
	}
	else
	{
		pObjectX->create(ctrl);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_register_1create_1ISpatialControl(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdNewProxy *pObjectX = (JCNACmdNewProxy*) pObjXXXX;
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
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_create_1ISpatialControl_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ctrl_j)
{
	EarthView::World::Spatial::Atlas::ISpatialControl *ctrl = (EarthView::World::Spatial::Atlas::ISpatialControl*) ctrl_j;
	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	pObjectX->CNACmdNew::create(ctrl);
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Nacmdnew_update_1CEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
{
	EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNACmdNewProxy))
	{
		ev_bool __values1 = pObjectX->CNACmdNew::update(e);
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
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_register_1update_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdNewProxy *pObjectX = (JCNACmdNewProxy*) pObjXXXX;
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
extern "C" JNIEXPORT jboolean JNICALL Java_global_Nacmdnew_update_1CEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
{
	EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
	CNACmdNew *pObjectX = (CNACmdNew*) pObjXXXX;
	ev_bool __values1 = pObjectX->CNACmdNew::update(e);
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_Nacmdnew_register_1addCommand_1ICommand(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNACmdNewProxy *pObjectX = (JCNACmdNewProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_addCommand_ICommand_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"addCommand_ICommand_callback", "(J)V");
		__gr->setMethod(sMethod, __method);
	}
}
