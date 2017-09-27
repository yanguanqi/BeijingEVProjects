/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/effectmanager.h"
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
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Plugin
		{
			namespace ParticleFX
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
		}
	}
}
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
		namespace Spatial3D
		{
			namespace Dataset
			{
			}
			namespace EffectManager
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial3D::EffectManager::CEffectManager* __values1 = EarthView::World::Spatial3D::EffectManager::CEffectManager::getSingletonPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectManager_clearEffectAll_1CSqlDatabase(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong db_j)
				{
					const EarthView::World::Core::Database::CSqlDatabase &db = *(EarthView::World::Core::Database::CSqlDatabase*) db_j;
					EarthView::World::Spatial3D::EffectManager::CEffectManager *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->clearEffectAll(db);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectManager_existEffect_1CEffectDataSource_1EVString_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong src_j, jstring effectName_j, jlong effectId_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource *src = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) src_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* effectName_ch = (const ev_char*)__env->GetStringUTFChars(effectName_j,JNI_FALSE);
					const EVString effectName = effectName_ch;
					__env->ReleaseStringUTFChars(effectName_j, (const char *)effectName_ch);
					#else
					const ev_wchar* effectName_ch = (const ev_wchar*)__env->GetStringChars(effectName_j,JNI_FALSE);
					const EVString effectName = effectName_ch;
					__env->ReleaseStringChars(effectName_j, (const jchar *)effectName_ch);
					#endif
					ev_uint32 &effectId = *(ev_uint32*) effectId_j;
					EarthView::World::Spatial3D::EffectManager::CEffectManager *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->existEffect(src, effectName, effectId);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectManager_ev_1import_1CEffectInfo_1CEffectDataSource_1CEffectDataSource_1ev_1bool_1CModelPublishToolListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong info_j, jlong src_j, jlong dest_j, jboolean isOverwrite_j, jlong listener_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectInfo &info = *(EarthView::World::Spatial3D::Dataset::CEffectInfo*) info_j;
					EarthView::World::Spatial3D::Dataset::CEffectDataSource *src = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) src_j;
					EarthView::World::Spatial3D::Dataset::CEffectDataSource *dest = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) dest_j;
					ev_bool isOverwrite = (ev_bool) isOverwrite_j;
					EarthView::World::Spatial3D::CModelPublishToolListener *listener = (EarthView::World::Spatial3D::CModelPublishToolListener*) listener_j;
					EarthView::World::Spatial3D::EffectManager::CEffectManager *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjXXXX;
					ev_int32 __values1 = pObjectX->import(info, src, dest, isOverwrite, listener);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectManager_copyNewEffect_1CEffectDataSource_1ev_1uint32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasource_j, jlong effectId_j, jstring newName_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource *datasource = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) datasource_j;
					ev_uint32 effectId = (ev_uint32) effectId_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
					const EVString newName = newName_ch;
					__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
					#else
					const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
					const EVString newName = newName_ch;
					__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
					#endif
					EarthView::World::Spatial3D::EffectManager::CEffectManager *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInfo __values1 = pObjectX->copyNewEffect(datasource, effectId, newName);
					EarthView::World::Spatial3D::Dataset::CEffectInfo *returnvalues = new EarthView::World::Spatial3D::Dataset::CEffectInfo(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectManager_createUserType_1CEffectDataSource_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasource_j, jstring parentCode_j, jstring newUserTypeName_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource *datasource = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) datasource_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* parentCode_ch = (const ev_char*)__env->GetStringUTFChars(parentCode_j,JNI_FALSE);
					EVString parentCode = parentCode_ch;
					__env->ReleaseStringUTFChars(parentCode_j, (const char *)parentCode_ch);
					#else
					const ev_wchar* parentCode_ch = (const ev_wchar*)__env->GetStringChars(parentCode_j,JNI_FALSE);
					EVString parentCode = parentCode_ch;
					__env->ReleaseStringChars(parentCode_j, (const jchar *)parentCode_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* newUserTypeName_ch = (const ev_char*)__env->GetStringUTFChars(newUserTypeName_j,JNI_FALSE);
					EVString newUserTypeName = newUserTypeName_ch;
					__env->ReleaseStringUTFChars(newUserTypeName_j, (const char *)newUserTypeName_ch);
					#else
					const ev_wchar* newUserTypeName_ch = (const ev_wchar*)__env->GetStringChars(newUserTypeName_j,JNI_FALSE);
					EVString newUserTypeName = newUserTypeName_ch;
					__env->ReleaseStringChars(newUserTypeName_j, (const jchar *)newUserTypeName_ch);
					#endif
					EarthView::World::Spatial3D::EffectManager::CEffectManager *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo __values1 = pObjectX->createUserType(datasource, parentCode, newUserTypeName);
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo *returnvalues = new EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectManager_importFromScript_1CEffectDataSource_1EVString_1EVString_1CStringArray_1CStringArray(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring userTypeCode_j, jstring folder_j, jlong successScriptNames_j, jlong errorArray_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource *ds = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) ds_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* userTypeCode_ch = (const ev_char*)__env->GetStringUTFChars(userTypeCode_j,JNI_FALSE);
					const EVString userTypeCode = userTypeCode_ch;
					__env->ReleaseStringUTFChars(userTypeCode_j, (const char *)userTypeCode_ch);
					#else
					const ev_wchar* userTypeCode_ch = (const ev_wchar*)__env->GetStringChars(userTypeCode_j,JNI_FALSE);
					const EVString userTypeCode = userTypeCode_ch;
					__env->ReleaseStringChars(userTypeCode_j, (const jchar *)userTypeCode_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* folder_ch = (const ev_char*)__env->GetStringUTFChars(folder_j,JNI_FALSE);
					const EVString folder = folder_ch;
					__env->ReleaseStringUTFChars(folder_j, (const char *)folder_ch);
					#else
					const ev_wchar* folder_ch = (const ev_wchar*)__env->GetStringChars(folder_j,JNI_FALSE);
					const EVString folder = folder_ch;
					__env->ReleaseStringChars(folder_j, (const jchar *)folder_ch);
					#endif
					EarthView::World::Core::CStringArray &successScriptNames = *(EarthView::World::Core::CStringArray*) successScriptNames_j;
					EarthView::World::Core::CStringArray &errorArray = *(EarthView::World::Core::CStringArray*) errorArray_j;
					EarthView::World::Spatial3D::EffectManager::CEffectManager *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->importFromScript(ds, userTypeCode, folder, successScriptNames, errorArray);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectManager_renameParticleScript_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring script_j, jstring oldName_j, jstring newName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* script_ch = (const ev_char*)__env->GetStringUTFChars(script_j,JNI_FALSE);
					const EVString script = script_ch;
					__env->ReleaseStringUTFChars(script_j, (const char *)script_ch);
					#else
					const ev_wchar* script_ch = (const ev_wchar*)__env->GetStringChars(script_j,JNI_FALSE);
					const EVString script = script_ch;
					__env->ReleaseStringChars(script_j, (const jchar *)script_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* oldName_ch = (const ev_char*)__env->GetStringUTFChars(oldName_j,JNI_FALSE);
					const EVString oldName = oldName_ch;
					__env->ReleaseStringUTFChars(oldName_j, (const char *)oldName_ch);
					#else
					const ev_wchar* oldName_ch = (const ev_wchar*)__env->GetStringChars(oldName_j,JNI_FALSE);
					const EVString oldName = oldName_ch;
					__env->ReleaseStringChars(oldName_j, (const jchar *)oldName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
					const EVString newName = newName_ch;
					__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
					#else
					const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
					const EVString newName = newName_ch;
					__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
					#endif
					EarthView::World::Spatial3D::EffectManager::CEffectManager *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjXXXX;
					EVString __values1 = pObjectX->renameParticleScript(script, oldName, newName);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectManager_createNewEffect_1CEffectDataSource_1EVString_1EVString_1EffectType_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong datasource_j, jstring name_j, jstring userTypeCode_j, jint type_j, jlong parentEffectId_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource *datasource = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) datasource_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* userTypeCode_ch = (const ev_char*)__env->GetStringUTFChars(userTypeCode_j,JNI_FALSE);
					const EVString userTypeCode = userTypeCode_ch;
					__env->ReleaseStringUTFChars(userTypeCode_j, (const char *)userTypeCode_ch);
					#else
					const ev_wchar* userTypeCode_ch = (const ev_wchar*)__env->GetStringChars(userTypeCode_j,JNI_FALSE);
					const EVString userTypeCode = userTypeCode_ch;
					__env->ReleaseStringChars(userTypeCode_j, (const jchar *)userTypeCode_ch);
					#endif
					EarthView::World::Spatial3D::Dataset::EffectType type = (EarthView::World::Spatial3D::Dataset::EffectType) type_j;
					ev_uint32 parentEffectId = (ev_uint32) parentEffectId_j;
					EarthView::World::Spatial3D::EffectManager::CEffectManager *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInfo __values1 = pObjectX->createNewEffect(datasource, name, userTypeCode, type, parentEffectId);
					EarthView::World::Spatial3D::Dataset::CEffectInfo *returnvalues = new EarthView::World::Spatial3D::Dataset::CEffectInfo(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectManager_renameUserType_1CEffectDataSource_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring code_j, jstring newName_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource *ds = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) ds_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
					const EVString code = code_ch;
					__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
					#else
					const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
					const EVString code = code_ch;
					__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
					const EVString newName = newName_ch;
					__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
					#else
					const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
					const EVString newName = newName_ch;
					__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
					#endif
					EarthView::World::Spatial3D::EffectManager::CEffectManager *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->renameUserType(ds, code, newName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectManager_renameBlendEffect_1CEffectDataSource_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring code_j, jstring newName_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource *ds = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) ds_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
					const EVString code = code_ch;
					__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
					#else
					const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
					const EVString code = code_ch;
					__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
					const EVString newName = newName_ch;
					__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
					#else
					const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
					const EVString newName = newName_ch;
					__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
					#endif
					EarthView::World::Spatial3D::EffectManager::CEffectManager *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->renameBlendEffect(ds, code, newName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectManager_renameBEChild_1CEffectDataSource_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring code_j, jstring newName_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource *ds = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) ds_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
					const EVString code = code_ch;
					__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
					#else
					const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
					const EVString code = code_ch;
					__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
					const EVString newName = newName_ch;
					__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
					#else
					const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
					const EVString newName = newName_ch;
					__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
					#endif
					EarthView::World::Spatial3D::EffectManager::CEffectManager *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->renameBEChild(ds, code, newName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectManager_renameSingleEffect_1CEffectDataSource_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring code_j, jstring newName_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource *ds = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) ds_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
					const EVString code = code_ch;
					__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
					#else
					const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
					const EVString code = code_ch;
					__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
					const EVString newName = newName_ch;
					__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
					#else
					const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
					const EVString newName = newName_ch;
					__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
					#endif
					EarthView::World::Spatial3D::EffectManager::CEffectManager *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->renameSingleEffect(ds, code, newName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectManager_deleteUserType_1CEffectDataSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jstring code_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource *ds = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) ds_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
					const EVString code = code_ch;
					__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
					#else
					const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
					const EVString code = code_ch;
					__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
					#endif
					EarthView::World::Spatial3D::EffectManager::CEffectManager *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->deleteUserType(ds, code);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectManager_deleteEffect_1CEffectDataSource_1ev_1uint32_1ev_1uint32_1EffectType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jlong parentEffectId_j, jlong effectId_j, jint type_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource *ds = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) ds_j;
					ev_uint32 parentEffectId = (ev_uint32) parentEffectId_j;
					ev_uint32 effectId = (ev_uint32) effectId_j;
					EarthView::World::Spatial3D::Dataset::EffectType type = (EarthView::World::Spatial3D::Dataset::EffectType) type_j;
					EarthView::World::Spatial3D::EffectManager::CEffectManager *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->deleteEffect(ds, parentEffectId, effectId, type);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectManager_addEffectToBlendEffect_1CEffectDataSource_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jlong editEffectId_j, jlong dragEffectId_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource *ds = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) ds_j;
					ev_uint32 editEffectId = (ev_uint32) editEffectId_j;
					ev_uint32 dragEffectId = (ev_uint32) dragEffectId_j;
					EarthView::World::Spatial3D::EffectManager::CEffectManager *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInfo __values1 = pObjectX->addEffectToBlendEffect(ds, editEffectId, dragEffectId);
					EarthView::World::Spatial3D::Dataset::CEffectInfo *returnvalues = new EarthView::World::Spatial3D::Dataset::CEffectInfo(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectManager_addEffectToBlendEffect_1CEffectDataSource_1ev_1uint32_1CEffectInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jlong editEffectId_j, jlong effectInfo_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource *ds = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) ds_j;
					ev_uint32 editEffectId = (ev_uint32) editEffectId_j;
					EarthView::World::Spatial3D::Dataset::CEffectInfo &effectInfo = *(EarthView::World::Spatial3D::Dataset::CEffectInfo*) effectInfo_j;
					EarthView::World::Spatial3D::EffectManager::CEffectManager *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInfo __values1 = pObjectX->addEffectToBlendEffect(ds, editEffectId, effectInfo);
					EarthView::World::Spatial3D::Dataset::CEffectInfo *returnvalues = new EarthView::World::Spatial3D::Dataset::CEffectInfo(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectManager_saveEffect_1CEffectDataSource_1CEffect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jlong effect_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource *ds = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) ds_j;
					EarthView::World::Spatial3D::EffectManager::CEffect *effect = (EarthView::World::Spatial3D::EffectManager::CEffect*) effect_j;
					EarthView::World::Spatial3D::EffectManager::CEffectManager *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->saveEffect(ds, effect);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectManager_saveEffectMaterial_1CEffectDataSource_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jlong effectId_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource *ds = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) ds_j;
					ev_uint32 effectId = (ev_uint32) effectId_j;
					EarthView::World::Spatial3D::EffectManager::CEffectManager *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->saveEffectMaterial(ds, effectId);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectManager_saveEffectMaterial_1CEffectDataSource_1CMaterialPtr_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jlong matPtr_j, jlong resourceId_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource *ds = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) ds_j;
					EarthView::World::Graphic::CMaterialPtr matPtr = *(EarthView::World::Graphic::CMaterialPtr*) matPtr_j;
					ev_uint32 resourceId = (ev_uint32) resourceId_j;
					EarthView::World::Spatial3D::EffectManager::CEffectManager *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->saveEffectMaterial(ds, matPtr, resourceId);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectManager_findDiscontinuousID_1CEffectDataSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong effectDatasource_j, jstring userTypeCode_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource *effectDatasource = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) effectDatasource_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* userTypeCode_ch = (const ev_char*)__env->GetStringUTFChars(userTypeCode_j,JNI_FALSE);
					const EVString userTypeCode = userTypeCode_ch;
					__env->ReleaseStringUTFChars(userTypeCode_j, (const char *)userTypeCode_ch);
					#else
					const ev_wchar* userTypeCode_ch = (const ev_wchar*)__env->GetStringChars(userTypeCode_j,JNI_FALSE);
					const EVString userTypeCode = userTypeCode_ch;
					__env->ReleaseStringChars(userTypeCode_j, (const jchar *)userTypeCode_ch);
					#endif
					EarthView::World::Spatial3D::EffectManager::CEffectManager *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjXXXX;
					EVString __values1 = pObjectX->findDiscontinuousID(effectDatasource, userTypeCode);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectManager_bulidUserTypeTree_1CEffectDataSource_1CEffectUserTypeTree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ds_j, jlong tree_j)
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSource *ds = (EarthView::World::Spatial3D::Dataset::CEffectDataSource*) ds_j;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree &tree = *(EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*) tree_j;
					EarthView::World::Spatial3D::EffectManager::CEffectManager *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjXXXX;
					pObjectX->bulidUserTypeTree(ds, tree);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_effectmanager_EffectManager_serialize_1CParticleSystem_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ps_j, jstring psName_j)
				{
					EarthView::World::Graphic::CParticleSystem *ps = (EarthView::World::Graphic::CParticleSystem*) ps_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* psName_ch = (const ev_char*)__env->GetStringUTFChars(psName_j,JNI_FALSE);
					EVString psName = psName_ch;
					__env->ReleaseStringUTFChars(psName_j, (const char *)psName_ch);
					#else
					const ev_wchar* psName_ch = (const ev_wchar*)__env->GetStringChars(psName_j,JNI_FALSE);
					EVString psName = psName_ch;
					__env->ReleaseStringChars(psName_j, (const jchar *)psName_ch);
					#endif
					EarthView::World::Spatial3D::EffectManager::CEffectManager *pObjectX = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjXXXX;
					EVString __values1 = pObjectX->serialize(ps, psName);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
		}
	}
}
