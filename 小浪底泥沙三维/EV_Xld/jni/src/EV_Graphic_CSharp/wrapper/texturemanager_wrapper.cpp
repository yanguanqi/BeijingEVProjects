/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/texturemanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat, _in ev_bool hwGammaCorrection);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps, _in Real gamma);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_replaceResource_ResourceCreateOrRetrieveResult_EVString_EVString_Callback)(_in char*& name, _in char*& group);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback)(_in char*& name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat, _in ev_bool hwGammaCorrection);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback)(_in char*& name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_Callback)(_in char*& name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_Callback)(_in char*& name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps, _in Real gamma);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Callback)(_in char*& name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_Callback)(_in char*& name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback)(_in char*& name, _in char*& group, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat, _in ev_bool hwGammaCorrection);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback)(_in char*& name, _in char*& group, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_Callback)(_in char*& name, _in char*& group, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_Callback)(_in char*& name, _in char*& group, _in int texType, _in ev_int32 numMipmaps, _in Real gamma);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Callback)(_in char*& name, _in char*& group, _in int texType, _in ev_int32 numMipmaps);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_Callback)(_in char*& name, _in char*& group, _in int texType);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_Callback)(_in char*& name, _in char*& group);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback)(_in char*& name, _in char*& group, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat, _in ev_bool hwGammaCorrection);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback)(_in char*& name, _in char*& group, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_Callback)(_in char*& name, _in char*& group, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_Callback)(_in char*& name, _in char*& group, _in int texType, _in ev_int32 numMipmaps, _in Real gamma);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Callback)(_in char*& name, _in char*& group, _in int texType, _in ev_int32 numMipmaps);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_Callback)(_in char*& name, _in char*& group, _in int texType);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback)(_in char*& name, _in char*& group, _in const void* img, _in int texType, _in ev_int32 iNumMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat, _in ev_bool hwGammaCorrection);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback)(_in char*& name, _in char*& group, _in const void* img, _in int texType, _in ev_int32 iNumMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_Callback)(_in char*& name, _in char*& group, _in const void* img, _in int texType, _in ev_int32 iNumMipmaps, _in Real gamma, _in ev_bool isAlphat);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_Callback)(_in char*& name, _in char*& group, _in const void* img, _in int texType, _in ev_int32 iNumMipmaps, _in Real gamma);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Callback)(_in char*& name, _in char*& group, _in const void* img, _in int texType, _in ev_int32 iNumMipmaps);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_Callback)(_in char*& name, _in char*& group, _in const void* img, _in int texType);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_Callback)(_in char*& name, _in char*& group, _in const void* img);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool_Callback)(_in char*& name, _in char*& group, _inout void* stream, _in ev_uint16 uWidth, _in ev_uint16 uHeight, _in int format, _in int texType, _in ev_int32 iNumMipmaps, _in Real gamma, _in ev_bool hwGammaCorrection);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_Callback)(_in char*& name, _in char*& group, _inout void* stream, _in ev_uint16 uWidth, _in ev_uint16 uHeight, _in int format, _in int texType, _in ev_int32 iNumMipmaps, _in Real gamma);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Callback)(_in char*& name, _in char*& group, _inout void* stream, _in ev_uint16 uWidth, _in ev_uint16 uHeight, _in int format, _in int texType, _in ev_int32 iNumMipmaps);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_Callback)(_in char*& name, _in char*& group, _inout void* stream, _in ev_uint16 uWidth, _in ev_uint16 uHeight, _in int format, _in int texType);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_Callback)(_in char*& name, _in char*& group, _inout void* stream, _in ev_uint16 uWidth, _in ev_uint16 uHeight, _in int format);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString_Callback)(_in char*& name, _in char*& group, _in int texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 depth, _in ev_int32 num_mips, _in int format, _in ev_int32 usage, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in ev_bool hwGammaCorrection, _in ev_uint32 fsaa, _in char*& fsaaHint);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_Callback)(_in char*& name, _in char*& group, _in int texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 depth, _in ev_int32 num_mips, _in int format, _in ev_int32 usage, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in ev_bool hwGammaCorrection, _in ev_uint32 fsaa);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_Callback)(_in char*& name, _in char*& group, _in int texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 depth, _in ev_int32 num_mips, _in int format, _in ev_int32 usage, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in ev_bool hwGammaCorrection);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_Callback)(_in char*& name, _in char*& group, _in int texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 depth, _in ev_int32 num_mips, _in int format, _in ev_int32 usage, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_Callback)(_in char*& name, _in char*& group, _in int texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 depth, _in ev_int32 num_mips, _in int format, _in ev_int32 usage);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_Callback)(_in char*& name, _in char*& group, _in int texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 depth, _in ev_int32 num_mips, _in int format);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_ev_bool_Callback)(_in ev_uint16 bits, _in ev_bool reloadTextures);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_Callback)(_in ev_uint16 bits);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CTextureManager_getPreferredIntegerBitDepth_ev_uint16_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_ev_bool_Callback)(_in ev_uint16 bits, _in ev_bool reloadTextures);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_Callback)(_in ev_uint16 bits);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CTextureManager_getPreferredFloatBitDepth_ev_uint16_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_ev_bool_Callback)(_in ev_uint16 integerBits, _in ev_uint16 floatBits, _in ev_bool reloadTextures);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_Callback)(_in ev_uint16 integerBits, _in ev_uint16 floatBits);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CTextureManager_isFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback)(_in int ttype, _in int format, _in ev_int32 usage);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CTextureManager_isEquivalentFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback)(_in int ttype, _in int format, _in ev_int32 usage);
			typedef int  ( _stdcall EarthView_World_Graphic_CTextureManager_getNativeFormat_PixelFormat_TextureType_PixelFormat_ev_int32_Callback)(_in int ttype, _in int format, _in ev_int32 usage);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool_Callback)(_in int ttype, _in int format, _in ev_int32 usage, _in ev_bool preciseFormatOnly);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback)(_in int ttype, _in int format, _in ev_int32 usage);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_setDefaultNumMipmaps_void_ev_size_t_Callback)(_in ev_uint64  num);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CTextureManager_getDefaultNumMipmaps_ev_size_t_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_Callback)(_in char*& name, _in char*& group);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback)(_in char*& name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Callback)(_in char*& name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Callback)(_in char*& name, _in ev_bool isManual);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_Callback)(_in char*& name);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Callback)(_in char*& name, _in char*& group);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_setMemoryBudget_void_ev_size_t_Callback)(_in ev_uint64  bytes);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CTextureManager_getMemoryBudget_ev_size_t_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CTextureManager_getMemoryUsage_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_unload_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_unload_void_ev_uint64_Callback)(_in ev_uint64 handle);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_unloadAll_void_ev_bool_Callback)(_in ev_bool reloadableOnly);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_unloadAll_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_reloadAll_void_ev_bool_Callback)(_in ev_bool reloadableOnly);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_reloadAll_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void_ev_bool_Callback)(_in ev_bool reloadableOnly);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void_ev_bool_Callback)(_in ev_bool reloadableOnly);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_remove_void_ResourcePtr_Callback)(_inout void* r);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_remove_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_remove_void_ev_uint64_Callback)(_in ev_uint64 handle);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_remove_void_EVString_EVString_Callback)(_in char*& name, _in char*& groupname);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_removeAll_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void_ev_bool_Callback)(_in ev_bool reloadableOnly);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString_EVString_Callback)(_in char*& name, _in char*& groupName);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString_Callback)(_in char*& name, _in char*& groupName);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Callback)(_in char*& name, _in char*& groupName, _in ev_uint16 useCount);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString_EVString_Callback)(_in char*& name, _in char*& groupName);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString_Callback)(_in char*& name);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_getByHandle_ResourcePtr_ev_uint64_Callback)(_in ev_uint64 handle);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_ev_uint64_Callback)(_in ev_uint64 handle);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager__notifyResourceTouched_void_CResource_Callback)(_in EarthView::World::Graphic::CResource* res);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager__notifyResourceLoaded_void_CResource_Callback)(_in EarthView::World::Graphic::CResource* res);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager__notifyResourceUnloaded_void_CResource_Callback)(_in EarthView::World::Graphic::CResource* res);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* loadParams, _in ev_bool backgroundThread);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* loadParams);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* loadParams, _in ev_bool backgroundThread);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* loadParams);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual);
			typedef void*  ( _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_Callback)(_in char*& name, _in char*& group);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_setVerbose_void_ev_bool_Callback)(_in ev_bool v);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CTextureManager_getVerbose_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CResource*  ( _stdcall EarthView_World_Graphic_CTextureManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback)(_in char*& name, _in ev_uint64 handle, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* loader, _in const EarthView::World::Core::CommonStringPairList* createParams);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_addImpl_void_ResourcePtr_Callback)(_inout void* res);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_removeImpl_void_ResourcePtr_Callback)(_inout void* res);
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_checkUsage_void_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CTextureManager_getScriptPatterns_StringVector_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureManager_parseScript_void_DataStreamPtr_EVString_Callback)(_inout void* stream, _in char*& groupName);
			typedef Real  ( _stdcall EarthView_World_Graphic_CTextureManager_getLoadingOrder_Real_Callback)();
			class CTextureManagerProxy : public EarthView::World::Graphic::CTextureManager
			{
			private:
				EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback* m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback;
				EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_Callback* m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_Callback;
				EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Callback* m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Callback;
				EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_Callback* m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_Callback;
				EarthView_World_Graphic_CTextureManager_replaceResource_ResourceCreateOrRetrieveResult_EVString_EVString_Callback* m_EarthView_World_Graphic_CTextureManager_replaceResource_ResourceCreateOrRetrieveResult_EVString_EVString_Callback;
				EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback* m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback;
				EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_Callback* m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_Callback;
				EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Callback* m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Callback;
				EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_Callback* m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_Callback;
				EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback* m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback;
				EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_Callback* m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_Callback;
				EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Callback* m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Callback;
				EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_Callback* m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_Callback;
				EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_Callback* m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_Callback;
				EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback* m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback;
				EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_Callback* m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_Callback;
				EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Callback* m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Callback;
				EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_Callback* m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_Callback;
				EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback* m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback;
				EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_Callback* m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_Callback;
				EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Callback* m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Callback;
				EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_Callback* m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_Callback;
				EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_Callback* m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_Callback;
				EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_Callback* m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_Callback;
				EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Callback* m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Callback;
				EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_Callback* m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_Callback;
				EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_Callback* m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_Callback;
				EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString_Callback* m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString_Callback;
				EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_Callback* m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_Callback;
				EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_Callback* m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_Callback;
				EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_Callback* m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_Callback;
				EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_Callback* m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_Callback;
				EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_Callback* m_EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_Callback;
				EarthView_World_Graphic_CTextureManager_getPreferredIntegerBitDepth_ev_uint16_Callback* m_EarthView_World_Graphic_CTextureManager_getPreferredIntegerBitDepth_ev_uint16_Callback;
				EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_Callback* m_EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_Callback;
				EarthView_World_Graphic_CTextureManager_getPreferredFloatBitDepth_ev_uint16_Callback* m_EarthView_World_Graphic_CTextureManager_getPreferredFloatBitDepth_ev_uint16_Callback;
				EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_Callback* m_EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_Callback;
				EarthView_World_Graphic_CTextureManager_isFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback* m_EarthView_World_Graphic_CTextureManager_isFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback;
				EarthView_World_Graphic_CTextureManager_isEquivalentFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback* m_EarthView_World_Graphic_CTextureManager_isEquivalentFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback;
				EarthView_World_Graphic_CTextureManager_getNativeFormat_PixelFormat_TextureType_PixelFormat_ev_int32_Callback* m_EarthView_World_Graphic_CTextureManager_getNativeFormat_PixelFormat_TextureType_PixelFormat_ev_int32_Callback;
				EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback* m_EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback;
				EarthView_World_Graphic_CTextureManager_setDefaultNumMipmaps_void_ev_size_t_Callback* m_EarthView_World_Graphic_CTextureManager_setDefaultNumMipmaps_void_ev_size_t_Callback;
				EarthView_World_Graphic_CTextureManager_getDefaultNumMipmaps_ev_size_t_Callback* m_EarthView_World_Graphic_CTextureManager_getDefaultNumMipmaps_ev_size_t_Callback;
				EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* m_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback;
				EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback* m_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback;
				EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_Callback* m_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_Callback;
				EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback;
				EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Callback* m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Callback;
				EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_Callback* m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_Callback;
				EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback;
				EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Callback* m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Callback;
				EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Callback* m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Callback;
				EarthView_World_Graphic_CTextureManager_setMemoryBudget_void_ev_size_t_Callback* m_EarthView_World_Graphic_CTextureManager_setMemoryBudget_void_ev_size_t_Callback;
				EarthView_World_Graphic_CTextureManager_getMemoryBudget_ev_size_t_Callback* m_EarthView_World_Graphic_CTextureManager_getMemoryBudget_ev_size_t_Callback;
				EarthView_World_Graphic_CTextureManager_getMemoryUsage_ev_size_t_Callback* m_EarthView_World_Graphic_CTextureManager_getMemoryUsage_ev_size_t_Callback;
				EarthView_World_Graphic_CTextureManager_unload_void_EVString_Callback* m_EarthView_World_Graphic_CTextureManager_unload_void_EVString_Callback;
				EarthView_World_Graphic_CTextureManager_unload_void_ev_uint64_Callback* m_EarthView_World_Graphic_CTextureManager_unload_void_ev_uint64_Callback;
				EarthView_World_Graphic_CTextureManager_unloadAll_void_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_unloadAll_void_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_unloadAll_void_Callback* m_EarthView_World_Graphic_CTextureManager_unloadAll_void_Callback;
				EarthView_World_Graphic_CTextureManager_reloadAll_void_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_reloadAll_void_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_reloadAll_void_Callback* m_EarthView_World_Graphic_CTextureManager_reloadAll_void_Callback;
				EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void_Callback* m_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void_Callback;
				EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void_Callback* m_EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void_Callback;
				EarthView_World_Graphic_CTextureManager_remove_void_ResourcePtr_Callback* m_EarthView_World_Graphic_CTextureManager_remove_void_ResourcePtr_Callback;
				EarthView_World_Graphic_CTextureManager_remove_void_EVString_Callback* m_EarthView_World_Graphic_CTextureManager_remove_void_EVString_Callback;
				EarthView_World_Graphic_CTextureManager_remove_void_ev_uint64_Callback* m_EarthView_World_Graphic_CTextureManager_remove_void_ev_uint64_Callback;
				EarthView_World_Graphic_CTextureManager_remove_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CTextureManager_remove_void_EVString_EVString_Callback;
				EarthView_World_Graphic_CTextureManager_removeAll_void_Callback* m_EarthView_World_Graphic_CTextureManager_removeAll_void_Callback;
				EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void_Callback* m_EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void_Callback;
				EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString_Callback* m_EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString_Callback;
				EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString_EVString_Callback;
				EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString_Callback;
				EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Callback* m_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Callback;
				EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString_EVString_Callback* m_EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString_EVString_Callback;
				EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString_Callback* m_EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString_Callback;
				EarthView_World_Graphic_CTextureManager_getByHandle_ResourcePtr_ev_uint64_Callback* m_EarthView_World_Graphic_CTextureManager_getByHandle_ResourcePtr_ev_uint64_Callback;
				EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_ev_uint64_Callback* m_EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_ev_uint64_Callback;
				EarthView_World_Graphic_CTextureManager__notifyResourceTouched_void_CResource_Callback* m_EarthView_World_Graphic_CTextureManager__notifyResourceTouched_void_CResource_Callback;
				EarthView_World_Graphic_CTextureManager__notifyResourceLoaded_void_CResource_Callback* m_EarthView_World_Graphic_CTextureManager__notifyResourceLoaded_void_CResource_Callback;
				EarthView_World_Graphic_CTextureManager__notifyResourceUnloaded_void_CResource_Callback* m_EarthView_World_Graphic_CTextureManager__notifyResourceUnloaded_void_CResource_Callback;
				EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* m_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback;
				EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback* m_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback;
				EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback;
				EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback* m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback;
				EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_Callback* m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_Callback;
				EarthView_World_Graphic_CTextureManager_setVerbose_void_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_setVerbose_void_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_getVerbose_ev_bool_Callback* m_EarthView_World_Graphic_CTextureManager_getVerbose_ev_bool_Callback;
				EarthView_World_Graphic_CTextureManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* m_EarthView_World_Graphic_CTextureManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback;
				EarthView_World_Graphic_CTextureManager_addImpl_void_ResourcePtr_Callback* m_EarthView_World_Graphic_CTextureManager_addImpl_void_ResourcePtr_Callback;
				EarthView_World_Graphic_CTextureManager_removeImpl_void_ResourcePtr_Callback* m_EarthView_World_Graphic_CTextureManager_removeImpl_void_ResourcePtr_Callback;
				EarthView_World_Graphic_CTextureManager_checkUsage_void_Callback* m_EarthView_World_Graphic_CTextureManager_checkUsage_void_Callback;
				EarthView_World_Graphic_CTextureManager_getScriptPatterns_StringVector_Callback* m_EarthView_World_Graphic_CTextureManager_getScriptPatterns_StringVector_Callback;
				EarthView_World_Graphic_CTextureManager_parseScript_void_DataStreamPtr_EVString_Callback* m_EarthView_World_Graphic_CTextureManager_parseScript_void_DataStreamPtr_EVString_Callback;
				EarthView_World_Graphic_CTextureManager_getLoadingOrder_Real_Callback* m_EarthView_World_Graphic_CTextureManager_getLoadingOrder_Real_Callback;
			public:
				CTextureManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CTextureManager(pList)
				{
					m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_replaceResource_ResourceCreateOrRetrieveResult_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_getPreferredIntegerBitDepth_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_getPreferredFloatBitDepth_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_isFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_isEquivalentFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_getNativeFormat_PixelFormat_TextureType_PixelFormat_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_setDefaultNumMipmaps_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_getDefaultNumMipmaps_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_setMemoryBudget_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_getMemoryBudget_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_getMemoryUsage_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_unload_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_unload_void_ev_uint64_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_unloadAll_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_unloadAll_void_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_reloadAll_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_reloadAll_void_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_remove_void_ResourcePtr_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_remove_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_remove_void_ev_uint64_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_remove_void_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_removeAll_void_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_getByHandle_ResourcePtr_ev_uint64_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_ev_uint64_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager__notifyResourceTouched_void_CResource_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager__notifyResourceLoaded_void_CResource_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager__notifyResourceUnloaded_void_CResource_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_setVerbose_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_getVerbose_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_addImpl_void_ResourcePtr_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_removeImpl_void_ResourcePtr_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_checkUsage_void_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_getScriptPatterns_StringVector_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_parseScript_void_DataStreamPtr_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CTextureManager_getLoadingOrder_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat(EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool(EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real(EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32(EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType(EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_replaceResource_ResourceCreateOrRetrieveResult_EVString_EVString(EarthView_World_Graphic_CTextureManager_replaceResource_ResourceCreateOrRetrieveResult_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_replaceResource_ResourceCreateOrRetrieveResult_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat(EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool(EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real(EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32(EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType(EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat(EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool(EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real(EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32(EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType(EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString(EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat(EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool(EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real(EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32(EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType(EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat(EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool(EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real(EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32(EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType(EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage(EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool(EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real(EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32(EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType(EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat(EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString(EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32(EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool(EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader(EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32(EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat(EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_ev_bool(EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16(EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_getPreferredIntegerBitDepth_ev_uint16(EarthView_World_Graphic_CTextureManager_getPreferredIntegerBitDepth_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_getPreferredIntegerBitDepth_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_ev_bool(EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16(EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_getPreferredFloatBitDepth_ev_uint16(EarthView_World_Graphic_CTextureManager_getPreferredFloatBitDepth_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_getPreferredFloatBitDepth_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_ev_bool(EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16(EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_isFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32(EarthView_World_Graphic_CTextureManager_isFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_isFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_isEquivalentFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32(EarthView_World_Graphic_CTextureManager_isEquivalentFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_isEquivalentFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_getNativeFormat_PixelFormat_TextureType_PixelFormat_ev_int32(EarthView_World_Graphic_CTextureManager_getNativeFormat_PixelFormat_TextureType_PixelFormat_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_getNativeFormat_PixelFormat_TextureType_PixelFormat_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool(EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32(EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_setDefaultNumMipmaps_void_ev_size_t(EarthView_World_Graphic_CTextureManager_setDefaultNumMipmaps_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_setDefaultNumMipmaps_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_getDefaultNumMipmaps_ev_size_t(EarthView_World_Graphic_CTextureManager_getDefaultNumMipmaps_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_getDefaultNumMipmaps_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool(EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString(EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader(EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool(EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString(EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader(EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool(EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString(EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_setMemoryBudget_void_ev_size_t(EarthView_World_Graphic_CTextureManager_setMemoryBudget_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_setMemoryBudget_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_getMemoryBudget_ev_size_t(EarthView_World_Graphic_CTextureManager_getMemoryBudget_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_getMemoryBudget_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_getMemoryUsage_ev_size_t(EarthView_World_Graphic_CTextureManager_getMemoryUsage_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_getMemoryUsage_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_unload_void_EVString(EarthView_World_Graphic_CTextureManager_unload_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_unload_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_unload_void_ev_uint64(EarthView_World_Graphic_CTextureManager_unload_void_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_unload_void_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_unloadAll_void_ev_bool(EarthView_World_Graphic_CTextureManager_unloadAll_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_unloadAll_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_unloadAll_void(EarthView_World_Graphic_CTextureManager_unloadAll_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_unloadAll_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_reloadAll_void_ev_bool(EarthView_World_Graphic_CTextureManager_reloadAll_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_reloadAll_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_reloadAll_void(EarthView_World_Graphic_CTextureManager_reloadAll_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_reloadAll_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void_ev_bool(EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void(EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void_ev_bool(EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void(EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_remove_void_ResourcePtr(EarthView_World_Graphic_CTextureManager_remove_void_ResourcePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_remove_void_ResourcePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_remove_void_EVString(EarthView_World_Graphic_CTextureManager_remove_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_remove_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_remove_void_ev_uint64(EarthView_World_Graphic_CTextureManager_remove_void_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_remove_void_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_remove_void_EVString_EVString(EarthView_World_Graphic_CTextureManager_remove_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_remove_void_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_removeAll_void(EarthView_World_Graphic_CTextureManager_removeAll_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_removeAll_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void_ev_bool(EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void(EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString(EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString_EVString(EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString(EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16(EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString_EVString(EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString(EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_getByHandle_ResourcePtr_ev_uint64(EarthView_World_Graphic_CTextureManager_getByHandle_ResourcePtr_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_getByHandle_ResourcePtr_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_EVString(EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_ev_uint64(EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager__notifyResourceTouched_void_CResource(EarthView_World_Graphic_CTextureManager__notifyResourceTouched_void_CResource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager__notifyResourceTouched_void_CResource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager__notifyResourceLoaded_void_CResource(EarthView_World_Graphic_CTextureManager__notifyResourceLoaded_void_CResource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager__notifyResourceLoaded_void_CResource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager__notifyResourceUnloaded_void_CResource(EarthView_World_Graphic_CTextureManager__notifyResourceUnloaded_void_CResource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager__notifyResourceUnloaded_void_CResource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool(EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool(EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString(EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_setVerbose_void_ev_bool(EarthView_World_Graphic_CTextureManager_setVerbose_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_setVerbose_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_getVerbose_ev_bool(EarthView_World_Graphic_CTextureManager_getVerbose_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_getVerbose_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(EarthView_World_Graphic_CTextureManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_addImpl_void_ResourcePtr(EarthView_World_Graphic_CTextureManager_addImpl_void_ResourcePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_addImpl_void_ResourcePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_removeImpl_void_ResourcePtr(EarthView_World_Graphic_CTextureManager_removeImpl_void_ResourcePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_removeImpl_void_ResourcePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_checkUsage_void(EarthView_World_Graphic_CTextureManager_checkUsage_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_checkUsage_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_getScriptPatterns_StringVector(EarthView_World_Graphic_CTextureManager_getScriptPatterns_StringVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_getScriptPatterns_StringVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_parseScript_void_DataStreamPtr_EVString(EarthView_World_Graphic_CTextureManager_parseScript_void_DataStreamPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_parseScript_void_DataStreamPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureManager_getLoadingOrder_Real(EarthView_World_Graphic_CTextureManager_getLoadingOrder_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureManager_getLoadingOrder_Real_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(_in const EVString& name, _in const EVString& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in EarthView::World::Graphic::PixelFormat desiredFormat, _in ev_bool hwGammaCorrection)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult returnValue = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*)m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback(name_Char, group_Char, isManual, ref_loader, createParams, (int)texType, numMipmaps, gamma, isAlpha, (int)desiredFormat, hwGammaCorrection);
						return returnValue;
					}
					else
						return this->CTextureManager::createOrRetrieve(name, group, isManual, ref_loader, createParams, texType, numMipmaps, gamma, isAlpha, desiredFormat, hwGammaCorrection);
				}
				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(_in const EVString& name, _in const EVString& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in EarthView::World::Graphic::PixelFormat desiredFormat)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult returnValue = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*)m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback(name_Char, group_Char, isManual, ref_loader, createParams, (int)texType, numMipmaps, gamma, isAlpha, (int)desiredFormat);
						return returnValue;
					}
					else
						return this->CTextureManager::createOrRetrieve(name, group, isManual, ref_loader, createParams, texType, numMipmaps, gamma, isAlpha, desiredFormat);
				}
				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(_in const EVString& name, _in const EVString& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult returnValue = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*)m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_Callback(name_Char, group_Char, isManual, loader, createParams, (int)texType, numMipmaps, gamma, isAlpha);
						return returnValue;
					}
					else
						return this->CTextureManager::createOrRetrieve(name, group, isManual, loader, createParams, texType, numMipmaps, gamma, isAlpha);
				}
				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(_in const EVString& name, _in const EVString& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 numMipmaps, _in Real gamma)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult returnValue = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*)m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_Callback(name_Char, group_Char, isManual, ref_loader, createParams, (int)texType, numMipmaps, gamma);
						return returnValue;
					}
					else
						return this->CTextureManager::createOrRetrieve(name, group, isManual, ref_loader, createParams, texType, numMipmaps, gamma);
				}
				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(_in const EVString& name, _in const EVString& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 numMipmaps)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult returnValue = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*)m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Callback(name_Char, group_Char, isManual, ref_loader, createParams, (int)texType, numMipmaps);
						return returnValue;
					}
					else
						return this->CTextureManager::createOrRetrieve(name, group, isManual, ref_loader, createParams, texType, numMipmaps);
				}
				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(_in const EVString& name, _in const EVString& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in EarthView::World::Graphic::TextureType texType)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult returnValue = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*)m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_Callback(name_Char, group_Char, isManual, ref_loader, createParams, (int)texType);
						return returnValue;
					}
					else
						return this->CTextureManager::createOrRetrieve(name, group, isManual, ref_loader, createParams, texType);
				}
				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(_in const EVString& name, _in const EVString& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult returnValue = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*)m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback(name_Char, group_Char, isManual, ref_loader, createParams);
						return returnValue;
					}
					else
						return this->CTextureManager::createOrRetrieve(name, group, isManual, ref_loader, createParams);
				}
				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(_in const EVString& name, _in const EVString& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* loader)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult returnValue = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*)m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Callback(name_Char, group_Char, isManual, loader);
						return returnValue;
					}
					else
						return this->CTextureManager::createOrRetrieve(name, group, isManual, loader);
				}
				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(_in const EVString& name, _in const EVString& group, _in ev_bool isManual)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult returnValue = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*)m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Callback(name_Char, group_Char, isManual);
						return returnValue;
					}
					else
						return this->CTextureManager::createOrRetrieve(name, group, isManual);
				}
				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(_in const EVString& name, _in const EVString& group)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult returnValue = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*)m_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Callback(name_Char, group_Char);
						return returnValue;
					}
					else
						return this->CTextureManager::createOrRetrieve(name, group);
				}
				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult replaceResource(_in const EVString& name, _in const EVString& group)
				{
					if(m_EarthView_World_Graphic_CTextureManager_replaceResource_ResourceCreateOrRetrieveResult_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult returnValue = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*)m_EarthView_World_Graphic_CTextureManager_replaceResource_ResourceCreateOrRetrieveResult_EVString_EVString_Callback(name_Char, group_Char);
						return returnValue;
					}
					else
						return this->CTextureManager::replaceResource(name, group);
				}
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(_in const EVString& name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in EarthView::World::Graphic::PixelFormat desiredFormat, _in ev_bool hwGammaCorrection)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback(name_Char, isManual, ref_loader, createParams, (int)texType, numMipmaps, gamma, isAlpha, (int)desiredFormat, hwGammaCorrection);
						return returnValue;
					}
					else
						return this->CTextureManager::createUnmanaged(name, isManual, ref_loader, createParams, texType, numMipmaps, gamma, isAlpha, desiredFormat, hwGammaCorrection);
				}
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(_in const EVString& name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in EarthView::World::Graphic::PixelFormat desiredFormat)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback(name_Char, isManual, ref_loader, createParams, (int)texType, numMipmaps, gamma, isAlpha, (int)desiredFormat);
						return returnValue;
					}
					else
						return this->CTextureManager::createUnmanaged(name, isManual, ref_loader, createParams, texType, numMipmaps, gamma, isAlpha, desiredFormat);
				}
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(_in const EVString& name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_Callback(name_Char, isManual, loader, createParams, (int)texType, numMipmaps, gamma, isAlpha);
						return returnValue;
					}
					else
						return this->CTextureManager::createUnmanaged(name, isManual, loader, createParams, texType, numMipmaps, gamma, isAlpha);
				}
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(_in const EVString& name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 numMipmaps, _in Real gamma)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_Callback(name_Char, isManual, ref_loader, createParams, (int)texType, numMipmaps, gamma);
						return returnValue;
					}
					else
						return this->CTextureManager::createUnmanaged(name, isManual, ref_loader, createParams, texType, numMipmaps, gamma);
				}
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(_in const EVString& name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 numMipmaps)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Callback(name_Char, isManual, ref_loader, createParams, (int)texType, numMipmaps);
						return returnValue;
					}
					else
						return this->CTextureManager::createUnmanaged(name, isManual, ref_loader, createParams, texType, numMipmaps);
				}
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(_in const EVString& name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in EarthView::World::Graphic::TextureType texType)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_Callback(name_Char, isManual, ref_loader, createParams, (int)texType);
						return returnValue;
					}
					else
						return this->CTextureManager::createUnmanaged(name, isManual, ref_loader, createParams, texType);
				}
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(_in const EVString& name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback(name_Char, isManual, ref_loader, createParams);
						return returnValue;
					}
					else
						return this->CTextureManager::createUnmanaged(name, isManual, ref_loader, createParams);
				}
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(_in const EVString& name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* loader)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Callback(name_Char, isManual, loader);
						return returnValue;
					}
					else
						return this->CTextureManager::createUnmanaged(name, isManual, loader);
				}
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(_in const EVString& name, _in ev_bool isManual)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Callback(name_Char, isManual);
						return returnValue;
					}
					else
						return this->CTextureManager::createUnmanaged(name, isManual);
				}
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CTextureManager::createUnmanaged(name);
				}
				virtual EarthView::World::Graphic::CTexturePtr prepare(_in const EVString& name, _in const EVString& group, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in EarthView::World::Graphic::PixelFormat desiredFormat, _in ev_bool hwGammaCorrection)
				{
					if(m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback(name_Char, group_Char, (int)texType, numMipmaps, gamma, isAlpha, (int)desiredFormat, hwGammaCorrection);
						return returnValue;
					}
					else
						return this->CTextureManager::prepare(name, group, texType, numMipmaps, gamma, isAlpha, desiredFormat, hwGammaCorrection);
				}
				virtual EarthView::World::Graphic::CTexturePtr prepare(_in const EVString& name, _in const EVString& group, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in EarthView::World::Graphic::PixelFormat desiredFormat)
				{
					if(m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback(name_Char, group_Char, (int)texType, numMipmaps, gamma, isAlpha, (int)desiredFormat);
						return returnValue;
					}
					else
						return this->CTextureManager::prepare(name, group, texType, numMipmaps, gamma, isAlpha, desiredFormat);
				}
				virtual EarthView::World::Graphic::CTexturePtr prepare(_in const EVString& name, _in const EVString& group, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha)
				{
					if(m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_Callback(name_Char, group_Char, (int)texType, numMipmaps, gamma, isAlpha);
						return returnValue;
					}
					else
						return this->CTextureManager::prepare(name, group, texType, numMipmaps, gamma, isAlpha);
				}
				virtual EarthView::World::Graphic::CTexturePtr prepare(_in const EVString& name, _in const EVString& group, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 numMipmaps, _in Real gamma)
				{
					if(m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_Callback(name_Char, group_Char, (int)texType, numMipmaps, gamma);
						return returnValue;
					}
					else
						return this->CTextureManager::prepare(name, group, texType, numMipmaps, gamma);
				}
				virtual EarthView::World::Graphic::CTexturePtr prepare(_in const EVString& name, _in const EVString& group, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 numMipmaps)
				{
					if(m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Callback(name_Char, group_Char, (int)texType, numMipmaps);
						return returnValue;
					}
					else
						return this->CTextureManager::prepare(name, group, texType, numMipmaps);
				}
				virtual EarthView::World::Graphic::CTexturePtr prepare(_in const EVString& name, _in const EVString& group, _in EarthView::World::Graphic::TextureType texType)
				{
					if(m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_Callback(name_Char, group_Char, (int)texType);
						return returnValue;
					}
					else
						return this->CTextureManager::prepare(name, group, texType);
				}
				virtual EarthView::World::Graphic::CTexturePtr prepare(_in const EVString& name, _in const EVString& group)
				{
					if(m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_Callback(name_Char, group_Char);
						return returnValue;
					}
					else
						return this->CTextureManager::prepare(name, group);
				}
				virtual EarthView::World::Graphic::ResourcePtr load(_in const EVString& name, _in const EVString& group, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in EarthView::World::Graphic::PixelFormat desiredFormat, _in ev_bool hwGammaCorrection)
				{
					if(m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback(name_Char, group_Char, (int)texType, numMipmaps, gamma, isAlpha, (int)desiredFormat, hwGammaCorrection);
						return returnValue;
					}
					else
						return this->CTextureManager::load(name, group, texType, numMipmaps, gamma, isAlpha, desiredFormat, hwGammaCorrection);
				}
				virtual EarthView::World::Graphic::ResourcePtr load(_in const EVString& name, _in const EVString& group, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in EarthView::World::Graphic::PixelFormat desiredFormat)
				{
					if(m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback(name_Char, group_Char, (int)texType, numMipmaps, gamma, isAlpha, (int)desiredFormat);
						return returnValue;
					}
					else
						return this->CTextureManager::load(name, group, texType, numMipmaps, gamma, isAlpha, desiredFormat);
				}
				virtual EarthView::World::Graphic::ResourcePtr load(_in const EVString& name, _in const EVString& group, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha)
				{
					if(m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_Callback(name_Char, group_Char, (int)texType, numMipmaps, gamma, isAlpha);
						return returnValue;
					}
					else
						return this->CTextureManager::load(name, group, texType, numMipmaps, gamma, isAlpha);
				}
				virtual EarthView::World::Graphic::ResourcePtr load(_in const EVString& name, _in const EVString& group, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 numMipmaps, _in Real gamma)
				{
					if(m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_Callback(name_Char, group_Char, (int)texType, numMipmaps, gamma);
						return returnValue;
					}
					else
						return this->CTextureManager::load(name, group, texType, numMipmaps, gamma);
				}
				virtual EarthView::World::Graphic::ResourcePtr load(_in const EVString& name, _in const EVString& group, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 numMipmaps)
				{
					if(m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Callback(name_Char, group_Char, (int)texType, numMipmaps);
						return returnValue;
					}
					else
						return this->CTextureManager::load(name, group, texType, numMipmaps);
				}
				virtual EarthView::World::Graphic::ResourcePtr load(_in const EVString& name, _in const EVString& group, _in EarthView::World::Graphic::TextureType texType)
				{
					if(m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_Callback(name_Char, group_Char, (int)texType);
						return returnValue;
					}
					else
						return this->CTextureManager::load(name, group, texType);
				}
				virtual EarthView::World::Graphic::ResourcePtr load(_in const EVString& name, _in const EVString& group)
				{
					if(m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_Callback(name_Char, group_Char);
						return returnValue;
					}
					else
						return this->CTextureManager::load(name, group);
				}
				virtual EarthView::World::Graphic::CTexturePtr loadImage(_in const EVString& name, _in const EVString& group, _in const EarthView::World::Graphic::CImage& img, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 iNumMipmaps, _in Real gamma, _in ev_bool isAlpha, _in EarthView::World::Graphic::PixelFormat desiredFormat, _in ev_bool hwGammaCorrection)
				{
					if(m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback(name_Char, group_Char, &img, (int)texType, iNumMipmaps, gamma, isAlpha, (int)desiredFormat, hwGammaCorrection);
						return returnValue;
					}
					else
						return this->CTextureManager::loadImage(name, group, img, texType, iNumMipmaps, gamma, isAlpha, desiredFormat, hwGammaCorrection);
				}
				virtual EarthView::World::Graphic::CTexturePtr loadImage(_in const EVString& name, _in const EVString& group, _in const EarthView::World::Graphic::CImage& img, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 iNumMipmaps, _in Real gamma, _in ev_bool isAlpha, _in EarthView::World::Graphic::PixelFormat desiredFormat)
				{
					if(m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback(name_Char, group_Char, &img, (int)texType, iNumMipmaps, gamma, isAlpha, (int)desiredFormat);
						return returnValue;
					}
					else
						return this->CTextureManager::loadImage(name, group, img, texType, iNumMipmaps, gamma, isAlpha, desiredFormat);
				}
				virtual EarthView::World::Graphic::CTexturePtr loadImage(_in const EVString& name, _in const EVString& group, _in const EarthView::World::Graphic::CImage& img, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 iNumMipmaps, _in Real gamma, _in ev_bool isAlphat)
				{
					if(m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_Callback(name_Char, group_Char, &img, (int)texType, iNumMipmaps, gamma, isAlphat);
						return returnValue;
					}
					else
						return this->CTextureManager::loadImage(name, group, img, texType, iNumMipmaps, gamma, isAlphat);
				}
				virtual EarthView::World::Graphic::CTexturePtr loadImage(_in const EVString& name, _in const EVString& group, _in const EarthView::World::Graphic::CImage& img, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 iNumMipmaps, _in Real gamma)
				{
					if(m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_Callback(name_Char, group_Char, &img, (int)texType, iNumMipmaps, gamma);
						return returnValue;
					}
					else
						return this->CTextureManager::loadImage(name, group, img, texType, iNumMipmaps, gamma);
				}
				virtual EarthView::World::Graphic::CTexturePtr loadImage(_in const EVString& name, _in const EVString& group, _in const EarthView::World::Graphic::CImage& img, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 iNumMipmaps)
				{
					if(m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Callback(name_Char, group_Char, &img, (int)texType, iNumMipmaps);
						return returnValue;
					}
					else
						return this->CTextureManager::loadImage(name, group, img, texType, iNumMipmaps);
				}
				virtual EarthView::World::Graphic::CTexturePtr loadImage(_in const EVString& name, _in const EVString& group, _in const EarthView::World::Graphic::CImage& img, _in EarthView::World::Graphic::TextureType texType)
				{
					if(m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_Callback(name_Char, group_Char, &img, (int)texType);
						return returnValue;
					}
					else
						return this->CTextureManager::loadImage(name, group, img, texType);
				}
				virtual EarthView::World::Graphic::CTexturePtr loadImage(_in const EVString& name, _in const EVString& group, _in const EarthView::World::Graphic::CImage& img)
				{
					if(m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_Callback(name_Char, group_Char, &img);
						return returnValue;
					}
					else
						return this->CTextureManager::loadImage(name, group, img);
				}
				virtual EarthView::World::Graphic::CTexturePtr loadRawData(_in const EVString& name, _in const EVString& group, _inout EarthView::World::Core::DataStreamPtr& stream, _in ev_uint16 uWidth, _in ev_uint16 uHeight, _in EarthView::World::Graphic::PixelFormat format, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 iNumMipmaps, _in Real gamma, _in ev_bool hwGammaCorrection)
				{
					if(m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool_Callback(name_Char, group_Char, &stream, uWidth, uHeight, (int)format, (int)texType, iNumMipmaps, gamma, hwGammaCorrection);
						return returnValue;
					}
					else
						return this->CTextureManager::loadRawData(name, group, stream, uWidth, uHeight, format, texType, iNumMipmaps, gamma, hwGammaCorrection);
				}
				virtual EarthView::World::Graphic::CTexturePtr loadRawData(_in const EVString& name, _in const EVString& group, _inout EarthView::World::Core::DataStreamPtr& stream, _in ev_uint16 uWidth, _in ev_uint16 uHeight, _in EarthView::World::Graphic::PixelFormat format, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 iNumMipmaps, _in Real gamma)
				{
					if(m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_Callback(name_Char, group_Char, &stream, uWidth, uHeight, (int)format, (int)texType, iNumMipmaps, gamma);
						return returnValue;
					}
					else
						return this->CTextureManager::loadRawData(name, group, stream, uWidth, uHeight, format, texType, iNumMipmaps, gamma);
				}
				virtual EarthView::World::Graphic::CTexturePtr loadRawData(_in const EVString& name, _in const EVString& group, _inout EarthView::World::Core::DataStreamPtr& stream, _in ev_uint16 uWidth, _in ev_uint16 uHeight, _in EarthView::World::Graphic::PixelFormat format, _in EarthView::World::Graphic::TextureType texType, _in ev_int32 iNumMipmaps)
				{
					if(m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Callback(name_Char, group_Char, &stream, uWidth, uHeight, (int)format, (int)texType, iNumMipmaps);
						return returnValue;
					}
					else
						return this->CTextureManager::loadRawData(name, group, stream, uWidth, uHeight, format, texType, iNumMipmaps);
				}
				virtual EarthView::World::Graphic::CTexturePtr loadRawData(_in const EVString& name, _in const EVString& group, _inout EarthView::World::Core::DataStreamPtr& stream, _in ev_uint16 uWidth, _in ev_uint16 uHeight, _in EarthView::World::Graphic::PixelFormat format, _in EarthView::World::Graphic::TextureType texType)
				{
					if(m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_Callback(name_Char, group_Char, &stream, uWidth, uHeight, (int)format, (int)texType);
						return returnValue;
					}
					else
						return this->CTextureManager::loadRawData(name, group, stream, uWidth, uHeight, format, texType);
				}
				virtual EarthView::World::Graphic::CTexturePtr loadRawData(_in const EVString& name, _in const EVString& group, _inout EarthView::World::Core::DataStreamPtr& stream, _in ev_uint16 uWidth, _in ev_uint16 uHeight, _in EarthView::World::Graphic::PixelFormat format)
				{
					if(m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_Callback(name_Char, group_Char, &stream, uWidth, uHeight, (int)format);
						return returnValue;
					}
					else
						return this->CTextureManager::loadRawData(name, group, stream, uWidth, uHeight, format);
				}
				virtual EarthView::World::Graphic::CTexturePtr createManual(_in const EVString& name, _in const EVString& group, _in EarthView::World::Graphic::TextureType texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 depth, _in ev_int32 num_mips, _in EarthView::World::Graphic::PixelFormat format, _in ev_int32 usage, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in ev_bool hwGammaCorrection, _in ev_uint32 fsaa, _in const EVString& fsaaHint)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						char* fsaaHint_Char = fsaaHint.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString_Callback(name_Char, group_Char, (int)texType, width, height, depth, num_mips, (int)format, usage, ref_loader, hwGammaCorrection, fsaa, fsaaHint_Char);
						return returnValue;
					}
					else
						return this->CTextureManager::createManual(name, group, texType, width, height, depth, num_mips, format, usage, ref_loader, hwGammaCorrection, fsaa, fsaaHint);
				}
				virtual EarthView::World::Graphic::CTexturePtr createManual(_in const EVString& name, _in const EVString& group, _in EarthView::World::Graphic::TextureType texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 depth, _in ev_int32 num_mips, _in EarthView::World::Graphic::PixelFormat format, _in ev_int32 usage, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in ev_bool hwGammaCorrection, _in ev_uint32 fsaa)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_Callback(name_Char, group_Char, (int)texType, width, height, depth, num_mips, (int)format, usage, ref_loader, hwGammaCorrection, fsaa);
						return returnValue;
					}
					else
						return this->CTextureManager::createManual(name, group, texType, width, height, depth, num_mips, format, usage, ref_loader, hwGammaCorrection, fsaa);
				}
				virtual EarthView::World::Graphic::CTexturePtr createManual(_in const EVString& name, _in const EVString& group, _in EarthView::World::Graphic::TextureType texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 depth, _in ev_int32 num_mips, _in EarthView::World::Graphic::PixelFormat format, _in ev_int32 usage, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in ev_bool hwGammaCorrection)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_Callback(name_Char, group_Char, (int)texType, width, height, depth, num_mips, (int)format, usage, ref_loader, hwGammaCorrection);
						return returnValue;
					}
					else
						return this->CTextureManager::createManual(name, group, texType, width, height, depth, num_mips, format, usage, ref_loader, hwGammaCorrection);
				}
				virtual EarthView::World::Graphic::CTexturePtr createManual(_in const EVString& name, _in const EVString& group, _in EarthView::World::Graphic::TextureType texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 depth, _in ev_int32 num_mips, _in EarthView::World::Graphic::PixelFormat format, _in ev_int32 usage, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_Callback(name_Char, group_Char, (int)texType, width, height, depth, num_mips, (int)format, usage, ref_loader);
						return returnValue;
					}
					else
						return this->CTextureManager::createManual(name, group, texType, width, height, depth, num_mips, format, usage, ref_loader);
				}
				virtual EarthView::World::Graphic::CTexturePtr createManual(_in const EVString& name, _in const EVString& group, _in EarthView::World::Graphic::TextureType texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 depth, _in ev_int32 num_mips, _in EarthView::World::Graphic::PixelFormat format, _in ev_int32 usage)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_Callback(name_Char, group_Char, (int)texType, width, height, depth, num_mips, (int)format, usage);
						return returnValue;
					}
					else
						return this->CTextureManager::createManual(name, group, texType, width, height, depth, num_mips, format, usage);
				}
				virtual EarthView::World::Graphic::CTexturePtr createManual(_in const EVString& name, _in const EVString& group, _in EarthView::World::Graphic::TextureType texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 depth, _in ev_int32 num_mips, _in EarthView::World::Graphic::PixelFormat format)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CTexturePtr returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_Callback(name_Char, group_Char, (int)texType, width, height, depth, num_mips, (int)format);
						return returnValue;
					}
					else
						return this->CTextureManager::createManual(name, group, texType, width, height, depth, num_mips, format);
				}
				virtual void setPreferredIntegerBitDepth(_in ev_uint16 bits, _in ev_bool reloadTextures)
				{
					if(m_EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_ev_bool_Callback(bits, reloadTextures);
					}
					else
						return this->CTextureManager::setPreferredIntegerBitDepth(bits, reloadTextures);
				}
				virtual void setPreferredIntegerBitDepth(_in ev_uint16 bits)
				{
					if(m_EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_Callback(bits);
					}
					else
						return this->CTextureManager::setPreferredIntegerBitDepth(bits);
				}
				virtual ev_uint16 getPreferredIntegerBitDepth() const
				{
					if(m_EarthView_World_Graphic_CTextureManager_getPreferredIntegerBitDepth_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CTextureManager_getPreferredIntegerBitDepth_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CTextureManager::getPreferredIntegerBitDepth();
				}
				virtual void setPreferredFloatBitDepth(_in ev_uint16 bits, _in ev_bool reloadTextures)
				{
					if(m_EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_ev_bool_Callback(bits, reloadTextures);
					}
					else
						return this->CTextureManager::setPreferredFloatBitDepth(bits, reloadTextures);
				}
				virtual void setPreferredFloatBitDepth(_in ev_uint16 bits)
				{
					if(m_EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_Callback(bits);
					}
					else
						return this->CTextureManager::setPreferredFloatBitDepth(bits);
				}
				virtual ev_uint16 getPreferredFloatBitDepth() const
				{
					if(m_EarthView_World_Graphic_CTextureManager_getPreferredFloatBitDepth_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CTextureManager_getPreferredFloatBitDepth_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CTextureManager::getPreferredFloatBitDepth();
				}
				virtual void setPreferredBitDepths(_in ev_uint16 integerBits, _in ev_uint16 floatBits, _in ev_bool reloadTextures)
				{
					if(m_EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_ev_bool_Callback(integerBits, floatBits, reloadTextures);
					}
					else
						return this->CTextureManager::setPreferredBitDepths(integerBits, floatBits, reloadTextures);
				}
				virtual void setPreferredBitDepths(_in ev_uint16 integerBits, _in ev_uint16 floatBits)
				{
					if(m_EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_Callback(integerBits, floatBits);
					}
					else
						return this->CTextureManager::setPreferredBitDepths(integerBits, floatBits);
				}
				virtual ev_bool isFormatSupported(_in EarthView::World::Graphic::TextureType ttype, _in EarthView::World::Graphic::PixelFormat format, _in ev_int32 usage)
				{
					if(m_EarthView_World_Graphic_CTextureManager_isFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CTextureManager_isFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback((int)ttype, (int)format, usage);
						return returnValue;
					}
					else
						return this->CTextureManager::isFormatSupported(ttype, format, usage);
				}
				virtual ev_bool isEquivalentFormatSupported(_in EarthView::World::Graphic::TextureType ttype, _in EarthView::World::Graphic::PixelFormat format, _in ev_int32 usage)
				{
					if(m_EarthView_World_Graphic_CTextureManager_isEquivalentFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CTextureManager_isEquivalentFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback((int)ttype, (int)format, usage);
						return returnValue;
					}
					else
						return this->CTextureManager::isEquivalentFormatSupported(ttype, format, usage);
				}
				virtual EarthView::World::Graphic::PixelFormat getNativeFormat(_in EarthView::World::Graphic::TextureType ttype, _in EarthView::World::Graphic::PixelFormat format, _in ev_int32 usage)
				{
					if(m_EarthView_World_Graphic_CTextureManager_getNativeFormat_PixelFormat_TextureType_PixelFormat_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::PixelFormat returnValue = (EarthView::World::Graphic::PixelFormat)m_EarthView_World_Graphic_CTextureManager_getNativeFormat_PixelFormat_TextureType_PixelFormat_ev_int32_Callback((int)ttype, (int)format, usage);
						return returnValue;
					}
					else
						return this->CTextureManager::getNativeFormat(ttype, format, usage);
				}
				virtual ev_bool isHardwareFilteringSupported(_in EarthView::World::Graphic::TextureType ttype, _in EarthView::World::Graphic::PixelFormat format, _in ev_int32 usage, _in ev_bool preciseFormatOnly)
				{
					if(m_EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool_Callback((int)ttype, (int)format, usage, preciseFormatOnly);
						return returnValue;
					}
					else
						return this->CTextureManager::isHardwareFilteringSupported(ttype, format, usage, preciseFormatOnly);
				}
				virtual ev_bool isHardwareFilteringSupported(_in EarthView::World::Graphic::TextureType ttype, _in EarthView::World::Graphic::PixelFormat format, _in ev_int32 usage)
				{
					if(m_EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback((int)ttype, (int)format, usage);
						return returnValue;
					}
					else
						return this->CTextureManager::isHardwareFilteringSupported(ttype, format, usage);
				}
				virtual void setDefaultNumMipmaps(_in ev_size_t num)
				{
					if(m_EarthView_World_Graphic_CTextureManager_setDefaultNumMipmaps_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_setDefaultNumMipmaps_void_ev_size_t_Callback(num);
					}
					else
						return this->CTextureManager::setDefaultNumMipmaps(num);
				}
				virtual ev_size_t getDefaultNumMipmaps()
				{
					if(m_EarthView_World_Graphic_CTextureManager_getDefaultNumMipmaps_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CTextureManager_getDefaultNumMipmaps_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CTextureManager::getDefaultNumMipmaps();
				}
				virtual EarthView::World::Graphic::ResourcePtr create(_in const EVString& name, _in const EVString& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams)
				{
					if(m_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback(name_Char, group_Char, isManual, ref_loader, createParams);
						return returnValue;
					}
					else
						return this->CTextureManager::create(name, group, isManual, ref_loader, createParams);
				}
				virtual EarthView::World::Graphic::ResourcePtr create(_in const EVString& name, _in const EVString& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader)
				{
					if(m_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback(name_Char, group_Char, isManual, ref_loader);
						return returnValue;
					}
					else
						return this->CTextureManager::create(name, group, isManual, ref_loader);
				}
				virtual EarthView::World::Graphic::ResourcePtr create(_in const EVString& name, _in const EVString& group, _in ev_bool isManual)
				{
					if(m_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_Callback(name_Char, group_Char, isManual);
						return returnValue;
					}
					else
						return this->CTextureManager::create(name, group, isManual);
				}
				virtual EarthView::World::Graphic::ResourcePtr create(_in const EVString& name, _in const EVString& group)
				{
					if(m_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_Callback(name_Char, group_Char);
						return returnValue;
					}
					else
						return this->CTextureManager::create(name, group);
				}
				virtual void setMemoryBudget(_in ev_size_t bytes)
				{
					if(m_EarthView_World_Graphic_CTextureManager_setMemoryBudget_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_setMemoryBudget_void_ev_size_t_Callback(bytes);
					}
					else
						return this->CTextureManager::setMemoryBudget(bytes);
				}
				virtual ev_size_t getMemoryBudget() const
				{
					if(m_EarthView_World_Graphic_CTextureManager_getMemoryBudget_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CTextureManager_getMemoryBudget_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CTextureManager::getMemoryBudget();
				}
				virtual ev_size_t getMemoryUsage() const
				{
					if(m_EarthView_World_Graphic_CTextureManager_getMemoryUsage_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CTextureManager_getMemoryUsage_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CTextureManager::getMemoryUsage();
				}
				virtual void unload(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CTextureManager_unload_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CTextureManager_unload_void_EVString_Callback(name_Char);
					}
					else
						return this->CTextureManager::unload(name);
				}
				virtual void unload(_in ev_uint64 handle)
				{
					if(m_EarthView_World_Graphic_CTextureManager_unload_void_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_unload_void_ev_uint64_Callback(handle);
					}
					else
						return this->CTextureManager::unload(handle);
				}
				virtual void unloadAll(_in ev_bool reloadableOnly)
				{
					if(m_EarthView_World_Graphic_CTextureManager_unloadAll_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_unloadAll_void_ev_bool_Callback(reloadableOnly);
					}
					else
						return this->CTextureManager::unloadAll(reloadableOnly);
				}
				virtual void unloadAll()
				{
					if(m_EarthView_World_Graphic_CTextureManager_unloadAll_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_unloadAll_void_Callback();
					}
					else
						return this->CTextureManager::unloadAll();
				}
				virtual void reloadAll(_in ev_bool reloadableOnly)
				{
					if(m_EarthView_World_Graphic_CTextureManager_reloadAll_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_reloadAll_void_ev_bool_Callback(reloadableOnly);
					}
					else
						return this->CTextureManager::reloadAll(reloadableOnly);
				}
				virtual void reloadAll()
				{
					if(m_EarthView_World_Graphic_CTextureManager_reloadAll_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_reloadAll_void_Callback();
					}
					else
						return this->CTextureManager::reloadAll();
				}
				virtual void unloadUnreferencedResources(_in ev_bool reloadableOnly)
				{
					if(m_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void_ev_bool_Callback(reloadableOnly);
					}
					else
						return this->CTextureManager::unloadUnreferencedResources(reloadableOnly);
				}
				virtual void unloadUnreferencedResources()
				{
					if(m_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void_Callback();
					}
					else
						return this->CTextureManager::unloadUnreferencedResources();
				}
				virtual void reloadUnreferencedResources(_in ev_bool reloadableOnly)
				{
					if(m_EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void_ev_bool_Callback(reloadableOnly);
					}
					else
						return this->CTextureManager::reloadUnreferencedResources(reloadableOnly);
				}
				virtual void reloadUnreferencedResources()
				{
					if(m_EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void_Callback();
					}
					else
						return this->CTextureManager::reloadUnreferencedResources();
				}
				virtual void remove(_inout EarthView::World::Graphic::ResourcePtr& r)
				{
					if(m_EarthView_World_Graphic_CTextureManager_remove_void_ResourcePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_remove_void_ResourcePtr_Callback(&r);
					}
					else
						return this->CTextureManager::remove(r);
				}
				virtual void remove(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CTextureManager_remove_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CTextureManager_remove_void_EVString_Callback(name_Char);
					}
					else
						return this->CTextureManager::remove(name);
				}
				virtual void remove(_in ev_uint64 handle)
				{
					if(m_EarthView_World_Graphic_CTextureManager_remove_void_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_remove_void_ev_uint64_Callback(handle);
					}
					else
						return this->CTextureManager::remove(handle);
				}
				virtual void remove(_in const EVString& name, _in const EVString& groupname)
				{
					if(m_EarthView_World_Graphic_CTextureManager_remove_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* groupname_Char = groupname.makeBuffer();
						m_EarthView_World_Graphic_CTextureManager_remove_void_EVString_EVString_Callback(name_Char, groupname_Char);
					}
					else
						return this->CTextureManager::remove(name, groupname);
				}
				virtual void removeAll()
				{
					if(m_EarthView_World_Graphic_CTextureManager_removeAll_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_removeAll_void_Callback();
					}
					else
						return this->CTextureManager::removeAll();
				}
				virtual void removeUnreferencedResources(_in ev_bool reloadableOnly)
				{
					if(m_EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void_ev_bool_Callback(reloadableOnly);
					}
					else
						return this->CTextureManager::removeUnreferencedResources(reloadableOnly);
				}
				virtual void removeUnreferencedResources()
				{
					if(m_EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void_Callback();
					}
					else
						return this->CTextureManager::removeUnreferencedResources();
				}
				virtual void removeUnreferencedResource(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString_Callback(name_Char);
					}
					else
						return this->CTextureManager::removeUnreferencedResource(name);
				}
				virtual void removeUnreferencedResource(_in const EVString& name, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString_EVString_Callback(name_Char, groupName_Char);
					}
					else
						return this->CTextureManager::removeUnreferencedResource(name, groupName);
				}
				virtual void unloadUnreferencedResource(_in const EVString& name, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString_Callback(name_Char, groupName_Char);
					}
					else
						return this->CTextureManager::unloadUnreferencedResource(name, groupName);
				}
				virtual void unloadUnreferencedResource(_in const EVString& name, _in const EVString& groupName, _in ev_uint16 useCount)
				{
					if(m_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Callback(name_Char, groupName_Char, useCount);
					}
					else
						return this->CTextureManager::unloadUnreferencedResource(name, groupName, useCount);
				}
				virtual EarthView::World::Graphic::ResourcePtr getByName(_in const EVString& name, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString_EVString_Callback(name_Char, groupName_Char);
						return returnValue;
					}
					else
						return this->CTextureManager::getByName(name, groupName);
				}
				virtual EarthView::World::Graphic::ResourcePtr getByName(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CTextureManager::getByName(name);
				}
				virtual EarthView::World::Graphic::ResourcePtr getByHandle(_in ev_uint64 handle)
				{
					if(m_EarthView_World_Graphic_CTextureManager_getByHandle_ResourcePtr_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CTextureManager_getByHandle_ResourcePtr_ev_uint64_Callback(handle);
						return returnValue;
					}
					else
						return this->CTextureManager::getByHandle(handle);
				}
				virtual ev_bool resourceExists(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CTextureManager::resourceExists(name);
				}
				virtual ev_bool resourceExists(_in ev_uint64 handle)
				{
					if(m_EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_ev_uint64_Callback(handle);
						return returnValue;
					}
					else
						return this->CTextureManager::resourceExists(handle);
				}
				virtual void _notifyResourceTouched(_in EarthView::World::Graphic::CResource* res)
				{
					if(m_EarthView_World_Graphic_CTextureManager__notifyResourceTouched_void_CResource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager__notifyResourceTouched_void_CResource_Callback(res);
					}
					else
						return this->CTextureManager::_notifyResourceTouched(res);
				}
				virtual void _notifyResourceLoaded(_in EarthView::World::Graphic::CResource* res)
				{
					if(m_EarthView_World_Graphic_CTextureManager__notifyResourceLoaded_void_CResource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager__notifyResourceLoaded_void_CResource_Callback(res);
					}
					else
						return this->CTextureManager::_notifyResourceLoaded(res);
				}
				virtual void _notifyResourceUnloaded(_in EarthView::World::Graphic::CResource* res)
				{
					if(m_EarthView_World_Graphic_CTextureManager__notifyResourceUnloaded_void_CResource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager__notifyResourceUnloaded_void_CResource_Callback(res);
					}
					else
						return this->CTextureManager::_notifyResourceUnloaded(res);
				}
				virtual const EarthView::World::Core::StringVector& getScriptPatterns() const
				{
					if(m_EarthView_World_Graphic_CTextureManager_getScriptPatterns_StringVector_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Core::StringVector& returnValue = *(EarthView::World::Core::StringVector*)m_EarthView_World_Graphic_CTextureManager_getScriptPatterns_StringVector_Callback();
						return returnValue;
					}
					else
						return this->CTextureManager::getScriptPatterns();
				}
				virtual void parseScript(_inout EarthView::World::Core::DataStreamPtr& stream, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CTextureManager_parseScript_void_DataStreamPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CTextureManager_parseScript_void_DataStreamPtr_EVString_Callback(&stream, groupName_Char);
					}
					else
						return this->CTextureManager::parseScript(stream, groupName);
				}
				virtual Real getLoadingOrder() const
				{
					if(m_EarthView_World_Graphic_CTextureManager_getLoadingOrder_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CTextureManager_getLoadingOrder_Real_Callback();
						return returnValue;
					}
					else
						return this->CTextureManager::getLoadingOrder();
				}
				virtual void setVerbose(_in ev_bool v)
				{
					if(m_EarthView_World_Graphic_CTextureManager_setVerbose_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_setVerbose_void_ev_bool_Callback(v);
					}
					else
						return this->CTextureManager::setVerbose(v);
				}
				virtual ev_bool getVerbose()
				{
					if(m_EarthView_World_Graphic_CTextureManager_getVerbose_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CTextureManager_getVerbose_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CTextureManager::getVerbose();
				}
				virtual EarthView::World::Graphic::CResource* createImpl(_in const EVString& name, _in ev_uint64 handle, _in const EVString& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* loader, _in const EarthView::World::Core::CommonStringPairList* createParams)
				{
					if(m_EarthView_World_Graphic_CTextureManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CResource* returnValue = m_EarthView_World_Graphic_CTextureManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback(name_Char, handle, group_Char, isManual, loader, createParams);
						return returnValue;
					}
					else
						return this->CTextureManager::createImpl(name, handle, group, isManual, loader, createParams);
				}
				virtual void addImpl(_inout EarthView::World::Graphic::ResourcePtr& res)
				{
					if(m_EarthView_World_Graphic_CTextureManager_addImpl_void_ResourcePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_addImpl_void_ResourcePtr_Callback(&res);
					}
					else
						return this->CTextureManager::addImpl(res);
				}
				virtual void removeImpl(_inout EarthView::World::Graphic::ResourcePtr& res)
				{
					if(m_EarthView_World_Graphic_CTextureManager_removeImpl_void_ResourcePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_removeImpl_void_ResourcePtr_Callback(&res);
					}
					else
						return this->CTextureManager::removeImpl(res);
				}
				virtual void checkUsage()
				{
					if(m_EarthView_World_Graphic_CTextureManager_checkUsage_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureManager_checkUsage_void_Callback();
					}
					else
						return this->CTextureManager::checkUsage();
				}
			};
			REGISTER_FACTORY_CLASS(CTextureManagerProxy);
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_getSingleton_CTextureManager( )
			{
				EarthView::World::Graphic::CTextureManager& objXXXX = EarthView::World::Graphic::CTextureManager::getSingleton();
				EarthView::World::Graphic::CTextureManager *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTextureManager*  _stdcall EarthView_World_Graphic_CTextureManager_getSingletonPtr_CTextureManager( )
			{
				EarthView::World::Graphic::CTextureManager* objXXXX = EarthView::World::Graphic::CTextureManager::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(void *pObjectXXXX, _in const char* name, _in const char* group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat, _in ev_bool hwGammaCorrection )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createOrRetrieve(name1, group1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat, hwGammaCorrection);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->createOrRetrieve(name1, group1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat, hwGammaCorrection);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat, _in ev_bool hwGammaCorrection )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createOrRetrieve(name1, group1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat, hwGammaCorrection);
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat(void *pObjectXXXX, _in const char* name, _in const char* group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createOrRetrieve(name1, group1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->createOrRetrieve(name1, group1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createOrRetrieve(name1, group1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat);
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool(void *pObjectXXXX, _in const char* name, _in const char* group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createOrRetrieve(name1, group1, isManual, loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->createOrRetrieve(name1, group1, isManual, loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createOrRetrieve(name1, group1, isManual, loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha);
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real(void *pObjectXXXX, _in const char* name, _in const char* group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps, _in Real gamma )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createOrRetrieve(name1, group1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->createOrRetrieve(name1, group1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps, _in Real gamma )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createOrRetrieve(name1, group1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma);
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32(void *pObjectXXXX, _in const char* name, _in const char* group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createOrRetrieve(name1, group1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->createOrRetrieve(name1, group1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createOrRetrieve(name1, group1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps);
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType(void *pObjectXXXX, _in const char* name, _in const char* group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createOrRetrieve(name1, group1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->createOrRetrieve(name1, group1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createOrRetrieve(name1, group1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType);
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(void *pObjectXXXX, _in const char* name, _in const char* group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createOrRetrieve(name1, group1, isManual, ref_loader, createParams);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->createOrRetrieve(name1, group1, isManual, ref_loader, createParams);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createOrRetrieve(name1, group1, isManual, ref_loader, createParams);
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader(void *pObjectXXXX, _in const char* name, _in const char* group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* loader )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createOrRetrieve(name1, group1, isManual, loader);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->createOrRetrieve(name1, group1, isManual, loader);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* loader )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createOrRetrieve(name1, group1, isManual, loader);
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in const char* group, _in ev_bool isManual )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createOrRetrieve(name1, group1, isManual);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->createOrRetrieve(name1, group1, isManual);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in ev_bool isManual )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createOrRetrieve(name1, group1, isManual);
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* group )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createOrRetrieve(name1, group1);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->createOrRetrieve(name1, group1);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createOrRetrieve(name1, group1);
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_replaceResource_ResourceCreateOrRetrieveResult_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* group )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::replaceResource(name1, group1);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->replaceResource(name1, group1);
					EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_replaceResource_ResourceCreateOrRetrieveResult_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_replaceResource_ResourceCreateOrRetrieveResult_EVString_EVString_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_replaceResource_ResourceCreateOrRetrieveResult_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_replaceResource_ResourceCreateOrRetrieveResult_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::replaceResource(name1, group1);
				EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult *pXXXX = new EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(void *pObjectXXXX, _in const char* name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat, _in ev_bool hwGammaCorrection )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createUnmanaged(name1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat, hwGammaCorrection);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->createUnmanaged(name1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat, hwGammaCorrection);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat, _in ev_bool hwGammaCorrection )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createUnmanaged(name1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat, hwGammaCorrection);
				EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat(void *pObjectXXXX, _in const char* name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createUnmanaged(name1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->createUnmanaged(name1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(void *pObjectXXXX, _in const char* name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createUnmanaged(name1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat);
				EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool(void *pObjectXXXX, _in const char* name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createUnmanaged(name1, isManual, loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->createUnmanaged(name1, isManual, loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createUnmanaged(name1, isManual, loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha);
				EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real(void *pObjectXXXX, _in const char* name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps, _in Real gamma )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createUnmanaged(name1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->createUnmanaged(name1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Real_NoVirtual(void *pObjectXXXX, _in const char* name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps, _in Real gamma )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createUnmanaged(name1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma);
				EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32(void *pObjectXXXX, _in const char* name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createUnmanaged(name1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->createUnmanaged(name1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_ev_int32_NoVirtual(void *pObjectXXXX, _in const char* name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType, _in ev_int32 numMipmaps )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createUnmanaged(name1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType, numMipmaps);
				EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType(void *pObjectXXXX, _in const char* name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createUnmanaged(name1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->createUnmanaged(name1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_TextureType_NoVirtual(void *pObjectXXXX, _in const char* name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams, _in int texType )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createUnmanaged(name1, isManual, ref_loader, createParams, (EarthView::World::Graphic::TextureType)texType);
				EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(void *pObjectXXXX, _in const char* name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createUnmanaged(name1, isManual, ref_loader, createParams);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->createUnmanaged(name1, isManual, ref_loader, createParams);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(void *pObjectXXXX, _in const char* name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createUnmanaged(name1, isManual, ref_loader, createParams);
				EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader(void *pObjectXXXX, _in const char* name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* loader )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createUnmanaged(name1, isManual, loader);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->createUnmanaged(name1, isManual, loader);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_NoVirtual(void *pObjectXXXX, _in const char* name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* loader )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createUnmanaged(name1, isManual, loader);
				EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in ev_bool isManual )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createUnmanaged(name1, isManual);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->createUnmanaged(name1, isManual);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* name, _in ev_bool isManual )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createUnmanaged(name1, isManual);
				EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createUnmanaged(name1);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->createUnmanaged(name1);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createUnmanaged_ResourcePtr_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createUnmanaged(name1);
				EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat, _in ev_bool hwGammaCorrection )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::prepare(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat, hwGammaCorrection);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->prepare(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat, hwGammaCorrection);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat, _in ev_bool hwGammaCorrection )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::prepare(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat, hwGammaCorrection);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::prepare(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->prepare(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::prepare(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::prepare(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->prepare(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::prepare(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_int32 numMipmaps, _in Real gamma )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::prepare(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->prepare(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Real_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_int32 numMipmaps, _in Real gamma )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::prepare(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_int32 numMipmaps )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::prepare(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->prepare(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_ev_int32_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_int32 numMipmaps )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::prepare(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::prepare(name1, group1, (EarthView::World::Graphic::TextureType)texType);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->prepare(name1, group1, (EarthView::World::Graphic::TextureType)texType);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_TextureType_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::prepare(name1, group1, (EarthView::World::Graphic::TextureType)texType);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* group )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::prepare(name1, group1);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->prepare(name1, group1);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_prepare_CTexturePtr_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::prepare(name1, group1);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat, _in ev_bool hwGammaCorrection )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::load(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat, hwGammaCorrection);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->load(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat, hwGammaCorrection);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat, _in ev_bool hwGammaCorrection )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::load(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat, hwGammaCorrection);
				EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::load(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->load(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::load(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat);
				EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::load(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->load(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_int32 numMipmaps, _in Real gamma, _in ev_bool isAlpha )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::load(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma, isAlpha);
				EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_int32 numMipmaps, _in Real gamma )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::load(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->load(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Real_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_int32 numMipmaps, _in Real gamma )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::load(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps, gamma);
				EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_int32 numMipmaps )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::load(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->load(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_ev_int32_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_int32 numMipmaps )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::load(name1, group1, (EarthView::World::Graphic::TextureType)texType, numMipmaps);
				EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::load(name1, group1, (EarthView::World::Graphic::TextureType)texType);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->load(name1, group1, (EarthView::World::Graphic::TextureType)texType);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_TextureType_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::load(name1, group1, (EarthView::World::Graphic::TextureType)texType);
				EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* group )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::load(name1, group1);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->load(name1, group1);
					EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::ResourcePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::load(name1, group1);
				EarthView::World::Graphic::ResourcePtr *pXXXX = new EarthView::World::Graphic::ResourcePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(void *pObjectXXXX, _in const char* name, _in const char* group, _in const void* img, _in int texType, _in ev_int32 iNumMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat, _in ev_bool hwGammaCorrection )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::loadImage(name1, group1, *(EarthView::World::Graphic::CImage*)img, (EarthView::World::Graphic::TextureType)texType, iNumMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat, hwGammaCorrection);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->loadImage(name1, group1, *(EarthView::World::Graphic::CImage*)img, (EarthView::World::Graphic::TextureType)texType, iNumMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat, hwGammaCorrection);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in const void* img, _in int texType, _in ev_int32 iNumMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat, _in ev_bool hwGammaCorrection )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::loadImage(name1, group1, *(EarthView::World::Graphic::CImage*)img, (EarthView::World::Graphic::TextureType)texType, iNumMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat, hwGammaCorrection);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat(void *pObjectXXXX, _in const char* name, _in const char* group, _in const void* img, _in int texType, _in ev_int32 iNumMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::loadImage(name1, group1, *(EarthView::World::Graphic::CImage*)img, (EarthView::World::Graphic::TextureType)texType, iNumMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->loadImage(name1, group1, *(EarthView::World::Graphic::CImage*)img, (EarthView::World::Graphic::TextureType)texType, iNumMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_PixelFormat_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in const void* img, _in int texType, _in ev_int32 iNumMipmaps, _in Real gamma, _in ev_bool isAlpha, _in int desiredFormat )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::loadImage(name1, group1, *(EarthView::World::Graphic::CImage*)img, (EarthView::World::Graphic::TextureType)texType, iNumMipmaps, gamma, isAlpha, (EarthView::World::Graphic::PixelFormat)desiredFormat);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool(void *pObjectXXXX, _in const char* name, _in const char* group, _in const void* img, _in int texType, _in ev_int32 iNumMipmaps, _in Real gamma, _in ev_bool isAlphat )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::loadImage(name1, group1, *(EarthView::World::Graphic::CImage*)img, (EarthView::World::Graphic::TextureType)texType, iNumMipmaps, gamma, isAlphat);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->loadImage(name1, group1, *(EarthView::World::Graphic::CImage*)img, (EarthView::World::Graphic::TextureType)texType, iNumMipmaps, gamma, isAlphat);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in const void* img, _in int texType, _in ev_int32 iNumMipmaps, _in Real gamma, _in ev_bool isAlphat )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::loadImage(name1, group1, *(EarthView::World::Graphic::CImage*)img, (EarthView::World::Graphic::TextureType)texType, iNumMipmaps, gamma, isAlphat);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real(void *pObjectXXXX, _in const char* name, _in const char* group, _in const void* img, _in int texType, _in ev_int32 iNumMipmaps, _in Real gamma )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::loadImage(name1, group1, *(EarthView::World::Graphic::CImage*)img, (EarthView::World::Graphic::TextureType)texType, iNumMipmaps, gamma);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->loadImage(name1, group1, *(EarthView::World::Graphic::CImage*)img, (EarthView::World::Graphic::TextureType)texType, iNumMipmaps, gamma);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Real_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in const void* img, _in int texType, _in ev_int32 iNumMipmaps, _in Real gamma )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::loadImage(name1, group1, *(EarthView::World::Graphic::CImage*)img, (EarthView::World::Graphic::TextureType)texType, iNumMipmaps, gamma);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32(void *pObjectXXXX, _in const char* name, _in const char* group, _in const void* img, _in int texType, _in ev_int32 iNumMipmaps )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::loadImage(name1, group1, *(EarthView::World::Graphic::CImage*)img, (EarthView::World::Graphic::TextureType)texType, iNumMipmaps);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->loadImage(name1, group1, *(EarthView::World::Graphic::CImage*)img, (EarthView::World::Graphic::TextureType)texType, iNumMipmaps);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_ev_int32_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in const void* img, _in int texType, _in ev_int32 iNumMipmaps )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::loadImage(name1, group1, *(EarthView::World::Graphic::CImage*)img, (EarthView::World::Graphic::TextureType)texType, iNumMipmaps);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType(void *pObjectXXXX, _in const char* name, _in const char* group, _in const void* img, _in int texType )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::loadImage(name1, group1, *(EarthView::World::Graphic::CImage*)img, (EarthView::World::Graphic::TextureType)texType);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->loadImage(name1, group1, *(EarthView::World::Graphic::CImage*)img, (EarthView::World::Graphic::TextureType)texType);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_TextureType_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in const void* img, _in int texType )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::loadImage(name1, group1, *(EarthView::World::Graphic::CImage*)img, (EarthView::World::Graphic::TextureType)texType);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage(void *pObjectXXXX, _in const char* name, _in const char* group, _in const void* img )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::loadImage(name1, group1, *(EarthView::World::Graphic::CImage*)img);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->loadImage(name1, group1, *(EarthView::World::Graphic::CImage*)img);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_loadImage_CTexturePtr_EVString_EVString_CImage_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in const void* img )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::loadImage(name1, group1, *(EarthView::World::Graphic::CImage*)img);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool(void *pObjectXXXX, _in const char* name, _in const char* group, _inout void* stream, _in ev_uint16 uWidth, _in ev_uint16 uHeight, _in int format, _in int texType, _in ev_int32 iNumMipmaps, _in Real gamma, _in ev_bool hwGammaCorrection )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::loadRawData(name1, group1, *(EarthView::World::Core::DataStreamPtr*)stream, uWidth, uHeight, (EarthView::World::Graphic::PixelFormat)format, (EarthView::World::Graphic::TextureType)texType, iNumMipmaps, gamma, hwGammaCorrection);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->loadRawData(name1, group1, *(EarthView::World::Core::DataStreamPtr*)stream, uWidth, uHeight, (EarthView::World::Graphic::PixelFormat)format, (EarthView::World::Graphic::TextureType)texType, iNumMipmaps, gamma, hwGammaCorrection);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _inout void* stream, _in ev_uint16 uWidth, _in ev_uint16 uHeight, _in int format, _in int texType, _in ev_int32 iNumMipmaps, _in Real gamma, _in ev_bool hwGammaCorrection )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::loadRawData(name1, group1, *(EarthView::World::Core::DataStreamPtr*)stream, uWidth, uHeight, (EarthView::World::Graphic::PixelFormat)format, (EarthView::World::Graphic::TextureType)texType, iNumMipmaps, gamma, hwGammaCorrection);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real(void *pObjectXXXX, _in const char* name, _in const char* group, _inout void* stream, _in ev_uint16 uWidth, _in ev_uint16 uHeight, _in int format, _in int texType, _in ev_int32 iNumMipmaps, _in Real gamma )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::loadRawData(name1, group1, *(EarthView::World::Core::DataStreamPtr*)stream, uWidth, uHeight, (EarthView::World::Graphic::PixelFormat)format, (EarthView::World::Graphic::TextureType)texType, iNumMipmaps, gamma);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->loadRawData(name1, group1, *(EarthView::World::Core::DataStreamPtr*)stream, uWidth, uHeight, (EarthView::World::Graphic::PixelFormat)format, (EarthView::World::Graphic::TextureType)texType, iNumMipmaps, gamma);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Real_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _inout void* stream, _in ev_uint16 uWidth, _in ev_uint16 uHeight, _in int format, _in int texType, _in ev_int32 iNumMipmaps, _in Real gamma )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::loadRawData(name1, group1, *(EarthView::World::Core::DataStreamPtr*)stream, uWidth, uHeight, (EarthView::World::Graphic::PixelFormat)format, (EarthView::World::Graphic::TextureType)texType, iNumMipmaps, gamma);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32(void *pObjectXXXX, _in const char* name, _in const char* group, _inout void* stream, _in ev_uint16 uWidth, _in ev_uint16 uHeight, _in int format, _in int texType, _in ev_int32 iNumMipmaps )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::loadRawData(name1, group1, *(EarthView::World::Core::DataStreamPtr*)stream, uWidth, uHeight, (EarthView::World::Graphic::PixelFormat)format, (EarthView::World::Graphic::TextureType)texType, iNumMipmaps);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->loadRawData(name1, group1, *(EarthView::World::Core::DataStreamPtr*)stream, uWidth, uHeight, (EarthView::World::Graphic::PixelFormat)format, (EarthView::World::Graphic::TextureType)texType, iNumMipmaps);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_ev_int32_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _inout void* stream, _in ev_uint16 uWidth, _in ev_uint16 uHeight, _in int format, _in int texType, _in ev_int32 iNumMipmaps )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::loadRawData(name1, group1, *(EarthView::World::Core::DataStreamPtr*)stream, uWidth, uHeight, (EarthView::World::Graphic::PixelFormat)format, (EarthView::World::Graphic::TextureType)texType, iNumMipmaps);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType(void *pObjectXXXX, _in const char* name, _in const char* group, _inout void* stream, _in ev_uint16 uWidth, _in ev_uint16 uHeight, _in int format, _in int texType )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::loadRawData(name1, group1, *(EarthView::World::Core::DataStreamPtr*)stream, uWidth, uHeight, (EarthView::World::Graphic::PixelFormat)format, (EarthView::World::Graphic::TextureType)texType);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->loadRawData(name1, group1, *(EarthView::World::Core::DataStreamPtr*)stream, uWidth, uHeight, (EarthView::World::Graphic::PixelFormat)format, (EarthView::World::Graphic::TextureType)texType);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_TextureType_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _inout void* stream, _in ev_uint16 uWidth, _in ev_uint16 uHeight, _in int format, _in int texType )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::loadRawData(name1, group1, *(EarthView::World::Core::DataStreamPtr*)stream, uWidth, uHeight, (EarthView::World::Graphic::PixelFormat)format, (EarthView::World::Graphic::TextureType)texType);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat(void *pObjectXXXX, _in const char* name, _in const char* group, _inout void* stream, _in ev_uint16 uWidth, _in ev_uint16 uHeight, _in int format )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::loadRawData(name1, group1, *(EarthView::World::Core::DataStreamPtr*)stream, uWidth, uHeight, (EarthView::World::Graphic::PixelFormat)format);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->loadRawData(name1, group1, *(EarthView::World::Core::DataStreamPtr*)stream, uWidth, uHeight, (EarthView::World::Graphic::PixelFormat)format);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_loadRawData_CTexturePtr_EVString_EVString_DataStreamPtr_ev_uint16_ev_uint16_PixelFormat_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _inout void* stream, _in ev_uint16 uWidth, _in ev_uint16 uHeight, _in int format )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::loadRawData(name1, group1, *(EarthView::World::Core::DataStreamPtr*)stream, uWidth, uHeight, (EarthView::World::Graphic::PixelFormat)format);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 depth, _in ev_int32 num_mips, _in int format, _in ev_int32 usage, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in ev_bool hwGammaCorrection, _in ev_uint32 fsaa, _in const char* fsaaHint )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Core::ev_string fsaaHint1 = fsaaHint;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createManual(name1, group1, (EarthView::World::Graphic::TextureType)texType, width, height, depth, num_mips, (EarthView::World::Graphic::PixelFormat)format, usage, ref_loader, hwGammaCorrection, fsaa, fsaaHint1);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->createManual(name1, group1, (EarthView::World::Graphic::TextureType)texType, width, height, depth, num_mips, (EarthView::World::Graphic::PixelFormat)format, usage, ref_loader, hwGammaCorrection, fsaa, fsaaHint1);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 depth, _in ev_int32 num_mips, _in int format, _in ev_int32 usage, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in ev_bool hwGammaCorrection, _in ev_uint32 fsaa, _in const char* fsaaHint )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Core::ev_string fsaaHint1 = fsaaHint;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createManual(name1, group1, (EarthView::World::Graphic::TextureType)texType, width, height, depth, num_mips, (EarthView::World::Graphic::PixelFormat)format, usage, ref_loader, hwGammaCorrection, fsaa, fsaaHint1);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 depth, _in ev_int32 num_mips, _in int format, _in ev_int32 usage, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in ev_bool hwGammaCorrection, _in ev_uint32 fsaa )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createManual(name1, group1, (EarthView::World::Graphic::TextureType)texType, width, height, depth, num_mips, (EarthView::World::Graphic::PixelFormat)format, usage, ref_loader, hwGammaCorrection, fsaa);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->createManual(name1, group1, (EarthView::World::Graphic::TextureType)texType, width, height, depth, num_mips, (EarthView::World::Graphic::PixelFormat)format, usage, ref_loader, hwGammaCorrection, fsaa);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 depth, _in ev_int32 num_mips, _in int format, _in ev_int32 usage, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in ev_bool hwGammaCorrection, _in ev_uint32 fsaa )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createManual(name1, group1, (EarthView::World::Graphic::TextureType)texType, width, height, depth, num_mips, (EarthView::World::Graphic::PixelFormat)format, usage, ref_loader, hwGammaCorrection, fsaa);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 depth, _in ev_int32 num_mips, _in int format, _in ev_int32 usage, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in ev_bool hwGammaCorrection )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createManual(name1, group1, (EarthView::World::Graphic::TextureType)texType, width, height, depth, num_mips, (EarthView::World::Graphic::PixelFormat)format, usage, ref_loader, hwGammaCorrection);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->createManual(name1, group1, (EarthView::World::Graphic::TextureType)texType, width, height, depth, num_mips, (EarthView::World::Graphic::PixelFormat)format, usage, ref_loader, hwGammaCorrection);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 depth, _in ev_int32 num_mips, _in int format, _in ev_int32 usage, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in ev_bool hwGammaCorrection )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createManual(name1, group1, (EarthView::World::Graphic::TextureType)texType, width, height, depth, num_mips, (EarthView::World::Graphic::PixelFormat)format, usage, ref_loader, hwGammaCorrection);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 depth, _in ev_int32 num_mips, _in int format, _in ev_int32 usage, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createManual(name1, group1, (EarthView::World::Graphic::TextureType)texType, width, height, depth, num_mips, (EarthView::World::Graphic::PixelFormat)format, usage, ref_loader);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->createManual(name1, group1, (EarthView::World::Graphic::TextureType)texType, width, height, depth, num_mips, (EarthView::World::Graphic::PixelFormat)format, usage, ref_loader);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 depth, _in ev_int32 num_mips, _in int format, _in ev_int32 usage, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createManual(name1, group1, (EarthView::World::Graphic::TextureType)texType, width, height, depth, num_mips, (EarthView::World::Graphic::PixelFormat)format, usage, ref_loader);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 depth, _in ev_int32 num_mips, _in int format, _in ev_int32 usage )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createManual(name1, group1, (EarthView::World::Graphic::TextureType)texType, width, height, depth, num_mips, (EarthView::World::Graphic::PixelFormat)format, usage);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->createManual(name1, group1, (EarthView::World::Graphic::TextureType)texType, width, height, depth, num_mips, (EarthView::World::Graphic::PixelFormat)format, usage);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 depth, _in ev_int32 num_mips, _in int format, _in ev_int32 usage )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createManual(name1, group1, (EarthView::World::Graphic::TextureType)texType, width, height, depth, num_mips, (EarthView::World::Graphic::PixelFormat)format, usage);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 depth, _in ev_int32 num_mips, _in int format )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createManual(name1, group1, (EarthView::World::Graphic::TextureType)texType, width, height, depth, num_mips, (EarthView::World::Graphic::PixelFormat)format);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->createManual(name1, group1, (EarthView::World::Graphic::TextureType)texType, width, height, depth, num_mips, (EarthView::World::Graphic::PixelFormat)format);
					EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_uint32_ev_int32_PixelFormat_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 depth, _in ev_int32 num_mips, _in int format )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::createManual(name1, group1, (EarthView::World::Graphic::TextureType)texType, width, height, depth, num_mips, (EarthView::World::Graphic::PixelFormat)format);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32_EVString(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_int32 num_mips, _in int format, _in ev_int32 usage, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in ev_bool hwGammaCorrection, _in ev_uint32 fsaa, _in const char* fsaaHint )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Core::ev_string fsaaHint1 = fsaaHint;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->createManual(name1, group1, (EarthView::World::Graphic::TextureType)texType, width, height, num_mips, (EarthView::World::Graphic::PixelFormat)format, usage, ref_loader, hwGammaCorrection, fsaa, fsaaHint1);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool_ev_uint32(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_int32 num_mips, _in int format, _in ev_int32 usage, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in ev_bool hwGammaCorrection, _in ev_uint32 fsaa )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->createManual(name1, group1, (EarthView::World::Graphic::TextureType)texType, width, height, num_mips, (EarthView::World::Graphic::PixelFormat)format, usage, ref_loader, hwGammaCorrection, fsaa);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader_ev_bool(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_int32 num_mips, _in int format, _in ev_int32 usage, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in ev_bool hwGammaCorrection )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->createManual(name1, group1, (EarthView::World::Graphic::TextureType)texType, width, height, num_mips, (EarthView::World::Graphic::PixelFormat)format, usage, ref_loader, hwGammaCorrection);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32_CManualResourceLoader(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_int32 num_mips, _in int format, _in ev_int32 usage, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->createManual(name1, group1, (EarthView::World::Graphic::TextureType)texType, width, height, num_mips, (EarthView::World::Graphic::PixelFormat)format, usage, ref_loader);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat_ev_int32(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_int32 num_mips, _in int format, _in ev_int32 usage )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->createManual(name1, group1, (EarthView::World::Graphic::TextureType)texType, width, height, num_mips, (EarthView::World::Graphic::PixelFormat)format, usage);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureManager_createManual_CTexturePtr_EVString_EVString_TextureType_ev_uint32_ev_uint32_ev_int32_PixelFormat(void *pObjectXXXX, _in const char* name, _in const char* group, _in int texType, _in ev_uint32 width, _in ev_uint32 height, _in ev_int32 num_mips, _in int format )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->createManual(name1, group1, (EarthView::World::Graphic::TextureType)texType, width, height, num_mips, (EarthView::World::Graphic::PixelFormat)format);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_ev_bool(void *pObjectXXXX, _in ev_uint16 bits, _in ev_bool reloadTextures )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTextureManager::setPreferredIntegerBitDepth(bits, reloadTextures);
				else
					ptrNativeObject->setPreferredIntegerBitDepth(bits, reloadTextures);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_uint16 bits, _in ev_bool reloadTextures )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTextureManager::setPreferredIntegerBitDepth(bits, reloadTextures);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 bits )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTextureManager::setPreferredIntegerBitDepth(bits);
				else
					ptrNativeObject->setPreferredIntegerBitDepth(bits);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureManager_setPreferredIntegerBitDepth_void_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 bits )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTextureManager::setPreferredIntegerBitDepth(bits);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CTextureManager_getPreferredIntegerBitDepth_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::getPreferredIntegerBitDepth();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getPreferredIntegerBitDepth();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getPreferredIntegerBitDepth_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_getPreferredIntegerBitDepth_ev_uint16_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_getPreferredIntegerBitDepth_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CTextureManager_getPreferredIntegerBitDepth_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::getPreferredIntegerBitDepth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_ev_bool(void *pObjectXXXX, _in ev_uint16 bits, _in ev_bool reloadTextures )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTextureManager::setPreferredFloatBitDepth(bits, reloadTextures);
				else
					ptrNativeObject->setPreferredFloatBitDepth(bits, reloadTextures);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_uint16 bits, _in ev_bool reloadTextures )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTextureManager::setPreferredFloatBitDepth(bits, reloadTextures);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 bits )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTextureManager::setPreferredFloatBitDepth(bits);
				else
					ptrNativeObject->setPreferredFloatBitDepth(bits);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureManager_setPreferredFloatBitDepth_void_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 bits )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTextureManager::setPreferredFloatBitDepth(bits);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CTextureManager_getPreferredFloatBitDepth_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::getPreferredFloatBitDepth();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getPreferredFloatBitDepth();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getPreferredFloatBitDepth_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_getPreferredFloatBitDepth_ev_uint16_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_getPreferredFloatBitDepth_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CTextureManager_getPreferredFloatBitDepth_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::getPreferredFloatBitDepth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_ev_bool(void *pObjectXXXX, _in ev_uint16 integerBits, _in ev_uint16 floatBits, _in ev_bool reloadTextures )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTextureManager::setPreferredBitDepths(integerBits, floatBits, reloadTextures);
				else
					ptrNativeObject->setPreferredBitDepths(integerBits, floatBits, reloadTextures);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_uint16 integerBits, _in ev_uint16 floatBits, _in ev_bool reloadTextures )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTextureManager::setPreferredBitDepths(integerBits, floatBits, reloadTextures);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16(void *pObjectXXXX, _in ev_uint16 integerBits, _in ev_uint16 floatBits )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTextureManager::setPreferredBitDepths(integerBits, floatBits);
				else
					ptrNativeObject->setPreferredBitDepths(integerBits, floatBits);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureManager_setPreferredBitDepths_void_ev_uint16_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 integerBits, _in ev_uint16 floatBits )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTextureManager::setPreferredBitDepths(integerBits, floatBits);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureManager_isFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32(void *pObjectXXXX, _in int ttype, _in int format, _in ev_int32 usage )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::isFormatSupported((EarthView::World::Graphic::TextureType)ttype, (EarthView::World::Graphic::PixelFormat)format, usage);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isFormatSupported((EarthView::World::Graphic::TextureType)ttype, (EarthView::World::Graphic::PixelFormat)format, usage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_isFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_isFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_isFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureManager_isFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_NoVirtual(void *pObjectXXXX, _in int ttype, _in int format, _in ev_int32 usage )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::isFormatSupported((EarthView::World::Graphic::TextureType)ttype, (EarthView::World::Graphic::PixelFormat)format, usage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureManager_isEquivalentFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32(void *pObjectXXXX, _in int ttype, _in int format, _in ev_int32 usage )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::isEquivalentFormatSupported((EarthView::World::Graphic::TextureType)ttype, (EarthView::World::Graphic::PixelFormat)format, usage);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isEquivalentFormatSupported((EarthView::World::Graphic::TextureType)ttype, (EarthView::World::Graphic::PixelFormat)format, usage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_isEquivalentFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_isEquivalentFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_isEquivalentFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureManager_isEquivalentFormatSupported_ev_bool_TextureType_PixelFormat_ev_int32_NoVirtual(void *pObjectXXXX, _in int ttype, _in int format, _in ev_int32 usage )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::isEquivalentFormatSupported((EarthView::World::Graphic::TextureType)ttype, (EarthView::World::Graphic::PixelFormat)format, usage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CTextureManager_getNativeFormat_PixelFormat_TextureType_PixelFormat_ev_int32(void *pObjectXXXX, _in int ttype, _in int format, _in ev_int32 usage )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::PixelFormat objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::getNativeFormat((EarthView::World::Graphic::TextureType)ttype, (EarthView::World::Graphic::PixelFormat)format, usage);
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Graphic::PixelFormat objXXXX = ptrNativeObject->getNativeFormat((EarthView::World::Graphic::TextureType)ttype, (EarthView::World::Graphic::PixelFormat)format, usage);
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getNativeFormat_PixelFormat_TextureType_PixelFormat_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_getNativeFormat_PixelFormat_TextureType_PixelFormat_ev_int32_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_getNativeFormat_PixelFormat_TextureType_PixelFormat_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CTextureManager_getNativeFormat_PixelFormat_TextureType_PixelFormat_ev_int32_NoVirtual(void *pObjectXXXX, _in int ttype, _in int format, _in ev_int32 usage )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				EarthView::World::Graphic::PixelFormat objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::getNativeFormat((EarthView::World::Graphic::TextureType)ttype, (EarthView::World::Graphic::PixelFormat)format, usage);
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool(void *pObjectXXXX, _in int ttype, _in int format, _in ev_int32 usage, _in ev_bool preciseFormatOnly )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::isHardwareFilteringSupported((EarthView::World::Graphic::TextureType)ttype, (EarthView::World::Graphic::PixelFormat)format, usage, preciseFormatOnly);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isHardwareFilteringSupported((EarthView::World::Graphic::TextureType)ttype, (EarthView::World::Graphic::PixelFormat)format, usage, preciseFormatOnly);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_ev_bool_NoVirtual(void *pObjectXXXX, _in int ttype, _in int format, _in ev_int32 usage, _in ev_bool preciseFormatOnly )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::isHardwareFilteringSupported((EarthView::World::Graphic::TextureType)ttype, (EarthView::World::Graphic::PixelFormat)format, usage, preciseFormatOnly);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32(void *pObjectXXXX, _in int ttype, _in int format, _in ev_int32 usage )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::isHardwareFilteringSupported((EarthView::World::Graphic::TextureType)ttype, (EarthView::World::Graphic::PixelFormat)format, usage);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isHardwareFilteringSupported((EarthView::World::Graphic::TextureType)ttype, (EarthView::World::Graphic::PixelFormat)format, usage);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureManager_isHardwareFilteringSupported_ev_bool_TextureType_PixelFormat_ev_int32_NoVirtual(void *pObjectXXXX, _in int ttype, _in int format, _in ev_int32 usage )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::isHardwareFilteringSupported((EarthView::World::Graphic::TextureType)ttype, (EarthView::World::Graphic::PixelFormat)format, usage);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureManager_setDefaultNumMipmaps_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  num )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTextureManager::setDefaultNumMipmaps(num);
				else
					ptrNativeObject->setDefaultNumMipmaps(num);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setDefaultNumMipmaps_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_setDefaultNumMipmaps_void_ev_size_t_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_setDefaultNumMipmaps_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureManager_setDefaultNumMipmaps_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_uint64  num )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTextureManager::setDefaultNumMipmaps(num);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTextureManager_getDefaultNumMipmaps_ev_size_t(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				if (dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::getDefaultNumMipmaps();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->getDefaultNumMipmaps();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getDefaultNumMipmaps_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_getDefaultNumMipmaps_ev_size_t_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_getDefaultNumMipmaps_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTextureManager_getDefaultNumMipmaps_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureManager* ptrNativeObject = (EarthView::World::Graphic::CTextureManager*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureManager::getDefaultNumMipmaps();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_create_ResourcePtr_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setMemoryBudget_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_setMemoryBudget_void_ev_size_t_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_setMemoryBudget_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getMemoryBudget_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_getMemoryBudget_ev_size_t_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_getMemoryBudget_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getMemoryUsage_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_getMemoryUsage_ev_size_t_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_getMemoryUsage_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_unload_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_unload_void_EVString_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_unload_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_unload_void_ev_uint64( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_unload_void_ev_uint64_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_unload_void_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_unloadAll_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_unloadAll_void_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_unloadAll_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_unloadAll_void( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_unloadAll_void_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_unloadAll_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_reloadAll_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_reloadAll_void_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_reloadAll_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_reloadAll_void( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_reloadAll_void_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_reloadAll_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResources_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_reloadUnreferencedResources_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_remove_void_ResourcePtr( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_remove_void_ResourcePtr_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_remove_void_ResourcePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_remove_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_remove_void_EVString_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_remove_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_remove_void_ev_uint64( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_remove_void_ev_uint64_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_remove_void_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_remove_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_remove_void_EVString_EVString_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_remove_void_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_removeAll_void( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_removeAll_void_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_removeAll_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_removeUnreferencedResources_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString_EVString_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_removeUnreferencedResource_void_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString_EVString_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_getByName_ResourcePtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getByHandle_ResourcePtr_ev_uint64( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_getByHandle_ResourcePtr_ev_uint64_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_getByHandle_ResourcePtr_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_EVString_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_ev_uint64( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_ev_uint64_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_resourceExists_ev_bool_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager__notifyResourceTouched_void_CResource( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager__notifyResourceTouched_void_CResource_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager__notifyResourceTouched_void_CResource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager__notifyResourceLoaded_void_CResource( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager__notifyResourceLoaded_void_CResource_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager__notifyResourceLoaded_void_CResource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager__notifyResourceUnloaded_void_CResource( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager__notifyResourceUnloaded_void_CResource_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager__notifyResourceUnloaded_void_CResource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_prepare_ResourcePtr_EVString_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_load_ResourcePtr_EVString_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_setVerbose_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_setVerbose_void_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_setVerbose_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getVerbose_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_getVerbose_ev_bool_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_getVerbose_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_addImpl_void_ResourcePtr( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_addImpl_void_ResourcePtr_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_addImpl_void_ResourcePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_removeImpl_void_ResourcePtr( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_removeImpl_void_ResourcePtr_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_removeImpl_void_ResourcePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_checkUsage_void( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_checkUsage_void_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_checkUsage_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getScriptPatterns_StringVector( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_getScriptPatterns_StringVector_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_getScriptPatterns_StringVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_parseScript_void_DataStreamPtr_EVString( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_parseScript_void_DataStreamPtr_EVString_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_parseScript_void_DataStreamPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureManager_getLoadingOrder_Real( void *pObjectXXXX, EarthView_World_Graphic_CTextureManager_getLoadingOrder_Real_Callback* pCallback )
			{
				CTextureManagerProxy* ptr = dynamic_cast<CTextureManagerProxy*>((EarthView::World::Graphic::CTextureManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureManager_getLoadingOrder_Real(pCallback);
				}
			}
		}
	}
}
