#ifndef _Texture_H__
#define _Texture_H__
#include "graphic/graphic_config.h"
#include "hardwarebuffer.h"
#include "resource.h"
#include "pixelformat.h"


namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			class DataStreamPtr;
		}
	}
}

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class ConstImagePtrList;
            class CImage;
            class CHardwarePixelBufferSharedPtr;
            ///纹理用法
            enum TextureUsage
            {
                //// @copydoc CHardwareBuffer::Usage
                TU_STATIC = 1,
                TU_DYNAMIC = 2,
                TU_WRITE_ONLY = 4,
                TU_STATIC_WRITE_ONLY = 5,
                TU_DYNAMIC_WRITE_ONLY = 6,
                TU_DYNAMIC_WRITE_ONLY_DISCARDABLE = 14,
                ///让图形硬件自动生成Mipmaps
                TU_AUTOMIPMAP = 256,			///0x100,
                ///这个纹理是一个渲染目标。换句话说，你把一个目标渲染到这个纹理上。设置了这个标记将会忽略所有除了TU_AUTOMIPMAP之外的标记。
                TU_RENDERTARGET = 512,			///0x200,
                //// default to automatic mipmap generation static textures
                ///他等价于TU_AUTOMIPMAP | TU_STATIC_WRITE_ONLY。资源系统使用这个标记来处理从图片中读入的图像数据。
                TU_DEFAULT = TU_AUTOMIPMAP | TU_STATIC_WRITE_ONLY
            };
            ///当前的硬件支持四种不同的纹理类型
            enum TextureType
            {
                ///一维纹理，通过1D纹理坐标来索引
                TEX_TYPE_1D = 1,
                ///二维纹理，通过2D纹理坐标来索引。
                TEX_TYPE_2D = 2,
                ///三维纹理，通过3D纹理坐标来索引。
                TEX_TYPE_3D = 3,
                ///立方体贴图(六个二维纹理，代表立方体的六个表面)，通过三维纹理坐标来索引。
                ///zxt updatefor v1.8
                //// 3D cube map, used in combination with 3D texture coordinates
                TEX_TYPE_CUBE_MAP = 4,
                //// 2D texture array
                TEX_TYPE_2D_ARRAY = 5
            };
            ///指定这个纹理的mipmap数量
            enum TextureMipmap
            {
                ///意味着mips的大小生成下限到1x1
                MIP_UNLIMITED = 2147483647,			///0x7FFFFFFF,
                //// Use CTextureManager default
                MIP_DEFAULT = -1
            };
            ///提前声明
            class CTexturePtr;
            /// <summary>
            /// 抽象类，表示纹理资源
            /// </summary>
            class EV_GRAPHIC_DLL CTexture : public EarthView::World::Graphic::CResource
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CTexture( _in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="creator"></param>
                /// <param name="name"></param>
                /// <param name="handle"></param>
                /// <param name="group"></param>
                /// <param name="isManual"></param>
                /// <param name="loader"></param>
                /// <returns></returns>
                CTexture(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle,
                         const EVString &group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader);
                CTexture(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle,
                         const EVString &group, ev_bool isManual);
                CTexture(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle,
                         const EVString &group);

				virtual ~CTexture();

                /// <summary>
                /// 设置纹理类型，只能在load（）运行前改变
                /// </summary>
                /// <param name="ttype">纹理类型</param>
                /// <returns></returns>
                virtual void setTextureType(TextureType ttype );
                /// <summary>
                /// 得到纹理类型
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回纹理类型</returns>
                virtual EarthView::World::Graphic::TextureType getTextureType() const;
                /// <summary>
                /// 获得该纹理中所用到的多级渐进纹理(mipmaps)的级数
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回mipmaps级数</returns>
                virtual ev_size_t getNumMipmaps() const;
                /// <summary>
                /// 设置该纹理中所用到的多级渐进纹理(mipmaps)的级数，必须在load方法被调用前进行设置
                /// </summary>
                /// <param name="num">mipmaps数量</param>
                /// <returns>返回该值</returns>
                virtual void setNumMipmaps(ev_size_t num);
                /// <summary>
                /// 获取硬件mipmap级别是否已经生成(只有在纹理被加载后，或者是创建了内部的资源才是正确的)
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool getMipmapsHardwareGenerated() const;
                /** Returns the gamma adjustment factor applied to this texture on loading.
                */
                virtual ev_real32 getGamma() const;
                /** Sets the gamma adjustment factor applied to this texture on loading the
                	data.
                    @note
                        Must be called before any 'load' method. This gamma factor will
                		be premultiplied in and may reduce the precision of your textures.
                		You can use setHardwareGamma if supported to apply gamma on
                		sampling the texture instead.
                */
                virtual void setGamma(ev_real32 g);
                /** Sets whether this texture will be set up so that on sampling it,
                	hardware gamma correction is applied.
                @remarks
                	24-bit textures are often saved in gamma colour space; this preserves
                	precision in the 'darks'. However, if you're performing blending on
                	the sampled colours, you really want to be doing it in linear space.
                	One way is to apply a gamma correction value on loading (see setGamma),
                	but this means you lose precision in those dark colours. An alternative
                	is to get the hardware to do the gamma correction when reading the
                	texture and converting it to a floating point value for the rest of
                	the pipeline. This option allows you to do that; it's only supported
                	in relatively recent hardware (others will ignore it) but can improve
                	the quality of colour reproduction.
                @note
                	Must be called before any 'load' method since it may affect the
                	construction of the underlying hardware resources.
                */
                /// <summary>
                ///
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setHardwareGammaEnabled(ev_bool enabled);
                /** Gets whether this texture will be set up so that on sampling it,
                hardware gamma correction is applied.
                */
                /// <summary>
                ///
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool isHardwareGammaEnabled() const;
                /** Set the level of multisample AA to be used if this texture is a
                	rendertarget.
                @note This option will be ignored if TU_RENDERTARGET is not part of the
                	usage options on this texture, or if the hardware does not support it.
                @param fsaa The number of samples
                @param fsaaHint EarthView::World::Core::CAny hinting text (@see CRoot::createRenderWindow)
                */
                /// <summary>
                /// 设置多重采样(抗锯齿)级别
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setFSAA(ev_uint32 fsaa, const EVString &fsaaHint);
				/// <summary>
				/// 获取多重采样(抗锯齿)级别
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                virtual ev_uint32 getFSAA() const;
                /** Get the multisample AA hint if this texture is a rendertarget.
                */
                virtual EVString getFSAAHint() const;
                /// <summary>
                /// 返回纹理的高度
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回height</returns>
                virtual ev_size_t getHeight() const;
                /// <summary>
                /// 返回纹理的宽度
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_size_t getWidth() const;
                /// <summary>
                /// 返回纹理的深度（仅适用于三维纹理）
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_size_t getDepth() const;
                /// <summary>
                /// 返回纹理的原始高度
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回height</returns>
                virtual ev_size_t getSrcHeight() const;
                /// <summary>
                /// 返回纹理的原始宽度
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回width</returns>
                virtual ev_size_t getSrcWidth() const;
                /// <summary>
                /// 返回纹理的原始深度（仅适用于三维纹理）
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回depth</returns>
                virtual ev_size_t getSrcDepth() const;
                /// <summary>
                /// 设置纹理的高，只有在load运行前才能进行设置
                /// </summary>
                /// <param name="h">纹理的高</param>
                /// <returns></returns>
                virtual void setHeight(ev_size_t h);
                /// <summary>
                /// 设置纹理的宽，只有在load运行前才能进行设置
                /// </summary>
                /// <param name="w">纹理的宽</param>
                /// <returns></returns>
                virtual void setWidth(ev_size_t w);
                /// <summary>
                /// 设置纹理的深度，（只适用于三维纹理）；只有在运行load前才能进行设置
                /// </summary>
                /// <param name="d">纹理的深度</param>
                /// <returns></returns>
                virtual void setDepth(ev_size_t d);
                /// <summary>
                /// 返回该纹理的纹理用法
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_int32 getUsage() const;
                /// <summary>
                /// 设置该纹理的纹理用法
                /// </summary>
                /// <param name="u">u是TU_STATIC, TU_DYNAMIC, TU_WRITE_ONLY，TU_AUTOMIPMAP and TU_RENDERTARGET的合并</param>
                /// <returns></returns>
                virtual void setUsage(ev_int32 u);
                /// <summary>
                /// 为该纹理创建内部的纹理资源
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void createInternalResources();
                /// <summary>
                /// 释放该纹理创建的内部纹理资源
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void freeInternalResources();

                /// <summary>
                /// 拷贝该纹理的内容到另一个纹理
                /// </summary>
                /// <param name="target">目标纹理</param>
                /// <returns></returns>
                virtual void copyToTexture( EarthView::World::Graphic::CTexturePtr &target );
                /// <summary>
                /// 从影像中加载数据
                /// </summary>
                /// <param name="img">影像</param>
                /// <returns></returns>
                virtual void loadImage( const EarthView::World::Graphic::CImage &img );
                /// <summary>
                /// 从原始流文件中加载数据
                /// </summary>
                /// <param name="stream">包含原始像素数据的的数据流</param>
                /// <param name="uWidth">影像的宽</param>
                /// <param name="uHeight">影像的高</param>
                /// <param name="eFormat">像素数据的格式</param>
                /// <returns></returns>
                virtual void loadRawData( EarthView::World::Core::DataStreamPtr &stream,
                                          ev_uint16 uWidth, ev_uint16 uHeight, EarthView::World::Graphic::PixelFormat eFormat);
                /// <summary>
                /// 从一组影像中加载纹理
                /// </summary>
                /// <param name="images">影像</param>
                /// <returns></returns>
                virtual void _loadImages( const EarthView::World::Graphic::ConstImagePtrList &images );

                /// <summary>
                /// 获得纹理表面的像素类型
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回纹理表面的像素类型</returns>
                virtual EarthView::World::Graphic::PixelFormat getFormat() const;
				/// <summary>
				/// 为纹理设置像素类型，只在load运行前设置
				/// </summary>
				/// <param name="pf">像素类型</param>
				/// <returns></returns>
				virtual void setFormat(EarthView::World::Graphic::PixelFormat pf);

                /// <summary>
                /// 获得纹理的目标像素格式
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回想要得到的纹理表面的像素类型</returns>
                virtual EarthView::World::Graphic::PixelFormat getDesiredFormat() const;
                /// <summary>
                /// 获得纹理的源像素格式(可能由于硬件要求和像素格式转换而不同)
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::PixelFormat getSrcFormat() const;
                
                /// <summary>
                /// 判断纹理是否具有alpha通道
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool hasAlpha() const;
                /// <summary>
                /// 设置期望的整型位深度
                /// </summary>
                /// <param name="bits">像素的位数</param>
                /// <returns></returns>
                virtual void setDesiredIntegerBitDepth(ev_uint16 bits);
                /// <summary>
                /// 得到期望的整型位深度
                /// </summary>
                /// <param name="">位</param>
                /// <returns>返回得到的位</returns>
                virtual ev_uint16 getDesiredIntegerBitDepth() const;
                /// <summary>
                /// 设置期望的float型位深度
                /// </summary>
                /// <param name="bits">像素的位数</param>
                /// <returns></returns>
                virtual void setDesiredFloatBitDepth(ev_uint16 bits);
                /// <summary>
                /// 得到期望的float型位深度
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回位值</returns>
                virtual ev_uint16 getDesiredFloatBitDepth() const;

                /// <summary>
                /// 设置期望的位深度
                /// </summary>
                /// <param name="integerBits">整型像素的位数</param>
                /// <param name="floatBits">float型像素的位数</param>
                /// <returns></returns>
                virtual void setDesiredBitDepths(ev_uint16 integerBits, ev_uint16 floatBits);

                /// <summary>
                /// 当加载纹理时，设置是否把亮度像素格式作为alpha格式
                /// </summary>
                /// <param name="asAlpha">是否作为alpha格式</param>
                /// <returns></returns>
                virtual void setTreatLuminanceAsAlpha(ev_bool asAlpha);
                /// <summary>
                /// 当加载纹理时，获得是否把亮度像素格式作为alpha格式
                /// </summary>
                /// <param name=""></param>
                /// <returns>是则返回true，不是则返回false</returns>
                virtual ev_bool getTreatLuminanceAsAlpha() const;
                /// <summary>
                /// 获得该纹理的面的个数
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回个数</returns>
                virtual ev_size_t getNumFaces() const;
                /// <summary>
                /// 获得硬件像素缓存
                /// </summary>
                /// <param name="face">纹理表面的个数</param>
                /// <param name="mipmap">多级渐进纹理的级数</param>
                /// <returns>返回纹理表面的硬件像素缓存</returns>
                virtual EarthView::World::Graphic::CHardwarePixelBufferSharedPtr getBuffer(ev_size_t face, ev_size_t mipmap);
                virtual EarthView::World::Graphic::CHardwarePixelBufferSharedPtr getBuffer(ev_size_t face);
                virtual EarthView::World::Graphic::CHardwarePixelBufferSharedPtr getBuffer();

                /// <summary>
                /// 用该纹理的内容转换成Image
                /// </summary>
                /// <param name="destImage">目标影像</param>
                /// <param name="includeMipMaps">是否把mipmaps插入影像中</param>
                /// <returns></returns>
                virtual void convertToImage(EarthView::World::Graphic::CImage &destImage, ev_bool includeMipMaps);
                virtual void convertToImage(EarthView::World::Graphic::CImage &destImage);

                /// <summary>
                /// 从该纹理中获得自定义属性数据
                /// </summary>
                /// <param name="name">属性名称</param>
                /// <param name="pData">数据存储区</param>
                /// <returns></returns>
                virtual void getCustomAttribute(const EVString &name, void *pData);

				/// <summary>
				/// 从Image中重新加载
				/// </summary>
				/// <param name="img">影像</param>				
				/// <returns></returns>
				virtual void reload(EarthView::World::Graphic::CImage& img);

				virtual ev_uint32 getTextureID() const;

				virtual void *getSystemResource(){return NULL;}

            protected:
                ev_size_t mHeight;
                ev_size_t mWidth;
                ev_size_t mDepth;
                ev_size_t mNumRequestedMipmaps;
                ev_size_t mNumMipmaps;
                ev_bool mMipmapsHardwareGenerated;
                ev_real32 mGamma;
                ev_bool mHwGamma;
                ev_uint32 mFSAA;
                EVString mFSAAHint;
                EarthView::World::Graphic::TextureType mTextureType;
                EarthView::World::Graphic::PixelFormat mFormat;
                ev_int32 mUsage; 			/// Bit field, so this can't be TextureUsage
                EarthView::World::Graphic::PixelFormat mSrcFormat;
                ev_size_t mSrcWidth, mSrcHeight, mSrcDepth;
                EarthView::World::Graphic::PixelFormat mDesiredFormat;
                ev_uint16 mDesiredIntegerBitDepth;
                ev_uint16 mDesiredFloatBitDepth;
                ev_bool mTreatLuminanceAsAlpha;
                ev_bool mInternalResourcesCreated;
				
                ///把资源环境类型作为一个字符串，
                EVString getSourceFileType() const;
            ev_internal:
                //// @copydoc CResource::calculateSize
                ev_size_t calculateSize() const;

                ///当调用释放内部资源时，默认执行该卸载操作
                void unloadImpl();
            ev_private:
                /// <summary>
                /// 创建内部的纹理资源
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void createInternalResourcesImpl();
                /// <summary>
                ///释放内部的纹理资源
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void freeInternalResourcesImpl();
            };
            /** Specialisation of CSharedPtr to allow CSharedPtr to be assigned to EarthView::World::Graphic::CTexturePtr
            @note Has to be a subclass since we need operator=.
            We could templatise this instead of repeating per CResource subclass,
            except to do so requires a form VC6 does not support i.e.
            ResourceSubclassPtr<T> : public EarthView::World::Core::CSharedPtr<T>
            */
            class EV_GRAPHIC_DLL CTexturePtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CTexture>
            {
            ev_private:
                CTexturePtr(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CTexturePtr();
                explicit CTexturePtr(CTexture *ref_rep);
                explicit CTexturePtr(CTexture *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) :
				    EarthView::World::Core::CSharedPtr<CTexture>(ref_rep, inFreeMethod) {}
                CTexturePtr(const CTexturePtr &tp);
                CTexturePtr(const EarthView::World::Graphic::ResourcePtr &rp);
                EarthView::World::Graphic::CTexture *get() const
                {
                    return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CTexture>::get();
                }
                //// Operator used to convert a EarthView::World::Graphic::ResourcePtr to a EarthView::World::Graphic::CTexturePtr
                EarthView::World::Graphic::CTexturePtr &operator=(const EarthView::World::Graphic::ResourcePtr &r);
                operator ResourcePtr()
                {
                    EV_MUTEX_CONDITIONAL(EV_AUTO_MUTEX_NAME)
                    {
                        EV_LOCK_MUTEX(*EV_AUTO_MUTEX_NAME)

                        EarthView::World::Graphic::ResourcePtr ptr;
                        ptr.pRep = static_cast<EarthView::World::Graphic::CResource *>(getPointer());
#if EV_THREAD_SUPPORT
                        ptr.EV_AUTO_MUTEX_NAME = EV_AUTO_MUTEX_NAME;
#endif
                        ptr.pUseCount = useCountPointer();
                        ptr.useFreeMethod = useFreeMethod;
                        if (pUseCount)
                        {
                            ++(*pUseCount);
                        }
                        return ptr;
                    }
                    else
                    {
                        return ResourcePtr();
                    }
                }
            };
        }
    }
}

#endif

