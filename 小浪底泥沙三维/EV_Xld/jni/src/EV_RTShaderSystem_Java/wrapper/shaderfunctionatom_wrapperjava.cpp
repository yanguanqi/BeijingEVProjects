/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderfunctionatom.h"
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
				class JCFunctionAtomProxy : public EarthView::World::Graphic::RTShaderSystem::CFunctionAtom
				{
				 private:
					EarthView::World::Core::ev_string m_getFunctionAtomType_void_callback;
				public:
					JCFunctionAtomProxy(EarthView::World::Core::CNameValuePairList *pList) : CFunctionAtom(pList)
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
					void register_getFunctionAtomType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFunctionAtomType_void_callback = __method;
					}
					virtual EVString getFunctionAtomType()
					{
						if (this->_gRef != NULL && this->m_getFunctionAtomType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getFunctionAtomType_void_callback");
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
							return this->CFunctionAtom::getFunctionAtomType();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCFunctionAtomProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionAtom_getGroupExecutionOrder_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CFunctionAtom *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*) pObjXXXX;
					int __values1 = pObjectX->getGroupExecutionOrder();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionAtom_getInternalExecutionOrder_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CFunctionAtom *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*) pObjXXXX;
					int __values1 = pObjectX->getInternalExecutionOrder();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionAtom_getFunctionAtomType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionAtom *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFunctionAtomProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CFunctionAtom::getFunctionAtomType();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getFunctionAtomType();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionAtom_register_1getFunctionAtomType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFunctionAtomProxy *pObjectX = (JCFunctionAtomProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFunctionAtomType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFunctionAtomType_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionAtom_getFunctionAtomType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionAtom *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CFunctionAtom::getFunctionAtomType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_rtshadersystem_Operand_00024OpSemanticHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						COperand::OPS_IN,
						COperand::OPS_OUT,
						COperand::OPS_INOUT
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_rtshadersystem_Operand_00024OpMaskHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						COperand::OPM_ALL,
						COperand::OPM_X,
						COperand::OPM_Y,
						COperand::OPM_Z,
						COperand::OPM_W
					};
					jintArray array = __env->NewIntArray(5);
					__env->SetIntArrayRegion(array, 0, 5, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Operand_OperatorAssign_1COperand(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Graphic::RTShaderSystem::COperand& pObjectX = *(EarthView::World::Graphic::RTShaderSystem::COperand*) pObjXXXX;
					const EarthView::World::Graphic::RTShaderSystem::COperand &rhs = *(EarthView::World::Graphic::RTShaderSystem::COperand*) rhs_j;
					pObjectX = rhs;
					EarthView::World::Graphic::RTShaderSystem::COperand& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_Operand_getParameter_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::COperand *pObjectX = (EarthView::World::Graphic::RTShaderSystem::COperand*) pObjXXXX;
					const EarthView::World::Graphic::RTShaderSystem::ParameterPtr& __values1 = pObjectX->getParameter();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_Operand_hasFreeFields_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::COperand *pObjectX = (EarthView::World::Graphic::RTShaderSystem::COperand*) pObjXXXX;
					bool __values1 = pObjectX->hasFreeFields();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_Operand_getMask_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::COperand *pObjectX = (EarthView::World::Graphic::RTShaderSystem::COperand*) pObjXXXX;
					int __values1 = pObjectX->getMask();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_Operand_getSemantic_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::COperand *pObjectX = (EarthView::World::Graphic::RTShaderSystem::COperand*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::COperand::OpSemantic __values1 = pObjectX->getSemantic();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_Operand_getIndirectionLevel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::COperand *pObjectX = (EarthView::World::Graphic::RTShaderSystem::COperand*) pObjXXXX;
					ev_uint16 __values1 = pObjectX->getIndirectionLevel();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_Operand_ev_1toString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::COperand *pObjectX = (EarthView::World::Graphic::RTShaderSystem::COperand*) pObjXXXX;
					EVString __values1 = pObjectX->toString();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_Operand_getMaskAsString_1int(JNIEnv *__env , jclass __clazz, jint mask_j)
				{
					int mask = (int) mask_j;
					EVString __values1 = EarthView::World::Graphic::RTShaderSystem::COperand::getMaskAsString(mask);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_Operand_getFloatCount_1int(JNIEnv *__env , jclass __clazz, jint mask_j)
				{
					int mask = (int) mask_j;
					int __values1 = EarthView::World::Graphic::RTShaderSystem::COperand::getFloatCount(mask);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_rtshadersystem_Operand_getGpuConstantType_1int(JNIEnv *__env , jclass __clazz, jint mask_j)
				{
					int mask = (int) mask_j;
					EarthView::World::Graphic::GpuConstantType __values1 = EarthView::World::Graphic::RTShaderSystem::COperand::getGpuConstantType(mask);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				class JCFunctionInvocationProxy : public EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation
				{
				 private:
					EarthView::World::Core::ev_string m_getFunctionAtomType_void_callback;
				public:
					JCFunctionInvocationProxy(EarthView::World::Core::CNameValuePairList *pList) : CFunctionInvocation(pList)
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
					void register_getFunctionAtomType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFunctionAtomType_void_callback = __method;
					}
					virtual EVString getFunctionAtomType()
					{
						if (this->_gRef != NULL && this->m_getFunctionAtomType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getFunctionAtomType_void_callback");
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
							return this->CFunctionInvocation::getFunctionAtomType();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCFunctionInvocationProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_00024OperandVector_push_1back_1COperand(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Graphic::RTShaderSystem::COperand t = *(EarthView::World::Graphic::RTShaderSystem::COperand*) t_j;
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_00024OperandVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_00024OperandVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::COperand& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_00024OperandVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::COperand& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_00024OperandVector_insert_1ev_1uint32_1COperand(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Graphic::RTShaderSystem::COperand &t = *(EarthView::World::Graphic::RTShaderSystem::COperand*) t_j;
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_00024OperandVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_00024OperandVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_00024OperandVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector& pObjectX = *(EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Graphic::RTShaderSystem::COperand& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_00024OperandVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::COperand& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_00024OperandVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_00024OperandVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_00024OperandVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_00024OperandVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_getFunctionAtomType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCFunctionInvocationProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::getFunctionAtomType();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getFunctionAtomType();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_register_1getFunctionAtomType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCFunctionInvocationProxy *pObjectX = (JCFunctionInvocationProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFunctionAtomType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFunctionAtomType_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_getFunctionAtomType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::getFunctionAtomType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_getOperandList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector& __values1 = pObjectX->getOperandList();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_pushOperand_1ParameterPtr_1OpSemantic_1int_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong parameter_j, jint opSemantic_j, jint opMask_j, jint indirectionLevel_j)
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr parameter = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) parameter_j;
					EarthView::World::Graphic::RTShaderSystem::COperand::OpSemantic opSemantic = (EarthView::World::Graphic::RTShaderSystem::COperand::OpSemantic) opSemantic_j;
					int opMask = (int) opMask_j;
					int indirectionLevel = (int) indirectionLevel_j;
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjXXXX;
					pObjectX->pushOperand(parameter, opSemantic, opMask, indirectionLevel);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_pushOperand_1ParameterPtr_1OpSemantic_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong parameter_j, jint opSemantic_j, jint opMask_j)
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr parameter = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) parameter_j;
					EarthView::World::Graphic::RTShaderSystem::COperand::OpSemantic opSemantic = (EarthView::World::Graphic::RTShaderSystem::COperand::OpSemantic) opSemantic_j;
					int opMask = (int) opMask_j;
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjXXXX;
					pObjectX->pushOperand(parameter, opSemantic, opMask);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_pushOperand_1ParameterPtr_1OpSemantic(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong parameter_j, jint opSemantic_j)
				{
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr parameter = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*) parameter_j;
					EarthView::World::Graphic::RTShaderSystem::COperand::OpSemantic opSemantic = (EarthView::World::Graphic::RTShaderSystem::COperand::OpSemantic) opSemantic_j;
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjXXXX;
					pObjectX->pushOperand(parameter, opSemantic);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_getFunctionName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjXXXX;
					const EVString& __values1 = pObjectX->getFunctionName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_getReturnType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation *pObjectX = (EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjXXXX;
					const EVString& __values1 = pObjectX->getReturnType();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_OperatorEquals_1CFunctionInvocation(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation& pObjectX = *(EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjXXXX;
					const EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation &rhs = *(EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) rhs_j;
					bool __values1 = (pObjectX == rhs);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_OperatorNotEquals_1CFunctionInvocation(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation& pObjectX = *(EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjXXXX;
					const EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation &rhs = *(EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) rhs_j;
					bool __values1 = (pObjectX != rhs);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_OperatorLessThan_1CFunctionInvocation(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation& pObjectX = *(EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjXXXX;
					const EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation &rhs = *(EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) rhs_j;
					bool __values1 = (pObjectX < rhs);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_OperatorGreaterThan_1CFunctionInvocation(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation& pObjectX = *(EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) pObjXXXX;
					const EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation &rhs = *(EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation*) rhs_j;
					bool __values1 = (pObjectX > rhs);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_get_1Type_1void(JNIEnv *__env, jclass __clazz)
				{
					EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::Type;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionInvocation_set_1Type_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
				{
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::Type = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionAtomInstanceList_push_1back_1CFunctionAtom(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Graphic::RTShaderSystem::CFunctionAtom *t = (EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*) t_j;
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionAtomInstanceList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionAtomInstanceList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionAtomInstanceList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionAtomInstanceList_insert_1ev_1uint32_1CFunctionAtom(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Graphic::RTShaderSystem::CFunctionAtom *&t = *(EarthView::World::Graphic::RTShaderSystem::CFunctionAtom**) t_j;
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionAtomInstanceList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionAtomInstanceList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionAtomInstanceList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList& pObjectX = *(EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionAtomInstanceList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionAtomInstanceList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionAtomInstanceList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionAtomInstanceList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_rtshadersystem_FunctionAtomInstanceList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList *pObjectX = (EarthView::World::Graphic::RTShaderSystem::FunctionAtomInstanceList*) pObjXXXX;
					pObjectX->clear();
				}
			}
		}
	}
}
