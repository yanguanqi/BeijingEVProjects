#ifndef _Image_H__
#define _Image_H__
#include "graphic/graphic_config.h"
#include "pixelformat.h"


namespace EarthView
{
    namespace World
    {
        namespace Core
        {
            class DataStreamPtr;
			class MemoryDataStreamPtr;
        }
    }
}

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            class CDDSCodec;

            enum ImageFlags
            {
                IF_COMPRESSED = 1,			///0x00000001,
                IF_CUBEMAP    = 2,			///0x00000002,
                IF_3D_TEXTURE = 4 			///0x00000004
            };
            /***** Class representing an image file.
            @remarks
            The CImage class usually holds uncompressed image data and is the
            only object that can be loaded in a texture. EarthView::World::Graphic::CImage  objects handle
            image data decoding themselves by the means of locating the correct
            CCodec object for each data type.
            @par
            Typically, you would want to use an EarthView::World::Graphic::CImage object to load a texture
            when extra processing needs to be done on an image before it is
            loaded or when you want to blit to an existing texture.
            ****/
            class EV_GRAPHIC_DLL CImage : public EarthView::World::Core::CAllocatedObject
            {
            private:
                friend class CDDSCodec;
            public:
                //typedef Box Box;
                //typedef Rect Rect;
                //typedef EarthView::World::Graphic::Box Box;
                //typedef EarthView::World::Graphic::Rect Rect;
            ev_private:
                CImage(_in EarthView::World::Core::CNameValuePairList* pList);

            public:
                /*****判断是否将像素格式24bits(B8G8R8)转换为32bits(A8B8G8R8)，
                应用于DDS压缩处理
                ****/
                ev_bool NeedConversion;

				/*****对DDS文件进行解压
				****/
				ev_bool NeedDeCompress;

				 /*****判断DDS的压缩格式（1为DXT1，5为DXT5），目前已实现的为DXT1和DXT5两种格式
                ****/              
				ev_uint16 DxtFormat;

				/*****DDS压缩时是否有MipMap，默认为true
				****/
				ev_bool HasMipMap;

				/*****DDS压缩时是否有Alpha通道，默认为false，设置为true后将强制使用DXT1进行压缩
				****/
				ev_bool HasOneBitAlpha;

            protected:
                /*****是否将JPG文件转为EVG格式，该格式为DXT1类型
                ****/
                ev_bool IsEVG;

               
            public:
                /***** Standard constructor.
                ****/
                CImage();

                /***** Copy-constructor - copies all the data from the target image.
                ****/
                CImage( const CImage &img );

                /***** Standard destructor.
                ****/
                virtual ~CImage();

                /***** Assignment operator - copies all the data from the target image.
                ****/
                EarthView::World::Graphic::CImage & operator = ( const EarthView::World::Graphic::CImage & img );

                /***** Flips (mirrors) the image around the Y-axis. 
                @remarks
                An example of an original and flipped image:
                <pre>                
                originalimg
                00000000000
                00000000000
                00000000000
                00000000000
                00000000000
                ------------> flip axis
                00000000000
                00000000000
                00000000000
                00000000000
                00000000000
                originalimg
                </pre>
                ****/
                EarthView::World::Graphic::CImage & flipAroundY();

                /***** Flips (mirrors) the image around the X-axis.
                @remarks
                An example of an original and flipped image:
                <pre>
                flip axis
                |
                originalimg|gmilanigiro
                00000000000|00000000000
                00000000000|00000000000
                00000000000|00000000000
                00000000000|00000000000
                00000000000|00000000000
                </pre>
                ****/                 
                EarthView::World::Graphic::CImage & flipAroundX();

                /***** Stores a pointer to raw data in memory. The pixel format has to be specified.
                @remarks
                This method loads an image into memory held in the object. The 
                pixel format will be either greyscale or RGB with an optional
                Alpha component.
                The type can be determined by calling getFormat().             
                @note
                Whilst typically your image is likely to be a simple 2D image,
                you can define complex images including cube maps, volume maps,
                and images including custom mip levels. The layout of the 
                internal memory should be:
                <ul><li>face 0, mip 0 (top), width x height (x depth)</li>
                <li>face 0, mip 1, width/2 x height/2 (x depth/2)</li>
                <li>face 0, mip 2, width/4 x height/4 (x depth/4)</li>
                <li>.. remaining mips for face 0 .. </li>
                <li>face 1, mip 0 (top), width x height (x depth)</li
                <li>.. and so on. </li>
                </ul>
                Of course, you will never have multiple faces (cube map) and
                depth too.
                @param
                The data pointer
                @param
                Width of image
                @param
                Height of image
                @param
                EarthView::World::Graphic::CImage Depth (in 3d images, numbers of layers, otherwhise 1)
                @param
                Pixel Format
                @param
                if memory associated with this buffer is to be destroyed
                with the EarthView::World::Graphic::CImage object. Note: it's important that if you set
                with a category of MEMCATEGORY_GENERAL ensure the freeing of memory 
                matches up.
                @param
                the number of faces the image data has inside (6 for cubemaps, 1 otherwise)
                @param
                the number of mipmaps the image data has inside
                @note
                The memory associated with this buffer is NOT destroyed with the
                EarthView::World::Graphic::CImage object, unless autoDelete is set to true.
                @remarks 
                The size of the buffer must be numFaces*CPixelUtil::getMemorySize(width, height, depth, format)
                ****/
                EarthView::World::Graphic::CImage& loadDynamicImage( ev_uchar* pData, ev_size_t uWidth, ev_size_t uHeight, 
                    ev_size_t depth,
                    EarthView::World::Graphic::PixelFormat eFormat, ev_bool autoDelete , 
                    ev_size_t numFaces, ev_size_t numMipMaps);

                EarthView::World::Graphic::CImage& loadDynamicImage( ev_uchar* pData, ev_size_t uWidth, ev_size_t uHeight, 
                    ev_size_t depth,
                    EarthView::World::Graphic::PixelFormat eFormat, ev_bool autoDelete , 
                    ev_size_t numFaces);

                EarthView::World::Graphic::CImage& loadDynamicImage( ev_uchar* pData, ev_size_t uWidth, ev_size_t uHeight, 
                    ev_size_t depth,
                    EarthView::World::Graphic::PixelFormat eFormat, ev_bool autoDelete);

                EarthView::World::Graphic::CImage& loadDynamicImage( ev_uchar* pData, ev_size_t uWidth, ev_size_t uHeight, 
                    ev_size_t depth,
                    EarthView::World::Graphic::PixelFormat eFormat);

                /***** Stores a pointer to raw data in memory. The pixel format has to be specified.
                @remarks
                This method loads an image into memory held in the object. The 
                pixel format will be either greyscale or RGB with an optional
                Alpha component.
                The type can be determined by calling getFormat().             
                @note
                Whilst typically your image is likely to be a simple 2D image,
                you can define complex images including cube maps
                and images including custom mip levels. The layout of the 
                internal memory should be:
                <ul><li>face 0, mip 0 (top), width x height</li>
                <li>face 0, mip 1, width/2 x height/2 </li>
                <li>face 0, mip 2, width/4 x height/4 </li>
                <li>.. remaining mips for face 0 .. </li>
                <li>face 1, mip 0 (top), width x height (x depth)</li
                <li>.. and so on. </li>
                </ul>
                Of course, you will never have multiple faces (cube map) and
                depth too.
                @param
                The data pointer
                @param
                Width of image
                @param
                Height of image
                @param
                Pixel Format
                @note
                The memory associated with this buffer is NOT destroyed with the
                EarthView::World::Graphic::CImage object.
                @remarks This function is deprecated; one should really use the
                CImage::loadDynamicImage(pData, width, height, depth, format, ...) to be compatible
                with future EV_World versions.
                ****/
                EarthView::World::Graphic::CImage& loadDynamicImage( ev_uchar* pData, ev_size_t uWidth,
                    ev_size_t uHeight, EarthView::World::Graphic::PixelFormat eFormat)
                {
                    return loadDynamicImage(pData, uWidth, uHeight, 1, eFormat);
                }
                /***** Loads raw data from a stream. See the function
                loadDynamicImage for a description of the parameters.
                @remarks 
                The size of the buffer must be numFaces*CPixelUtil::getMemorySize(width, height, depth, format)
                @note
                Whilst typically your image is likely to be a simple 2D image,
                you can define complex images including cube maps
                and images including custom mip levels. The layout of the 
                internal memory should be:
                <ul><li>face 0, mip 0 (top), width x height (x depth)</li>
                <li>face 0, mip 1, width/2 x height/2 (x depth/2)</li>
                <li>face 0, mip 2, width/4 x height/4 (x depth/4)</li>
                <li>.. remaining mips for face 0 .. </li>
                <li>face 1, mip 0 (top), width x height (x depth)</li
                <li>.. and so on. </li>
                </ul>
                Of course, you will never have multiple faces (cube map) and
                depth too.
                ****/
                EarthView::World::Graphic::CImage & loadRawData( 
                    EarthView::World::Core::DataStreamPtr& stream, 
                    ev_size_t uWidth, ev_size_t uHeight, ev_size_t uDepth,
                    EarthView::World::Graphic::PixelFormat eFormat,
                    ev_size_t numFaces, ev_size_t numMipMaps);

                EarthView::World::Graphic::CImage & loadRawData( 
                    EarthView::World::Core::DataStreamPtr& stream, 
                    ev_size_t uWidth, ev_size_t uHeight, ev_size_t uDepth,
                    EarthView::World::Graphic::PixelFormat eFormat,
                    ev_size_t numFaces);

                EarthView::World::Graphic::CImage & loadRawData( 
                    EarthView::World::Core::DataStreamPtr& stream, 
                    ev_size_t uWidth, ev_size_t uHeight, ev_size_t uDepth,
                    EarthView::World::Graphic::PixelFormat eFormat);
                /***** Loads raw data from a stream. The pixel format has to be specified. 
                @remarks This function is deprecated; one should really use the
                CImage::loadRawData(stream, width, height, depth, format, ...) to be compatible
                with future EV_World versions.
                @note
                Whilst typically your image is likely to be a simple 2D image,
                you can define complex images including cube maps
                and images including custom mip levels. The layout of the 
                internal memory should be:
                <ul><li>face 0, mip 0 (top), width x height</li>
                <li>face 0, mip 1, width/2 x height/2 </li>
                <li>face 0, mip 2, width/4 x height/4 </li>
                <li>.. remaining mips for face 0 .. </li>
                <li>face 1, mip 0 (top), width x height (x depth)</li
                <li>.. and so on. </li>
                </ul>
                Of course, you will never have multiple faces (cube map) and
                depth too.
                ****/
                EarthView::World::Graphic::CImage & loadRawData( 
                    EarthView::World::Core::DataStreamPtr& stream, 
                    ev_size_t uWidth, ev_size_t uHeight, 
                    EarthView::World::Graphic::PixelFormat eFormat )
                {
                    return loadRawData(stream, uWidth, uHeight, 1, eFormat);
                }

                /***** Loads an image file.
                @remarks
                This method loads an image into memory. EarthView::World::Core::CAny format for which 
                and associated CImageCodec is registered can be loaded. 
                This can include complex formats like DDS with embedded custom 
                mipmaps, cube faces and volume textures.
                The type can be determined by calling getFormat().             
                @param
                strFileName Name of a file file to load.
                @param
                groupName Name of the resource group to search for the image
                @note
                The memory associated with this buffer is destroyed with the
                EarthView::World::Graphic::CImage object.
                ****/
                EarthView::World::Graphic::CImage & load( const EVString& strFileName, const EVString& groupName );

                /***** Loads an image file from a stream.
                @remarks
                This method works in the same way as the filename-based load 
                method except it loads the image from a CDataStream object. 
                This CDataStream is expected to contain the 
                encoded data as it would be held in a file. 
                EarthView::World::Core::CAny format for which and associated CImageCodec is registered 
                can be loaded. 
                This can include complex formats like DDS with embedded custom 
                mipmaps, cube faces and volume textures.
                The type can be determined by calling getFormat().             
                @param
                stream The source data.
                @param
                type The type of the image. Used to decide what decompression
                codec to use. Can be left blank if the stream data includes
                a header to identify the data.
                @see
                CImage::load( const EVString& strFileName )
                ****/
                EarthView::World::Graphic::CImage & load(EarthView::World::Core::DataStreamPtr& stream, const EVString& type );
                EarthView::World::Graphic::CImage & load(EarthView::World::Core::DataStreamPtr& stream);
				// hll, 2014/09/25, 添加
				// 加载图像，并指定是否忽略掉 mipmap
				//
				// 调用举例： 
				// image.NeedDeCompress = true;
				// image.load(stream, "dds", true);
				// 加载 dds 格式的 stream，并解压缩（此时 image 为 RGB/RGBA 格式图像），
				// 且忽略掉了 mipmap（只取 0 级 mimap）
				//
				// 注意：此接口当前只针对 dds, 若为其他格式，则 withMipmap 参数无效。
				EarthView::World::Graphic::CImage & load(EarthView::World::Core::DataStreamPtr& stream, const EVString& type, ev_bool ignoreMipmap);
                /***** Utility method to combine 2 separate images into this one, with the first
                image source supplying the RGB channels, and the second image supplying the 
                alpha channel (as luminance or separate alpha). 
                @param rgbFilename Filename of image supplying the RGB channels (any alpha is ignored)
                @param alphaFilename Filename of image supplying the alpha channel. If a luminance image the
                single channel is used directly, if an RGB image then the values are
                converted to greyscale.
                @param groupName The resource group from which to load the images
                @param format The destination format
                ****/
                EarthView::World::Graphic::CImage & loadTwoImagesAsRGBA(const EVString& rgbFilename, const EVString& alphaFilename,
                    const EVString& groupName, EarthView::World::Graphic::PixelFormat format);
                EarthView::World::Graphic::CImage & loadTwoImagesAsRGBA(const EVString& rgbFilename, const EVString& alphaFilename,const EVString& groupName);

                /***** Utility method to combine 2 separate images into this one, with the first
                image source supplying the RGB channels, and the second image supplying the 
                alpha channel (as luminance or separate alpha). 
                @param rgbStream CStream of image supplying the RGB channels (any alpha is ignored)
                @param alphaStream CStream of image supplying the alpha channel. If a luminance image the
                single channel is used directly, if an RGB image then the values are
                converted to greyscale.
                @param format The destination format
                @param rgbType The type of the RGB image. Used to decide what decompression
                codec to use. Can be left blank if the stream data includes
                a header to identify the data.
                @param alphaType The type of the alpha image. Used to decide what decompression
                codec to use. Can be left blank if the stream data includes
                a header to identify the data.
                ****/
                EarthView::World::Graphic::CImage & loadTwoImagesAsRGBA(EarthView::World::Core::DataStreamPtr& rgbStream, EarthView::World::Core::DataStreamPtr& alphaStream, EarthView::World::Graphic::PixelFormat fmt,
                    const EVString& rgbType, const EVString& alphaType);
                EarthView::World::Graphic::CImage & loadTwoImagesAsRGBA(EarthView::World::Core::DataStreamPtr& rgbStream, EarthView::World::Core::DataStreamPtr& alphaStream, EarthView::World::Graphic::PixelFormat fmt);
                EarthView::World::Graphic::CImage & loadTwoImagesAsRGBA(EarthView::World::Core::DataStreamPtr& rgbStream, EarthView::World::Core::DataStreamPtr& alphaStream, EarthView::World::Graphic::PixelFormat fmt,
                    const EVString& rgbType);
                EarthView::World::Graphic::CImage & loadTwoImagesAsRGBA(EarthView::World::Core::DataStreamPtr& rgbStream, EarthView::World::Core::DataStreamPtr& alphaStream);
                /***** Utility method to combine 2 separate images into this one, with the first
                image source supplying the RGB channels, and the second image supplying the 
                alpha channel (as luminance or separate alpha). 
                @param rgb EarthView::World::Graphic::CImage supplying the RGB channels (any alpha is ignored)
                @param alpha EarthView::World::Graphic::CImage supplying the alpha channel. If a luminance image the
                single channel is used directly, if an RGB image then the values are
                converted to greyscale.
                @param format The destination format
                ****/
                EarthView::World::Graphic::CImage & combineTwoImagesAsRGBA(const EarthView::World::Graphic::CImage& rgb, const EarthView::World::Graphic::CImage& alpha, EarthView::World::Graphic::PixelFormat format);
                EarthView::World::Graphic::CImage & combineTwoImagesAsRGBA(const EarthView::World::Graphic::CImage& rgb, const EarthView::World::Graphic::CImage& alpha);


                /***** Save the image as a file. 
                @remarks
                Saving and loading are implemented by back end (sometimes third 
                party) codecs.  Implemented saving functionality is more limited
                than loading in some cases.	Particulary DDS file format support 
                is currently limited to true colour or single channel float32, 
                square, power of two textures with no mipmaps.  Volumetric support
                is currently limited to DDS files.
                ****/
                void save(const EVString& filename);

                /***** Encode the image and return a stream to the data. 
                @param formatextension An extension to identify the image format
                to encode into, e.g. "jpg" or "png"
                ****/
                EarthView::World::Core::DataStreamPtr encode(const EVString& formatextension);               
				
				/// <summary>
				/// 转pkm和pvr压缩格式函数，仅供android平台使用，其它平台调用返回null
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Core::DataStreamPtr toPKM(EarthView::World::Core::DataStreamPtr& inputStream, const EVString& streamType);
				EarthView::World::Core::DataStreamPtr toPVR(EarthView::World::Core::DataStreamPtr& inputStream, const EVString& streamType);

#ifndef EV_NO_USING_DDS
				EarthView::World::Core::DataStreamPtr toDDS(EarthView::World::Core::DataStreamPtr& inputStream);
				EarthView::World::Core::DataStreamPtr toDDS2(EarthView::World::Core::DataStreamPtr& inputStream);
			ev_private:
				EarthView::World::Core::DataStreamPtr toDDS(void* gpImage);
			public:
#endif

                /***** Returns a pointer to the internal image buffer.
                @remarks
                Be careful with this method. You will almost certainly
                prefer to use getPixelBox, especially with complex images
                which include many faces or custom mipmaps.
                ****/
                ev_uchar* getData();

                /***** Returns a const pointer to the internal image buffer.
                @remarks
                Be careful with this method. You will almost certainly
                prefer to use getPixelBox, especially with complex images
                which include many faces or custom mipmaps.
                ****/
                const ev_uchar * getData() const;       

                /***** Returns the size of the data buffer.
                ****/
                ev_size_t getSize() const;

                /***** Returns the number of mipmaps contained in the image.
                ****/
                ev_size_t getNumMipmaps() const;

                /***** Returns true if the image has the appropriate flag set.
                ****/
                ev_bool hasFlag(const EarthView::World::Graphic::ImageFlags imgFlag) const;

                /***** Gets the width of the image in pixels.
                ****/
                ev_size_t getWidth() const;

                /***** Gets the height of the image in pixels.
                ****/
                ev_size_t getHeight() const;

                /***** Gets the depth of the image.
                ****/
                ev_size_t getDepth() const;

                /***** Get the number of faces of the image. This is usually 6 for a cubemap, and
                1 for a normal image.
                ****/
                ev_size_t getNumFaces() const;

                /***** Gets the physical width in bytes of each row of pixels.
                ****/
                ev_size_t getRowSpan() const;

                /***** Returns the image format.
                ****/
                EarthView::World::Graphic::PixelFormat getFormat() const;

                /***** Returns the number of bits per pixel.
                ****/
                ev_uchar getBPP() const;

                /***** Returns true if the image has an alpha component.
                ****/
                ev_bool getHasAlpha() const;

                /***** Does gamma adjustment.
                @note
                Basic algo taken from Titan Engine, copyright (c) 2000 Ignacio 
                Castano Iguado
                ****/
                static void applyGamma( ev_uchar *buffer, Real gamma, ev_size_t size, ev_uchar bpp );

                /*****
                * Get colour value from a certain location in the image. The z coordinate
                * is only valid for cubemaps and volume textures. This uses the first (largest)
                * mipmap.
                ****/
                EarthView::World::Graphic::CColourValue getColourAt(ev_size_t x, ev_size_t y, ev_size_t z) const;

                /*****
                * Set colour value at a certain location in the image. The z coordinate
                * is only valid for cubemaps and volume textures. This uses the first (largest)
                * mipmap.
                ****/
                void setColourAt(EarthView::World::Graphic::CColourValue const &cv, ev_size_t x, ev_size_t y, ev_size_t z);

                /*****
                * Get a EarthView::World::Graphic::CPixelBox encapsulating the image data of a mipmap
                ****/
                EarthView::World::Graphic::CPixelBox getPixelBox(ev_size_t face , ev_size_t mipmap ) const;
                EarthView::World::Graphic::CPixelBox getPixelBox(ev_size_t face) const;
                EarthView::World::Graphic::CPixelBox getPixelBox() const;

                /// Delete all the memory held by this image, if owned by this image (not dynamic)
                void freeMemory();

                enum Filter
                {
                    FILTER_NEAREST,
                    FILTER_LINEAR,
                    FILTER_BILINEAR,
                    FILTER_BOX,
                    FILTER_TRIANGLE,
                    FILTER_BICUBIC
                };
                /***** Scale a 1D, 2D or 3D image volume. 
                @param 	src			EarthView::World::Graphic::CPixelBox containing the source pointer, dimensions and format
                @param 	dst			EarthView::World::Graphic::CPixelBox containing the destination pointer, dimensions and format
                @param 	filter		Which filter to use
                @remarks 	This function can do pixel format conversion in the process.
                @note	dst and src can point to the same EarthView::World::Graphic::CPixelBox object without any problem
                ****/
                static void scale(const EarthView::World::Graphic::CPixelBox &src, const EarthView::World::Graphic::CPixelBox &dst, EarthView::World::Graphic::CImage::Filter filter );
                static void scale(const EarthView::World::Graphic::CPixelBox &src, const EarthView::World::Graphic::CPixelBox &dst);

                /***** Resize a 2D image, applying the appropriate filter. ****/
                void resize(ev_uint16 width, ev_uint16 height, EarthView::World::Graphic::CImage::Filter filter);
                void resize(ev_uint16 width, ev_uint16 height);

                // Static function to calculate size in bytes from the number of mipmaps, faces and the dimensions
                static ev_size_t calculateSize(ev_size_t mipmaps, ev_size_t faces, ev_size_t width, ev_size_t height, ev_size_t depth, EarthView::World::Graphic::PixelFormat format);

                /// Static function to get an image type string from a stream via magic numbers
                static EVString getFileExtFromMagic(EarthView::World::Core::DataStreamPtr stream);

            protected:
                // The width of the image in pixels
                ev_size_t m_uWidth;
                // The height of the image in pixels
                ev_size_t m_uHeight;
                // The depth of the image
                ev_size_t m_uDepth;
                // The size of the image buffer
                ev_size_t m_uSize;
                // The number of mipmaps the image contains
                ev_size_t m_uNumMipmaps;
                // EarthView::World::Graphic::CImage specific flags.
                ev_int32 m_uFlags;

                // The pixel format of the image
                EarthView::World::Graphic::PixelFormat m_eFormat;

                // The number of bytes per pixel
                ev_uchar m_ucPixelSize;
                ev_uchar* m_pBuffer;

                // A ev_bool to determine if we delete the buffer or the calling app does
                ev_bool m_bAutoDelete;
            };


            class EV_GRAPHIC_DLL ImagePtrList : public EarthView::World::Core::CBaseObject
            {
ev_private:
                ImagePtrList(_in EarthView::World::Core::CNameValuePairList* pList){}
ev_private:

                typedef vector<EarthView::World::Graphic::CImage*> InternalList;       
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;

                RESERVE_CONTAINER_FUNCTION_VECTOR(mList);

                iterator insert(iterator pos, EarthView::World::Graphic::CImage* const &ref_t)
                {
                    return mList.insert(pos,ref_t);
                }

            private:
                InternalList mList;

            public:
                ImagePtrList(){}

                void push_back(EarthView::World::Graphic::CImage*  const & ref_t) 
                {
                    mList.push_back(ref_t);
                }

                void pop_back()
                {
                    mList.pop_back();
                }            

                EarthView::World::Graphic::CImage*& front()
                {
                    return mList.front();
                }

                EarthView::World::Graphic::CImage*& back()
                {
                    return mList.back();
                }

                void insert(ev_uint32 pos, EarthView::World::Graphic::CImage* const &ref_t)
                {
                    mList.insert(begin() + pos,ref_t);
                }

                void remove(ev_size_t pos)
                {
                    iterator it = mList.begin();
                    it = it + pos;
                    mList.erase(it);
                }

                ev_bool empty() const
                {
                    return mList.empty();
                }

                EarthView::World::Graphic::CImage*& operator[](ev_size_t n)  {  reference t = mList[n]; return t;}
                EarthView::World::Graphic::CImage* const & operator[](ev_size_t n) const { const_reference t =  mList[n]; return t; }
                EarthView::World::Graphic::CImage*& at(ev_size_t n)  {  reference t = mList[n]; return t;}
                EarthView::World::Graphic::CImage* const & at(ev_size_t n) const { const_reference t =  mList[n]; return t; }

                ev_size_t size() const
                {
                    return mList.size();
                }

                void resize(ev_size_t newSize)
                {
                    mList.resize(newSize);
                }

                void reserve(ev_size_t count)
                {
                    mList.reserve(count);
                }

                void clear()
                {
                    mList.clear();
                }
            };


            class EV_GRAPHIC_DLL ConstImagePtrList : public EarthView::World::Core::CBaseObject
            {
ev_private:
                ConstImagePtrList(_in EarthView::World::Core::CNameValuePairList* pList){}
ev_private:

                typedef vector<const EarthView::World::Graphic::CImage*> InternalList;       
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;

                RESERVE_CONTAINER_FUNCTION(mList);

                iterator insert(iterator pos,const EarthView::World::Graphic::CImage* const &ref_t)
                {
                    return mList.insert(pos,ref_t);
                }

            private:
                InternalList mList;

            public:
                ConstImagePtrList(){}

                void push_back(const EarthView::World::Graphic::CImage* const & ref_t) 
                {
                    mList.push_back(ref_t);
                }

                void pop_back()
                {
                    mList.pop_back();
                }            

                const EarthView::World::Graphic::CImage*& front()
                {
                    return mList.front();
                }

                const EarthView::World::Graphic::CImage*& back()
                {
                    return mList.back();
                }

                void insert(ev_uint32 pos, const EarthView::World::Graphic::CImage* const &ref_t)
                {
                    mList.insert(begin() + pos,ref_t);
                }

                void remove(ev_size_t pos)
                {
                    iterator it = mList.begin();
                    it = it + pos;
                    mList.erase(it);
                }

                ev_bool empty() const
                {
                    return mList.empty();
                }

                const EarthView::World::Graphic::CImage*& operator[](ev_size_t n)  {  reference t = mList[n]; return t;}
                const EarthView::World::Graphic::CImage* const & operator[](ev_size_t n) const { const_reference t =  mList[n]; return t; }
                const EarthView::World::Graphic::CImage*& at(ev_size_t n)  {  reference t = mList[n]; return t;}
                const EarthView::World::Graphic::CImage* const & at(ev_size_t n) const { const_reference t =  mList[n]; return t; }

                ev_size_t size() const
                {
                    return mList.size();
                }

                void resize(ev_size_t newSize)
                {
                    mList.resize(newSize);
                }

                void reserve(ev_size_t count)
                {
                    mList.reserve(count);
                }

                void clear()
                {
                    mList.clear();
                }
            };

        }
    }
}

#endif

