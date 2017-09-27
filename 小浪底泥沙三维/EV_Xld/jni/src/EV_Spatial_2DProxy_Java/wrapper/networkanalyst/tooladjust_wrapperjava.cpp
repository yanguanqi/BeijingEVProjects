/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dproxy/networkanalyst/tooladjust.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
class JCNAToolAdjustProxy : public CNAToolAdjust
{
 private:
	EarthView::World::Core::ev_string m_activate_void_callback;
	EarthView::World::Core::ev_string m_deactivate_void_callback;
	EarthView::World::Core::ev_string m_getCursor_void_callback;
	EarthView::World::Core::ev_string m_onContextMenu_ev_int32_ev_int32_callback;
	EarthView::World::Core::ev_string m_onDoubleClick_void_callback;
	EarthView::World::Core::ev_string m_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_callback;
	EarthView::World::Core::ev_string m_onKeyDown_ev_int32_ev_int32_callback;
	EarthView::World::Core::ev_string m_onKeyUp_ev_int32_ev_int32_callback;
	EarthView::World::Core::ev_string m_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback;
	EarthView::World::Core::ev_string m_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback;
	EarthView::World::Core::ev_string m_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback;
	EarthView::World::Core::ev_string m_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_callback;
	EarthView::World::Core::ev_string m_onTouchDown_MotionEvent_callback;
	EarthView::World::Core::ev_string m_onTouchUp_MotionEvent_callback;
	EarthView::World::Core::ev_string m_onTouchMove_MotionEvent_callback;
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
	JCNAToolAdjustProxy(EarthView::World::Core::CNameValuePairList *pList) : CNAToolAdjust(pList)
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
	C_DISABLE_COPY(JCNAToolAdjustProxy)
public:
	void register_activate_void_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_activate_void_callback = __method;
	}
	void register_deactivate_void_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_deactivate_void_callback = __method;
	}
	void register_getCursor_void_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_getCursor_void_callback = __method;
	}
	void register_onContextMenu_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_onContextMenu_ev_int32_ev_int32_callback = __method;
	}
	void register_onDoubleClick_void_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_onDoubleClick_void_callback = __method;
	}
	void register_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_callback = __method;
	}
	void register_onKeyDown_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_onKeyDown_ev_int32_ev_int32_callback = __method;
	}
	void register_onKeyUp_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_onKeyUp_ev_int32_ev_int32_callback = __method;
	}
	void register_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback = __method;
	}
	void register_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback = __method;
	}
	void register_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback = __method;
	}
	void register_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_callback = __method;
	}
	void register_onTouchDown_MotionEvent_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_onTouchDown_MotionEvent_callback = __method;
	}
	void register_onTouchUp_MotionEvent_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_onTouchUp_MotionEvent_callback = __method;
	}
	void register_onTouchMove_MotionEvent_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_onTouchMove_MotionEvent_callback = __method;
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
			return this->CNAToolAdjust::getToolBarType();
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
			return this->CNAToolAdjust::getType();
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
			return this->CNAToolAdjust::getName();
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
			return this->CNAToolAdjust::getCategory();
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
			return this->CNAToolAdjust::getToolTip();
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
			return this->CNAToolAdjust::getIcon();
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
			return this->CNAToolAdjust::isCheckable();
		}
	}
	virtual ev_int32 getCursor()
	{
		if (this->_gRef != NULL && this->m_getCursor_void_callback != "" && this->isCustomExtend())
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
			jmethodID __method = __gr->getMethod("getCursor_void_callback");
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
			return this->CNAToolAdjust::getCursor();
		}
	}
	virtual void activate()
	{
		if (this->_gRef != NULL && this->m_activate_void_callback != "" && this->isCustomExtend())
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
			jmethodID __method = __gr->getMethod("activate_void_callback");
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
			return this->CNAToolAdjust::activate();
		}
	}
	virtual void deactivate()
	{
		if (this->_gRef != NULL && this->m_deactivate_void_callback != "" && this->isCustomExtend())
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
			jmethodID __method = __gr->getMethod("deactivate_void_callback");
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
			return this->CNAToolAdjust::deactivate();
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
			return this->CNAToolAdjust::onClicked();
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
			return this->CNAToolAdjust::getChecked();
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
			return this->CNAToolAdjust::setChecked(checked);
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
			return this->CNAToolAdjust::getEnabled();
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
			return this->CNAToolAdjust::setEnabled(enabled);
		}
	}
	virtual ev_bool onKeyDown(ev_int32 keyCode, ev_int32 shift)
	{
		if (this->_gRef != NULL && this->m_onKeyDown_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
			jint keyCode_j = (jint) keyCode;
			jint shift_j = (jint) shift;
			jmethodID __method = __gr->getMethod("onKeyDown_ev_int32_ev_int32_callback");
			jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , keyCode_j, shift_j);
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
			return this->CNAToolAdjust::onKeyDown(keyCode, shift);
		}
	}
	virtual ev_bool onMouseDown(ev_int32 button, ev_int32 shift, ev_int32 x, ev_int32 y)
	{
		if (this->_gRef != NULL && this->m_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
			jint button_j = (jint) button;
			jint shift_j = (jint) shift;
			jint x_j = (jint) x;
			jint y_j = (jint) y;
			jmethodID __method = __gr->getMethod("onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback");
			jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , button_j, shift_j, x_j, y_j);
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
			return this->CNAToolAdjust::onMouseDown(button, shift, x, y);
		}
	}
	virtual ev_bool onMouseMove(ev_int32 button, ev_int32 shift, ev_int32 x, ev_int32 y)
	{
		if (this->_gRef != NULL && this->m_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
			jint button_j = (jint) button;
			jint shift_j = (jint) shift;
			jint x_j = (jint) x;
			jint y_j = (jint) y;
			jmethodID __method = __gr->getMethod("onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback");
			jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , button_j, shift_j, x_j, y_j);
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
			return this->CNAToolAdjust::onMouseMove(button, shift, x, y);
		}
	}
	virtual ev_bool onMouseUp(ev_int32 button, ev_int32 shift, ev_int32 x, ev_int32 y)
	{
		if (this->_gRef != NULL && this->m_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
			jint button_j = (jint) button;
			jint shift_j = (jint) shift;
			jint x_j = (jint) x;
			jint y_j = (jint) y;
			jmethodID __method = __gr->getMethod("onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback");
			jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , button_j, shift_j, x_j, y_j);
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
			return this->CNAToolAdjust::onMouseUp(button, shift, x, y);
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
			return this->CNAToolAdjust::update(e);
		}
	}
	virtual void create(EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
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
			jlong ref_ctrl_j = (jlong) ref_ctrl;
			jmethodID __method = __gr->getMethod("create_ISpatialControl_callback");
			__env->CallVoidMethod(__obj, __method , ref_ctrl_j);
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
			return this->CNAToolAdjust::create(ref_ctrl);
		}
	}
	virtual ev_bool onMouseWheel(ev_int32 delta, ev_int32 x, ev_int32 y, ev_int32 flag)
	{
		if (this->_gRef != NULL && this->m_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
			jint delta_j = (jint) delta;
			jint x_j = (jint) x;
			jint y_j = (jint) y;
			jint flag_j = (jint) flag;
			jmethodID __method = __gr->getMethod("onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_callback");
			jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , delta_j, x_j, y_j, flag_j);
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
			return this->CNAToolAdjust::onMouseWheel(delta, x, y, flag);
		}
	}
	virtual ev_bool onKeyUp(ev_int32 keyCode, ev_int32 shift)
	{
		if (this->_gRef != NULL && this->m_onKeyUp_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
			jint keyCode_j = (jint) keyCode;
			jint shift_j = (jint) shift;
			jmethodID __method = __gr->getMethod("onKeyUp_ev_int32_ev_int32_callback");
			jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , keyCode_j, shift_j);
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
			return this->CNAToolAdjust::onKeyUp(keyCode, shift);
		}
	}
	virtual ev_bool onDoubleClick()
	{
		if (this->_gRef != NULL && this->m_onDoubleClick_void_callback != "" && this->isCustomExtend())
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
			jmethodID __method = __gr->getMethod("onDoubleClick_void_callback");
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
			return this->CNAToolAdjust::onDoubleClick();
		}
	}
	virtual ev_bool onDoubleClick(ev_int32 button, ev_int32 shift, ev_int32 x, ev_int32 y)
	{
		if (this->_gRef != NULL && this->m_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
			jint button_j = (jint) button;
			jint shift_j = (jint) shift;
			jint x_j = (jint) x;
			jint y_j = (jint) y;
			jmethodID __method = __gr->getMethod("onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_callback");
			jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , button_j, shift_j, x_j, y_j);
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
			return this->CNAToolAdjust::onDoubleClick(button, shift, x, y);
		}
	}
	virtual ev_bool onTouchDown(const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
	{
		if (this->_gRef != NULL && this->m_onTouchDown_MotionEvent_callback != "" && this->isCustomExtend())
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
			jlong touchEvent_j = (jlong) &touchEvent;
			jmethodID __method = __gr->getMethod("onTouchDown_MotionEvent_callback");
			jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , touchEvent_j);
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
			return this->CNAToolAdjust::onTouchDown(touchEvent);
		}
	}
	virtual ev_bool onTouchUp(const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
	{
		if (this->_gRef != NULL && this->m_onTouchUp_MotionEvent_callback != "" && this->isCustomExtend())
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
			jlong touchEvent_j = (jlong) &touchEvent;
			jmethodID __method = __gr->getMethod("onTouchUp_MotionEvent_callback");
			jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , touchEvent_j);
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
			return this->CNAToolAdjust::onTouchUp(touchEvent);
		}
	}
	virtual ev_bool onTouchMove(const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
	{
		if (this->_gRef != NULL && this->m_onTouchMove_MotionEvent_callback != "" && this->isCustomExtend())
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
			jlong touchEvent_j = (jlong) &touchEvent;
			jmethodID __method = __gr->getMethod("onTouchMove_MotionEvent_callback");
			jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , touchEvent_j);
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
			return this->CNAToolAdjust::onTouchMove(touchEvent);
		}
	}
	virtual ev_bool onContextMenu(ev_int32 x, ev_int32 y)
	{
		if (this->_gRef != NULL && this->m_onContextMenu_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
			jint x_j = (jint) x;
			jint y_j = (jint) y;
			jmethodID __method = __gr->getMethod("onContextMenu_ev_int32_ev_int32_callback");
			jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , x_j, y_j);
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
			return this->CNAToolAdjust::onContextMenu(x, y);
		}
	}
};
REGISTER_FACTORY_CLASS(JCNAToolAdjustProxy);
extern "C" JNIEXPORT jlong JNICALL Java_global_Natooladjust_getToolBarType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNAToolAdjustProxy))
	{
		ev_uint32 __values1 = pObjectX->CNAToolAdjust::getToolBarType();
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
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1getToolBarType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
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
extern "C" JNIEXPORT jlong JNICALL Java_global_Natooladjust_getToolBarType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	ev_uint32 __values1 = pObjectX->CNAToolAdjust::getToolBarType();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_Natooladjust_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNAToolAdjustProxy))
	{
		ev_uint32 __values1 = pObjectX->CNAToolAdjust::getType();
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
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
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
extern "C" JNIEXPORT jlong JNICALL Java_global_Natooladjust_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	ev_uint32 __values1 = pObjectX->CNAToolAdjust::getType();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jstring JNICALL Java_global_Natooladjust_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNAToolAdjustProxy))
	{
		EVString __values1 = pObjectX->CNAToolAdjust::getName();
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
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
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
extern "C" JNIEXPORT jstring JNICALL Java_global_Natooladjust_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	EVString __values1 = pObjectX->CNAToolAdjust::getName();
	EarthView::World::Core::ev_wstring valuesw1 = __values1;
	jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
	return __values1_j;
}
extern "C" JNIEXPORT jstring JNICALL Java_global_Natooladjust_getCategory_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNAToolAdjustProxy))
	{
		EVString __values1 = pObjectX->CNAToolAdjust::getCategory();
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
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1getCategory_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
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
extern "C" JNIEXPORT jstring JNICALL Java_global_Natooladjust_getCategory_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	EVString __values1 = pObjectX->CNAToolAdjust::getCategory();
	EarthView::World::Core::ev_wstring valuesw1 = __values1;
	jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
	return __values1_j;
}
extern "C" JNIEXPORT jstring JNICALL Java_global_Natooladjust_getToolTip_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNAToolAdjustProxy))
	{
		EVString __values1 = pObjectX->CNAToolAdjust::getToolTip();
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
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1getToolTip_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
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
extern "C" JNIEXPORT jstring JNICALL Java_global_Natooladjust_getToolTip_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	EVString __values1 = pObjectX->CNAToolAdjust::getToolTip();
	EarthView::World::Core::ev_wstring valuesw1 = __values1;
	jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_Natooladjust_getIcon_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNAToolAdjustProxy))
	{
		EarthView::World::Display::IBitmap* __values1 = pObjectX->CNAToolAdjust::getIcon();
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
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1getIcon_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
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
extern "C" JNIEXPORT jlong JNICALL Java_global_Natooladjust_getIcon_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	EarthView::World::Display::IBitmap* __values1 = pObjectX->CNAToolAdjust::getIcon();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Natooladjust_isCheckable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNAToolAdjustProxy))
	{
		ev_bool __values1 = pObjectX->CNAToolAdjust::isCheckable();
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
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1isCheckable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
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
extern "C" JNIEXPORT jboolean JNICALL Java_global_Natooladjust_isCheckable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	ev_bool __values1 = pObjectX->CNAToolAdjust::isCheckable();
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jint JNICALL Java_global_Natooladjust_getCursor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNAToolAdjustProxy))
	{
		ev_int32 __values1 = pObjectX->CNAToolAdjust::getCursor();
		jint __values1_j = (jint)__values1;
		return __values1_j;
	}
	else
	{
		ev_int32 __values1 = pObjectX->getCursor();
		jint __values1_j = (jint)__values1;
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1getCursor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_getCursor_void_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"getCursor_void_callback", "()I");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT jint JNICALL Java_global_Natooladjust_getCursor_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	ev_int32 __values1 = pObjectX->CNAToolAdjust::getCursor();
	jint __values1_j = (jint)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_activate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNAToolAdjustProxy))
	{
		pObjectX->CNAToolAdjust::activate();
	}
	else
	{
		pObjectX->activate();
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1activate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_activate_void_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"activate_void_callback", "()V");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_activate_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	pObjectX->CNAToolAdjust::activate();
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_deactivate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNAToolAdjustProxy))
	{
		pObjectX->CNAToolAdjust::deactivate();
	}
	else
	{
		pObjectX->deactivate();
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1deactivate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_deactivate_void_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"deactivate_void_callback", "()V");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_deactivate_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	pObjectX->CNAToolAdjust::deactivate();
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_onClicked_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNAToolAdjustProxy))
	{
		pObjectX->CNAToolAdjust::onClicked();
	}
	else
	{
		pObjectX->onClicked();
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1onClicked_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
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
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_onClicked_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	pObjectX->CNAToolAdjust::onClicked();
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Natooladjust_getChecked_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNAToolAdjustProxy))
	{
		ev_bool __values1 = pObjectX->CNAToolAdjust::getChecked();
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
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1getChecked_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
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
extern "C" JNIEXPORT jboolean JNICALL Java_global_Natooladjust_getChecked_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	ev_bool __values1 = pObjectX->CNAToolAdjust::getChecked();
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_setChecked_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean checked_j)
{
	ev_bool checked = (ev_bool) checked_j;
	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNAToolAdjustProxy))
	{
		pObjectX->CNAToolAdjust::setChecked(checked);
	}
	else
	{
		pObjectX->setChecked(checked);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1setChecked_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
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
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_setChecked_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean checked_j)
{
	ev_bool checked = (ev_bool) checked_j;
	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	pObjectX->CNAToolAdjust::setChecked(checked);
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Natooladjust_getEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNAToolAdjustProxy))
	{
		ev_bool __values1 = pObjectX->CNAToolAdjust::getEnabled();
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
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1getEnabled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
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
extern "C" JNIEXPORT jboolean JNICALL Java_global_Natooladjust_getEnabled_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	ev_bool __values1 = pObjectX->CNAToolAdjust::getEnabled();
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_setEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
{
	ev_bool enabled = (ev_bool) enabled_j;
	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNAToolAdjustProxy))
	{
		pObjectX->CNAToolAdjust::setEnabled(enabled);
	}
	else
	{
		pObjectX->setEnabled(enabled);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1setEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
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
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_setEnabled_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
{
	ev_bool enabled = (ev_bool) enabled_j;
	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	pObjectX->CNAToolAdjust::setEnabled(enabled);
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Natooladjust_onKeyDown_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
{
	ev_int32 keyCode = (ev_int32) keyCode_j;
	ev_int32 shift = (ev_int32) shift_j;
	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNAToolAdjustProxy))
	{
		ev_bool __values1 = pObjectX->CNAToolAdjust::onKeyDown(keyCode, shift);
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
	else
	{
		ev_bool __values1 = pObjectX->onKeyDown(keyCode, shift);
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1onKeyDown_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_onKeyDown_ev_int32_ev_int32_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"onKeyDown_ev_int32_ev_int32_callback", "(II)Z");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Natooladjust_onKeyDown_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
{
	ev_int32 keyCode = (ev_int32) keyCode_j;
	ev_int32 shift = (ev_int32) shift_j;
	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	ev_bool __values1 = pObjectX->CNAToolAdjust::onKeyDown(keyCode, shift);
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Natooladjust_onMouseDown_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
{
	ev_int32 button = (ev_int32) button_j;
	ev_int32 shift = (ev_int32) shift_j;
	ev_int32 x = (ev_int32) x_j;
	ev_int32 y = (ev_int32) y_j;
	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNAToolAdjustProxy))
	{
		ev_bool __values1 = pObjectX->CNAToolAdjust::onMouseDown(button, shift, x, y);
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
	else
	{
		ev_bool __values1 = pObjectX->onMouseDown(button, shift, x, y);
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1onMouseDown_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback", "(IIII)Z");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Natooladjust_onMouseDown_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
{
	ev_int32 button = (ev_int32) button_j;
	ev_int32 shift = (ev_int32) shift_j;
	ev_int32 x = (ev_int32) x_j;
	ev_int32 y = (ev_int32) y_j;
	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	ev_bool __values1 = pObjectX->CNAToolAdjust::onMouseDown(button, shift, x, y);
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Natooladjust_onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
{
	ev_int32 button = (ev_int32) button_j;
	ev_int32 shift = (ev_int32) shift_j;
	ev_int32 x = (ev_int32) x_j;
	ev_int32 y = (ev_int32) y_j;
	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNAToolAdjustProxy))
	{
		ev_bool __values1 = pObjectX->CNAToolAdjust::onMouseMove(button, shift, x, y);
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
	else
	{
		ev_bool __values1 = pObjectX->onMouseMove(button, shift, x, y);
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback", "(IIII)Z");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Natooladjust_onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
{
	ev_int32 button = (ev_int32) button_j;
	ev_int32 shift = (ev_int32) shift_j;
	ev_int32 x = (ev_int32) x_j;
	ev_int32 y = (ev_int32) y_j;
	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	ev_bool __values1 = pObjectX->CNAToolAdjust::onMouseMove(button, shift, x, y);
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Natooladjust_onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
{
	ev_int32 button = (ev_int32) button_j;
	ev_int32 shift = (ev_int32) shift_j;
	ev_int32 x = (ev_int32) x_j;
	ev_int32 y = (ev_int32) y_j;
	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNAToolAdjustProxy))
	{
		ev_bool __values1 = pObjectX->CNAToolAdjust::onMouseUp(button, shift, x, y);
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
	else
	{
		ev_bool __values1 = pObjectX->onMouseUp(button, shift, x, y);
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback", "(IIII)Z");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Natooladjust_onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
{
	ev_int32 button = (ev_int32) button_j;
	ev_int32 shift = (ev_int32) shift_j;
	ev_int32 x = (ev_int32) x_j;
	ev_int32 y = (ev_int32) y_j;
	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	ev_bool __values1 = pObjectX->CNAToolAdjust::onMouseUp(button, shift, x, y);
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Natooladjust_update_1CEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
{
	EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JCNAToolAdjustProxy))
	{
		ev_bool __values1 = pObjectX->CNAToolAdjust::update(e);
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
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1update_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
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
extern "C" JNIEXPORT jboolean JNICALL Java_global_Natooladjust_update_1CEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
{
	EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
	CNAToolAdjust *pObjectX = (CNAToolAdjust*) pObjXXXX;
	ev_bool __values1 = pObjectX->CNAToolAdjust::update(e);
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1onContextMenu_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_onContextMenu_ev_int32_ev_int32_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"onContextMenu_ev_int32_ev_int32_callback", "(II)Z");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1onDoubleClick_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_onDoubleClick_void_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"onDoubleClick_void_callback", "()Z");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1onDoubleClick_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_callback", "(IIII)Z");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1onKeyUp_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_onKeyUp_ev_int32_ev_int32_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"onKeyUp_ev_int32_ev_int32_callback", "(II)Z");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1onMouseWheel_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_callback", "(IIII)Z");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1onTouchDown_1MotionEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_onTouchDown_MotionEvent_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"onTouchDown_MotionEvent_callback", "(J)Z");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1onTouchUp_1MotionEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_onTouchUp_MotionEvent_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"onTouchUp_MotionEvent_callback", "(J)Z");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1onTouchMove_1MotionEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_onTouchMove_MotionEvent_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"onTouchMove_MotionEvent_callback", "(J)Z");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Natooladjust_register_1create_1ISpatialControl(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JCNAToolAdjustProxy *pObjectX = (JCNAToolAdjustProxy*) pObjXXXX;
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
