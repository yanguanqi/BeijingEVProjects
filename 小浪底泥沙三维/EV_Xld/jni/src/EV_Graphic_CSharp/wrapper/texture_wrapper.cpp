/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/texture.h"
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
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_setTextureType_void_TextureType_Callback)(_in int ttype);
			typedef int  ( _stdcall EarthView_World_Graphic_CTexture_getTextureType_TextureType_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CTexture_getNumMipmaps_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_setNumMipmaps_void_ev_size_t_Callback)(_in ev_uint64  num);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CTexture_getMipmapsHardwareGenerated_ev_bool_Callback)();
			typedef ev_real32  ( _stdcall EarthView_World_Graphic_CTexture_getGamma_ev_real32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_setGamma_void_ev_real32_Callback)(_in ev_real32 g);
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_setHardwareGammaEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CTexture_isHardwareGammaEnabled_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_setFSAA_void_ev_uint32_EVString_Callback)(_in ev_uint32 fsaa, _in char*& fsaaHint);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CTexture_getFSAA_ev_uint32_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CTexture_getFSAAHint_EVString_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CTexture_getHeight_ev_size_t_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CTexture_getWidth_ev_size_t_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CTexture_getDepth_ev_size_t_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CTexture_getSrcHeight_ev_size_t_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CTexture_getSrcWidth_ev_size_t_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CTexture_getSrcDepth_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_setHeight_void_ev_size_t_Callback)(_in ev_uint64  h);
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_setWidth_void_ev_size_t_Callback)(_in ev_uint64  w);
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_setDepth_void_ev_size_t_Callback)(_in ev_uint64  d);
			typedef ev_int32  ( _stdcall EarthView_World_Graphic_CTexture_getUsage_ev_int32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_setUsage_void_ev_int32_Callback)(_in ev_int32 u);
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_createInternalResources_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_freeInternalResources_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_copyToTexture_void_CTexturePtr_Callback)(_inout void* target);
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_loadImage_void_CImage_Callback)(_in const void* img);
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_loadRawData_void_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_Callback)(_inout void* stream, _in ev_uint16 uWidth, _in ev_uint16 uHeight, _in int eFormat);
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture__loadImages_void_ConstImagePtrList_Callback)(_in const void* images);
			typedef int  ( _stdcall EarthView_World_Graphic_CTexture_getFormat_PixelFormat_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_setFormat_void_PixelFormat_Callback)(_in int pf);
			typedef int  ( _stdcall EarthView_World_Graphic_CTexture_getDesiredFormat_PixelFormat_Callback)();
			typedef int  ( _stdcall EarthView_World_Graphic_CTexture_getSrcFormat_PixelFormat_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CTexture_hasAlpha_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_setDesiredIntegerBitDepth_void_ev_uint16_Callback)(_in ev_uint16 bits);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CTexture_getDesiredIntegerBitDepth_ev_uint16_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_setDesiredFloatBitDepth_void_ev_uint16_Callback)(_in ev_uint16 bits);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CTexture_getDesiredFloatBitDepth_ev_uint16_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_setDesiredBitDepths_void_ev_uint16_ev_uint16_Callback)(_in ev_uint16 integerBits, _in ev_uint16 floatBits);
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_setTreatLuminanceAsAlpha_void_ev_bool_Callback)(_in ev_bool asAlpha);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CTexture_getTreatLuminanceAsAlpha_ev_bool_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CTexture_getNumFaces_ev_size_t_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t_ev_size_t_Callback)(_in ev_uint64  face, _in ev_uint64  mipmap);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t_Callback)(_in ev_uint64  face);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_convertToImage_void_CImage_ev_bool_Callback)(_inout void* destImage, _in ev_bool includeMipMaps);
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_convertToImage_void_CImage_Callback)(_inout void* destImage);
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_getCustomAttribute_void_EVString_void_Callback)(_in char*& name, _in void* pData);
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_reload_void_CImage_Callback)(_inout void* img);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CTexture_getTextureID_ev_uint32_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CTexture_getSystemResource_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_preLoadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_postLoadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_preUnloadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_postUnloadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_prepareImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_unprepareImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_loadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_unloadImpl_void_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CTexture_calculateSize_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_prepare_void_ev_bool_Callback)(_in ev_bool backgroundThread);
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_prepare_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_load_void_ev_bool_Callback)(_in ev_bool backgroundThread);
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_load_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_reload_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CTexture_isReloadable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CTexture_isManuallyLoaded_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_unload_void_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CTexture_getSize_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_touch_void_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CTexture_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Graphic_CTexture_getHandle_ev_uint64_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CTexture_isPrepared_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CTexture_isLoaded_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CTexture_isLoading_ev_bool_Callback)();
			typedef int  ( _stdcall EarthView_World_Graphic_CTexture_getLoadingState_LoadingState_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CTexture_isBackgroundLoaded_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_setBackgroundLoaded_void_ev_bool_Callback)(_in ev_bool bl);
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_escalateLoading_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_addListener_void_CResourceListener_Callback)(_in EarthView::World::Graphic::CResource::CResourceListener* ref_lis);
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_removeListener_void_CResourceListener_Callback)(_in EarthView::World::Graphic::CResource::CResourceListener* lis);
			typedef char*  ( _stdcall EarthView_World_Graphic_CTexture_getGroup_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_changeGroupOwnership_void_EVString_Callback)(_in char*& newGroup);
			typedef EarthView::World::Graphic::CResourceManager*  ( _stdcall EarthView_World_Graphic_CTexture_getCreator_CResourceManager_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CTexture_getOrigin_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture__notifyOrigin_void_EVString_Callback)(_in char*& origin);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CTexture_getStateCount_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture__dirtyState_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture__fireLoadingComplete_void_ev_bool_Callback)(_in ev_bool wasBackgroundLoaded);
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture__firePreparingComplete_void_ev_bool_Callback)(_in ev_bool wasBackgroundLoaded);
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture__fireUnloadingComplete_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CTexture_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CTexture_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
			typedef char*  ( _stdcall EarthView_World_Graphic_CTexture_getParameter_EVString_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CTexture_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
			class CTextureProxy : public EarthView::World::Graphic::CTexture
			{
			private:
				EarthView_World_Graphic_CTexture_setTextureType_void_TextureType_Callback* m_EarthView_World_Graphic_CTexture_setTextureType_void_TextureType_Callback;
				EarthView_World_Graphic_CTexture_getTextureType_TextureType_Callback* m_EarthView_World_Graphic_CTexture_getTextureType_TextureType_Callback;
				EarthView_World_Graphic_CTexture_getNumMipmaps_ev_size_t_Callback* m_EarthView_World_Graphic_CTexture_getNumMipmaps_ev_size_t_Callback;
				EarthView_World_Graphic_CTexture_setNumMipmaps_void_ev_size_t_Callback* m_EarthView_World_Graphic_CTexture_setNumMipmaps_void_ev_size_t_Callback;
				EarthView_World_Graphic_CTexture_getMipmapsHardwareGenerated_ev_bool_Callback* m_EarthView_World_Graphic_CTexture_getMipmapsHardwareGenerated_ev_bool_Callback;
				EarthView_World_Graphic_CTexture_getGamma_ev_real32_Callback* m_EarthView_World_Graphic_CTexture_getGamma_ev_real32_Callback;
				EarthView_World_Graphic_CTexture_setGamma_void_ev_real32_Callback* m_EarthView_World_Graphic_CTexture_setGamma_void_ev_real32_Callback;
				EarthView_World_Graphic_CTexture_setHardwareGammaEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CTexture_setHardwareGammaEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CTexture_isHardwareGammaEnabled_ev_bool_Callback* m_EarthView_World_Graphic_CTexture_isHardwareGammaEnabled_ev_bool_Callback;
				EarthView_World_Graphic_CTexture_setFSAA_void_ev_uint32_EVString_Callback* m_EarthView_World_Graphic_CTexture_setFSAA_void_ev_uint32_EVString_Callback;
				EarthView_World_Graphic_CTexture_getFSAA_ev_uint32_Callback* m_EarthView_World_Graphic_CTexture_getFSAA_ev_uint32_Callback;
				EarthView_World_Graphic_CTexture_getFSAAHint_EVString_Callback* m_EarthView_World_Graphic_CTexture_getFSAAHint_EVString_Callback;
				EarthView_World_Graphic_CTexture_getHeight_ev_size_t_Callback* m_EarthView_World_Graphic_CTexture_getHeight_ev_size_t_Callback;
				EarthView_World_Graphic_CTexture_getWidth_ev_size_t_Callback* m_EarthView_World_Graphic_CTexture_getWidth_ev_size_t_Callback;
				EarthView_World_Graphic_CTexture_getDepth_ev_size_t_Callback* m_EarthView_World_Graphic_CTexture_getDepth_ev_size_t_Callback;
				EarthView_World_Graphic_CTexture_getSrcHeight_ev_size_t_Callback* m_EarthView_World_Graphic_CTexture_getSrcHeight_ev_size_t_Callback;
				EarthView_World_Graphic_CTexture_getSrcWidth_ev_size_t_Callback* m_EarthView_World_Graphic_CTexture_getSrcWidth_ev_size_t_Callback;
				EarthView_World_Graphic_CTexture_getSrcDepth_ev_size_t_Callback* m_EarthView_World_Graphic_CTexture_getSrcDepth_ev_size_t_Callback;
				EarthView_World_Graphic_CTexture_setHeight_void_ev_size_t_Callback* m_EarthView_World_Graphic_CTexture_setHeight_void_ev_size_t_Callback;
				EarthView_World_Graphic_CTexture_setWidth_void_ev_size_t_Callback* m_EarthView_World_Graphic_CTexture_setWidth_void_ev_size_t_Callback;
				EarthView_World_Graphic_CTexture_setDepth_void_ev_size_t_Callback* m_EarthView_World_Graphic_CTexture_setDepth_void_ev_size_t_Callback;
				EarthView_World_Graphic_CTexture_getUsage_ev_int32_Callback* m_EarthView_World_Graphic_CTexture_getUsage_ev_int32_Callback;
				EarthView_World_Graphic_CTexture_setUsage_void_ev_int32_Callback* m_EarthView_World_Graphic_CTexture_setUsage_void_ev_int32_Callback;
				EarthView_World_Graphic_CTexture_createInternalResources_void_Callback* m_EarthView_World_Graphic_CTexture_createInternalResources_void_Callback;
				EarthView_World_Graphic_CTexture_freeInternalResources_void_Callback* m_EarthView_World_Graphic_CTexture_freeInternalResources_void_Callback;
				EarthView_World_Graphic_CTexture_copyToTexture_void_CTexturePtr_Callback* m_EarthView_World_Graphic_CTexture_copyToTexture_void_CTexturePtr_Callback;
				EarthView_World_Graphic_CTexture_loadImage_void_CImage_Callback* m_EarthView_World_Graphic_CTexture_loadImage_void_CImage_Callback;
				EarthView_World_Graphic_CTexture_loadRawData_void_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_Callback* m_EarthView_World_Graphic_CTexture_loadRawData_void_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_Callback;
				EarthView_World_Graphic_CTexture__loadImages_void_ConstImagePtrList_Callback* m_EarthView_World_Graphic_CTexture__loadImages_void_ConstImagePtrList_Callback;
				EarthView_World_Graphic_CTexture_getFormat_PixelFormat_Callback* m_EarthView_World_Graphic_CTexture_getFormat_PixelFormat_Callback;
				EarthView_World_Graphic_CTexture_setFormat_void_PixelFormat_Callback* m_EarthView_World_Graphic_CTexture_setFormat_void_PixelFormat_Callback;
				EarthView_World_Graphic_CTexture_getDesiredFormat_PixelFormat_Callback* m_EarthView_World_Graphic_CTexture_getDesiredFormat_PixelFormat_Callback;
				EarthView_World_Graphic_CTexture_getSrcFormat_PixelFormat_Callback* m_EarthView_World_Graphic_CTexture_getSrcFormat_PixelFormat_Callback;
				EarthView_World_Graphic_CTexture_hasAlpha_ev_bool_Callback* m_EarthView_World_Graphic_CTexture_hasAlpha_ev_bool_Callback;
				EarthView_World_Graphic_CTexture_setDesiredIntegerBitDepth_void_ev_uint16_Callback* m_EarthView_World_Graphic_CTexture_setDesiredIntegerBitDepth_void_ev_uint16_Callback;
				EarthView_World_Graphic_CTexture_getDesiredIntegerBitDepth_ev_uint16_Callback* m_EarthView_World_Graphic_CTexture_getDesiredIntegerBitDepth_ev_uint16_Callback;
				EarthView_World_Graphic_CTexture_setDesiredFloatBitDepth_void_ev_uint16_Callback* m_EarthView_World_Graphic_CTexture_setDesiredFloatBitDepth_void_ev_uint16_Callback;
				EarthView_World_Graphic_CTexture_getDesiredFloatBitDepth_ev_uint16_Callback* m_EarthView_World_Graphic_CTexture_getDesiredFloatBitDepth_ev_uint16_Callback;
				EarthView_World_Graphic_CTexture_setDesiredBitDepths_void_ev_uint16_ev_uint16_Callback* m_EarthView_World_Graphic_CTexture_setDesiredBitDepths_void_ev_uint16_ev_uint16_Callback;
				EarthView_World_Graphic_CTexture_setTreatLuminanceAsAlpha_void_ev_bool_Callback* m_EarthView_World_Graphic_CTexture_setTreatLuminanceAsAlpha_void_ev_bool_Callback;
				EarthView_World_Graphic_CTexture_getTreatLuminanceAsAlpha_ev_bool_Callback* m_EarthView_World_Graphic_CTexture_getTreatLuminanceAsAlpha_ev_bool_Callback;
				EarthView_World_Graphic_CTexture_getNumFaces_ev_size_t_Callback* m_EarthView_World_Graphic_CTexture_getNumFaces_ev_size_t_Callback;
				EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t_Callback* m_EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t_Callback;
				EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_Callback* m_EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_Callback;
				EarthView_World_Graphic_CTexture_convertToImage_void_CImage_ev_bool_Callback* m_EarthView_World_Graphic_CTexture_convertToImage_void_CImage_ev_bool_Callback;
				EarthView_World_Graphic_CTexture_convertToImage_void_CImage_Callback* m_EarthView_World_Graphic_CTexture_convertToImage_void_CImage_Callback;
				EarthView_World_Graphic_CTexture_getCustomAttribute_void_EVString_void_Callback* m_EarthView_World_Graphic_CTexture_getCustomAttribute_void_EVString_void_Callback;
				EarthView_World_Graphic_CTexture_reload_void_CImage_Callback* m_EarthView_World_Graphic_CTexture_reload_void_CImage_Callback;
				EarthView_World_Graphic_CTexture_getTextureID_ev_uint32_Callback* m_EarthView_World_Graphic_CTexture_getTextureID_ev_uint32_Callback;
				EarthView_World_Graphic_CTexture_getSystemResource_void_Callback* m_EarthView_World_Graphic_CTexture_getSystemResource_void_Callback;
				EarthView_World_Graphic_CTexture_preLoadImpl_void_Callback* m_EarthView_World_Graphic_CTexture_preLoadImpl_void_Callback;
				EarthView_World_Graphic_CTexture_postLoadImpl_void_Callback* m_EarthView_World_Graphic_CTexture_postLoadImpl_void_Callback;
				EarthView_World_Graphic_CTexture_preUnloadImpl_void_Callback* m_EarthView_World_Graphic_CTexture_preUnloadImpl_void_Callback;
				EarthView_World_Graphic_CTexture_postUnloadImpl_void_Callback* m_EarthView_World_Graphic_CTexture_postUnloadImpl_void_Callback;
				EarthView_World_Graphic_CTexture_prepareImpl_void_Callback* m_EarthView_World_Graphic_CTexture_prepareImpl_void_Callback;
				EarthView_World_Graphic_CTexture_unprepareImpl_void_Callback* m_EarthView_World_Graphic_CTexture_unprepareImpl_void_Callback;
				EarthView_World_Graphic_CTexture_loadImpl_void_Callback* m_EarthView_World_Graphic_CTexture_loadImpl_void_Callback;
				EarthView_World_Graphic_CTexture_unloadImpl_void_Callback* m_EarthView_World_Graphic_CTexture_unloadImpl_void_Callback;
				EarthView_World_Graphic_CTexture_calculateSize_ev_size_t_Callback* m_EarthView_World_Graphic_CTexture_calculateSize_ev_size_t_Callback;
				EarthView_World_Graphic_CTexture_prepare_void_ev_bool_Callback* m_EarthView_World_Graphic_CTexture_prepare_void_ev_bool_Callback;
				EarthView_World_Graphic_CTexture_prepare_void_Callback* m_EarthView_World_Graphic_CTexture_prepare_void_Callback;
				EarthView_World_Graphic_CTexture_load_void_ev_bool_Callback* m_EarthView_World_Graphic_CTexture_load_void_ev_bool_Callback;
				EarthView_World_Graphic_CTexture_load_void_Callback* m_EarthView_World_Graphic_CTexture_load_void_Callback;
				EarthView_World_Graphic_CTexture_reload_void_Callback* m_EarthView_World_Graphic_CTexture_reload_void_Callback;
				EarthView_World_Graphic_CTexture_isReloadable_ev_bool_Callback* m_EarthView_World_Graphic_CTexture_isReloadable_ev_bool_Callback;
				EarthView_World_Graphic_CTexture_isManuallyLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CTexture_isManuallyLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CTexture_unload_void_Callback* m_EarthView_World_Graphic_CTexture_unload_void_Callback;
				EarthView_World_Graphic_CTexture_getSize_ev_size_t_Callback* m_EarthView_World_Graphic_CTexture_getSize_ev_size_t_Callback;
				EarthView_World_Graphic_CTexture_touch_void_Callback* m_EarthView_World_Graphic_CTexture_touch_void_Callback;
				EarthView_World_Graphic_CTexture_getName_EVString_Callback* m_EarthView_World_Graphic_CTexture_getName_EVString_Callback;
				EarthView_World_Graphic_CTexture_getHandle_ev_uint64_Callback* m_EarthView_World_Graphic_CTexture_getHandle_ev_uint64_Callback;
				EarthView_World_Graphic_CTexture_isPrepared_ev_bool_Callback* m_EarthView_World_Graphic_CTexture_isPrepared_ev_bool_Callback;
				EarthView_World_Graphic_CTexture_isLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CTexture_isLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CTexture_isLoading_ev_bool_Callback* m_EarthView_World_Graphic_CTexture_isLoading_ev_bool_Callback;
				EarthView_World_Graphic_CTexture_getLoadingState_LoadingState_Callback* m_EarthView_World_Graphic_CTexture_getLoadingState_LoadingState_Callback;
				EarthView_World_Graphic_CTexture_isBackgroundLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CTexture_isBackgroundLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CTexture_setBackgroundLoaded_void_ev_bool_Callback* m_EarthView_World_Graphic_CTexture_setBackgroundLoaded_void_ev_bool_Callback;
				EarthView_World_Graphic_CTexture_escalateLoading_void_Callback* m_EarthView_World_Graphic_CTexture_escalateLoading_void_Callback;
				EarthView_World_Graphic_CTexture_addListener_void_CResourceListener_Callback* m_EarthView_World_Graphic_CTexture_addListener_void_CResourceListener_Callback;
				EarthView_World_Graphic_CTexture_removeListener_void_CResourceListener_Callback* m_EarthView_World_Graphic_CTexture_removeListener_void_CResourceListener_Callback;
				EarthView_World_Graphic_CTexture_getGroup_EVString_Callback* m_EarthView_World_Graphic_CTexture_getGroup_EVString_Callback;
				EarthView_World_Graphic_CTexture_changeGroupOwnership_void_EVString_Callback* m_EarthView_World_Graphic_CTexture_changeGroupOwnership_void_EVString_Callback;
				EarthView_World_Graphic_CTexture_getCreator_CResourceManager_Callback* m_EarthView_World_Graphic_CTexture_getCreator_CResourceManager_Callback;
				EarthView_World_Graphic_CTexture_getOrigin_EVString_Callback* m_EarthView_World_Graphic_CTexture_getOrigin_EVString_Callback;
				EarthView_World_Graphic_CTexture__notifyOrigin_void_EVString_Callback* m_EarthView_World_Graphic_CTexture__notifyOrigin_void_EVString_Callback;
				EarthView_World_Graphic_CTexture_getStateCount_ev_size_t_Callback* m_EarthView_World_Graphic_CTexture_getStateCount_ev_size_t_Callback;
				EarthView_World_Graphic_CTexture__dirtyState_void_Callback* m_EarthView_World_Graphic_CTexture__dirtyState_void_Callback;
				EarthView_World_Graphic_CTexture__fireLoadingComplete_void_ev_bool_Callback* m_EarthView_World_Graphic_CTexture__fireLoadingComplete_void_ev_bool_Callback;
				EarthView_World_Graphic_CTexture__firePreparingComplete_void_ev_bool_Callback* m_EarthView_World_Graphic_CTexture__firePreparingComplete_void_ev_bool_Callback;
				EarthView_World_Graphic_CTexture__fireUnloadingComplete_void_Callback* m_EarthView_World_Graphic_CTexture__fireUnloadingComplete_void_Callback;
				EarthView_World_Graphic_CTexture_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Graphic_CTexture_setParameter_ev_bool_EVString_EVString_Callback;
				EarthView_World_Graphic_CTexture_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CTexture_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CTexture_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Graphic_CTexture_setParameterList_void_CommonStringPairList_Callback;
				EarthView_World_Graphic_CTexture_getParameter_EVString_EVString_Callback* m_EarthView_World_Graphic_CTexture_getParameter_EVString_EVString_Callback;
				EarthView_World_Graphic_CTexture_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Graphic_CTexture_copyParametersTo_void_CStringInterface_Callback;
			public:
				CTextureProxy(EarthView::World::Core::CNameValuePairList *pList) : CTexture(pList)
				{
					m_EarthView_World_Graphic_CTexture_setTextureType_void_TextureType_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getTextureType_TextureType_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getNumMipmaps_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_setNumMipmaps_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getMipmapsHardwareGenerated_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getGamma_ev_real32_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_setGamma_void_ev_real32_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_setHardwareGammaEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_isHardwareGammaEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_setFSAA_void_ev_uint32_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getFSAA_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getFSAAHint_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getHeight_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getWidth_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getDepth_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getSrcHeight_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getSrcWidth_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getSrcDepth_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_setHeight_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_setWidth_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_setDepth_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getUsage_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_setUsage_void_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_createInternalResources_void_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_freeInternalResources_void_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_copyToTexture_void_CTexturePtr_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_loadImage_void_CImage_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_loadRawData_void_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_Callback = NULL;
					m_EarthView_World_Graphic_CTexture__loadImages_void_ConstImagePtrList_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getFormat_PixelFormat_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_setFormat_void_PixelFormat_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getDesiredFormat_PixelFormat_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getSrcFormat_PixelFormat_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_hasAlpha_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_setDesiredIntegerBitDepth_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getDesiredIntegerBitDepth_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_setDesiredFloatBitDepth_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getDesiredFloatBitDepth_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_setDesiredBitDepths_void_ev_uint16_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_setTreatLuminanceAsAlpha_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getTreatLuminanceAsAlpha_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getNumFaces_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_convertToImage_void_CImage_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_convertToImage_void_CImage_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getCustomAttribute_void_EVString_void_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_reload_void_CImage_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getTextureID_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getSystemResource_void_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_preLoadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_postLoadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_preUnloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_postUnloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_prepareImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_unprepareImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_loadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_unloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_calculateSize_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_prepare_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_prepare_void_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_load_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_load_void_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_reload_void_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_isReloadable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_isManuallyLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_unload_void_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getSize_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_touch_void_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getName_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getHandle_ev_uint64_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_isPrepared_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_isLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_isLoading_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getLoadingState_LoadingState_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_isBackgroundLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_setBackgroundLoaded_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_escalateLoading_void_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_addListener_void_CResourceListener_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_removeListener_void_CResourceListener_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getGroup_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_changeGroupOwnership_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getCreator_CResourceManager_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getOrigin_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTexture__notifyOrigin_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getStateCount_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTexture__dirtyState_void_Callback = NULL;
					m_EarthView_World_Graphic_CTexture__fireLoadingComplete_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTexture__firePreparingComplete_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTexture__fireUnloadingComplete_void_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_setParameter_ev_bool_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_setParameterList_void_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_getParameter_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTexture_copyParametersTo_void_CStringInterface_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CTexture_setTextureType_void_TextureType(EarthView_World_Graphic_CTexture_setTextureType_void_TextureType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_setTextureType_void_TextureType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getTextureType_TextureType(EarthView_World_Graphic_CTexture_getTextureType_TextureType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getTextureType_TextureType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getNumMipmaps_ev_size_t(EarthView_World_Graphic_CTexture_getNumMipmaps_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getNumMipmaps_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_setNumMipmaps_void_ev_size_t(EarthView_World_Graphic_CTexture_setNumMipmaps_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_setNumMipmaps_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getMipmapsHardwareGenerated_ev_bool(EarthView_World_Graphic_CTexture_getMipmapsHardwareGenerated_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getMipmapsHardwareGenerated_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getGamma_ev_real32(EarthView_World_Graphic_CTexture_getGamma_ev_real32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getGamma_ev_real32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_setGamma_void_ev_real32(EarthView_World_Graphic_CTexture_setGamma_void_ev_real32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_setGamma_void_ev_real32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_setHardwareGammaEnabled_void_ev_bool(EarthView_World_Graphic_CTexture_setHardwareGammaEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_setHardwareGammaEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_isHardwareGammaEnabled_ev_bool(EarthView_World_Graphic_CTexture_isHardwareGammaEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_isHardwareGammaEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_setFSAA_void_ev_uint32_EVString(EarthView_World_Graphic_CTexture_setFSAA_void_ev_uint32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_setFSAA_void_ev_uint32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getFSAA_ev_uint32(EarthView_World_Graphic_CTexture_getFSAA_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getFSAA_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getFSAAHint_EVString(EarthView_World_Graphic_CTexture_getFSAAHint_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getFSAAHint_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getHeight_ev_size_t(EarthView_World_Graphic_CTexture_getHeight_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getHeight_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getWidth_ev_size_t(EarthView_World_Graphic_CTexture_getWidth_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getWidth_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getDepth_ev_size_t(EarthView_World_Graphic_CTexture_getDepth_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getDepth_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getSrcHeight_ev_size_t(EarthView_World_Graphic_CTexture_getSrcHeight_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getSrcHeight_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getSrcWidth_ev_size_t(EarthView_World_Graphic_CTexture_getSrcWidth_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getSrcWidth_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getSrcDepth_ev_size_t(EarthView_World_Graphic_CTexture_getSrcDepth_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getSrcDepth_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_setHeight_void_ev_size_t(EarthView_World_Graphic_CTexture_setHeight_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_setHeight_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_setWidth_void_ev_size_t(EarthView_World_Graphic_CTexture_setWidth_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_setWidth_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_setDepth_void_ev_size_t(EarthView_World_Graphic_CTexture_setDepth_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_setDepth_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getUsage_ev_int32(EarthView_World_Graphic_CTexture_getUsage_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getUsage_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_setUsage_void_ev_int32(EarthView_World_Graphic_CTexture_setUsage_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_setUsage_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_createInternalResources_void(EarthView_World_Graphic_CTexture_createInternalResources_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_createInternalResources_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_freeInternalResources_void(EarthView_World_Graphic_CTexture_freeInternalResources_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_freeInternalResources_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_copyToTexture_void_CTexturePtr(EarthView_World_Graphic_CTexture_copyToTexture_void_CTexturePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_copyToTexture_void_CTexturePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_loadImage_void_CImage(EarthView_World_Graphic_CTexture_loadImage_void_CImage_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_loadImage_void_CImage_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_loadRawData_void_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat(EarthView_World_Graphic_CTexture_loadRawData_void_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_loadRawData_void_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture__loadImages_void_ConstImagePtrList(EarthView_World_Graphic_CTexture__loadImages_void_ConstImagePtrList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture__loadImages_void_ConstImagePtrList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getFormat_PixelFormat(EarthView_World_Graphic_CTexture_getFormat_PixelFormat_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getFormat_PixelFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_setFormat_void_PixelFormat(EarthView_World_Graphic_CTexture_setFormat_void_PixelFormat_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_setFormat_void_PixelFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getDesiredFormat_PixelFormat(EarthView_World_Graphic_CTexture_getDesiredFormat_PixelFormat_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getDesiredFormat_PixelFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getSrcFormat_PixelFormat(EarthView_World_Graphic_CTexture_getSrcFormat_PixelFormat_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getSrcFormat_PixelFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_hasAlpha_ev_bool(EarthView_World_Graphic_CTexture_hasAlpha_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_hasAlpha_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_setDesiredIntegerBitDepth_void_ev_uint16(EarthView_World_Graphic_CTexture_setDesiredIntegerBitDepth_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_setDesiredIntegerBitDepth_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getDesiredIntegerBitDepth_ev_uint16(EarthView_World_Graphic_CTexture_getDesiredIntegerBitDepth_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getDesiredIntegerBitDepth_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_setDesiredFloatBitDepth_void_ev_uint16(EarthView_World_Graphic_CTexture_setDesiredFloatBitDepth_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_setDesiredFloatBitDepth_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getDesiredFloatBitDepth_ev_uint16(EarthView_World_Graphic_CTexture_getDesiredFloatBitDepth_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getDesiredFloatBitDepth_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_setDesiredBitDepths_void_ev_uint16_ev_uint16(EarthView_World_Graphic_CTexture_setDesiredBitDepths_void_ev_uint16_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_setDesiredBitDepths_void_ev_uint16_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_setTreatLuminanceAsAlpha_void_ev_bool(EarthView_World_Graphic_CTexture_setTreatLuminanceAsAlpha_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_setTreatLuminanceAsAlpha_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getTreatLuminanceAsAlpha_ev_bool(EarthView_World_Graphic_CTexture_getTreatLuminanceAsAlpha_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getTreatLuminanceAsAlpha_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getNumFaces_ev_size_t(EarthView_World_Graphic_CTexture_getNumFaces_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getNumFaces_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t_ev_size_t(EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t(EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr(EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_convertToImage_void_CImage_ev_bool(EarthView_World_Graphic_CTexture_convertToImage_void_CImage_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_convertToImage_void_CImage_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_convertToImage_void_CImage(EarthView_World_Graphic_CTexture_convertToImage_void_CImage_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_convertToImage_void_CImage_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getCustomAttribute_void_EVString_void(EarthView_World_Graphic_CTexture_getCustomAttribute_void_EVString_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getCustomAttribute_void_EVString_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_reload_void_CImage(EarthView_World_Graphic_CTexture_reload_void_CImage_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_reload_void_CImage_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getTextureID_ev_uint32(EarthView_World_Graphic_CTexture_getTextureID_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getTextureID_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getSystemResource_void(EarthView_World_Graphic_CTexture_getSystemResource_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getSystemResource_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_preLoadImpl_void(EarthView_World_Graphic_CTexture_preLoadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_preLoadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_postLoadImpl_void(EarthView_World_Graphic_CTexture_postLoadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_postLoadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_preUnloadImpl_void(EarthView_World_Graphic_CTexture_preUnloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_preUnloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_postUnloadImpl_void(EarthView_World_Graphic_CTexture_postUnloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_postUnloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_prepareImpl_void(EarthView_World_Graphic_CTexture_prepareImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_prepareImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_unprepareImpl_void(EarthView_World_Graphic_CTexture_unprepareImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_unprepareImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_loadImpl_void(EarthView_World_Graphic_CTexture_loadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_loadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_unloadImpl_void(EarthView_World_Graphic_CTexture_unloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_unloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_calculateSize_ev_size_t(EarthView_World_Graphic_CTexture_calculateSize_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_calculateSize_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_prepare_void_ev_bool(EarthView_World_Graphic_CTexture_prepare_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_prepare_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_prepare_void(EarthView_World_Graphic_CTexture_prepare_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_prepare_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_load_void_ev_bool(EarthView_World_Graphic_CTexture_load_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_load_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_load_void(EarthView_World_Graphic_CTexture_load_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_load_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_reload_void(EarthView_World_Graphic_CTexture_reload_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_reload_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_isReloadable_ev_bool(EarthView_World_Graphic_CTexture_isReloadable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_isReloadable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_isManuallyLoaded_ev_bool(EarthView_World_Graphic_CTexture_isManuallyLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_isManuallyLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_unload_void(EarthView_World_Graphic_CTexture_unload_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_unload_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getSize_ev_size_t(EarthView_World_Graphic_CTexture_getSize_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getSize_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_touch_void(EarthView_World_Graphic_CTexture_touch_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_touch_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getName_EVString(EarthView_World_Graphic_CTexture_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getHandle_ev_uint64(EarthView_World_Graphic_CTexture_getHandle_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getHandle_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_isPrepared_ev_bool(EarthView_World_Graphic_CTexture_isPrepared_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_isPrepared_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_isLoaded_ev_bool(EarthView_World_Graphic_CTexture_isLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_isLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_isLoading_ev_bool(EarthView_World_Graphic_CTexture_isLoading_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_isLoading_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getLoadingState_LoadingState(EarthView_World_Graphic_CTexture_getLoadingState_LoadingState_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getLoadingState_LoadingState_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_isBackgroundLoaded_ev_bool(EarthView_World_Graphic_CTexture_isBackgroundLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_isBackgroundLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_setBackgroundLoaded_void_ev_bool(EarthView_World_Graphic_CTexture_setBackgroundLoaded_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_setBackgroundLoaded_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_escalateLoading_void(EarthView_World_Graphic_CTexture_escalateLoading_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_escalateLoading_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_addListener_void_CResourceListener(EarthView_World_Graphic_CTexture_addListener_void_CResourceListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_addListener_void_CResourceListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_removeListener_void_CResourceListener(EarthView_World_Graphic_CTexture_removeListener_void_CResourceListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_removeListener_void_CResourceListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getGroup_EVString(EarthView_World_Graphic_CTexture_getGroup_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getGroup_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_changeGroupOwnership_void_EVString(EarthView_World_Graphic_CTexture_changeGroupOwnership_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_changeGroupOwnership_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getCreator_CResourceManager(EarthView_World_Graphic_CTexture_getCreator_CResourceManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getCreator_CResourceManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getOrigin_EVString(EarthView_World_Graphic_CTexture_getOrigin_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getOrigin_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture__notifyOrigin_void_EVString(EarthView_World_Graphic_CTexture__notifyOrigin_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture__notifyOrigin_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getStateCount_ev_size_t(EarthView_World_Graphic_CTexture_getStateCount_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getStateCount_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture__dirtyState_void(EarthView_World_Graphic_CTexture__dirtyState_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture__dirtyState_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture__fireLoadingComplete_void_ev_bool(EarthView_World_Graphic_CTexture__fireLoadingComplete_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture__fireLoadingComplete_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture__firePreparingComplete_void_ev_bool(EarthView_World_Graphic_CTexture__firePreparingComplete_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture__firePreparingComplete_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture__fireUnloadingComplete_void(EarthView_World_Graphic_CTexture__fireUnloadingComplete_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture__fireUnloadingComplete_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_setParameter_ev_bool_EVString_EVString(EarthView_World_Graphic_CTexture_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Graphic_CTexture_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_setParameterList_void_CommonStringPairList(EarthView_World_Graphic_CTexture_setParameterList_void_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_setParameterList_void_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_getParameter_EVString_EVString(EarthView_World_Graphic_CTexture_getParameter_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_getParameter_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexture_copyParametersTo_void_CStringInterface(EarthView_World_Graphic_CTexture_copyParametersTo_void_CStringInterface_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexture_copyParametersTo_void_CStringInterface_Callback = pCallback;
				}
				virtual void setTextureType(_in EarthView::World::Graphic::TextureType ttype)
				{
					if(m_EarthView_World_Graphic_CTexture_setTextureType_void_TextureType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_setTextureType_void_TextureType_Callback((int)ttype);
					}
					else
						return this->CTexture::setTextureType(ttype);
				}
				virtual EarthView::World::Graphic::TextureType getTextureType() const
				{
					if(m_EarthView_World_Graphic_CTexture_getTextureType_TextureType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::TextureType returnValue = (EarthView::World::Graphic::TextureType)m_EarthView_World_Graphic_CTexture_getTextureType_TextureType_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getTextureType();
				}
				virtual ev_size_t getNumMipmaps() const
				{
					if(m_EarthView_World_Graphic_CTexture_getNumMipmaps_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CTexture_getNumMipmaps_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getNumMipmaps();
				}
				virtual void setNumMipmaps(_in ev_size_t num)
				{
					if(m_EarthView_World_Graphic_CTexture_setNumMipmaps_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_setNumMipmaps_void_ev_size_t_Callback(num);
					}
					else
						return this->CTexture::setNumMipmaps(num);
				}
				virtual ev_bool getMipmapsHardwareGenerated() const
				{
					if(m_EarthView_World_Graphic_CTexture_getMipmapsHardwareGenerated_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CTexture_getMipmapsHardwareGenerated_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getMipmapsHardwareGenerated();
				}
				virtual ev_real32 getGamma() const
				{
					if(m_EarthView_World_Graphic_CTexture_getGamma_ev_real32_Callback != NULL && this->isCustomExtend())
					{
						ev_real32 returnValue = m_EarthView_World_Graphic_CTexture_getGamma_ev_real32_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getGamma();
				}
				virtual void setGamma(_in ev_real32 g)
				{
					if(m_EarthView_World_Graphic_CTexture_setGamma_void_ev_real32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_setGamma_void_ev_real32_Callback(g);
					}
					else
						return this->CTexture::setGamma(g);
				}
				virtual void setHardwareGammaEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CTexture_setHardwareGammaEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_setHardwareGammaEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CTexture::setHardwareGammaEnabled(enabled);
				}
				virtual ev_bool isHardwareGammaEnabled() const
				{
					if(m_EarthView_World_Graphic_CTexture_isHardwareGammaEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CTexture_isHardwareGammaEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CTexture::isHardwareGammaEnabled();
				}
				virtual void setFSAA(_in ev_uint32 fsaa, _in const EVString& fsaaHint)
				{
					if(m_EarthView_World_Graphic_CTexture_setFSAA_void_ev_uint32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* fsaaHint_Char = fsaaHint.makeBuffer();
						m_EarthView_World_Graphic_CTexture_setFSAA_void_ev_uint32_EVString_Callback(fsaa, fsaaHint_Char);
					}
					else
						return this->CTexture::setFSAA(fsaa, fsaaHint);
				}
				virtual ev_uint32 getFSAA() const
				{
					if(m_EarthView_World_Graphic_CTexture_getFSAA_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CTexture_getFSAA_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getFSAA();
				}
				virtual EVString getFSAAHint() const
				{
					if(m_EarthView_World_Graphic_CTexture_getFSAAHint_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CTexture_getFSAAHint_EVString_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getFSAAHint();
				}
				virtual ev_size_t getHeight() const
				{
					if(m_EarthView_World_Graphic_CTexture_getHeight_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CTexture_getHeight_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getHeight();
				}
				virtual ev_size_t getWidth() const
				{
					if(m_EarthView_World_Graphic_CTexture_getWidth_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CTexture_getWidth_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getWidth();
				}
				virtual ev_size_t getDepth() const
				{
					if(m_EarthView_World_Graphic_CTexture_getDepth_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CTexture_getDepth_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getDepth();
				}
				virtual ev_size_t getSrcHeight() const
				{
					if(m_EarthView_World_Graphic_CTexture_getSrcHeight_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CTexture_getSrcHeight_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getSrcHeight();
				}
				virtual ev_size_t getSrcWidth() const
				{
					if(m_EarthView_World_Graphic_CTexture_getSrcWidth_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CTexture_getSrcWidth_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getSrcWidth();
				}
				virtual ev_size_t getSrcDepth() const
				{
					if(m_EarthView_World_Graphic_CTexture_getSrcDepth_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CTexture_getSrcDepth_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getSrcDepth();
				}
				virtual void setHeight(_in ev_size_t h)
				{
					if(m_EarthView_World_Graphic_CTexture_setHeight_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_setHeight_void_ev_size_t_Callback(h);
					}
					else
						return this->CTexture::setHeight(h);
				}
				virtual void setWidth(_in ev_size_t w)
				{
					if(m_EarthView_World_Graphic_CTexture_setWidth_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_setWidth_void_ev_size_t_Callback(w);
					}
					else
						return this->CTexture::setWidth(w);
				}
				virtual void setDepth(_in ev_size_t d)
				{
					if(m_EarthView_World_Graphic_CTexture_setDepth_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_setDepth_void_ev_size_t_Callback(d);
					}
					else
						return this->CTexture::setDepth(d);
				}
				virtual ev_int32 getUsage() const
				{
					if(m_EarthView_World_Graphic_CTexture_getUsage_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Graphic_CTexture_getUsage_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getUsage();
				}
				virtual void setUsage(_in ev_int32 u)
				{
					if(m_EarthView_World_Graphic_CTexture_setUsage_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_setUsage_void_ev_int32_Callback(u);
					}
					else
						return this->CTexture::setUsage(u);
				}
				virtual void createInternalResources()
				{
					if(m_EarthView_World_Graphic_CTexture_createInternalResources_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_createInternalResources_void_Callback();
					}
					else
						return this->CTexture::createInternalResources();
				}
				virtual void freeInternalResources()
				{
					if(m_EarthView_World_Graphic_CTexture_freeInternalResources_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_freeInternalResources_void_Callback();
					}
					else
						return this->CTexture::freeInternalResources();
				}
				virtual void copyToTexture(_inout EarthView::World::Graphic::CTexturePtr& target)
				{
					if(m_EarthView_World_Graphic_CTexture_copyToTexture_void_CTexturePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_copyToTexture_void_CTexturePtr_Callback(&target);
					}
					else
						return this->CTexture::copyToTexture(target);
				}
				virtual void loadImage(_in const EarthView::World::Graphic::CImage& img)
				{
					if(m_EarthView_World_Graphic_CTexture_loadImage_void_CImage_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_loadImage_void_CImage_Callback(&img);
					}
					else
						return this->CTexture::loadImage(img);
				}
				virtual void loadRawData(_inout EarthView::World::Core::DataStreamPtr& stream, _in ev_uint16 uWidth, _in ev_uint16 uHeight, _in EarthView::World::Graphic::PixelFormat eFormat)
				{
					if(m_EarthView_World_Graphic_CTexture_loadRawData_void_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_loadRawData_void_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_Callback(&stream, uWidth, uHeight, (int)eFormat);
					}
					else
						return this->CTexture::loadRawData(stream, uWidth, uHeight, eFormat);
				}
				virtual void _loadImages(_in const EarthView::World::Graphic::ConstImagePtrList& images)
				{
					if(m_EarthView_World_Graphic_CTexture__loadImages_void_ConstImagePtrList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture__loadImages_void_ConstImagePtrList_Callback(&images);
					}
					else
						return this->CTexture::_loadImages(images);
				}
				virtual EarthView::World::Graphic::PixelFormat getFormat() const
				{
					if(m_EarthView_World_Graphic_CTexture_getFormat_PixelFormat_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::PixelFormat returnValue = (EarthView::World::Graphic::PixelFormat)m_EarthView_World_Graphic_CTexture_getFormat_PixelFormat_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getFormat();
				}
				virtual void setFormat(_in EarthView::World::Graphic::PixelFormat pf)
				{
					if(m_EarthView_World_Graphic_CTexture_setFormat_void_PixelFormat_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_setFormat_void_PixelFormat_Callback((int)pf);
					}
					else
						return this->CTexture::setFormat(pf);
				}
				virtual EarthView::World::Graphic::PixelFormat getDesiredFormat() const
				{
					if(m_EarthView_World_Graphic_CTexture_getDesiredFormat_PixelFormat_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::PixelFormat returnValue = (EarthView::World::Graphic::PixelFormat)m_EarthView_World_Graphic_CTexture_getDesiredFormat_PixelFormat_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getDesiredFormat();
				}
				virtual EarthView::World::Graphic::PixelFormat getSrcFormat() const
				{
					if(m_EarthView_World_Graphic_CTexture_getSrcFormat_PixelFormat_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::PixelFormat returnValue = (EarthView::World::Graphic::PixelFormat)m_EarthView_World_Graphic_CTexture_getSrcFormat_PixelFormat_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getSrcFormat();
				}
				virtual ev_bool hasAlpha() const
				{
					if(m_EarthView_World_Graphic_CTexture_hasAlpha_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CTexture_hasAlpha_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CTexture::hasAlpha();
				}
				virtual void setDesiredIntegerBitDepth(_in ev_uint16 bits)
				{
					if(m_EarthView_World_Graphic_CTexture_setDesiredIntegerBitDepth_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_setDesiredIntegerBitDepth_void_ev_uint16_Callback(bits);
					}
					else
						return this->CTexture::setDesiredIntegerBitDepth(bits);
				}
				virtual ev_uint16 getDesiredIntegerBitDepth() const
				{
					if(m_EarthView_World_Graphic_CTexture_getDesiredIntegerBitDepth_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CTexture_getDesiredIntegerBitDepth_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getDesiredIntegerBitDepth();
				}
				virtual void setDesiredFloatBitDepth(_in ev_uint16 bits)
				{
					if(m_EarthView_World_Graphic_CTexture_setDesiredFloatBitDepth_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_setDesiredFloatBitDepth_void_ev_uint16_Callback(bits);
					}
					else
						return this->CTexture::setDesiredFloatBitDepth(bits);
				}
				virtual ev_uint16 getDesiredFloatBitDepth() const
				{
					if(m_EarthView_World_Graphic_CTexture_getDesiredFloatBitDepth_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CTexture_getDesiredFloatBitDepth_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getDesiredFloatBitDepth();
				}
				virtual void setDesiredBitDepths(_in ev_uint16 integerBits, _in ev_uint16 floatBits)
				{
					if(m_EarthView_World_Graphic_CTexture_setDesiredBitDepths_void_ev_uint16_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_setDesiredBitDepths_void_ev_uint16_ev_uint16_Callback(integerBits, floatBits);
					}
					else
						return this->CTexture::setDesiredBitDepths(integerBits, floatBits);
				}
				virtual void setTreatLuminanceAsAlpha(_in ev_bool asAlpha)
				{
					if(m_EarthView_World_Graphic_CTexture_setTreatLuminanceAsAlpha_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_setTreatLuminanceAsAlpha_void_ev_bool_Callback(asAlpha);
					}
					else
						return this->CTexture::setTreatLuminanceAsAlpha(asAlpha);
				}
				virtual ev_bool getTreatLuminanceAsAlpha() const
				{
					if(m_EarthView_World_Graphic_CTexture_getTreatLuminanceAsAlpha_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CTexture_getTreatLuminanceAsAlpha_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getTreatLuminanceAsAlpha();
				}
				virtual ev_size_t getNumFaces() const
				{
					if(m_EarthView_World_Graphic_CTexture_getNumFaces_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CTexture_getNumFaces_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getNumFaces();
				}
				virtual EarthView::World::Graphic::CHardwarePixelBufferSharedPtr getBuffer(_in ev_size_t face, _in ev_size_t mipmap)
				{
					if(m_EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwarePixelBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwarePixelBufferSharedPtr*)m_EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t_ev_size_t_Callback(face, mipmap);
						return returnValue;
					}
					else
						return this->CTexture::getBuffer(face, mipmap);
				}
				virtual EarthView::World::Graphic::CHardwarePixelBufferSharedPtr getBuffer(_in ev_size_t face)
				{
					if(m_EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwarePixelBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwarePixelBufferSharedPtr*)m_EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t_Callback(face);
						return returnValue;
					}
					else
						return this->CTexture::getBuffer(face);
				}
				virtual EarthView::World::Graphic::CHardwarePixelBufferSharedPtr getBuffer()
				{
					if(m_EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwarePixelBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwarePixelBufferSharedPtr*)m_EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getBuffer();
				}
				virtual void convertToImage(_inout EarthView::World::Graphic::CImage& destImage, _in ev_bool includeMipMaps)
				{
					if(m_EarthView_World_Graphic_CTexture_convertToImage_void_CImage_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_convertToImage_void_CImage_ev_bool_Callback(&destImage, includeMipMaps);
					}
					else
						return this->CTexture::convertToImage(destImage, includeMipMaps);
				}
				virtual void convertToImage(_inout EarthView::World::Graphic::CImage& destImage)
				{
					if(m_EarthView_World_Graphic_CTexture_convertToImage_void_CImage_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_convertToImage_void_CImage_Callback(&destImage);
					}
					else
						return this->CTexture::convertToImage(destImage);
				}
				virtual void getCustomAttribute(_in const EVString& name, _in void* pData)
				{
					if(m_EarthView_World_Graphic_CTexture_getCustomAttribute_void_EVString_void_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CTexture_getCustomAttribute_void_EVString_void_Callback(name_Char, pData);
					}
					else
						return this->CTexture::getCustomAttribute(name, pData);
				}
				virtual void reload(_inout EarthView::World::Graphic::CImage& img)
				{
					if(m_EarthView_World_Graphic_CTexture_reload_void_CImage_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_reload_void_CImage_Callback(&img);
					}
					else
						return this->CTexture::reload(img);
				}
				virtual ev_uint32 getTextureID() const
				{
					if(m_EarthView_World_Graphic_CTexture_getTextureID_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CTexture_getTextureID_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getTextureID();
				}
				virtual void* getSystemResource()
				{
					if(m_EarthView_World_Graphic_CTexture_getSystemResource_void_Callback != NULL && this->isCustomExtend())
					{
						void* returnValue = m_EarthView_World_Graphic_CTexture_getSystemResource_void_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getSystemResource();
				}
				virtual ev_size_t calculateSize() const
				{
					if(m_EarthView_World_Graphic_CTexture_calculateSize_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CTexture_calculateSize_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CTexture::calculateSize();
				}
				virtual void unloadImpl()
				{
					if(m_EarthView_World_Graphic_CTexture_unloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_unloadImpl_void_Callback();
					}
					else
						return this->CTexture::unloadImpl();
				}
				virtual void preLoadImpl()
				{
					if(m_EarthView_World_Graphic_CTexture_preLoadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_preLoadImpl_void_Callback();
					}
					else
						return this->CTexture::preLoadImpl();
				}
				virtual void postLoadImpl()
				{
					if(m_EarthView_World_Graphic_CTexture_postLoadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_postLoadImpl_void_Callback();
					}
					else
						return this->CTexture::postLoadImpl();
				}
				virtual void preUnloadImpl()
				{
					if(m_EarthView_World_Graphic_CTexture_preUnloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_preUnloadImpl_void_Callback();
					}
					else
						return this->CTexture::preUnloadImpl();
				}
				virtual void postUnloadImpl()
				{
					if(m_EarthView_World_Graphic_CTexture_postUnloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_postUnloadImpl_void_Callback();
					}
					else
						return this->CTexture::postUnloadImpl();
				}
				virtual void prepareImpl()
				{
					if(m_EarthView_World_Graphic_CTexture_prepareImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_prepareImpl_void_Callback();
					}
					else
						return this->CTexture::prepareImpl();
				}
				virtual void unprepareImpl()
				{
					if(m_EarthView_World_Graphic_CTexture_unprepareImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_unprepareImpl_void_Callback();
					}
					else
						return this->CTexture::unprepareImpl();
				}
				virtual void loadImpl()
				{
					if(m_EarthView_World_Graphic_CTexture_loadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_loadImpl_void_Callback();
					}
					else
						return this->CTexture::loadImpl();
				}
				virtual void prepare(_in ev_bool backgroundThread)
				{
					if(m_EarthView_World_Graphic_CTexture_prepare_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_prepare_void_ev_bool_Callback(backgroundThread);
					}
					else
						return this->CTexture::prepare(backgroundThread);
				}
				virtual void prepare()
				{
					if(m_EarthView_World_Graphic_CTexture_prepare_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_prepare_void_Callback();
					}
					else
						return this->CTexture::prepare();
				}
				virtual void load(_in ev_bool backgroundThread)
				{
					if(m_EarthView_World_Graphic_CTexture_load_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_load_void_ev_bool_Callback(backgroundThread);
					}
					else
						return this->CTexture::load(backgroundThread);
				}
				virtual void load()
				{
					if(m_EarthView_World_Graphic_CTexture_load_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_load_void_Callback();
					}
					else
						return this->CTexture::load();
				}
				virtual ev_bool isReloadable() const
				{
					if(m_EarthView_World_Graphic_CTexture_isReloadable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CTexture_isReloadable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CTexture::isReloadable();
				}
				virtual ev_bool isManuallyLoaded() const
				{
					if(m_EarthView_World_Graphic_CTexture_isManuallyLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CTexture_isManuallyLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CTexture::isManuallyLoaded();
				}
				virtual void unload()
				{
					if(m_EarthView_World_Graphic_CTexture_unload_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_unload_void_Callback();
					}
					else
						return this->CTexture::unload();
				}
				virtual ev_size_t getSize() const
				{
					if(m_EarthView_World_Graphic_CTexture_getSize_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CTexture_getSize_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getSize();
				}
				virtual void touch()
				{
					if(m_EarthView_World_Graphic_CTexture_touch_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_touch_void_Callback();
					}
					else
						return this->CTexture::touch();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Graphic_CTexture_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CTexture_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getName();
				}
				virtual ev_uint64 getHandle() const
				{
					if(m_EarthView_World_Graphic_CTexture_getHandle_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Graphic_CTexture_getHandle_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getHandle();
				}
				virtual ev_bool isPrepared() const
				{
					if(m_EarthView_World_Graphic_CTexture_isPrepared_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CTexture_isPrepared_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CTexture::isPrepared();
				}
				virtual ev_bool isLoaded() const
				{
					if(m_EarthView_World_Graphic_CTexture_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CTexture_isLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CTexture::isLoaded();
				}
				virtual ev_bool isLoading() const
				{
					if(m_EarthView_World_Graphic_CTexture_isLoading_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CTexture_isLoading_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CTexture::isLoading();
				}
				virtual EarthView::World::Graphic::CResource::LoadingState getLoadingState() const
				{
					if(m_EarthView_World_Graphic_CTexture_getLoadingState_LoadingState_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CResource::LoadingState returnValue = (EarthView::World::Graphic::CResource::LoadingState)m_EarthView_World_Graphic_CTexture_getLoadingState_LoadingState_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getLoadingState();
				}
				virtual ev_bool isBackgroundLoaded() const
				{
					if(m_EarthView_World_Graphic_CTexture_isBackgroundLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CTexture_isBackgroundLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CTexture::isBackgroundLoaded();
				}
				virtual void setBackgroundLoaded(_in ev_bool bl)
				{
					if(m_EarthView_World_Graphic_CTexture_setBackgroundLoaded_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_setBackgroundLoaded_void_ev_bool_Callback(bl);
					}
					else
						return this->CTexture::setBackgroundLoaded(bl);
				}
				virtual void escalateLoading()
				{
					if(m_EarthView_World_Graphic_CTexture_escalateLoading_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_escalateLoading_void_Callback();
					}
					else
						return this->CTexture::escalateLoading();
				}
				virtual void addListener(_in EarthView::World::Graphic::CResource::CResourceListener* ref_lis)
				{
					if(m_EarthView_World_Graphic_CTexture_addListener_void_CResourceListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_addListener_void_CResourceListener_Callback(ref_lis);
					}
					else
						return this->CTexture::addListener(ref_lis);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CResource::CResourceListener* lis)
				{
					if(m_EarthView_World_Graphic_CTexture_removeListener_void_CResourceListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_removeListener_void_CResourceListener_Callback(lis);
					}
					else
						return this->CTexture::removeListener(lis);
				}
				virtual EVString getGroup() const
				{
					if(m_EarthView_World_Graphic_CTexture_getGroup_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CTexture_getGroup_EVString_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getGroup();
				}
				virtual void changeGroupOwnership(_in const EVString& newGroup)
				{
					if(m_EarthView_World_Graphic_CTexture_changeGroupOwnership_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* newGroup_Char = newGroup.makeBuffer();
						m_EarthView_World_Graphic_CTexture_changeGroupOwnership_void_EVString_Callback(newGroup_Char);
					}
					else
						return this->CTexture::changeGroupOwnership(newGroup);
				}
				virtual EarthView::World::Graphic::CResourceManager* getCreator()
				{
					if(m_EarthView_World_Graphic_CTexture_getCreator_CResourceManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CResourceManager* returnValue = m_EarthView_World_Graphic_CTexture_getCreator_CResourceManager_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getCreator();
				}
				virtual EVString getOrigin() const
				{
					if(m_EarthView_World_Graphic_CTexture_getOrigin_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CTexture_getOrigin_EVString_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getOrigin();
				}
				virtual void _notifyOrigin(_in const EVString& origin)
				{
					if(m_EarthView_World_Graphic_CTexture__notifyOrigin_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* origin_Char = origin.makeBuffer();
						m_EarthView_World_Graphic_CTexture__notifyOrigin_void_EVString_Callback(origin_Char);
					}
					else
						return this->CTexture::_notifyOrigin(origin);
				}
				virtual ev_size_t getStateCount() const
				{
					if(m_EarthView_World_Graphic_CTexture_getStateCount_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CTexture_getStateCount_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CTexture::getStateCount();
				}
				virtual void _dirtyState()
				{
					if(m_EarthView_World_Graphic_CTexture__dirtyState_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture__dirtyState_void_Callback();
					}
					else
						return this->CTexture::_dirtyState();
				}
				virtual void _fireLoadingComplete(_in ev_bool wasBackgroundLoaded)
				{
					if(m_EarthView_World_Graphic_CTexture__fireLoadingComplete_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture__fireLoadingComplete_void_ev_bool_Callback(wasBackgroundLoaded);
					}
					else
						return this->CTexture::_fireLoadingComplete(wasBackgroundLoaded);
				}
				virtual void _firePreparingComplete(_in ev_bool wasBackgroundLoaded)
				{
					if(m_EarthView_World_Graphic_CTexture__firePreparingComplete_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture__firePreparingComplete_void_ev_bool_Callback(wasBackgroundLoaded);
					}
					else
						return this->CTexture::_firePreparingComplete(wasBackgroundLoaded);
				}
				virtual void _fireUnloadingComplete()
				{
					if(m_EarthView_World_Graphic_CTexture__fireUnloadingComplete_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture__fireUnloadingComplete_void_Callback();
					}
					else
						return this->CTexture::_fireUnloadingComplete();
				}
				virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
				{
					if(m_EarthView_World_Graphic_CTexture_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* value_Char = value.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CTexture_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
						return returnValue;
					}
					else
						return this->CTexture::setParameter(name, value);
				}
				virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CTexture_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CTexture_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
						return returnValue;
					}
					else
						return this->CTexture::setParameter(name, readOnly, enable);
				}
				virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if(m_EarthView_World_Graphic_CTexture_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_setParameterList_void_CommonStringPairList_Callback(&paramList);
					}
					else
						return this->CTexture::setParameterList(paramList);
				}
				virtual EVString getParameter(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CTexture_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EVString returnValue = m_EarthView_World_Graphic_CTexture_getParameter_EVString_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CTexture::getParameter(name);
				}
				virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
				{
					if(m_EarthView_World_Graphic_CTexture_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexture_copyParametersTo_void_CStringInterface_Callback(dest);
					}
					else
						return this->CTexture::copyParametersTo(dest);
				}
			};
			REGISTER_FACTORY_CLASS(CTextureProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setTextureType_void_TextureType(void *pObjectXXXX, _in int ttype )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::setTextureType((EarthView::World::Graphic::TextureType)ttype);
				else
					ptrNativeObject->setTextureType((EarthView::World::Graphic::TextureType)ttype);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_setTextureType_void_TextureType( void *pObjectXXXX, EarthView_World_Graphic_CTexture_setTextureType_void_TextureType_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_setTextureType_void_TextureType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setTextureType_void_TextureType_NoVirtual(void *pObjectXXXX, _in int ttype )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::setTextureType((EarthView::World::Graphic::TextureType)ttype);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CTexture_getTextureType_TextureType(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::TextureType objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getTextureType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Graphic::TextureType objXXXX = ptrNativeObject->getTextureType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getTextureType_TextureType( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getTextureType_TextureType_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getTextureType_TextureType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CTexture_getTextureType_TextureType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				EarthView::World::Graphic::TextureType objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getTextureType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTexture_getNumMipmaps_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getNumMipmaps();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->getNumMipmaps();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getNumMipmaps_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getNumMipmaps_ev_size_t_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getNumMipmaps_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTexture_getNumMipmaps_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getNumMipmaps();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setNumMipmaps_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  num )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::setNumMipmaps(num);
				else
					ptrNativeObject->setNumMipmaps(num);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_setNumMipmaps_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTexture_setNumMipmaps_void_ev_size_t_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_setNumMipmaps_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setNumMipmaps_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_uint64  num )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::setNumMipmaps(num);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTexture_getMipmapsHardwareGenerated_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getMipmapsHardwareGenerated();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getMipmapsHardwareGenerated();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getMipmapsHardwareGenerated_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getMipmapsHardwareGenerated_ev_bool_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getMipmapsHardwareGenerated_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTexture_getMipmapsHardwareGenerated_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getMipmapsHardwareGenerated();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Graphic_CTexture_getGamma_ev_real32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					ev_real32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getGamma();
					return objXXXX;
				}
				else
				{
					ev_real32 objXXXX = ptrNativeObject->getGamma();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getGamma_ev_real32( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getGamma_ev_real32_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getGamma_ev_real32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Graphic_CTexture_getGamma_ev_real32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getGamma();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setGamma_void_ev_real32(void *pObjectXXXX, _in ev_real32 g )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::setGamma(g);
				else
					ptrNativeObject->setGamma(g);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_setGamma_void_ev_real32( void *pObjectXXXX, EarthView_World_Graphic_CTexture_setGamma_void_ev_real32_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_setGamma_void_ev_real32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setGamma_void_ev_real32_NoVirtual(void *pObjectXXXX, _in ev_real32 g )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::setGamma(g);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setHardwareGammaEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::setHardwareGammaEnabled(enabled);
				else
					ptrNativeObject->setHardwareGammaEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_setHardwareGammaEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTexture_setHardwareGammaEnabled_void_ev_bool_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_setHardwareGammaEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setHardwareGammaEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::setHardwareGammaEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTexture_isHardwareGammaEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::isHardwareGammaEnabled();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isHardwareGammaEnabled();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_isHardwareGammaEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTexture_isHardwareGammaEnabled_ev_bool_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_isHardwareGammaEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTexture_isHardwareGammaEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::isHardwareGammaEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setFSAA_void_ev_uint32_EVString(void *pObjectXXXX, _in ev_uint32 fsaa, _in const char* fsaaHint )
			{
				EarthView::World::Core::ev_string fsaaHint1 = fsaaHint;
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::setFSAA(fsaa, fsaaHint1);
				else
					ptrNativeObject->setFSAA(fsaa, fsaaHint1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_setFSAA_void_ev_uint32_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTexture_setFSAA_void_ev_uint32_EVString_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_setFSAA_void_ev_uint32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setFSAA_void_ev_uint32_EVString_NoVirtual(void *pObjectXXXX, _in ev_uint32 fsaa, _in const char* fsaaHint )
			{
				EarthView::World::Core::ev_string fsaaHint1 = fsaaHint;
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::setFSAA(fsaa, fsaaHint1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CTexture_getFSAA_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getFSAA();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getFSAA();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getFSAA_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getFSAA_ev_uint32_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getFSAA_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CTexture_getFSAA_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getFSAA();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CTexture_getFSAAHint_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getFSAAHint();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getFSAAHint();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getFSAAHint_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getFSAAHint_EVString_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getFSAAHint_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CTexture_getFSAAHint_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getFSAAHint();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTexture_getHeight_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getHeight();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->getHeight();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getHeight_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getHeight_ev_size_t_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getHeight_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTexture_getHeight_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTexture_getWidth_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getWidth();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->getWidth();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getWidth_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getWidth_ev_size_t_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getWidth_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTexture_getWidth_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTexture_getDepth_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getDepth();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->getDepth();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getDepth_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getDepth_ev_size_t_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getDepth_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTexture_getDepth_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getDepth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTexture_getSrcHeight_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getSrcHeight();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->getSrcHeight();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getSrcHeight_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getSrcHeight_ev_size_t_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getSrcHeight_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTexture_getSrcHeight_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getSrcHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTexture_getSrcWidth_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getSrcWidth();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->getSrcWidth();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getSrcWidth_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getSrcWidth_ev_size_t_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getSrcWidth_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTexture_getSrcWidth_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getSrcWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTexture_getSrcDepth_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getSrcDepth();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->getSrcDepth();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getSrcDepth_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getSrcDepth_ev_size_t_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getSrcDepth_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTexture_getSrcDepth_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getSrcDepth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setHeight_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  h )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::setHeight(h);
				else
					ptrNativeObject->setHeight(h);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_setHeight_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTexture_setHeight_void_ev_size_t_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_setHeight_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setHeight_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_uint64  h )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::setHeight(h);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setWidth_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  w )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::setWidth(w);
				else
					ptrNativeObject->setWidth(w);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_setWidth_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTexture_setWidth_void_ev_size_t_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_setWidth_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setWidth_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_uint64  w )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::setWidth(w);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setDepth_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  d )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::setDepth(d);
				else
					ptrNativeObject->setDepth(d);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_setDepth_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTexture_setDepth_void_ev_size_t_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_setDepth_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setDepth_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_uint64  d )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::setDepth(d);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Graphic_CTexture_getUsage_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getUsage();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getUsage();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getUsage_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getUsage_ev_int32_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getUsage_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Graphic_CTexture_getUsage_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getUsage();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setUsage_void_ev_int32(void *pObjectXXXX, _in ev_int32 u )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::setUsage(u);
				else
					ptrNativeObject->setUsage(u);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_setUsage_void_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CTexture_setUsage_void_ev_int32_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_setUsage_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setUsage_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 u )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::setUsage(u);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_createInternalResources_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::createInternalResources();
				else
					ptrNativeObject->createInternalResources();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_createInternalResources_void( void *pObjectXXXX, EarthView_World_Graphic_CTexture_createInternalResources_void_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_createInternalResources_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_createInternalResources_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::createInternalResources();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_freeInternalResources_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::freeInternalResources();
				else
					ptrNativeObject->freeInternalResources();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_freeInternalResources_void( void *pObjectXXXX, EarthView_World_Graphic_CTexture_freeInternalResources_void_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_freeInternalResources_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_freeInternalResources_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::freeInternalResources();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_copyToTexture_void_CTexturePtr(void *pObjectXXXX, _inout void* target )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::copyToTexture(*(EarthView::World::Graphic::CTexturePtr*)target);
				else
					ptrNativeObject->copyToTexture(*(EarthView::World::Graphic::CTexturePtr*)target);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_copyToTexture_void_CTexturePtr( void *pObjectXXXX, EarthView_World_Graphic_CTexture_copyToTexture_void_CTexturePtr_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_copyToTexture_void_CTexturePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_copyToTexture_void_CTexturePtr_NoVirtual(void *pObjectXXXX, _inout void* target )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::copyToTexture(*(EarthView::World::Graphic::CTexturePtr*)target);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_loadImage_void_CImage(void *pObjectXXXX, _in const void* img )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::loadImage(*(EarthView::World::Graphic::CImage*)img);
				else
					ptrNativeObject->loadImage(*(EarthView::World::Graphic::CImage*)img);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_loadImage_void_CImage( void *pObjectXXXX, EarthView_World_Graphic_CTexture_loadImage_void_CImage_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_loadImage_void_CImage(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_loadImage_void_CImage_NoVirtual(void *pObjectXXXX, _in const void* img )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::loadImage(*(EarthView::World::Graphic::CImage*)img);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_loadRawData_void_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat(void *pObjectXXXX, _inout void* stream, _in ev_uint16 uWidth, _in ev_uint16 uHeight, _in int eFormat )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::loadRawData(*(EarthView::World::Core::DataStreamPtr*)stream, uWidth, uHeight, (EarthView::World::Graphic::PixelFormat)eFormat);
				else
					ptrNativeObject->loadRawData(*(EarthView::World::Core::DataStreamPtr*)stream, uWidth, uHeight, (EarthView::World::Graphic::PixelFormat)eFormat);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_loadRawData_void_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat( void *pObjectXXXX, EarthView_World_Graphic_CTexture_loadRawData_void_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_loadRawData_void_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_loadRawData_void_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_NoVirtual(void *pObjectXXXX, _inout void* stream, _in ev_uint16 uWidth, _in ev_uint16 uHeight, _in int eFormat )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::loadRawData(*(EarthView::World::Core::DataStreamPtr*)stream, uWidth, uHeight, (EarthView::World::Graphic::PixelFormat)eFormat);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture__loadImages_void_ConstImagePtrList(void *pObjectXXXX, _in const void* images )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::_loadImages(*(EarthView::World::Graphic::ConstImagePtrList*)images);
				else
					ptrNativeObject->_loadImages(*(EarthView::World::Graphic::ConstImagePtrList*)images);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture__loadImages_void_ConstImagePtrList( void *pObjectXXXX, EarthView_World_Graphic_CTexture__loadImages_void_ConstImagePtrList_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture__loadImages_void_ConstImagePtrList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture__loadImages_void_ConstImagePtrList_NoVirtual(void *pObjectXXXX, _in const void* images )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::_loadImages(*(EarthView::World::Graphic::ConstImagePtrList*)images);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CTexture_getFormat_PixelFormat(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::PixelFormat objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getFormat();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Graphic::PixelFormat objXXXX = ptrNativeObject->getFormat();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getFormat_PixelFormat( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getFormat_PixelFormat_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getFormat_PixelFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CTexture_getFormat_PixelFormat_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				EarthView::World::Graphic::PixelFormat objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getFormat();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setFormat_void_PixelFormat(void *pObjectXXXX, _in int pf )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::setFormat((EarthView::World::Graphic::PixelFormat)pf);
				else
					ptrNativeObject->setFormat((EarthView::World::Graphic::PixelFormat)pf);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_setFormat_void_PixelFormat( void *pObjectXXXX, EarthView_World_Graphic_CTexture_setFormat_void_PixelFormat_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_setFormat_void_PixelFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setFormat_void_PixelFormat_NoVirtual(void *pObjectXXXX, _in int pf )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::setFormat((EarthView::World::Graphic::PixelFormat)pf);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CTexture_getDesiredFormat_PixelFormat(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::PixelFormat objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getDesiredFormat();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Graphic::PixelFormat objXXXX = ptrNativeObject->getDesiredFormat();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getDesiredFormat_PixelFormat( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getDesiredFormat_PixelFormat_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getDesiredFormat_PixelFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CTexture_getDesiredFormat_PixelFormat_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				EarthView::World::Graphic::PixelFormat objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getDesiredFormat();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CTexture_getSrcFormat_PixelFormat(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::PixelFormat objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getSrcFormat();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Graphic::PixelFormat objXXXX = ptrNativeObject->getSrcFormat();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getSrcFormat_PixelFormat( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getSrcFormat_PixelFormat_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getSrcFormat_PixelFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CTexture_getSrcFormat_PixelFormat_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				EarthView::World::Graphic::PixelFormat objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getSrcFormat();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTexture_hasAlpha_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::hasAlpha();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasAlpha();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_hasAlpha_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTexture_hasAlpha_ev_bool_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_hasAlpha_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTexture_hasAlpha_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::hasAlpha();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setDesiredIntegerBitDepth_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 bits )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::setDesiredIntegerBitDepth(bits);
				else
					ptrNativeObject->setDesiredIntegerBitDepth(bits);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_setDesiredIntegerBitDepth_void_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CTexture_setDesiredIntegerBitDepth_void_ev_uint16_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_setDesiredIntegerBitDepth_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setDesiredIntegerBitDepth_void_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 bits )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::setDesiredIntegerBitDepth(bits);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CTexture_getDesiredIntegerBitDepth_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getDesiredIntegerBitDepth();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getDesiredIntegerBitDepth();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getDesiredIntegerBitDepth_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getDesiredIntegerBitDepth_ev_uint16_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getDesiredIntegerBitDepth_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CTexture_getDesiredIntegerBitDepth_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getDesiredIntegerBitDepth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setDesiredFloatBitDepth_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 bits )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::setDesiredFloatBitDepth(bits);
				else
					ptrNativeObject->setDesiredFloatBitDepth(bits);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_setDesiredFloatBitDepth_void_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CTexture_setDesiredFloatBitDepth_void_ev_uint16_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_setDesiredFloatBitDepth_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setDesiredFloatBitDepth_void_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 bits )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::setDesiredFloatBitDepth(bits);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CTexture_getDesiredFloatBitDepth_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getDesiredFloatBitDepth();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getDesiredFloatBitDepth();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getDesiredFloatBitDepth_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getDesiredFloatBitDepth_ev_uint16_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getDesiredFloatBitDepth_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CTexture_getDesiredFloatBitDepth_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getDesiredFloatBitDepth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setDesiredBitDepths_void_ev_uint16_ev_uint16(void *pObjectXXXX, _in ev_uint16 integerBits, _in ev_uint16 floatBits )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::setDesiredBitDepths(integerBits, floatBits);
				else
					ptrNativeObject->setDesiredBitDepths(integerBits, floatBits);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_setDesiredBitDepths_void_ev_uint16_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CTexture_setDesiredBitDepths_void_ev_uint16_ev_uint16_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_setDesiredBitDepths_void_ev_uint16_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setDesiredBitDepths_void_ev_uint16_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 integerBits, _in ev_uint16 floatBits )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::setDesiredBitDepths(integerBits, floatBits);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setTreatLuminanceAsAlpha_void_ev_bool(void *pObjectXXXX, _in ev_bool asAlpha )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::setTreatLuminanceAsAlpha(asAlpha);
				else
					ptrNativeObject->setTreatLuminanceAsAlpha(asAlpha);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_setTreatLuminanceAsAlpha_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTexture_setTreatLuminanceAsAlpha_void_ev_bool_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_setTreatLuminanceAsAlpha_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_setTreatLuminanceAsAlpha_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool asAlpha )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::setTreatLuminanceAsAlpha(asAlpha);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTexture_getTreatLuminanceAsAlpha_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getTreatLuminanceAsAlpha();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getTreatLuminanceAsAlpha();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getTreatLuminanceAsAlpha_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getTreatLuminanceAsAlpha_ev_bool_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getTreatLuminanceAsAlpha_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTexture_getTreatLuminanceAsAlpha_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getTreatLuminanceAsAlpha();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTexture_getNumFaces_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getNumFaces();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->getNumFaces();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getNumFaces_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getNumFaces_ev_size_t_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getNumFaces_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTexture_getNumFaces_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getNumFaces();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t_ev_size_t(void *pObjectXXXX, _in ev_uint64  face, _in ev_uint64  mipmap )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CHardwarePixelBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getBuffer(face, mipmap);
					EarthView::World::Graphic::CHardwarePixelBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwarePixelBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CHardwarePixelBufferSharedPtr objXXXX = ptrNativeObject->getBuffer(face, mipmap);
					EarthView::World::Graphic::CHardwarePixelBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwarePixelBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_uint64  face, _in ev_uint64  mipmap )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				EarthView::World::Graphic::CHardwarePixelBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getBuffer(face, mipmap);
				EarthView::World::Graphic::CHardwarePixelBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwarePixelBufferSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t(void *pObjectXXXX, _in ev_uint64  face )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CHardwarePixelBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getBuffer(face);
					EarthView::World::Graphic::CHardwarePixelBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwarePixelBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CHardwarePixelBufferSharedPtr objXXXX = ptrNativeObject->getBuffer(face);
					EarthView::World::Graphic::CHardwarePixelBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwarePixelBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_uint64  face )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				EarthView::World::Graphic::CHardwarePixelBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getBuffer(face);
				EarthView::World::Graphic::CHardwarePixelBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwarePixelBufferSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CHardwarePixelBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getBuffer();
					EarthView::World::Graphic::CHardwarePixelBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwarePixelBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CHardwarePixelBufferSharedPtr objXXXX = ptrNativeObject->getBuffer();
					EarthView::World::Graphic::CHardwarePixelBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwarePixelBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTexture_getBuffer_CHardwarePixelBufferSharedPtr_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				EarthView::World::Graphic::CHardwarePixelBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getBuffer();
				EarthView::World::Graphic::CHardwarePixelBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwarePixelBufferSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_convertToImage_void_CImage_ev_bool(void *pObjectXXXX, _inout void* destImage, _in ev_bool includeMipMaps )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::convertToImage(*(EarthView::World::Graphic::CImage*)destImage, includeMipMaps);
				else
					ptrNativeObject->convertToImage(*(EarthView::World::Graphic::CImage*)destImage, includeMipMaps);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_convertToImage_void_CImage_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTexture_convertToImage_void_CImage_ev_bool_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_convertToImage_void_CImage_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_convertToImage_void_CImage_ev_bool_NoVirtual(void *pObjectXXXX, _inout void* destImage, _in ev_bool includeMipMaps )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::convertToImage(*(EarthView::World::Graphic::CImage*)destImage, includeMipMaps);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_convertToImage_void_CImage(void *pObjectXXXX, _inout void* destImage )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::convertToImage(*(EarthView::World::Graphic::CImage*)destImage);
				else
					ptrNativeObject->convertToImage(*(EarthView::World::Graphic::CImage*)destImage);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_convertToImage_void_CImage( void *pObjectXXXX, EarthView_World_Graphic_CTexture_convertToImage_void_CImage_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_convertToImage_void_CImage(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_convertToImage_void_CImage_NoVirtual(void *pObjectXXXX, _inout void* destImage )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::convertToImage(*(EarthView::World::Graphic::CImage*)destImage);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_getCustomAttribute_void_EVString_void(void *pObjectXXXX, _in const char* name, _in void* pData )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::getCustomAttribute(name1, pData);
				else
					ptrNativeObject->getCustomAttribute(name1, pData);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getCustomAttribute_void_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getCustomAttribute_void_EVString_void_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getCustomAttribute_void_EVString_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_getCustomAttribute_void_EVString_void_NoVirtual(void *pObjectXXXX, _in const char* name, _in void* pData )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::getCustomAttribute(name1, pData);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_reload_void_CImage(void *pObjectXXXX, _inout void* img )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::reload(*(EarthView::World::Graphic::CImage*)img);
				else
					ptrNativeObject->reload(*(EarthView::World::Graphic::CImage*)img);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_reload_void_CImage( void *pObjectXXXX, EarthView_World_Graphic_CTexture_reload_void_CImage_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_reload_void_CImage(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_reload_void_CImage_NoVirtual(void *pObjectXXXX, _inout void* img )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::reload(*(EarthView::World::Graphic::CImage*)img);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CTexture_getTextureID_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getTextureID();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getTextureID();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getTextureID_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getTextureID_ev_uint32_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getTextureID_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CTexture_getTextureID_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getTextureID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTexture_getSystemResource_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					void* objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getSystemResource();
					return objXXXX;
				}
				else
				{
					void* objXXXX = ptrNativeObject->getSystemResource();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getSystemResource_void( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getSystemResource_void_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getSystemResource_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTexture_getSystemResource_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::getSystemResource();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTexture_calculateSize_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::calculateSize();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->calculateSize();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_calculateSize_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTexture_calculateSize_ev_size_t_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_calculateSize_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTexture_calculateSize_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexture::calculateSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_unloadImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				if (dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexture::unloadImpl();
				else
					ptrNativeObject->unloadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_unloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CTexture_unloadImpl_void_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_unloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexture_unloadImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTexture* ptrNativeObject = (EarthView::World::Graphic::CTexture*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexture::unloadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_preLoadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CTexture_preLoadImpl_void_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_preLoadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_postLoadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CTexture_postLoadImpl_void_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_postLoadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_preUnloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CTexture_preUnloadImpl_void_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_preUnloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_postUnloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CTexture_postUnloadImpl_void_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_postUnloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_prepareImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CTexture_prepareImpl_void_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_prepareImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_unprepareImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CTexture_unprepareImpl_void_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_unprepareImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_loadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CTexture_loadImpl_void_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_loadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_prepare_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTexture_prepare_void_ev_bool_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_prepare_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_prepare_void( void *pObjectXXXX, EarthView_World_Graphic_CTexture_prepare_void_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_prepare_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_load_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTexture_load_void_ev_bool_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_load_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_load_void( void *pObjectXXXX, EarthView_World_Graphic_CTexture_load_void_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_load_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_reload_void( void *pObjectXXXX, EarthView_World_Graphic_CTexture_reload_void_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_reload_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_isReloadable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTexture_isReloadable_ev_bool_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_isReloadable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_isManuallyLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTexture_isManuallyLoaded_ev_bool_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_isManuallyLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_unload_void( void *pObjectXXXX, EarthView_World_Graphic_CTexture_unload_void_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_unload_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getSize_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getSize_ev_size_t_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getSize_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_touch_void( void *pObjectXXXX, EarthView_World_Graphic_CTexture_touch_void_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_touch_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getName_EVString_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getHandle_ev_uint64( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getHandle_ev_uint64_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getHandle_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_isPrepared_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTexture_isPrepared_ev_bool_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_isPrepared_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTexture_isLoaded_ev_bool_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_isLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_isLoading_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTexture_isLoading_ev_bool_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_isLoading_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getLoadingState_LoadingState( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getLoadingState_LoadingState_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getLoadingState_LoadingState(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_isBackgroundLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTexture_isBackgroundLoaded_ev_bool_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_isBackgroundLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_setBackgroundLoaded_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTexture_setBackgroundLoaded_void_ev_bool_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_setBackgroundLoaded_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_escalateLoading_void( void *pObjectXXXX, EarthView_World_Graphic_CTexture_escalateLoading_void_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_escalateLoading_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_addListener_void_CResourceListener( void *pObjectXXXX, EarthView_World_Graphic_CTexture_addListener_void_CResourceListener_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_addListener_void_CResourceListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_removeListener_void_CResourceListener( void *pObjectXXXX, EarthView_World_Graphic_CTexture_removeListener_void_CResourceListener_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_removeListener_void_CResourceListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getGroup_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getGroup_EVString_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getGroup_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_changeGroupOwnership_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTexture_changeGroupOwnership_void_EVString_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_changeGroupOwnership_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getCreator_CResourceManager( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getCreator_CResourceManager_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getCreator_CResourceManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getOrigin_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getOrigin_EVString_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getOrigin_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture__notifyOrigin_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTexture__notifyOrigin_void_EVString_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture__notifyOrigin_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getStateCount_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getStateCount_ev_size_t_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getStateCount_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture__dirtyState_void( void *pObjectXXXX, EarthView_World_Graphic_CTexture__dirtyState_void_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture__dirtyState_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture__fireLoadingComplete_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTexture__fireLoadingComplete_void_ev_bool_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture__fireLoadingComplete_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture__firePreparingComplete_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTexture__firePreparingComplete_void_ev_bool_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture__firePreparingComplete_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture__fireUnloadingComplete_void( void *pObjectXXXX, EarthView_World_Graphic_CTexture__fireUnloadingComplete_void_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture__fireUnloadingComplete_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTexture_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_setParameter_ev_bool_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTexture_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CTexture_setParameterList_void_CommonStringPairList_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_setParameterList_void_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTexture_getParameter_EVString_EVString_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_getParameter_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexture_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Graphic_CTexture_copyParametersTo_void_CStringInterface_Callback* pCallback )
			{
				CTextureProxy* ptr = dynamic_cast<CTextureProxy*>((EarthView::World::Graphic::CTexture*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexture_copyParametersTo_void_CStringInterface(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTexture*  _stdcall EarthView_World_Graphic_CTexturePtr_get_CTexture(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexturePtr* ptrNativeObject = (EarthView::World::Graphic::CTexturePtr*) pObjectXXXX;
				EarthView::World::Graphic::CTexture* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTexturePtr_OperatorAssign_CTexturePtr_ResourcePtr(void *pObjXXXX, _in const void* r )
			{
				EarthView::World::Graphic::CTexturePtr& objXXXX = *((EarthView::World::Graphic::CTexturePtr*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::ResourcePtr*)r;
				EarthView::World::Graphic::CTexturePtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTexturePtr_OperatorConvertionResourcePtr_ResourcePtr(void *pObjXXXX )
			{
				EarthView::World::Graphic::CTexturePtr& objYYYY = *(EarthView::World::Graphic::CTexturePtr*) pObjXXXX;
				EarthView::World::Graphic::ResourcePtr objXXXX = objYYYY ;
				EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
		}
	}
}
