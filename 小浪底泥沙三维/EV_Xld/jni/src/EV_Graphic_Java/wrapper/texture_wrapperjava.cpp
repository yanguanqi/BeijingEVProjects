/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/texture.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_TextureUsageHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					TU_STATIC,
					TU_DYNAMIC,
					TU_WRITE_ONLY,
					TU_STATIC_WRITE_ONLY,
					TU_DYNAMIC_WRITE_ONLY,
					TU_DYNAMIC_WRITE_ONLY_DISCARDABLE,
					TU_AUTOMIPMAP,
					TU_RENDERTARGET,
					TU_DEFAULT
				};
				jintArray array = __env->NewIntArray(9);
				__env->SetIntArrayRegion(array, 0, 9, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_TextureTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					TEX_TYPE_1D,
					TEX_TYPE_2D,
					TEX_TYPE_3D,
					TEX_TYPE_CUBE_MAP,
					TEX_TYPE_2D_ARRAY
				};
				jintArray array = __env->NewIntArray(5);
				__env->SetIntArrayRegion(array, 0, 5, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_TextureMipmapHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					MIP_UNLIMITED,
					MIP_DEFAULT
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			class JCTextureProxy : public EarthView::World::Graphic::CTexture
			{
			 private:
				EarthView::World::Core::ev_string m_setTextureType_TextureType_callback;
				EarthView::World::Core::ev_string m_getTextureType_void_callback;
				EarthView::World::Core::ev_string m_getNumMipmaps_void_callback;
				EarthView::World::Core::ev_string m_setNumMipmaps_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getMipmapsHardwareGenerated_void_callback;
				EarthView::World::Core::ev_string m_getGamma_void_callback;
				EarthView::World::Core::ev_string m_setGamma_ev_real32_callback;
				EarthView::World::Core::ev_string m_setHardwareGammaEnabled_ev_bool_callback;
				EarthView::World::Core::ev_string m_isHardwareGammaEnabled_void_callback;
				EarthView::World::Core::ev_string m_setFSAA_ev_uint32_EVString_callback;
				EarthView::World::Core::ev_string m_getFSAA_void_callback;
				EarthView::World::Core::ev_string m_getFSAAHint_void_callback;
				EarthView::World::Core::ev_string m_getHeight_void_callback;
				EarthView::World::Core::ev_string m_getWidth_void_callback;
				EarthView::World::Core::ev_string m_getDepth_void_callback;
				EarthView::World::Core::ev_string m_getSrcHeight_void_callback;
				EarthView::World::Core::ev_string m_getSrcWidth_void_callback;
				EarthView::World::Core::ev_string m_getSrcDepth_void_callback;
				EarthView::World::Core::ev_string m_setHeight_ev_size_t_callback;
				EarthView::World::Core::ev_string m_setWidth_ev_size_t_callback;
				EarthView::World::Core::ev_string m_setDepth_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getUsage_void_callback;
				EarthView::World::Core::ev_string m_setUsage_ev_int32_callback;
				EarthView::World::Core::ev_string m_createInternalResources_void_callback;
				EarthView::World::Core::ev_string m_freeInternalResources_void_callback;
				EarthView::World::Core::ev_string m_copyToTexture_CTexturePtr_callback;
				EarthView::World::Core::ev_string m_loadImage_CImage_callback;
				EarthView::World::Core::ev_string m_loadRawData_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_callback;
				EarthView::World::Core::ev_string m__loadImages_ConstImagePtrList_callback;
				EarthView::World::Core::ev_string m_getFormat_void_callback;
				EarthView::World::Core::ev_string m_setFormat_PixelFormat_callback;
				EarthView::World::Core::ev_string m_getDesiredFormat_void_callback;
				EarthView::World::Core::ev_string m_getSrcFormat_void_callback;
				EarthView::World::Core::ev_string m_hasAlpha_void_callback;
				EarthView::World::Core::ev_string m_setDesiredIntegerBitDepth_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getDesiredIntegerBitDepth_void_callback;
				EarthView::World::Core::ev_string m_setDesiredFloatBitDepth_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getDesiredFloatBitDepth_void_callback;
				EarthView::World::Core::ev_string m_setDesiredBitDepths_ev_uint16_ev_uint16_callback;
				EarthView::World::Core::ev_string m_setTreatLuminanceAsAlpha_ev_bool_callback;
				EarthView::World::Core::ev_string m_getTreatLuminanceAsAlpha_void_callback;
				EarthView::World::Core::ev_string m_getNumFaces_void_callback;
				EarthView::World::Core::ev_string m_getBuffer_ev_size_t_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getBuffer_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getBuffer_void_callback;
				EarthView::World::Core::ev_string m_convertToImage_CImage_ev_bool_callback;
				EarthView::World::Core::ev_string m_convertToImage_CImage_callback;
				EarthView::World::Core::ev_string m_getCustomAttribute_EVString_void_callback;
				EarthView::World::Core::ev_string m_reload_CImage_callback;
				EarthView::World::Core::ev_string m_getTextureID_void_callback;
				EarthView::World::Core::ev_string m_getSystemResource_void_callback;
				EarthView::World::Core::ev_string m_preLoadImpl_void_callback;
				EarthView::World::Core::ev_string m_postLoadImpl_void_callback;
				EarthView::World::Core::ev_string m_preUnloadImpl_void_callback;
				EarthView::World::Core::ev_string m_postUnloadImpl_void_callback;
				EarthView::World::Core::ev_string m_prepareImpl_void_callback;
				EarthView::World::Core::ev_string m_unprepareImpl_void_callback;
				EarthView::World::Core::ev_string m_loadImpl_void_callback;
				EarthView::World::Core::ev_string m_unloadImpl_void_callback;
				EarthView::World::Core::ev_string m_calculateSize_void_callback;
				EarthView::World::Core::ev_string m_prepare_ev_bool_callback;
				EarthView::World::Core::ev_string m_prepare_void_callback;
				EarthView::World::Core::ev_string m_load_ev_bool_callback;
				EarthView::World::Core::ev_string m_load_void_callback;
				EarthView::World::Core::ev_string m_reload_void_callback;
				EarthView::World::Core::ev_string m_isReloadable_void_callback;
				EarthView::World::Core::ev_string m_isManuallyLoaded_void_callback;
				EarthView::World::Core::ev_string m_unload_void_callback;
				EarthView::World::Core::ev_string m_getSize_void_callback;
				EarthView::World::Core::ev_string m_touch_void_callback;
				EarthView::World::Core::ev_string m_getName_void_callback;
				EarthView::World::Core::ev_string m_getHandle_void_callback;
				EarthView::World::Core::ev_string m_isPrepared_void_callback;
				EarthView::World::Core::ev_string m_isLoaded_void_callback;
				EarthView::World::Core::ev_string m_isLoading_void_callback;
				EarthView::World::Core::ev_string m_getLoadingState_void_callback;
				EarthView::World::Core::ev_string m_isBackgroundLoaded_void_callback;
				EarthView::World::Core::ev_string m_setBackgroundLoaded_ev_bool_callback;
				EarthView::World::Core::ev_string m_escalateLoading_void_callback;
				EarthView::World::Core::ev_string m_addListener_CResourceListener_callback;
				EarthView::World::Core::ev_string m_removeListener_CResourceListener_callback;
				EarthView::World::Core::ev_string m_getGroup_void_callback;
				EarthView::World::Core::ev_string m_changeGroupOwnership_EVString_callback;
				EarthView::World::Core::ev_string m_getCreator_void_callback;
				EarthView::World::Core::ev_string m_getOrigin_void_callback;
				EarthView::World::Core::ev_string m__notifyOrigin_EVString_callback;
				EarthView::World::Core::ev_string m_getStateCount_void_callback;
				EarthView::World::Core::ev_string m__dirtyState_void_callback;
				EarthView::World::Core::ev_string m__fireLoadingComplete_ev_bool_callback;
				EarthView::World::Core::ev_string m__firePreparingComplete_ev_bool_callback;
				EarthView::World::Core::ev_string m__fireUnloadingComplete_void_callback;
				EarthView::World::Core::ev_string m_setParameter_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_setParameter_EVString_ev_bool_ev_bool_callback;
				EarthView::World::Core::ev_string m_setParameterList_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_getParameter_EVString_callback;
				EarthView::World::Core::ev_string m_copyParametersTo_CStringInterface_callback;
			public:
				JCTextureProxy(EarthView::World::Core::CNameValuePairList *pList) : CTexture(pList)
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
				void register_setTextureType_TextureType_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setTextureType_TextureType_callback = __method;
				}
				void register_getTextureType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTextureType_void_callback = __method;
				}
				void register_getNumMipmaps_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNumMipmaps_void_callback = __method;
				}
				void register_setNumMipmaps_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setNumMipmaps_ev_size_t_callback = __method;
				}
				void register_getMipmapsHardwareGenerated_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMipmapsHardwareGenerated_void_callback = __method;
				}
				void register_getGamma_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getGamma_void_callback = __method;
				}
				void register_setGamma_ev_real32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setGamma_ev_real32_callback = __method;
				}
				void register_setHardwareGammaEnabled_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setHardwareGammaEnabled_ev_bool_callback = __method;
				}
				void register_isHardwareGammaEnabled_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isHardwareGammaEnabled_void_callback = __method;
				}
				void register_setFSAA_ev_uint32_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setFSAA_ev_uint32_EVString_callback = __method;
				}
				void register_getFSAA_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getFSAA_void_callback = __method;
				}
				void register_getFSAAHint_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getFSAAHint_void_callback = __method;
				}
				void register_getHeight_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getHeight_void_callback = __method;
				}
				void register_getWidth_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWidth_void_callback = __method;
				}
				void register_getDepth_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDepth_void_callback = __method;
				}
				void register_getSrcHeight_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSrcHeight_void_callback = __method;
				}
				void register_getSrcWidth_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSrcWidth_void_callback = __method;
				}
				void register_getSrcDepth_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSrcDepth_void_callback = __method;
				}
				void register_setHeight_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setHeight_ev_size_t_callback = __method;
				}
				void register_setWidth_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setWidth_ev_size_t_callback = __method;
				}
				void register_setDepth_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDepth_ev_size_t_callback = __method;
				}
				void register_getUsage_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getUsage_void_callback = __method;
				}
				void register_setUsage_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setUsage_ev_int32_callback = __method;
				}
				void register_createInternalResources_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createInternalResources_void_callback = __method;
				}
				void register_freeInternalResources_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_freeInternalResources_void_callback = __method;
				}
				void register_copyToTexture_CTexturePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_copyToTexture_CTexturePtr_callback = __method;
				}
				void register_loadImage_CImage_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_loadImage_CImage_callback = __method;
				}
				void register_loadRawData_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_loadRawData_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_callback = __method;
				}
				void register__loadImages_ConstImagePtrList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__loadImages_ConstImagePtrList_callback = __method;
				}
				void register_getFormat_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getFormat_void_callback = __method;
				}
				void register_setFormat_PixelFormat_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setFormat_PixelFormat_callback = __method;
				}
				void register_getDesiredFormat_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDesiredFormat_void_callback = __method;
				}
				void register_getSrcFormat_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSrcFormat_void_callback = __method;
				}
				void register_hasAlpha_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasAlpha_void_callback = __method;
				}
				void register_setDesiredIntegerBitDepth_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDesiredIntegerBitDepth_ev_uint16_callback = __method;
				}
				void register_getDesiredIntegerBitDepth_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDesiredIntegerBitDepth_void_callback = __method;
				}
				void register_setDesiredFloatBitDepth_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDesiredFloatBitDepth_ev_uint16_callback = __method;
				}
				void register_getDesiredFloatBitDepth_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDesiredFloatBitDepth_void_callback = __method;
				}
				void register_setDesiredBitDepths_ev_uint16_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDesiredBitDepths_ev_uint16_ev_uint16_callback = __method;
				}
				void register_setTreatLuminanceAsAlpha_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setTreatLuminanceAsAlpha_ev_bool_callback = __method;
				}
				void register_getTreatLuminanceAsAlpha_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTreatLuminanceAsAlpha_void_callback = __method;
				}
				void register_getNumFaces_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNumFaces_void_callback = __method;
				}
				void register_getBuffer_ev_size_t_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getBuffer_ev_size_t_ev_size_t_callback = __method;
				}
				void register_getBuffer_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getBuffer_ev_size_t_callback = __method;
				}
				void register_getBuffer_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getBuffer_void_callback = __method;
				}
				void register_convertToImage_CImage_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_convertToImage_CImage_ev_bool_callback = __method;
				}
				void register_convertToImage_CImage_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_convertToImage_CImage_callback = __method;
				}
				void register_getCustomAttribute_EVString_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCustomAttribute_EVString_void_callback = __method;
				}
				void register_reload_CImage_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_reload_CImage_callback = __method;
				}
				void register_getTextureID_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTextureID_void_callback = __method;
				}
				void register_getSystemResource_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSystemResource_void_callback = __method;
				}
				void register_preLoadImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_preLoadImpl_void_callback = __method;
				}
				void register_postLoadImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postLoadImpl_void_callback = __method;
				}
				void register_preUnloadImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_preUnloadImpl_void_callback = __method;
				}
				void register_postUnloadImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postUnloadImpl_void_callback = __method;
				}
				void register_prepareImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepareImpl_void_callback = __method;
				}
				void register_unprepareImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unprepareImpl_void_callback = __method;
				}
				void register_loadImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_loadImpl_void_callback = __method;
				}
				void register_unloadImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unloadImpl_void_callback = __method;
				}
				void register_calculateSize_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_calculateSize_void_callback = __method;
				}
				void register_prepare_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepare_ev_bool_callback = __method;
				}
				void register_prepare_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepare_void_callback = __method;
				}
				void register_load_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_ev_bool_callback = __method;
				}
				void register_load_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_void_callback = __method;
				}
				void register_reload_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_reload_void_callback = __method;
				}
				void register_isReloadable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isReloadable_void_callback = __method;
				}
				void register_isManuallyLoaded_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isManuallyLoaded_void_callback = __method;
				}
				void register_unload_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unload_void_callback = __method;
				}
				void register_getSize_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSize_void_callback = __method;
				}
				void register_touch_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_touch_void_callback = __method;
				}
				void register_getName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getName_void_callback = __method;
				}
				void register_getHandle_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getHandle_void_callback = __method;
				}
				void register_isPrepared_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isPrepared_void_callback = __method;
				}
				void register_isLoaded_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isLoaded_void_callback = __method;
				}
				void register_isLoading_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isLoading_void_callback = __method;
				}
				void register_getLoadingState_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLoadingState_void_callback = __method;
				}
				void register_isBackgroundLoaded_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isBackgroundLoaded_void_callback = __method;
				}
				void register_setBackgroundLoaded_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setBackgroundLoaded_ev_bool_callback = __method;
				}
				void register_escalateLoading_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_escalateLoading_void_callback = __method;
				}
				void register_addListener_CResourceListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addListener_CResourceListener_callback = __method;
				}
				void register_removeListener_CResourceListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeListener_CResourceListener_callback = __method;
				}
				void register_getGroup_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getGroup_void_callback = __method;
				}
				void register_changeGroupOwnership_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_changeGroupOwnership_EVString_callback = __method;
				}
				void register_getCreator_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCreator_void_callback = __method;
				}
				void register_getOrigin_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getOrigin_void_callback = __method;
				}
				void register__notifyOrigin_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyOrigin_EVString_callback = __method;
				}
				void register_getStateCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getStateCount_void_callback = __method;
				}
				void register__dirtyState_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__dirtyState_void_callback = __method;
				}
				void register__fireLoadingComplete_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__fireLoadingComplete_ev_bool_callback = __method;
				}
				void register__firePreparingComplete_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__firePreparingComplete_ev_bool_callback = __method;
				}
				void register__fireUnloadingComplete_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__fireUnloadingComplete_void_callback = __method;
				}
				void register_setParameter_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParameter_EVString_EVString_callback = __method;
				}
				void register_setParameter_EVString_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParameter_EVString_ev_bool_ev_bool_callback = __method;
				}
				void register_setParameterList_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParameterList_CommonStringPairList_callback = __method;
				}
				void register_getParameter_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getParameter_EVString_callback = __method;
				}
				void register_copyParametersTo_CStringInterface_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_copyParametersTo_CStringInterface_callback = __method;
				}
				virtual void setTextureType(EarthView::World::Graphic::TextureType ttype)
				{
					if (this->_gRef != NULL && this->m_setTextureType_TextureType_callback != "" && this->isCustomExtend())
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
						jint ttype_j = (jint) ttype;
						jmethodID __method = __gr->getMethod("setTextureType_TextureType_callback");
						__env->CallVoidMethod(__obj, __method , ttype_j);
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
						return this->CTexture::setTextureType(ttype);
					}
				}
				virtual EarthView::World::Graphic::TextureType getTextureType() const
				{
					if (this->_gRef != NULL && this->m_getTextureType_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getTextureType_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::TextureType __values1 = (EarthView::World::Graphic::TextureType) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexture::getTextureType();
					}
				}
				virtual ev_size_t getNumMipmaps() const
				{
					if (this->_gRef != NULL && this->m_getNumMipmaps_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNumMipmaps_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexture::getNumMipmaps();
					}
				}
				virtual void setNumMipmaps(ev_size_t num)
				{
					if (this->_gRef != NULL && this->m_setNumMipmaps_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong num_j = (jlong) num;
						jmethodID __method = __gr->getMethod("setNumMipmaps_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , num_j);
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
						return this->CTexture::setNumMipmaps(num);
					}
				}
				virtual ev_bool getMipmapsHardwareGenerated() const
				{
					if (this->_gRef != NULL && this->m_getMipmapsHardwareGenerated_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getMipmapsHardwareGenerated_void_callback");
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
						return this->CTexture::getMipmapsHardwareGenerated();
					}
				}
				virtual ev_real32 getGamma() const
				{
					if (this->_gRef != NULL && this->m_getGamma_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getGamma_void_callback");
						jfloat __values1_j = (jfloat)__env->CallFloatMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_real32 __values1 = (ev_real32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexture::getGamma();
					}
				}
				virtual void setGamma(ev_real32 g)
				{
					if (this->_gRef != NULL && this->m_setGamma_ev_real32_callback != "" && this->isCustomExtend())
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
						jfloat g_j = (jfloat) g;
						jmethodID __method = __gr->getMethod("setGamma_ev_real32_callback");
						__env->CallVoidMethod(__obj, __method , g_j);
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
						return this->CTexture::setGamma(g);
					}
				}
				virtual void setHardwareGammaEnabled(ev_bool enabled)
				{
					if (this->_gRef != NULL && this->m_setHardwareGammaEnabled_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean enabled_j = (jboolean) enabled;
						jmethodID __method = __gr->getMethod("setHardwareGammaEnabled_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , enabled_j);
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
						return this->CTexture::setHardwareGammaEnabled(enabled);
					}
				}
				virtual ev_bool isHardwareGammaEnabled() const
				{
					if (this->_gRef != NULL && this->m_isHardwareGammaEnabled_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isHardwareGammaEnabled_void_callback");
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
						return this->CTexture::isHardwareGammaEnabled();
					}
				}
				virtual void setFSAA(ev_uint32 fsaa, const EVString& fsaaHint)
				{
					if (this->_gRef != NULL && this->m_setFSAA_ev_uint32_EVString_callback != "" && this->isCustomExtend())
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
						jlong fsaa_j = (jlong) fsaa;
						EarthView::World::Core::ev_wstring fsaaHint_wch = fsaaHint;
						jstring fsaaHint_j = __env->NewString((const jchar*)fsaaHint_wch.getString(), fsaaHint_wch.size());
						jmethodID __method = __gr->getMethod("setFSAA_ev_uint32_EVString_callback");
						__env->CallVoidMethod(__obj, __method , fsaa_j, fsaaHint_j);
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
						return this->CTexture::setFSAA(fsaa, fsaaHint);
					}
				}
				virtual ev_uint32 getFSAA() const
				{
					if (this->_gRef != NULL && this->m_getFSAA_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getFSAA_void_callback");
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
						return this->CTexture::getFSAA();
					}
				}
				virtual EVString getFSAAHint() const
				{
					if (this->_gRef != NULL && this->m_getFSAAHint_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getFSAAHint_void_callback");
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
						return this->CTexture::getFSAAHint();
					}
				}
				virtual ev_size_t getHeight() const
				{
					if (this->_gRef != NULL && this->m_getHeight_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getHeight_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexture::getHeight();
					}
				}
				virtual ev_size_t getWidth() const
				{
					if (this->_gRef != NULL && this->m_getWidth_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWidth_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexture::getWidth();
					}
				}
				virtual ev_size_t getDepth() const
				{
					if (this->_gRef != NULL && this->m_getDepth_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDepth_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexture::getDepth();
					}
				}
				virtual ev_size_t getSrcHeight() const
				{
					if (this->_gRef != NULL && this->m_getSrcHeight_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSrcHeight_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexture::getSrcHeight();
					}
				}
				virtual ev_size_t getSrcWidth() const
				{
					if (this->_gRef != NULL && this->m_getSrcWidth_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSrcWidth_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexture::getSrcWidth();
					}
				}
				virtual ev_size_t getSrcDepth() const
				{
					if (this->_gRef != NULL && this->m_getSrcDepth_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSrcDepth_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexture::getSrcDepth();
					}
				}
				virtual void setHeight(ev_size_t h)
				{
					if (this->_gRef != NULL && this->m_setHeight_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong h_j = (jlong) h;
						jmethodID __method = __gr->getMethod("setHeight_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , h_j);
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
						return this->CTexture::setHeight(h);
					}
				}
				virtual void setWidth(ev_size_t w)
				{
					if (this->_gRef != NULL && this->m_setWidth_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong w_j = (jlong) w;
						jmethodID __method = __gr->getMethod("setWidth_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , w_j);
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
						return this->CTexture::setWidth(w);
					}
				}
				virtual void setDepth(ev_size_t d)
				{
					if (this->_gRef != NULL && this->m_setDepth_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong d_j = (jlong) d;
						jmethodID __method = __gr->getMethod("setDepth_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , d_j);
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
						return this->CTexture::setDepth(d);
					}
				}
				virtual ev_int32 getUsage() const
				{
					if (this->_gRef != NULL && this->m_getUsage_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getUsage_void_callback");
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
						return this->CTexture::getUsage();
					}
				}
				virtual void setUsage(ev_int32 u)
				{
					if (this->_gRef != NULL && this->m_setUsage_ev_int32_callback != "" && this->isCustomExtend())
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
						jint u_j = (jint) u;
						jmethodID __method = __gr->getMethod("setUsage_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , u_j);
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
						return this->CTexture::setUsage(u);
					}
				}
				virtual void createInternalResources()
				{
					if (this->_gRef != NULL && this->m_createInternalResources_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("createInternalResources_void_callback");
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
						return this->CTexture::createInternalResources();
					}
				}
				virtual void freeInternalResources()
				{
					if (this->_gRef != NULL && this->m_freeInternalResources_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("freeInternalResources_void_callback");
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
						return this->CTexture::freeInternalResources();
					}
				}
				virtual void copyToTexture(EarthView::World::Graphic::CTexturePtr& target)
				{
					if (this->_gRef != NULL && this->m_copyToTexture_CTexturePtr_callback != "" && this->isCustomExtend())
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
						jlong target_j = (jlong) &target;
						jmethodID __method = __gr->getMethod("copyToTexture_CTexturePtr_callback");
						__env->CallVoidMethod(__obj, __method , target_j);
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
						return this->CTexture::copyToTexture(target);
					}
				}
				virtual void loadImage(const EarthView::World::Graphic::CImage& img)
				{
					if (this->_gRef != NULL && this->m_loadImage_CImage_callback != "" && this->isCustomExtend())
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
						jlong img_j = (jlong) &img;
						jmethodID __method = __gr->getMethod("loadImage_CImage_callback");
						__env->CallVoidMethod(__obj, __method , img_j);
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
						return this->CTexture::loadImage(img);
					}
				}
				virtual void loadRawData(EarthView::World::Core::DataStreamPtr& stream, ev_uint16 uWidth, ev_uint16 uHeight, EarthView::World::Graphic::PixelFormat eFormat)
				{
					if (this->_gRef != NULL && this->m_loadRawData_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_callback != "" && this->isCustomExtend())
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
						jint uWidth_j = (jint) uWidth;
						jint uHeight_j = (jint) uHeight;
						jint eFormat_j = (jint) eFormat;
						jmethodID __method = __gr->getMethod("loadRawData_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_callback");
						__env->CallVoidMethod(__obj, __method , stream_j, uWidth_j, uHeight_j, eFormat_j);
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
						return this->CTexture::loadRawData(stream, uWidth, uHeight, eFormat);
					}
				}
				virtual void _loadImages(const EarthView::World::Graphic::ConstImagePtrList& images)
				{
					if (this->_gRef != NULL && this->m__loadImages_ConstImagePtrList_callback != "" && this->isCustomExtend())
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
						jlong images_j = (jlong) &images;
						jmethodID __method = __gr->getMethod("_loadImages_ConstImagePtrList_callback");
						__env->CallVoidMethod(__obj, __method , images_j);
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
						return this->CTexture::_loadImages(images);
					}
				}
				virtual EarthView::World::Graphic::PixelFormat getFormat() const
				{
					if (this->_gRef != NULL && this->m_getFormat_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getFormat_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::PixelFormat __values1 = (EarthView::World::Graphic::PixelFormat) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexture::getFormat();
					}
				}
				virtual void setFormat(EarthView::World::Graphic::PixelFormat pf)
				{
					if (this->_gRef != NULL && this->m_setFormat_PixelFormat_callback != "" && this->isCustomExtend())
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
						jint pf_j = (jint) pf;
						jmethodID __method = __gr->getMethod("setFormat_PixelFormat_callback");
						__env->CallVoidMethod(__obj, __method , pf_j);
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
						return this->CTexture::setFormat(pf);
					}
				}
				virtual EarthView::World::Graphic::PixelFormat getDesiredFormat() const
				{
					if (this->_gRef != NULL && this->m_getDesiredFormat_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDesiredFormat_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::PixelFormat __values1 = (EarthView::World::Graphic::PixelFormat) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexture::getDesiredFormat();
					}
				}
				virtual EarthView::World::Graphic::PixelFormat getSrcFormat() const
				{
					if (this->_gRef != NULL && this->m_getSrcFormat_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSrcFormat_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::PixelFormat __values1 = (EarthView::World::Graphic::PixelFormat) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexture::getSrcFormat();
					}
				}
				virtual ev_bool hasAlpha() const
				{
					if (this->_gRef != NULL && this->m_hasAlpha_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("hasAlpha_void_callback");
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
						return this->CTexture::hasAlpha();
					}
				}
				virtual void setDesiredIntegerBitDepth(ev_uint16 bits)
				{
					if (this->_gRef != NULL && this->m_setDesiredIntegerBitDepth_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint bits_j = (jint) bits;
						jmethodID __method = __gr->getMethod("setDesiredIntegerBitDepth_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , bits_j);
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
						return this->CTexture::setDesiredIntegerBitDepth(bits);
					}
				}
				virtual ev_uint16 getDesiredIntegerBitDepth() const
				{
					if (this->_gRef != NULL && this->m_getDesiredIntegerBitDepth_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDesiredIntegerBitDepth_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint16 __values1 = (ev_uint16) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexture::getDesiredIntegerBitDepth();
					}
				}
				virtual void setDesiredFloatBitDepth(ev_uint16 bits)
				{
					if (this->_gRef != NULL && this->m_setDesiredFloatBitDepth_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint bits_j = (jint) bits;
						jmethodID __method = __gr->getMethod("setDesiredFloatBitDepth_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , bits_j);
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
						return this->CTexture::setDesiredFloatBitDepth(bits);
					}
				}
				virtual ev_uint16 getDesiredFloatBitDepth() const
				{
					if (this->_gRef != NULL && this->m_getDesiredFloatBitDepth_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDesiredFloatBitDepth_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint16 __values1 = (ev_uint16) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexture::getDesiredFloatBitDepth();
					}
				}
				virtual void setDesiredBitDepths(ev_uint16 integerBits, ev_uint16 floatBits)
				{
					if (this->_gRef != NULL && this->m_setDesiredBitDepths_ev_uint16_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint integerBits_j = (jint) integerBits;
						jint floatBits_j = (jint) floatBits;
						jmethodID __method = __gr->getMethod("setDesiredBitDepths_ev_uint16_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , integerBits_j, floatBits_j);
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
						return this->CTexture::setDesiredBitDepths(integerBits, floatBits);
					}
				}
				virtual void setTreatLuminanceAsAlpha(ev_bool asAlpha)
				{
					if (this->_gRef != NULL && this->m_setTreatLuminanceAsAlpha_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean asAlpha_j = (jboolean) asAlpha;
						jmethodID __method = __gr->getMethod("setTreatLuminanceAsAlpha_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , asAlpha_j);
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
						return this->CTexture::setTreatLuminanceAsAlpha(asAlpha);
					}
				}
				virtual ev_bool getTreatLuminanceAsAlpha() const
				{
					if (this->_gRef != NULL && this->m_getTreatLuminanceAsAlpha_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getTreatLuminanceAsAlpha_void_callback");
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
						return this->CTexture::getTreatLuminanceAsAlpha();
					}
				}
				virtual ev_size_t getNumFaces() const
				{
					if (this->_gRef != NULL && this->m_getNumFaces_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNumFaces_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexture::getNumFaces();
					}
				}
				virtual EarthView::World::Graphic::CHardwarePixelBufferSharedPtr getBuffer(ev_size_t face, ev_size_t mipmap)
				{
					if (this->_gRef != NULL && this->m_getBuffer_ev_size_t_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong face_j = (jlong) face;
						jlong mipmap_j = (jlong) mipmap;
						jmethodID __method = __gr->getMethod("getBuffer_ev_size_t_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , face_j, mipmap_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwarePixelBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwarePixelBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexture::getBuffer(face, mipmap);
					}
				}
				virtual EarthView::World::Graphic::CHardwarePixelBufferSharedPtr getBuffer(ev_size_t face)
				{
					if (this->_gRef != NULL && this->m_getBuffer_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong face_j = (jlong) face;
						jmethodID __method = __gr->getMethod("getBuffer_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , face_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwarePixelBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwarePixelBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexture::getBuffer(face);
					}
				}
				virtual EarthView::World::Graphic::CHardwarePixelBufferSharedPtr getBuffer()
				{
					if (this->_gRef != NULL && this->m_getBuffer_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getBuffer_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwarePixelBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwarePixelBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexture::getBuffer();
					}
				}
				virtual void convertToImage(EarthView::World::Graphic::CImage& destImage, ev_bool includeMipMaps)
				{
					if (this->_gRef != NULL && this->m_convertToImage_CImage_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong destImage_j = (jlong) &destImage;
						jboolean includeMipMaps_j = (jboolean) includeMipMaps;
						jmethodID __method = __gr->getMethod("convertToImage_CImage_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , destImage_j, includeMipMaps_j);
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
						return this->CTexture::convertToImage(destImage, includeMipMaps);
					}
				}
				virtual void convertToImage(EarthView::World::Graphic::CImage& destImage)
				{
					if (this->_gRef != NULL && this->m_convertToImage_CImage_callback != "" && this->isCustomExtend())
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
						jlong destImage_j = (jlong) &destImage;
						jmethodID __method = __gr->getMethod("convertToImage_CImage_callback");
						__env->CallVoidMethod(__obj, __method , destImage_j);
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
						return this->CTexture::convertToImage(destImage);
					}
				}
				virtual void getCustomAttribute(const EVString& name, void* pData)
				{
					if (this->_gRef != NULL && this->m_getCustomAttribute_EVString_void_callback != "" && this->isCustomExtend())
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
						jlong pData_j = (jlong) pData;
						jmethodID __method = __gr->getMethod("getCustomAttribute_EVString_void_callback");
						__env->CallVoidMethod(__obj, __method , name_j, pData_j);
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
						return this->CTexture::getCustomAttribute(name, pData);
					}
				}
				virtual void reload(EarthView::World::Graphic::CImage& img)
				{
					if (this->_gRef != NULL && this->m_reload_CImage_callback != "" && this->isCustomExtend())
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
						jlong img_j = (jlong) &img;
						jmethodID __method = __gr->getMethod("reload_CImage_callback");
						__env->CallVoidMethod(__obj, __method , img_j);
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
						return this->CTexture::reload(img);
					}
				}
				virtual ev_uint32 getTextureID() const
				{
					if (this->_gRef != NULL && this->m_getTextureID_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getTextureID_void_callback");
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
						return this->CTexture::getTextureID();
					}
				}
				virtual void* getSystemResource()
				{
					if (this->_gRef != NULL && this->m_getSystemResource_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSystemResource_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						void *__values1 = (void*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexture::getSystemResource();
					}
				}
				virtual ev_size_t calculateSize() const
				{
					if (this->_gRef != NULL && this->m_calculateSize_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("calculateSize_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexture::calculateSize();
					}
				}
				virtual void unloadImpl()
				{
					if (this->_gRef != NULL && this->m_unloadImpl_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("unloadImpl_void_callback");
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
						return this->CTexture::unloadImpl();
					}
				}
				virtual void preLoadImpl()
				{
					if (this->_gRef != NULL && this->m_preLoadImpl_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("preLoadImpl_void_callback");
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
						return this->CTexture::preLoadImpl();
					}
				}
				virtual void postLoadImpl()
				{
					if (this->_gRef != NULL && this->m_postLoadImpl_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("postLoadImpl_void_callback");
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
						return this->CTexture::postLoadImpl();
					}
				}
				virtual void preUnloadImpl()
				{
					if (this->_gRef != NULL && this->m_preUnloadImpl_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("preUnloadImpl_void_callback");
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
						return this->CTexture::preUnloadImpl();
					}
				}
				virtual void postUnloadImpl()
				{
					if (this->_gRef != NULL && this->m_postUnloadImpl_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("postUnloadImpl_void_callback");
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
						return this->CTexture::postUnloadImpl();
					}
				}
				virtual void prepareImpl()
				{
					if (this->_gRef != NULL && this->m_prepareImpl_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("prepareImpl_void_callback");
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
						return this->CTexture::prepareImpl();
					}
				}
				virtual void unprepareImpl()
				{
					if (this->_gRef != NULL && this->m_unprepareImpl_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("unprepareImpl_void_callback");
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
						return this->CTexture::unprepareImpl();
					}
				}
				virtual void loadImpl()
				{
					if (this->_gRef != NULL && this->m_loadImpl_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("loadImpl_void_callback");
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
						return this->CTexture::loadImpl();
					}
				}
				virtual void prepare(ev_bool backgroundThread)
				{
					if (this->_gRef != NULL && this->m_prepare_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean backgroundThread_j = (jboolean) backgroundThread;
						jmethodID __method = __gr->getMethod("prepare_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , backgroundThread_j);
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
						return this->CTexture::prepare(backgroundThread);
					}
				}
				virtual void prepare()
				{
					if (this->_gRef != NULL && this->m_prepare_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("prepare_void_callback");
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
						return this->CTexture::prepare();
					}
				}
				virtual void load(ev_bool backgroundThread)
				{
					if (this->_gRef != NULL && this->m_load_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean backgroundThread_j = (jboolean) backgroundThread;
						jmethodID __method = __gr->getMethod("load_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , backgroundThread_j);
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
						return this->CTexture::load(backgroundThread);
					}
				}
				virtual void load()
				{
					if (this->_gRef != NULL && this->m_load_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("load_void_callback");
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
						return this->CTexture::load();
					}
				}
				virtual ev_bool isReloadable() const
				{
					if (this->_gRef != NULL && this->m_isReloadable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isReloadable_void_callback");
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
						return this->CTexture::isReloadable();
					}
				}
				virtual ev_bool isManuallyLoaded() const
				{
					if (this->_gRef != NULL && this->m_isManuallyLoaded_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isManuallyLoaded_void_callback");
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
						return this->CTexture::isManuallyLoaded();
					}
				}
				virtual void unload()
				{
					if (this->_gRef != NULL && this->m_unload_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("unload_void_callback");
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
						return this->CTexture::unload();
					}
				}
				virtual ev_size_t getSize() const
				{
					if (this->_gRef != NULL && this->m_getSize_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSize_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexture::getSize();
					}
				}
				virtual void touch()
				{
					if (this->_gRef != NULL && this->m_touch_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("touch_void_callback");
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
						return this->CTexture::touch();
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
						return this->CTexture::getName();
					}
				}
				virtual ev_uint64 getHandle() const
				{
					if (this->_gRef != NULL && this->m_getHandle_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getHandle_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1_s = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						ev_uint64 __values1 = __values1_s.getUint64();
						return __values1;
					}
					else
					{
						return this->CTexture::getHandle();
					}
				}
				virtual ev_bool isPrepared() const
				{
					if (this->_gRef != NULL && this->m_isPrepared_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isPrepared_void_callback");
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
						return this->CTexture::isPrepared();
					}
				}
				virtual ev_bool isLoaded() const
				{
					if (this->_gRef != NULL && this->m_isLoaded_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isLoaded_void_callback");
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
						return this->CTexture::isLoaded();
					}
				}
				virtual ev_bool isLoading() const
				{
					if (this->_gRef != NULL && this->m_isLoading_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isLoading_void_callback");
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
						return this->CTexture::isLoading();
					}
				}
				virtual EarthView::World::Graphic::CResource::LoadingState getLoadingState() const
				{
					if (this->_gRef != NULL && this->m_getLoadingState_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLoadingState_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CResource::LoadingState __values1 = (EarthView::World::Graphic::CResource::LoadingState) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexture::getLoadingState();
					}
				}
				virtual ev_bool isBackgroundLoaded() const
				{
					if (this->_gRef != NULL && this->m_isBackgroundLoaded_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("isBackgroundLoaded_void_callback");
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
						return this->CTexture::isBackgroundLoaded();
					}
				}
				virtual void setBackgroundLoaded(ev_bool bl)
				{
					if (this->_gRef != NULL && this->m_setBackgroundLoaded_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean bl_j = (jboolean) bl;
						jmethodID __method = __gr->getMethod("setBackgroundLoaded_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , bl_j);
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
						return this->CTexture::setBackgroundLoaded(bl);
					}
				}
				virtual void escalateLoading()
				{
					if (this->_gRef != NULL && this->m_escalateLoading_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("escalateLoading_void_callback");
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
						return this->CTexture::escalateLoading();
					}
				}
				virtual void addListener(EarthView::World::Graphic::CResource::CResourceListener* ref_lis)
				{
					if (this->_gRef != NULL && this->m_addListener_CResourceListener_callback != "" && this->isCustomExtend())
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
						jlong ref_lis_j = (jlong) ref_lis;
						jmethodID __method = __gr->getMethod("addListener_CResourceListener_callback");
						__env->CallVoidMethod(__obj, __method , ref_lis_j);
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
						return this->CTexture::addListener(ref_lis);
					}
				}
				virtual void removeListener(EarthView::World::Graphic::CResource::CResourceListener* lis)
				{
					if (this->_gRef != NULL && this->m_removeListener_CResourceListener_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeListener_CResourceListener_callback");
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
						return this->CTexture::removeListener(lis);
					}
				}
				virtual EVString getGroup() const
				{
					if (this->_gRef != NULL && this->m_getGroup_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getGroup_void_callback");
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
						return this->CTexture::getGroup();
					}
				}
				virtual void changeGroupOwnership(const EVString& newGroup)
				{
					if (this->_gRef != NULL && this->m_changeGroupOwnership_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring newGroup_wch = newGroup;
						jstring newGroup_j = __env->NewString((const jchar*)newGroup_wch.getString(), newGroup_wch.size());
						jmethodID __method = __gr->getMethod("changeGroupOwnership_EVString_callback");
						__env->CallVoidMethod(__obj, __method , newGroup_j);
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
						return this->CTexture::changeGroupOwnership(newGroup);
					}
				}
				virtual EarthView::World::Graphic::CResourceManager* getCreator()
				{
					if (this->_gRef != NULL && this->m_getCreator_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCreator_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CResourceManager *__values1 = (EarthView::World::Graphic::CResourceManager*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexture::getCreator();
					}
				}
				virtual EVString getOrigin() const
				{
					if (this->_gRef != NULL && this->m_getOrigin_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getOrigin_void_callback");
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
						return this->CTexture::getOrigin();
					}
				}
				virtual void _notifyOrigin(const EVString& origin)
				{
					if (this->_gRef != NULL && this->m__notifyOrigin_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring origin_wch = origin;
						jstring origin_j = __env->NewString((const jchar*)origin_wch.getString(), origin_wch.size());
						jmethodID __method = __gr->getMethod("_notifyOrigin_EVString_callback");
						__env->CallVoidMethod(__obj, __method , origin_j);
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
						return this->CTexture::_notifyOrigin(origin);
					}
				}
				virtual ev_size_t getStateCount() const
				{
					if (this->_gRef != NULL && this->m_getStateCount_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getStateCount_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTexture::getStateCount();
					}
				}
				virtual void _dirtyState()
				{
					if (this->_gRef != NULL && this->m__dirtyState_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_dirtyState_void_callback");
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
						return this->CTexture::_dirtyState();
					}
				}
				virtual void _fireLoadingComplete(ev_bool wasBackgroundLoaded)
				{
					if (this->_gRef != NULL && this->m__fireLoadingComplete_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean wasBackgroundLoaded_j = (jboolean) wasBackgroundLoaded;
						jmethodID __method = __gr->getMethod("_fireLoadingComplete_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , wasBackgroundLoaded_j);
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
						return this->CTexture::_fireLoadingComplete(wasBackgroundLoaded);
					}
				}
				virtual void _firePreparingComplete(ev_bool wasBackgroundLoaded)
				{
					if (this->_gRef != NULL && this->m__firePreparingComplete_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean wasBackgroundLoaded_j = (jboolean) wasBackgroundLoaded;
						jmethodID __method = __gr->getMethod("_firePreparingComplete_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , wasBackgroundLoaded_j);
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
						return this->CTexture::_firePreparingComplete(wasBackgroundLoaded);
					}
				}
				virtual void _fireUnloadingComplete()
				{
					if (this->_gRef != NULL && this->m__fireUnloadingComplete_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_fireUnloadingComplete_void_callback");
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
						return this->CTexture::_fireUnloadingComplete();
					}
				}
				virtual ev_bool setParameter(const EVString& name, const EVString& value)
				{
					if (this->_gRef != NULL && this->m_setParameter_EVString_EVString_callback != "" && this->isCustomExtend())
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
						EarthView::World::Core::ev_wstring value_wch = value;
						jstring value_j = __env->NewString((const jchar*)value_wch.getString(), value_wch.size());
						jmethodID __method = __gr->getMethod("setParameter_EVString_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j, value_j);
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
						return this->CTexture::setParameter(name, value);
					}
				}
				virtual ev_bool setParameter(const EVString& name, ev_bool readOnly, ev_bool enable)
				{
					if (this->_gRef != NULL && this->m_setParameter_EVString_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean readOnly_j = (jboolean) readOnly;
						jboolean enable_j = (jboolean) enable;
						jmethodID __method = __gr->getMethod("setParameter_EVString_ev_bool_ev_bool_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j, readOnly_j, enable_j);
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
						return this->CTexture::setParameter(name, readOnly, enable);
					}
				}
				virtual void setParameterList(const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if (this->_gRef != NULL && this->m_setParameterList_CommonStringPairList_callback != "" && this->isCustomExtend())
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
						jlong paramList_j = (jlong) &paramList;
						jmethodID __method = __gr->getMethod("setParameterList_CommonStringPairList_callback");
						__env->CallVoidMethod(__obj, __method , paramList_j);
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
						return this->CTexture::setParameterList(paramList);
					}
				}
				virtual EVString getParameter(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m_getParameter_EVString_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getParameter_EVString_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , name_j);
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
						return this->CTexture::getParameter(name);
					}
				}
				virtual void copyParametersTo(EarthView::World::Core::CStringInterface* dest) const
				{
					if (this->_gRef != NULL && this->m_copyParametersTo_CStringInterface_callback != "" && this->isCustomExtend())
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
						jlong dest_j = (jlong) dest;
						jmethodID __method = __gr->getMethod("copyParametersTo_CStringInterface_callback");
						__env->CallVoidMethod(__obj, __method , dest_j);
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
						return this->CTexture::copyParametersTo(dest);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCTextureProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setTextureType_1TextureType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint ttype_j)
			{
				EarthView::World::Graphic::TextureType ttype = (EarthView::World::Graphic::TextureType) ttype_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::setTextureType(ttype);
				}
				else
				{
					pObjectX->setTextureType(ttype);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1setTextureType_1TextureType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setTextureType_TextureType_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setTextureType_TextureType_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setTextureType_1TextureType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint ttype_j)
			{
				EarthView::World::Graphic::TextureType ttype = (EarthView::World::Graphic::TextureType) ttype_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::setTextureType(ttype);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Texture_getTextureType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					EarthView::World::Graphic::TextureType __values1 = pObjectX->EarthView::World::Graphic::CTexture::getTextureType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::TextureType __values1 = pObjectX->getTextureType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getTextureType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTextureType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTextureType_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Texture_getTextureType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				EarthView::World::Graphic::TextureType __values1 = pObjectX->EarthView::World::Graphic::CTexture::getTextureType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getNumMipmaps_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CTexture::getNumMipmaps();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->getNumMipmaps();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getNumMipmaps_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNumMipmaps_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNumMipmaps_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getNumMipmaps_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CTexture::getNumMipmaps();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setNumMipmaps_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong num_j)
			{
				ev_size_t num = (ev_size_t) num_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::setNumMipmaps(num);
				}
				else
				{
					pObjectX->setNumMipmaps(num);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1setNumMipmaps_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setNumMipmaps_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setNumMipmaps_ev_size_t_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setNumMipmaps_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong num_j)
			{
				ev_size_t num = (ev_size_t) num_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::setNumMipmaps(num);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Texture_getMipmapsHardwareGenerated_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CTexture::getMipmapsHardwareGenerated();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getMipmapsHardwareGenerated();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getMipmapsHardwareGenerated_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMipmapsHardwareGenerated_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMipmapsHardwareGenerated_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Texture_getMipmapsHardwareGenerated_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CTexture::getMipmapsHardwareGenerated();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_Texture_getGamma_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					ev_real32 __values1 = pObjectX->EarthView::World::Graphic::CTexture::getGamma();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				else
				{
					ev_real32 __values1 = pObjectX->getGamma();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getGamma_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getGamma_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getGamma_void_callback", "()F");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_Texture_getGamma_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				ev_real32 __values1 = pObjectX->EarthView::World::Graphic::CTexture::getGamma();
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setGamma_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat g_j)
			{
				ev_real32 g = (ev_real32) g_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::setGamma(g);
				}
				else
				{
					pObjectX->setGamma(g);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1setGamma_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setGamma_ev_real32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setGamma_ev_real32_callback", "(F)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setGamma_1ev_1real32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat g_j)
			{
				ev_real32 g = (ev_real32) g_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::setGamma(g);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setHardwareGammaEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::setHardwareGammaEnabled(enabled);
				}
				else
				{
					pObjectX->setHardwareGammaEnabled(enabled);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1setHardwareGammaEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setHardwareGammaEnabled_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setHardwareGammaEnabled_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setHardwareGammaEnabled_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::setHardwareGammaEnabled(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Texture_isHardwareGammaEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CTexture::isHardwareGammaEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isHardwareGammaEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1isHardwareGammaEnabled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isHardwareGammaEnabled_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isHardwareGammaEnabled_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Texture_isHardwareGammaEnabled_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CTexture::isHardwareGammaEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setFSAA_1ev_1uint32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fsaa_j, jstring fsaaHint_j)
			{
				ev_uint32 fsaa = (ev_uint32) fsaa_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* fsaaHint_ch = (const ev_char*)__env->GetStringUTFChars(fsaaHint_j,JNI_FALSE);
				const EVString fsaaHint = fsaaHint_ch;
				__env->ReleaseStringUTFChars(fsaaHint_j, (const char *)fsaaHint_ch);
				#else
				const ev_wchar* fsaaHint_ch = (const ev_wchar*)__env->GetStringChars(fsaaHint_j,JNI_FALSE);
				const EVString fsaaHint = fsaaHint_ch;
				__env->ReleaseStringChars(fsaaHint_j, (const jchar *)fsaaHint_ch);
				#endif
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::setFSAA(fsaa, fsaaHint);
				}
				else
				{
					pObjectX->setFSAA(fsaa, fsaaHint);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1setFSAA_1ev_1uint32_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setFSAA_ev_uint32_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setFSAA_ev_uint32_EVString_callback", "(JLjava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setFSAA_1ev_1uint32_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fsaa_j, jstring fsaaHint_j)
			{
				ev_uint32 fsaa = (ev_uint32) fsaa_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* fsaaHint_ch = (const ev_char*)__env->GetStringUTFChars(fsaaHint_j,JNI_FALSE);
				const EVString fsaaHint = fsaaHint_ch;
				__env->ReleaseStringUTFChars(fsaaHint_j, (const char *)fsaaHint_ch);
				#else
				const ev_wchar* fsaaHint_ch = (const ev_wchar*)__env->GetStringChars(fsaaHint_j,JNI_FALSE);
				const EVString fsaaHint = fsaaHint_ch;
				__env->ReleaseStringChars(fsaaHint_j, (const jchar *)fsaaHint_ch);
				#endif
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::setFSAA(fsaa, fsaaHint);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getFSAA_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CTexture::getFSAA();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getFSAA();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getFSAA_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getFSAA_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getFSAA_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getFSAA_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CTexture::getFSAA();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Texture_getFSAAHint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CTexture::getFSAAHint();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getFSAAHint();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getFSAAHint_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getFSAAHint_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getFSAAHint_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Texture_getFSAAHint_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CTexture::getFSAAHint();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CTexture::getHeight();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->getHeight();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getHeight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getHeight_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getHeight_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getHeight_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CTexture::getHeight();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CTexture::getWidth();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->getWidth();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWidth_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWidth_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getWidth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CTexture::getWidth();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getDepth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CTexture::getDepth();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->getDepth();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getDepth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDepth_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDepth_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getDepth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CTexture::getDepth();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getSrcHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CTexture::getSrcHeight();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->getSrcHeight();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getSrcHeight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSrcHeight_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSrcHeight_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getSrcHeight_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CTexture::getSrcHeight();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getSrcWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CTexture::getSrcWidth();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->getSrcWidth();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getSrcWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSrcWidth_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSrcWidth_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getSrcWidth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CTexture::getSrcWidth();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getSrcDepth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CTexture::getSrcDepth();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->getSrcDepth();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getSrcDepth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSrcDepth_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSrcDepth_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getSrcDepth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CTexture::getSrcDepth();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setHeight_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong h_j)
			{
				ev_size_t h = (ev_size_t) h_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::setHeight(h);
				}
				else
				{
					pObjectX->setHeight(h);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1setHeight_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setHeight_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setHeight_ev_size_t_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setHeight_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong h_j)
			{
				ev_size_t h = (ev_size_t) h_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::setHeight(h);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setWidth_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong w_j)
			{
				ev_size_t w = (ev_size_t) w_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::setWidth(w);
				}
				else
				{
					pObjectX->setWidth(w);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1setWidth_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setWidth_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setWidth_ev_size_t_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setWidth_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong w_j)
			{
				ev_size_t w = (ev_size_t) w_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::setWidth(w);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setDepth_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong d_j)
			{
				ev_size_t d = (ev_size_t) d_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::setDepth(d);
				}
				else
				{
					pObjectX->setDepth(d);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1setDepth_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDepth_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDepth_ev_size_t_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setDepth_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong d_j)
			{
				ev_size_t d = (ev_size_t) d_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::setDepth(d);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Texture_getUsage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Graphic::CTexture::getUsage();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getUsage();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getUsage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getUsage_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getUsage_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Texture_getUsage_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Graphic::CTexture::getUsage();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setUsage_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint u_j)
			{
				ev_int32 u = (ev_int32) u_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::setUsage(u);
				}
				else
				{
					pObjectX->setUsage(u);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1setUsage_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setUsage_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setUsage_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setUsage_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint u_j)
			{
				ev_int32 u = (ev_int32) u_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::setUsage(u);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_createInternalResources_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::createInternalResources();
				}
				else
				{
					pObjectX->createInternalResources();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1createInternalResources_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createInternalResources_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createInternalResources_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_createInternalResources_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::createInternalResources();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_freeInternalResources_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::freeInternalResources();
				}
				else
				{
					pObjectX->freeInternalResources();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1freeInternalResources_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_freeInternalResources_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"freeInternalResources_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_freeInternalResources_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::freeInternalResources();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_copyToTexture_1CTexturePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
			{
				EarthView::World::Graphic::CTexturePtr &target = *(EarthView::World::Graphic::CTexturePtr*) target_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::copyToTexture(target);
				}
				else
				{
					pObjectX->copyToTexture(target);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1copyToTexture_1CTexturePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_copyToTexture_CTexturePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"copyToTexture_CTexturePtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_copyToTexture_1CTexturePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong target_j)
			{
				EarthView::World::Graphic::CTexturePtr &target = *(EarthView::World::Graphic::CTexturePtr*) target_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::copyToTexture(target);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_loadImage_1CImage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong img_j)
			{
				const EarthView::World::Graphic::CImage &img = *(EarthView::World::Graphic::CImage*) img_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::loadImage(img);
				}
				else
				{
					pObjectX->loadImage(img);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1loadImage_1CImage(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_loadImage_CImage_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"loadImage_CImage_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_loadImage_1CImage_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong img_j)
			{
				const EarthView::World::Graphic::CImage &img = *(EarthView::World::Graphic::CImage*) img_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::loadImage(img);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_loadRawData_1DataStreamPtr_1ev_1uint16_1ev_1uint16_1PixelFormat(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jint uWidth_j, jint uHeight_j, jint eFormat_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				ev_uint16 uWidth = (ev_uint16) uWidth_j;
				ev_uint16 uHeight = (ev_uint16) uHeight_j;
				EarthView::World::Graphic::PixelFormat eFormat = (EarthView::World::Graphic::PixelFormat) eFormat_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::loadRawData(stream, uWidth, uHeight, eFormat);
				}
				else
				{
					pObjectX->loadRawData(stream, uWidth, uHeight, eFormat);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1loadRawData_1DataStreamPtr_1ev_1uint16_1ev_1uint16_1PixelFormat(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_loadRawData_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"loadRawData_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_callback", "(JIII)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_loadRawData_1DataStreamPtr_1ev_1uint16_1ev_1uint16_1PixelFormat_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jint uWidth_j, jint uHeight_j, jint eFormat_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				ev_uint16 uWidth = (ev_uint16) uWidth_j;
				ev_uint16 uHeight = (ev_uint16) uHeight_j;
				EarthView::World::Graphic::PixelFormat eFormat = (EarthView::World::Graphic::PixelFormat) eFormat_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::loadRawData(stream, uWidth, uHeight, eFormat);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture__1loadImages_1ConstImagePtrList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong images_j)
			{
				const EarthView::World::Graphic::ConstImagePtrList &images = *(EarthView::World::Graphic::ConstImagePtrList*) images_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::_loadImages(images);
				}
				else
				{
					pObjectX->_loadImages(images);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1_1loadImages_1ConstImagePtrList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__loadImages_ConstImagePtrList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_loadImages_ConstImagePtrList_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture__1loadImages_1ConstImagePtrList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong images_j)
			{
				const EarthView::World::Graphic::ConstImagePtrList &images = *(EarthView::World::Graphic::ConstImagePtrList*) images_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::_loadImages(images);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Texture_getFormat_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					EarthView::World::Graphic::PixelFormat __values1 = pObjectX->EarthView::World::Graphic::CTexture::getFormat();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::PixelFormat __values1 = pObjectX->getFormat();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getFormat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getFormat_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getFormat_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Texture_getFormat_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				EarthView::World::Graphic::PixelFormat __values1 = pObjectX->EarthView::World::Graphic::CTexture::getFormat();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setFormat_1PixelFormat(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint pf_j)
			{
				EarthView::World::Graphic::PixelFormat pf = (EarthView::World::Graphic::PixelFormat) pf_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::setFormat(pf);
				}
				else
				{
					pObjectX->setFormat(pf);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1setFormat_1PixelFormat(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setFormat_PixelFormat_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setFormat_PixelFormat_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setFormat_1PixelFormat_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint pf_j)
			{
				EarthView::World::Graphic::PixelFormat pf = (EarthView::World::Graphic::PixelFormat) pf_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::setFormat(pf);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Texture_getDesiredFormat_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					EarthView::World::Graphic::PixelFormat __values1 = pObjectX->EarthView::World::Graphic::CTexture::getDesiredFormat();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::PixelFormat __values1 = pObjectX->getDesiredFormat();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getDesiredFormat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDesiredFormat_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDesiredFormat_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Texture_getDesiredFormat_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				EarthView::World::Graphic::PixelFormat __values1 = pObjectX->EarthView::World::Graphic::CTexture::getDesiredFormat();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Texture_getSrcFormat_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					EarthView::World::Graphic::PixelFormat __values1 = pObjectX->EarthView::World::Graphic::CTexture::getSrcFormat();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::PixelFormat __values1 = pObjectX->getSrcFormat();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getSrcFormat_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSrcFormat_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSrcFormat_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Texture_getSrcFormat_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				EarthView::World::Graphic::PixelFormat __values1 = pObjectX->EarthView::World::Graphic::CTexture::getSrcFormat();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Texture_hasAlpha_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CTexture::hasAlpha();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->hasAlpha();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1hasAlpha_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasAlpha_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasAlpha_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Texture_hasAlpha_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CTexture::hasAlpha();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setDesiredIntegerBitDepth_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint bits_j)
			{
				ev_uint16 bits = (ev_uint16) bits_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::setDesiredIntegerBitDepth(bits);
				}
				else
				{
					pObjectX->setDesiredIntegerBitDepth(bits);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1setDesiredIntegerBitDepth_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDesiredIntegerBitDepth_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDesiredIntegerBitDepth_ev_uint16_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setDesiredIntegerBitDepth_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint bits_j)
			{
				ev_uint16 bits = (ev_uint16) bits_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::setDesiredIntegerBitDepth(bits);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Texture_getDesiredIntegerBitDepth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CTexture::getDesiredIntegerBitDepth();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->getDesiredIntegerBitDepth();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getDesiredIntegerBitDepth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDesiredIntegerBitDepth_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDesiredIntegerBitDepth_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Texture_getDesiredIntegerBitDepth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CTexture::getDesiredIntegerBitDepth();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setDesiredFloatBitDepth_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint bits_j)
			{
				ev_uint16 bits = (ev_uint16) bits_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::setDesiredFloatBitDepth(bits);
				}
				else
				{
					pObjectX->setDesiredFloatBitDepth(bits);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1setDesiredFloatBitDepth_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDesiredFloatBitDepth_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDesiredFloatBitDepth_ev_uint16_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setDesiredFloatBitDepth_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint bits_j)
			{
				ev_uint16 bits = (ev_uint16) bits_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::setDesiredFloatBitDepth(bits);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Texture_getDesiredFloatBitDepth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CTexture::getDesiredFloatBitDepth();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->getDesiredFloatBitDepth();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getDesiredFloatBitDepth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDesiredFloatBitDepth_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDesiredFloatBitDepth_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Texture_getDesiredFloatBitDepth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CTexture::getDesiredFloatBitDepth();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setDesiredBitDepths_1ev_1uint16_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint integerBits_j, jint floatBits_j)
			{
				ev_uint16 integerBits = (ev_uint16) integerBits_j;
				ev_uint16 floatBits = (ev_uint16) floatBits_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::setDesiredBitDepths(integerBits, floatBits);
				}
				else
				{
					pObjectX->setDesiredBitDepths(integerBits, floatBits);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1setDesiredBitDepths_1ev_1uint16_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDesiredBitDepths_ev_uint16_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDesiredBitDepths_ev_uint16_ev_uint16_callback", "(II)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setDesiredBitDepths_1ev_1uint16_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint integerBits_j, jint floatBits_j)
			{
				ev_uint16 integerBits = (ev_uint16) integerBits_j;
				ev_uint16 floatBits = (ev_uint16) floatBits_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::setDesiredBitDepths(integerBits, floatBits);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setTreatLuminanceAsAlpha_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean asAlpha_j)
			{
				ev_bool asAlpha = (ev_bool) asAlpha_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::setTreatLuminanceAsAlpha(asAlpha);
				}
				else
				{
					pObjectX->setTreatLuminanceAsAlpha(asAlpha);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1setTreatLuminanceAsAlpha_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setTreatLuminanceAsAlpha_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setTreatLuminanceAsAlpha_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_setTreatLuminanceAsAlpha_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean asAlpha_j)
			{
				ev_bool asAlpha = (ev_bool) asAlpha_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::setTreatLuminanceAsAlpha(asAlpha);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Texture_getTreatLuminanceAsAlpha_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CTexture::getTreatLuminanceAsAlpha();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getTreatLuminanceAsAlpha();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getTreatLuminanceAsAlpha_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTreatLuminanceAsAlpha_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTreatLuminanceAsAlpha_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Texture_getTreatLuminanceAsAlpha_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CTexture::getTreatLuminanceAsAlpha();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getNumFaces_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CTexture::getNumFaces();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->getNumFaces();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getNumFaces_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNumFaces_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNumFaces_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getNumFaces_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CTexture::getNumFaces();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getBuffer_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong face_j, jlong mipmap_j)
			{
				ev_size_t face = (ev_size_t) face_j;
				ev_size_t mipmap = (ev_size_t) mipmap_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					EarthView::World::Graphic::CHardwarePixelBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CTexture::getBuffer(face, mipmap);
					EarthView::World::Graphic::CHardwarePixelBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwarePixelBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CHardwarePixelBufferSharedPtr __values1 = pObjectX->getBuffer(face, mipmap);
					EarthView::World::Graphic::CHardwarePixelBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwarePixelBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getBuffer_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getBuffer_ev_size_t_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getBuffer_ev_size_t_ev_size_t_callback", "(JJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getBuffer_1ev_1size_1t_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong face_j, jlong mipmap_j)
			{
				ev_size_t face = (ev_size_t) face_j;
				ev_size_t mipmap = (ev_size_t) mipmap_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				EarthView::World::Graphic::CHardwarePixelBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CTexture::getBuffer(face, mipmap);
				EarthView::World::Graphic::CHardwarePixelBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwarePixelBufferSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getBuffer_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong face_j)
			{
				ev_size_t face = (ev_size_t) face_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					EarthView::World::Graphic::CHardwarePixelBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CTexture::getBuffer(face);
					EarthView::World::Graphic::CHardwarePixelBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwarePixelBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CHardwarePixelBufferSharedPtr __values1 = pObjectX->getBuffer(face);
					EarthView::World::Graphic::CHardwarePixelBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwarePixelBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getBuffer_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getBuffer_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getBuffer_ev_size_t_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getBuffer_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong face_j)
			{
				ev_size_t face = (ev_size_t) face_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				EarthView::World::Graphic::CHardwarePixelBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CTexture::getBuffer(face);
				EarthView::World::Graphic::CHardwarePixelBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwarePixelBufferSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getBuffer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					EarthView::World::Graphic::CHardwarePixelBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CTexture::getBuffer();
					EarthView::World::Graphic::CHardwarePixelBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwarePixelBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CHardwarePixelBufferSharedPtr __values1 = pObjectX->getBuffer();
					EarthView::World::Graphic::CHardwarePixelBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwarePixelBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getBuffer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getBuffer_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getBuffer_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getBuffer_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				EarthView::World::Graphic::CHardwarePixelBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CTexture::getBuffer();
				EarthView::World::Graphic::CHardwarePixelBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwarePixelBufferSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_convertToImage_1CImage_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destImage_j, jboolean includeMipMaps_j)
			{
				EarthView::World::Graphic::CImage &destImage = *(EarthView::World::Graphic::CImage*) destImage_j;
				ev_bool includeMipMaps = (ev_bool) includeMipMaps_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::convertToImage(destImage, includeMipMaps);
				}
				else
				{
					pObjectX->convertToImage(destImage, includeMipMaps);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1convertToImage_1CImage_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_convertToImage_CImage_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"convertToImage_CImage_ev_bool_callback", "(JZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_convertToImage_1CImage_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destImage_j, jboolean includeMipMaps_j)
			{
				EarthView::World::Graphic::CImage &destImage = *(EarthView::World::Graphic::CImage*) destImage_j;
				ev_bool includeMipMaps = (ev_bool) includeMipMaps_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::convertToImage(destImage, includeMipMaps);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_convertToImage_1CImage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destImage_j)
			{
				EarthView::World::Graphic::CImage &destImage = *(EarthView::World::Graphic::CImage*) destImage_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::convertToImage(destImage);
				}
				else
				{
					pObjectX->convertToImage(destImage);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1convertToImage_1CImage(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_convertToImage_CImage_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"convertToImage_CImage_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_convertToImage_1CImage_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destImage_j)
			{
				EarthView::World::Graphic::CImage &destImage = *(EarthView::World::Graphic::CImage*) destImage_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::convertToImage(destImage);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_getCustomAttribute_1EVString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong pData_j)
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
				void *pData = (void*) pData_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::getCustomAttribute(name, pData);
				}
				else
				{
					pObjectX->getCustomAttribute(name, pData);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getCustomAttribute_1EVString_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCustomAttribute_EVString_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCustomAttribute_EVString_void_callback", "(Ljava/lang/String;J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_getCustomAttribute_1EVString_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jlong pData_j)
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
				void *pData = (void*) pData_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::getCustomAttribute(name, pData);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_reload_1CImage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong img_j)
			{
				EarthView::World::Graphic::CImage &img = *(EarthView::World::Graphic::CImage*) img_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::reload(img);
				}
				else
				{
					pObjectX->reload(img);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1reload_1CImage(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_reload_CImage_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"reload_CImage_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_reload_1CImage_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong img_j)
			{
				EarthView::World::Graphic::CImage &img = *(EarthView::World::Graphic::CImage*) img_j;
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::reload(img);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getTextureID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CTexture::getTextureID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint32 __values1 = pObjectX->getTextureID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getTextureID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTextureID_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTextureID_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getTextureID_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->EarthView::World::Graphic::CTexture::getTextureID();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getSystemResource_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					void* __values1 = pObjectX->EarthView::World::Graphic::CTexture::getSystemResource();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					void* __values1 = pObjectX->getSystemResource();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getSystemResource_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSystemResource_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSystemResource_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_getSystemResource_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				void* __values1 = pObjectX->EarthView::World::Graphic::CTexture::getSystemResource();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_calculateSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CTexture::calculateSize();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->calculateSize();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1calculateSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_calculateSize_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"calculateSize_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Texture_calculateSize_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CTexture::calculateSize();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_unloadImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTextureProxy))
				{
					pObjectX->EarthView::World::Graphic::CTexture::unloadImpl();
				}
				else
				{
					pObjectX->unloadImpl();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1unloadImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unloadImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unloadImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_unloadImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTexture *pObjectX = (EarthView::World::Graphic::CTexture*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTexture::unloadImpl();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1preLoadImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_preLoadImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"preLoadImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1postLoadImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postLoadImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postLoadImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1preUnloadImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_preUnloadImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"preUnloadImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1postUnloadImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postUnloadImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postUnloadImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1prepareImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepareImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepareImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1unprepareImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unprepareImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unprepareImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1loadImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_loadImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"loadImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1prepare_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepare_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepare_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1prepare_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepare_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepare_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1load_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1load_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1reload_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_reload_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"reload_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1isReloadable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isReloadable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isReloadable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1isManuallyLoaded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isManuallyLoaded_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isManuallyLoaded_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1unload_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unload_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unload_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSize_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSize_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1touch_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_touch_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"touch_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getHandle_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getHandle_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getHandle_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1isPrepared_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isPrepared_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isPrepared_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1isLoaded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isLoaded_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isLoaded_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1isLoading_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isLoading_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isLoading_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getLoadingState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLoadingState_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLoadingState_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1isBackgroundLoaded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isBackgroundLoaded_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isBackgroundLoaded_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1setBackgroundLoaded_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setBackgroundLoaded_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setBackgroundLoaded_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1escalateLoading_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_escalateLoading_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"escalateLoading_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1addListener_1CResourceListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addListener_CResourceListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addListener_CResourceListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1removeListener_1CResourceListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeListener_CResourceListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeListener_CResourceListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getGroup_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getGroup_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getGroup_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1changeGroupOwnership_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_changeGroupOwnership_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"changeGroupOwnership_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getCreator_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCreator_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCreator_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getOrigin_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getOrigin_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getOrigin_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1_1notifyOrigin_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyOrigin_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyOrigin_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getStateCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getStateCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getStateCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1_1dirtyState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__dirtyState_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_dirtyState_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1_1fireLoadingComplete_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__fireLoadingComplete_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_fireLoadingComplete_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1_1firePreparingComplete_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__firePreparingComplete_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_firePreparingComplete_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1_1fireUnloadingComplete_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__fireUnloadingComplete_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_fireUnloadingComplete_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1setParameter_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParameter_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParameter_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1setParameter_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParameter_EVString_ev_bool_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParameter_EVString_ev_bool_ev_bool_callback", "(Ljava/lang/String;ZZ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1setParameterList_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParameterList_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParameterList_CommonStringPairList_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1getParameter_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getParameter_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getParameter_EVString_callback", "(Ljava/lang/String;)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Texture_register_1copyParametersTo_1CStringInterface(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTextureProxy *pObjectX = (JCTextureProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_copyParametersTo_CStringInterface_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"copyParametersTo_CStringInterface_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TexturePtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTexturePtr *pObjectX = (EarthView::World::Graphic::CTexturePtr*) pObjXXXX;
				EarthView::World::Graphic::CTexture* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TexturePtr_OperatorAssign_1ResourcePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
			{
				EarthView::World::Graphic::CTexturePtr& pObjectX = *(EarthView::World::Graphic::CTexturePtr*) pObjXXXX;
				const EarthView::World::Graphic::ResourcePtr &r = *(EarthView::World::Graphic::ResourcePtr*) r_j;
				pObjectX = r;
				EarthView::World::Graphic::CTexturePtr& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TexturePtr_OperatorConvertionResourcePtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
			{
				EarthView::World::Graphic::CTexturePtr& pObjectX = *(EarthView::World::Graphic::CTexturePtr*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr __values1 = pObjectX ;
				EarthView::World::Graphic::ResourcePtr *returnvalues = new EarthView::World::Graphic::ResourcePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
		}
	}
}
