/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ilayer.h"
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
			namespace GeoDataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_atlas_EVLayerTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						LT_UNKNOWN,
						LT_VECTOR_DATALAYER,
						LT_VECTOR_NETWORKLAYER,
						LT_VECTOR_CHARTLAYER,
						LT_VECTOR_ROUTELAYER,
						LT_VECTOR_NETWORKANALYSTLAYER,
						LT_VECTOR_ANNOLAYER,
						LT_RASTER_IMAGE,
						LT_DBRASTER_LAYER,
						LT_GROUPLAYER,
						LT_BASEGROUPLAYER,
						LT_MAPWFSLAYER,
						LT_MAPSERVERLAYER,
						LT_VECTORFILE_DATALAYER,
						LT_VECTORFILE_ANNOLAYER,
						LT_KmlLayer,
						LT_ImageOverLayer,
						LT_Smart3DLayer,
						LT_MeshXLayer,
						LT_MeshXGLayer,
						LT_SERVER_Smart3DLayer,
						LT_SERVER_MeshXGLayer,
						LT_LasLayer,
						LT_SERVER_LasLayer,
						LT_ImageClampLayer,
						LT_VectorWebClampLayer,
						LT_VectorDBClampLayer,
						LT_ChartClampLayer,
						LT_WmtsClampLayer,
						LT_ChartWmsClampLayer,
						LT_ChartWmtsClampLayer,
						LT_ElementClampLayer,
						LT_RasterClampLayer,
						LT_LocalRasterClampLayer,
						LT_VectorRelativeLayer,
						LT_ElementRelativelayer,
						LT_EntityLayer,
						LT_EntityInstanceLayer,
						LT_EffectLayer,
						LT_OgcWmsClampLayer,
						LT_OgcWmtsClampLayer,
						LT_VectorWebRelativeLayer,
						LT_VectorOctreeWebClampLayer,
						LT_TerrainLayer,
						LT_LocalTerrainLayer,
						LT_NeoVectorWebLayer,
						LT_OgcWFSVectorRelativeLayer,
						LT_OgcWFSVectorClampLayer,
						LT_KmlGroupLayer,
						LT_ImageGroupLayer,
						LT_FeatureGroupLayer,
						LT_TerrainGroupLayer,
						LT_TempGroupLayer,
						LT_SERVER_WMTS_Layer,
						LT_SERVER_WMS_Layer,
						LT_SERVER_WFS_Layer,
						LT_SERVER_DEM_Layer,
						LT_SERVER_GEOCODE_Layer,
						LT_SERVER_KML_Layer,
						LT_SERVER_GEOMETRY_Layer,
						LT_SERVER_MODEL_Layer,
						LT_SERVER_MODEL_TEMPLATE_Layer,
						LT_SERVER_OGC_WMTS_Layer,
						LT_SERVER_OGC_WMS_Layer,
						LT_SERVER_OGC_WFS_Layer
					};
					jintArray array = __env->NewIntArray(65);
					__env->SetIntArrayRegion(array, 0, 65, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_atlas_EVVectorLayerRendererTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						VLRT_UNKNOWN,
						VLRT_FEATURE,
						VLRT_SELECTION,
						VLRT_LABEL
					};
					jintArray array = __env->NewIntArray(4);
					__env->SetIntArrayRegion(array, 0, 4, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_atlas_EVSelectionResultTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						SRT_New,
						SRT_Add,
						SRT_Sub,
						SRT_And,
						SRT_XOR
					};
					jintArray array = __env->NewIntArray(5);
					__env->SetIntArrayRegion(array, 0, 5, enum_values);
					return array;
				}
				class JILayerProxy : public EarthView::World::Spatial::Atlas::ILayer
				{
				 private:
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_getDataset_void_callback;
					EarthView::World::Core::ev_string m_getDatasetName_void_callback;
					EarthView::World::Core::ev_string m_getDataSource_void_callback;
					EarthView::World::Core::ev_string m_select_IQueryFilter_EVSelectionResultType_callback;
					EarthView::World::Core::ev_string m_clearSelection_void_callback;
					EarthView::World::Core::ev_string m_setLayerSelection_ILayerSelection_callback;
					EarthView::World::Core::ev_string m_getLayerSelection_void_callback;
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_setName_EVString_callback;
					EarthView::World::Core::ev_string m_getDescription_void_callback;
					EarthView::World::Core::ev_string m_setDescription_EVString_callback;
					EarthView::World::Core::ev_string m_canEdit_void_callback;
					EarthView::World::Core::ev_string m_setCanEdit_ev_bool_callback;
					EarthView::World::Core::ev_string m_isEditing_void_callback;
					EarthView::World::Core::ev_string m_setEditing_ev_bool_callback;
					EarthView::World::Core::ev_string m_isVisible_void_callback;
					EarthView::World::Core::ev_string m_setVisible_ev_bool_callback;
					EarthView::World::Core::ev_string m_isValid_void_callback;
					EarthView::World::Core::ev_string m_isSelectable_void_callback;
					EarthView::World::Core::ev_string m_setSelectable_ev_bool_callback;
					EarthView::World::Core::ev_string m_ignoreScale_void_callback;
					EarthView::World::Core::ev_string m_setIgnoreScale_ev_bool_callback;
					EarthView::World::Core::ev_string m_getDisplayMaxScale_void_callback;
					EarthView::World::Core::ev_string m_setDisplayMaxScale_ev_real64_callback;
					EarthView::World::Core::ev_string m_getDisplayMinScale_void_callback;
					EarthView::World::Core::ev_string m_setDisplayMinScale_ev_real64_callback;
					EarthView::World::Core::ev_string m_getSpatialReference_void_callback;
					EarthView::World::Core::ev_string m_setSpatialReference_ISpatialReference_callback;
					EarthView::World::Core::ev_string m_setTransparentValue_ev_uint8_callback;
					EarthView::World::Core::ev_string m_getTransparentValue_void_callback;
					EarthView::World::Core::ev_string m_getExtent_void_callback;
					EarthView::World::Core::ev_string m_draw_ISpatialDisplay_EVVectorLayerRendererType_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
					EarthView::World::Core::ev_string m_toStream_CDataStream_callback;
					EarthView::World::Core::ev_string m_toXML_void_callback;
					EarthView::World::Core::ev_string m_fromXmlElement_CXmlElement_callback;
					EarthView::World::Core::ev_string m_toXmlElement_void_callback;
					EarthView::World::Core::ev_string m_fromStream_CDataStream_callback;
				public:
					JILayerProxy(EarthView::World::Core::CNameValuePairList *pList) : ILayer(pList)
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
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
					}
					void register_getDataset_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDataset_void_callback = __method;
					}
					void register_getDatasetName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDatasetName_void_callback = __method;
					}
					void register_getDataSource_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDataSource_void_callback = __method;
					}
					void register_select_IQueryFilter_EVSelectionResultType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_select_IQueryFilter_EVSelectionResultType_callback = __method;
					}
					void register_clearSelection_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_clearSelection_void_callback = __method;
					}
					void register_setLayerSelection_ILayerSelection_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setLayerSelection_ILayerSelection_callback = __method;
					}
					void register_getLayerSelection_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getLayerSelection_void_callback = __method;
					}
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_setName_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setName_EVString_callback = __method;
					}
					void register_getDescription_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDescription_void_callback = __method;
					}
					void register_setDescription_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDescription_EVString_callback = __method;
					}
					void register_canEdit_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_canEdit_void_callback = __method;
					}
					void register_setCanEdit_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setCanEdit_ev_bool_callback = __method;
					}
					void register_isEditing_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isEditing_void_callback = __method;
					}
					void register_setEditing_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setEditing_ev_bool_callback = __method;
					}
					void register_isVisible_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isVisible_void_callback = __method;
					}
					void register_setVisible_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setVisible_ev_bool_callback = __method;
					}
					void register_isValid_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isValid_void_callback = __method;
					}
					void register_isSelectable_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isSelectable_void_callback = __method;
					}
					void register_setSelectable_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSelectable_ev_bool_callback = __method;
					}
					void register_ignoreScale_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ignoreScale_void_callback = __method;
					}
					void register_setIgnoreScale_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setIgnoreScale_ev_bool_callback = __method;
					}
					void register_getDisplayMaxScale_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDisplayMaxScale_void_callback = __method;
					}
					void register_setDisplayMaxScale_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDisplayMaxScale_ev_real64_callback = __method;
					}
					void register_getDisplayMinScale_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDisplayMinScale_void_callback = __method;
					}
					void register_setDisplayMinScale_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDisplayMinScale_ev_real64_callback = __method;
					}
					void register_getSpatialReference_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSpatialReference_void_callback = __method;
					}
					void register_setSpatialReference_ISpatialReference_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSpatialReference_ISpatialReference_callback = __method;
					}
					void register_setTransparentValue_ev_uint8_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setTransparentValue_ev_uint8_callback = __method;
					}
					void register_getTransparentValue_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getTransparentValue_void_callback = __method;
					}
					void register_getExtent_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getExtent_void_callback = __method;
					}
					void register_draw_ISpatialDisplay_EVVectorLayerRendererType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_draw_ISpatialDisplay_EVVectorLayerRendererType_callback = __method;
					}
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					void register_toStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toStream_CDataStream_callback = __method;
					}
					void register_toXML_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toXML_void_callback = __method;
					}
					void register_fromXmlElement_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromXmlElement_CXmlElement_callback = __method;
					}
					void register_toXmlElement_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_toXmlElement_void_callback = __method;
					}
					void register_fromStream_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_fromStream_CDataStream_callback = __method;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if (this->_gRef != NULL && this->m_getType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::EVLayerType __values1 = (EarthView::World::Spatial::Atlas::EVLayerType) __values1_j;
							return __values1;
						}
						else
						{
							return this->ILayer::getType();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if (this->_gRef != NULL && this->m_getDataset_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getDataset_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::IDataset *__values1 = (EarthView::World::Spatial::GeoDataset::IDataset*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ILayer::getDataset();
						}
					}
					virtual EVString getDatasetName()
					{
						if (this->_gRef != NULL && this->m_getDatasetName_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getDatasetName_void_callback");
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
							return this->ILayer::getDatasetName();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
					{
						if (this->_gRef != NULL && this->m_getDataSource_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getDataSource_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::IDataSource *__values1 = (EarthView::World::Spatial::GeoDataset::IDataSource*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ILayer::getDataSource();
						}
					}
					virtual void select(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, EarthView::World::Spatial::Atlas::EVSelectionResultType type)
					{
						if (this->_gRef != NULL && this->m_select_IQueryFilter_EVSelectionResultType_callback != "" && this->isCustomExtend())
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
							jlong filter_j = (jlong) filter;
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("select_IQueryFilter_EVSelectionResultType_callback");
							__env->CallVoidMethod(__obj, __method , filter_j, type_j);
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
							return this->ILayer::select(filter, type);
						}
					}
					virtual void clearSelection()
					{
						if (this->_gRef != NULL && this->m_clearSelection_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("clearSelection_void_callback");
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
							return this->ILayer::clearSelection();
						}
					}
					virtual void setLayerSelection(EarthView::World::Spatial::Atlas::ILayerSelection* selection)
					{
						if (this->_gRef != NULL && this->m_setLayerSelection_ILayerSelection_callback != "" && this->isCustomExtend())
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
							jlong selection_j = (jlong) selection;
							jmethodID __method = __gr->getMethod("setLayerSelection_ILayerSelection_callback");
							__env->CallVoidMethod(__obj, __method , selection_j);
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
							return this->ILayer::setLayerSelection(selection);
						}
					}
					virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
					{
						if (this->_gRef != NULL && this->m_getLayerSelection_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getLayerSelection_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::ILayerSelection *__values1 = (EarthView::World::Spatial::Atlas::ILayerSelection*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ILayer::getLayerSelection();
						}
					}
					virtual EVString getName() const
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
							return this->ILayer::getName();
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
							return this->ILayer::setName(name);
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
							return this->ILayer::getDescription();
						}
					}
					virtual void setDescription(const EVString& value)
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
							EarthView::World::Core::ev_wstring value_wch = value;
							jstring value_j = __env->NewString((const jchar*)value_wch.getString(), value_wch.size());
							jmethodID __method = __gr->getMethod("setDescription_EVString_callback");
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
							return this->ILayer::setDescription(value);
						}
					}
					virtual ev_bool canEdit() const
					{
						if (this->_gRef != NULL && this->m_canEdit_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("canEdit_void_callback");
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
							return this->ILayer::canEdit();
						}
					}
					virtual void setCanEdit(ev_bool can)
					{
						if (this->_gRef != NULL && this->m_setCanEdit_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean can_j = (jboolean) can;
							jmethodID __method = __gr->getMethod("setCanEdit_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , can_j);
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
							return this->ILayer::setCanEdit(can);
						}
					}
					virtual ev_bool isEditing() const
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
							return this->ILayer::isEditing();
						}
					}
					virtual void setEditing(ev_bool editing)
					{
						if (this->_gRef != NULL && this->m_setEditing_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean editing_j = (jboolean) editing;
							jmethodID __method = __gr->getMethod("setEditing_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , editing_j);
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
							return this->ILayer::setEditing(editing);
						}
					}
					virtual ev_bool isVisible() const
					{
						if (this->_gRef != NULL && this->m_isVisible_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isVisible_void_callback");
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
							return this->ILayer::isVisible();
						}
					}
					virtual void setVisible(ev_bool visible)
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
							jboolean visible_j = (jboolean) visible;
							jmethodID __method = __gr->getMethod("setVisible_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , visible_j);
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
							return this->ILayer::setVisible(visible);
						}
					}
					virtual ev_bool isValid() const
					{
						if (this->_gRef != NULL && this->m_isValid_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isValid_void_callback");
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
							return this->ILayer::isValid();
						}
					}
					virtual ev_bool isSelectable() const
					{
						if (this->_gRef != NULL && this->m_isSelectable_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("isSelectable_void_callback");
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
							return this->ILayer::isSelectable();
						}
					}
					virtual void setSelectable(ev_bool selectable)
					{
						if (this->_gRef != NULL && this->m_setSelectable_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean selectable_j = (jboolean) selectable;
							jmethodID __method = __gr->getMethod("setSelectable_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , selectable_j);
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
							return this->ILayer::setSelectable(selectable);
						}
					}
					virtual ev_bool ignoreScale() const
					{
						if (this->_gRef != NULL && this->m_ignoreScale_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("ignoreScale_void_callback");
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
							return this->ILayer::ignoreScale();
						}
					}
					virtual void setIgnoreScale(ev_bool bIgnore)
					{
						if (this->_gRef != NULL && this->m_setIgnoreScale_ev_bool_callback != "" && this->isCustomExtend())
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
							jboolean bIgnore_j = (jboolean) bIgnore;
							jmethodID __method = __gr->getMethod("setIgnoreScale_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , bIgnore_j);
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
							return this->ILayer::setIgnoreScale(bIgnore);
						}
					}
					virtual ev_real64 getDisplayMaxScale() const
					{
						if (this->_gRef != NULL && this->m_getDisplayMaxScale_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getDisplayMaxScale_void_callback");
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
							return this->ILayer::getDisplayMaxScale();
						}
					}
					virtual void setDisplayMaxScale(ev_real64 scale)
					{
						if (this->_gRef != NULL && this->m_setDisplayMaxScale_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble scale_j = (jdouble) scale;
							jmethodID __method = __gr->getMethod("setDisplayMaxScale_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , scale_j);
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
							return this->ILayer::setDisplayMaxScale(scale);
						}
					}
					virtual ev_real64 getDisplayMinScale() const
					{
						if (this->_gRef != NULL && this->m_getDisplayMinScale_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getDisplayMinScale_void_callback");
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
							return this->ILayer::getDisplayMinScale();
						}
					}
					virtual void setDisplayMinScale(ev_real64 scale)
					{
						if (this->_gRef != NULL && this->m_setDisplayMinScale_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble scale_j = (jdouble) scale;
							jmethodID __method = __gr->getMethod("setDisplayMinScale_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , scale_j);
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
							return this->ILayer::setDisplayMinScale(scale);
						}
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if (this->_gRef != NULL && this->m_getSpatialReference_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSpatialReference_void_callback");
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
							return this->ILayer::getSpatialReference();
						}
					}
					virtual void setSpatialReference(EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if (this->_gRef != NULL && this->m_setSpatialReference_ISpatialReference_callback != "" && this->isCustomExtend())
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
							jlong ref_sr_j = (jlong) ref_sr;
							jmethodID __method = __gr->getMethod("setSpatialReference_ISpatialReference_callback");
							__env->CallVoidMethod(__obj, __method , ref_sr_j);
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
							return this->ILayer::setSpatialReference(ref_sr);
						}
					}
					virtual void setTransparentValue(ev_uint8 transparent)
					{
						if (this->_gRef != NULL && this->m_setTransparentValue_ev_uint8_callback != "" && this->isCustomExtend())
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
							jshort transparent_j = (jshort) transparent;
							jmethodID __method = __gr->getMethod("setTransparentValue_ev_uint8_callback");
							__env->CallVoidMethod(__obj, __method , transparent_j);
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
							return this->ILayer::setTransparentValue(transparent);
						}
					}
					virtual ev_uint8 getTransparentValue() const
					{
						if (this->_gRef != NULL && this->m_getTransparentValue_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getTransparentValue_void_callback");
							jshort __values1_j = (jshort)__env->CallShortMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_uint8 __values1 = (ev_uint8) __values1_j;
							return __values1;
						}
						else
						{
							return this->ILayer::getTransparentValue();
						}
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
					{
						if (this->_gRef != NULL && this->m_getExtent_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getExtent_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Geometry::IEnvelope *__values1 = (const EarthView::World::Spatial::Geometry::IEnvelope*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ILayer::getExtent();
						}
					}
					virtual ev_bool draw(EarthView::World::Spatial::Display::ISpatialDisplay* display, EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
					{
						if (this->_gRef != NULL && this->m_draw_ISpatialDisplay_EVVectorLayerRendererType_callback != "" && this->isCustomExtend())
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
							jlong display_j = (jlong) display;
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("draw_ISpatialDisplay_EVVectorLayerRendererType_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , display_j, type_j);
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
							return this->ILayer::draw(display, type);
						}
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
					{
						if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("ev_clone_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::ILayer *__values1 = (EarthView::World::Spatial::Atlas::ILayer*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ILayer::clone();
						}
					}
					virtual void toStream(EarthView::World::Core::CDataStream& stream) const
					{
						if (this->_gRef != NULL && this->m_toStream_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("toStream_CDataStream_callback");
							__env->CallVoidMethod(__obj, __method , stream_j);
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
							return this->ILayer::toStream(stream);
						}
					}
					virtual EVString toXML() const
					{
						if (this->_gRef != NULL && this->m_toXML_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("toXML_void_callback");
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
							return this->ILayer::toXML();
						}
					}
					virtual void fromXmlElement(EarthView::World::Core::CXmlElement& element)
					{
						if (this->_gRef != NULL && this->m_fromXmlElement_CXmlElement_callback != "" && this->isCustomExtend())
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
							jlong element_j = (jlong) &element;
							jmethodID __method = __gr->getMethod("fromXmlElement_CXmlElement_callback");
							__env->CallVoidMethod(__obj, __method , element_j);
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
							return this->ILayer::fromXmlElement(element);
						}
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if (this->_gRef != NULL && this->m_toXmlElement_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("toXmlElement_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::CXmlElement __values1 = *(EarthView::World::Core::CXmlElement*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ILayer::toXmlElement();
						}
					}
					virtual void fromStream(EarthView::World::Core::CDataStream& stream)
					{
						if (this->_gRef != NULL && this->m_fromStream_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("fromStream_CDataStream_callback");
							__env->CallVoidMethod(__obj, __method , stream_j);
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
							return this->ILayer::fromStream(stream);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JILayerProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						EarthView::World::Spatial::Atlas::EVLayerType __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType __values1 = pObjectX->getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_getDataset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::getDataset();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->getDataset();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1getDataset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDataset_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDataset_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_getDataset_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::getDataset();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_getDatasetName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::getDatasetName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getDatasetName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1getDatasetName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDatasetName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDatasetName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_getDatasetName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::getDatasetName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_getDataSource_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::getDataSource();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->getDataSource();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1getDataSource_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDataSource_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDataSource_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_getDataSource_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::getDataSource();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_select_1IQueryFilter_1EVSelectionResultType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j, jint type_j)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					EarthView::World::Spatial::Atlas::EVSelectionResultType type = (EarthView::World::Spatial::Atlas::EVSelectionResultType) type_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ILayer::select(filter, type);
					}
					else
					{
						pObjectX->select(filter, type);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1select_1IQueryFilter_1EVSelectionResultType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_select_IQueryFilter_EVSelectionResultType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"select_IQueryFilter_EVSelectionResultType_callback", "(JI)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_select_1IQueryFilter_1EVSelectionResultType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong filter_j, jint type_j)
				{
					EarthView::World::Spatial::GeoDataset::IQueryFilter *filter = (EarthView::World::Spatial::GeoDataset::IQueryFilter*) filter_j;
					EarthView::World::Spatial::Atlas::EVSelectionResultType type = (EarthView::World::Spatial::Atlas::EVSelectionResultType) type_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ILayer::select(filter, type);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_clearSelection_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ILayer::clearSelection();
					}
					else
					{
						pObjectX->clearSelection();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1clearSelection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_clearSelection_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"clearSelection_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_clearSelection_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ILayer::clearSelection();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_setLayerSelection_1ILayerSelection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong selection_j)
				{
					EarthView::World::Spatial::Atlas::ILayerSelection *selection = (EarthView::World::Spatial::Atlas::ILayerSelection*) selection_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ILayer::setLayerSelection(selection);
					}
					else
					{
						pObjectX->setLayerSelection(selection);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1setLayerSelection_1ILayerSelection(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setLayerSelection_ILayerSelection_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setLayerSelection_ILayerSelection_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_setLayerSelection_1ILayerSelection_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong selection_j)
				{
					EarthView::World::Spatial::Atlas::ILayerSelection *selection = (EarthView::World::Spatial::Atlas::ILayerSelection*) selection_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ILayer::setLayerSelection(selection);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_getLayerSelection_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::getLayerSelection();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* __values1 = pObjectX->getLayerSelection();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1getLayerSelection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getLayerSelection_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getLayerSelection_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_getLayerSelection_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayerSelection* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::getLayerSelection();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ILayer::setName(name);
					}
					else
					{
						pObjectX->setName(name);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1setName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_setName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ILayer::setName(name);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_getDescription_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::getDescription();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1getDescription_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_getDescription_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::getDescription();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_setDescription_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
					const EVString value = value_ch;
					__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
					#else
					const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
					const EVString value = value_ch;
					__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
					#endif
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ILayer::setDescription(value);
					}
					else
					{
						pObjectX->setDescription(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1setDescription_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_setDescription_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring value_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
					const EVString value = value_ch;
					__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
					#else
					const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
					const EVString value = value_ch;
					__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
					#endif
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ILayer::setDescription(value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_canEdit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::canEdit();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->canEdit();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1canEdit_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_canEdit_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"canEdit_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_canEdit_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::canEdit();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_setCanEdit_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean can_j)
				{
					ev_bool can = (ev_bool) can_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ILayer::setCanEdit(can);
					}
					else
					{
						pObjectX->setCanEdit(can);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1setCanEdit_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setCanEdit_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setCanEdit_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_setCanEdit_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean can_j)
				{
					ev_bool can = (ev_bool) can_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ILayer::setCanEdit(can);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_isEditing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::isEditing();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isEditing();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1isEditing_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_isEditing_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::isEditing();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_setEditing_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean editing_j)
				{
					ev_bool editing = (ev_bool) editing_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ILayer::setEditing(editing);
					}
					else
					{
						pObjectX->setEditing(editing);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1setEditing_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setEditing_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setEditing_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_setEditing_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean editing_j)
				{
					ev_bool editing = (ev_bool) editing_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ILayer::setEditing(editing);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_isVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::isVisible();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isVisible();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1isVisible_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isVisible_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isVisible_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_isVisible_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::isVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ILayer::setVisible(visible);
					}
					else
					{
						pObjectX->setVisible(visible);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1setVisible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_setVisible_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ILayer::setVisible(visible);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_isValid_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::isValid();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isValid();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1isValid_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isValid_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isValid_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_isValid_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::isValid();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_isSelectable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::isSelectable();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isSelectable();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1isSelectable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isSelectable_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isSelectable_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_isSelectable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::isSelectable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_setSelectable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean selectable_j)
				{
					ev_bool selectable = (ev_bool) selectable_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ILayer::setSelectable(selectable);
					}
					else
					{
						pObjectX->setSelectable(selectable);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1setSelectable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSelectable_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSelectable_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_setSelectable_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean selectable_j)
				{
					ev_bool selectable = (ev_bool) selectable_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ILayer::setSelectable(selectable);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_ignoreScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::ignoreScale();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->ignoreScale();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1ignoreScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ignoreScale_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ignoreScale_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_ignoreScale_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::ignoreScale();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_setIgnoreScale_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bIgnore_j)
				{
					ev_bool bIgnore = (ev_bool) bIgnore_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ILayer::setIgnoreScale(bIgnore);
					}
					else
					{
						pObjectX->setIgnoreScale(bIgnore);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1setIgnoreScale_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setIgnoreScale_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setIgnoreScale_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_setIgnoreScale_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bIgnore_j)
				{
					ev_bool bIgnore = (ev_bool) bIgnore_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ILayer::setIgnoreScale(bIgnore);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_getDisplayMaxScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::getDisplayMaxScale();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getDisplayMaxScale();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1getDisplayMaxScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDisplayMaxScale_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDisplayMaxScale_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_getDisplayMaxScale_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::getDisplayMaxScale();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_setDisplayMaxScale_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scale_j)
				{
					ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ILayer::setDisplayMaxScale(scale);
					}
					else
					{
						pObjectX->setDisplayMaxScale(scale);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1setDisplayMaxScale_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDisplayMaxScale_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDisplayMaxScale_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_setDisplayMaxScale_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scale_j)
				{
					ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ILayer::setDisplayMaxScale(scale);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_getDisplayMinScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::getDisplayMinScale();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getDisplayMinScale();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1getDisplayMinScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDisplayMinScale_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDisplayMinScale_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_getDisplayMinScale_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::getDisplayMinScale();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_setDisplayMinScale_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scale_j)
				{
					ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ILayer::setDisplayMinScale(scale);
					}
					else
					{
						pObjectX->setDisplayMinScale(scale);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1setDisplayMinScale_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDisplayMinScale_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDisplayMinScale_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_setDisplayMinScale_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scale_j)
				{
					ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ILayer::setDisplayMinScale(scale);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_getSpatialReference_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::getSpatialReference();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->getSpatialReference();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1getSpatialReference_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSpatialReference_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSpatialReference_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_getSpatialReference_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::getSpatialReference();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_setSpatialReference_1ISpatialReference(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_sr_j)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference *ref_sr = (EarthView::World::Spatial::Geometry::ISpatialReference*) ref_sr_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ILayer::setSpatialReference(ref_sr);
					}
					else
					{
						pObjectX->setSpatialReference(ref_sr);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1setSpatialReference_1ISpatialReference(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSpatialReference_ISpatialReference_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSpatialReference_ISpatialReference_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_setSpatialReference_1ISpatialReference_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_sr_j)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference *ref_sr = (EarthView::World::Spatial::Geometry::ISpatialReference*) ref_sr_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ILayer::setSpatialReference(ref_sr);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_setTransparentValue_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort transparent_j)
				{
					ev_uint8 transparent = (ev_uint8) transparent_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ILayer::setTransparentValue(transparent);
					}
					else
					{
						pObjectX->setTransparentValue(transparent);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1setTransparentValue_1ev_1uint8(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setTransparentValue_ev_uint8_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setTransparentValue_ev_uint8_callback", "(S)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_setTransparentValue_1ev_1uint8_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort transparent_j)
				{
					ev_uint8 transparent = (ev_uint8) transparent_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ILayer::setTransparentValue(transparent);
				}
				extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_getTransparentValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						ev_uint8 __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::getTransparentValue();
						jshort __values1_j = (jshort) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint8 __values1 = pObjectX->getTransparentValue();
						jshort __values1_j = (jshort) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1getTransparentValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getTransparentValue_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getTransparentValue_void_callback", "()S");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_getTransparentValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					ev_uint8 __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::getTransparentValue();
					jshort __values1_j = (jshort) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_getExtent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::getExtent();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getExtent();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1getExtent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getExtent_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getExtent_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_getExtent_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::getExtent();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_draw_1ISpatialDisplay_1EVVectorLayerRendererType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jint type_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type = (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType) type_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::draw(display, type);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->draw(display, type);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1draw_1ISpatialDisplay_1EVVectorLayerRendererType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_draw_ISpatialDisplay_EVVectorLayerRendererType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"draw_ISpatialDisplay_EVVectorLayerRendererType_callback", "(JI)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_draw_1ISpatialDisplay_1EVVectorLayerRendererType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jint type_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type = (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType) type_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::draw(display, type);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_clone_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ILayer::toStream(stream);
					}
					else
					{
						pObjectX->toStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toStream_CDataStream_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_toStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ILayer::toStream(stream);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_toXML_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::toXML();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->toXML();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1toXML_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toXML_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toXML_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_toXML_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::toXML();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ILayer::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_fromXmlElement_CXmlElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"fromXmlElement_CXmlElement_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ILayer::fromXmlElement(element);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::toXmlElement();
						EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->toXmlElement();
						EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_toXmlElement_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"toXmlElement_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_toXmlElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayer::toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_fromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerProxy))
					{
						pObjectX->EarthView::World::Spatial::Atlas::ILayer::fromStream(stream);
					}
					else
					{
						pObjectX->fromStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_register_1fromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerProxy *pObjectX = (JILayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_fromStream_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"fromStream_CDataStream_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayer_fromStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Atlas::ILayer *pObjectX = (EarthView::World::Spatial::Atlas::ILayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Atlas::ILayer::fromStream(stream);
				}
				class JILayerFactoryProxy : public EarthView::World::Spatial::Atlas::ILayerFactory
				{
				 private:
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_createInstance_void_callback;
					EarthView::World::Core::ev_string m_createInstance_EVString_callback;
					EarthView::World::Core::ev_string m_createInstance_CXmlElement_callback;
					EarthView::World::Core::ev_string m_destroyInstance_ILayer_callback;
				public:
					JILayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : ILayerFactory(pList)
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
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
					}
					void register_createInstance_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createInstance_void_callback = __method;
					}
					void register_createInstance_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createInstance_EVString_callback = __method;
					}
					void register_createInstance_CXmlElement_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createInstance_CXmlElement_callback = __method;
					}
					void register_destroyInstance_ILayer_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_destroyInstance_ILayer_callback = __method;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if (this->_gRef != NULL && this->m_getType_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::EVLayerType __values1 = (EarthView::World::Spatial::Atlas::EVLayerType) __values1_j;
							return __values1;
						}
						else
						{
							return this->ILayerFactory::getType();
						}
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
					{
						if (this->_gRef != NULL && this->m_createInstance_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("createInstance_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::ILayer *__values1 = (EarthView::World::Spatial::Atlas::ILayer*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ILayerFactory::createInstance();
						}
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(const EVString& strXml)
					{
						if (this->_gRef != NULL && this->m_createInstance_EVString_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring strXml_wch = strXml;
							jstring strXml_j = __env->NewString((const jchar*)strXml_wch.getString(), strXml_wch.size());
							jmethodID __method = __gr->getMethod("createInstance_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , strXml_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::ILayer *__values1 = (EarthView::World::Spatial::Atlas::ILayer*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ILayerFactory::createInstance(strXml);
						}
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element)
					{
						if (this->_gRef != NULL && this->m_createInstance_CXmlElement_callback != "" && this->isCustomExtend())
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
							jlong element_j = (jlong) &element;
							jmethodID __method = __gr->getMethod("createInstance_CXmlElement_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , element_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Atlas::ILayer *__values1 = (EarthView::World::Spatial::Atlas::ILayer*) __values1_j;
							return __values1;
						}
						else
						{
							return this->ILayerFactory::createInstance(element);
						}
					}
					virtual ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if (this->_gRef != NULL && this->m_destroyInstance_ILayer_callback != "" && this->isCustomExtend())
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
							jlong layer_j = (jlong) layer;
							jmethodID __method = __gr->getMethod("destroyInstance_ILayer_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , layer_j);
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
							return this->ILayerFactory::destroyInstance(layer);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JILayerFactoryProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_atlas_Ilayerfactory_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayerFactory *pObjectX = (EarthView::World::Spatial::Atlas::ILayerFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerFactoryProxy))
					{
						EarthView::World::Spatial::Atlas::EVLayerType __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayerFactory::getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType __values1 = pObjectX->getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayerfactory_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerFactoryProxy *pObjectX = (JILayerFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_atlas_Ilayerfactory_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Atlas::ILayerFactory *pObjectX = (EarthView::World::Spatial::Atlas::ILayerFactory*) pObjXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayerFactory::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ilayerfactory_createInstance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::ILayerFactory *pObjectX = (EarthView::World::Spatial::Atlas::ILayerFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerFactoryProxy))
					{
						EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayerFactory::createInstance();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->createInstance();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayerfactory_register_1createInstance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerFactoryProxy *pObjectX = (JILayerFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createInstance_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createInstance_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ilayerfactory_createInstance_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::ILayerFactory *pObjectX = (EarthView::World::Spatial::Atlas::ILayerFactory*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayerFactory::createInstance();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ilayerfactory_createInstance_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strXml_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strXml_ch = (const ev_char*)__env->GetStringUTFChars(strXml_j,JNI_FALSE);
					const EVString strXml = strXml_ch;
					__env->ReleaseStringUTFChars(strXml_j, (const char *)strXml_ch);
					#else
					const ev_wchar* strXml_ch = (const ev_wchar*)__env->GetStringChars(strXml_j,JNI_FALSE);
					const EVString strXml = strXml_ch;
					__env->ReleaseStringChars(strXml_j, (const jchar *)strXml_ch);
					#endif
					EarthView::World::Spatial::Atlas::ILayerFactory *pObjectX = (EarthView::World::Spatial::Atlas::ILayerFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerFactoryProxy))
					{
						EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayerFactory::createInstance(strXml);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->createInstance(strXml);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayerfactory_register_1createInstance_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerFactoryProxy *pObjectX = (JILayerFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createInstance_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createInstance_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ilayerfactory_createInstance_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strXml_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strXml_ch = (const ev_char*)__env->GetStringUTFChars(strXml_j,JNI_FALSE);
					const EVString strXml = strXml_ch;
					__env->ReleaseStringUTFChars(strXml_j, (const char *)strXml_ch);
					#else
					const ev_wchar* strXml_ch = (const ev_wchar*)__env->GetStringChars(strXml_j,JNI_FALSE);
					const EVString strXml = strXml_ch;
					__env->ReleaseStringChars(strXml_j, (const jchar *)strXml_ch);
					#endif
					EarthView::World::Spatial::Atlas::ILayerFactory *pObjectX = (EarthView::World::Spatial::Atlas::ILayerFactory*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayerFactory::createInstance(strXml);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ilayerfactory_createInstance_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Atlas::ILayerFactory *pObjectX = (EarthView::World::Spatial::Atlas::ILayerFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerFactoryProxy))
					{
						EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayerFactory::createInstance(element);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->createInstance(element);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayerfactory_register_1createInstance_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerFactoryProxy *pObjectX = (JILayerFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createInstance_CXmlElement_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createInstance_CXmlElement_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_Ilayerfactory_createInstance_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial::Atlas::ILayerFactory *pObjectX = (EarthView::World::Spatial::Atlas::ILayerFactory*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayerFactory::createInstance(element);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ilayerfactory_destroyInstance_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial::Atlas::ILayerFactory *pObjectX = (EarthView::World::Spatial::Atlas::ILayerFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JILayerFactoryProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayerFactory::destroyInstance(layer);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->destroyInstance(layer);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_Ilayerfactory_register_1destroyInstance_1ILayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JILayerFactoryProxy *pObjectX = (JILayerFactoryProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_destroyInstance_ILayer_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"destroyInstance_ILayer_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_Ilayerfactory_destroyInstance_1ILayer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial::Atlas::ILayerFactory *pObjectX = (EarthView::World::Spatial::Atlas::ILayerFactory*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Atlas::ILayerFactory::destroyInstance(layer);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_LayerFactoryEnumerator_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator* __values1 = EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator::getSingletonPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_LayerFactoryEnumerator_getSingleton_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator& __values1 = EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator::getSingleton();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerFactoryEnumerator_releaseSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator::releaseSingletonPtr();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_LayerFactoryEnumerator_existLayerFactory_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint layerType_j)
				{
					ev_int32 layerType = (ev_int32) layerType_j;
					EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator *pObjectX = (EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator*) pObjXXXX;
					ev_bool __values1 = pObjectX->existLayerFactory(layerType);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_atlas_LayerFactoryEnumerator_getLayerFactory_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint layerType_j)
				{
					ev_int32 layerType = (ev_int32) layerType_j;
					EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator *pObjectX = (EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayerFactory* __values1 = pObjectX->getLayerFactory(layerType);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_LayerFactoryEnumerator_addLayerFactory_1ILayerFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_factory_j)
				{
					EarthView::World::Spatial::Atlas::ILayerFactory *ref_factory = (EarthView::World::Spatial::Atlas::ILayerFactory*) ref_factory_j;
					EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator *pObjectX = (EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator*) pObjXXXX;
					ev_bool __values1 = pObjectX->addLayerFactory(ref_factory);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_LayerFactoryEnumerator_removeLayerFactory_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint layerType_j)
				{
					ev_int32 layerType = (ev_int32) layerType_j;
					EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator *pObjectX = (EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeLayerFactory(layerType);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_atlas_LayerFactoryEnumerator_removeLayerFactory_1ILayerFactory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong factory_j)
				{
					EarthView::World::Spatial::Atlas::ILayerFactory *factory = (EarthView::World::Spatial::Atlas::ILayerFactory*) factory_j;
					EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator *pObjectX = (EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeLayerFactory(factory);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_atlas_LayerFactoryEnumerator_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator *pObjectX = (EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator*) pObjXXXX;
					pObjectX->clear();
				}
			}
		}
	}
}
