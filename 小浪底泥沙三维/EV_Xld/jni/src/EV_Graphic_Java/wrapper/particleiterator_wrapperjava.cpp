/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/particleiterator.h"
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ParticleIterator_end_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleIterator *pObjectX = (EarthView::World::Graphic::CParticleIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->end();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleIterator_getNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleIterator *pObjectX = (EarthView::World::Graphic::CParticleIterator*) pObjXXXX;
				EarthView::World::Graphic::CParticle* __values1 = pObjectX->getNext();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
