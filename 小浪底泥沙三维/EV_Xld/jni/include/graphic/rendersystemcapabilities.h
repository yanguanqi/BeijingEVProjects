#ifndef __RenderSystemCapabilities__
#define __RenderSystemCapabilities__
#include "graphic/graphic_config.h"
#include <mathengine/ev_math.h>
#include <core/stringvector.h>
///// Because there are more than 32 possible EarthView::World::Graphic::Capabilities, more than 1 ev_int32 is needed to store them all.
///// In fact, an array of integers is used to store capabilities. However all the capabilities are defined in the single
///// enum. The only way to know which capabilities should be stored where in the array is to use some of the 32 bits
///// to record the category of the capability.  These top few bits are used as an index into mCapabilities array
///// The lower bits are used to identify each capability individually by setting 1 bit for each
///// Identifies how many bits are reserved for categories
///// NOTE: Although 4 bits (currently) are enough
#define CAPS_CATEGORY_SIZE 4
#define EV_CAPS_BITSHIFT (32 - CAPS_CATEGORY_SIZE)
#define CAPS_CATEGORY_MASK (((1 << CAPS_CATEGORY_SIZE) - 1) << EV_CAPS_BITSHIFT)
#define EV_CAPS_VALUE(cat, val) ((cat << EV_CAPS_BITSHIFT) | (1 << val))
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            class CLogger;
        }
    }
}

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CFixedPoint;
			}
		}
	}
}

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {


            ///枚举了性能的种类
            enum CapabilitiesCategory
            {
                CAPS_CATEGORY_COMMON = 0,
                CAPS_CATEGORY_COMMON_2 = 1,
                CAPS_CATEGORY_D3D9 = 2,
                CAPS_CATEGORY_GL = 3,
                //// Placeholder for max value
                CAPS_CATEGORY_COUNT = 4
            };
            ///描述了我们想要检查的不同硬件的性能
            ///EV_CAPS_VALUE(a, b)定义每一种性能
            ///a 是种类（从0到15）
            ///b 是值（从0到27）
            enum Capabilities
            {
                //// Supports generating mipmaps in hardware
                RSC_AUTOMIPMAP              = 1,			///((0 << 28 ) | (1 <<  0)),
                RSC_BLENDING                = 2,			///((0 << 28 ) | (1 <<  1)),
                //// Supports anisotropic texture filtering
                RSC_ANISOTROPY              = 4,			///((0 << 28 ) | (1 <<  2)),
                //// Supports fixed-function DOT3 texture blend
                RSC_DOT3                    = 8,			///((0 << 28 ) | (1 <<  3)),
                //// Supports cube mapping
                RSC_CUBEMAPPING             = 16,			///((0 << 28 ) | (1 <<  4)),
                //// Supports hardware stencil buffer
                RSC_HWSTENCIL               = 32,			///((0 << 28 ) | (1 <<  5)),
                //// Supports hardware vertex and index buffers
                RSC_VBO                     = 128,			///((0 << 28 ) | (1 <<  7)),
                //// Supports vertex programs (vertex shaders)
                RSC_VERTEX_PROGRAM          = 512,			///((0 << 28 ) | (1 <<  9)),
                //// Supports fragment programs (pixel shaders)
                RSC_FRAGMENT_PROGRAM        = 1024,			///((0 << 28 ) | (1 <<  10)),
                //// Supports performing a scissor test to exclude areas of the screen
                RSC_SCISSOR_TEST            = 2048,			///((0 << 28 ) | (1 <<  11)),
                //// Supports separate stencil updates for both front and back faces
                RSC_TWO_SIDED_STENCIL       = 4096,			///((0 << 28 ) | (1 <<  12)),
                //// Supports wrapping the stencil value at the range extremeties
                RSC_STENCIL_WRAP            = 8192,			///((0 << 28 ) | (1 <<  13)),
                //// Supports hardware occlusion queries
                RSC_HWOCCLUSION             = 16384,			///((0 << 28 ) | (1 <<  14)),
                //// Supports user clipping planes
                RSC_USER_CLIP_PLANES        = 32768,			///((0 << 28 ) | (1 <<  15)),
                //// Supports the VET_UBYTE4 vertex element type
                RSC_VERTEX_FORMAT_UBYTE4    = 65536,			///((0 << 28 ) | (1 <<  16)),
                //// Supports infinite far plane projection
                RSC_INFINITE_FAR_PLANE      = 131072,			///((0 << 28 ) | (1 <<  17)),
                //// Supports hardware render-to-texture (bigger than framebuffer)
                RSC_HWRENDER_TO_TEXTURE     = 262144,			///((0 << 28 ) | (1 <<  18)),
                //// Supports ev_real32 textures and render targets
                RSC_TEXTURE_FLOAT           = 524288,			///((0 << 28 ) | (1 <<  19)),
                //// Supports non-power of two textures
                RSC_NON_POWER_OF_2_TEXTURES = 1048576,			///((0 << 28 ) | (1 <<  20)),
                //// Supports 3d (volume) textures
                RSC_TEXTURE_3D              = 2097152,			///((0 << 28 ) | (1 <<  21)),
                //// Supports basic point sprite rendering
                RSC_POINT_SPRITES           = 4194304,			///((0 << 28 ) | (1 <<  22)),
                //// Supports extra point parameters (minsize, maxsize, attenuation)
                RSC_POINT_EXTENDED_PARAMETERS = 8388608,			///((0 << 28 ) | (1 <<  23)),
                //// Supports vertex texture fetch
                RSC_VERTEX_TEXTURE_FETCH = 16777216,			///((0 << 28 ) | (1 <<  24)),
                //// Supports mipmap LOD biasing
                RSC_MIPMAP_LOD_BIAS = 33554432,			///((0 << 28 ) | (1 <<  25)),
                //// Supports hardware geometry programs
                RSC_GEOMETRY_PROGRAM = 67108864,			///((0 << 28 ) | (1 <<  26)),
                //// Supports rendering to vertex buffers
                RSC_HWRENDER_TO_VERTEX_BUFFER = 134217728,			///((0 << 28 ) | (1 <<  27)),
                //// Supports compressed textures
                RSC_TEXTURE_COMPRESSION = 268435457,			///((1 << 28) | (1 << 0)),
                //// Supports compressed textures in the DXT/ST3C formats
                RSC_TEXTURE_COMPRESSION_DXT = 268435458,			///((1 << 28) | (1 << 1)),
                //// Supports compressed textures in the VTC format
                RSC_TEXTURE_COMPRESSION_VTC = 268435460,			///((1 << 28) | (1 << 2)),
                //// Supports compressed textures in the PVRTC format
                RSC_TEXTURE_COMPRESSION_PVRTC = 268435464,			///((1 << 28) | (1 << 3)),
                //// Supports fixed-function pipeline
                RSC_FIXED_FUNCTION = 268435472,			///((1 << 28) | (1 << 4)),
                //// Supports MRTs with different bit depths
                RSC_MRT_DIFFERENT_BIT_DEPTHS = 268435488,			///((1 << 28) | (1 << 5)),
                //// Supports Alpha to Coverage (A2C)
                RSC_ALPHA_TO_COVERAGE = 268435520,			///((1 << 28) | (1 << 6)),
                //// Supports Blending operations other than +
                RSC_ADVANCED_BLEND_OPERATIONS = 268435584,			///((1 << 28) | (1 << 7)),
                //// Supports a separate depth buffer for RTTs. D3D 9 & 10, OGL w/FBO (RSC_FBO implies this flag)
                RSC_RTT_SEPARATE_DEPTHBUFFER = 268435712,			///((1 << 28) | (1 << 8)),
                //// (undefined behavior?), OGL w/ copy supports it
                RSC_RTT_MAIN_DEPTHBUFFER_ATTACHABLE = 268435968,			///((1 << 28) | (1 << 9)),
                //// Supports attaching a depth buffer to an RTT that has width & height less or equal than RTT's.
                //// Otherwise must be of _exact_ same resolution. D3D 9, OGL 3.0 (not 2.0, not D3D10)
                RSC_RTT_DEPTHBUFFER_RESOLUTION_LESSEQUAL = 268436480,			///((1 << 28) | (1 << 10)),
                RSC_VERTEX_BUFFER_INSTANCE_DATA = 268437504,			///((1 << 28) | (1 << 11)),
                RSC_CAN_GET_COMPILED_SHADER_BUFFER = 268439552,			///((1 << 28) | (1 << 12)),
                /// ***** DirectX specific caps *****
                //// Is DirectX feature "per stage constants" supported
                RSC_PERSTAGECONSTANT = 536870913,			///((2 << 28) | (1 << 0)),
                /// ***** GL Specific Caps *****
                //// Supports openGL GLEW version 1.5
                RSC_GL1_5_NOVBO    = 805306370,			///((3 << 28) | (1 << 1)),
                //// Support for Frame Buffer Objects (FBOs)
                RSC_FBO              = 805306372,			///((3 << 28) | (1 << 2)),
                //// Support for Frame Buffer Objects ARB implementation (regular FBO is higher precedence)
                RSC_FBO_ARB          = 805306376,			///((3 << 28) | (1 << 3)),
                //// Support for Frame Buffer Objects ATI implementation (ARB FBO is higher precedence)
                RSC_FBO_ATI          = 805306384,			///((3 << 28) | (1 << 4)),
                //// Support for PBuffer
                RSC_PBUFFER          = 805306400,			///((3 << 28) | (1 << 5)),
                //// Support for GL 1.5 but without HW occlusion workaround
                RSC_GL1_5_NOHWOCCLUSION = 805306432,			///((3 << 28) | (1 << 6)),
                //// Support for point parameters ARB implementation
                RSC_POINT_EXTENDED_PARAMETERS_ARB = 805306496,			///((3 << 28) | (1 << 7)),
                //// Support for point parameters EXT implementation
                RSC_POINT_EXTENDED_PARAMETERS_EXT = 805306624,			///((3 << 28) | (1 << 8)),
                //// Support for Separate Shader Objects
                RSC_SEPARATE_SHADER_OBJECTS = 805306880,			///((3 << 28) | (1 << 9)),
            };
            /// <summary>
            /// RenderSystemCapabilities、OPENGL和D3D9使用的驱动版本
            ///存储目前GPU驱动的版本
            /// </summary>
            class EV_GRAPHIC_DLL DriverVersion : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                DriverVersion(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                ev_int32 major;
                ev_int32 minor;
                ev_int32 release;
                ev_int32 build;
                DriverVersion();
                EVString toString() const;
                void fromString(const EVString &versionString);
            };
            /** Enumeration of GPU vendors. */
            enum GPUVendor
            {
                GPU_UNKNOWN = 0,
                GPU_NVIDIA = 1,
                GPU_ATI = 2,
                GPU_INTEL = 3,
                GPU_S3 = 4,
                GPU_MATROX = 5,
                GPU_3DLABS = 6,
                GPU_SIS = 7,
                GPU_IMAGINATION_TECHNOLOGIES = 8,
                GPU_APPLE = 9,  			/// Apple Software Renderer
                GPU_NOKIA = 10,
                GPU_MS_SOFTWARE = 11, 			/// Microsoft software device
                GPU_MS_WARP = 12, 			/// Microsoft WARP (Windows Advanced Rasterization Platform) software device - http://msdn.microsoft.com/en-us/library/dd285359.aspx
                //// Cplaceholder
                GPU_VENDOR_COUNT = 13
            };

            class EV_GRAPHIC_DLL ShaderProfiles : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                ShaderProfiles(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ShaderProfiles();
                /// <summary>
                /// 在map容器中添加元素
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>成功增加true，否则false</returns>
                ev_bool push(const EVString &key);
                /// <summary>
                /// 判断元素是否存在
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>存在true，否则false</returns>
                ev_bool exist(const EVString &key);
                /// <summary>
                /// 删除元素
                /// </summary>
                /// <param name="key">键</param>
                /// <returns></returns>
                void erase(const EVString &key);
                /// <summary>
                /// 返回容器的大小
                /// </summary>
                /// <param name=""></param>
                /// <returns>容器的大小</returns>
                ev_size_t size() const;
                /// <summary>
                /// 清空容器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clear();
                /// <summary>
                /// 判断容器是否为空
                /// </summary>
                /// <param name=""></param>
                /// <returns>容器为空返回true，否则false</returns>
                ev_bool empty() const;
            ev_private:
                typedef set	<EVString> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                /*typedef InternalList::mapped_type mapped_type;*/
                typedef InternalList::key_type key_type;
                typedef InternalList::value_type value_type;
                typedef pair<InternalList::iterator, bool> _Pairib;
                RESERVE_CONTAINER_FUNCTION_SET(mList);
                /// <summary>
                /// 容器中插入元素
                /// </summary>
                /// <param name="val">值</param>
                /// <returns>插入后的元素</returns>
                _Pairib insert(const value_type &val);
                /// <summary>
                /// 如果容器中存在按key索引存在的元素，则返回指向该元素的迭代器
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>返回指向该元素的迭代器</returns>
                iterator find(const EVString &key);

                /// <summary>
                /// 如果容器中存在按key索引存在的元素，则返回指向该元素的迭代器
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>返回指向该元素的迭代器</returns>
                const_iterator find(const EVString &key) const;
            private:
                InternalList mList;
            };

            /// <summary>
            /// 存储图形卡片的性能
            /// </summary>
            class EV_GRAPHIC_DLL CRenderSystemCapabilities : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CRenderSystemCapabilities(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /*typedef set<EVString> EarthView::World::Graphic::ShaderProfiles;*/
                ///		class EV_GRAPHIC_DLL ShaderProfiles : public EarthView::World::Core::CBaseObject
                ///		{
                ///        ev_private:
                ///			// <summary>
                ///			// 构造函数
                ///			// </summary>
                ///			// <param name="pList">构造函数参数键值对表</param>
                ///			// <returns></returns>
                ///			ShaderProfiles(_in EarthView::World::Core::CNameValuePairList*pList);
                ///		public:
                ///
                ///			// <summary>
                ///			// 默认构造函数
                ///			// </summary>
                ///			// <param name=""></param>
                ///			// <returns></returns>
                ///			ShaderProfiles();
                ///			// <summary>
                ///			// 在map容器中添加元素
                ///			// </summary>
                ///			// <param name="key">键</param>
                ///			// <returns>成功增加true，否则false</returns>
                ///			ev_bool push(const EVString& key);
                ///
                ///			// <summary>
                ///			// 判断元素是否存在
                ///			// </summary>
                ///			// <param name="key">键</param>
                ///			// <returns>存在true，否则false</returns>
                ///			ev_bool exist(const EVString& key);
                ///
                ///			// <summary>
                ///			// 删除元素
                ///			// </summary>
                ///			// <param name="key">键</param>
                ///			// <returns></returns>
                ///			void erase(const EVString& key);
                ///
                ///			// <summary>
                ///			// 返回容器的大小
                ///			// </summary>
                ///			// <param name=""></param>
                ///			// <returns>容器的大小</returns>
                ///			ev_size_t size() const;
                ///
                ///			// <summary>
                ///			// 清空容器
                ///			// </summary>
                ///			// <param name=""></param>
                ///			// <returns></returns>
                ///			void clear();
                ///
                ///			// <summary>
                ///			// 判断容器是否为空
                ///			// </summary>
                ///			// <param name=""></param>
                ///			// <returns>容器为空返回true，否则false</returns>
                ///			ev_bool empty() const;
                ///
                ///ev_private:
                ///			typedef set	<EVString> InternalList;
                ///			typedef InternalList::iterator iterator;
                ///			typedef InternalList::const_iterator const_iterator;
                ///			typedef InternalList::reverse_iterator reverse_iterator;
                ///			typedef InternalList::const_reverse_iterator const_reverse_iterator;
                ///			/*typedef InternalList::mapped_type mapped_type;*/
                ///			typedef InternalList::key_type key_type;
                ///			typedef InternalList::value_type value_type;
                ///			typedef pair<InternalList::iterator, bool> _Pairib;
                ///
                ///			RESERVE_CONTAINER_FUNCTION_SET(mList);
                ///
                ///			// <summary>
                ///			// 容器中插入元素
                ///			// </summary>
                ///			// <param name="val">值</param>
                ///			// <returns>插入后的元素</returns>
                ///			_Pairib insert(const value_type& val);
                ///
                ///			// <summary>
                ///			// 如果容器中存在按key索引存在的元素，则返回指向该元素的迭代器
                ///			// </summary>
                ///			// <param name="key">键</param>
                ///			// <returns>返回指向该元素的迭代器</returns>
                ///			iterator find(const EVString& key);
                ///
                ///			// <summary>
                ///			// 如果容器中存在按key索引存在的元素，则返回指向该元素的迭代器
                ///			// </summary>
                ///			// <param name="key">键</param>
                ///			// <returns>返回指向该元素的迭代器</returns>
                ///			const_iterator find(const EVString& key) const;
                ///
                ///		private:
                ///			InternalList mList;
                ///
                ///		};
            private:
                //// This is used to build a database of RSC's
                //// if a RSC with same name, but newer version is introduced, the older one
                //// will be removed
                EarthView::World::Graphic::DriverVersion mDriverVersion;
                //// GPU Vendor
                EarthView::World::Graphic::GPUVendor mVendor;
                static EarthView::World::Core::StringVector msGPUVendorStrings;
                static void initVendorStrings();
                //// The number of world matrices available
                ev_uint16 mNumWorldMatrices;
                //// The number of texture units available
                ev_uint16 mNumTextureUnits;
                //// The stencil buffer bit depth
                ev_uint16 mStencilBufferBitDepth;
                //// The number of matrices available for hardware blending
                ev_uint16 mNumVertexBlendMatrices;
                //// Stores the capabilities flags.
                ev_int32 mCapabilities[CAPS_CATEGORY_COUNT];
                //// Which categories are relevant
                ev_bool mCategoryRelevant[CAPS_CATEGORY_COUNT];
                //// The name of the device as reported by the render system
                EVString mDeviceName;
                //// The identifier associated with the render system for which these capabilities are valid
                EVString mRenderSystemName;
                //// The number of floating-point constants vertex programs support
                ev_uint16 mVertexProgramConstantFloatCount;
                //// The number of integer constants vertex programs support
                ev_uint16 mVertexProgramConstantIntCount;
                //// The number of boolean constants vertex programs support
                ev_uint16 mVertexProgramConstantBoolCount;
                //// The number of floating-point constants geometry programs support
                ev_uint16 mGeometryProgramConstantFloatCount;
                //// The number of integer constants vertex geometry support
                ev_uint16 mGeometryProgramConstantIntCount;
                //// The number of boolean constants vertex geometry support
                ev_uint16 mGeometryProgramConstantBoolCount;
                //// The number of floating-point constants fragment programs support
                ev_uint16 mFragmentProgramConstantFloatCount;
                //// The number of integer constants fragment programs support
                ev_uint16 mFragmentProgramConstantIntCount;
                //// The number of boolean constants fragment programs support
                ev_uint16 mFragmentProgramConstantBoolCount;
                //// The number of simultaneous render targets supported
                ev_uint16 mNumMultiRenderTargets;
                //// The maximum point size
                Real mMaxPointSize;
                //// Are non-POW2 textures feature-limited?
                ev_bool mNonPOW2TexturesLimited;
                //// The number of vertex texture units supported
                ev_uint16 mNumVertexTextureUnits;
                //// Are vertex texture units shared with fragment processor?
                ev_bool mVertexTextureUnitsShared;
                //// The number of vertices a geometry program can emit in a single run
                ev_int32 mGeometryProgramNumOutputVertices;

                //// The list of supported shader profiles
                EarthView::World::Graphic::ShaderProfiles mSupportedShaderProfiles;
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CRenderSystemCapabilities ();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CRenderSystemCapabilities ();
                virtual ev_size_t calculateSize() const
                {
                    return 0;
                }
                /// <summary>
                /// 设置驱动版本
                /// </summary>
                /// <param name="version"></param>
                /// <returns></returns>
                void setDriverVersion(const DriverVersion &version);
                void parseDriverVersionFromString(const EVString &versionString);

                EarthView::World::Graphic::DriverVersion getDriverVersion() const;
                EarthView::World::Graphic::GPUVendor getVendor() const;
                void setVendor(EarthView::World::Graphic::GPUVendor v);
                /// <summary>
                /// 解析和设置vendor
                /// </summary>
                /// <param name="vendorString"></param>
                /// <returns></returns>
                void parseVendorFromString(const EVString &vendorString);
                /// <summary>
                /// 转换vendor从string类型到enum类型
                /// </summary>
                /// <param name="vendorString"></param>
                /// <returns></returns>
                static EarthView::World::Graphic::GPUVendor vendorFromString(const EVString &vendorString);
                /// <summary>
                /// 转换vendor从string类型到string类型
                /// </summary>
                /// <param name="vendorString"></param>
                /// <returns></returns>
                static EVString vendorToString(EarthView::World::Graphic::GPUVendor v);
                ev_bool isDriverOlderThanVersion(EarthView::World::Graphic::DriverVersion v) const;
                void setNumWorldMatrices(ev_uint16 num);
                void setNumTextureUnits(ev_uint16 num);
                void setStencilBufferBitDepth(ev_uint16 num);
                void setNumVertexBlendMatrices(ev_uint16 num);
                /// <summary>
                /// 渲染目标支持同时发生的数量
                /// </summary>
                /// <param name="num"></param>
                /// <returns></returns>
                void setNumMultiRenderTargets(ev_uint16 num);
                ev_uint16 getNumWorldMatrices() const;
                /// <summary>
                /// 返回当前硬件支持输出的纹理单元的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint16 getNumTextureUnits() const;
                /// <summary>
                /// 如果硬件模板被支持，获得硬件的位深度加速模板缓存
                ///如果硬件模板不被支持，软件将提供一个8位的软件模板
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint16 getStencilBufferBitDepth() const;
                /// <summary>
                /// 返回渲染系统中可应用于硬件顶点混合的矩阵数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint16 getNumVertexBlendMatrices() const;
                /// <summary>
                /// 渲染目标同时支持的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint16 getNumMultiRenderTargets() const;
                /// <summary>
                /// 如果性能是渲染系统的细节返回true
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool isCapabilityRenderSystemSpecific(const EarthView::World::Graphic::Capabilities c) const;
                /// <summary>
                /// 添加一个性能标记
                /// </summary>
                /// <param name="c"></param>
                /// <returns></returns>
                void setCapability(const EarthView::World::Graphic::Capabilities c);
                /// <summary>
                /// 去除掉性能标记
                /// </summary>
                /// <param name="c"></param>
                /// <returns></returns>
                void unsetCapability(const EarthView::World::Graphic::Capabilities c);
                /// <summary>
                /// 检查渲染系统的性能
                /// </summary>
                /// <param name="c"></param>
                /// <returns></returns>
                ev_bool hasCapability(const EarthView::World::Graphic::Capabilities c) const;

                /// <summary>
                /// 添加剖面到支持的剖面列表中
                /// </summary>
                /// <param name="profile"></param>
                /// <returns></returns>
                void addShaderProfile(const EVString &profile);
                /// <summary>
                /// 去除掉已给阴影剖面
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void removeShaderProfile(const EVString &profile);
                /// <summary>
                /// 如果这个阴影剖面在支持的阴影剖面列表中则返回true
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool isShaderProfileSupported(const EVString &profile) const;
                /// <summary>
                /// 返回所有支持的阴影剖面的集合
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::ShaderProfiles &getSupportedShaderProfiles() const;
                /// <summary>
                /// 获得顶点程序支持的浮点型常量的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint16 getVertexProgramConstantFloatCount() const;
                /// <summary>
                /// 获得顶点程序支持的整型常量的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint16 getVertexProgramConstantIntCount() const;

                /// <summary>
                /// 获得顶点程序支持的布尔型常量的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint16 getVertexProgramConstantBoolCount() const;

                /// <summary>
                /// 获得几何程序支持的浮点型常量的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint16 getGeometryProgramConstantFloatCount() const;

                /// <summary>
                /// 获得几何程序支持整型常量的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint16 getGeometryProgramConstantIntCount() const;

                /// <summary>
                /// 获得几何程序支持的布尔型常量的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint16 getGeometryProgramConstantBoolCount() const;

                /// <summary>
                /// 获得片段程序支持的浮点型常量的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint16 getFragmentProgramConstantFloatCount() const;

                /// <summary>
                /// 获得片段程序支持的整型常量的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint16 getFragmentProgramConstantIntCount() const;

                /// <summary>
                /// 获得片段程序支持的布尔型常量的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint16 getFragmentProgramConstantBoolCount() const;
                /// <summary>
                /// 设置渲染系统驱动的名字
                /// </summary>
                /// <param name="name"></param>
                /// <returns></returns>
                void setDeviceName(const EVString &name);
                /// <summary>
                /// 获得渲染系统驱动的名字
                /// </summary>
                /// <param name="name"></param>
                /// <returns></returns>
                EVString getDeviceName() const;
                /// <summary>
                /// 设置顶点程序支持的浮点型常量的数量
                /// </summary>
                /// <param name="c"></param>
                /// <returns></returns>
                void setVertexProgramConstantFloatCount(ev_uint16 c);

                /// <summary>
                /// 设置顶点程序支持的整型常量的数量
                /// </summary>
                /// <param name="c"></param>
                /// <returns></returns>
                void setVertexProgramConstantIntCount(ev_uint16 c);

                /// <summary>
                /// 设置顶点程序支持的布尔型常量的数量
                /// </summary>
                /// <param name="c"></param>
                /// <returns></returns>
                void setVertexProgramConstantBoolCount(ev_uint16 c);

                /// <summary>
                /// 设置几何程序支持的浮点型常量的数量
                /// </summary>
                /// <param name="c"></param>
                /// <returns></returns>
                void setGeometryProgramConstantFloatCount(ev_uint16 c);

                /// <summary>
                /// 设置几何程序支持的整型常量的数量
                /// </summary>
                /// <param name="c"></param>
                /// <returns></returns>
                void setGeometryProgramConstantIntCount(ev_uint16 c);

                /// <summary>
                /// 设置几何程序支持的布尔型常量的数量
                /// </summary>
                /// <param name="c"></param>
                /// <returns></returns>
                void setGeometryProgramConstantBoolCount(ev_uint16 c);

                /// <summary>
                /// 设置片段程序支持的浮点型常量的数量
                /// </summary>
                /// <param name="c"></param>
                /// <returns></returns>
                void setFragmentProgramConstantFloatCount(ev_uint16 c);

                /// <summary>
                /// 设置片段程序支持的整型常量的数量
                /// </summary>
                /// <param name="c"></param>
                /// <returns></returns>
                void setFragmentProgramConstantIntCount(ev_uint16 c);

                /// <summary>
                /// 设置片段程序支持的布尔型常量的数量
                /// </summary>
                /// <param name="c"></param>
                /// <returns></returns>
                void setFragmentProgramConstantBoolCount(ev_uint16 c);

                /// <summary>
                /// 设置像素中最大点的大小
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void setMaxPointSize(Real s);

                /// <summary>
                /// 获得像素中最大点得大小
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                Real getMaxPointSize() const;

                /// <summary>
                /// 设置Non-POW2纹理限制
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void setNonPOW2TexturesLimited(ev_bool l);

                /// <summary>
                /// 判断Non-POW2纹理是否在属性方面受限制
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool getNonPOW2TexturesLimited() const;
                /// <summary>
                /// 设置支持顶点纹理单元的数量
                /// </summary>
                /// <param name="n"></param>
                /// <returns></returns>
                void setNumVertexTextureUnits(ev_uint16 n);

                /// <summary>
                /// 获得支持顶点纹理单元的数量
                /// </summary>
                /// <param name="n"></param>
                /// <returns></returns>
                ev_uint16 getNumVertexTextureUnits() const;

                /// <summary>
                /// 设置是否顶点纹理单元被片段处理器分享
                /// </summary>
                /// <param name="shared"></param>
                /// <returns></returns>
                void setVertexTextureUnitsShared(ev_bool shared);

                /// <summary>
                /// 获得是否顶点纹理单元被片段处理器分享
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool getVertexTextureUnitsShared() const;
                /// <summary>
                /// 设置几何程序可以输出的顶点的数量
                /// </summary>
                /// <param name="numOutputVertices"></param>
                /// <returns></returns>
                void setGeometryProgramNumOutputVertices(ev_int32 numOutputVertices);

                /// <summary>
                /// 获得几何程序可以输出的顶点的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_int32 getGeometryProgramNumOutputVertices() const;
                /// <summary>
                /// 从产生的性能中获得渲染系统的标识
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EVString getRenderSystemName() const;

                /// <summary>
                /// 设置渲染系统的标识
                /// </summary>
                /// <param name="rs"></param>
                /// <returns></returns>
                void setRenderSystemName(const EVString &rs);
                /// <summary>
                /// 设置种类是否相关
                /// </summary>
                /// <param name="cat"></param>
                /// <param name="relevant"></param>
                /// <returns></returns>
                void setCategoryRelevant(EarthView::World::Graphic::CapabilitiesCategory cat, ev_bool relevant);
                /// <summary>
                /// 返回种类是否相关
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool isCategoryRelevant(EarthView::World::Graphic::CapabilitiesCategory cat);
                /// <summary>
                /// 将性能写入日志中
                /// </summary>
                /// <param name="ptLog"></param>
                /// <returns></returns>
                void log(EarthView::World::Core::CLogger *ptLog);
            };
            /** @} */
            /** @} */
        }
    }
}
/// namespace
#endif /// __RenderSystemCapabilities__

