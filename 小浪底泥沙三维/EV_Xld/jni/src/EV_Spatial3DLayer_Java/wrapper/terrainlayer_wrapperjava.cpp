/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dlayer/terrainlayer.h"
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
			namespace Utility
			{
			}
		}
		namespace Spatial3D
		{
			namespace Atlas
			{
				class JCTerrainLayerProxy : public EarthView::World::Spatial3D::Atlas::CTerrainLayer
				{
				 private:
					EarthView::World::Core::ev_string m_getHeightAt_ev_real64_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_real64_callback;
					EarthView::World::Core::ev_string m_getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_callback;
					EarthView::World::Core::ev_string m_getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64_callback;
					EarthView::World::Core::ev_string m_getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_callback;
					EarthView::World::Core::ev_string m_getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_getBestHeightAt_ev_real64_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_getTerrain_ev_int32_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_getTerrainFromMemoryCache_ev_int32_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_getTerrainFromDBCache_ev_int32_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_getTerrainFromServer_ev_int32_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_getMaxLevel_void_callback;
					EarthView::World::Core::ev_string m_getMinLevel_void_callback;
					EarthView::World::Core::ev_string m_setMaxLevel_ev_int32_callback;
					EarthView::World::Core::ev_string m_setMinLevel_ev_int32_callback;
					EarthView::World::Core::ev_string m_getSrs_void_callback;
					EarthView::World::Core::ev_string m_getSceneName_void_callback;
					EarthView::World::Core::ev_string m_getMinX_void_callback;
					EarthView::World::Core::ev_string m_getMaxX_void_callback;
					EarthView::World::Core::ev_string m_getMinY_void_callback;
					EarthView::World::Core::ev_string m_getMaxY_void_callback;
					EarthView::World::Core::ev_string m_getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32_callback;
					EarthView::World::Core::ev_string m__notifyLayerAdd_CSceneManager_callback;
					EarthView::World::Core::ev_string m__notifyLayerRemoved_CSceneManager_callback;
					EarthView::World::Core::ev_string m__notifyRefreshed_CCamera_LayerRefreshFactor_callback;
					EarthView::World::Core::ev_string m__notifyRefreshed_CCamera_callback;
					EarthView::World::Core::ev_string m__notifyDataChanged_EVString_EVString_CEvent_callback;
					EarthView::World::Core::ev_string m_getSceneManager_void_callback;
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
					JCTerrainLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CTerrainLayer(pList)
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
					void register_getHeightAt_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getHeightAt_ev_real64_ev_real64_ev_real64_callback = __method;
					}
					void register_getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_real64_callback = __method;
					}
					void register_getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_callback = __method;
					}
					void register_getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
					}
					void register_getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64_callback = __method;
					}
					void register_getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_callback = __method;
					}
					void register_getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
					}
					void register_getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64_callback = __method;
					}
					void register_getBestHeightAt_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBestHeightAt_ev_real64_ev_real64_ev_real64_callback = __method;
					}
					void register_getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
					}
					void register_getTerrain_ev_int32_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getTerrain_ev_int32_ev_int32_ev_int32_callback = __method;
					}
					void register_getTerrainFromMemoryCache_ev_int32_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getTerrainFromMemoryCache_ev_int32_ev_int32_ev_int32_callback = __method;
					}
					void register_getTerrainFromDBCache_ev_int32_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getTerrainFromDBCache_ev_int32_ev_int32_ev_int32_callback = __method;
					}
					void register_getTerrainFromServer_ev_int32_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getTerrainFromServer_ev_int32_ev_int32_ev_int32_callback = __method;
					}
					void register_getMaxLevel_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMaxLevel_void_callback = __method;
					}
					void register_getMinLevel_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMinLevel_void_callback = __method;
					}
					void register_setMaxLevel_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setMaxLevel_ev_int32_callback = __method;
					}
					void register_setMinLevel_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setMinLevel_ev_int32_callback = __method;
					}
					void register_getSrs_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSrs_void_callback = __method;
					}
					void register_getSceneName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSceneName_void_callback = __method;
					}
					void register_getMinX_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMinX_void_callback = __method;
					}
					void register_getMaxX_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMaxX_void_callback = __method;
					}
					void register_getMinY_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMinY_void_callback = __method;
					}
					void register_getMaxY_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMaxY_void_callback = __method;
					}
					void register_getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32_callback = __method;
					}
					void register__notifyLayerAdd_CSceneManager_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__notifyLayerAdd_CSceneManager_callback = __method;
					}
					void register__notifyLayerRemoved_CSceneManager_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__notifyLayerRemoved_CSceneManager_callback = __method;
					}
					void register__notifyRefreshed_CCamera_LayerRefreshFactor_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__notifyRefreshed_CCamera_LayerRefreshFactor_callback = __method;
					}
					void register__notifyRefreshed_CCamera_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__notifyRefreshed_CCamera_callback = __method;
					}
					void register__notifyDataChanged_EVString_EVString_CEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__notifyDataChanged_EVString_EVString_CEvent_callback = __method;
					}
					void register_getSceneManager_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSceneManager_void_callback = __method;
					}
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
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, ev_real64& altitude)
					{
						if (this->_gRef != NULL && this->m_getHeightAt_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble latitude_j = (jdouble) latitude;
							jdouble longitude_j = (jdouble) longitude;
							jlong altitude_j = (jlong) &altitude;
							jmethodID __method = __gr->getMethod("getHeightAt_ev_real64_ev_real64_ev_real64_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , latitude_j, longitude_j, altitude_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = (EarthView::World::Spatial3D::Atlas::AltitudeStatus) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTerrainLayer::getHeightAt(latitude, longitude, altitude);
						}
					}
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource source, ev_real64& altitude)
					{
						if (this->_gRef != NULL && this->m_getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble latitude_j = (jdouble) latitude;
							jdouble longitude_j = (jdouble) longitude;
							jint source_j = (jint) source;
							jlong altitude_j = (jlong) &altitude;
							jmethodID __method = __gr->getMethod("getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_real64_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , latitude_j, longitude_j, source_j, altitude_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = (EarthView::World::Spatial3D::Atlas::AltitudeStatus) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTerrainLayer::getHeightAt(latitude, longitude, source, altitude);
						}
					}
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource source, ev_int32 maxLivel, ev_real64& altitude)
					{
						if (this->_gRef != NULL && this->m_getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble latitude_j = (jdouble) latitude;
							jdouble longitude_j = (jdouble) longitude;
							jint source_j = (jint) source;
							jint maxLivel_j = (jint) maxLivel;
							jlong altitude_j = (jlong) &altitude;
							jmethodID __method = __gr->getMethod("getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , latitude_j, longitude_j, source_j, maxLivel_j, altitude_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = (EarthView::World::Spatial3D::Atlas::AltitudeStatus) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTerrainLayer::getHeightAt(latitude, longitude, source, maxLivel, altitude);
						}
					}
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, ev_real64 targetSamplesPerDegrees, ev_real64& altitude)
					{
						if (this->_gRef != NULL && this->m_getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble latitude_j = (jdouble) latitude;
							jdouble longitude_j = (jdouble) longitude;
							jdouble targetSamplesPerDegrees_j = (jdouble) targetSamplesPerDegrees;
							jlong altitude_j = (jlong) &altitude;
							jmethodID __method = __gr->getMethod("getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , latitude_j, longitude_j, targetSamplesPerDegrees_j, altitude_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = (EarthView::World::Spatial3D::Atlas::AltitudeStatus) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTerrainLayer::getHeightAt(latitude, longitude, targetSamplesPerDegrees, altitude);
						}
					}
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, ev_real64 targetSamplesPerDegrees, EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource source, ev_real64& altitude)
					{
						if (this->_gRef != NULL && this->m_getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble latitude_j = (jdouble) latitude;
							jdouble longitude_j = (jdouble) longitude;
							jdouble targetSamplesPerDegrees_j = (jdouble) targetSamplesPerDegrees;
							jint source_j = (jint) source;
							jlong altitude_j = (jlong) &altitude;
							jmethodID __method = __gr->getMethod("getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , latitude_j, longitude_j, targetSamplesPerDegrees_j, source_j, altitude_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = (EarthView::World::Spatial3D::Atlas::AltitudeStatus) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTerrainLayer::getHeightAt(latitude, longitude, targetSamplesPerDegrees, source, altitude);
						}
					}
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, ev_real64 targetSamplesPerDegrees, EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource source, ev_int32 maxLivel, ev_real64& altitude)
					{
						if (this->_gRef != NULL && this->m_getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble latitude_j = (jdouble) latitude;
							jdouble longitude_j = (jdouble) longitude;
							jdouble targetSamplesPerDegrees_j = (jdouble) targetSamplesPerDegrees;
							jint source_j = (jint) source;
							jint maxLivel_j = (jint) maxLivel;
							jlong altitude_j = (jlong) &altitude;
							jmethodID __method = __gr->getMethod("getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , latitude_j, longitude_j, targetSamplesPerDegrees_j, source_j, maxLivel_j, altitude_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = (EarthView::World::Spatial3D::Atlas::AltitudeStatus) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTerrainLayer::getHeightAt(latitude, longitude, targetSamplesPerDegrees, source, maxLivel, altitude);
						}
					}
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, ev_real64 targetSamplesPerDegrees, ev_real64 preTileResolution, ev_real64& altitude, ev_real64& tileResolution)
					{
						if (this->_gRef != NULL && this->m_getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble latitude_j = (jdouble) latitude;
							jdouble longitude_j = (jdouble) longitude;
							jdouble targetSamplesPerDegrees_j = (jdouble) targetSamplesPerDegrees;
							jdouble preTileResolution_j = (jdouble) preTileResolution;
							jlong altitude_j = (jlong) &altitude;
							jlong tileResolution_j = (jlong) &tileResolution;
							jmethodID __method = __gr->getMethod("getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , latitude_j, longitude_j, targetSamplesPerDegrees_j, preTileResolution_j, altitude_j, tileResolution_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = (EarthView::World::Spatial3D::Atlas::AltitudeStatus) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTerrainLayer::getHeightAt(latitude, longitude, targetSamplesPerDegrees, preTileResolution, altitude, tileResolution);
						}
					}
					virtual EarthView::World::Spatial3D::Atlas::AltitudeStatus getHeightAt(ev_real64 latitude, ev_real64 longitude, ev_real64 targetSamplesPerDegrees, ev_real64 preTileResolution, EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource source, ev_int32 maxLivel, ev_real64& altitude, ev_real64& tileResolution)
					{
						if (this->_gRef != NULL && this->m_getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble latitude_j = (jdouble) latitude;
							jdouble longitude_j = (jdouble) longitude;
							jdouble targetSamplesPerDegrees_j = (jdouble) targetSamplesPerDegrees;
							jdouble preTileResolution_j = (jdouble) preTileResolution;
							jint source_j = (jint) source;
							jint maxLivel_j = (jint) maxLivel;
							jlong altitude_j = (jlong) &altitude;
							jlong tileResolution_j = (jlong) &tileResolution;
							jmethodID __method = __gr->getMethod("getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , latitude_j, longitude_j, targetSamplesPerDegrees_j, preTileResolution_j, source_j, maxLivel_j, altitude_j, tileResolution_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = (EarthView::World::Spatial3D::Atlas::AltitudeStatus) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTerrainLayer::getHeightAt(latitude, longitude, targetSamplesPerDegrees, preTileResolution, source, maxLivel, altitude, tileResolution);
						}
					}
					virtual ev_bool getBestHeightAt(ev_real64 latitude, ev_real64 longitude, ev_real64& altitude)
					{
						if (this->_gRef != NULL && this->m_getBestHeightAt_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble latitude_j = (jdouble) latitude;
							jdouble longitude_j = (jdouble) longitude;
							jlong altitude_j = (jlong) &altitude;
							jmethodID __method = __gr->getMethod("getBestHeightAt_ev_real64_ev_real64_ev_real64_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , latitude_j, longitude_j, altitude_j);
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
							return this->CTerrainLayer::getBestHeightAt(latitude, longitude, altitude);
						}
					}
					virtual ev_bool getBestHeightAt(ev_real64 latitude, ev_real64 longitude, ev_real64 preTileResolution, ev_real64& altitude, ev_real64& tileResolution)
					{
						if (this->_gRef != NULL && this->m_getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
							jdouble latitude_j = (jdouble) latitude;
							jdouble longitude_j = (jdouble) longitude;
							jdouble preTileResolution_j = (jdouble) preTileResolution;
							jlong altitude_j = (jlong) &altitude;
							jlong tileResolution_j = (jlong) &tileResolution;
							jmethodID __method = __gr->getMethod("getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , latitude_j, longitude_j, preTileResolution_j, altitude_j, tileResolution_j);
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
							return this->CTerrainLayer::getBestHeightAt(latitude, longitude, preTileResolution, altitude, tileResolution);
						}
					}
					virtual EarthView::World::Core::MemoryDataStreamPtr getTerrain(ev_int32 row, ev_int32 col, ev_int32 level)
					{
						if (this->_gRef != NULL && this->m_getTerrain_ev_int32_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
							jint row_j = (jint) row;
							jint col_j = (jint) col;
							jint level_j = (jint) level;
							jmethodID __method = __gr->getMethod("getTerrain_ev_int32_ev_int32_ev_int32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , row_j, col_j, level_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::MemoryDataStreamPtr __values1 = *(EarthView::World::Core::MemoryDataStreamPtr*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTerrainLayer::getTerrain(row, col, level);
						}
					}
					virtual EarthView::World::Core::MemoryDataStreamPtr getTerrainFromMemoryCache(ev_int32 row, ev_int32 col, ev_int32 level)
					{
						if (this->_gRef != NULL && this->m_getTerrainFromMemoryCache_ev_int32_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
							jint row_j = (jint) row;
							jint col_j = (jint) col;
							jint level_j = (jint) level;
							jmethodID __method = __gr->getMethod("getTerrainFromMemoryCache_ev_int32_ev_int32_ev_int32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , row_j, col_j, level_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::MemoryDataStreamPtr __values1 = *(EarthView::World::Core::MemoryDataStreamPtr*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTerrainLayer::getTerrainFromMemoryCache(row, col, level);
						}
					}
					virtual EarthView::World::Core::MemoryDataStreamPtr getTerrainFromDBCache(ev_int32 row, ev_int32 col, ev_int32 level)
					{
						if (this->_gRef != NULL && this->m_getTerrainFromDBCache_ev_int32_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
							jint row_j = (jint) row;
							jint col_j = (jint) col;
							jint level_j = (jint) level;
							jmethodID __method = __gr->getMethod("getTerrainFromDBCache_ev_int32_ev_int32_ev_int32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , row_j, col_j, level_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::MemoryDataStreamPtr __values1 = *(EarthView::World::Core::MemoryDataStreamPtr*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTerrainLayer::getTerrainFromDBCache(row, col, level);
						}
					}
					virtual EarthView::World::Core::MemoryDataStreamPtr getTerrainFromServer(ev_int32 row, ev_int32 col, ev_int32 level)
					{
						if (this->_gRef != NULL && this->m_getTerrainFromServer_ev_int32_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
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
							jint row_j = (jint) row;
							jint col_j = (jint) col;
							jint level_j = (jint) level;
							jmethodID __method = __gr->getMethod("getTerrainFromServer_ev_int32_ev_int32_ev_int32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , row_j, col_j, level_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::MemoryDataStreamPtr __values1 = *(EarthView::World::Core::MemoryDataStreamPtr*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTerrainLayer::getTerrainFromServer(row, col, level);
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
							return this->CTerrainLayer::getDataset();
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
							return this->CTerrainLayer::getDataSource();
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
							return this->CTerrainLayer::getExtent();
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
							return this->CTerrainLayer::getSpatialReference();
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
							return this->CTerrainLayer::clone();
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
							return this->CTerrainLayer::toStream(stream);
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
							return this->CTerrainLayer::toXmlElement();
						}
					}
					virtual ev_int32 getMaxLevel() const
					{
						if (this->_gRef != NULL && this->m_getMaxLevel_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMaxLevel_void_callback");
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
							return this->CTerrainLayer::getMaxLevel();
						}
					}
					virtual ev_int32 getMinLevel() const
					{
						if (this->_gRef != NULL && this->m_getMinLevel_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMinLevel_void_callback");
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
							return this->CTerrainLayer::getMinLevel();
						}
					}
					virtual void setMaxLevel(ev_int32 maxLevel)
					{
						if (this->_gRef != NULL && this->m_setMaxLevel_ev_int32_callback != "" && this->isCustomExtend())
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
							jint maxLevel_j = (jint) maxLevel;
							jmethodID __method = __gr->getMethod("setMaxLevel_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , maxLevel_j);
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
							return this->CTerrainLayer::setMaxLevel(maxLevel);
						}
					}
					virtual void setMinLevel(ev_int32 minLevel)
					{
						if (this->_gRef != NULL && this->m_setMinLevel_ev_int32_callback != "" && this->isCustomExtend())
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
							jint minLevel_j = (jint) minLevel;
							jmethodID __method = __gr->getMethod("setMinLevel_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , minLevel_j);
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
							return this->CTerrainLayer::setMinLevel(minLevel);
						}
					}
					virtual EarthView::World::Spatial3D::Atlas::LAYERSRS getSrs() const
					{
						if (this->_gRef != NULL && this->m_getSrs_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSrs_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::Atlas::LAYERSRS __values1 = (EarthView::World::Spatial3D::Atlas::LAYERSRS) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTerrainLayer::getSrs();
						}
					}
					virtual ev_real64 getMinX() const
					{
						if (this->_gRef != NULL && this->m_getMinX_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMinX_void_callback");
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
							return this->CTerrainLayer::getMinX();
						}
					}
					virtual ev_real64 getMaxX() const
					{
						if (this->_gRef != NULL && this->m_getMaxX_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMaxX_void_callback");
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
							return this->CTerrainLayer::getMaxX();
						}
					}
					virtual ev_real64 getMinY() const
					{
						if (this->_gRef != NULL && this->m_getMinY_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMinY_void_callback");
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
							return this->CTerrainLayer::getMinY();
						}
					}
					virtual ev_real64 getMaxY() const
					{
						if (this->_gRef != NULL && this->m_getMaxY_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getMaxY_void_callback");
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
							return this->CTerrainLayer::getMaxY();
						}
					}
					virtual void _notifyLayerAdd(EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if (this->_gRef != NULL && this->m__notifyLayerAdd_CSceneManager_callback != "" && this->isCustomExtend())
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
							jlong pSceneMgr_j = (jlong) pSceneMgr;
							jmethodID __method = __gr->getMethod("_notifyLayerAdd_CSceneManager_callback");
							__env->CallVoidMethod(__obj, __method , pSceneMgr_j);
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
							return this->CTerrainLayer::_notifyLayerAdd(pSceneMgr);
						}
					}
					virtual void _notifyLayerRemoved(EarthView::World::Graphic::CSceneManager* pSceneMgr)
					{
						if (this->_gRef != NULL && this->m__notifyLayerRemoved_CSceneManager_callback != "" && this->isCustomExtend())
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
							jlong pSceneMgr_j = (jlong) pSceneMgr;
							jmethodID __method = __gr->getMethod("_notifyLayerRemoved_CSceneManager_callback");
							__env->CallVoidMethod(__obj, __method , pSceneMgr_j);
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
							return this->CTerrainLayer::_notifyLayerRemoved(pSceneMgr);
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
							return this->CTerrainLayer::getName();
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
							return this->CTerrainLayer::setName(name);
						}
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
							return this->CTerrainLayer::getType();
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
							return this->CTerrainLayer::fromXmlElement(element);
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
							return this->CTerrainLayer::fromStream(stream);
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
							return this->CTerrainLayer::getDescription();
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
							return this->CTerrainLayer::setDescription(value);
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
							return this->CTerrainLayer::toXML();
						}
					}
					virtual EVString getSceneName() const
					{
						if (this->_gRef != NULL && this->m_getSceneName_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSceneName_void_callback");
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
							return this->CTerrainLayer::getSceneName();
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
							return this->CTerrainLayer::canEdit();
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
							return this->CTerrainLayer::setCanEdit(can);
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
							return this->CTerrainLayer::isEditing();
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
							return this->CTerrainLayer::setEditing(editing);
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
							return this->CTerrainLayer::isVisible();
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
							return this->CTerrainLayer::setVisible(visible);
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
							return this->CTerrainLayer::isValid();
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
							return this->CTerrainLayer::isSelectable();
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
							return this->CTerrainLayer::setSelectable(selectable);
						}
					}
					virtual void _notifyRefreshed(const EarthView::World::Graphic::CCamera* camera, EarthView::World::Spatial3D::Atlas::LayerRefreshFactor updateType)
					{
						if (this->_gRef != NULL && this->m__notifyRefreshed_CCamera_LayerRefreshFactor_callback != "" && this->isCustomExtend())
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
							jlong camera_j = (jlong) camera;
							jint updateType_j = (jint) updateType;
							jmethodID __method = __gr->getMethod("_notifyRefreshed_CCamera_LayerRefreshFactor_callback");
							__env->CallVoidMethod(__obj, __method , camera_j, updateType_j);
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
							return this->CTerrainLayer::_notifyRefreshed(camera, updateType);
						}
					}
					virtual void _notifyRefreshed(const EarthView::World::Graphic::CCamera* camera)
					{
						if (this->_gRef != NULL && this->m__notifyRefreshed_CCamera_callback != "" && this->isCustomExtend())
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
							jlong camera_j = (jlong) camera;
							jmethodID __method = __gr->getMethod("_notifyRefreshed_CCamera_callback");
							__env->CallVoidMethod(__obj, __method , camera_j);
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
							return this->CTerrainLayer::_notifyRefreshed(camera);
						}
					}
					virtual void _notifyDataChanged(const EVString& strDataSourceName, const EVString& strDatasetName, EarthView::World::Core::CEvent* pEvent)
					{
						if (this->_gRef != NULL && this->m__notifyDataChanged_EVString_EVString_CEvent_callback != "" && this->isCustomExtend())
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
							EarthView::World::Core::ev_wstring strDataSourceName_wch = strDataSourceName;
							jstring strDataSourceName_j = __env->NewString((const jchar*)strDataSourceName_wch.getString(), strDataSourceName_wch.size());
							EarthView::World::Core::ev_wstring strDatasetName_wch = strDatasetName;
							jstring strDatasetName_j = __env->NewString((const jchar*)strDatasetName_wch.getString(), strDatasetName_wch.size());
							jlong pEvent_j = (jlong) pEvent;
							jmethodID __method = __gr->getMethod("_notifyDataChanged_EVString_EVString_CEvent_callback");
							__env->CallVoidMethod(__obj, __method , strDataSourceName_j, strDatasetName_j, pEvent_j);
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
							return this->CTerrainLayer::_notifyDataChanged(strDataSourceName, strDatasetName, pEvent);
						}
					}
					virtual EarthView::World::Graphic::CSceneManager* getSceneManager() const
					{
						if (this->_gRef != NULL && this->m_getSceneManager_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("getSceneManager_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CSceneManager *__values1 = (EarthView::World::Graphic::CSceneManager*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTerrainLayer::getSceneManager();
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
							return this->CTerrainLayer::getDatasetName();
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
							return this->CTerrainLayer::select(filter, type);
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
							return this->CTerrainLayer::clearSelection();
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
							return this->CTerrainLayer::setLayerSelection(selection);
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
							return this->CTerrainLayer::getLayerSelection();
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
							return this->CTerrainLayer::ignoreScale();
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
							return this->CTerrainLayer::setIgnoreScale(bIgnore);
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
							return this->CTerrainLayer::getDisplayMaxScale();
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
							return this->CTerrainLayer::setDisplayMaxScale(scale);
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
							return this->CTerrainLayer::getDisplayMinScale();
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
							return this->CTerrainLayer::setDisplayMinScale(scale);
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
							return this->CTerrainLayer::setSpatialReference(ref_sr);
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
							return this->CTerrainLayer::setTransparentValue(transparent);
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
							return this->CTerrainLayer::getTransparentValue();
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
							return this->CTerrainLayer::draw(display, type);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCTerrainLayerProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getHeightAt_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jlong altitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getHeightAt(latitude, longitude, altitude);
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->getHeightAt(latitude, longitude, altitude);
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getHeightAt_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getHeightAt_ev_real64_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getHeightAt_ev_real64_ev_real64_ev_real64_callback", "(DDJ)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jlong altitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getHeightAt(latitude, longitude, altitude);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getHeightAt_1ev_1real64_1ev_1real64_1TerrainDataSource_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jint source_j, jlong altitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource source = (EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource) source_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getHeightAt(latitude, longitude, source, altitude);
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->getHeightAt(latitude, longitude, source, altitude);
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getHeightAt_1ev_1real64_1ev_1real64_1TerrainDataSource_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_real64_callback", "(DDIJ)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getHeightAt_1ev_1real64_1ev_1real64_1TerrainDataSource_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jint source_j, jlong altitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource source = (EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource) source_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getHeightAt(latitude, longitude, source, altitude);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getHeightAt_1ev_1real64_1ev_1real64_1TerrainDataSource_1ev_1int32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jint source_j, jint maxLivel_j, jlong altitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource source = (EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource) source_j;
					ev_int32 maxLivel = (ev_int32) maxLivel_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getHeightAt(latitude, longitude, source, maxLivel, altitude);
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->getHeightAt(latitude, longitude, source, maxLivel, altitude);
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getHeightAt_1ev_1real64_1ev_1real64_1TerrainDataSource_1ev_1int32_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getHeightAt_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_callback", "(DDIIJ)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getHeightAt_1ev_1real64_1ev_1real64_1TerrainDataSource_1ev_1int32_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jint source_j, jint maxLivel_j, jlong altitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource source = (EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource) source_j;
					ev_int32 maxLivel = (ev_int32) maxLivel_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getHeightAt(latitude, longitude, source, maxLivel, altitude);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jdouble targetSamplesPerDegrees_j, jlong altitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 targetSamplesPerDegrees = (ev_real64) targetSamplesPerDegrees_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getHeightAt(latitude, longitude, targetSamplesPerDegrees, altitude);
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->getHeightAt(latitude, longitude, targetSamplesPerDegrees, altitude);
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_callback", "(DDDJ)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jdouble targetSamplesPerDegrees_j, jlong altitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 targetSamplesPerDegrees = (ev_real64) targetSamplesPerDegrees_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getHeightAt(latitude, longitude, targetSamplesPerDegrees, altitude);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1TerrainDataSource_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jdouble targetSamplesPerDegrees_j, jint source_j, jlong altitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 targetSamplesPerDegrees = (ev_real64) targetSamplesPerDegrees_j;
					EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource source = (EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource) source_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getHeightAt(latitude, longitude, targetSamplesPerDegrees, source, altitude);
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->getHeightAt(latitude, longitude, targetSamplesPerDegrees, source, altitude);
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1TerrainDataSource_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_real64_callback", "(DDDIJ)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1TerrainDataSource_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jdouble targetSamplesPerDegrees_j, jint source_j, jlong altitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 targetSamplesPerDegrees = (ev_real64) targetSamplesPerDegrees_j;
					EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource source = (EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource) source_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getHeightAt(latitude, longitude, targetSamplesPerDegrees, source, altitude);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1TerrainDataSource_1ev_1int32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jdouble targetSamplesPerDegrees_j, jint source_j, jint maxLivel_j, jlong altitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 targetSamplesPerDegrees = (ev_real64) targetSamplesPerDegrees_j;
					EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource source = (EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource) source_j;
					ev_int32 maxLivel = (ev_int32) maxLivel_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getHeightAt(latitude, longitude, targetSamplesPerDegrees, source, maxLivel, altitude);
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->getHeightAt(latitude, longitude, targetSamplesPerDegrees, source, maxLivel, altitude);
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1TerrainDataSource_1ev_1int32_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getHeightAt_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_callback", "(DDDIIJ)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1TerrainDataSource_1ev_1int32_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jdouble targetSamplesPerDegrees_j, jint source_j, jint maxLivel_j, jlong altitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 targetSamplesPerDegrees = (ev_real64) targetSamplesPerDegrees_j;
					EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource source = (EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource) source_j;
					ev_int32 maxLivel = (ev_int32) maxLivel_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getHeightAt(latitude, longitude, targetSamplesPerDegrees, source, maxLivel, altitude);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jdouble targetSamplesPerDegrees_j, jdouble preTileResolution_j, jlong altitude_j, jlong tileResolution_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 targetSamplesPerDegrees = (ev_real64) targetSamplesPerDegrees_j;
					ev_real64 preTileResolution = (ev_real64) preTileResolution_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					ev_real64 &tileResolution = *(ev_real64*) tileResolution_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getHeightAt(latitude, longitude, targetSamplesPerDegrees, preTileResolution, altitude, tileResolution);
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->getHeightAt(latitude, longitude, targetSamplesPerDegrees, preTileResolution, altitude, tileResolution);
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback", "(DDDDJJ)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jdouble targetSamplesPerDegrees_j, jdouble preTileResolution_j, jlong altitude_j, jlong tileResolution_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 targetSamplesPerDegrees = (ev_real64) targetSamplesPerDegrees_j;
					ev_real64 preTileResolution = (ev_real64) preTileResolution_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					ev_real64 &tileResolution = *(ev_real64*) tileResolution_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getHeightAt(latitude, longitude, targetSamplesPerDegrees, preTileResolution, altitude, tileResolution);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1TerrainDataSource_1ev_1int32_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jdouble targetSamplesPerDegrees_j, jdouble preTileResolution_j, jint source_j, jint maxLivel_j, jlong altitude_j, jlong tileResolution_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 targetSamplesPerDegrees = (ev_real64) targetSamplesPerDegrees_j;
					ev_real64 preTileResolution = (ev_real64) preTileResolution_j;
					EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource source = (EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource) source_j;
					ev_int32 maxLivel = (ev_int32) maxLivel_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					ev_real64 &tileResolution = *(ev_real64*) tileResolution_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getHeightAt(latitude, longitude, targetSamplesPerDegrees, preTileResolution, source, maxLivel, altitude, tileResolution);
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->getHeightAt(latitude, longitude, targetSamplesPerDegrees, preTileResolution, source, maxLivel, altitude, tileResolution);
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1TerrainDataSource_1ev_1int32_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_TerrainDataSource_ev_int32_ev_real64_ev_real64_callback", "(DDDDIIJJ)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1TerrainDataSource_1ev_1int32_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jdouble targetSamplesPerDegrees_j, jdouble preTileResolution_j, jint source_j, jint maxLivel_j, jlong altitude_j, jlong tileResolution_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 targetSamplesPerDegrees = (ev_real64) targetSamplesPerDegrees_j;
					ev_real64 preTileResolution = (ev_real64) preTileResolution_j;
					EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource source = (EarthView::World::Spatial3D::Atlas::ITerrainLayer::TerrainDataSource) source_j;
					ev_int32 maxLivel = (ev_int32) maxLivel_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					ev_real64 &tileResolution = *(ev_real64*) tileResolution_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::AltitudeStatus __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getHeightAt(latitude, longitude, targetSamplesPerDegrees, preTileResolution, source, maxLivel, altitude, tileResolution);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getBestHeightAt_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jlong altitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getBestHeightAt(latitude, longitude, altitude);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getBestHeightAt(latitude, longitude, altitude);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getBestHeightAt_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBestHeightAt_ev_real64_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBestHeightAt_ev_real64_ev_real64_ev_real64_callback", "(DDJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getBestHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jlong altitude_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getBestHeightAt(latitude, longitude, altitude);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getBestHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jdouble preTileResolution_j, jlong altitude_j, jlong tileResolution_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 preTileResolution = (ev_real64) preTileResolution_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					ev_real64 &tileResolution = *(ev_real64*) tileResolution_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getBestHeightAt(latitude, longitude, preTileResolution, altitude, tileResolution);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getBestHeightAt(latitude, longitude, preTileResolution, altitude, tileResolution);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getBestHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBestHeightAt_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback", "(DDDJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getBestHeightAt_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j, jdouble longitude_j, jdouble preTileResolution_j, jlong altitude_j, jlong tileResolution_j)
				{
					ev_real64 latitude = (ev_real64) latitude_j;
					ev_real64 longitude = (ev_real64) longitude_j;
					ev_real64 preTileResolution = (ev_real64) preTileResolution_j;
					ev_real64 &altitude = *(ev_real64*) altitude_j;
					ev_real64 &tileResolution = *(ev_real64*) tileResolution_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getBestHeightAt(latitude, longitude, preTileResolution, altitude, tileResolution);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getTerrain_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint row_j, jint col_j, jint level_j)
				{
					ev_int32 row = (ev_int32) row_j;
					ev_int32 col = (ev_int32) col_j;
					ev_int32 level = (ev_int32) level_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getTerrain(row, col, level);
						EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->getTerrain(row, col, level);
						EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getTerrain_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getTerrain_ev_int32_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getTerrain_ev_int32_ev_int32_ev_int32_callback", "(III)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getTerrain_1ev_1int32_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint row_j, jint col_j, jint level_j)
				{
					ev_int32 row = (ev_int32) row_j;
					ev_int32 col = (ev_int32) col_j;
					ev_int32 level = (ev_int32) level_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getTerrain(row, col, level);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getTerrainFromMemoryCache_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint row_j, jint col_j, jint level_j)
				{
					ev_int32 row = (ev_int32) row_j;
					ev_int32 col = (ev_int32) col_j;
					ev_int32 level = (ev_int32) level_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getTerrainFromMemoryCache(row, col, level);
						EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->getTerrainFromMemoryCache(row, col, level);
						EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getTerrainFromMemoryCache_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getTerrainFromMemoryCache_ev_int32_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getTerrainFromMemoryCache_ev_int32_ev_int32_ev_int32_callback", "(III)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getTerrainFromMemoryCache_1ev_1int32_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint row_j, jint col_j, jint level_j)
				{
					ev_int32 row = (ev_int32) row_j;
					ev_int32 col = (ev_int32) col_j;
					ev_int32 level = (ev_int32) level_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getTerrainFromMemoryCache(row, col, level);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getTerrainFromDBCache_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint row_j, jint col_j, jint level_j)
				{
					ev_int32 row = (ev_int32) row_j;
					ev_int32 col = (ev_int32) col_j;
					ev_int32 level = (ev_int32) level_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getTerrainFromDBCache(row, col, level);
						EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->getTerrainFromDBCache(row, col, level);
						EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getTerrainFromDBCache_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getTerrainFromDBCache_ev_int32_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getTerrainFromDBCache_ev_int32_ev_int32_ev_int32_callback", "(III)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getTerrainFromDBCache_1ev_1int32_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint row_j, jint col_j, jint level_j)
				{
					ev_int32 row = (ev_int32) row_j;
					ev_int32 col = (ev_int32) col_j;
					ev_int32 level = (ev_int32) level_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getTerrainFromDBCache(row, col, level);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getTerrainFromServer_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint row_j, jint col_j, jint level_j)
				{
					ev_int32 row = (ev_int32) row_j;
					ev_int32 col = (ev_int32) col_j;
					ev_int32 level = (ev_int32) level_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getTerrainFromServer(row, col, level);
						EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->getTerrainFromServer(row, col, level);
						EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getTerrainFromServer_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getTerrainFromServer_ev_int32_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getTerrainFromServer_ev_int32_ev_int32_ev_int32_callback", "(III)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getTerrainFromServer_1ev_1int32_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint row_j, jint col_j, jint level_j)
				{
					ev_int32 row = (ev_int32) row_j;
					ev_int32 col = (ev_int32) col_j;
					ev_int32 level = (ev_int32) level_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getTerrainFromServer(row, col, level);
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getDataset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getDataset();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getDataset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getDataset_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getDataset();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getDataSource_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getDataSource();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getDataSource_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getDataSource_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getDataSource();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getExtent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getExtent();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getExtent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getExtent_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getExtent();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getSpatialReference_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getSpatialReference();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getSpatialReference_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getSpatialReference_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getSpatialReference();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::clone();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::toStream(stream);
					}
					else
					{
						pObjectX->toStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1toStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_toStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::toStream(stream);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::toXmlElement();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1toXmlElement_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_toXmlElement_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::toXmlElement();
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getMaxLevel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getMaxLevel();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getMaxLevel();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getMaxLevel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMaxLevel_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMaxLevel_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getMaxLevel_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getMaxLevel();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getMinLevel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getMinLevel();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getMinLevel();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getMinLevel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMinLevel_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMinLevel_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getMinLevel_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getMinLevel();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_setMaxLevel_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint maxLevel_j)
				{
					ev_int32 maxLevel = (ev_int32) maxLevel_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::setMaxLevel(maxLevel);
					}
					else
					{
						pObjectX->setMaxLevel(maxLevel);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1setMaxLevel_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setMaxLevel_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setMaxLevel_ev_int32_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_setMaxLevel_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint maxLevel_j)
				{
					ev_int32 maxLevel = (ev_int32) maxLevel_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::setMaxLevel(maxLevel);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_setMinLevel_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint minLevel_j)
				{
					ev_int32 minLevel = (ev_int32) minLevel_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::setMinLevel(minLevel);
					}
					else
					{
						pObjectX->setMinLevel(minLevel);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1setMinLevel_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setMinLevel_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setMinLevel_ev_int32_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_setMinLevel_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint minLevel_j)
				{
					ev_int32 minLevel = (ev_int32) minLevel_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::setMinLevel(minLevel);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getSrs_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						EarthView::World::Spatial3D::Atlas::LAYERSRS __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getSrs();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial3D::Atlas::LAYERSRS __values1 = pObjectX->getSrs();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getSrs_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSrs_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSrs_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getSrs_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::LAYERSRS __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getSrs();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getMinX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getMinX();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getMinX();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getMinX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMinX_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMinX_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getMinX_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getMinX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getMaxX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getMaxX();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getMaxX();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getMaxX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMaxX_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMaxX_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getMaxX_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getMaxX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getMinY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getMinY();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getMinY();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getMinY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMinY_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMinY_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getMinY_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getMinY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getMaxY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getMaxY();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getMaxY();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getMaxY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMaxY_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMaxY_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getMaxY_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getMaxY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer__1notifyLayerAdd_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSceneMgr_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneMgr = (EarthView::World::Graphic::CSceneManager*) pSceneMgr_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::_notifyLayerAdd(pSceneMgr);
					}
					else
					{
						pObjectX->_notifyLayerAdd(pSceneMgr);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1_1notifyLayerAdd_1CSceneManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__notifyLayerAdd_CSceneManager_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_notifyLayerAdd_CSceneManager_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer__1notifyLayerAdd_1CSceneManager_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSceneMgr_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneMgr = (EarthView::World::Graphic::CSceneManager*) pSceneMgr_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::_notifyLayerAdd(pSceneMgr);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer__1notifyLayerRemoved_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSceneMgr_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneMgr = (EarthView::World::Graphic::CSceneManager*) pSceneMgr_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::_notifyLayerRemoved(pSceneMgr);
					}
					else
					{
						pObjectX->_notifyLayerRemoved(pSceneMgr);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1_1notifyLayerRemoved_1CSceneManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__notifyLayerRemoved_CSceneManager_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_notifyLayerRemoved_CSceneManager_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer__1notifyLayerRemoved_1CSceneManager_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSceneMgr_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneMgr = (EarthView::World::Graphic::CSceneManager*) pSceneMgr_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::_notifyLayerRemoved(pSceneMgr);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getName();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::setName(name);
					}
					else
					{
						pObjectX->setName(name);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1setName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_setName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::setName(name);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						EarthView::World::Spatial::Atlas::EVLayerType __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getType();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::fromXmlElement(element);
					}
					else
					{
						pObjectX->fromXmlElement(element);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1fromXmlElement_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_fromXmlElement_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::fromXmlElement(element);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_fromStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::fromStream(stream);
					}
					else
					{
						pObjectX->fromStream(stream);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1fromStream_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_fromStream_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayer *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayer*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayer::fromStream(stream);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getSceneName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSceneName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSceneName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getHeightAt_1ev_1real32_1ev_1real32_1ev_1real32_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getHeightAt_ev_real32_ev_real32_ev_real32_ev_real32_callback", "(FFFJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1_1notifyRefreshed_1CCamera_1LayerRefreshFactor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__notifyRefreshed_CCamera_LayerRefreshFactor_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_notifyRefreshed_CCamera_LayerRefreshFactor_callback", "(JI)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1_1notifyRefreshed_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__notifyRefreshed_CCamera_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_notifyRefreshed_CCamera_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1_1notifyDataChanged_1EVString_1EVString_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__notifyDataChanged_EVString_EVString_CEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_notifyDataChanged_EVString_EVString_CEvent_callback", "(Ljava/lang/String;Ljava/lang/String;J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getSceneManager_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSceneManager_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSceneManager_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getDatasetName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1select_1IQueryFilter_1EVSelectionResultType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1clearSelection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1setLayerSelection_1ILayerSelection(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getLayerSelection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getDescription_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1setDescription_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1canEdit_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1setCanEdit_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1isEditing_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1setEditing_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1isVisible_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1setVisible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1isValid_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1isSelectable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1setSelectable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1ignoreScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1setIgnoreScale_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getDisplayMaxScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1setDisplayMaxScale_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getDisplayMinScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1setDisplayMinScale_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1setSpatialReference_1ISpatialReference(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1setTransparentValue_1ev_1uint8(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1getTransparentValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1draw_1ISpatialDisplay_1EVVectorLayerRendererType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayer_register_1toXML_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerProxy *pObjectX = (JCTerrainLayerProxy*) pObjXXXX;
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
				class JCTerrainLayerFactoryProxy : public EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory
				{
				 private:
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_createInstance_void_callback;
					EarthView::World::Core::ev_string m_createInstance_EVString_callback;
					EarthView::World::Core::ev_string m_createInstance_CXmlElement_callback;
					EarthView::World::Core::ev_string m_destroyInstance_ILayer_callback;
				public:
					JCTerrainLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CTerrainLayerFactory(pList)
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
							return this->CTerrainLayerFactory::getType();
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
							return this->CTerrainLayerFactory::createInstance();
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
							return this->CTerrainLayerFactory::createInstance(element);
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
							return this->CTerrainLayerFactory::destroyInstance(layer);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCTerrainLayerFactoryProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayerFactory_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerFactoryProxy))
					{
						EarthView::World::Spatial::Atlas::EVLayerType __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory::getType();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayerFactory_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerFactoryProxy *pObjectX = (JCTerrainLayerFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayerFactory_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory*) pObjXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayerFactory_createInstance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerFactoryProxy))
					{
						EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory::createInstance();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayerFactory_register_1createInstance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerFactoryProxy *pObjectX = (JCTerrainLayerFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayerFactory_createInstance_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory::createInstance();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayerFactory_createInstance_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerFactoryProxy))
					{
						EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory::createInstance(element);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayerFactory_register_1createInstance_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerFactoryProxy *pObjectX = (JCTerrainLayerFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayerFactory_createInstance_1CXmlElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory::createInstance(element);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayerFactory_createInstance_1IDataset(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_Dataset_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataset *ref_Dataset = (EarthView::World::Spatial::GeoDataset::IDataset*) ref_Dataset_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->createInstance(ref_Dataset);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayerFactory_destroyInstance_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTerrainLayerFactoryProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory::destroyInstance(layer);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayerFactory_register_1destroyInstance_1ILayer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerFactoryProxy *pObjectX = (JCTerrainLayerFactoryProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayerFactory_destroyInstance_1ILayer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory *pObjectX = (EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory::destroyInstance(layer);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_TerrainLayerFactory_register_1createInstance_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTerrainLayerFactoryProxy *pObjectX = (JCTerrainLayerFactoryProxy*) pObjXXXX;
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
			}
		}
	}
}
