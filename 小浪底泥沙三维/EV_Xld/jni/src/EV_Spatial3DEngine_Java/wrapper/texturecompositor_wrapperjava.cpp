/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/texturecompositor.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TextureCompositor_thumbImage_1EarthView_1World_1Core_1ev_1wstring_1EarthView_1World_1Core_1ev_1wstring(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring path_j, jstring imagefilename_j)
			{
				const ev_wchar* path_wch = (const ev_wchar*)__env->GetStringChars(path_j,JNI_FALSE);
				const EarthView::World::Core::ev_wstring path = path_wch;
				__env->ReleaseStringChars(path_j,(jchar*)path_wch);
				const ev_wchar* imagefilename_wch = (const ev_wchar*)__env->GetStringChars(imagefilename_j,JNI_FALSE);
				const EarthView::World::Core::ev_wstring imagefilename = imagefilename_wch;
				__env->ReleaseStringChars(imagefilename_j,(jchar*)imagefilename_wch);
				EarthView::World::Spatial3D::CTextureCompositor *pObjectX = (EarthView::World::Spatial3D::CTextureCompositor*) pObjXXXX;
				pObjectX->thumbImage(path, imagefilename);
			}
		}
	}
}
