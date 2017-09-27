/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dproxy/effecttreeviewevent.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3dproxy_EffectTreeviewEvent_getNodeType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *pObjectX = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getNodeType();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectTreeviewEvent_setNodeType_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint nodetype_j)
			{
				ev_int32 nodetype = (ev_int32) nodetype_j;
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *pObjectX = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) pObjXXXX;
				pObjectX->setNodeType(nodetype);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3dproxy_EffectTreeviewEvent_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *pObjectX = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) pObjXXXX;
				EVString __values1 = pObjectX->getName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectTreeviewEvent_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *pObjectX = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) pObjXXXX;
				pObjectX->setName(name);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3dproxy_EffectTreeviewEvent_getID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *pObjectX = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) pObjXXXX;
				EVString __values1 = pObjectX->getID();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectTreeviewEvent_setID_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring id_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* id_ch = (const ev_char*)__env->GetStringUTFChars(id_j,JNI_FALSE);
				EVString id = id_ch;
				__env->ReleaseStringUTFChars(id_j, (const char *)id_ch);
				#else
				const ev_wchar* id_ch = (const ev_wchar*)__env->GetStringChars(id_j,JNI_FALSE);
				EVString id = id_ch;
				__env->ReleaseStringChars(id_j, (const jchar *)id_ch);
				#endif
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *pObjectX = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) pObjXXXX;
				pObjectX->setID(id);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3dproxy_EffectTreeviewEvent_getResponseState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *pObjectX = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) pObjXXXX;
				ev_bool __values1 = pObjectX->getResponseState();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectTreeviewEvent_setResponseState_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean state_j)
			{
				ev_bool state = (ev_bool) state_j;
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *pObjectX = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) pObjXXXX;
				pObjectX->setResponseState(state);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3dproxy_EffectTreeviewEvent_setPercent_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong percent_j)
			{
				ev_uint32 percent = (ev_uint32) percent_j;
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *pObjectX = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) pObjXXXX;
				pObjectX->setPercent(percent);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3dproxy_EffectTreeviewEvent_getPercent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3DProxy::CEffectTreeviewEvent *pObjectX = (EarthView::World::Spatial3DProxy::CEffectTreeviewEvent*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getPercent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
