/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/evlasxglayereditor.h"
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
			class JCEVLasxgLayerEditorProxy : public EarthView::World::Spatial3D::CEVLasxgLayerEditor
			{
			 private:
				EarthView::World::Core::ev_string m_addLayerObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_callback;
				EarthView::World::Core::ev_string m_addInstanceObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_callback;
				EarthView::World::Core::ev_string m_changeObjectPosition_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback;
				EarthView::World::Core::ev_string m_setEditingLayer_IGlobeLayer_callback;
				EarthView::World::Core::ev_string m_getEditingLayer_void_callback;
				EarthView::World::Core::ev_string m_startEditing_ev_bool_callback;
				EarthView::World::Core::ev_string m_stopEditing_ev_bool_callback;
				EarthView::World::Core::ev_string m_saveEditing_void_callback;
				EarthView::World::Core::ev_string m_isEditing_void_callback;
				EarthView::World::Core::ev_string m_redo_void_callback;
				EarthView::World::Core::ev_string m_undo_void_callback;
				EarthView::World::Core::ev_string m_canRedo_void_callback;
				EarthView::World::Core::ev_string m_canUndo_void_callback;
				EarthView::World::Core::ev_string m_addLayerObject_ev_uint32_CMatrix4_callback;
				EarthView::World::Core::ev_string m_changeObjectPosition_CVisibleObjectPtr_CMatrix4_callback;
				EarthView::World::Core::ev_string m_deleteLayerObject_ev_uint32_callback;
				EarthView::World::Core::ev_string m_addListener_CLayer3DEditorListener_callback;
				EarthView::World::Core::ev_string m_removeListener_CLayer3DEditorListener_callback;
				EarthView::World::Core::ev_string m_getListener_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getNumListener_void_callback;
			public:
				JCEVLasxgLayerEditorProxy(EarthView::World::Core::CNameValuePairList *pList) : CEVLasxgLayerEditor(pList)
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
				void register_addLayerObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addLayerObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_callback = __method;
				}
				void register_addInstanceObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addInstanceObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_callback = __method;
				}
				void register_changeObjectPosition_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_changeObjectPosition_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback = __method;
				}
				void register_setEditingLayer_IGlobeLayer_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setEditingLayer_IGlobeLayer_callback = __method;
				}
				void register_getEditingLayer_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getEditingLayer_void_callback = __method;
				}
				void register_startEditing_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_startEditing_ev_bool_callback = __method;
				}
				void register_stopEditing_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_stopEditing_ev_bool_callback = __method;
				}
				void register_saveEditing_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_saveEditing_void_callback = __method;
				}
				void register_isEditing_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isEditing_void_callback = __method;
				}
				void register_redo_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_redo_void_callback = __method;
				}
				void register_undo_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_undo_void_callback = __method;
				}
				void register_canRedo_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_canRedo_void_callback = __method;
				}
				void register_canUndo_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_canUndo_void_callback = __method;
				}
				void register_addLayerObject_ev_uint32_CMatrix4_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addLayerObject_ev_uint32_CMatrix4_callback = __method;
				}
				void register_changeObjectPosition_CVisibleObjectPtr_CMatrix4_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_changeObjectPosition_CVisibleObjectPtr_CMatrix4_callback = __method;
				}
				void register_deleteLayerObject_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_deleteLayerObject_ev_uint32_callback = __method;
				}
				void register_addListener_CLayer3DEditorListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addListener_CLayer3DEditorListener_callback = __method;
				}
				void register_removeListener_CLayer3DEditorListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeListener_CLayer3DEditorListener_callback = __method;
				}
				void register_getListener_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getListener_ev_uint32_callback = __method;
				}
				void register_getNumListener_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNumListener_void_callback = __method;
				}
				virtual ev_bool startEditing(ev_bool withUndo)
				{
					if (this->_gRef != NULL && this->m_startEditing_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean withUndo_j = (jboolean) withUndo;
						jmethodID __method = __gr->getMethod("startEditing_ev_bool_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , withUndo_j);
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
						return this->CEVLasxgLayerEditor::startEditing(withUndo);
					}
				}
				virtual void stopEditing(ev_bool isSave)
				{
					if (this->_gRef != NULL && this->m_stopEditing_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean isSave_j = (jboolean) isSave;
						jmethodID __method = __gr->getMethod("stopEditing_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , isSave_j);
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
						return this->CEVLasxgLayerEditor::stopEditing(isSave);
					}
				}
				virtual void saveEditing()
				{
					if (this->_gRef != NULL && this->m_saveEditing_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("saveEditing_void_callback");
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
						return this->CEVLasxgLayerEditor::saveEditing();
					}
				}
				virtual ev_uint32 addLayerObject(const EVString& meshxfile, ev_real64 lat, ev_real64 lon, ev_real64 alt, const EarthView::World::Spatial::Math::CVector3& localScale, const EarthView::World::Spatial::Math::CQuaternion& localOrientation, EarthView::World::Spatial::GeoDataset::CPropertySet& propertyVal)
				{
					if (this->_gRef != NULL && this->m_addLayerObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring meshxfile_wch = meshxfile;
						jstring meshxfile_j = __env->NewString((const jchar*)meshxfile_wch.getString(), meshxfile_wch.size());
						jdouble lat_j = (jdouble) lat;
						jdouble lon_j = (jdouble) lon;
						jdouble alt_j = (jdouble) alt;
						jlong localScale_j = (jlong) &localScale;
						jlong localOrientation_j = (jlong) &localOrientation;
						jlong propertyVal_j = (jlong) &propertyVal;
						jmethodID __method = __gr->getMethod("addLayerObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , meshxfile_j, lat_j, lon_j, alt_j, localScale_j, localOrientation_j, propertyVal_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CEVLasxgLayerEditor::addLayerObject(meshxfile, lat, lon, alt, localScale, localOrientation, propertyVal);
					}
				}
				virtual ev_uint32 addInstanceObject(const EVString& meshxfile, ev_real64 lat, ev_real64 lon, ev_real64 alt, const EarthView::World::Spatial::Math::CVector3& localScale, const EarthView::World::Spatial::Math::CQuaternion& localOrientation, EarthView::World::Spatial::GeoDataset::CPropertySet& propertyVal)
				{
					if (this->_gRef != NULL && this->m_addInstanceObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring meshxfile_wch = meshxfile;
						jstring meshxfile_j = __env->NewString((const jchar*)meshxfile_wch.getString(), meshxfile_wch.size());
						jdouble lat_j = (jdouble) lat;
						jdouble lon_j = (jdouble) lon;
						jdouble alt_j = (jdouble) alt;
						jlong localScale_j = (jlong) &localScale;
						jlong localOrientation_j = (jlong) &localOrientation;
						jlong propertyVal_j = (jlong) &propertyVal;
						jmethodID __method = __gr->getMethod("addInstanceObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , meshxfile_j, lat_j, lon_j, alt_j, localScale_j, localOrientation_j, propertyVal_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CEVLasxgLayerEditor::addInstanceObject(meshxfile, lat, lon, alt, localScale, localOrientation, propertyVal);
					}
				}
				virtual ev_bool changeObjectPosition(ev_uint32 id, ev_real64 lat, ev_real64 lon, ev_real64 alt, const EarthView::World::Spatial::Math::CVector3& localScale, const EarthView::World::Spatial::Math::CQuaternion& localOrientation)
				{
					if (this->_gRef != NULL && this->m_changeObjectPosition_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback != "" && this->isCustomExtend())
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
						jlong id_j = (jlong) id;
						jdouble lat_j = (jdouble) lat;
						jdouble lon_j = (jdouble) lon;
						jdouble alt_j = (jdouble) alt;
						jlong localScale_j = (jlong) &localScale;
						jlong localOrientation_j = (jlong) &localOrientation;
						jmethodID __method = __gr->getMethod("changeObjectPosition_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , id_j, lat_j, lon_j, alt_j, localScale_j, localOrientation_j);
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
						return this->CEVLasxgLayerEditor::changeObjectPosition(id, lat, lon, alt, localScale, localOrientation);
					}
				}
				virtual ev_bool deleteLayerObject(ev_uint32 id)
				{
					if (this->_gRef != NULL && this->m_deleteLayerObject_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong id_j = (jlong) id;
						jmethodID __method = __gr->getMethod("deleteLayerObject_ev_uint32_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , id_j);
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
						return this->CEVLasxgLayerEditor::deleteLayerObject(id);
					}
				}
				virtual void setEditingLayer(EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer)
				{
					if (this->_gRef != NULL && this->m_setEditingLayer_IGlobeLayer_callback != "" && this->isCustomExtend())
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
						jlong ref_layer_j = (jlong) ref_layer;
						jmethodID __method = __gr->getMethod("setEditingLayer_IGlobeLayer_callback");
						__env->CallVoidMethod(__obj, __method , ref_layer_j);
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
						return this->CEVLasxgLayerEditor::setEditingLayer(ref_layer);
					}
				}
				virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getEditingLayer()
				{
					if (this->_gRef != NULL && this->m_getEditingLayer_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getEditingLayer_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial3D::Atlas::IGlobeLayer *__values1 = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CEVLasxgLayerEditor::getEditingLayer();
					}
				}
				virtual ev_bool isEditing()
				{
					if (this->_gRef != NULL && this->m_isEditing_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isEditing_void_callback");
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
						return this->CEVLasxgLayerEditor::isEditing();
					}
				}
				virtual ev_bool redo()
				{
					if (this->_gRef != NULL && this->m_redo_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("redo_void_callback");
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
						return this->CEVLasxgLayerEditor::redo();
					}
				}
				virtual ev_bool undo()
				{
					if (this->_gRef != NULL && this->m_undo_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("undo_void_callback");
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
						return this->CEVLasxgLayerEditor::undo();
					}
				}
				virtual ev_bool canRedo()
				{
					if (this->_gRef != NULL && this->m_canRedo_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("canRedo_void_callback");
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
						return this->CEVLasxgLayerEditor::canRedo();
					}
				}
				virtual ev_bool canUndo()
				{
					if (this->_gRef != NULL && this->m_canUndo_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("canUndo_void_callback");
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
						return this->CEVLasxgLayerEditor::canUndo();
					}
				}
				virtual void addListener(EarthView::World::Spatial3D::CLayer3DEditorListener* lis)
				{
					if (this->_gRef != NULL && this->m_addListener_CLayer3DEditorListener_callback != "" && this->isCustomExtend())
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
						jlong lis_j = (jlong) lis;
						jmethodID __method = __gr->getMethod("addListener_CLayer3DEditorListener_callback");
						__env->CallVoidMethod(__obj, __method , lis_j);
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
						return this->CEVLasxgLayerEditor::addListener(lis);
					}
				}
				virtual void removeListener(EarthView::World::Spatial3D::CLayer3DEditorListener* lis)
				{
					if (this->_gRef != NULL && this->m_removeListener_CLayer3DEditorListener_callback != "" && this->isCustomExtend())
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
						jlong lis_j = (jlong) lis;
						jmethodID __method = __gr->getMethod("removeListener_CLayer3DEditorListener_callback");
						__env->CallVoidMethod(__obj, __method , lis_j);
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
						return this->CEVLasxgLayerEditor::removeListener(lis);
					}
				}
				virtual EarthView::World::Spatial3D::CLayer3DEditorListener* getListener(ev_uint32 index)
				{
					if (this->_gRef != NULL && this->m_getListener_ev_uint32_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getListener_ev_uint32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial3D::CLayer3DEditorListener *__values1 = (EarthView::World::Spatial3D::CLayer3DEditorListener*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CEVLasxgLayerEditor::getListener(index);
					}
				}
				virtual ev_uint32 getNumListener()
				{
					if (this->_gRef != NULL && this->m_getNumListener_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNumListener_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CEVLasxgLayerEditor::getNumListener();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCEVLasxgLayerEditorProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_startEditing_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean withUndo_j)
			{
				ev_bool withUndo = (ev_bool) withUndo_j;
				EarthView::World::Spatial3D::CEVLasxgLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEVLasxgLayerEditorProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::CEVLasxgLayerEditor::startEditing(withUndo);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->startEditing(withUndo);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_register_1startEditing_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVLasxgLayerEditorProxy *pObjectX = (JCEVLasxgLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_startEditing_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"startEditing_ev_bool_callback", "(Z)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_startEditing_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean withUndo_j)
			{
				ev_bool withUndo = (ev_bool) withUndo_j;
				EarthView::World::Spatial3D::CEVLasxgLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::CEVLasxgLayerEditor::startEditing(withUndo);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_stopEditing_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isSave_j)
			{
				ev_bool isSave = (ev_bool) isSave_j;
				EarthView::World::Spatial3D::CEVLasxgLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEVLasxgLayerEditorProxy))
				{
					pObjectX->EarthView::World::Spatial3D::CEVLasxgLayerEditor::stopEditing(isSave);
				}
				else
				{
					pObjectX->stopEditing(isSave);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_register_1stopEditing_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVLasxgLayerEditorProxy *pObjectX = (JCEVLasxgLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_stopEditing_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"stopEditing_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_stopEditing_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isSave_j)
			{
				ev_bool isSave = (ev_bool) isSave_j;
				EarthView::World::Spatial3D::CEVLasxgLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3D::CEVLasxgLayerEditor::stopEditing(isSave);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_saveEditing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEVLasxgLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEVLasxgLayerEditorProxy))
				{
					pObjectX->EarthView::World::Spatial3D::CEVLasxgLayerEditor::saveEditing();
				}
				else
				{
					pObjectX->saveEditing();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_register_1saveEditing_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVLasxgLayerEditorProxy *pObjectX = (JCEVLasxgLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_saveEditing_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"saveEditing_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_saveEditing_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CEVLasxgLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjXXXX;
				pObjectX->EarthView::World::Spatial3D::CEVLasxgLayerEditor::saveEditing();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_addLayerObject_1EVString_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion_1CPropertySet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring meshxfile_j, jdouble lat_j, jdouble lon_j, jdouble alt_j, jlong localScale_j, jlong localOrientation_j, jlong propertyVal_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* meshxfile_ch = (const ev_char*)__env->GetStringUTFChars(meshxfile_j,JNI_FALSE);
				const EVString meshxfile = meshxfile_ch;
				__env->ReleaseStringUTFChars(meshxfile_j, (const char *)meshxfile_ch);
				#else
				const ev_wchar* meshxfile_ch = (const ev_wchar*)__env->GetStringChars(meshxfile_j,JNI_FALSE);
				const EVString meshxfile = meshxfile_ch;
				__env->ReleaseStringChars(meshxfile_j, (const jchar *)meshxfile_ch);
				#endif
				ev_real64 lat = (ev_real64) lat_j;
				ev_real64 lon = (ev_real64) lon_j;
				ev_real64 alt = (ev_real64) alt_j;
				const EarthView::World::Spatial::Math::CVector3 &localScale = *(EarthView::World::Spatial::Math::CVector3*) localScale_j;
				const EarthView::World::Spatial::Math::CQuaternion &localOrientation = *(EarthView::World::Spatial::Math::CQuaternion*) localOrientation_j;
				EarthView::World::Spatial::GeoDataset::CPropertySet &propertyVal = *(EarthView::World::Spatial::GeoDataset::CPropertySet*) propertyVal_j;
				EarthView::World::Spatial3D::CEVLasxgLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEVLasxgLayerEditorProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial3D::CEVLasxgLayerEditor::addLayerObject(meshxfile, lat, lon, alt, localScale, localOrientation, propertyVal);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->addLayerObject(meshxfile, lat, lon, alt, localScale, localOrientation, propertyVal);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_register_1addLayerObject_1EVString_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion_1CPropertySet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVLasxgLayerEditorProxy *pObjectX = (JCEVLasxgLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addLayerObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addLayerObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_callback", "(Ljava/lang/String;DDDJJJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_addLayerObject_1EVString_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion_1CPropertySet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring meshxfile_j, jdouble lat_j, jdouble lon_j, jdouble alt_j, jlong localScale_j, jlong localOrientation_j, jlong propertyVal_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* meshxfile_ch = (const ev_char*)__env->GetStringUTFChars(meshxfile_j,JNI_FALSE);
				const EVString meshxfile = meshxfile_ch;
				__env->ReleaseStringUTFChars(meshxfile_j, (const char *)meshxfile_ch);
				#else
				const ev_wchar* meshxfile_ch = (const ev_wchar*)__env->GetStringChars(meshxfile_j,JNI_FALSE);
				const EVString meshxfile = meshxfile_ch;
				__env->ReleaseStringChars(meshxfile_j, (const jchar *)meshxfile_ch);
				#endif
				ev_real64 lat = (ev_real64) lat_j;
				ev_real64 lon = (ev_real64) lon_j;
				ev_real64 alt = (ev_real64) alt_j;
				const EarthView::World::Spatial::Math::CVector3 &localScale = *(EarthView::World::Spatial::Math::CVector3*) localScale_j;
				const EarthView::World::Spatial::Math::CQuaternion &localOrientation = *(EarthView::World::Spatial::Math::CQuaternion*) localOrientation_j;
				EarthView::World::Spatial::GeoDataset::CPropertySet &propertyVal = *(EarthView::World::Spatial::GeoDataset::CPropertySet*) propertyVal_j;
				EarthView::World::Spatial3D::CEVLasxgLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Spatial3D::CEVLasxgLayerEditor::addLayerObject(meshxfile, lat, lon, alt, localScale, localOrientation, propertyVal);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_addInstanceObject_1EVString_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion_1CPropertySet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring meshxfile_j, jdouble lat_j, jdouble lon_j, jdouble alt_j, jlong localScale_j, jlong localOrientation_j, jlong propertyVal_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* meshxfile_ch = (const ev_char*)__env->GetStringUTFChars(meshxfile_j,JNI_FALSE);
				const EVString meshxfile = meshxfile_ch;
				__env->ReleaseStringUTFChars(meshxfile_j, (const char *)meshxfile_ch);
				#else
				const ev_wchar* meshxfile_ch = (const ev_wchar*)__env->GetStringChars(meshxfile_j,JNI_FALSE);
				const EVString meshxfile = meshxfile_ch;
				__env->ReleaseStringChars(meshxfile_j, (const jchar *)meshxfile_ch);
				#endif
				ev_real64 lat = (ev_real64) lat_j;
				ev_real64 lon = (ev_real64) lon_j;
				ev_real64 alt = (ev_real64) alt_j;
				const EarthView::World::Spatial::Math::CVector3 &localScale = *(EarthView::World::Spatial::Math::CVector3*) localScale_j;
				const EarthView::World::Spatial::Math::CQuaternion &localOrientation = *(EarthView::World::Spatial::Math::CQuaternion*) localOrientation_j;
				EarthView::World::Spatial::GeoDataset::CPropertySet &propertyVal = *(EarthView::World::Spatial::GeoDataset::CPropertySet*) propertyVal_j;
				EarthView::World::Spatial3D::CEVLasxgLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEVLasxgLayerEditorProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial3D::CEVLasxgLayerEditor::addInstanceObject(meshxfile, lat, lon, alt, localScale, localOrientation, propertyVal);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->addInstanceObject(meshxfile, lat, lon, alt, localScale, localOrientation, propertyVal);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_register_1addInstanceObject_1EVString_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion_1CPropertySet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVLasxgLayerEditorProxy *pObjectX = (JCEVLasxgLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addInstanceObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addInstanceObject_EVString_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_CPropertySet_callback", "(Ljava/lang/String;DDDJJJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_addInstanceObject_1EVString_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion_1CPropertySet_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring meshxfile_j, jdouble lat_j, jdouble lon_j, jdouble alt_j, jlong localScale_j, jlong localOrientation_j, jlong propertyVal_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* meshxfile_ch = (const ev_char*)__env->GetStringUTFChars(meshxfile_j,JNI_FALSE);
				const EVString meshxfile = meshxfile_ch;
				__env->ReleaseStringUTFChars(meshxfile_j, (const char *)meshxfile_ch);
				#else
				const ev_wchar* meshxfile_ch = (const ev_wchar*)__env->GetStringChars(meshxfile_j,JNI_FALSE);
				const EVString meshxfile = meshxfile_ch;
				__env->ReleaseStringChars(meshxfile_j, (const jchar *)meshxfile_ch);
				#endif
				ev_real64 lat = (ev_real64) lat_j;
				ev_real64 lon = (ev_real64) lon_j;
				ev_real64 alt = (ev_real64) alt_j;
				const EarthView::World::Spatial::Math::CVector3 &localScale = *(EarthView::World::Spatial::Math::CVector3*) localScale_j;
				const EarthView::World::Spatial::Math::CQuaternion &localOrientation = *(EarthView::World::Spatial::Math::CQuaternion*) localOrientation_j;
				EarthView::World::Spatial::GeoDataset::CPropertySet &propertyVal = *(EarthView::World::Spatial::GeoDataset::CPropertySet*) propertyVal_j;
				EarthView::World::Spatial3D::CEVLasxgLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Spatial3D::CEVLasxgLayerEditor::addInstanceObject(meshxfile, lat, lon, alt, localScale, localOrientation, propertyVal);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_changeObjectPosition_1ev_1uint32_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jdouble lat_j, jdouble lon_j, jdouble alt_j, jlong localScale_j, jlong localOrientation_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				ev_real64 lat = (ev_real64) lat_j;
				ev_real64 lon = (ev_real64) lon_j;
				ev_real64 alt = (ev_real64) alt_j;
				const EarthView::World::Spatial::Math::CVector3 &localScale = *(EarthView::World::Spatial::Math::CVector3*) localScale_j;
				const EarthView::World::Spatial::Math::CQuaternion &localOrientation = *(EarthView::World::Spatial::Math::CQuaternion*) localOrientation_j;
				EarthView::World::Spatial3D::CEVLasxgLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEVLasxgLayerEditorProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::CEVLasxgLayerEditor::changeObjectPosition(id, lat, lon, alt, localScale, localOrientation);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->changeObjectPosition(id, lat, lon, alt, localScale, localOrientation);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_register_1changeObjectPosition_1ev_1uint32_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVLasxgLayerEditorProxy *pObjectX = (JCEVLasxgLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_changeObjectPosition_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"changeObjectPosition_ev_uint32_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback", "(JDDDJJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_changeObjectPosition_1ev_1uint32_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jdouble lat_j, jdouble lon_j, jdouble alt_j, jlong localScale_j, jlong localOrientation_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				ev_real64 lat = (ev_real64) lat_j;
				ev_real64 lon = (ev_real64) lon_j;
				ev_real64 alt = (ev_real64) alt_j;
				const EarthView::World::Spatial::Math::CVector3 &localScale = *(EarthView::World::Spatial::Math::CVector3*) localScale_j;
				const EarthView::World::Spatial::Math::CQuaternion &localOrientation = *(EarthView::World::Spatial::Math::CQuaternion*) localOrientation_j;
				EarthView::World::Spatial3D::CEVLasxgLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::CEVLasxgLayerEditor::changeObjectPosition(id, lat, lon, alt, localScale, localOrientation);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_deleteLayerObject_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				EarthView::World::Spatial3D::CEVLasxgLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCEVLasxgLayerEditorProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::CEVLasxgLayerEditor::deleteLayerObject(id);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->deleteLayerObject(id);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_register_1deleteLayerObject_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVLasxgLayerEditorProxy *pObjectX = (JCEVLasxgLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_deleteLayerObject_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"deleteLayerObject_ev_uint32_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_deleteLayerObject_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
			{
				ev_uint32 id = (ev_uint32) id_j;
				EarthView::World::Spatial3D::CEVLasxgLayerEditor *pObjectX = (EarthView::World::Spatial3D::CEVLasxgLayerEditor*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::CEVLasxgLayerEditor::deleteLayerObject(id);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_register_1setEditingLayer_1IGlobeLayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVLasxgLayerEditorProxy *pObjectX = (JCEVLasxgLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setEditingLayer_IGlobeLayer_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setEditingLayer_IGlobeLayer_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_register_1getEditingLayer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVLasxgLayerEditorProxy *pObjectX = (JCEVLasxgLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getEditingLayer_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getEditingLayer_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_register_1isEditing_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVLasxgLayerEditorProxy *pObjectX = (JCEVLasxgLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isEditing_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isEditing_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_register_1redo_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVLasxgLayerEditorProxy *pObjectX = (JCEVLasxgLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_redo_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"redo_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_register_1undo_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVLasxgLayerEditorProxy *pObjectX = (JCEVLasxgLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_undo_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"undo_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_register_1canRedo_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVLasxgLayerEditorProxy *pObjectX = (JCEVLasxgLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_canRedo_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"canRedo_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_register_1canUndo_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVLasxgLayerEditorProxy *pObjectX = (JCEVLasxgLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_canUndo_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"canUndo_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_register_1addLayerObject_1ev_1uint32_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVLasxgLayerEditorProxy *pObjectX = (JCEVLasxgLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addLayerObject_ev_uint32_CMatrix4_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addLayerObject_ev_uint32_CMatrix4_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_register_1changeObjectPosition_1CVisibleObjectPtr_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVLasxgLayerEditorProxy *pObjectX = (JCEVLasxgLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_changeObjectPosition_CVisibleObjectPtr_CMatrix4_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"changeObjectPosition_CVisibleObjectPtr_CMatrix4_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_register_1addListener_1CLayer3DEditorListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVLasxgLayerEditorProxy *pObjectX = (JCEVLasxgLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addListener_CLayer3DEditorListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addListener_CLayer3DEditorListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_register_1removeListener_1CLayer3DEditorListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVLasxgLayerEditorProxy *pObjectX = (JCEVLasxgLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeListener_CLayer3DEditorListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeListener_CLayer3DEditorListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_register_1getListener_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVLasxgLayerEditorProxy *pObjectX = (JCEVLasxgLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getListener_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getListener_ev_uint32_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Evlasxglayereditor_register_1getNumListener_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCEVLasxgLayerEditorProxy *pObjectX = (JCEVLasxgLayerEditorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNumListener_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNumListener_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
