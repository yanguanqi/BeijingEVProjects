#ifndef _TextureManager_H__
#define _TextureManager_H__
#include "graphic/graphic_config.h"
#include "resourcemanager.h"
#include "texture.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// <summary>
            /// 纹理管理类,
            /// 管理纹理
            /// </summary>
            class EV_GRAPHIC_DLL CTextureManager : public EarthView::World::Graphic::CResourceManager
            {
                static EarthView::World::Graphic::CTextureManager *ms_Singleton;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CTextureManager(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                CTextureManager();
                /// <summary>
                /// 析构函数
                /// </summary>
                virtual ~CTextureManager();
                /// <summary>
                /// 获得单例
                /// </summary>
                /// <returns></returns>
                static EarthView::World::Graphic::CTextureManager &getSingleton();
                /// <summary>
                /// 获得单例
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                static EarthView::World::Graphic::CTextureManager *getSingletonPtr();
                
                /// <summary>
                /// 创建一个新的纹理，或者得到一件存在的同名的纹理
                /// </summary>
                /// <param name="name">纹理名称</param>
                /// <param name="group"></param>
                /// <param name="isManual"></param>
                /// <param name="loader"></param>
                /// <param name="createParams"></param>
                /// <param name="texType">加载或创建的纹理的类型，默认是2D的</param>
                /// <param name="numMipmaps">多级渐进纹理的数量</param>
                /// <param name="gamma"> </param>
                /// <param name="isAlpha"></param>
                /// <param name="desiredFormat"></param>
                /// <param name="hwGammaCorrection"></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(
                    const EVString &name, const EVString &group, ev_bool isManual,
                    EarthView::World::Graphic::CManualResourceLoader *ref_loader, const EarthView::World::Core::NameValuePairList *createParams,
                    EarthView::World::Graphic::TextureType texType, ev_int32 numMipmaps,
                    Real gamma, ev_bool isAlpha,
                    EarthView::World::Graphic::PixelFormat desiredFormat, ev_bool hwGammaCorrection);
                virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(
                    const EVString &name, const EVString &group, ev_bool isManual,
                    EarthView::World::Graphic::CManualResourceLoader *ref_loader, const EarthView::World::Core::NameValuePairList *createParams,
                    EarthView::World::Graphic::TextureType texType, ev_int32 numMipmaps,
                    Real gamma, ev_bool isAlpha,
                    EarthView::World::Graphic::PixelFormat desiredFormat);
                virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(
                    const EVString &name, const EVString &group, ev_bool isManual,
                    EarthView::World::Graphic::CManualResourceLoader *loader, const EarthView::World::Core::NameValuePairList *createParams,
                    EarthView::World::Graphic::TextureType texType, ev_int32 numMipmaps,
                    Real gamma, ev_bool isAlpha);
                virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(
                    const EVString &name, const EVString &group, ev_bool isManual,
                    EarthView::World::Graphic::CManualResourceLoader *ref_loader, const EarthView::World::Core::NameValuePairList *createParams,
                    EarthView::World::Graphic::TextureType texType, ev_int32 numMipmaps,
                    Real gamma);
                virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(
                    const EVString &name, const EVString &group, ev_bool isManual,
                    EarthView::World::Graphic::CManualResourceLoader *ref_loader, const EarthView::World::Core::NameValuePairList *createParams,
                    EarthView::World::Graphic::TextureType texType, ev_int32 numMipmaps);
                virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(
                    const EVString &name, const EVString &group, ev_bool isManual,
                    EarthView::World::Graphic::CManualResourceLoader *ref_loader, const EarthView::World::Core::NameValuePairList *createParams,
                    EarthView::World::Graphic::TextureType texType);
                virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(
                    const EVString &name, const EVString &group, ev_bool isManual,
                    EarthView::World::Graphic::CManualResourceLoader *ref_loader, const EarthView::World::Core::NameValuePairList *createParams);
                virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(
                    const EVString &name, const EVString &group, ev_bool isManual,
                    EarthView::World::Graphic::CManualResourceLoader *loader);
                virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(
                    const EVString &name, const EVString &group, ev_bool isManual);
                virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(
                    const EVString &name, const EVString &group);


				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult replaceResource(
					const EVString &name, const EVString &group);

				/// <summary>
				/// 创建一个新的纹理
				/// </summary>
				/// <param name="name">纹理名称</param>				
				/// <param name="isManual"></param>
				/// <param name="loader"></param>
				/// <param name="createParams"></param>
				/// <param name="texType">加载或创建的纹理的类型，默认是2D的</param>
				/// <param name="numMipmaps">多级渐进纹理的数量</param>
				/// <param name="gamma"> </param>
				/// <param name="isAlpha"></param>
				/// <param name="desiredFormat"></param>
				/// <param name="hwGammaCorrection"></param>
				/// <returns></returns>
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(
					const EVString &name, ev_bool isManual,
					EarthView::World::Graphic::CManualResourceLoader *ref_loader, const EarthView::World::Core::NameValuePairList *createParams,
					EarthView::World::Graphic::TextureType texType, ev_int32 numMipmaps,
					Real gamma, ev_bool isAlpha,
					EarthView::World::Graphic::PixelFormat desiredFormat, ev_bool hwGammaCorrection);
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(
					const EVString &name, ev_bool isManual,
					EarthView::World::Graphic::CManualResourceLoader *ref_loader, const EarthView::World::Core::NameValuePairList *createParams,
					EarthView::World::Graphic::TextureType texType, ev_int32 numMipmaps,
					Real gamma, ev_bool isAlpha,
					EarthView::World::Graphic::PixelFormat desiredFormat);
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(
					const EVString &name, ev_bool isManual,
					EarthView::World::Graphic::CManualResourceLoader *loader, const EarthView::World::Core::NameValuePairList *createParams,
					EarthView::World::Graphic::TextureType texType, ev_int32 numMipmaps,
					Real gamma, ev_bool isAlpha);
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(
					const EVString &name, ev_bool isManual,
					EarthView::World::Graphic::CManualResourceLoader *ref_loader, const EarthView::World::Core::NameValuePairList *createParams,
					EarthView::World::Graphic::TextureType texType, ev_int32 numMipmaps,
					Real gamma);
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(
					const EVString &name, ev_bool isManual,
					EarthView::World::Graphic::CManualResourceLoader *ref_loader, const EarthView::World::Core::NameValuePairList *createParams,
					EarthView::World::Graphic::TextureType texType, ev_int32 numMipmaps);
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(
					const EVString &name, ev_bool isManual,
					EarthView::World::Graphic::CManualResourceLoader *ref_loader, const EarthView::World::Core::NameValuePairList *createParams,
					EarthView::World::Graphic::TextureType texType);
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(
					const EVString &name, ev_bool isManual,
					EarthView::World::Graphic::CManualResourceLoader *ref_loader, const EarthView::World::Core::NameValuePairList *createParams);
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(
					const EVString &name, ev_bool isManual,
					EarthView::World::Graphic::CManualResourceLoader *loader);
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(
					const EVString &name,  ev_bool isManual);
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(
					const EVString &name);
                
                /// <summary>
                /// 从一个资源定位文件中准备一个纹理
                /// </summary>
                /// <param name="name">加载的文件名称</param>
                /// <param name="group">划分纹理的资源名称</param>
                /// <param name="texType">加载或创建的纹理的类型，默认是2D的</param>
                /// <param name="numMipmaps">多级渐进纹理的数量</param>
                /// <param name="gamma"></param>
                /// <param name="isAlpha">仅适用于灰白影像</param>
                /// <param name="desiredFormat"></param>
                /// <param name="hwGammaCorrection"></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CTexturePtr prepare(
                    const EVString &name, const EVString &group,
                    EarthView::World::Graphic::TextureType texType , ev_int32 numMipmaps,
                    Real gamma , ev_bool isAlpha,
                    EarthView::World::Graphic::PixelFormat desiredFormat, ev_bool hwGammaCorrection);
                virtual EarthView::World::Graphic::CTexturePtr prepare(
                    const EVString &name, const EVString &group,
                    EarthView::World::Graphic::TextureType texType , ev_int32 numMipmaps,
                    Real gamma , ev_bool isAlpha,
                    EarthView::World::Graphic::PixelFormat desiredFormat);
                virtual EarthView::World::Graphic::CTexturePtr prepare(
                    const EVString &name, const EVString &group,
                    EarthView::World::Graphic::TextureType texType , ev_int32 numMipmaps,
                    Real gamma , ev_bool isAlpha);
                virtual EarthView::World::Graphic::CTexturePtr prepare(
                    const EVString &name, const EVString &group,
                    EarthView::World::Graphic::TextureType texType , ev_int32 numMipmaps,
                    Real gamma);
                virtual EarthView::World::Graphic::CTexturePtr prepare(
                    const EVString &name, const EVString &group,
                    EarthView::World::Graphic::TextureType texType , ev_int32 numMipmaps);
                virtual EarthView::World::Graphic::CTexturePtr prepare(
                    const EVString &name, const EVString &group,
                    EarthView::World::Graphic::TextureType texType);
                virtual EarthView::World::Graphic::CTexturePtr prepare(
                    const EVString &name, const EVString &group);
                
                /// <summary>
                /// 从资源定位文件中加载一个纹理
                /// </summary>
                /// <param name="name">加载的文件名称</param>
                /// <param name="group">划分纹理的资源名称</param>
                /// <param name="texType">加载或创建的纹理的类型，默认是2D的</param>
                /// <param name="numMipmaps">多级渐进纹理的数量</param>
                /// <param name="gamma"></param>
                /// <param name="isAlpha">仅适用于灰白影像</param>
                /// <param name="desiredFormat"></param>
                /// <param name="hwGammaCorrection"></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::ResourcePtr load(
                    const EVString &name, const EVString &group,
                    EarthView::World::Graphic::TextureType texType, ev_int32 numMipmaps ,
                    Real gamma, ev_bool isAlpha ,
                    EarthView::World::Graphic::PixelFormat desiredFormat,
                    ev_bool hwGammaCorrection );
                virtual EarthView::World::Graphic::ResourcePtr load(
                    const EVString &name, const EVString &group,
                    EarthView::World::Graphic::TextureType texType, ev_int32 numMipmaps ,
                    Real gamma, ev_bool isAlpha ,
                    EarthView::World::Graphic::PixelFormat desiredFormat);
                virtual EarthView::World::Graphic::ResourcePtr load(
                    const EVString &name, const EVString &group,
                    EarthView::World::Graphic::TextureType texType, ev_int32 numMipmaps ,
                    Real gamma, ev_bool isAlpha);
                virtual EarthView::World::Graphic::ResourcePtr load(
                    const EVString &name, const EVString &group,
                    EarthView::World::Graphic::TextureType texType, ev_int32 numMipmaps ,
                    Real gamma);
                virtual EarthView::World::Graphic::ResourcePtr load(
                    const EVString &name, const EVString &group,
                    EarthView::World::Graphic::TextureType texType, ev_int32 numMipmaps);
                virtual EarthView::World::Graphic::ResourcePtr load(
                    const EVString &name, const EVString &group,
                    EarthView::World::Graphic::TextureType texType);
                virtual EarthView::World::Graphic::ResourcePtr load(
                    const EVString &name, const EVString &group);
                
                /// <summary>
                /// 从Image对象中加载纹理
                /// </summary>
                /// <param name="name">生成的纹理名称</param>
                /// <param name="group">划分纹理的资源名称</param>
                /// <param name="img">包含所加载数据的EarthView::World::Graphic::CImage类对象</param>
                /// <param name="texType">加载或创建的纹理的类型，默认是2D的</param>
                /// <param name="iNumMipmaps">多级渐进纹理的数量</param>
                /// <param name="gamma"></param>
                /// <param name="isAlpha">仅适用于灰白影像</param>
                /// <param name="desiredFormat"></param>
                /// <param name="hwGammaCorrection"></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CTexturePtr loadImage(const EVString &name, const EVString &group, const EarthView::World::Graphic::CImage &img,
                                              EarthView::World::Graphic::TextureType texType ,
                                              ev_int32 iNumMipmaps , Real gamma , ev_bool isAlpha,
                                              EarthView::World::Graphic::PixelFormat desiredFormat , ev_bool hwGammaCorrection );
                virtual EarthView::World::Graphic::CTexturePtr loadImage(const EVString &name, const EVString &group, const EarthView::World::Graphic::CImage &img,
                                              EarthView::World::Graphic::TextureType texType ,
                                              ev_int32 iNumMipmaps, Real gamma, ev_bool isAlpha ,
                                              EarthView::World::Graphic::PixelFormat desiredFormat);
                virtual EarthView::World::Graphic::CTexturePtr loadImage(const EVString &name, const EVString &group, const EarthView::World::Graphic::CImage &img,
                                              EarthView::World::Graphic::TextureType texType ,
                                              ev_int32 iNumMipmaps, Real gamma, ev_bool isAlphat);
                virtual EarthView::World::Graphic::CTexturePtr loadImage(const EVString &name, const EVString &group, const EarthView::World::Graphic::CImage &img,
                                              EarthView::World::Graphic::TextureType texType ,
                                              ev_int32 iNumMipmaps, Real gamma);
                virtual EarthView::World::Graphic::CTexturePtr loadImage(const EVString &name, const EVString &group, const EarthView::World::Graphic::CImage &img,
                                              EarthView::World::Graphic::TextureType texType ,
                                              ev_int32 iNumMipmaps);
                virtual EarthView::World::Graphic::CTexturePtr loadImage(const EVString &name, const EVString &group, const EarthView::World::Graphic::CImage &img,
                                              EarthView::World::Graphic::TextureType texType);
                virtual EarthView::World::Graphic::CTexturePtr loadImage(const EVString &name, const EVString &group, const EarthView::World::Graphic::CImage &img);

                
                /// <summary>
                /// 从原始数据流加载纹理
                /// </summary>
                /// <param name="name">生成的纹理名称</param>
                /// <param name="group">划分纹理的资源名称</param>
                /// <param name="stream">引入的数据流</param>
                /// <param name="uWidth">该纹理的宽</param>
                /// <param name="uHeight">该纹理的高</param>
                /// <param name="format">导入的数据的格式</param>
                /// <param name="texType">加载或创建的纹理的类型，默认是2D的</param>
                /// <param name="iNumMipmaps">多级渐进纹理的数量</param>
                /// <param name="gamma"></param>
                /// <param name="hwGammaCorrection"></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CTexturePtr loadRawData(const EVString &name, const EVString &group,
                                                EarthView::World::Core::DataStreamPtr &stream, ev_uint16 uWidth, ev_uint16 uHeight,
                                                EarthView::World::Graphic::PixelFormat format, EarthView::World::Graphic::TextureType texType ,
                                                ev_int32 iNumMipmaps , Real gamma , ev_bool hwGammaCorrection );
                virtual EarthView::World::Graphic::CTexturePtr loadRawData(const EVString &name, const EVString &group,
                                                EarthView::World::Core::DataStreamPtr &stream, ev_uint16 uWidth, ev_uint16 uHeight,
                                                EarthView::World::Graphic::PixelFormat format, EarthView::World::Graphic::TextureType texType,
                                                ev_int32 iNumMipmaps , Real gamma);
                virtual EarthView::World::Graphic::CTexturePtr loadRawData(const EVString &name, const EVString &group,
                                                EarthView::World::Core::DataStreamPtr &stream, ev_uint16 uWidth, ev_uint16 uHeight,
                                                EarthView::World::Graphic::PixelFormat format, EarthView::World::Graphic::TextureType texType ,
                                                ev_int32 iNumMipmaps);
                virtual EarthView::World::Graphic::CTexturePtr loadRawData(const EVString &name, const EVString &group,
                                                EarthView::World::Core::DataStreamPtr &stream, ev_uint16 uWidth, ev_uint16 uHeight,
                                                EarthView::World::Graphic::PixelFormat format, EarthView::World::Graphic::TextureType texType);
                virtual EarthView::World::Graphic::CTexturePtr loadRawData(const EVString &name, const EVString &group,
                                                EarthView::World::Core::DataStreamPtr &stream, ev_uint16 uWidth, ev_uint16 uHeight,
                                                EarthView::World::Graphic::PixelFormat format);
                
                /// <summary>
                /// 用特定的宽，高，深度来创建一个纹理
                /// </summary>
                /// <param name="name">生成的纹理名称</param>
                /// <param name="group">划分纹理的资源名称</param>
                /// <param name="texType">加载或创建的纹理的类型，默认是2D的</param>
                /// <param name="width">纹理的宽</param>
                /// <param name="height">该纹理的高</param>
                /// <param name="depth">该纹理的深度</param>
                /// <param name="num_mips">多级渐进纹理的数量</param>
                /// <param name="format">像素格式</param>
                /// <param name="usage">用途</param>
                /// <param name="ref_loader">手动加载器</param>
                /// <param name="hwGammaCorrection"></param>
                /// <param name="fsaa">多重采样级别</param>
                /// <param name="fsaaHint"></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CTexturePtr createManual(const EVString &name, const EVString &group,
                                                 EarthView::World::Graphic::TextureType texType, ev_uint32 width, ev_uint32 height, ev_uint32 depth,
                                                 ev_int32 num_mips, EarthView::World::Graphic::PixelFormat format, ev_int32 usage , EarthView::World::Graphic::CManualResourceLoader *ref_loader ,
                                                 ev_bool hwGammaCorrection, ev_uint32 fsaa, const EVString &fsaaHint );
                virtual EarthView::World::Graphic::CTexturePtr createManual(const EVString &name, const EVString &group,
                                                 EarthView::World::Graphic::TextureType texType, ev_uint32 width, ev_uint32 height, ev_uint32 depth,
                                                 ev_int32 num_mips, EarthView::World::Graphic::PixelFormat format, ev_int32 usage , EarthView::World::Graphic::CManualResourceLoader *ref_loader,
                                                 ev_bool hwGammaCorrection , ev_uint32 fsaa);
                virtual EarthView::World::Graphic::CTexturePtr createManual(const EVString &name, const EVString &group,
                                                 EarthView::World::Graphic::TextureType texType, ev_uint32 width, ev_uint32 height, ev_uint32 depth,
                                                 ev_int32 num_mips, EarthView::World::Graphic::PixelFormat format, ev_int32 usage , EarthView::World::Graphic::CManualResourceLoader *ref_loader,
                                                 ev_bool hwGammaCorrection );
                virtual EarthView::World::Graphic::CTexturePtr createManual(const EVString &name, const EVString &group,
                                                 EarthView::World::Graphic::TextureType texType, ev_uint32 width, ev_uint32 height, ev_uint32 depth,
                                                 ev_int32 num_mips, EarthView::World::Graphic::PixelFormat format, ev_int32 usage, EarthView::World::Graphic::CManualResourceLoader *ref_loader);
                virtual EarthView::World::Graphic::CTexturePtr createManual(const EVString &name, const EVString &group,
                                                 EarthView::World::Graphic::TextureType texType, ev_uint32 width, ev_uint32 height, ev_uint32 depth,
                                                 ev_int32 num_mips, EarthView::World::Graphic::PixelFormat format, ev_int32 usage);
                virtual EarthView::World::Graphic::CTexturePtr createManual(const EVString &name, const EVString &group,
                                                 EarthView::World::Graphic::TextureType texType, ev_uint32 width, ev_uint32 height, ev_uint32 depth,
                                                 ev_int32 num_mips, EarthView::World::Graphic::PixelFormat format);

                
                /// <summary>
                /// 手动创建一个深度为1的纹理
                /// </summary>
                /// <param name="name">生成的纹理名称</param>
                /// <param name="group">划分纹理的资源名称</param>
                /// <param name="texType">加载或创建的纹理的类型，默认是2D的</param>
                /// <param name="width">纹理的宽</param>
                /// <param name="height">该纹理的高</param>
                /// <param name="num_mips">多级渐进纹理的数量</param>
                /// <param name="format">像素格式</param>
                /// <param name="usage">用途</param>
                /// <param name="ref_loader">手动加载器</param>
                /// <param name="hwGammaCorrection"></param>
                /// <param name="fsaa">多重采样级别</param>
                /// <param name="fsaaHint"></param>
                /// <returns></returns>
                EarthView::World::Graphic::CTexturePtr createManual(const EVString &name, const EVString &group,
                                         EarthView::World::Graphic::TextureType texType, ev_uint32 width, ev_uint32 height, ev_int32 num_mips,
                                         EarthView::World::Graphic::PixelFormat format, ev_int32 usage , EarthView::World::Graphic::CManualResourceLoader *ref_loader ,
                                         ev_bool hwGammaCorrection , ev_uint32 fsaa, const EVString &fsaaHint );
                EarthView::World::Graphic::CTexturePtr createManual(const EVString &name, const EVString &group,
                                         EarthView::World::Graphic::TextureType texType, ev_uint32 width, ev_uint32 height, ev_int32 num_mips,
                                         EarthView::World::Graphic::PixelFormat format, ev_int32 usage , EarthView::World::Graphic::CManualResourceLoader *ref_loader ,
                                         ev_bool hwGammaCorrection , ev_uint32 fsaa );
                EarthView::World::Graphic::CTexturePtr createManual(const EVString &name, const EVString &group,
                                         EarthView::World::Graphic::TextureType texType, ev_uint32 width, ev_uint32 height, ev_int32 num_mips,
                                         EarthView::World::Graphic::PixelFormat format, ev_int32 usage, EarthView::World::Graphic::CManualResourceLoader *ref_loader,
                                         ev_bool hwGammaCorrection );
                EarthView::World::Graphic::CTexturePtr createManual(const EVString &name, const EVString &group,
                                         EarthView::World::Graphic::TextureType texType, ev_uint32 width, ev_uint32 height, ev_int32 num_mips,
                                         EarthView::World::Graphic::PixelFormat format, ev_int32 usage , EarthView::World::Graphic::CManualResourceLoader *ref_loader);
                EarthView::World::Graphic::CTexturePtr createManual(const EVString &name, const EVString &group,
                                         EarthView::World::Graphic::TextureType texType, ev_uint32 width, ev_uint32 height, ev_int32 num_mips,
                                         EarthView::World::Graphic::PixelFormat format, ev_int32 usage );
                EarthView::World::Graphic::CTexturePtr createManual(const EVString &name, const EVString &group,
                                         EarthView::World::Graphic::TextureType texType, ev_uint32 width, ev_uint32 height, ev_int32 num_mips,
                                         EarthView::World::Graphic::PixelFormat format);
                
                
                /// <summary>
                /// 为纹理设置一个首选的位的范围
                /// </summary>
                /// <param name="bits">位数</param>
                /// <param name="reloadTextures">假如为true（默认为true），将要加载所有的可加载的纹理</param>
                /// <returns></returns>
                virtual void setPreferredIntegerBitDepth(ev_uint16 bits, ev_bool reloadTextures);
                virtual void setPreferredIntegerBitDepth(ev_uint16 bits);
                /** gets preferred bit depth for integer pixel format textures.
                */
                /// <summary>
                /// 得到整型像素格式的纹理首选的位深度
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_uint16 getPreferredIntegerBitDepth() const;
                
                
                /// <summary>
                /// 得到浮点型像素格式的纹理首选的位深度
                /// </summary>
                /// <param name="bits">位，可选的值是0, 16 and 32，默认为0（意味着保持原始的格式）</param>
                /// <param name="reloadTextures">假如为true（默认为true），将要加载所有的可加载的纹理</param>
                /// <returns></returns>
                virtual void setPreferredFloatBitDepth(ev_uint16 bits, ev_bool reloadTextures);
                virtual void setPreferredFloatBitDepth(ev_uint16 bits);
                
                /// <summary>
                /// 得到浮点型像素格式纹理的首选的位深度
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_uint16 getPreferredFloatBitDepth() const;
                
                /// <summary>
                /// 为整型和浮点型像素格式的纹理设置首选的位深度
                /// </summary>
                /// <param name="integerBits">位，可选的值是0, 16 and 32，默认为0（意味着保持原始的格式）</param>
                /// <param name="floatBits">位，可选的值是0, 16 and 32，默认为0（意味着保持原始的格式）</param>
                /// <param name="reloadTextures">假如为true（默认为true），将要加载所有的可加载的纹理</param>
                /// <returns></returns>
                virtual void setPreferredBitDepths(ev_uint16 integerBits, ev_uint16 floatBits, ev_bool reloadTextures);
                virtual void setPreferredBitDepths(ev_uint16 integerBits, ev_uint16 floatBits);
                
                /// <summary>
                /// 判断该系统能否支持给定的选项的纹理格式
                /// </summary>
                /// <param name="ttype"></param>
                /// <param name="format">要求的像素格式</param>
                /// <param name="usage">纹理所需要使用的类型</param>
                /// <returns>假如支持该格式则返回true</returns>
                virtual ev_bool isFormatSupported(EarthView::World::Graphic::TextureType ttype, EarthView::World::Graphic::PixelFormat format, ev_int32 usage);
                
                /// <summary>
                /// 利用给定的选项，判断该系统能否支持纹理格式，或者另一个没有质量损失的格式
                /// </summary>
                /// <param name="ttype"></param>
                /// <param name="format">要求的像素格式</param>
                /// <param name="usage">纹理所需要使用的类型</param>
                /// <returns>假如支持该格式则返回true</returns>
                virtual ev_bool isEquivalentFormatSupported(EarthView::World::Graphic::TextureType ttype, EarthView::World::Graphic::PixelFormat format, ev_int32 usage);
                /** Gets the format which will be natively used for a requested format given the
                	constraints of the current device.
                */
                /// <summary>
                ///
                /// </summary>
                /// <param name="ttype"></param>
                /// <param name="format">要求的像素格式</param>
                /// <param name="usage">纹理所需要使用的类型</param>
                /// <returns>返回像素格式</returns>
                virtual EarthView::World::Graphic::PixelFormat getNativeFormat(EarthView::World::Graphic::TextureType ttype, EarthView::World::Graphic::PixelFormat format, ev_int32 usage);
                
                /// <summary>
                /// 判断硬件是否支持给定纹理类型的过滤
                /// </summary>
                /// <param name="ttype">被要求的纹理类型</param>
                /// <param name="format">被要求的像素格式</param>
                /// <param name="usage">纹理所需要使用的类型</param>
                /// <param name="preciseFormatOnly"></param>
                /// <returns>假如该纹理过滤器被支持则返回true，否则返回false</returns>
                virtual ev_bool isHardwareFilteringSupported(EarthView::World::Graphic::TextureType ttype, EarthView::World::Graphic::PixelFormat format, ev_int32 usage,
                        ev_bool preciseFormatOnly);
                virtual ev_bool isHardwareFilteringSupported(EarthView::World::Graphic::TextureType ttype, EarthView::World::Graphic::PixelFormat format, ev_int32 usage);
               
                /// <summary>
                /// 设置默认的多级渐进纹理级数,不设置则默认是0
                /// </summary>
                /// <param name="num"></param>
                /// <returns></returns>
                virtual void setDefaultNumMipmaps(ev_size_t num);
                
                /// <summary>
                /// 得到默认的多级渐进纹理的级数
                /// </summary>
                /// <param name="num"></param>
                /// <returns></returns>
                virtual ev_size_t getDefaultNumMipmaps();
            protected:
                ev_uint16 mPreferredIntegerBitDepth;
                ev_uint16 mPreferredFloatBitDepth;
                ev_size_t mDefaultNumMipmaps;
            };
            /** @} */
            /** @} */
        }
    }
}
/// Namespace
#endif

