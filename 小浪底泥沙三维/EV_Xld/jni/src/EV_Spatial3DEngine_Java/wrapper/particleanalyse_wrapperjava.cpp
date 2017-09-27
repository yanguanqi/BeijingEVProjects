/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/particleanalyse.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace EffectManager
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_ParticleAnalyse_findParticles_1EVString_1CStringArray_1CStringArray(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring folder_j, jlong partilceFileNames_j, jlong particleNames_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* folder_ch = (const ev_char*)__env->GetStringUTFChars(folder_j,JNI_FALSE);
					EVString folder = folder_ch;
					__env->ReleaseStringUTFChars(folder_j, (const char *)folder_ch);
					#else
					const ev_wchar* folder_ch = (const ev_wchar*)__env->GetStringChars(folder_j,JNI_FALSE);
					EVString folder = folder_ch;
					__env->ReleaseStringChars(folder_j, (const jchar *)folder_ch);
					#endif
					EarthView::World::Core::CStringArray &partilceFileNames = *(EarthView::World::Core::CStringArray*) partilceFileNames_j;
					EarthView::World::Core::CStringArray &particleNames = *(EarthView::World::Core::CStringArray*) particleNames_j;
					EarthView::World::Spatial3D::EffectManager::CParticleAnalyse *pObjectX = (EarthView::World::Spatial3D::EffectManager::CParticleAnalyse*) pObjXXXX;
					pObjectX->findParticles(folder, partilceFileNames, particleNames);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_effectmanager_ParticleAnalyse_analyseParticle_1EVString_1EVString_1EVString_1EVString_1CStringArray_1CStringArray_1CStringArray_1CStringArray(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring folder_j, jstring particleFileName_j, jstring particleName_j, jlong materilname_j, jlong textures_j, jlong gpus_j, jlong progs_j, jlong errors_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* folder_ch = (const ev_char*)__env->GetStringUTFChars(folder_j,JNI_FALSE);
					EVString folder = folder_ch;
					__env->ReleaseStringUTFChars(folder_j, (const char *)folder_ch);
					#else
					const ev_wchar* folder_ch = (const ev_wchar*)__env->GetStringChars(folder_j,JNI_FALSE);
					EVString folder = folder_ch;
					__env->ReleaseStringChars(folder_j, (const jchar *)folder_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* particleFileName_ch = (const ev_char*)__env->GetStringUTFChars(particleFileName_j,JNI_FALSE);
					EVString particleFileName = particleFileName_ch;
					__env->ReleaseStringUTFChars(particleFileName_j, (const char *)particleFileName_ch);
					#else
					const ev_wchar* particleFileName_ch = (const ev_wchar*)__env->GetStringChars(particleFileName_j,JNI_FALSE);
					EVString particleFileName = particleFileName_ch;
					__env->ReleaseStringChars(particleFileName_j, (const jchar *)particleFileName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* particleName_ch = (const ev_char*)__env->GetStringUTFChars(particleName_j,JNI_FALSE);
					EVString particleName = particleName_ch;
					__env->ReleaseStringUTFChars(particleName_j, (const char *)particleName_ch);
					#else
					const ev_wchar* particleName_ch = (const ev_wchar*)__env->GetStringChars(particleName_j,JNI_FALSE);
					EVString particleName = particleName_ch;
					__env->ReleaseStringChars(particleName_j, (const jchar *)particleName_ch);
					#endif
					EVString &materilname = *(EVString*) materilname_j;
					EarthView::World::Core::CStringArray &textures = *(EarthView::World::Core::CStringArray*) textures_j;
					EarthView::World::Core::CStringArray &gpus = *(EarthView::World::Core::CStringArray*) gpus_j;
					EarthView::World::Core::CStringArray &progs = *(EarthView::World::Core::CStringArray*) progs_j;
					EarthView::World::Core::CStringArray &errors = *(EarthView::World::Core::CStringArray*) errors_j;
					EarthView::World::Spatial3D::EffectManager::CParticleAnalyse *pObjectX = (EarthView::World::Spatial3D::EffectManager::CParticleAnalyse*) pObjXXXX;
					pObjectX->analyseParticle(folder, particleFileName, particleName, materilname, textures, gpus, progs, errors);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_effectmanager_ParticleAnalyse_getFilename_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring file_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* file_ch = (const ev_char*)__env->GetStringUTFChars(file_j,JNI_FALSE);
					const EVString file = file_ch;
					__env->ReleaseStringUTFChars(file_j, (const char *)file_ch);
					#else
					const ev_wchar* file_ch = (const ev_wchar*)__env->GetStringChars(file_j,JNI_FALSE);
					const EVString file = file_ch;
					__env->ReleaseStringChars(file_j, (const jchar *)file_ch);
					#endif
					EarthView::World::Spatial3D::EffectManager::CParticleAnalyse *pObjectX = (EarthView::World::Spatial3D::EffectManager::CParticleAnalyse*) pObjXXXX;
					EVString __values1 = pObjectX->getFilename(file);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
		}
	}
}
