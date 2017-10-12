/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/modeltemplateplugin.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
extern "C" JNIEXPORT jstring JNICALL Java_global_ResourceData_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CResourceData *pObjectX = (CResourceData*) pObjXXXX;
	EVString __values1 = pObjectX->getName();
	EarthView::World::Core::ev_wstring valuesw1 = __values1;
	jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_ResourceData_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
	CResourceData *pObjectX = (CResourceData*) pObjXXXX;
	pObjectX->setName(name);
}
extern "C" JNIEXPORT jstring JNICALL Java_global_ResourceData_getDataType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CResourceData *pObjectX = (CResourceData*) pObjXXXX;
	EVString __values1 = pObjectX->getDataType();
	EarthView::World::Core::ev_wstring valuesw1 = __values1;
	jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_ResourceData_setDataType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dataType_j)
{
	#if EV_PLATFORM == EV_PLATFORM_ANDROID
	const ev_char* dataType_ch = (const ev_char*)__env->GetStringUTFChars(dataType_j,JNI_FALSE);
	const EVString dataType = dataType_ch;
	__env->ReleaseStringUTFChars(dataType_j, (const char *)dataType_ch);
	#else
	const ev_wchar* dataType_ch = (const ev_wchar*)__env->GetStringChars(dataType_j,JNI_FALSE);
	const EVString dataType = dataType_ch;
	__env->ReleaseStringChars(dataType_j, (const jchar *)dataType_ch);
	#endif
	CResourceData *pObjectX = (CResourceData*) pObjXXXX;
	pObjectX->setDataType(dataType);
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ResourceData_getResourceData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CResourceData *pObjectX = (CResourceData*) pObjXXXX;
	EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->getResourceData();
	EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
	((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
	jlong __values1_j = (jlong) returnvalues;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_ResourceData_setResourceData_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong data_j)
{
	const EarthView::World::Core::MemoryDataStreamPtr &data = *(EarthView::World::Core::MemoryDataStreamPtr*) data_j;
	CResourceData *pObjectX = (CResourceData*) pObjXXXX;
	pObjectX->setResourceData(data);
}
extern "C" JNIEXPORT jint JNICALL Java_global_ResourceData_getResourceType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CResourceData *pObjectX = (CResourceData*) pObjXXXX;
	EarthView::World::Spatial3D::Dataset::MaterialResourceType __values1 = pObjectX->getResourceType();
	jint __values1_j = (jint) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_ResourceData_setResourceType_1MaterialResourceType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
{
	EarthView::World::Spatial3D::Dataset::MaterialResourceType type = (EarthView::World::Spatial3D::Dataset::MaterialResourceType) type_j;
	CResourceData *pObjectX = (CResourceData*) pObjXXXX;
	pObjectX->setResourceType(type);
}
extern "C" JNIEXPORT void JNICALL Java_global_ResourceDataList_push_1back_1CResourceData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
{
	CResourceData &t = *(CResourceData*) t_j;
	CResourceDataList *pObjectX = (CResourceDataList*) pObjXXXX;
	pObjectX->push_back(t);
}
extern "C" JNIEXPORT void JNICALL Java_global_ResourceDataList_push_1front_1CResourceData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
{
	CResourceData &t = *(CResourceData*) t_j;
	CResourceDataList *pObjectX = (CResourceDataList*) pObjXXXX;
	pObjectX->push_front(t);
}
extern "C" JNIEXPORT void JNICALL Java_global_ResourceDataList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CResourceDataList *pObjectX = (CResourceDataList*) pObjXXXX;
	pObjectX->pop_back();
}
extern "C" JNIEXPORT void JNICALL Java_global_ResourceDataList_pop_1front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CResourceDataList *pObjectX = (CResourceDataList*) pObjXXXX;
	pObjectX->pop_front();
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ResourceDataList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CResourceDataList *pObjectX = (CResourceDataList*) pObjXXXX;
	CResourceData& __values1 = pObjectX->front();
	jlong __values1_j = (jlong) &__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ResourceDataList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CResourceDataList *pObjectX = (CResourceDataList*) pObjXXXX;
	CResourceData& __values1 = pObjectX->back();
	jlong __values1_j = (jlong) &__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ResourceDataList_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
{
	ev_uint32 pos = (ev_uint32) pos_j;
	CResourceDataList *pObjectX = (CResourceDataList*) pObjXXXX;
	CResourceData& __values1 = pObjectX->at(pos);
	jlong __values1_j = (jlong) &__values1;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_ResourceDataList_insert_1ev_1uint32_1CResourceData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
{
	ev_uint32 pos = (ev_uint32) pos_j;
	CResourceData &t = *(CResourceData*) t_j;
	CResourceDataList *pObjectX = (CResourceDataList*) pObjXXXX;
	pObjectX->insert(pos, t);
}
extern "C" JNIEXPORT void JNICALL Java_global_ResourceDataList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
{
	ev_size_t pos = (ev_size_t) pos_j;
	CResourceDataList *pObjectX = (CResourceDataList*) pObjXXXX;
	pObjectX->remove(pos);
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_ResourceDataList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CResourceDataList *pObjectX = (CResourceDataList*) pObjXXXX;
	ev_bool __values1 = pObjectX->empty();
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ResourceDataList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CResourceDataList *pObjectX = (CResourceDataList*) pObjXXXX;
	ev_size_t __values1 = pObjectX->size();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_ResourceDataList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
{
	ev_size_t newSize = (ev_size_t) newSize_j;
	CResourceDataList *pObjectX = (CResourceDataList*) pObjXXXX;
	pObjectX->resize(newSize);
}
extern "C" JNIEXPORT void JNICALL Java_global_ResourceDataList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CResourceDataList *pObjectX = (CResourceDataList*) pObjXXXX;
	pObjectX->clear();
}
extern "C" JNIEXPORT jstring JNICALL Java_global_ModelData_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CModelData *pObjectX = (CModelData*) pObjXXXX;
	EVString __values1 = pObjectX->getName();
	EarthView::World::Core::ev_wstring valuesw1 = __values1;
	jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_ModelData_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
	CModelData *pObjectX = (CModelData*) pObjXXXX;
	pObjectX->setName(name);
}
extern "C" JNIEXPORT void JNICALL Java_global_ModelData_setModelData_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong data_j)
{
	const EarthView::World::Core::MemoryDataStreamPtr &data = *(EarthView::World::Core::MemoryDataStreamPtr*) data_j;
	CModelData *pObjectX = (CModelData*) pObjXXXX;
	pObjectX->setModelData(data);
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ModelData_getModelData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CModelData *pObjectX = (CModelData*) pObjXXXX;
	EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->getModelData();
	EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
	((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
	jlong __values1_j = (jlong) returnvalues;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_ModelData_setDataType_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dataType_j)
{
	#if EV_PLATFORM == EV_PLATFORM_ANDROID
	const ev_char* dataType_ch = (const ev_char*)__env->GetStringUTFChars(dataType_j,JNI_FALSE);
	const EVString dataType = dataType_ch;
	__env->ReleaseStringUTFChars(dataType_j, (const char *)dataType_ch);
	#else
	const ev_wchar* dataType_ch = (const ev_wchar*)__env->GetStringChars(dataType_j,JNI_FALSE);
	const EVString dataType = dataType_ch;
	__env->ReleaseStringChars(dataType_j, (const jchar *)dataType_ch);
	#endif
	CModelData *pObjectX = (CModelData*) pObjXXXX;
	pObjectX->setDataType(dataType);
}
extern "C" JNIEXPORT jstring JNICALL Java_global_ModelData_getDataType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CModelData *pObjectX = (CModelData*) pObjXXXX;
	EVString __values1 = pObjectX->getDataType();
	EarthView::World::Core::ev_wstring valuesw1 = __values1;
	jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_ModelData_setBoundingbox_1CAxisAlignedBox(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong box_j)
{
	const EarthView::World::Spatial::Math::CAxisAlignedBox &box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
	CModelData *pObjectX = (CModelData*) pObjXXXX;
	pObjectX->setBoundingbox(box);
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ModelData_getBoundingbox_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CModelData *pObjectX = (CModelData*) pObjXXXX;
	EarthView::World::Spatial::Math::CAxisAlignedBox __values1 = pObjectX->getBoundingbox();
	EarthView::World::Spatial::Math::CAxisAlignedBox *returnvalues = new EarthView::World::Spatial::Math::CAxisAlignedBox(__values1);
	((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
	jlong __values1_j = (jlong) returnvalues;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_ModelData_setResourceList_1CResourceDataList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong res_j)
{
	const CResourceDataList &res = *(CResourceDataList*) res_j;
	CModelData *pObjectX = (CModelData*) pObjXXXX;
	pObjectX->setResourceList(res);
}
extern "C" JNIEXPORT jlong JNICALL Java_global_ModelData_getResourceList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CModelData *pObjectX = (CModelData*) pObjXXXX;
	CResourceDataList __values1 = pObjectX->getResourceList();
	CResourceDataList *returnvalues = new CResourceDataList(__values1);
	((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
	jlong __values1_j = (jlong) returnvalues;
	return __values1_j;
}
class JIModelTemplatePluginProxy : public IModelTemplatePlugin
{
 private:
	EarthView::World::Core::ev_string m_getImportModelData_EVString_CModelData_callback;
	EarthView::World::Core::ev_string m_getPluginName_void_callback;
	EarthView::World::Core::ev_string m_getRealResourceData_CResourceData_CResourceData_callback;
	EarthView::World::Core::ev_string m_getRealModelData_CModelData_CModelData_callback;
public:
	JIModelTemplatePluginProxy(EarthView::World::Core::CNameValuePairList *pList) : IModelTemplatePlugin(pList)
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
	void register_getImportModelData_EVString_CModelData_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_getImportModelData_EVString_CModelData_callback = __method;
	}
	void register_getPluginName_void_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_getPluginName_void_callback = __method;
	}
	void register_getRealResourceData_CResourceData_CResourceData_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_getRealResourceData_CResourceData_CResourceData_callback = __method;
	}
	void register_getRealModelData_CModelData_CModelData_callback(EarthView::World::Core::ev_string __method)
	{
		this->m_getRealModelData_CModelData_CModelData_callback = __method;
	}
	virtual bool getImportModelData(const EVString& meshPath, CModelData& importModelData)
	{
		if (this->_gRef != NULL && this->m_getImportModelData_EVString_CModelData_callback != "" && this->isCustomExtend())
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
			EarthView::World::Core::ev_wstring meshPath_wch = meshPath;
			jstring meshPath_j = __env->NewString((const jchar*)meshPath_wch.getString(), meshPath_wch.size());
			jlong importModelData_j = (jlong) &importModelData;
			jmethodID __method = __gr->getMethod("getImportModelData_EVString_CModelData_callback");
			jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , meshPath_j, importModelData_j);
			#if EV_PLATFORM == EV_PLATFORM_ANDROID
			if(__jniAttachable)
			{
				EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
			}
			#else
			EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
			#endif
			bool __values1 = (bool) __values1_j;
			return __values1;
		}
		else
		{
			return this->IModelTemplatePlugin::getImportModelData(meshPath, importModelData);
		}
	}
	virtual EVString getPluginName()
	{
		if (this->_gRef != NULL && this->m_getPluginName_void_callback != "" && this->isCustomExtend())
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
			jmethodID __method = __gr->getMethod("getPluginName_void_callback");
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
			return this->IModelTemplatePlugin::getPluginName();
		}
	}
	virtual bool getRealResourceData(CResourceData& srcResourceData, CResourceData& destResourceData)
	{
		if (this->_gRef != NULL && this->m_getRealResourceData_CResourceData_CResourceData_callback != "" && this->isCustomExtend())
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
			jlong srcResourceData_j = (jlong) &srcResourceData;
			jlong destResourceData_j = (jlong) &destResourceData;
			jmethodID __method = __gr->getMethod("getRealResourceData_CResourceData_CResourceData_callback");
			jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , srcResourceData_j, destResourceData_j);
			#if EV_PLATFORM == EV_PLATFORM_ANDROID
			if(__jniAttachable)
			{
				EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
			}
			#else
			EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
			#endif
			bool __values1 = (bool) __values1_j;
			return __values1;
		}
		else
		{
			return this->IModelTemplatePlugin::getRealResourceData(srcResourceData, destResourceData);
		}
	}
	virtual bool getRealModelData(CModelData& srcResourceData, CModelData& destModelData)
	{
		if (this->_gRef != NULL && this->m_getRealModelData_CModelData_CModelData_callback != "" && this->isCustomExtend())
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
			jlong srcResourceData_j = (jlong) &srcResourceData;
			jlong destModelData_j = (jlong) &destModelData;
			jmethodID __method = __gr->getMethod("getRealModelData_CModelData_CModelData_callback");
			jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , srcResourceData_j, destModelData_j);
			#if EV_PLATFORM == EV_PLATFORM_ANDROID
			if(__jniAttachable)
			{
				EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
			}
			#else
			EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
			#endif
			bool __values1 = (bool) __values1_j;
			return __values1;
		}
		else
		{
			return this->IModelTemplatePlugin::getRealModelData(srcResourceData, destModelData);
		}
	}
};
REGISTER_FACTORY_CLASS(JIModelTemplatePluginProxy);
extern "C" JNIEXPORT jboolean JNICALL Java_global_Imodeltemplateplugin_getImportModelData_1EVString_1CModelData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring meshPath_j, jlong importModelData_j)
{
	#if EV_PLATFORM == EV_PLATFORM_ANDROID
	const ev_char* meshPath_ch = (const ev_char*)__env->GetStringUTFChars(meshPath_j,JNI_FALSE);
	const EVString meshPath = meshPath_ch;
	__env->ReleaseStringUTFChars(meshPath_j, (const char *)meshPath_ch);
	#else
	const ev_wchar* meshPath_ch = (const ev_wchar*)__env->GetStringChars(meshPath_j,JNI_FALSE);
	const EVString meshPath = meshPath_ch;
	__env->ReleaseStringChars(meshPath_j, (const jchar *)meshPath_ch);
	#endif
	CModelData &importModelData = *(CModelData*) importModelData_j;
	IModelTemplatePlugin *pObjectX = (IModelTemplatePlugin*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JIModelTemplatePluginProxy))
	{
		bool __values1 = pObjectX->IModelTemplatePlugin::getImportModelData(meshPath, importModelData);
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
	else
	{
		bool __values1 = pObjectX->getImportModelData(meshPath, importModelData);
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Imodeltemplateplugin_register_1getImportModelData_1EVString_1CModelData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JIModelTemplatePluginProxy *pObjectX = (JIModelTemplatePluginProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_getImportModelData_EVString_CModelData_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"getImportModelData_EVString_CModelData_callback", "(Ljava/lang/String;J)Z");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Imodeltemplateplugin_getImportModelData_1EVString_1CModelData_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring meshPath_j, jlong importModelData_j)
{
	#if EV_PLATFORM == EV_PLATFORM_ANDROID
	const ev_char* meshPath_ch = (const ev_char*)__env->GetStringUTFChars(meshPath_j,JNI_FALSE);
	const EVString meshPath = meshPath_ch;
	__env->ReleaseStringUTFChars(meshPath_j, (const char *)meshPath_ch);
	#else
	const ev_wchar* meshPath_ch = (const ev_wchar*)__env->GetStringChars(meshPath_j,JNI_FALSE);
	const EVString meshPath = meshPath_ch;
	__env->ReleaseStringChars(meshPath_j, (const jchar *)meshPath_ch);
	#endif
	CModelData &importModelData = *(CModelData*) importModelData_j;
	IModelTemplatePlugin *pObjectX = (IModelTemplatePlugin*) pObjXXXX;
	bool __values1 = pObjectX->IModelTemplatePlugin::getImportModelData(meshPath, importModelData);
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jstring JNICALL Java_global_Imodeltemplateplugin_getPluginName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	IModelTemplatePlugin *pObjectX = (IModelTemplatePlugin*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JIModelTemplatePluginProxy))
	{
		EVString __values1 = pObjectX->IModelTemplatePlugin::getPluginName();
		EarthView::World::Core::ev_wstring valuesw1 = __values1;
		jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
		return __values1_j;
	}
	else
	{
		EVString __values1 = pObjectX->getPluginName();
		EarthView::World::Core::ev_wstring valuesw1 = __values1;
		jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Imodeltemplateplugin_register_1getPluginName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JIModelTemplatePluginProxy *pObjectX = (JIModelTemplatePluginProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_getPluginName_void_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"getPluginName_void_callback", "()Ljava/lang/String;");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT jstring JNICALL Java_global_Imodeltemplateplugin_getPluginName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	IModelTemplatePlugin *pObjectX = (IModelTemplatePlugin*) pObjXXXX;
	EVString __values1 = pObjectX->IModelTemplatePlugin::getPluginName();
	EarthView::World::Core::ev_wstring valuesw1 = __values1;
	jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
	return __values1_j;
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Imodeltemplateplugin_getRealResourceData_1CResourceData_1CResourceData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong srcResourceData_j, jlong destResourceData_j)
{
	CResourceData &srcResourceData = *(CResourceData*) srcResourceData_j;
	CResourceData &destResourceData = *(CResourceData*) destResourceData_j;
	IModelTemplatePlugin *pObjectX = (IModelTemplatePlugin*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JIModelTemplatePluginProxy))
	{
		bool __values1 = pObjectX->IModelTemplatePlugin::getRealResourceData(srcResourceData, destResourceData);
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
	else
	{
		bool __values1 = pObjectX->getRealResourceData(srcResourceData, destResourceData);
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Imodeltemplateplugin_register_1getRealResourceData_1CResourceData_1CResourceData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JIModelTemplatePluginProxy *pObjectX = (JIModelTemplatePluginProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_getRealResourceData_CResourceData_CResourceData_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"getRealResourceData_CResourceData_CResourceData_callback", "(JJ)Z");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Imodeltemplateplugin_getRealResourceData_1CResourceData_1CResourceData_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong srcResourceData_j, jlong destResourceData_j)
{
	CResourceData &srcResourceData = *(CResourceData*) srcResourceData_j;
	CResourceData &destResourceData = *(CResourceData*) destResourceData_j;
	IModelTemplatePlugin *pObjectX = (IModelTemplatePlugin*) pObjXXXX;
	bool __values1 = pObjectX->IModelTemplatePlugin::getRealResourceData(srcResourceData, destResourceData);
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Imodeltemplateplugin_getRealModelData_1CModelData_1CModelData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong srcResourceData_j, jlong destModelData_j)
{
	CModelData &srcResourceData = *(CModelData*) srcResourceData_j;
	CModelData &destModelData = *(CModelData*) destModelData_j;
	IModelTemplatePlugin *pObjectX = (IModelTemplatePlugin*) pObjXXXX;
	if (typeid(*pObjectX) == typeid(JIModelTemplatePluginProxy))
	{
		bool __values1 = pObjectX->IModelTemplatePlugin::getRealModelData(srcResourceData, destModelData);
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
	else
	{
		bool __values1 = pObjectX->getRealModelData(srcResourceData, destModelData);
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_Imodeltemplateplugin_register_1getRealModelData_1CModelData_1CModelData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
{
	JIModelTemplatePluginProxy *pObjectX = (JIModelTemplatePluginProxy*) pObjXXXX;
	const char *pMethod = __env->GetStringUTFChars(__method, NULL);
	EarthView::World::Core::ev_string sMethod = pMethod;
	__env->ReleaseStringUTFChars(__method, pMethod);
	pObjectX->register_getRealModelData_CModelData_CModelData_callback(sMethod);
	if (pObjectX->getJavaReference() != NULL && sMethod != "")
	{
		EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
		jobject __obj1 = __gr->getJObject();
		jclass __clazz1 = __env->GetObjectClass(__obj1);
		jmethodID __method = __env->GetMethodID(__clazz1,"getRealModelData_CModelData_CModelData_callback", "(JJ)Z");
		__gr->setMethod(sMethod, __method);
	}
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Imodeltemplateplugin_getRealModelData_1CModelData_1CModelData_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong srcResourceData_j, jlong destModelData_j)
{
	CModelData &srcResourceData = *(CModelData*) srcResourceData_j;
	CModelData &destModelData = *(CModelData*) destModelData_j;
	IModelTemplatePlugin *pObjectX = (IModelTemplatePlugin*) pObjXXXX;
	bool __values1 = pObjectX->IModelTemplatePlugin::getRealModelData(srcResourceData, destModelData);
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
