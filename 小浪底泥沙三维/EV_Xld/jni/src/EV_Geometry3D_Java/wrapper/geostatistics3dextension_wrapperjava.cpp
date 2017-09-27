/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geostatistics3dextension.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			class JCGeoStatistics3DExtensionProxy : public EarthView::World::Geometry3D::CGeoStatistics3DExtension
			{
			 private:
				EarthView::World::Core::ev_string m_setLabelVisibleDistance_ev_real64_callback;
				EarthView::World::Core::ev_string m_setInvisibleIndices_IntVector_callback;
			public:
				JCGeoStatistics3DExtensionProxy(EarthView::World::Core::CNameValuePairList *pList) : CGeoStatistics3DExtension(pList)
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
				void register_setLabelVisibleDistance_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setLabelVisibleDistance_ev_real64_callback = __method;
				}
				void register_setInvisibleIndices_IntVector_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setInvisibleIndices_IntVector_callback = __method;
				}
				virtual void setLabelVisibleDistance(ev_real64 dis)
				{
					if (this->_gRef != NULL && this->m_setLabelVisibleDistance_ev_real64_callback != "" && this->isCustomExtend())
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
						jdouble dis_j = (jdouble) dis;
						jmethodID __method = __gr->getMethod("setLabelVisibleDistance_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , dis_j);
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
						return this->CGeoStatistics3DExtension::setLabelVisibleDistance(dis);
					}
				}
				virtual ev_bool setInvisibleIndices(EarthView::World::Core::IntVector indices)
				{
					if (this->_gRef != NULL && this->m_setInvisibleIndices_IntVector_callback != "" && this->isCustomExtend())
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
						jlong indices_j = (jlong) &indices;
						jmethodID __method = __gr->getMethod("setInvisibleIndices_IntVector_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , indices_j);
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
						return this->CGeoStatistics3DExtension::setInvisibleIndices(indices);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCGeoStatistics3DExtensionProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_GeoStatistics3DExtension_00024TagSymbolTransform_get_1mpSymbol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CGeoStatistics3DExtension::TagSymbolTransform *pObjectX = (EarthView::World::Geometry3D::CGeoStatistics3DExtension::TagSymbolTransform*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->mpSymbol);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoStatistics3DExtension_00024TagSymbolTransform_set_1mpSymbol_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Geometry3D::CGeoStatistics3DExtension::TagSymbolTransform *pObjectX = (EarthView::World::Geometry3D::CGeoStatistics3DExtension::TagSymbolTransform*)pObjXXXX;
				pObjectX->mpSymbol = (EarthView::World::Spatial::Display::ISymbol*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_GeoStatistics3DExtension_00024TagSymbolTransform_get_1mMatrix4_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CGeoStatistics3DExtension::TagSymbolTransform *pObjectX = (EarthView::World::Geometry3D::CGeoStatistics3DExtension::TagSymbolTransform*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mMatrix4);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoStatistics3DExtension_00024TagSymbolTransform_set_1mMatrix4_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Geometry3D::CGeoStatistics3DExtension::TagSymbolTransform *pObjectX = (EarthView::World::Geometry3D::CGeoStatistics3DExtension::TagSymbolTransform*)pObjXXXX;
				pObjectX->mMatrix4 = *(EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoStatistics3DExtension_addSymbolTransform_1ISymbol_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j, jlong matrix_j)
			{
				const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
				const EarthView::World::Spatial::Math::CMatrix4 &matrix = *(EarthView::World::Spatial::Math::CMatrix4*) matrix_j;
				EarthView::World::Geometry3D::CGeoStatistics3DExtension *pObjectX = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjXXXX;
				pObjectX->addSymbolTransform(symbol, matrix);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoStatistics3DExtension_setSymbolTransform_1ev_1uint32_1ISymbol_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong symbol_j, jlong matrix_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
				const EarthView::World::Spatial::Math::CMatrix4 *matrix = (const EarthView::World::Spatial::Math::CMatrix4*) matrix_j;
				EarthView::World::Geometry3D::CGeoStatistics3DExtension *pObjectX = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjXXXX;
				pObjectX->setSymbolTransform(index, symbol, matrix);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_GeoStatistics3DExtension_getSymbolTransformCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CGeoStatistics3DExtension *pObjectX = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getSymbolTransformCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_GeoStatistics3DExtension_getTransformMatrix_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Geometry3D::CGeoStatistics3DExtension *pObjectX = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjXXXX;
				EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->getTransformMatrix(index);
				EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_GeoStatistics3DExtension_getSymbol_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Geometry3D::CGeoStatistics3DExtension *pObjectX = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjXXXX;
				EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getSymbol(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoStatistics3DExtension_setPosition_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong position_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &position = *(EarthView::World::Spatial::Math::CVector3*) position_j;
				EarthView::World::Geometry3D::CGeoStatistics3DExtension *pObjectX = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjXXXX;
				pObjectX->setPosition(position);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoStatistics3DExtension_build_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CGeoStatistics3DExtension *pObjectX = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjXXXX;
				pObjectX->build();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoStatistics3DExtension_render_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CGeoStatistics3DExtension *pObjectX = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjXXXX;
				pObjectX->render();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_GeoStatistics3DExtension_updateLabel_1ev_1bool_1ev_1bool_1ev_1bool_1ev_1bool_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean resetTextStyle_j, jboolean derenderTxt_j, jboolean reCreate_j, jboolean attachLabel_j, jlong psymbol_j)
			{
				ev_bool resetTextStyle = (ev_bool) resetTextStyle_j;
				ev_bool derenderTxt = (ev_bool) derenderTxt_j;
				ev_bool reCreate = (ev_bool) reCreate_j;
				ev_bool attachLabel = (ev_bool) attachLabel_j;
				EarthView::World::Spatial::Display::ISymbol *psymbol = (EarthView::World::Spatial::Display::ISymbol*) psymbol_j;
				EarthView::World::Geometry3D::CGeoStatistics3DExtension *pObjectX = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjXXXX;
				ev_bool __values1 = pObjectX->updateLabel(resetTextStyle, derenderTxt, reCreate, attachLabel, psymbol);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoStatistics3DExtension_derender_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CGeoStatistics3DExtension *pObjectX = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjXXXX;
				pObjectX->derender();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoStatistics3DExtension_layoutLabels_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CGeoStatistics3DExtension *pObjectX = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjXXXX;
				pObjectX->layoutLabels();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoStatistics3DExtension_setLabelVisibleDistance_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dis_j)
			{
				ev_real64 dis = (ev_real64) dis_j;
				EarthView::World::Geometry3D::CGeoStatistics3DExtension *pObjectX = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGeoStatistics3DExtensionProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CGeoStatistics3DExtension::setLabelVisibleDistance(dis);
				}
				else
				{
					pObjectX->setLabelVisibleDistance(dis);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoStatistics3DExtension_register_1setLabelVisibleDistance_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGeoStatistics3DExtensionProxy *pObjectX = (JCGeoStatistics3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setLabelVisibleDistance_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setLabelVisibleDistance_ev_real64_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoStatistics3DExtension_setLabelVisibleDistance_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dis_j)
			{
				ev_real64 dis = (ev_real64) dis_j;
				EarthView::World::Geometry3D::CGeoStatistics3DExtension *pObjectX = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CGeoStatistics3DExtension::setLabelVisibleDistance(dis);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_GeoStatistics3DExtension_setInvisibleIndices_1IntVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong indices_j)
			{
				EarthView::World::Core::IntVector indices = *(EarthView::World::Core::IntVector*) indices_j;
				EarthView::World::Geometry3D::CGeoStatistics3DExtension *pObjectX = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCGeoStatistics3DExtensionProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CGeoStatistics3DExtension::setInvisibleIndices(indices);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->setInvisibleIndices(indices);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeoStatistics3DExtension_register_1setInvisibleIndices_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCGeoStatistics3DExtensionProxy *pObjectX = (JCGeoStatistics3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setInvisibleIndices_IntVector_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setInvisibleIndices_IntVector_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_GeoStatistics3DExtension_setInvisibleIndices_1IntVector_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong indices_j)
			{
				EarthView::World::Core::IntVector indices = *(EarthView::World::Core::IntVector*) indices_j;
				EarthView::World::Geometry3D::CGeoStatistics3DExtension *pObjectX = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CGeoStatistics3DExtension::setInvisibleIndices(indices);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
		}
	}
}
