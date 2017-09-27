/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/colourvalue.h"
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
			namespace Math
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ColourValue_get_1ZERO_1void(JNIEnv *__env, jclass __clazz)
			{
				const EarthView::World::Graphic::CColourValue& __values1 = EarthView::World::Graphic::CColourValue::ZERO;
				EarthView::World::Graphic::CColourValue* returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ColourValue_get_1Black_1void(JNIEnv *__env, jclass __clazz)
			{
				const EarthView::World::Graphic::CColourValue& __values1 = EarthView::World::Graphic::CColourValue::Black;
				EarthView::World::Graphic::CColourValue* returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ColourValue_get_1White_1void(JNIEnv *__env, jclass __clazz)
			{
				const EarthView::World::Graphic::CColourValue& __values1 = EarthView::World::Graphic::CColourValue::White;
				EarthView::World::Graphic::CColourValue* returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ColourValue_get_1Red_1void(JNIEnv *__env, jclass __clazz)
			{
				const EarthView::World::Graphic::CColourValue& __values1 = EarthView::World::Graphic::CColourValue::Red;
				EarthView::World::Graphic::CColourValue* returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ColourValue_get_1Green_1void(JNIEnv *__env, jclass __clazz)
			{
				const EarthView::World::Graphic::CColourValue& __values1 = EarthView::World::Graphic::CColourValue::Green;
				EarthView::World::Graphic::CColourValue* returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ColourValue_get_1Blue_1void(JNIEnv *__env, jclass __clazz)
			{
				const EarthView::World::Graphic::CColourValue& __values1 = EarthView::World::Graphic::CColourValue::Blue;
				EarthView::World::Graphic::CColourValue* returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ColourValue_get_1Selection_1void(JNIEnv *__env, jclass __clazz)
			{
				const EarthView::World::Graphic::CColourValue& __values1 = EarthView::World::Graphic::CColourValue::Selection;
				EarthView::World::Graphic::CColourValue* returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ColourValue_OperatorEquals_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Graphic::CColourValue& pObjectX = *(EarthView::World::Graphic::CColourValue*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue &rhs = *(EarthView::World::Graphic::CColourValue*) rhs_j;
				ev_bool __values1 = (pObjectX == rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ColourValue_OperatorNotEquals_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Graphic::CColourValue& pObjectX = *(EarthView::World::Graphic::CColourValue*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue &rhs = *(EarthView::World::Graphic::CColourValue*) rhs_j;
				ev_bool __values1 = (pObjectX != rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_ColourValue_get_1g_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CColourValue *pObjectX = (EarthView::World::Graphic::CColourValue*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->g);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ColourValue_set_1g_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Graphic::CColourValue *pObjectX = (EarthView::World::Graphic::CColourValue*)pObjXXXX;
				pObjectX->g = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_ColourValue_get_1b_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CColourValue *pObjectX = (EarthView::World::Graphic::CColourValue*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->b);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ColourValue_set_1b_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Graphic::CColourValue *pObjectX = (EarthView::World::Graphic::CColourValue*)pObjXXXX;
				pObjectX->b = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_ColourValue_get_1a_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CColourValue *pObjectX = (EarthView::World::Graphic::CColourValue*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->a);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ColourValue_set_1a_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Graphic::CColourValue *pObjectX = (EarthView::World::Graphic::CColourValue*)pObjXXXX;
				pObjectX->a = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_ColourValue_get_1r_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CColourValue *pObjectX = (EarthView::World::Graphic::CColourValue*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->r);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ColourValue_set_1r_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Graphic::CColourValue *pObjectX = (EarthView::World::Graphic::CColourValue*)pObjXXXX;
				pObjectX->r = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ColourValue_getAsRGBA_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CColourValue *pObjectX = (EarthView::World::Graphic::CColourValue*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getAsRGBA();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ColourValue_getAsARGB_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CColourValue *pObjectX = (EarthView::World::Graphic::CColourValue*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getAsARGB();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ColourValue_getAsBGRA_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CColourValue *pObjectX = (EarthView::World::Graphic::CColourValue*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getAsBGRA();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ColourValue_getAsABGR_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CColourValue *pObjectX = (EarthView::World::Graphic::CColourValue*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getAsABGR();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ColourValue_setAsRGBA_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const ev_uint32 val = (ev_uint32) val_j;
				EarthView::World::Graphic::CColourValue *pObjectX = (EarthView::World::Graphic::CColourValue*) pObjXXXX;
				pObjectX->setAsRGBA(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ColourValue_setAsARGB_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const ev_uint32 val = (ev_uint32) val_j;
				EarthView::World::Graphic::CColourValue *pObjectX = (EarthView::World::Graphic::CColourValue*) pObjXXXX;
				pObjectX->setAsARGB(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ColourValue_setAsBGRA_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const ev_uint32 val = (ev_uint32) val_j;
				EarthView::World::Graphic::CColourValue *pObjectX = (EarthView::World::Graphic::CColourValue*) pObjXXXX;
				pObjectX->setAsBGRA(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ColourValue_setAsABGR_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const ev_uint32 val = (ev_uint32) val_j;
				EarthView::World::Graphic::CColourValue *pObjectX = (EarthView::World::Graphic::CColourValue*) pObjXXXX;
				pObjectX->setAsABGR(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ColourValue_saturate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CColourValue *pObjectX = (EarthView::World::Graphic::CColourValue*) pObjXXXX;
				pObjectX->saturate();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ColourValue_saturateCopy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CColourValue *pObjectX = (EarthView::World::Graphic::CColourValue*) pObjXXXX;
				EarthView::World::Graphic::CColourValue __values1 = pObjectX->saturateCopy();
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_ColourValue_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong i_j )
			{
				EarthView::World::Graphic::CColourValue& pObjectX = *(EarthView::World::Graphic::CColourValue*) pObjXXXX;
				const ev_size_t i = (ev_size_t) i_j;
				ev_real32 __values1 = pObjectX[i];
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ColourValue_ptr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CColourValue *pObjectX = (EarthView::World::Graphic::CColourValue*) pObjXXXX;
				ev_real32* __values1 = pObjectX->ptr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ColourValue_OperatorPlus_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkVector_j )
			{
				EarthView::World::Graphic::CColourValue& pObjectX = *(EarthView::World::Graphic::CColourValue*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue &rkVector = *(EarthView::World::Graphic::CColourValue*) rkVector_j;
				EarthView::World::Graphic::CColourValue __values1 = pObjectX + (rkVector);
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ColourValue_OperatorMinus_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkVector_j )
			{
				EarthView::World::Graphic::CColourValue& pObjectX = *(EarthView::World::Graphic::CColourValue*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue &rkVector = *(EarthView::World::Graphic::CColourValue*) rkVector_j;
				EarthView::World::Graphic::CColourValue __values1 = pObjectX - (rkVector);
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ColourValue_OperatorMultiply_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat fScalar_j )
			{
				EarthView::World::Graphic::CColourValue& pObjectX = *(EarthView::World::Graphic::CColourValue*) pObjXXXX;
				const ev_real32 fScalar = (ev_real32) fScalar_j;
				EarthView::World::Graphic::CColourValue __values1 = pObjectX * (fScalar);
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ColourValue_OperatorMultiply_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Graphic::CColourValue& pObjectX = *(EarthView::World::Graphic::CColourValue*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue &rhs = *(EarthView::World::Graphic::CColourValue*) rhs_j;
				EarthView::World::Graphic::CColourValue __values1 = pObjectX * (rhs);
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ColourValue_OperatorDivide_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Graphic::CColourValue& pObjectX = *(EarthView::World::Graphic::CColourValue*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue &rhs = *(EarthView::World::Graphic::CColourValue*) rhs_j;
				EarthView::World::Graphic::CColourValue __values1 = pObjectX / (rhs);
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ColourValue_OperatorDivide_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat fScalar_j )
			{
				EarthView::World::Graphic::CColourValue& pObjectX = *(EarthView::World::Graphic::CColourValue*) pObjXXXX;
				const ev_real32 fScalar = (ev_real32) fScalar_j;
				EarthView::World::Graphic::CColourValue __values1 = pObjectX / (fScalar);
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ColourValue_setHSB_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble hue_j, jdouble saturation_j, jdouble brightness_j)
			{
				Real hue = (Real) hue_j;
				Real saturation = (Real) saturation_j;
				Real brightness = (Real) brightness_j;
				EarthView::World::Graphic::CColourValue *pObjectX = (EarthView::World::Graphic::CColourValue*) pObjXXXX;
				pObjectX->setHSB(hue, saturation, brightness);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ColourValue_getHSB_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong hue_j, jlong saturation_j, jlong brightness_j)
			{
				Real *hue = (Real*) hue_j;
				Real *saturation = (Real*) saturation_j;
				Real *brightness = (Real*) brightness_j;
				const 				EarthView::World::Graphic::CColourValue *pObjectX = (EarthView::World::Graphic::CColourValue*) pObjXXXX;
				pObjectX->getHSB(hue, saturation, brightness);
			}
		}
	}
}
