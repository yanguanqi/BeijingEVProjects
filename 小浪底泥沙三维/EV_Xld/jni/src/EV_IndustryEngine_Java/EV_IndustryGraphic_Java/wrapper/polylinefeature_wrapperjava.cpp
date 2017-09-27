/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/polylinefeature.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_SymbolTool_loadImage_1EVString_1MemoryDataStreamPtr(JNIEnv *__env , jclass __clazz, jstring imagePath_j, jlong dataStream_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* imagePath_ch = (const ev_char*)__env->GetStringUTFChars(imagePath_j,JNI_FALSE);
				const EVString imagePath = imagePath_ch;
				__env->ReleaseStringUTFChars(imagePath_j, (const char *)imagePath_ch);
				#else
				const ev_wchar* imagePath_ch = (const ev_wchar*)__env->GetStringChars(imagePath_j,JNI_FALSE);
				const EVString imagePath = imagePath_ch;
				__env->ReleaseStringChars(imagePath_j, (const jchar *)imagePath_ch);
				#endif
				EarthView::World::Core::MemoryDataStreamPtr &dataStream = *(EarthView::World::Core::MemoryDataStreamPtr*) dataStream_j;
				EarthView::IndustryEngine::IndustryGraphic::CSymbolTool::loadImage(imagePath, dataStream);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_SymbolTool_isEqualSymbol_1ISymbol_1ISymbol(JNIEnv *__env , jclass __clazz, jlong pSymbol1_j, jlong pSymbol2_j)
			{
				EarthView::World::Spatial::Display::ISymbol *pSymbol1 = (EarthView::World::Spatial::Display::ISymbol*) pSymbol1_j;
				EarthView::World::Spatial::Display::ISymbol *pSymbol2 = (EarthView::World::Spatial::Display::ISymbol*) pSymbol2_j;
				ev_bool __values1 = EarthView::IndustryEngine::IndustryGraphic::CSymbolTool::isEqualSymbol(pSymbol1, pSymbol2);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			class JCPolylineFeatureProxy : public EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature
			{
			 private:
				EarthView::World::Core::ev_string m_addPoint_CCoordinate_callback;
				EarthView::World::Core::ev_string m_setUniqueID_ev_int32_callback;
				EarthView::World::Core::ev_string m_getUniqueID_void_callback;
				EarthView::World::Core::ev_string m_isShowAllPoints_void_callback;
				EarthView::World::Core::ev_string m_isValidIndex_ev_int32_callback;
				EarthView::World::Core::ev_string m_setNeedUpdate_ev_bool_callback;
				EarthView::World::Core::ev_string m_getNeedUpdate_void_callback;
				EarthView::World::Core::ev_string m_setDisplayPointNum_ev_int32_callback;
				EarthView::World::Core::ev_string m_setDisplayMode_EVDisplayMode_callback;
				EarthView::World::Core::ev_string m_getDisplayMode_void_callback;
				EarthView::World::Core::ev_string m_getDisplayPointNum_void_callback;
				EarthView::World::Core::ev_string m_setPolylineFeatureSymbol_ISymbol_callback;
				EarthView::World::Core::ev_string m_getPolylineFeatureSymbol_void_callback;
				EarthView::World::Core::ev_string m_setName_EVString_callback;
				EarthView::World::Core::ev_string m_getName_void_callback;
				EarthView::World::Core::ev_string m_setPolylineFeaturePath_CLineString_callback;
				EarthView::World::Core::ev_string m_getPolylineFeaturePath_void_callback;
				EarthView::World::Core::ev_string m_removeAllPoints_void_callback;
				EarthView::World::Core::ev_string m_getISpatialReference_void_callback;
				EarthView::World::Core::ev_string m_setISpatialReference_ISpatialReference_callback;
				EarthView::World::Core::ev_string m_setVisible_ev_bool_callback;
				EarthView::World::Core::ev_string m_getVisible_void_callback;
				EarthView::World::Core::ev_string m_setDescription_EVString_callback;
				EarthView::World::Core::ev_string m_getDescription_void_callback;
				EarthView::World::Core::ev_string m_refresh_void_callback;
				EarthView::World::Core::ev_string m_setHighLineColorInfo_CRgbColor_CRgbColor_callback;
				EarthView::World::Core::ev_string m_setHighLineDistance_ev_real64_callback;
				EarthView::World::Core::ev_string m_setUseHighLineDistance_ev_bool_callback;
				EarthView::World::Core::ev_string m_getUseHighLineDistance_void_callback;
				EarthView::World::Core::ev_string m_getHighLineDistance_void_callback;
				EarthView::World::Core::ev_string m_setIsHighLine_ev_bool_callback;
				EarthView::World::Core::ev_string m_getIsHighLine_void_callback;
				EarthView::World::Core::ev_string m_setNeedClearUselessData_ev_bool_callback;
				EarthView::World::Core::ev_string m_getNeedClearUselessData_void_callback;
				EarthView::World::Core::ev_string m_clearUselessData_void_callback;
				EarthView::World::Core::ev_string m_setMaxUselessDataCount_ev_int32_callback;
				EarthView::World::Core::ev_string m_getMaxUselessDataCount_void_callback;
				EarthView::World::Core::ev_string m_getUseWallGradualColor_void_callback;
				EarthView::World::Core::ev_string m_setUseWallGradualColor_ev_bool_callback;
				EarthView::World::Core::ev_string m_getWallGradualColor_void_callback;
				EarthView::World::Core::ev_string m_setWallGradualColor_CRgbColor_callback;
			public:
				JCPolylineFeatureProxy(EarthView::World::Core::CNameValuePairList *pList) : CPolylineFeature(pList)
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
				void register_addPoint_CCoordinate_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addPoint_CCoordinate_callback = __method;
				}
				void register_setUniqueID_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setUniqueID_ev_int32_callback = __method;
				}
				void register_getUniqueID_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getUniqueID_void_callback = __method;
				}
				void register_isShowAllPoints_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isShowAllPoints_void_callback = __method;
				}
				void register_isValidIndex_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isValidIndex_ev_int32_callback = __method;
				}
				void register_setNeedUpdate_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setNeedUpdate_ev_bool_callback = __method;
				}
				void register_getNeedUpdate_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNeedUpdate_void_callback = __method;
				}
				void register_setDisplayPointNum_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDisplayPointNum_ev_int32_callback = __method;
				}
				void register_setDisplayMode_EVDisplayMode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDisplayMode_EVDisplayMode_callback = __method;
				}
				void register_getDisplayMode_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDisplayMode_void_callback = __method;
				}
				void register_getDisplayPointNum_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDisplayPointNum_void_callback = __method;
				}
				void register_setPolylineFeatureSymbol_ISymbol_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPolylineFeatureSymbol_ISymbol_callback = __method;
				}
				void register_getPolylineFeatureSymbol_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPolylineFeatureSymbol_void_callback = __method;
				}
				void register_setName_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setName_EVString_callback = __method;
				}
				void register_getName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getName_void_callback = __method;
				}
				void register_setPolylineFeaturePath_CLineString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPolylineFeaturePath_CLineString_callback = __method;
				}
				void register_getPolylineFeaturePath_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPolylineFeaturePath_void_callback = __method;
				}
				void register_removeAllPoints_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAllPoints_void_callback = __method;
				}
				void register_getISpatialReference_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getISpatialReference_void_callback = __method;
				}
				void register_setISpatialReference_ISpatialReference_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setISpatialReference_ISpatialReference_callback = __method;
				}
				void register_setVisible_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setVisible_ev_bool_callback = __method;
				}
				void register_getVisible_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getVisible_void_callback = __method;
				}
				void register_setDescription_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDescription_EVString_callback = __method;
				}
				void register_getDescription_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDescription_void_callback = __method;
				}
				void register_refresh_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_refresh_void_callback = __method;
				}
				void register_setHighLineColorInfo_CRgbColor_CRgbColor_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setHighLineColorInfo_CRgbColor_CRgbColor_callback = __method;
				}
				void register_setHighLineDistance_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setHighLineDistance_ev_real64_callback = __method;
				}
				void register_setUseHighLineDistance_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setUseHighLineDistance_ev_bool_callback = __method;
				}
				void register_getUseHighLineDistance_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getUseHighLineDistance_void_callback = __method;
				}
				void register_getHighLineDistance_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getHighLineDistance_void_callback = __method;
				}
				void register_setIsHighLine_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setIsHighLine_ev_bool_callback = __method;
				}
				void register_getIsHighLine_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getIsHighLine_void_callback = __method;
				}
				void register_setNeedClearUselessData_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setNeedClearUselessData_ev_bool_callback = __method;
				}
				void register_getNeedClearUselessData_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNeedClearUselessData_void_callback = __method;
				}
				void register_clearUselessData_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_clearUselessData_void_callback = __method;
				}
				void register_setMaxUselessDataCount_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setMaxUselessDataCount_ev_int32_callback = __method;
				}
				void register_getMaxUselessDataCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMaxUselessDataCount_void_callback = __method;
				}
				void register_getUseWallGradualColor_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getUseWallGradualColor_void_callback = __method;
				}
				void register_setUseWallGradualColor_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setUseWallGradualColor_ev_bool_callback = __method;
				}
				void register_getWallGradualColor_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWallGradualColor_void_callback = __method;
				}
				void register_setWallGradualColor_CRgbColor_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setWallGradualColor_CRgbColor_callback = __method;
				}
				virtual void addPoint(const EarthView::World::Spatial::Geometry::CCoordinate& point)
				{
					if (this->_gRef != NULL && this->m_addPoint_CCoordinate_callback != "" && this->isCustomExtend())
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
						jlong point_j = (jlong) &point;
						jmethodID __method = __gr->getMethod("addPoint_CCoordinate_callback");
						__env->CallVoidMethod(__obj, __method , point_j);
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
						return this->CPolylineFeature::addPoint(point);
					}
				}
				virtual void setUniqueID(const ev_int32& uniqueID)
				{
					if (this->_gRef != NULL && this->m_setUniqueID_ev_int32_callback != "" && this->isCustomExtend())
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
						jint uniqueID_j = (jint) uniqueID;
						jmethodID __method = __gr->getMethod("setUniqueID_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , uniqueID_j);
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
						return this->CPolylineFeature::setUniqueID(uniqueID);
					}
				}
				virtual ev_int32 getUniqueID() const
				{
					if (this->_gRef != NULL && this->m_getUniqueID_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getUniqueID_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_int32 __values1 = (ev_int32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPolylineFeature::getUniqueID();
					}
				}
				virtual ev_bool isShowAllPoints() const
				{
					if (this->_gRef != NULL && this->m_isShowAllPoints_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isShowAllPoints_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
						return this->CPolylineFeature::isShowAllPoints();
					}
				}
				virtual ev_bool isValidIndex(const ev_int32& index)
				{
					if (this->_gRef != NULL && this->m_isValidIndex_ev_int32_callback != "" && this->isCustomExtend())
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
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("isValidIndex_ev_int32_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , index_j);
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
						return this->CPolylineFeature::isValidIndex(index);
					}
				}
				virtual void setNeedUpdate(const ev_bool& needUpdate)
				{
					if (this->_gRef != NULL && this->m_setNeedUpdate_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean needUpdate_j = (jboolean) needUpdate;
						jmethodID __method = __gr->getMethod("setNeedUpdate_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , needUpdate_j);
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
						return this->CPolylineFeature::setNeedUpdate(needUpdate);
					}
				}
				virtual ev_bool getNeedUpdate() const
				{
					if (this->_gRef != NULL && this->m_getNeedUpdate_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNeedUpdate_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
						return this->CPolylineFeature::getNeedUpdate();
					}
				}
				virtual void setDisplayPointNum(const ev_int32& displayNumber)
				{
					if (this->_gRef != NULL && this->m_setDisplayPointNum_ev_int32_callback != "" && this->isCustomExtend())
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
						jint displayNumber_j = (jint) displayNumber;
						jmethodID __method = __gr->getMethod("setDisplayPointNum_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , displayNumber_j);
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
						return this->CPolylineFeature::setDisplayPointNum(displayNumber);
					}
				}
				virtual void setDisplayMode(const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode& displayMode)
				{
					if (this->_gRef != NULL && this->m_setDisplayMode_EVDisplayMode_callback != "" && this->isCustomExtend())
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
						jint displayMode_j = (jint) displayMode;
						jmethodID __method = __gr->getMethod("setDisplayMode_EVDisplayMode_callback");
						__env->CallVoidMethod(__obj, __method , displayMode_j);
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
						return this->CPolylineFeature::setDisplayMode(displayMode);
					}
				}
				virtual EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode getDisplayMode() const
				{
					if (this->_gRef != NULL && this->m_getDisplayMode_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDisplayMode_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode __values1 = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPolylineFeature::getDisplayMode();
					}
				}
				virtual ev_int32 getDisplayPointNum() const
				{
					if (this->_gRef != NULL && this->m_getDisplayPointNum_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDisplayPointNum_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_int32 __values1 = (ev_int32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPolylineFeature::getDisplayPointNum();
					}
				}
				virtual void setPolylineFeatureSymbol(EarthView::World::Spatial::Display::ISymbol* polylineFeatureSymbol)
				{
					if (this->_gRef != NULL && this->m_setPolylineFeatureSymbol_ISymbol_callback != "" && this->isCustomExtend())
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
						jlong polylineFeatureSymbol_j = (jlong) polylineFeatureSymbol;
						jmethodID __method = __gr->getMethod("setPolylineFeatureSymbol_ISymbol_callback");
						__env->CallVoidMethod(__obj, __method , polylineFeatureSymbol_j);
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
						return this->CPolylineFeature::setPolylineFeatureSymbol(polylineFeatureSymbol);
					}
				}
				virtual EarthView::World::Spatial::Display::ISymbol* getPolylineFeatureSymbol() const
				{
					if (this->_gRef != NULL && this->m_getPolylineFeatureSymbol_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getPolylineFeatureSymbol_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Display::ISymbol *__values1 = (EarthView::World::Spatial::Display::ISymbol*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPolylineFeature::getPolylineFeatureSymbol();
					}
				}
				virtual void setName(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_setName_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("setName_EVString_callback");
						__env->CallVoidMethod(__obj, __method , name_j);
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
						return this->CPolylineFeature::setName(name);
					}
				}
				virtual EarthView::World::Core::ev_string getName()
				{
					if (this->_gRef != NULL && this->m_getName_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getName_void_callback");
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
						EarthView::World::Core::ev_string __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EarthView::World::Core::ev_string __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CPolylineFeature::getName();
					}
				}
				virtual void setPolylineFeaturePath(EarthView::World::Spatial::Geometry::CLineString* polylineFeaturePath)
				{
					if (this->_gRef != NULL && this->m_setPolylineFeaturePath_CLineString_callback != "" && this->isCustomExtend())
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
						jlong polylineFeaturePath_j = (jlong) polylineFeaturePath;
						jmethodID __method = __gr->getMethod("setPolylineFeaturePath_CLineString_callback");
						__env->CallVoidMethod(__obj, __method , polylineFeaturePath_j);
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
						return this->CPolylineFeature::setPolylineFeaturePath(polylineFeaturePath);
					}
				}
				virtual EarthView::World::Spatial::Geometry::CLineString* getPolylineFeaturePath() const
				{
					if (this->_gRef != NULL && this->m_getPolylineFeaturePath_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getPolylineFeaturePath_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Geometry::CLineString *__values1 = (EarthView::World::Spatial::Geometry::CLineString*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPolylineFeature::getPolylineFeaturePath();
					}
				}
				virtual void removeAllPoints()
				{
					if (this->_gRef != NULL && this->m_removeAllPoints_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeAllPoints_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CPolylineFeature::removeAllPoints();
					}
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getISpatialReference() const
				{
					if (this->_gRef != NULL && this->m_getISpatialReference_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getISpatialReference_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Geometry::ISpatialReference *__values1 = (EarthView::World::Spatial::Geometry::ISpatialReference*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPolylineFeature::getISpatialReference();
					}
				}
				virtual void setISpatialReference(EarthView::World::Spatial::Geometry::ISpatialReference* ref_pSpatialReference)
				{
					if (this->_gRef != NULL && this->m_setISpatialReference_ISpatialReference_callback != "" && this->isCustomExtend())
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
						jlong ref_pSpatialReference_j = (jlong) ref_pSpatialReference;
						jmethodID __method = __gr->getMethod("setISpatialReference_ISpatialReference_callback");
						__env->CallVoidMethod(__obj, __method , ref_pSpatialReference_j);
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
						return this->CPolylineFeature::setISpatialReference(ref_pSpatialReference);
					}
				}
				virtual void setVisible(const ev_bool& value)
				{
					if (this->_gRef != NULL && this->m_setVisible_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean value_j = (jboolean) value;
						jmethodID __method = __gr->getMethod("setVisible_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , value_j);
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
						return this->CPolylineFeature::setVisible(value);
					}
				}
				virtual ev_bool getVisible() const
				{
					if (this->_gRef != NULL && this->m_getVisible_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getVisible_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
						return this->CPolylineFeature::getVisible();
					}
				}
				virtual void setDescription(const EVString& description)
				{
					if (this->_gRef != NULL && this->m_setDescription_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring description_wch = description;
						jstring description_j = __env->NewString((const jchar*)description_wch.getString(), description_wch.size());
						jmethodID __method = __gr->getMethod("setDescription_EVString_callback");
						__env->CallVoidMethod(__obj, __method , description_j);
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
						return this->CPolylineFeature::setDescription(description);
					}
				}
				virtual EVString getDescription() const
				{
					if (this->_gRef != NULL && this->m_getDescription_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDescription_void_callback");
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
						return this->CPolylineFeature::getDescription();
					}
				}
				virtual void refresh()
				{
					if (this->_gRef != NULL && this->m_refresh_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("refresh_void_callback");
						__env->CallVoidMethod(__obj, __method );
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
						return this->CPolylineFeature::refresh();
					}
				}
				virtual void setHighLineColorInfo(EarthView::World::Spatial::Display::CRgbColor* staticHighLineColor, EarthView::World::Spatial::Display::CRgbColor* dynamicHighLineColor)
				{
					if (this->_gRef != NULL && this->m_setHighLineColorInfo_CRgbColor_CRgbColor_callback != "" && this->isCustomExtend())
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
						jlong staticHighLineColor_j = (jlong) staticHighLineColor;
						jlong dynamicHighLineColor_j = (jlong) dynamicHighLineColor;
						jmethodID __method = __gr->getMethod("setHighLineColorInfo_CRgbColor_CRgbColor_callback");
						__env->CallVoidMethod(__obj, __method , staticHighLineColor_j, dynamicHighLineColor_j);
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
						return this->CPolylineFeature::setHighLineColorInfo(staticHighLineColor, dynamicHighLineColor);
					}
				}
				virtual void setHighLineDistance(const ev_real64& highLineDistance)
				{
					if (this->_gRef != NULL && this->m_setHighLineDistance_ev_real64_callback != "" && this->isCustomExtend())
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
						jdouble highLineDistance_j = (jdouble) highLineDistance;
						jmethodID __method = __gr->getMethod("setHighLineDistance_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , highLineDistance_j);
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
						return this->CPolylineFeature::setHighLineDistance(highLineDistance);
					}
				}
				virtual void setUseHighLineDistance(const ev_bool& value)
				{
					if (this->_gRef != NULL && this->m_setUseHighLineDistance_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean value_j = (jboolean) value;
						jmethodID __method = __gr->getMethod("setUseHighLineDistance_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , value_j);
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
						return this->CPolylineFeature::setUseHighLineDistance(value);
					}
				}
				virtual ev_bool getUseHighLineDistance()
				{
					if (this->_gRef != NULL && this->m_getUseHighLineDistance_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getUseHighLineDistance_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
						return this->CPolylineFeature::getUseHighLineDistance();
					}
				}
				virtual ev_real64 getHighLineDistance()
				{
					if (this->_gRef != NULL && this->m_getHighLineDistance_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getHighLineDistance_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_real64 __values1 = (ev_real64) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPolylineFeature::getHighLineDistance();
					}
				}
				virtual void setIsHighLine(const ev_bool& isHighLine)
				{
					if (this->_gRef != NULL && this->m_setIsHighLine_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean isHighLine_j = (jboolean) isHighLine;
						jmethodID __method = __gr->getMethod("setIsHighLine_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , isHighLine_j);
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
						return this->CPolylineFeature::setIsHighLine(isHighLine);
					}
				}
				virtual ev_bool getIsHighLine() const
				{
					if (this->_gRef != NULL && this->m_getIsHighLine_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getIsHighLine_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
						return this->CPolylineFeature::getIsHighLine();
					}
				}
				virtual void setNeedClearUselessData(const ev_bool& value)
				{
					if (this->_gRef != NULL && this->m_setNeedClearUselessData_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean value_j = (jboolean) value;
						jmethodID __method = __gr->getMethod("setNeedClearUselessData_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , value_j);
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
						return this->CPolylineFeature::setNeedClearUselessData(value);
					}
				}
				virtual ev_bool getNeedClearUselessData() const
				{
					if (this->_gRef != NULL && this->m_getNeedClearUselessData_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNeedClearUselessData_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
						return this->CPolylineFeature::getNeedClearUselessData();
					}
				}
				virtual ev_int32 clearUselessData()
				{
					if (this->_gRef != NULL && this->m_clearUselessData_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("clearUselessData_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_int32 __values1 = (ev_int32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPolylineFeature::clearUselessData();
					}
				}
				virtual void setMaxUselessDataCount(const ev_int32& maxUselessDataCount)
				{
					if (this->_gRef != NULL && this->m_setMaxUselessDataCount_ev_int32_callback != "" && this->isCustomExtend())
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
						jint maxUselessDataCount_j = (jint) maxUselessDataCount;
						jmethodID __method = __gr->getMethod("setMaxUselessDataCount_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , maxUselessDataCount_j);
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
						return this->CPolylineFeature::setMaxUselessDataCount(maxUselessDataCount);
					}
				}
				virtual ev_int32 getMaxUselessDataCount()
				{
					if (this->_gRef != NULL && this->m_getMaxUselessDataCount_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getMaxUselessDataCount_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_int32 __values1 = (ev_int32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPolylineFeature::getMaxUselessDataCount();
					}
				}
				virtual ev_bool getUseWallGradualColor()
				{
					if (this->_gRef != NULL && this->m_getUseWallGradualColor_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getUseWallGradualColor_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
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
						return this->CPolylineFeature::getUseWallGradualColor();
					}
				}
				virtual void setUseWallGradualColor(const ev_bool& useWallGradualColor)
				{
					if (this->_gRef != NULL && this->m_setUseWallGradualColor_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean useWallGradualColor_j = (jboolean) useWallGradualColor;
						jmethodID __method = __gr->getMethod("setUseWallGradualColor_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , useWallGradualColor_j);
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
						return this->CPolylineFeature::setUseWallGradualColor(useWallGradualColor);
					}
				}
				virtual EarthView::World::Spatial::Display::CRgbColor* getWallGradualColor()
				{
					if (this->_gRef != NULL && this->m_getWallGradualColor_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWallGradualColor_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Display::CRgbColor *__values1 = (EarthView::World::Spatial::Display::CRgbColor*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPolylineFeature::getWallGradualColor();
					}
				}
				virtual void setWallGradualColor(EarthView::World::Spatial::Display::CRgbColor* pWallGradualColor)
				{
					if (this->_gRef != NULL && this->m_setWallGradualColor_CRgbColor_callback != "" && this->isCustomExtend())
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
						jlong pWallGradualColor_j = (jlong) pWallGradualColor;
						jmethodID __method = __gr->getMethod("setWallGradualColor_CRgbColor_callback");
						__env->CallVoidMethod(__obj, __method , pWallGradualColor_j);
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
						return this->CPolylineFeature::setWallGradualColor(pWallGradualColor);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCPolylineFeatureProxy);
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_00024EVDisplayModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CPolylineFeature::DM_POLYGON,
					CPolylineFeature::DM_LINE,
					CPolylineFeature::DM_POINT
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_addPoint_1CCoordinate(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong point_j)
			{
				const EarthView::World::Spatial::Geometry::CCoordinate &point = *(EarthView::World::Spatial::Geometry::CCoordinate*) point_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::addPoint(point);
				}
				else
				{
					pObjectX->addPoint(point);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1addPoint_1CCoordinate(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addPoint_CCoordinate_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addPoint_CCoordinate_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_addPoint_1CCoordinate_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong point_j)
			{
				const EarthView::World::Spatial::Geometry::CCoordinate &point = *(EarthView::World::Spatial::Geometry::CCoordinate*) point_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::addPoint(point);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setUniqueID_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint uniqueID_j)
			{
				const ev_int32 uniqueID = (const ev_int32) uniqueID_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setUniqueID(uniqueID);
				}
				else
				{
					pObjectX->setUniqueID(uniqueID);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1setUniqueID_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setUniqueID_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setUniqueID_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setUniqueID_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint uniqueID_j)
			{
				const ev_int32 uniqueID = (const ev_int32) uniqueID_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setUniqueID(uniqueID);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getUniqueID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getUniqueID();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getUniqueID();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1getUniqueID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getUniqueID_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getUniqueID_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getUniqueID_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getUniqueID();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_isShowAllPoints_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::isShowAllPoints();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isShowAllPoints();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1isShowAllPoints_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isShowAllPoints_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isShowAllPoints_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_isShowAllPoints_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::isShowAllPoints();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_isValidIndex_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				const ev_int32 index = (const ev_int32) index_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::isValidIndex(index);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isValidIndex(index);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1isValidIndex_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isValidIndex_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isValidIndex_ev_int32_callback", "(I)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_isValidIndex_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				const ev_int32 index = (const ev_int32) index_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::isValidIndex(index);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setNeedUpdate_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean needUpdate_j)
			{
				const ev_bool needUpdate = (const ev_bool) needUpdate_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setNeedUpdate(needUpdate);
				}
				else
				{
					pObjectX->setNeedUpdate(needUpdate);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1setNeedUpdate_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setNeedUpdate_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setNeedUpdate_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setNeedUpdate_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean needUpdate_j)
			{
				const ev_bool needUpdate = (const ev_bool) needUpdate_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setNeedUpdate(needUpdate);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getNeedUpdate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getNeedUpdate();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getNeedUpdate();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1getNeedUpdate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNeedUpdate_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNeedUpdate_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getNeedUpdate_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getNeedUpdate();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setDisplayPointNum_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint displayNumber_j)
			{
				const ev_int32 displayNumber = (const ev_int32) displayNumber_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setDisplayPointNum(displayNumber);
				}
				else
				{
					pObjectX->setDisplayPointNum(displayNumber);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1setDisplayPointNum_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDisplayPointNum_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDisplayPointNum_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setDisplayPointNum_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint displayNumber_j)
			{
				const ev_int32 displayNumber = (const ev_int32) displayNumber_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setDisplayPointNum(displayNumber);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setDisplayMode_1EVDisplayMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint displayMode_j)
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode displayMode = (const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode) displayMode_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setDisplayMode(displayMode);
				}
				else
				{
					pObjectX->setDisplayMode(displayMode);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1setDisplayMode_1EVDisplayMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDisplayMode_EVDisplayMode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDisplayMode_EVDisplayMode_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setDisplayMode_1EVDisplayMode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint displayMode_j)
			{
				const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode displayMode = (const EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode) displayMode_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setDisplayMode(displayMode);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getDisplayMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getDisplayMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode __values1 = pObjectX->getDisplayMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1getDisplayMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDisplayMode_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDisplayMode_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getDisplayMode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getDisplayMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getDisplayPointNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getDisplayPointNum();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getDisplayPointNum();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1getDisplayPointNum_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDisplayPointNum_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDisplayPointNum_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getDisplayPointNum_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getDisplayPointNum();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setPolylineFeatureSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong polylineFeatureSymbol_j)
			{
				EarthView::World::Spatial::Display::ISymbol *polylineFeatureSymbol = (EarthView::World::Spatial::Display::ISymbol*) polylineFeatureSymbol_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setPolylineFeatureSymbol(polylineFeatureSymbol);
				}
				else
				{
					pObjectX->setPolylineFeatureSymbol(polylineFeatureSymbol);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1setPolylineFeatureSymbol_1ISymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPolylineFeatureSymbol_ISymbol_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPolylineFeatureSymbol_ISymbol_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setPolylineFeatureSymbol_1ISymbol_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong polylineFeatureSymbol_j)
			{
				EarthView::World::Spatial::Display::ISymbol *polylineFeatureSymbol = (EarthView::World::Spatial::Display::ISymbol*) polylineFeatureSymbol_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setPolylineFeatureSymbol(polylineFeatureSymbol);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getPolylineFeatureSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getPolylineFeatureSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getPolylineFeatureSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1getPolylineFeatureSymbol_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPolylineFeatureSymbol_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPolylineFeatureSymbol_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getPolylineFeatureSymbol_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getPolylineFeatureSymbol();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setName(name);
				}
				else
				{
					pObjectX->setName(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1setName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setName_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setName_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setName(name);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					EarthView::World::Core::ev_string __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::ev_string __values1 = pObjectX->getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getName_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				EarthView::World::Core::ev_string __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setPolylineFeaturePath_1CLineString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong polylineFeaturePath_j)
			{
				EarthView::World::Spatial::Geometry::CLineString *polylineFeaturePath = (EarthView::World::Spatial::Geometry::CLineString*) polylineFeaturePath_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setPolylineFeaturePath(polylineFeaturePath);
				}
				else
				{
					pObjectX->setPolylineFeaturePath(polylineFeaturePath);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1setPolylineFeaturePath_1CLineString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPolylineFeaturePath_CLineString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPolylineFeaturePath_CLineString_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setPolylineFeaturePath_1CLineString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong polylineFeaturePath_j)
			{
				EarthView::World::Spatial::Geometry::CLineString *polylineFeaturePath = (EarthView::World::Spatial::Geometry::CLineString*) polylineFeaturePath_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setPolylineFeaturePath(polylineFeaturePath);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getPolylineFeaturePath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					EarthView::World::Spatial::Geometry::CLineString* __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getPolylineFeaturePath();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Geometry::CLineString* __values1 = pObjectX->getPolylineFeaturePath();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1getPolylineFeaturePath_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPolylineFeaturePath_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPolylineFeaturePath_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getPolylineFeaturePath_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				EarthView::World::Spatial::Geometry::CLineString* __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getPolylineFeaturePath();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_removeAllPoints_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::removeAllPoints();
				}
				else
				{
					pObjectX->removeAllPoints();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1removeAllPoints_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAllPoints_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAllPoints_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_removeAllPoints_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::removeAllPoints();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getISpatialReference_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getISpatialReference();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->getISpatialReference();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1getISpatialReference_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getISpatialReference_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getISpatialReference_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getISpatialReference_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getISpatialReference();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setISpatialReference_1ISpatialReference(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pSpatialReference_j)
			{
				EarthView::World::Spatial::Geometry::ISpatialReference *ref_pSpatialReference = (EarthView::World::Spatial::Geometry::ISpatialReference*) ref_pSpatialReference_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setISpatialReference(ref_pSpatialReference);
				}
				else
				{
					pObjectX->setISpatialReference(ref_pSpatialReference);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1setISpatialReference_1ISpatialReference(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setISpatialReference_ISpatialReference_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setISpatialReference_ISpatialReference_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setISpatialReference_1ISpatialReference_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pSpatialReference_j)
			{
				EarthView::World::Spatial::Geometry::ISpatialReference *ref_pSpatialReference = (EarthView::World::Spatial::Geometry::ISpatialReference*) ref_pSpatialReference_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setISpatialReference(ref_pSpatialReference);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				const ev_bool value = (const ev_bool) value_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setVisible(value);
				}
				else
				{
					pObjectX->setVisible(value);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1setVisible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setVisible_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setVisible_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setVisible_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				const ev_bool value = (const ev_bool) value_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setVisible(value);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1getVisible_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getVisible_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getVisible_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getVisible_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getVisible();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setDescription_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring description_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* description_ch = (const ev_char*)__env->GetStringUTFChars(description_j,JNI_FALSE);
				const EVString description = description_ch;
				__env->ReleaseStringUTFChars(description_j, (const char *)description_ch);
				#else
				const ev_wchar* description_ch = (const ev_wchar*)__env->GetStringChars(description_j,JNI_FALSE);
				const EVString description = description_ch;
				__env->ReleaseStringChars(description_j, (const jchar *)description_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setDescription(description);
				}
				else
				{
					pObjectX->setDescription(description);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1setDescription_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDescription_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDescription_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setDescription_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring description_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* description_ch = (const ev_char*)__env->GetStringUTFChars(description_j,JNI_FALSE);
				const EVString description = description_ch;
				__env->ReleaseStringUTFChars(description_j, (const char *)description_ch);
				#else
				const ev_wchar* description_ch = (const ev_wchar*)__env->GetStringChars(description_j,JNI_FALSE);
				const EVString description = description_ch;
				__env->ReleaseStringChars(description_j, (const jchar *)description_ch);
				#endif
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setDescription(description);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getDescription_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					EVString __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getDescription();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getDescription();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1getDescription_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDescription_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDescription_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getDescription_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getDescription();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_refresh_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::refresh();
				}
				else
				{
					pObjectX->refresh();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1refresh_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_refresh_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"refresh_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_refresh_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::refresh();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setHighLineColorInfo_1CRgbColor_1CRgbColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong staticHighLineColor_j, jlong dynamicHighLineColor_j)
			{
				EarthView::World::Spatial::Display::CRgbColor *staticHighLineColor = (EarthView::World::Spatial::Display::CRgbColor*) staticHighLineColor_j;
				EarthView::World::Spatial::Display::CRgbColor *dynamicHighLineColor = (EarthView::World::Spatial::Display::CRgbColor*) dynamicHighLineColor_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setHighLineColorInfo(staticHighLineColor, dynamicHighLineColor);
				}
				else
				{
					pObjectX->setHighLineColorInfo(staticHighLineColor, dynamicHighLineColor);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1setHighLineColorInfo_1CRgbColor_1CRgbColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setHighLineColorInfo_CRgbColor_CRgbColor_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setHighLineColorInfo_CRgbColor_CRgbColor_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setHighLineColorInfo_1CRgbColor_1CRgbColor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong staticHighLineColor_j, jlong dynamicHighLineColor_j)
			{
				EarthView::World::Spatial::Display::CRgbColor *staticHighLineColor = (EarthView::World::Spatial::Display::CRgbColor*) staticHighLineColor_j;
				EarthView::World::Spatial::Display::CRgbColor *dynamicHighLineColor = (EarthView::World::Spatial::Display::CRgbColor*) dynamicHighLineColor_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setHighLineColorInfo(staticHighLineColor, dynamicHighLineColor);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setHighLineDistance_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble highLineDistance_j)
			{
				const ev_real64 highLineDistance = (const ev_real64) highLineDistance_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setHighLineDistance(highLineDistance);
				}
				else
				{
					pObjectX->setHighLineDistance(highLineDistance);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1setHighLineDistance_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setHighLineDistance_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setHighLineDistance_ev_real64_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setHighLineDistance_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble highLineDistance_j)
			{
				const ev_real64 highLineDistance = (const ev_real64) highLineDistance_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setHighLineDistance(highLineDistance);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setUseHighLineDistance_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				const ev_bool value = (const ev_bool) value_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setUseHighLineDistance(value);
				}
				else
				{
					pObjectX->setUseHighLineDistance(value);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1setUseHighLineDistance_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setUseHighLineDistance_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setUseHighLineDistance_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setUseHighLineDistance_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				const ev_bool value = (const ev_bool) value_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setUseHighLineDistance(value);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getUseHighLineDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getUseHighLineDistance();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getUseHighLineDistance();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1getUseHighLineDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getUseHighLineDistance_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getUseHighLineDistance_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getUseHighLineDistance_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getUseHighLineDistance();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getHighLineDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					ev_real64 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getHighLineDistance();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					ev_real64 __values1 = pObjectX->getHighLineDistance();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1getHighLineDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getHighLineDistance_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getHighLineDistance_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getHighLineDistance_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				ev_real64 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getHighLineDistance();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setIsHighLine_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isHighLine_j)
			{
				const ev_bool isHighLine = (const ev_bool) isHighLine_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setIsHighLine(isHighLine);
				}
				else
				{
					pObjectX->setIsHighLine(isHighLine);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1setIsHighLine_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setIsHighLine_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setIsHighLine_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setIsHighLine_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isHighLine_j)
			{
				const ev_bool isHighLine = (const ev_bool) isHighLine_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setIsHighLine(isHighLine);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getIsHighLine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getIsHighLine();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getIsHighLine();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1getIsHighLine_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getIsHighLine_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getIsHighLine_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getIsHighLine_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getIsHighLine();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setNeedClearUselessData_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				const ev_bool value = (const ev_bool) value_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setNeedClearUselessData(value);
				}
				else
				{
					pObjectX->setNeedClearUselessData(value);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1setNeedClearUselessData_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setNeedClearUselessData_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setNeedClearUselessData_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setNeedClearUselessData_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
			{
				const ev_bool value = (const ev_bool) value_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setNeedClearUselessData(value);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getNeedClearUselessData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getNeedClearUselessData();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getNeedClearUselessData();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1getNeedClearUselessData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNeedClearUselessData_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNeedClearUselessData_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getNeedClearUselessData_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getNeedClearUselessData();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_clearUselessData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::clearUselessData();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->clearUselessData();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1clearUselessData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_clearUselessData_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"clearUselessData_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_clearUselessData_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::clearUselessData();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setMaxUselessDataCount_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint maxUselessDataCount_j)
			{
				const ev_int32 maxUselessDataCount = (const ev_int32) maxUselessDataCount_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setMaxUselessDataCount(maxUselessDataCount);
				}
				else
				{
					pObjectX->setMaxUselessDataCount(maxUselessDataCount);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1setMaxUselessDataCount_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setMaxUselessDataCount_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setMaxUselessDataCount_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setMaxUselessDataCount_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint maxUselessDataCount_j)
			{
				const ev_int32 maxUselessDataCount = (const ev_int32) maxUselessDataCount_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setMaxUselessDataCount(maxUselessDataCount);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getMaxUselessDataCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getMaxUselessDataCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getMaxUselessDataCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1getMaxUselessDataCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMaxUselessDataCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMaxUselessDataCount_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getMaxUselessDataCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getMaxUselessDataCount();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getUseWallGradualColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getUseWallGradualColor();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getUseWallGradualColor();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1getUseWallGradualColor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getUseWallGradualColor_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getUseWallGradualColor_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getUseWallGradualColor_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getUseWallGradualColor();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setUseWallGradualColor_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useWallGradualColor_j)
			{
				const ev_bool useWallGradualColor = (const ev_bool) useWallGradualColor_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setUseWallGradualColor(useWallGradualColor);
				}
				else
				{
					pObjectX->setUseWallGradualColor(useWallGradualColor);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1setUseWallGradualColor_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setUseWallGradualColor_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setUseWallGradualColor_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setUseWallGradualColor_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useWallGradualColor_j)
			{
				const ev_bool useWallGradualColor = (const ev_bool) useWallGradualColor_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setUseWallGradualColor(useWallGradualColor);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getWallGradualColor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					EarthView::World::Spatial::Display::CRgbColor* __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getWallGradualColor();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Display::CRgbColor* __values1 = pObjectX->getWallGradualColor();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1getWallGradualColor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWallGradualColor_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWallGradualColor_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_getWallGradualColor_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				EarthView::World::Spatial::Display::CRgbColor* __values1 = pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::getWallGradualColor();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setWallGradualColor_1CRgbColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pWallGradualColor_j)
			{
				EarthView::World::Spatial::Display::CRgbColor *pWallGradualColor = (EarthView::World::Spatial::Display::CRgbColor*) pWallGradualColor_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPolylineFeatureProxy))
				{
					pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setWallGradualColor(pWallGradualColor);
				}
				else
				{
					pObjectX->setWallGradualColor(pWallGradualColor);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_register_1setWallGradualColor_1CRgbColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPolylineFeatureProxy *pObjectX = (JCPolylineFeatureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setWallGradualColor_CRgbColor_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setWallGradualColor_CRgbColor_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_industrygraphic_PolylineFeature_setWallGradualColor_1CRgbColor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pWallGradualColor_j)
			{
				EarthView::World::Spatial::Display::CRgbColor *pWallGradualColor = (EarthView::World::Spatial::Display::CRgbColor*) pWallGradualColor_j;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature *pObjectX = (EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature*) pObjXXXX;
				pObjectX->EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::setWallGradualColor(pWallGradualColor);
			}
		}
	}
}
