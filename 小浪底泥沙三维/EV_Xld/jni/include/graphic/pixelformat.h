#ifndef _PixelFormat_H__
#define _PixelFormat_H__
#pragma once
#include "graphic/graphic_config.h"
#include "common.h"
#include "colourvalue.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            enum PixelFormat
            {
                //// Unknown pixel format.
                PF_UNKNOWN = 0,
                //// 8-bit pixel format, all bits luminace.
                PF_L8 = 1,
                PF_BYTE_L = PF_L8,
                //// 16-bit pixel format, all bits luminace.
                PF_L16 = 2,
                PF_SHORT_L = PF_L16,
                //// 8-bit pixel format, all bits alpha.
                PF_A8 = 3,
                PF_BYTE_A = PF_A8,
                //// 8-bit pixel format, 4 bits alpha, 4 bits luminance.
                PF_A4L4 = 4,
                //// 2 byte pixel format, 1 byte luminance, 1 byte alpha
                PF_BYTE_LA = 5,
                //// 16-bit pixel format, 5 bits red, 6 bits green, 5 bits blue.
                PF_R5G6B5 = 6,
                //// 16-bit pixel format, 5 bits red, 6 bits green, 5 bits blue.
                PF_B5G6R5 = 7,
                //// 8-bit pixel format, 2 bits blue, 3 bits green, 3 bits red.
                PF_R3G3B2 = 31,
                //// 16-bit pixel format, 4 bits for alpha, red, green and blue.
                PF_A4R4G4B4 = 8,
                //// 16-bit pixel format, 5 bits for blue, green, red and 1 for alpha.
                PF_A1R5G5B5 = 9,
                //// 24-bit pixel format, 8 bits for red, green and blue.
                PF_R8G8B8 = 10,
                //// 24-bit pixel format, 8 bits for blue, green and red.
                PF_B8G8R8 = 11,
                //// 32-bit pixel format, 8 bits for alpha, red, green and blue.
                PF_A8R8G8B8 = 12,
                //// 32-bit pixel format, 8 bits for blue, green, red and alpha.
                PF_A8B8G8R8 = 13,
                //// 32-bit pixel format, 8 bits for blue, green, red and alpha.
                PF_B8G8R8A8 = 14,
                //// 32-bit pixel format, 8 bits for red, green, blue and alpha.
                PF_R8G8B8A8 = 28,
                //// 32-bit pixel format, 8 bits for red, 8 bits for green, 8 bits for blue
                //// like PF_A8R8G8B8, but alpha will get discarded
                PF_X8R8G8B8 = 26,
                //// 32-bit pixel format, 8 bits for blue, 8 bits for green, 8 bits for red
                //// like PF_A8B8G8R8, but alpha will get discarded
                PF_X8B8G8R8 = 27,
#if EV_ENDIAN == EV_ENDIAN_BIG
                //// 3 byte pixel format, 1 byte for red, 1 byte for green, 1 byte for blue
                PF_BYTE_RGB = PF_R8G8B8,
                //// 3 byte pixel format, 1 byte for blue, 1 byte for green, 1 byte for red
                PF_BYTE_BGR = PF_B8G8R8,
                //// 4 byte pixel format, 1 byte for blue, 1 byte for green, 1 byte for red and one byte for alpha
                PF_BYTE_BGRA = PF_B8G8R8A8,
                //// 4 byte pixel format, 1 byte for red, 1 byte for green, 1 byte for blue, and one byte for alpha
                PF_BYTE_RGBA = PF_R8G8B8A8,
#else
                //// 3 byte pixel format, 1 byte for red, 1 byte for green, 1 byte for blue
                PF_BYTE_RGB = PF_B8G8R8,
                //// 3 byte pixel format, 1 byte for blue, 1 byte for green, 1 byte for red
                PF_BYTE_BGR = PF_R8G8B8,
                //// 4 byte pixel format, 1 byte for blue, 1 byte for green, 1 byte for red and one byte for alpha
                PF_BYTE_BGRA = PF_A8R8G8B8,
                //// 4 byte pixel format, 1 byte for red, 1 byte for green, 1 byte for blue, and one byte for alpha
                PF_BYTE_RGBA = PF_A8B8G8R8,
#endif
                //// 32-bit pixel format, 2 bits for alpha, 10 bits for red, green and blue.
                PF_A2R10G10B10 = 15,
                //// 32-bit pixel format, 10 bits for blue, green and red, 2 bits for alpha.
                PF_A2B10G10R10 = 16,
                //// DDS (DirectDraw Surface) DXT1 format
                PF_DXT1 = 17,
                //// DDS (DirectDraw Surface) DXT2 format
                PF_DXT2 = 18,
                //// DDS (DirectDraw Surface) DXT3 format
                PF_DXT3 = 19,
                //// DDS (DirectDraw Surface) DXT4 format
                PF_DXT4 = 20,
                //// DDS (DirectDraw Surface) DXT5 format
                PF_DXT5 = 21,
                /// 16-bit pixel format, 16 bits (ev_real32) for red
                PF_FLOAT16_R = 32,
                /// 48-bit pixel format, 16 bits (ev_real32) for red, 16 bits (ev_real32) for green, 16 bits (ev_real32) for blue
                PF_FLOAT16_RGB = 22,
                /// 64-bit pixel format, 16 bits (ev_real32) for red, 16 bits (ev_real32) for green, 16 bits (ev_real32) for blue, 16 bits (ev_real32) for alpha
                PF_FLOAT16_RGBA = 23,
                /// 32-bit pixel format, 32 bits (ev_real32) for red
                PF_FLOAT32_R = 33,
                /// 96-bit pixel format, 32 bits (ev_real32) for red, 32 bits (ev_real32) for green, 32 bits (ev_real32) for blue
                PF_FLOAT32_RGB = 24,
                /// 128-bit pixel format, 32 bits (ev_real32) for red, 32 bits (ev_real32) for green, 32 bits (ev_real32) for blue, 32 bits (ev_real32) for alpha
                PF_FLOAT32_RGBA = 25,
                /// 32-bit, 2-channel s10e5 floating point pixel format, 16-bit green, 16-bit red
                PF_FLOAT16_GR = 35,
                /// 64-bit, 2-channel floating point pixel format, 32-bit green, 32-bit red
                PF_FLOAT32_GR = 36,
                /// Depth texture format
                PF_DEPTH = 29,
                /// 64-bit pixel format, 16 bits for red, green, blue and alpha
                PF_SHORT_RGBA = 30,
                /// 32-bit pixel format, 16-bit green, 16-bit red
                PF_SHORT_GR = 34,
                /// 48-bit pixel format, 16 bits for red, green and blue
                PF_SHORT_RGB = 37,
                //// PVRTC (PowerVR) RGB 2 bpp
                PF_PVRTC_RGB2 = 38,
                //// PVRTC (PowerVR) RGBA 2 bpp
                PF_PVRTC_RGBA2 = 39,
                //// PVRTC (PowerVR) RGB 4 bpp
                PF_PVRTC_RGB4 = 40,
                //// PVRTC (PowerVR) RGBA 4 bpp
                PF_PVRTC_RGBA4 = 41,
                //// 8-bit pixel format, all bits red.
                PF_R8 = 42,
                //// 16-bit pixel format, 8 bits red, 8 bits green.
                PF_RG8 = 43,
				PF_ETC1_RGB8 = 44,
                /// Number of pixel formats currently defined
                PF_COUNT = 45
            };
            ///typedef vector<EarthView::World::Graphic::PixelFormat> PixelFormatList;
            /// <summary>
            /// 像素格式容器类
            /// 管理各类的像素格式
            /// </summary>
            class EV_GRAPHIC_DLL PixelFormatList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef vector<EarthView::World::Graphic::PixelFormat> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION_VECTOR(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                /// <summary>
                /// 插入元素
                /// </summary>
                /// <param name="pos">插入元素的位置</param>
                /// <param name="t">插入的元素</param>
                /// <returns>返回插入元素位置索引</returns>
                iterator insert(_in iterator pos, _in EarthView::World::Graphic::PixelFormat const &t);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                PixelFormatList(_in EarthView::World::Core::CNameValuePairList *pList);
            private:
                InternalList mList;
            public:
                /// <summary>
                /// 默认的构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                PixelFormatList();
                /// <summary>
                /// 在容器后面追加对象
                /// </summary>
                /// <param name="t">需要追加的对象</param>
                /// <returns></returns>
                void push_back(_in EarthView::World::Graphic::PixelFormat const &t);
                /// <summary>
                /// 从容器后面取出对象
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void pop_back();

                /// <summary>
                /// 检查发生变化的第一个元素
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回第一个元素</returns>
                EarthView::World::Graphic::PixelFormat &front();
                /// <summary>
                /// 检查发生变化的最后一个元素
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回最后一个元素</returns>
                EarthView::World::Graphic::PixelFormat &back();
                /// <summary>
                /// 插入元素
                /// </summary>
                /// <param name="pos">插入元素的位置</param>
                /// <param name="t">插入的元素</param>
                /// <returns></returns>
                void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::PixelFormat const &t);
                /// <summary>
                /// 移除元素
                /// </summary>
                /// <param name="pos">需要移除元素的位置</param>
                /// <returns></returns>
                void remove(_in ev_size_t pos);
                /// <summary>
                /// 判断容器是否为空
                /// </summary>
                /// <param name=""></param>
                /// <returns>容器为空返回true，否则false</returns>
                ev_bool empty() const;
                /// <summary>
                /// 数组下标"[]"重载
                /// </summary>
                /// <param name="n">下标</param>
                /// <returns>返回对应下标的数组中的值</returns>
                EarthView::World::Graphic::PixelFormat &operator[](_in ev_size_t n);
                /// <summary>
                /// 数组下标"[]"重载
                /// </summary>
                /// <param name="n">下标</param>
                /// <returns>返回对应下标的数组中的值</returns>
                EarthView::World::Graphic::PixelFormat const &operator[](_in ev_size_t n) const;
                /// <summary>
                /// 检查发生变化的下标
                /// </summary>
                /// <param name="n">下标</param>
                /// <returns>返回对应下标的位置</returns>
                EarthView::World::Graphic::PixelFormat &at(_in ev_size_t n);
                /// <summary>
                /// 检查没有变化的下标
                /// </summary>
                /// <param name="n">下标</param>
                /// <returns>返回对应下标的位置</returns>
                EarthView::World::Graphic::PixelFormat const &at(_in ev_size_t n) const;
                /// <summary>
                /// 得到该容器类的空间大小
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回空间的大小</returns>
                ev_size_t size() const;
                /// <summary>
                /// 调整容器的大小
                /// </summary>
                /// <param name="newSize">调整的大小</param>
                /// <returns></returns>
                void resize(_in ev_size_t newSize);
                /// <summary>
                /// 检查容器预留的空间
                /// </summary>
                /// <param name="count">预留给容器的空间大小</param>
                /// <returns></returns>
                void reserve(_in ev_size_t count);
                /// <summary>
                /// 清空容器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clear();
            };

            enum PixelFormatFlags
            {
                /// This format has an alpha channel
                PFF_HASALPHA        = 1,			///0x00000001,
                /// This format is compressed. This invalidates the values in elemBytes,
                /// elemBits and the bit counts as these might not be fixed in a compressed format.
                PFF_COMPRESSED      = 2,			///0x00000002,
                /// This is a floating point format
                PFF_FLOAT           = 4,			///0x00000004,
                /// This is a depth format (for depth textures)
                PFF_DEPTH           = 8,			///0x00000008,
                /// Format is in native endian. Generally true for the 16, 24 and 32 bits
                /// formats which can be represented as machine integers.
                PFF_NATIVEENDIAN    = 16,			///0x00000010,
                /// This is an intensity format instead of a RGB one. The luminance
                /// replaces R,G and B. (but not A)
                PFF_LUMINANCE       = 32 			///0x00000020
            };

            enum PixelComponentType
            {
                PCT_BYTE = 0,    			//// Byte per component (8 bit fixed 0.0..1.0)
                PCT_SHORT = 1,   			//// Short per component (16 bit fixed 0.0..1.0))
                PCT_FLOAT16 = 2, 			//// 16 bit ev_real32 per component
                PCT_FLOAT32 = 3, 			//// 32 bit ev_real32 per component
                PCT_COUNT = 4    			//// Number of pixel types
            };

            /// <summary>
            /// 像素盒子类
            /// 描述在存储器中线、面、体像素的存储
            /// </summary>
            class EV_GRAPHIC_DLL CPixelBox: public EarthView::World::Graphic::Box
            {
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CPixelBox();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CPixelBox();
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="extents">数据层的范围</param>
                /// <param name="pixelFormat">缓冲器的格式</param>
                /// <returns></returns>
                CPixelBox(_in const Box &extents, _in EarthView::World::Graphic::PixelFormat pixelFormat);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="extents">数据层的范围</param>
                /// <param name="pixelFormat">缓冲器的格式</param>
                /// <param name="pixelData">指向目前数据的指针</param>
                /// <returns></returns>
                CPixelBox(_in const Box &extents, _in EarthView::World::Graphic::PixelFormat pixelFormat, _in void *pixelData);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="width">区域的宽度</param>
                /// <param name="height">区域的高度</param>
                /// <param name="depth">区域的深度</param>
                /// <param name="pixelFormat">缓冲器的格式</param>
                /// <returns></returns>
                CPixelBox(_in ev_size_t width, _in ev_size_t height, _in ev_size_t depth, _in EarthView::World::Graphic::PixelFormat pixelFormat);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="width">区域的宽度</param>
                /// <param name="height">区域的高度</param>
                /// <param name="depth">区域的深度</param>
                /// <param name="pixelFormat">缓冲器的格式</param>
                /// <param name="pixelData">指向目前数据的指针</param>
                /// <returns></returns>
                CPixelBox(_in ev_size_t width, _in ev_size_t height, _in ev_size_t depth, _in EarthView::World::Graphic::PixelFormat pixelFormat, _in void *pixelData);

            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CPixelBox( _in EarthView::World::Core::CNameValuePairList *pList );
            public:
                //// The data pointer
                void *data;
                //// The pixel format
                EarthView::World::Graphic::PixelFormat format;
                ev_size_t rowPitch;
                ev_size_t slicePitch;
                /// <summary>
                /// 设置行间隔和各个部分的间隔，使得缓冲器能够连续的展开
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void setConsecutive();
                /// <summary>
                /// 得到一行最右边的像素到下一行最左边的像素之间的元素
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回元素个数</returns>
                ev_size_t getRowSkip() const;
                /// <summary>
                /// 得到一部分的最右边顶部到下一部分的最左边的顶部之间的元素
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回元素个数</returns>
                ev_size_t getSliceSkip() const;
                /// <summary>
                /// 判断这个缓冲期在存储器里是否是连续展开
                /// </summary>
                /// <param name=""></param>
                /// <returns>可以展开则返回true，否则返回false</returns>
                ev_bool isConsecutive() const;
                /// <summary>
                /// 得到这个图像在存储器中展开的大小（以字节作为单位）
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回展开的大小（以字节作为单位）</returns>
                ev_size_t getConsecutiveSize() const;
                /// <summary>
                /// 得到像素盒子子程序
                /// </summary>
                /// <param name="def">子程序区域的边界</param>
                /// <returns>返回EarthView::World::Graphic::CPixelBox类的对象</returns>
                EarthView::World::Graphic::CPixelBox getSubVolume(_in const Box &def) const;

                /// <summary>
                /// 得到在像素盒子中确定区域的颜色值
                /// </summary>
                /// <param name="x">x轴值</param>
                /// <param name="y">y轴值</param>
                /// <param name="z">z轴值</param>
                /// <returns>返回EarthView::World::Graphic::CColourValue类的对象</returns>
                EarthView::World::Graphic::CColourValue getColourAt(_in ev_size_t x, _in ev_size_t y, _in ev_size_t z);
                /// <summary>
                /// 设置在像素盒子中确定区域的颜色值
                /// </summary>
                /// <param name="cv">EarthView::World::Graphic::CColourValue的对象</param>
                /// <param name="x">x轴值</param>
                /// <param name="y">y轴值</param>
                /// <param name="z">z轴值</param>
                /// <returns></returns>
                void setColourAt(_in EarthView::World::Graphic::CColourValue const &cv, _in ev_size_t x, _in ev_size_t y, _in ev_size_t z);
            };

            /// <summary>
            /// 像素功能类
            /// 包装和解包像素数据
            /// </summary>
            class EV_GRAPHIC_DLL CPixelUtil : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CPixelUtil( _in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CPixelUtil();
                /// <summary>
                /// 得到一个有给定像素格式的元素所占字节大小
                /// </summary>
                /// <param name="format">像素格式</param>
                /// <returns>返回字节大小</returns>
                static ev_size_t getNumElemBytes(_in EarthView::World::Graphic::PixelFormat format );
                /// <summary>
                /// 得到一个有给定像素格式的元素所占比特大小
                /// </summary>
                /// <param name="format">像素格式</param>
                /// <returns>返回比特大小</returns>
                static ev_size_t getNumElemBits(_in EarthView::World::Graphic::PixelFormat format );
                /// <summary>
                /// 得到一个有给定范围和像素格式的区域在存储器里展开所占大小
                /// </summary>
                /// <param name="width">区域的宽度</param>
                /// <param name="height">区域的高度</param>
                /// <param name="depth">区域的深度</param>
                /// <param name="format">给定像素的格式</param>
                /// <returns>所占存储器大小</returns>
                static ev_size_t getMemorySize(_in ev_size_t width, _in ev_size_t height, _in ev_size_t depth, _in EarthView::World::Graphic::PixelFormat format);
                /// <summary>
                /// 得到像素格式的特殊标记
                /// </summary>
                /// <param name="format">像素格式</param>
                /// <returns>对应的标记</returns>
                static ev_uint32 getFlags(_in EarthView::World::Graphic::PixelFormat format );
                /// <summary>
                /// 判断该格式是否具有alpha成分（透明度）
                /// </summary>
                /// <param name="format">像素格式</param>
                /// <returns>有这个成分就返回true，否则返回false</returns>
                static ev_bool hasAlpha(_in EarthView::World::Graphic::PixelFormat format);
                /// <summary>
                /// 判断该格式是否是浮点的
                /// </summary>
                /// <param name="format">像素格式</param>
                /// <returns>是浮点的就返回true，否则返回false</returns>
                static ev_bool isFloatingPoint(_in EarthView::World::Graphic::PixelFormat format);
                /// <summary>
                /// 判断该格式是否被压缩
                /// </summary>
                /// <param name="format">像素格式</param>
                /// <returns>被压缩就返回true，否则返回false</returns>
                static ev_bool isCompressed(_in EarthView::World::Graphic::PixelFormat format);
                /// <summary>
                /// 判断该格式是否是具有深度的格式（针对具有深度的纹理）
                /// </summary>
                /// <param name="format">像素格式</param>
                /// <returns>又具有深度的格式就返回true，否则返回false</returns>
                static ev_bool isDepth(_in EarthView::World::Graphic::PixelFormat format);
                /// <summary>
                /// 判断该格式是否是按字节存储次序的格式
                /// </summary>
                /// <param name="format">像素格式</param>
                /// <returns>是就返回true，否则返回false</returns>
                static ev_bool isNativeEndian(_in EarthView::World::Graphic::PixelFormat format);

                /// <summary>
                /// 判断该格式是否是亮度格式
                /// </summary>
                /// <param name="format">像素格式</param>
                /// <returns>是就返回true，否则返回false</returns>
                static ev_bool isLuminance(_in EarthView::World::Graphic::PixelFormat format);

                /// <summary>
                /// 判断对于图像的格式，图像的某个范围是否有效
                /// </summary>
                /// <param name="width">区域范围的宽度</param>
                /// <param name="height">区域范围的高度</param>
                /// <param name="depth">区域范围的深度</param>
                /// <param name="format">像素格式</param>
                /// <returns>有效就返回true，否则返回false</returns>
                static ev_bool isValidExtent(_in ev_size_t width, _in ev_size_t height, _in ev_size_t depth, _in EarthView::World::Graphic::PixelFormat format);
                /// <summary>
                /// 给一个格式设定位数
                /// </summary>
                /// <param name="format">像素格式</param>
                /// <param name="rgba[4]">存放对应的位数值的数组</param>
                /// <returns></returns>
                static void getBitDepths(_in EarthView::World::Graphic::PixelFormat format, _in ev_int32 rgba[4]);
                /// <summary>
                /// 隐藏颜色值R、G、B、A（用于打包和解包）
                /// </summary>
                /// <param name="format">像素格式</param>
                /// <param name="rgba[4]">存放对应的隐藏值的数组</param>
                /// <returns></returns>
                static void getBitMasks(_in EarthView::World::Graphic::PixelFormat format, _in ev_uint32 rgba[4]);
                /// <summary>
                /// 转换颜色值R、G、B、A（用于打包和解包）
                /// </summary>
                /// <param name="format">像素格式</param>
                /// <param name="rgba[4]">存放对应的转换值的数组</param>
                /// <returns></returns>
                static void getBitShifts(_in EarthView::World::Graphic::PixelFormat format, _in ev_uchar rgba[4]);
                /// <summary>
                /// 得到图像的格式
                /// </summary>
                /// <param name="srcformat">图像格式</param>
                /// <returns>返回格式名称</returns>
                static EVString getFormatName(_in EarthView::World::Graphic::PixelFormat srcformat);
                /// <summary>
                /// 判断这种格式能否使用打包函数和解包函数（通常情况下压缩和深度格式是不能使用的，只有固定格式才能使用）
                /// </summary>
                /// <param name="format">对应的格式</param>
                /// <returns>能够使用则返回true，否则返回false</returns>
                static ev_bool isAccessible(_in EarthView::World::Graphic::PixelFormat srcformat);

                /// <summary>
                /// 一个像素格式的构成类型
                /// </summary>
                /// <param name="fmt">像素格式</param>
                /// <returns>返回像素组成类型</returns>
                static EarthView::World::Graphic::PixelComponentType getComponentType(_in EarthView::World::Graphic::PixelFormat fmt);

                /// <summary>
                /// 一个像素格式的构成个数
                /// </summary>
                /// <param name="fmt">像素格式</param>
                /// <returns>返回对应的个数</returns>
                static ev_size_t getComponentCount(_in EarthView::World::Graphic::PixelFormat fmt);
                /// <summary>
                /// 根据给定的名字得到格式
                /// </summary>
                /// <param name="name">名字</param>
                /// <returns>返回像素格式</returns>
                static EarthView::World::Graphic::PixelFormat getFormatFromName(_in const EVString &name);
                /// <summary>
                /// 根据给定的名字得到格式
                /// </summary>
                /// <param name="name">名字</param>
                /// <param name="accessibleOnly">如果为true，则不能取到的格式都将被视为无效格式，否则所有格式有效</param>
                /// <returns>返回像素格式</returns>
                static EarthView::World::Graphic::PixelFormat getFormatFromName(_in const EVString &name, _in ev_bool accessibleOnly);
                /// <summary>
                /// 根据给定的名字得到格式
                /// </summary>
                /// <param name="name">名字</param>
                /// <param name="accessibleOnly">如果为true，则不能取到的格式都将被视为无效格式，否则所有格式有效</param>
                /// <param name="caseSensitive">名字是否有效（名字在像素格式枚举中是否存在）</param>
                /// <returns>返回像素格式</returns>
                static EarthView::World::Graphic::PixelFormat getFormatFromName(_in const EVString &name, _in ev_bool accessibleOnly, _in ev_bool caseSensitive);
                /// <summary>
                /// 得到对格式的BNF表达（BNF：巴科斯范式，用形式化的符号来描述给定的语言语法，是描述计算机语言语法的符号集）
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回像素格式</returns>
                static EVString getBNFExpressionOfPixelFormats();
                /// <summary>
                /// 得到对格式的BNF表达（BNF：巴科斯范式，用形式化的符号来描述给定的语言语法，是描述计算机语言语法的符号集）
                /// </summary>
                /// <param name="accessibleOnly">如果为true，则只有能取到的格式会被考虑，否则所有在枚举中的格式都会被考虑</param>
                /// <returns>返回像素格式</returns>
                static EVString getBNFExpressionOfPixelFormats(_in ev_bool accessibleOnly);
                /// <summary>
                /// 根据给定比特深度来找到相似的格式
                /// </summary>
                /// <param name="fmt">最初的格式</param>
                /// <param name="integerBits">整型像素格式的首选比特深度</param>
                /// <param name="floatBits">浮点型像素格式的首选比特深度</param>
                /// <returns>像素的格式</returns>
                static EarthView::World::Graphic::PixelFormat getFormatForBitDepths(_inout EarthView::World::Graphic::PixelFormat fmt, _in ev_uint16 integerBits, _in ev_uint16 floatBits);
                /// <summary>
                /// 将颜色打包到存储器中
                /// </summary>
                /// <param name="colour">颜色值，EarthView::World::Graphic::CColourValue类的对象</param>
                /// <param name="pf">用何种像素格式来描述颜色值</param>
                /// <param name="dest">目标存储器的位置</param>
                /// <returns></returns>
                static void packColour(_in const EarthView::World::Graphic::CColourValue &colour, _in const EarthView::World::Graphic::PixelFormat pf, _in void *dest);
                /// <summary>
                /// 将颜色打包到存储器中
                /// </summary>
                /// <param name="r">红色值</param>
                /// <param name="g">绿色值</param>
                /// <param name="b">蓝色值</param>
                /// <param name="a">透明值</param>
                /// <param name="pf">用何种像素格式来描述颜色值</param>
                /// <param name="dest">目标存储器的位置</param>
                /// <returns></returns>
                static void packColour(_in const ev_uint8 r, _in const ev_uint8 g, _in const ev_uint8 b, _in const ev_uint8 a, _in const EarthView::World::Graphic::PixelFormat pf, _in void *dest);
                /// <summary>
                /// 将颜色打包到存储器中
                /// </summary>
                /// <param name="r">红色值（范围在0.0f到1.0f之间）</param>
                /// <param name="g">绿色值（范围在0.0f到1.0f之间）</param>
                /// <param name="b">蓝色值（范围在0.0f到1.0f之间）</param>
                /// <param name="a">透明值（范围在0.0f到1.0f之间）</param>
                /// <param name="pf">用何种像素格式来描述颜色值</param>
                /// <param name="dest">目标存储器的位置</param>
                /// <returns></returns>
                static void packColour(_in const ev_real32 r, _in const ev_real32 g, _in const ev_real32 b, _in const ev_real32 a, _in const EarthView::World::Graphic::PixelFormat pf, _in void *dest);
                /// <summary>
                /// 从存储器中解包颜色值
                /// </summary>
                /// <param name="colour">颜色值，EarthView::World::Graphic::CColourValue类的对象</param>
                /// <param name="pf">用何种像素格式来描述颜色值</param>
                /// <param name="src">存放颜色值存储器的位置</param>
                /// <returns></returns>
                static void unpackColour(_out EarthView::World::Graphic::CColourValue &colour, _in EarthView::World::Graphic::PixelFormat pf, _in const void *src);
                /// <summary>
                /// 从存储器中解包颜色值
                /// </summary>
                /// <param name="r">红色值</param>
                /// <param name="g">绿色值</param>
                /// <param name="b">蓝色值</param>
                /// <param name="a">透明值</param>
                /// <param name="pf">用何种像素格式来描述颜色值</param>
                /// <param name="src">存放颜色值存储器的位置</param>
                /// <returns></returns>
                static void unpackColour(_out ev_uint8 &r, _out ev_uint8 &g, _out ev_uint8 &b, _out ev_uint8 &a, _in EarthView::World::Graphic::PixelFormat pf, _in const void *src);

                ///ev_private:
                /// <summary>
                /// 从存储器中解包颜色值
                /// </summary>
                /// <param name="r">红色值（值是浮点型的）</param>
                /// <param name="g">绿色值（值是浮点型的）</param>
                /// <param name="b">蓝色值（值是浮点型的）</param>
                /// <param name="a">透明值（值是浮点型的）</param>
                /// <param name="pf">用何种像素格式来描述颜色值</param>
                /// <param name="src">存放颜色值存储器的位置</param>
                /// <returns></returns>
                static void unpackColour(_out ev_real32 &r, _out ev_real32 &g, _out ev_real32 &b, _out ev_real32 &a, _in EarthView::World::Graphic::PixelFormat pf, _in const void *src);

            public:
                /// <summary>
                /// 将连续的像素从一个格式转换到另一个格式
                /// </summary>
                /// <param name="src">指向原来区域的指针</param>
                /// <param name="srcFormat">原来区域的格式</param>
                /// <param name="dest">指向目标区域的指针</param>
                /// <param name="dstFormat">目标区域的格式</param>
                /// <param name="count">宽度值</param>
                /// <returns></returns>
                static void bulkPixelConversion(_in void *src, _in EarthView::World::Graphic::PixelFormat srcFormat, _in void *dest, _in EarthView::World::Graphic::PixelFormat dstFormat, _in ev_uint32 count);
                /// <summary>
                /// 将连续的像素从一个格式转换到另一个格式
                /// </summary>
                /// <param name="src">像素盒子类，包含原来区域的像素，位置，格式</param>
                /// <param name="dst">像素盒子类，包含目标区域的像素，位置，格式</param>
                /// <returns></returns>
                static void bulkPixelConversion(_in const EarthView::World::Graphic::CPixelBox &src, _in const EarthView::World::Graphic::CPixelBox &dst);
            };
        }
    }
}

#endif

