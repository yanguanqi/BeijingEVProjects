/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shadergenerator.h"
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
			namespace RTShaderSystem
			{
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_initialize_1void(JNIEnv *__env , jclass __clazz)
				{
					ev_bool __values1 = EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::initialize();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_ev_1finalize_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::finalize();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_getSingleton_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator& __values1 = EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::getSingleton();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator* __values1 = EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::getSingletonPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_addSceneManager_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sceneMgr_j)
				{
					EarthView::World::Graphic::CSceneManager *sceneMgr = (EarthView::World::Graphic::CSceneManager*) sceneMgr_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					pObjectX->addSceneManager(sceneMgr);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_removeSceneManager_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sceneMgr_j)
				{
					EarthView::World::Graphic::CSceneManager *sceneMgr = (EarthView::World::Graphic::CSceneManager*) sceneMgr_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					pObjectX->removeSceneManager(sceneMgr);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_getActiveSceneManager_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					EarthView::World::Graphic::CSceneManager* __values1 = pObjectX->getActiveSceneManager();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_setTargetLanguage_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring shaderLanguage_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* shaderLanguage_ch = (const ev_char*)__env->GetStringUTFChars(shaderLanguage_j,JNI_FALSE);
					const EVString shaderLanguage = shaderLanguage_ch;
					__env->ReleaseStringUTFChars(shaderLanguage_j, (const char *)shaderLanguage_ch);
					#else
					const ev_wchar* shaderLanguage_ch = (const ev_wchar*)__env->GetStringChars(shaderLanguage_j,JNI_FALSE);
					const EVString shaderLanguage = shaderLanguage_ch;
					__env->ReleaseStringChars(shaderLanguage_j, (const jchar *)shaderLanguage_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					pObjectX->setTargetLanguage(shaderLanguage);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_getTargetLanguage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					const EVString& __values1 = pObjectX->getTargetLanguage();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_setVertexShaderProfiles_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring vertexShaderProfiles_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* vertexShaderProfiles_ch = (const ev_char*)__env->GetStringUTFChars(vertexShaderProfiles_j,JNI_FALSE);
					const EVString vertexShaderProfiles = vertexShaderProfiles_ch;
					__env->ReleaseStringUTFChars(vertexShaderProfiles_j, (const char *)vertexShaderProfiles_ch);
					#else
					const ev_wchar* vertexShaderProfiles_ch = (const ev_wchar*)__env->GetStringChars(vertexShaderProfiles_j,JNI_FALSE);
					const EVString vertexShaderProfiles = vertexShaderProfiles_ch;
					__env->ReleaseStringChars(vertexShaderProfiles_j, (const jchar *)vertexShaderProfiles_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					pObjectX->setVertexShaderProfiles(vertexShaderProfiles);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_getVertexShaderProfiles_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					const EVString& __values1 = pObjectX->getVertexShaderProfiles();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_getVertexShaderProfilesList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					const EarthView::World::Core::StringVector& __values1 = pObjectX->getVertexShaderProfilesList();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_setFragmentShaderProfiles_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring fragmentShaderProfiles_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* fragmentShaderProfiles_ch = (const ev_char*)__env->GetStringUTFChars(fragmentShaderProfiles_j,JNI_FALSE);
					const EVString fragmentShaderProfiles = fragmentShaderProfiles_ch;
					__env->ReleaseStringUTFChars(fragmentShaderProfiles_j, (const char *)fragmentShaderProfiles_ch);
					#else
					const ev_wchar* fragmentShaderProfiles_ch = (const ev_wchar*)__env->GetStringChars(fragmentShaderProfiles_j,JNI_FALSE);
					const EVString fragmentShaderProfiles = fragmentShaderProfiles_ch;
					__env->ReleaseStringChars(fragmentShaderProfiles_j, (const jchar *)fragmentShaderProfiles_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					pObjectX->setFragmentShaderProfiles(fragmentShaderProfiles);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_getFragmentShaderProfiles_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					const EVString& __values1 = pObjectX->getFragmentShaderProfiles();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_getFragmentShaderProfilesList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					const EarthView::World::Core::StringVector& __values1 = pObjectX->getFragmentShaderProfilesList();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_setShaderCachePath_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring cachePath_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* cachePath_ch = (const ev_char*)__env->GetStringUTFChars(cachePath_j,JNI_FALSE);
					const EVString cachePath = cachePath_ch;
					__env->ReleaseStringUTFChars(cachePath_j, (const char *)cachePath_ch);
					#else
					const ev_wchar* cachePath_ch = (const ev_wchar*)__env->GetStringChars(cachePath_j,JNI_FALSE);
					const EVString cachePath = cachePath_ch;
					__env->ReleaseStringChars(cachePath_j, (const jchar *)cachePath_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					pObjectX->setShaderCachePath(cachePath);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_getShaderCachePath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					const EVString& __values1 = pObjectX->getShaderCachePath();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_flushShaderCache_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					pObjectX->flushShaderCache();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_getRenderState_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring schemeName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* schemeName_ch = (const ev_char*)__env->GetStringUTFChars(schemeName_j,JNI_FALSE);
					const EVString schemeName = schemeName_ch;
					__env->ReleaseStringUTFChars(schemeName_j, (const char *)schemeName_ch);
					#else
					const ev_wchar* schemeName_ch = (const ev_wchar*)__env->GetStringChars(schemeName_j,JNI_FALSE);
					const EVString schemeName = schemeName_ch;
					__env->ReleaseStringChars(schemeName_j, (const jchar *)schemeName_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CRenderState* __values1 = pObjectX->getRenderState(schemeName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024RenderStateCreateOrRetrieveResult_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::RenderStateCreateOrRetrieveResult *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::RenderStateCreateOrRetrieveResult*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->first);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024RenderStateCreateOrRetrieveResult_set_1first_1CRenderState(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::RenderStateCreateOrRetrieveResult *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::RenderStateCreateOrRetrieveResult*)pObjXXXX;
					pObjectX->first = (EarthView::World::Graphic::RTShaderSystem::CRenderState*) __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024RenderStateCreateOrRetrieveResult_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::RenderStateCreateOrRetrieveResult *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::RenderStateCreateOrRetrieveResult*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->second);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024RenderStateCreateOrRetrieveResult_set_1second_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::RenderStateCreateOrRetrieveResult *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::RenderStateCreateOrRetrieveResult*)pObjXXXX;
					pObjectX->second = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_createOrRetrieveRenderState_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring schemeName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* schemeName_ch = (const ev_char*)__env->GetStringUTFChars(schemeName_j,JNI_FALSE);
					const EVString schemeName = schemeName_ch;
					__env->ReleaseStringUTFChars(schemeName_j, (const char *)schemeName_ch);
					#else
					const ev_wchar* schemeName_ch = (const ev_wchar*)__env->GetStringChars(schemeName_j,JNI_FALSE);
					const EVString schemeName = schemeName_ch;
					__env->ReleaseStringChars(schemeName_j, (const jchar *)schemeName_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::RenderStateCreateOrRetrieveResult __values1 = pObjectX->createOrRetrieveRenderState(schemeName);
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::RenderStateCreateOrRetrieveResult *returnvalues = new EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::RenderStateCreateOrRetrieveResult(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_hasRenderState_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring schemeName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* schemeName_ch = (const ev_char*)__env->GetStringUTFChars(schemeName_j,JNI_FALSE);
					const EVString schemeName = schemeName_ch;
					__env->ReleaseStringUTFChars(schemeName_j, (const char *)schemeName_ch);
					#else
					const ev_wchar* schemeName_ch = (const ev_wchar*)__env->GetStringChars(schemeName_j,JNI_FALSE);
					const EVString schemeName = schemeName_ch;
					__env->ReleaseStringChars(schemeName_j, (const jchar *)schemeName_ch);
					#endif
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					ev_bool __values1 = pObjectX->hasRenderState(schemeName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_getRenderState_1EVString_1EVString_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring schemeName_j, jstring materialName_j, jint passIndex_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* schemeName_ch = (const ev_char*)__env->GetStringUTFChars(schemeName_j,JNI_FALSE);
					const EVString schemeName = schemeName_ch;
					__env->ReleaseStringUTFChars(schemeName_j, (const char *)schemeName_ch);
					#else
					const ev_wchar* schemeName_ch = (const ev_wchar*)__env->GetStringChars(schemeName_j,JNI_FALSE);
					const EVString schemeName = schemeName_ch;
					__env->ReleaseStringChars(schemeName_j, (const jchar *)schemeName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
					#else
					const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
					#endif
					ev_uint16 passIndex = (ev_uint16) passIndex_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CRenderState* __values1 = pObjectX->getRenderState(schemeName, materialName, passIndex);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_getRenderState_1EVString_1EVString_1EVString_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring schemeName_j, jstring materialName_j, jstring groupName_j, jint passIndex_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* schemeName_ch = (const ev_char*)__env->GetStringUTFChars(schemeName_j,JNI_FALSE);
					const EVString schemeName = schemeName_ch;
					__env->ReleaseStringUTFChars(schemeName_j, (const char *)schemeName_ch);
					#else
					const ev_wchar* schemeName_ch = (const ev_wchar*)__env->GetStringChars(schemeName_j,JNI_FALSE);
					const EVString schemeName = schemeName_ch;
					__env->ReleaseStringChars(schemeName_j, (const jchar *)schemeName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
					#else
					const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
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
					ev_uint16 passIndex = (ev_uint16) passIndex_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CRenderState* __values1 = pObjectX->getRenderState(schemeName, materialName, groupName, passIndex);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_addSubRenderStateFactory_1CSubRenderStateFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong factory_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *factory = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) factory_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					pObjectX->addSubRenderStateFactory(factory);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_getNumSubRenderStateFactories_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					ev_size_t __values1 = pObjectX->getNumSubRenderStateFactories();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_getSubRenderStateFactory_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_size_t index = (ev_size_t) index_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* __values1 = pObjectX->getSubRenderStateFactory(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_getSubRenderStateFactory_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring type_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* type_ch = (const ev_char*)__env->GetStringUTFChars(type_j,JNI_FALSE);
					const EVString type = type_ch;
					__env->ReleaseStringUTFChars(type_j, (const char *)type_ch);
					#else
					const ev_wchar* type_ch = (const ev_wchar*)__env->GetStringChars(type_j,JNI_FALSE);
					const EVString type = type_ch;
					__env->ReleaseStringChars(type_j, (const jchar *)type_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* __values1 = pObjectX->getSubRenderStateFactory(type);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_removeSubRenderStateFactory_1CSubRenderStateFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong factory_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory *factory = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) factory_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					pObjectX->removeSubRenderStateFactory(factory);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_createSubRenderState_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring type_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* type_ch = (const ev_char*)__env->GetStringUTFChars(type_j,JNI_FALSE);
					const EVString type = type_ch;
					__env->ReleaseStringUTFChars(type_j, (const char *)type_ch);
					#else
					const ev_wchar* type_ch = (const ev_wchar*)__env->GetStringChars(type_j,JNI_FALSE);
					const EVString type = type_ch;
					__env->ReleaseStringChars(type_j, (const jchar *)type_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->createSubRenderState(type);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_destroySubRenderState_1CSubRenderState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subRenderState_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *subRenderState = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) subRenderState_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					pObjectX->destroySubRenderState(subRenderState);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_hasShaderBasedTechnique_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring materialName_j, jstring srcTechniqueSchemeName_j, jstring dstTechniqueSchemeName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
					#else
					const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* srcTechniqueSchemeName_ch = (const ev_char*)__env->GetStringUTFChars(srcTechniqueSchemeName_j,JNI_FALSE);
					const EVString srcTechniqueSchemeName = srcTechniqueSchemeName_ch;
					__env->ReleaseStringUTFChars(srcTechniqueSchemeName_j, (const char *)srcTechniqueSchemeName_ch);
					#else
					const ev_wchar* srcTechniqueSchemeName_ch = (const ev_wchar*)__env->GetStringChars(srcTechniqueSchemeName_j,JNI_FALSE);
					const EVString srcTechniqueSchemeName = srcTechniqueSchemeName_ch;
					__env->ReleaseStringChars(srcTechniqueSchemeName_j, (const jchar *)srcTechniqueSchemeName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* dstTechniqueSchemeName_ch = (const ev_char*)__env->GetStringUTFChars(dstTechniqueSchemeName_j,JNI_FALSE);
					const EVString dstTechniqueSchemeName = dstTechniqueSchemeName_ch;
					__env->ReleaseStringUTFChars(dstTechniqueSchemeName_j, (const char *)dstTechniqueSchemeName_ch);
					#else
					const ev_wchar* dstTechniqueSchemeName_ch = (const ev_wchar*)__env->GetStringChars(dstTechniqueSchemeName_j,JNI_FALSE);
					const EVString dstTechniqueSchemeName = dstTechniqueSchemeName_ch;
					__env->ReleaseStringChars(dstTechniqueSchemeName_j, (const jchar *)dstTechniqueSchemeName_ch);
					#endif
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					ev_bool __values1 = pObjectX->hasShaderBasedTechnique(materialName, srcTechniqueSchemeName, dstTechniqueSchemeName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_hasShaderBasedTechnique_1EVString_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring materialName_j, jstring groupName_j, jstring srcTechniqueSchemeName_j, jstring dstTechniqueSchemeName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
					#else
					const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
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
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* srcTechniqueSchemeName_ch = (const ev_char*)__env->GetStringUTFChars(srcTechniqueSchemeName_j,JNI_FALSE);
					const EVString srcTechniqueSchemeName = srcTechniqueSchemeName_ch;
					__env->ReleaseStringUTFChars(srcTechniqueSchemeName_j, (const char *)srcTechniqueSchemeName_ch);
					#else
					const ev_wchar* srcTechniqueSchemeName_ch = (const ev_wchar*)__env->GetStringChars(srcTechniqueSchemeName_j,JNI_FALSE);
					const EVString srcTechniqueSchemeName = srcTechniqueSchemeName_ch;
					__env->ReleaseStringChars(srcTechniqueSchemeName_j, (const jchar *)srcTechniqueSchemeName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* dstTechniqueSchemeName_ch = (const ev_char*)__env->GetStringUTFChars(dstTechniqueSchemeName_j,JNI_FALSE);
					const EVString dstTechniqueSchemeName = dstTechniqueSchemeName_ch;
					__env->ReleaseStringUTFChars(dstTechniqueSchemeName_j, (const char *)dstTechniqueSchemeName_ch);
					#else
					const ev_wchar* dstTechniqueSchemeName_ch = (const ev_wchar*)__env->GetStringChars(dstTechniqueSchemeName_j,JNI_FALSE);
					const EVString dstTechniqueSchemeName = dstTechniqueSchemeName_ch;
					__env->ReleaseStringChars(dstTechniqueSchemeName_j, (const jchar *)dstTechniqueSchemeName_ch);
					#endif
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					ev_bool __values1 = pObjectX->hasShaderBasedTechnique(materialName, groupName, srcTechniqueSchemeName, dstTechniqueSchemeName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_createShaderBasedTechnique_1EVString_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring materialName_j, jstring srcTechniqueSchemeName_j, jstring dstTechniqueSchemeName_j, jboolean overProgrammable_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
					#else
					const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* srcTechniqueSchemeName_ch = (const ev_char*)__env->GetStringUTFChars(srcTechniqueSchemeName_j,JNI_FALSE);
					const EVString srcTechniqueSchemeName = srcTechniqueSchemeName_ch;
					__env->ReleaseStringUTFChars(srcTechniqueSchemeName_j, (const char *)srcTechniqueSchemeName_ch);
					#else
					const ev_wchar* srcTechniqueSchemeName_ch = (const ev_wchar*)__env->GetStringChars(srcTechniqueSchemeName_j,JNI_FALSE);
					const EVString srcTechniqueSchemeName = srcTechniqueSchemeName_ch;
					__env->ReleaseStringChars(srcTechniqueSchemeName_j, (const jchar *)srcTechniqueSchemeName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* dstTechniqueSchemeName_ch = (const ev_char*)__env->GetStringUTFChars(dstTechniqueSchemeName_j,JNI_FALSE);
					const EVString dstTechniqueSchemeName = dstTechniqueSchemeName_ch;
					__env->ReleaseStringUTFChars(dstTechniqueSchemeName_j, (const char *)dstTechniqueSchemeName_ch);
					#else
					const ev_wchar* dstTechniqueSchemeName_ch = (const ev_wchar*)__env->GetStringChars(dstTechniqueSchemeName_j,JNI_FALSE);
					const EVString dstTechniqueSchemeName = dstTechniqueSchemeName_ch;
					__env->ReleaseStringChars(dstTechniqueSchemeName_j, (const jchar *)dstTechniqueSchemeName_ch);
					#endif
					ev_bool overProgrammable = (ev_bool) overProgrammable_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					ev_bool __values1 = pObjectX->createShaderBasedTechnique(materialName, srcTechniqueSchemeName, dstTechniqueSchemeName, overProgrammable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_createShaderBasedTechnique_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring materialName_j, jstring srcTechniqueSchemeName_j, jstring dstTechniqueSchemeName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
					#else
					const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* srcTechniqueSchemeName_ch = (const ev_char*)__env->GetStringUTFChars(srcTechniqueSchemeName_j,JNI_FALSE);
					const EVString srcTechniqueSchemeName = srcTechniqueSchemeName_ch;
					__env->ReleaseStringUTFChars(srcTechniqueSchemeName_j, (const char *)srcTechniqueSchemeName_ch);
					#else
					const ev_wchar* srcTechniqueSchemeName_ch = (const ev_wchar*)__env->GetStringChars(srcTechniqueSchemeName_j,JNI_FALSE);
					const EVString srcTechniqueSchemeName = srcTechniqueSchemeName_ch;
					__env->ReleaseStringChars(srcTechniqueSchemeName_j, (const jchar *)srcTechniqueSchemeName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* dstTechniqueSchemeName_ch = (const ev_char*)__env->GetStringUTFChars(dstTechniqueSchemeName_j,JNI_FALSE);
					const EVString dstTechniqueSchemeName = dstTechniqueSchemeName_ch;
					__env->ReleaseStringUTFChars(dstTechniqueSchemeName_j, (const char *)dstTechniqueSchemeName_ch);
					#else
					const ev_wchar* dstTechniqueSchemeName_ch = (const ev_wchar*)__env->GetStringChars(dstTechniqueSchemeName_j,JNI_FALSE);
					const EVString dstTechniqueSchemeName = dstTechniqueSchemeName_ch;
					__env->ReleaseStringChars(dstTechniqueSchemeName_j, (const jchar *)dstTechniqueSchemeName_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					ev_bool __values1 = pObjectX->createShaderBasedTechnique(materialName, srcTechniqueSchemeName, dstTechniqueSchemeName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_createShaderBasedTechnique_1EVString_1EVString_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring materialName_j, jstring groupName_j, jstring srcTechniqueSchemeName_j, jstring dstTechniqueSchemeName_j, jboolean overProgrammable_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
					#else
					const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
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
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* srcTechniqueSchemeName_ch = (const ev_char*)__env->GetStringUTFChars(srcTechniqueSchemeName_j,JNI_FALSE);
					const EVString srcTechniqueSchemeName = srcTechniqueSchemeName_ch;
					__env->ReleaseStringUTFChars(srcTechniqueSchemeName_j, (const char *)srcTechniqueSchemeName_ch);
					#else
					const ev_wchar* srcTechniqueSchemeName_ch = (const ev_wchar*)__env->GetStringChars(srcTechniqueSchemeName_j,JNI_FALSE);
					const EVString srcTechniqueSchemeName = srcTechniqueSchemeName_ch;
					__env->ReleaseStringChars(srcTechniqueSchemeName_j, (const jchar *)srcTechniqueSchemeName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* dstTechniqueSchemeName_ch = (const ev_char*)__env->GetStringUTFChars(dstTechniqueSchemeName_j,JNI_FALSE);
					const EVString dstTechniqueSchemeName = dstTechniqueSchemeName_ch;
					__env->ReleaseStringUTFChars(dstTechniqueSchemeName_j, (const char *)dstTechniqueSchemeName_ch);
					#else
					const ev_wchar* dstTechniqueSchemeName_ch = (const ev_wchar*)__env->GetStringChars(dstTechniqueSchemeName_j,JNI_FALSE);
					const EVString dstTechniqueSchemeName = dstTechniqueSchemeName_ch;
					__env->ReleaseStringChars(dstTechniqueSchemeName_j, (const jchar *)dstTechniqueSchemeName_ch);
					#endif
					ev_bool overProgrammable = (ev_bool) overProgrammable_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					ev_bool __values1 = pObjectX->createShaderBasedTechnique(materialName, groupName, srcTechniqueSchemeName, dstTechniqueSchemeName, overProgrammable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_createShaderBasedTechnique_1EVString_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring materialName_j, jstring groupName_j, jstring srcTechniqueSchemeName_j, jstring dstTechniqueSchemeName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
					#else
					const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
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
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* srcTechniqueSchemeName_ch = (const ev_char*)__env->GetStringUTFChars(srcTechniqueSchemeName_j,JNI_FALSE);
					const EVString srcTechniqueSchemeName = srcTechniqueSchemeName_ch;
					__env->ReleaseStringUTFChars(srcTechniqueSchemeName_j, (const char *)srcTechniqueSchemeName_ch);
					#else
					const ev_wchar* srcTechniqueSchemeName_ch = (const ev_wchar*)__env->GetStringChars(srcTechniqueSchemeName_j,JNI_FALSE);
					const EVString srcTechniqueSchemeName = srcTechniqueSchemeName_ch;
					__env->ReleaseStringChars(srcTechniqueSchemeName_j, (const jchar *)srcTechniqueSchemeName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* dstTechniqueSchemeName_ch = (const ev_char*)__env->GetStringUTFChars(dstTechniqueSchemeName_j,JNI_FALSE);
					const EVString dstTechniqueSchemeName = dstTechniqueSchemeName_ch;
					__env->ReleaseStringUTFChars(dstTechniqueSchemeName_j, (const char *)dstTechniqueSchemeName_ch);
					#else
					const ev_wchar* dstTechniqueSchemeName_ch = (const ev_wchar*)__env->GetStringChars(dstTechniqueSchemeName_j,JNI_FALSE);
					const EVString dstTechniqueSchemeName = dstTechniqueSchemeName_ch;
					__env->ReleaseStringChars(dstTechniqueSchemeName_j, (const jchar *)dstTechniqueSchemeName_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					ev_bool __values1 = pObjectX->createShaderBasedTechnique(materialName, groupName, srcTechniqueSchemeName, dstTechniqueSchemeName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_removeShaderBasedTechnique_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring materialName_j, jstring srcTechniqueSchemeName_j, jstring dstTechniqueSchemeName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
					#else
					const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* srcTechniqueSchemeName_ch = (const ev_char*)__env->GetStringUTFChars(srcTechniqueSchemeName_j,JNI_FALSE);
					const EVString srcTechniqueSchemeName = srcTechniqueSchemeName_ch;
					__env->ReleaseStringUTFChars(srcTechniqueSchemeName_j, (const char *)srcTechniqueSchemeName_ch);
					#else
					const ev_wchar* srcTechniqueSchemeName_ch = (const ev_wchar*)__env->GetStringChars(srcTechniqueSchemeName_j,JNI_FALSE);
					const EVString srcTechniqueSchemeName = srcTechniqueSchemeName_ch;
					__env->ReleaseStringChars(srcTechniqueSchemeName_j, (const jchar *)srcTechniqueSchemeName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* dstTechniqueSchemeName_ch = (const ev_char*)__env->GetStringUTFChars(dstTechniqueSchemeName_j,JNI_FALSE);
					const EVString dstTechniqueSchemeName = dstTechniqueSchemeName_ch;
					__env->ReleaseStringUTFChars(dstTechniqueSchemeName_j, (const char *)dstTechniqueSchemeName_ch);
					#else
					const ev_wchar* dstTechniqueSchemeName_ch = (const ev_wchar*)__env->GetStringChars(dstTechniqueSchemeName_j,JNI_FALSE);
					const EVString dstTechniqueSchemeName = dstTechniqueSchemeName_ch;
					__env->ReleaseStringChars(dstTechniqueSchemeName_j, (const jchar *)dstTechniqueSchemeName_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeShaderBasedTechnique(materialName, srcTechniqueSchemeName, dstTechniqueSchemeName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_removeShaderBasedTechnique_1EVString_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring materialName_j, jstring groupName_j, jstring srcTechniqueSchemeName_j, jstring dstTechniqueSchemeName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
					#else
					const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
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
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* srcTechniqueSchemeName_ch = (const ev_char*)__env->GetStringUTFChars(srcTechniqueSchemeName_j,JNI_FALSE);
					const EVString srcTechniqueSchemeName = srcTechniqueSchemeName_ch;
					__env->ReleaseStringUTFChars(srcTechniqueSchemeName_j, (const char *)srcTechniqueSchemeName_ch);
					#else
					const ev_wchar* srcTechniqueSchemeName_ch = (const ev_wchar*)__env->GetStringChars(srcTechniqueSchemeName_j,JNI_FALSE);
					const EVString srcTechniqueSchemeName = srcTechniqueSchemeName_ch;
					__env->ReleaseStringChars(srcTechniqueSchemeName_j, (const jchar *)srcTechniqueSchemeName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* dstTechniqueSchemeName_ch = (const ev_char*)__env->GetStringUTFChars(dstTechniqueSchemeName_j,JNI_FALSE);
					const EVString dstTechniqueSchemeName = dstTechniqueSchemeName_ch;
					__env->ReleaseStringUTFChars(dstTechniqueSchemeName_j, (const char *)dstTechniqueSchemeName_ch);
					#else
					const ev_wchar* dstTechniqueSchemeName_ch = (const ev_wchar*)__env->GetStringChars(dstTechniqueSchemeName_j,JNI_FALSE);
					const EVString dstTechniqueSchemeName = dstTechniqueSchemeName_ch;
					__env->ReleaseStringChars(dstTechniqueSchemeName_j, (const jchar *)dstTechniqueSchemeName_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeShaderBasedTechnique(materialName, groupName, srcTechniqueSchemeName, dstTechniqueSchemeName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_removeAllShaderBasedTechniques_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring materialName_j, jstring groupName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
					#else
					const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
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
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeAllShaderBasedTechniques(materialName, groupName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_removeAllShaderBasedTechniques_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring materialName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
					#else
					const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeAllShaderBasedTechniques(materialName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_cloneShaderBasedTechniques_1EVString_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring srcMaterialName_j, jstring srcGroupName_j, jstring dstMaterialName_j, jstring dstGroupName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* srcMaterialName_ch = (const ev_char*)__env->GetStringUTFChars(srcMaterialName_j,JNI_FALSE);
					const EVString srcMaterialName = srcMaterialName_ch;
					__env->ReleaseStringUTFChars(srcMaterialName_j, (const char *)srcMaterialName_ch);
					#else
					const ev_wchar* srcMaterialName_ch = (const ev_wchar*)__env->GetStringChars(srcMaterialName_j,JNI_FALSE);
					const EVString srcMaterialName = srcMaterialName_ch;
					__env->ReleaseStringChars(srcMaterialName_j, (const jchar *)srcMaterialName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* srcGroupName_ch = (const ev_char*)__env->GetStringUTFChars(srcGroupName_j,JNI_FALSE);
					const EVString srcGroupName = srcGroupName_ch;
					__env->ReleaseStringUTFChars(srcGroupName_j, (const char *)srcGroupName_ch);
					#else
					const ev_wchar* srcGroupName_ch = (const ev_wchar*)__env->GetStringChars(srcGroupName_j,JNI_FALSE);
					const EVString srcGroupName = srcGroupName_ch;
					__env->ReleaseStringChars(srcGroupName_j, (const jchar *)srcGroupName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* dstMaterialName_ch = (const ev_char*)__env->GetStringUTFChars(dstMaterialName_j,JNI_FALSE);
					const EVString dstMaterialName = dstMaterialName_ch;
					__env->ReleaseStringUTFChars(dstMaterialName_j, (const char *)dstMaterialName_ch);
					#else
					const ev_wchar* dstMaterialName_ch = (const ev_wchar*)__env->GetStringChars(dstMaterialName_j,JNI_FALSE);
					const EVString dstMaterialName = dstMaterialName_ch;
					__env->ReleaseStringChars(dstMaterialName_j, (const jchar *)dstMaterialName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* dstGroupName_ch = (const ev_char*)__env->GetStringUTFChars(dstGroupName_j,JNI_FALSE);
					const EVString dstGroupName = dstGroupName_ch;
					__env->ReleaseStringUTFChars(dstGroupName_j, (const char *)dstGroupName_ch);
					#else
					const ev_wchar* dstGroupName_ch = (const ev_wchar*)__env->GetStringChars(dstGroupName_j,JNI_FALSE);
					const EVString dstGroupName = dstGroupName_ch;
					__env->ReleaseStringChars(dstGroupName_j, (const jchar *)dstGroupName_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					ev_bool __values1 = pObjectX->cloneShaderBasedTechniques(srcMaterialName, srcGroupName, dstMaterialName, dstGroupName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_removeAllShaderBasedTechniques_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					pObjectX->removeAllShaderBasedTechniques();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_createScheme_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring schemeName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* schemeName_ch = (const ev_char*)__env->GetStringUTFChars(schemeName_j,JNI_FALSE);
					const EVString schemeName = schemeName_ch;
					__env->ReleaseStringUTFChars(schemeName_j, (const char *)schemeName_ch);
					#else
					const ev_wchar* schemeName_ch = (const ev_wchar*)__env->GetStringChars(schemeName_j,JNI_FALSE);
					const EVString schemeName = schemeName_ch;
					__env->ReleaseStringChars(schemeName_j, (const jchar *)schemeName_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					pObjectX->createScheme(schemeName);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_invalidateScheme_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring schemeName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* schemeName_ch = (const ev_char*)__env->GetStringUTFChars(schemeName_j,JNI_FALSE);
					const EVString schemeName = schemeName_ch;
					__env->ReleaseStringUTFChars(schemeName_j, (const char *)schemeName_ch);
					#else
					const ev_wchar* schemeName_ch = (const ev_wchar*)__env->GetStringChars(schemeName_j,JNI_FALSE);
					const EVString schemeName = schemeName_ch;
					__env->ReleaseStringChars(schemeName_j, (const jchar *)schemeName_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					pObjectX->invalidateScheme(schemeName);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_validateScheme_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring schemeName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* schemeName_ch = (const ev_char*)__env->GetStringUTFChars(schemeName_j,JNI_FALSE);
					const EVString schemeName = schemeName_ch;
					__env->ReleaseStringUTFChars(schemeName_j, (const char *)schemeName_ch);
					#else
					const ev_wchar* schemeName_ch = (const ev_wchar*)__env->GetStringChars(schemeName_j,JNI_FALSE);
					const EVString schemeName = schemeName_ch;
					__env->ReleaseStringChars(schemeName_j, (const jchar *)schemeName_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					ev_bool __values1 = pObjectX->validateScheme(schemeName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_invalidateMaterial_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring schemeName_j, jstring materialName_j, jstring groupName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* schemeName_ch = (const ev_char*)__env->GetStringUTFChars(schemeName_j,JNI_FALSE);
					const EVString schemeName = schemeName_ch;
					__env->ReleaseStringUTFChars(schemeName_j, (const char *)schemeName_ch);
					#else
					const ev_wchar* schemeName_ch = (const ev_wchar*)__env->GetStringChars(schemeName_j,JNI_FALSE);
					const EVString schemeName = schemeName_ch;
					__env->ReleaseStringChars(schemeName_j, (const jchar *)schemeName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
					#else
					const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
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
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					pObjectX->invalidateMaterial(schemeName, materialName, groupName);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_invalidateMaterial_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring schemeName_j, jstring materialName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* schemeName_ch = (const ev_char*)__env->GetStringUTFChars(schemeName_j,JNI_FALSE);
					const EVString schemeName = schemeName_ch;
					__env->ReleaseStringUTFChars(schemeName_j, (const char *)schemeName_ch);
					#else
					const ev_wchar* schemeName_ch = (const ev_wchar*)__env->GetStringChars(schemeName_j,JNI_FALSE);
					const EVString schemeName = schemeName_ch;
					__env->ReleaseStringChars(schemeName_j, (const jchar *)schemeName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
					#else
					const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					pObjectX->invalidateMaterial(schemeName, materialName);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_validateMaterial_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring schemeName_j, jstring materialName_j, jstring groupName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* schemeName_ch = (const ev_char*)__env->GetStringUTFChars(schemeName_j,JNI_FALSE);
					const EVString schemeName = schemeName_ch;
					__env->ReleaseStringUTFChars(schemeName_j, (const char *)schemeName_ch);
					#else
					const ev_wchar* schemeName_ch = (const ev_wchar*)__env->GetStringChars(schemeName_j,JNI_FALSE);
					const EVString schemeName = schemeName_ch;
					__env->ReleaseStringChars(schemeName_j, (const jchar *)schemeName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
					#else
					const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
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
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					ev_bool __values1 = pObjectX->validateMaterial(schemeName, materialName, groupName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_validateMaterial_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring schemeName_j, jstring materialName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* schemeName_ch = (const ev_char*)__env->GetStringUTFChars(schemeName_j,JNI_FALSE);
					const EVString schemeName = schemeName_ch;
					__env->ReleaseStringUTFChars(schemeName_j, (const char *)schemeName_ch);
					#else
					const ev_wchar* schemeName_ch = (const ev_wchar*)__env->GetStringChars(schemeName_j,JNI_FALSE);
					const EVString schemeName = schemeName_ch;
					__env->ReleaseStringChars(schemeName_j, (const jchar *)schemeName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
					#else
					const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					ev_bool __values1 = pObjectX->validateMaterial(schemeName, materialName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_getMaterialSerializerListener_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSGMaterialSerializerListener* __values1 = pObjectX->getMaterialSerializerListener();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_getVertexShaderCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					ev_size_t __values1 = pObjectX->getVertexShaderCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_getFragmentShaderCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					ev_size_t __values1 = pObjectX->getFragmentShaderCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_setVertexShaderOutputsCompactPolicy_1VSOutputCompactPolicy(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint policy_j)
				{
					EarthView::World::Graphic::RTShaderSystem::VSOutputCompactPolicy policy = (EarthView::World::Graphic::RTShaderSystem::VSOutputCompactPolicy) policy_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					pObjectX->setVertexShaderOutputsCompactPolicy(policy);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_getVertexShaderOutputsCompactPolicy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::VSOutputCompactPolicy __values1 = pObjectX->getVertexShaderOutputsCompactPolicy();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_setCreateShaderOverProgrammablePass_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					pObjectX->setCreateShaderOverProgrammablePass(value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_getCreateShaderOverProgrammablePass_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					ev_bool __values1 = pObjectX->getCreateShaderOverProgrammablePass();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_getRTShaderSchemeCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					ev_size_t __values1 = pObjectX->getRTShaderSchemeCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_getRTShaderScheme_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_size_t index = (ev_size_t) index_j;
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator*) pObjXXXX;
					const EVString& __values1 = pObjectX->getRTShaderScheme(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_get_1DEFAULT_1SCHEME_1NAME_1void(JNIEnv *__env, jclass __clazz)
				{
					EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::DEFAULT_SCHEME_NAME;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_set_1DEFAULT_1SCHEME_1NAME_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
				{
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::DEFAULT_SCHEME_NAME = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechniquelist_push_1back_1SGTechnique(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *t = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) t_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechniquelist_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechniquelist_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechniquelist_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechniquelist_insert_1ev_1uint32_1SGTechnique(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *&t = *(EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique**) t_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechniquelist_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechniquelist_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechniquelist_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList& pObjectX = *(EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechniquelist_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechniquelist_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechniquelist_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechniquelist_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechniquelist_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgpass_buildTargetRenderState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass*) pObjXXXX;
					pObjectX->buildTargetRenderState();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgpass_acquirePrograms_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass*) pObjXXXX;
					pObjectX->acquirePrograms();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgpass_releasePrograms_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass*) pObjXXXX;
					pObjectX->releasePrograms();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgpass_notifyRenderSingleObject_1CRenderable_1CAutoParamDataSource_1LightList_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rend_j, jlong source_j, jlong pLightList_j, jboolean suppressRenderStateChanges_j)
				{
					EarthView::World::Graphic::CRenderable *rend = (EarthView::World::Graphic::CRenderable*) rend_j;
					const EarthView::World::Graphic::CAutoParamDataSource *source = (const EarthView::World::Graphic::CAutoParamDataSource*) source_j;
					const EarthView::World::Graphic::LightList *pLightList = (const EarthView::World::Graphic::LightList*) pLightList_j;
					ev_bool suppressRenderStateChanges = (ev_bool) suppressRenderStateChanges_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass*) pObjXXXX;
					pObjectX->notifyRenderSingleObject(rend, source, pLightList, suppressRenderStateChanges);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgpass_getSrcPass_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass*) pObjXXXX;
					EarthView::World::Graphic::CPass* __values1 = pObjectX->getSrcPass();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgpass_getDstPass_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass*) pObjXXXX;
					EarthView::World::Graphic::CPass* __values1 = pObjectX->getDstPass();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgpass_getCustomFFPSubState_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint subStateOrder_j)
				{
					ev_int32 subStateOrder = (ev_int32) subStateOrder_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* __values1 = pObjectX->getCustomFFPSubState(subStateOrder);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgpass_getCustomRenderState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CRenderState* __values1 = pObjectX->getCustomRenderState();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgpass_setCustomRenderState_1CRenderState(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong customRenderState_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CRenderState *customRenderState = (EarthView::World::Graphic::RTShaderSystem::CRenderState*) customRenderState_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass*) pObjXXXX;
					pObjectX->setCustomRenderState(customRenderState);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgpass_get_1UserKey_1void(JNIEnv *__env, jclass __clazz)
				{
					EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass::UserKey;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgpass_set_1UserKey_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
				{
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGPass::UserKey = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechnique_getParent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) pObjXXXX;
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGMaterial* __values1 = pObjectX->getParent();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechnique_getSourceTechnique_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) pObjXXXX;
					EarthView::World::Graphic::CTechnique* __values1 = pObjectX->getSourceTechnique();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechnique_getDestinationTechnique_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) pObjXXXX;
					EarthView::World::Graphic::CTechnique* __values1 = pObjectX->getDestinationTechnique();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechnique_getDestinationTechniqueSchemeName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) pObjXXXX;
					const EVString& __values1 = pObjectX->getDestinationTechniqueSchemeName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechnique_buildTargetRenderState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) pObjXXXX;
					pObjectX->buildTargetRenderState();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechnique_acquirePrograms_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) pObjXXXX;
					pObjectX->acquirePrograms();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechnique_releasePrograms_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) pObjXXXX;
					pObjectX->releasePrograms();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechnique_setBuildDestinationTechnique_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean buildTechnique_j)
				{
					ev_bool buildTechnique = (ev_bool) buildTechnique_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) pObjXXXX;
					pObjectX->setBuildDestinationTechnique(buildTechnique);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechnique_getBuildDestinationTechnique_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) pObjXXXX;
					ev_bool __values1 = pObjectX->getBuildDestinationTechnique();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechnique_getRenderState_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint passIndex_j)
				{
					ev_uint16 passIndex = (ev_uint16) passIndex_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CRenderState* __values1 = pObjectX->getRenderState(passIndex);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechnique_hasRenderState_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint passIndex_j)
				{
					ev_uint16 passIndex = (ev_uint16) passIndex_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) pObjXXXX;
					ev_bool __values1 = pObjectX->hasRenderState(passIndex);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechnique_get_1UserKey_1void(JNIEnv *__env, jclass __clazz)
				{
					EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique::UserKey;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgtechnique_set_1UserKey_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
				{
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique::UserKey = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgmaterial_getMaterialName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGMaterial *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGMaterial*) pObjXXXX;
					const EVString& __values1 = pObjectX->getMaterialName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgmaterial_getGroupName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGMaterial *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGMaterial*) pObjXXXX;
					const EVString& __values1 = pObjectX->getGroupName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgmaterial_getTechniqueList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGMaterial *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGMaterial*) pObjXXXX;
					const EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechniqueList& __values1 = pObjectX->getTechniqueList();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscheme_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscheme_invalidate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme*) pObjXXXX;
					pObjectX->invalidate();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscheme_validate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme*) pObjXXXX;
					pObjectX->validate();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscheme_invalidate_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring materialName_j, jstring groupName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
					#else
					const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
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
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme*) pObjXXXX;
					pObjectX->invalidate(materialName, groupName);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscheme_invalidate_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring materialName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
					#else
					const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme*) pObjXXXX;
					pObjectX->invalidate(materialName);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscheme_validate_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring materialName_j, jstring groupName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
					#else
					const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
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
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme*) pObjXXXX;
					ev_bool __values1 = pObjectX->validate(materialName, groupName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscheme_validate_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring materialName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
					#else
					const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
					#endif
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme*) pObjXXXX;
					ev_bool __values1 = pObjectX->validate(materialName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscheme_addTechniqueEntry_1SGTechnique(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong techEntry_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *techEntry = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) techEntry_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme*) pObjXXXX;
					pObjectX->addTechniqueEntry(techEntry);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscheme_removeTechniqueEntry_1SGTechnique(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong techEntry_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique *techEntry = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGTechnique*) techEntry_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme*) pObjXXXX;
					pObjectX->removeTechniqueEntry(techEntry);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscheme_getRenderState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CRenderState* __values1 = pObjectX->getRenderState();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscheme_getRenderState_1EVString_1EVString_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring materialName_j, jstring groupName_j, jint passIndex_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
					#else
					const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
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
					ev_uint16 passIndex = (ev_uint16) passIndex_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScheme*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CRenderState* __values1 = pObjectX->getRenderState(materialName, groupName, passIndex);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				class JSGRenderObjectListenerProxy : public EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGRenderObjectListener
				{
				 private:
					EarthView::World::Core::ev_string m_notifyRenderSingleObject_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback;
					EarthView::World::Core::ev_string m_notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback;
					EarthView::World::Core::ev_string m_notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback;
				public:
					JSGRenderObjectListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : SGRenderObjectListener(pList)
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
					void register_notifyRenderSingleObject_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_notifyRenderSingleObject_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback = __method;
					}
					void register_notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback = __method;
					}
					void register_notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback = __method;
					}
					virtual void notifyRenderSingleObject(EarthView::World::Graphic::CRenderable* rend, const EarthView::World::Graphic::CPass* pass, const EarthView::World::Graphic::CAutoParamDataSource* source, const EarthView::World::Graphic::LightList* pLightList, ev_bool suppressRenderStateChanges)
					{
						if (this->_gRef != NULL && this->m_notifyRenderSingleObject_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback != "" && this->isCustomExtend())
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
							jlong rend_j = (jlong) rend;
							jlong pass_j = (jlong) pass;
							jlong source_j = (jlong) source;
							jlong pLightList_j = (jlong) pLightList;
							jboolean suppressRenderStateChanges_j = (jboolean) suppressRenderStateChanges;
							jmethodID __method = __gr->getMethod("notifyRenderSingleObject_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , rend_j, pass_j, source_j, pLightList_j, suppressRenderStateChanges_j);
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
							return this->SGRenderObjectListener::notifyRenderSingleObject(rend, pass, source, pLightList, suppressRenderStateChanges);
						}
					}
					virtual void notifyRenderSingleObjectStarted(EarthView::World::Graphic::CRenderable* rend, const EarthView::World::Graphic::CPass* pass, const EarthView::World::Graphic::CAutoParamDataSource* source, const EarthView::World::Graphic::LightList* pLightList, ev_bool suppressRenderStateChanges)
					{
						if (this->_gRef != NULL && this->m_notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback != "" && this->isCustomExtend())
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
							jlong rend_j = (jlong) rend;
							jlong pass_j = (jlong) pass;
							jlong source_j = (jlong) source;
							jlong pLightList_j = (jlong) pLightList;
							jboolean suppressRenderStateChanges_j = (jboolean) suppressRenderStateChanges;
							jmethodID __method = __gr->getMethod("notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , rend_j, pass_j, source_j, pLightList_j, suppressRenderStateChanges_j);
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
							return this->SGRenderObjectListener::notifyRenderSingleObjectStarted(rend, pass, source, pLightList, suppressRenderStateChanges);
						}
					}
					virtual void notifyRenderSingleObjectEnd(EarthView::World::Graphic::CRenderable* rend, const EarthView::World::Graphic::CPass* pass, const EarthView::World::Graphic::CAutoParamDataSource* source, const EarthView::World::Graphic::LightList* pLightList, ev_bool suppressRenderStateChanges)
					{
						if (this->_gRef != NULL && this->m_notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback != "" && this->isCustomExtend())
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
							jlong rend_j = (jlong) rend;
							jlong pass_j = (jlong) pass;
							jlong source_j = (jlong) source;
							jlong pLightList_j = (jlong) pLightList;
							jboolean suppressRenderStateChanges_j = (jboolean) suppressRenderStateChanges;
							jmethodID __method = __gr->getMethod("notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , rend_j, pass_j, source_j, pLightList_j, suppressRenderStateChanges_j);
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
							return this->SGRenderObjectListener::notifyRenderSingleObjectEnd(rend, pass, source, pLightList, suppressRenderStateChanges);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JSGRenderObjectListenerProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgrenderobjectlistener_notifyRenderSingleObject_1CRenderable_1CPass_1CAutoParamDataSource_1LightList_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rend_j, jlong pass_j, jlong source_j, jlong pLightList_j, jboolean suppressRenderStateChanges_j)
				{
					EarthView::World::Graphic::CRenderable *rend = (EarthView::World::Graphic::CRenderable*) rend_j;
					const EarthView::World::Graphic::CPass *pass = (const EarthView::World::Graphic::CPass*) pass_j;
					const EarthView::World::Graphic::CAutoParamDataSource *source = (const EarthView::World::Graphic::CAutoParamDataSource*) source_j;
					const EarthView::World::Graphic::LightList *pLightList = (const EarthView::World::Graphic::LightList*) pLightList_j;
					ev_bool suppressRenderStateChanges = (ev_bool) suppressRenderStateChanges_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGRenderObjectListener *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGRenderObjectListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JSGRenderObjectListenerProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGRenderObjectListener::notifyRenderSingleObject(rend, pass, source, pLightList, suppressRenderStateChanges);
					}
					else
					{
						pObjectX->notifyRenderSingleObject(rend, pass, source, pLightList, suppressRenderStateChanges);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgrenderobjectlistener_register_1notifyRenderSingleObject_1CRenderable_1CPass_1CAutoParamDataSource_1LightList_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JSGRenderObjectListenerProxy *pObjectX = (JSGRenderObjectListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_notifyRenderSingleObject_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"notifyRenderSingleObject_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback", "(JJJJZ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgrenderobjectlistener_notifyRenderSingleObject_1CRenderable_1CPass_1CAutoParamDataSource_1LightList_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rend_j, jlong pass_j, jlong source_j, jlong pLightList_j, jboolean suppressRenderStateChanges_j)
				{
					EarthView::World::Graphic::CRenderable *rend = (EarthView::World::Graphic::CRenderable*) rend_j;
					const EarthView::World::Graphic::CPass *pass = (const EarthView::World::Graphic::CPass*) pass_j;
					const EarthView::World::Graphic::CAutoParamDataSource *source = (const EarthView::World::Graphic::CAutoParamDataSource*) source_j;
					const EarthView::World::Graphic::LightList *pLightList = (const EarthView::World::Graphic::LightList*) pLightList_j;
					ev_bool suppressRenderStateChanges = (ev_bool) suppressRenderStateChanges_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGRenderObjectListener *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGRenderObjectListener*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGRenderObjectListener::notifyRenderSingleObject(rend, pass, source, pLightList, suppressRenderStateChanges);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgrenderobjectlistener_register_1notifyRenderSingleObjectStarted_1CRenderable_1CPass_1CAutoParamDataSource_1LightList_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JSGRenderObjectListenerProxy *pObjectX = (JSGRenderObjectListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"notifyRenderSingleObjectStarted_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback", "(JJJJZ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgrenderobjectlistener_register_1notifyRenderSingleObjectEnd_1CRenderable_1CPass_1CAutoParamDataSource_1LightList_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JSGRenderObjectListenerProxy *pObjectX = (JSGRenderObjectListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"notifyRenderSingleObjectEnd_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_callback", "(JJJJZ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				class JSGSceneManagerListenerProxy : public EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener
				{
				 private:
					EarthView::World::Core::ev_string m_preUpdateSceneGraph_CSceneManager_CCamera_callback;
					EarthView::World::Core::ev_string m_postUpdateSceneGraph_CSceneManager_CCamera_callback;
					EarthView::World::Core::ev_string m_preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback;
					EarthView::World::Core::ev_string m_postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback;
					EarthView::World::Core::ev_string m_shadowTexturesUpdated_ev_size_t_callback;
					EarthView::World::Core::ev_string m_shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback;
					EarthView::World::Core::ev_string m_shadowTextureReceiverPreViewProj_CLight_CFrustum_callback;
					EarthView::World::Core::ev_string m_sortLightsAffectingFrustum_LightList_callback;
					EarthView::World::Core::ev_string m_sceneManagerDestroyed_CSceneManager_callback;
				public:
					JSGSceneManagerListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : SGSceneManagerListener(pList)
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
					void register_preUpdateSceneGraph_CSceneManager_CCamera_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_preUpdateSceneGraph_CSceneManager_CCamera_callback = __method;
					}
					void register_postUpdateSceneGraph_CSceneManager_CCamera_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_postUpdateSceneGraph_CSceneManager_CCamera_callback = __method;
					}
					void register_preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback = __method;
					}
					void register_postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback = __method;
					}
					void register_shadowTexturesUpdated_ev_size_t_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_shadowTexturesUpdated_ev_size_t_callback = __method;
					}
					void register_shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback = __method;
					}
					void register_shadowTextureReceiverPreViewProj_CLight_CFrustum_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_shadowTextureReceiverPreViewProj_CLight_CFrustum_callback = __method;
					}
					void register_sortLightsAffectingFrustum_LightList_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_sortLightsAffectingFrustum_LightList_callback = __method;
					}
					void register_sceneManagerDestroyed_CSceneManager_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_sceneManagerDestroyed_CSceneManager_callback = __method;
					}
					virtual void preFindVisibleObjects(EarthView::World::Graphic::CSceneManager* source, EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, EarthView::World::Graphic::CViewport* v)
					{
						if (this->_gRef != NULL && this->m_preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback != "" && this->isCustomExtend())
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
							jlong source_j = (jlong) source;
							jint irs_j = (jint) irs;
							jlong v_j = (jlong) v;
							jmethodID __method = __gr->getMethod("preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback");
							__env->CallVoidMethod(__obj, __method , source_j, irs_j, v_j);
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
							return this->SGSceneManagerListener::preFindVisibleObjects(source, irs, v);
						}
					}
					virtual void postFindVisibleObjects(EarthView::World::Graphic::CSceneManager* source, EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, EarthView::World::Graphic::CViewport* v)
					{
						if (this->_gRef != NULL && this->m_postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback != "" && this->isCustomExtend())
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
							jlong source_j = (jlong) source;
							jint irs_j = (jint) irs;
							jlong v_j = (jlong) v;
							jmethodID __method = __gr->getMethod("postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback");
							__env->CallVoidMethod(__obj, __method , source_j, irs_j, v_j);
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
							return this->SGSceneManagerListener::postFindVisibleObjects(source, irs, v);
						}
					}
					virtual void shadowTexturesUpdated(ev_size_t numberOfShadowTextures)
					{
						if (this->_gRef != NULL && this->m_shadowTexturesUpdated_ev_size_t_callback != "" && this->isCustomExtend())
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
							jlong numberOfShadowTextures_j = (jlong) numberOfShadowTextures;
							jmethodID __method = __gr->getMethod("shadowTexturesUpdated_ev_size_t_callback");
							__env->CallVoidMethod(__obj, __method , numberOfShadowTextures_j);
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
							return this->SGSceneManagerListener::shadowTexturesUpdated(numberOfShadowTextures);
						}
					}
					virtual void shadowTextureCasterPreViewProj(EarthView::World::Graphic::CLight* light, EarthView::World::Graphic::CCamera* camera, ev_size_t iteration)
					{
						if (this->_gRef != NULL && this->m_shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback != "" && this->isCustomExtend())
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
							jlong light_j = (jlong) light;
							jlong camera_j = (jlong) camera;
							jlong iteration_j = (jlong) iteration;
							jmethodID __method = __gr->getMethod("shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback");
							__env->CallVoidMethod(__obj, __method , light_j, camera_j, iteration_j);
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
							return this->SGSceneManagerListener::shadowTextureCasterPreViewProj(light, camera, iteration);
						}
					}
					virtual void shadowTextureReceiverPreViewProj(EarthView::World::Graphic::CLight* light, EarthView::World::Graphic::CFrustum* frustum)
					{
						if (this->_gRef != NULL && this->m_shadowTextureReceiverPreViewProj_CLight_CFrustum_callback != "" && this->isCustomExtend())
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
							jlong light_j = (jlong) light;
							jlong frustum_j = (jlong) frustum;
							jmethodID __method = __gr->getMethod("shadowTextureReceiverPreViewProj_CLight_CFrustum_callback");
							__env->CallVoidMethod(__obj, __method , light_j, frustum_j);
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
							return this->SGSceneManagerListener::shadowTextureReceiverPreViewProj(light, frustum);
						}
					}
					virtual void preUpdateSceneGraph(EarthView::World::Graphic::CSceneManager* source, EarthView::World::Graphic::CCamera* camera)
					{
						if (this->_gRef != NULL && this->m_preUpdateSceneGraph_CSceneManager_CCamera_callback != "" && this->isCustomExtend())
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
							jlong source_j = (jlong) source;
							jlong camera_j = (jlong) camera;
							jmethodID __method = __gr->getMethod("preUpdateSceneGraph_CSceneManager_CCamera_callback");
							__env->CallVoidMethod(__obj, __method , source_j, camera_j);
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
							return this->SGSceneManagerListener::preUpdateSceneGraph(source, camera);
						}
					}
					virtual void postUpdateSceneGraph(EarthView::World::Graphic::CSceneManager* source, EarthView::World::Graphic::CCamera* camera)
					{
						if (this->_gRef != NULL && this->m_postUpdateSceneGraph_CSceneManager_CCamera_callback != "" && this->isCustomExtend())
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
							jlong source_j = (jlong) source;
							jlong camera_j = (jlong) camera;
							jmethodID __method = __gr->getMethod("postUpdateSceneGraph_CSceneManager_CCamera_callback");
							__env->CallVoidMethod(__obj, __method , source_j, camera_j);
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
							return this->SGSceneManagerListener::postUpdateSceneGraph(source, camera);
						}
					}
					virtual ev_bool sortLightsAffectingFrustum(EarthView::World::Graphic::LightList& lightList)
					{
						if (this->_gRef != NULL && this->m_sortLightsAffectingFrustum_LightList_callback != "" && this->isCustomExtend())
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
							jlong lightList_j = (jlong) &lightList;
							jmethodID __method = __gr->getMethod("sortLightsAffectingFrustum_LightList_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , lightList_j);
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
							return this->SGSceneManagerListener::sortLightsAffectingFrustum(lightList);
						}
					}
					virtual void sceneManagerDestroyed(EarthView::World::Graphic::CSceneManager* source)
					{
						if (this->_gRef != NULL && this->m_sceneManagerDestroyed_CSceneManager_callback != "" && this->isCustomExtend())
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
							jlong source_j = (jlong) source;
							jmethodID __method = __gr->getMethod("sceneManagerDestroyed_CSceneManager_callback");
							__env->CallVoidMethod(__obj, __method , source_j);
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
							return this->SGSceneManagerListener::sceneManagerDestroyed(source);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JSGSceneManagerListenerProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscenemanagerlistener_preFindVisibleObjects_1CSceneManager_1IlluminationRenderStage_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong source_j, jint irs_j, jlong v_j)
				{
					EarthView::World::Graphic::CSceneManager *source = (EarthView::World::Graphic::CSceneManager*) source_j;
					EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs = (EarthView::World::Graphic::CSceneManager::IlluminationRenderStage) irs_j;
					EarthView::World::Graphic::CViewport *v = (EarthView::World::Graphic::CViewport*) v_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JSGSceneManagerListenerProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener::preFindVisibleObjects(source, irs, v);
					}
					else
					{
						pObjectX->preFindVisibleObjects(source, irs, v);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscenemanagerlistener_register_1preFindVisibleObjects_1CSceneManager_1IlluminationRenderStage_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JSGSceneManagerListenerProxy *pObjectX = (JSGSceneManagerListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"preFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback", "(JIJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscenemanagerlistener_preFindVisibleObjects_1CSceneManager_1IlluminationRenderStage_1CViewport_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong source_j, jint irs_j, jlong v_j)
				{
					EarthView::World::Graphic::CSceneManager *source = (EarthView::World::Graphic::CSceneManager*) source_j;
					EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs = (EarthView::World::Graphic::CSceneManager::IlluminationRenderStage) irs_j;
					EarthView::World::Graphic::CViewport *v = (EarthView::World::Graphic::CViewport*) v_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener::preFindVisibleObjects(source, irs, v);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscenemanagerlistener_postFindVisibleObjects_1CSceneManager_1IlluminationRenderStage_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong source_j, jint irs_j, jlong v_j)
				{
					EarthView::World::Graphic::CSceneManager *source = (EarthView::World::Graphic::CSceneManager*) source_j;
					EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs = (EarthView::World::Graphic::CSceneManager::IlluminationRenderStage) irs_j;
					EarthView::World::Graphic::CViewport *v = (EarthView::World::Graphic::CViewport*) v_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JSGSceneManagerListenerProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener::postFindVisibleObjects(source, irs, v);
					}
					else
					{
						pObjectX->postFindVisibleObjects(source, irs, v);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscenemanagerlistener_register_1postFindVisibleObjects_1CSceneManager_1IlluminationRenderStage_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JSGSceneManagerListenerProxy *pObjectX = (JSGSceneManagerListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"postFindVisibleObjects_CSceneManager_IlluminationRenderStage_CViewport_callback", "(JIJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscenemanagerlistener_postFindVisibleObjects_1CSceneManager_1IlluminationRenderStage_1CViewport_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong source_j, jint irs_j, jlong v_j)
				{
					EarthView::World::Graphic::CSceneManager *source = (EarthView::World::Graphic::CSceneManager*) source_j;
					EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs = (EarthView::World::Graphic::CSceneManager::IlluminationRenderStage) irs_j;
					EarthView::World::Graphic::CViewport *v = (EarthView::World::Graphic::CViewport*) v_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener::postFindVisibleObjects(source, irs, v);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscenemanagerlistener_shadowTexturesUpdated_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong numberOfShadowTextures_j)
				{
					ev_size_t numberOfShadowTextures = (ev_size_t) numberOfShadowTextures_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JSGSceneManagerListenerProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener::shadowTexturesUpdated(numberOfShadowTextures);
					}
					else
					{
						pObjectX->shadowTexturesUpdated(numberOfShadowTextures);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscenemanagerlistener_register_1shadowTexturesUpdated_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JSGSceneManagerListenerProxy *pObjectX = (JSGSceneManagerListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_shadowTexturesUpdated_ev_size_t_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"shadowTexturesUpdated_ev_size_t_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscenemanagerlistener_shadowTexturesUpdated_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong numberOfShadowTextures_j)
				{
					ev_size_t numberOfShadowTextures = (ev_size_t) numberOfShadowTextures_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener::shadowTexturesUpdated(numberOfShadowTextures);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscenemanagerlistener_shadowTextureCasterPreViewProj_1CLight_1CCamera_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong light_j, jlong camera_j, jlong iteration_j)
				{
					EarthView::World::Graphic::CLight *light = (EarthView::World::Graphic::CLight*) light_j;
					EarthView::World::Graphic::CCamera *camera = (EarthView::World::Graphic::CCamera*) camera_j;
					ev_size_t iteration = (ev_size_t) iteration_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JSGSceneManagerListenerProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener::shadowTextureCasterPreViewProj(light, camera, iteration);
					}
					else
					{
						pObjectX->shadowTextureCasterPreViewProj(light, camera, iteration);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscenemanagerlistener_register_1shadowTextureCasterPreViewProj_1CLight_1CCamera_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JSGSceneManagerListenerProxy *pObjectX = (JSGSceneManagerListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"shadowTextureCasterPreViewProj_CLight_CCamera_ev_size_t_callback", "(JJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscenemanagerlistener_shadowTextureCasterPreViewProj_1CLight_1CCamera_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong light_j, jlong camera_j, jlong iteration_j)
				{
					EarthView::World::Graphic::CLight *light = (EarthView::World::Graphic::CLight*) light_j;
					EarthView::World::Graphic::CCamera *camera = (EarthView::World::Graphic::CCamera*) camera_j;
					ev_size_t iteration = (ev_size_t) iteration_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener::shadowTextureCasterPreViewProj(light, camera, iteration);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscenemanagerlistener_shadowTextureReceiverPreViewProj_1CLight_1CFrustum(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong light_j, jlong frustum_j)
				{
					EarthView::World::Graphic::CLight *light = (EarthView::World::Graphic::CLight*) light_j;
					EarthView::World::Graphic::CFrustum *frustum = (EarthView::World::Graphic::CFrustum*) frustum_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JSGSceneManagerListenerProxy))
					{
						pObjectX->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener::shadowTextureReceiverPreViewProj(light, frustum);
					}
					else
					{
						pObjectX->shadowTextureReceiverPreViewProj(light, frustum);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscenemanagerlistener_register_1shadowTextureReceiverPreViewProj_1CLight_1CFrustum(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JSGSceneManagerListenerProxy *pObjectX = (JSGSceneManagerListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_shadowTextureReceiverPreViewProj_CLight_CFrustum_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"shadowTextureReceiverPreViewProj_CLight_CFrustum_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscenemanagerlistener_shadowTextureReceiverPreViewProj_1CLight_1CFrustum_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong light_j, jlong frustum_j)
				{
					EarthView::World::Graphic::CLight *light = (EarthView::World::Graphic::CLight*) light_j;
					EarthView::World::Graphic::CFrustum *frustum = (EarthView::World::Graphic::CFrustum*) frustum_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener*) pObjXXXX;
					pObjectX->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGSceneManagerListener::shadowTextureReceiverPreViewProj(light, frustum);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscenemanagerlistener_register_1preUpdateSceneGraph_1CSceneManager_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JSGSceneManagerListenerProxy *pObjectX = (JSGSceneManagerListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_preUpdateSceneGraph_CSceneManager_CCamera_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"preUpdateSceneGraph_CSceneManager_CCamera_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscenemanagerlistener_register_1postUpdateSceneGraph_1CSceneManager_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JSGSceneManagerListenerProxy *pObjectX = (JSGSceneManagerListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_postUpdateSceneGraph_CSceneManager_CCamera_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"postUpdateSceneGraph_CSceneManager_CCamera_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscenemanagerlistener_register_1sortLightsAffectingFrustum_1LightList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JSGSceneManagerListenerProxy *pObjectX = (JSGSceneManagerListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_sortLightsAffectingFrustum_LightList_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"sortLightsAffectingFrustum_LightList_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscenemanagerlistener_register_1sceneManagerDestroyed_1CSceneManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JSGSceneManagerListenerProxy *pObjectX = (JSGSceneManagerListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_sceneManagerDestroyed_CSceneManager_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"sceneManagerDestroyed_CSceneManager_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				class JSGScriptTranslatorManagerProxy : public EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager
				{
				 private:
					EarthView::World::Core::ev_string m_getNumTranslators_void_callback;
					EarthView::World::Core::ev_string m_getTranslator_AbstractNodePtr_callback;
				public:
					JSGScriptTranslatorManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : SGScriptTranslatorManager(pList)
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
					void register_getNumTranslators_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getNumTranslators_void_callback = __method;
					}
					void register_getTranslator_AbstractNodePtr_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getTranslator_AbstractNodePtr_callback = __method;
					}
					virtual ev_size_t getNumTranslators() const
					{
						if (this->_gRef != NULL && this->m_getNumTranslators_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getNumTranslators_void_callback");
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
							return this->SGScriptTranslatorManager::getNumTranslators();
						}
					}
					virtual EarthView::World::Graphic::CScriptTranslator* getTranslator(const EarthView::World::Graphic::AbstractNodePtr& node)
					{
						if (this->_gRef != NULL && this->m_getTranslator_AbstractNodePtr_callback != "" && this->isCustomExtend())
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
							jlong node_j = (jlong) &node;
							jmethodID __method = __gr->getMethod("getTranslator_AbstractNodePtr_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , node_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CScriptTranslator *__values1 = (EarthView::World::Graphic::CScriptTranslator*) __values1_j;
							return __values1;
						}
						else
						{
							return this->SGScriptTranslatorManager::getTranslator(node);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JSGScriptTranslatorManagerProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscripttranslatormanager_getNumTranslators_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JSGScriptTranslatorManagerProxy))
					{
						ev_size_t __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager::getNumTranslators();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_size_t __values1 = pObjectX->getNumTranslators();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscripttranslatormanager_register_1getNumTranslators_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JSGScriptTranslatorManagerProxy *pObjectX = (JSGScriptTranslatorManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getNumTranslators_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getNumTranslators_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscripttranslatormanager_getNumTranslators_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager*) pObjXXXX;
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager::getNumTranslators();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscripttranslatormanager_getTranslator_1AbstractNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j)
				{
					const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JSGScriptTranslatorManagerProxy))
					{
						EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager::getTranslator(node);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->getTranslator(node);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscripttranslatormanager_register_1getTranslator_1AbstractNodePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JSGScriptTranslatorManagerProxy *pObjectX = (JSGScriptTranslatorManagerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getTranslator_AbstractNodePtr_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getTranslator_AbstractNodePtr_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_ShaderGenerator_00024Sgscripttranslatormanager_getTranslator_1AbstractNodePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j)
				{
					const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
					EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager*) pObjXXXX;
					EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CShaderGenerator::SGScriptTranslatorManager::getTranslator(node);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
