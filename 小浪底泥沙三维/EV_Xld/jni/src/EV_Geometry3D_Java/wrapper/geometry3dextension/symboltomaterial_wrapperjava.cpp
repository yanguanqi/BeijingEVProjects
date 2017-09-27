/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geometry3dextension/symboltomaterial.h"
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
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_SymbolToMaterial_colorToLineMaterial_1IColor_1EVString_1EVString(JNIEnv *__env , jclass __clazz, jlong color_j, jlong symbolName_j, jstring groupName_j)
			{
				const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
				EVString &symbolName = *(EVString*) symbolName_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CMaterialPtr __values1 = EarthView::World::Geometry3D::CSymbolToMaterial::colorToLineMaterial(color, symbolName, groupName);
				EarthView::World::Graphic::CMaterialPtr *returnvalues = new EarthView::World::Graphic::CMaterialPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_SymbolToMaterial_createMaterial_1ISymbol_1EVString(JNIEnv *__env , jclass __clazz, jlong symbol_j, jstring groupName_j)
			{
				EarthView::World::Spatial::Display::ISymbol *symbol = (EarthView::World::Spatial::Display::ISymbol*) symbol_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CMaterialPtr __values1 = EarthView::World::Geometry3D::CSymbolToMaterial::createMaterial(symbol, groupName);
				EarthView::World::Graphic::CMaterialPtr *returnvalues = new EarthView::World::Graphic::CMaterialPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_SymbolToMaterial_createMaterial_1ISymbol_1EVString_1CMaterialPtr_1CMaterialPtr_1CMaterialPtr(JNIEnv *__env , jclass __clazz, jlong symbol_j, jstring groupName_j, jlong topMaterial_j, jlong exteriorSideMaterial_j, jlong interiorSideMaterial_j)
			{
				EarthView::World::Spatial::Display::ISymbol *symbol = (EarthView::World::Spatial::Display::ISymbol*) symbol_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CMaterialPtr &topMaterial = *(EarthView::World::Graphic::CMaterialPtr*) topMaterial_j;
				EarthView::World::Graphic::CMaterialPtr &exteriorSideMaterial = *(EarthView::World::Graphic::CMaterialPtr*) exteriorSideMaterial_j;
				EarthView::World::Graphic::CMaterialPtr &interiorSideMaterial = *(EarthView::World::Graphic::CMaterialPtr*) interiorSideMaterial_j;
				EarthView::World::Geometry3D::CSymbolToMaterial::createMaterial(symbol, groupName, topMaterial, exteriorSideMaterial, interiorSideMaterial);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_SymbolToMaterial_createMaterial_1ISymbol_1EVString_1CMaterialPtr_1CMaterialPtr(JNIEnv *__env , jclass __clazz, jlong symbol_j, jstring groupName_j, jlong topMaterial_j, jlong exteriorSideMaterial_j)
			{
				EarthView::World::Spatial::Display::ISymbol *symbol = (EarthView::World::Spatial::Display::ISymbol*) symbol_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CMaterialPtr &topMaterial = *(EarthView::World::Graphic::CMaterialPtr*) topMaterial_j;
				EarthView::World::Graphic::CMaterialPtr &exteriorSideMaterial = *(EarthView::World::Graphic::CMaterialPtr*) exteriorSideMaterial_j;
				EarthView::World::Geometry3D::CSymbolToMaterial::createMaterial(symbol, groupName, topMaterial, exteriorSideMaterial);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_SymbolToMaterial_createMaterial_1ISymbol_1EVString_1CMaterialPtr(JNIEnv *__env , jclass __clazz, jlong symbol_j, jstring groupName_j, jlong topMaterial_j)
			{
				EarthView::World::Spatial::Display::ISymbol *symbol = (EarthView::World::Spatial::Display::ISymbol*) symbol_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CMaterialPtr &topMaterial = *(EarthView::World::Graphic::CMaterialPtr*) topMaterial_j;
				EarthView::World::Geometry3D::CSymbolToMaterial::createMaterial(symbol, groupName, topMaterial);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_SymbolToMaterial_blankLineMaterial_1EVString(JNIEnv *__env , jclass __clazz, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CMaterialPtr __values1 = EarthView::World::Geometry3D::CSymbolToMaterial::blankLineMaterial(groupName);
				EarthView::World::Graphic::CMaterialPtr *returnvalues = new EarthView::World::Graphic::CMaterialPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
		}
	}
}
