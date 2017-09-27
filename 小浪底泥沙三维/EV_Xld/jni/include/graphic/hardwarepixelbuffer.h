#ifndef __HardwarePixelBuffer__
#define __HardwarePixelBuffer__
#include "graphic/graphic_config.h"
#include "hardwarebuffer.h"
#include <core/sharedptr.h>
#include "image.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
			class CHardwarePixelBufferSharedPtr;
			class CRenderTexture;
			/***** Specialisation of EarthView::World::Graphic::CHardwareBuffer for a pixel buffer. The
    			HardwarePixelbuffer abstracts an 1D, 2D or 3D quantity of pixels
    			stored by the rendering API. The buffer can be located on the card
    			or in main memory depending on its usage. One mipmap level of a
    			texture is an example of a EarthView::World::Graphic::CHardwarePixelBuffer.
			****/
			/// <summary>
			/// 硬件像素缓存类
			/// 定义内存中像素缓存的相关操作
			/// </summary>
			class EV_GRAPHIC_DLL CHardwarePixelBuffer : public EarthView::World::Graphic::CHardwareBuffer
			{
			protected: 
				/// Extents
				ev_size_t mWidth, mHeight, mDepth;
				/// Pitches (offsets between rows and slices)
				ev_size_t mRowPitch, mSlicePitch;
				/// Internal format
				EarthView::World::Graphic::PixelFormat mFormat;
				/// Currently locked region (local coords)
				EarthView::World::Graphic::CPixelBox mCurrentLock;
				/// The current locked box of this surface (entire surface coords)
				EarthView::World::Graphic::Box mLockedBox;
				friend class CRenderTexture;
        
				//// Internal implementation of lock(), must be overridden in subclasses
			ev_internal:
				/// <summary>
				/// 锁Impl函数
				/// </summary>
				/// <param name="lockBox">像素</param>
				/// <param name="options">选项</param>
				/// <returns>像素盒</returns>
				virtual EarthView::World::Graphic::CPixelBox lockImpl(const Box lockBox,  EarthView::World::Graphic::CHardwareBuffer::LockOptions options);

				//// Internal implementation of lock(), do not OVERRIDE or CALL this
				//// for EarthView::World::Graphic::CHardwarePixelBuffer implementations, but override the previous method
				/// <summary>
				/// 锁Impl函数
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="options">选项</param>
				/// <returns></returns>
				virtual void* lockImpl(ev_size_t offset, ev_size_t length, EarthView::World::Graphic::CHardwareBuffer::LockOptions options);

				//// Internal implementation of unlock(), must be overridden in subclasses
				/// virtual void unlockImpl() = 0;

				/***** Notify TextureBuffer of destruction of render target.
					Called by EarthView::World::Graphic::CRenderTexture when destroyed.
				****/

				/// <summary>
				/// 清空片段RTT函数
				/// </summary>
				/// <param name="zoffset">偏移量</param>
				/// <returns></returns>
				virtual void _clearSliceRTT(ev_size_t zoffset);
		

			public:
				//// Should be called by CHardwareBufferManager	
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="mWidth">宽度</param>
				/// <param name="mHeight">高度</param>
				/// <param name="mDepth">深度</param>
				/// <param name="mFormat">格式</param>
				/// <param name="usage">缓存方法</param>
				/// <param name="systemMemory">是否使用系统内存</param>
				/// <param name="useShadowBuffer">是否使用阴影缓存</param>
				/// <returns></returns>
				CHardwarePixelBuffer(ev_size_t width, ev_size_t height, ev_size_t depth,
						EarthView::World::Graphic::PixelFormat format,
						EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool useSystemMemory, ev_bool useShadowBuffer);
			ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">参数列表</param>
				/// <returns></returns>
				CHardwarePixelBuffer(_in EarthView::World::Core::CNameValuePairList* pList);
		
			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CHardwarePixelBuffer();

        

				/***** Lock the buffer for (potentially) reading / writing.
					@param lockBox CRegion of the buffer to lock
					@param options Locking options
					@returns EarthView::World::Graphic::CPixelBox containing the locked region, the pitches and
		    			the pixel format
				****/
				/// <summary>
				/// 锁Impl函数
				/// </summary>
				/// <param name="lockBox">像素</param>
				/// <param name="options">选项</param>
				/// <returns>像素盒</returns>
				virtual const EarthView::World::Graphic::CPixelBox& lock(const Box& lockBox, EarthView::World::Graphic::CHardwareBuffer::LockOptions options);

				//// @copydoc CHardwareBuffer::lock
				/// <summary>
				/// 锁Impl函数
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="options">选项</param>
				/// <returns></returns>
				virtual void* lock(ev_size_t offset, ev_size_t length, EarthView::World::Graphic::CHardwareBuffer::LockOptions options);

				/***** Get the current locked region. This is the same value as returned
					by lock(const EarthView::World::Graphic::Box, EarthView::World::Graphic::CHardwareBuffer::LockOptions)
					@returns EarthView::World::Graphic::CPixelBox containing the locked region
				****/ 
				/// <summary>
				/// 获取当前锁
				/// </summary>
				/// <param name=""></param>
				/// <returns>像素盒</returns>
				const EarthView::World::Graphic::CPixelBox& getCurrentLock();
		
				//// @copydoc CHardwareBuffer::readData
				/// 读数据
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="pDest">内存大小</param>
				/// <returns></returns>
				virtual void readData(ev_size_t offset, ev_size_t length, _inout void* pDest);
				//// @copydoc CHardwareBuffer::writeData
				/****virtual void writeData(ev_size_t offset, ev_size_t length, const void* pSource,
						ev_bool discardWholeBuffer = false);
				****/
				/// <summary>
				/// 写数据
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="pSource">资源</param>
				/// <param name="discardWholeBuffer">是否放弃整个缓存</param>
				/// <returns></returns>
				virtual void writeData(ev_size_t offset, ev_size_t length, const void* pSource,
					ev_bool discardWholeBuffer);

				/// <summary>
				/// 写数据
				/// </summary>
				/// <param name="offset">偏移量</param>
				/// <param name="length">长度</param>
				/// <param name="pSource">资源</param>
				/// <returns></returns>
				virtual void writeData(ev_size_t offset, ev_size_t length, const void* pSource);
        
				/***** Copies a box from another PixelBuffer to a region of the 
        			this PixelBuffer. 
					@param dst		Source pixel buffer
        			@param srcBox	Box describing the source region in src
        			@param dstBox	Box describing the destination region in this buffer
					@remarks The source and destination regions dimensions don't have to match, in which
					but it is faster to pass the source image in the right dimensions.
					@note Only call this function when both  buffers are unlocked. 
				 ****/ 
				/// <summary>
				/// 将另一个像素缓存复制到这个像素缓存区域中
				/// </summary>
				/// <param name="src">标准要求代码</param>
				/// <param name="srcBox">描述资源在src中的位置</param>
				/// <param name="dstBox">资源像素缓存</param>
				/// <returns></returns>
				virtual void blit(const EarthView::World::Graphic::CHardwarePixelBufferSharedPtr &src, const EarthView::World::Graphic::Box &srcBox, const EarthView::World::Graphic::Box &dstBox);

				/***** Convenience function that blits the entire source pixel buffer to this buffer. 
					If source and destination dimensions don't match, scaling is done.
					@param src		EarthView::World::Graphic::CPixelBox containing the source pixels and format in memory
					@note Only call this function when the buffer is unlocked. 
				****/
				/// <summary>
				/// 将另一个像素缓存复制到这个像素缓存区域中
				/// </summary>
				/// <param name="src">标准要求代码</param>
				/// <returns></returns>
				void blit(const EarthView::World::Graphic::CHardwarePixelBufferSharedPtr &src); 
		
				/// <summary>
				/// 从内存的像素缓存复制到这个像素缓存区域中
				/// </summary>
				/// <param name="src">标准要求代码</param>
				/// <param name="dstBox">资源像素缓存</param>
				/// <returns></returns>
				virtual void blitFromMemory(const EarthView::World::Graphic::CPixelBox &src, const Box &dstBox);
		
				/***** Convenience function that blits a pixelbox from memory to the entire 
					buffer. The source image is scaled as needed.
					@param src		EarthView::World::Graphic::CPixelBox containing the source pixels and format in memory
					@note Only call this function when the buffer is unlocked. 
				****/
				/// <summary>
				/// 从内存的像素缓存复制到这个像素缓存区域中
				/// </summary>
				/// <param name="src">标准要求代码</param>
				/// <returns></returns>
				void blitFromMemory(const EarthView::World::Graphic::CPixelBox &src);
		
				/// <summary>
				/// 从这个像素缓存复制到内存的像素缓存中
				/// </summary>
				/// <param name="srcBox">标准要求代码盒</param>
				/// <param name="dst">资源像素缓存</param>
				/// <returns></returns>
				virtual void blitToMemory(const EarthView::World::Graphic::Box &srcBox, const EarthView::World::Graphic::CPixelBox &dst);

				/***** Convience function that blits this entire buffer to a pixelbox.
					The image is scaled as needed.
					@param src		EarthView::World::Graphic::CPixelBox containing the source pixels and format in memory
					@note Only call this function when the buffer is unlocked. 
				****/
				/// <summary>
				/// 从这个像素缓存复制到内存的像素缓存中
				/// </summary>
				/// <param name="dst">资源像素缓存</param>
				/// <returns></returns>
				void blitToMemory(const EarthView::World::Graphic::CPixelBox &dst);
        
				/// <summary>
				/// 从像素缓存中获取渲染目标
				/// </summary>
				/// <param name="slice">片段</param>
				/// <returns>渲染纹理</returns>
				virtual EarthView::World::Graphic::CRenderTexture* getRenderTarget(ev_size_t slice);

				/// <summary>
				/// 从像素缓存中获取渲染目标
				/// </summary>
				/// <param name=""></param>
				/// <returns>渲染纹理</returns
				/****virtual****/ EarthView::World::Graphic::CRenderTexture* getRenderTarget();

        
				//// Gets the width of this buffer
				/// <summary>
				/// 获取缓存宽度
				/// </summary>
				/// <param name=""></param>
				/// <returns>缓存宽度</returns>
				ev_size_t getWidth() const; 

				//// Gets the height of this buffer
				/// <summary>
				/// 获取缓存高度
				/// </summary>
				/// <param name=""></param>
				/// <returns>缓存高度</returns>
				ev_size_t getHeight() const; 

				//// Gets the depth of this buffer
				/// <summary>
				/// 获取缓存深度
				/// </summary>
				/// <param name=""></param>
				/// <returns>缓存深度</returns>
				ev_size_t getDepth() const; 

				//// Gets the native pixel format of this buffer
				/// <summary>
				/// 获取缓存方式
				/// </summary>
				/// <param name=""></param>
				/// <returns>像素缓存方式</returns>
				EarthView::World::Graphic::PixelFormat getFormat() const; 
			};

			/***** Shared pointer implementation used to share pixel buffers. ****/
			class EV_GRAPHIC_DLL CHardwarePixelBufferSharedPtr : public EarthView::World::Core::CBaseObject,public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CHardwarePixelBuffer>
			{
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CHardwarePixelBufferSharedPtr();
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="buf">硬件像素缓存</param>
				/// <returns></returns>
				explicit CHardwarePixelBufferSharedPtr( CHardwarePixelBuffer* ref_buf);
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="buf">硬件像素缓存</param>
				/// <param name="inFreeMethod">共享方法</param>
				/// <returns></returns>
				explicit CHardwarePixelBufferSharedPtr(CHardwarePixelBuffer* ref_buf, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod);
        
				/// <summary>
				/// 获取像素缓存
				/// </summary>
				/// <param name=""></param>
				/// <returns>像素缓存</returns>
				EarthView::World::Graphic::CHardwarePixelBuffer* get() const; 

			ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CHardwarePixelBufferSharedPtr(_in EarthView::World::Core::CNameValuePairList* pList);
		
			};
        }
	}
}
#endif
	

