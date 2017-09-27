#ifndef __TextureUnitState_H__
#define __TextureUnitState_H__
#include "graphic/graphic_config.h"
#include <mathengine/matrix4.h>
#include "blendmode.h"
#include <core/iteratorwrapper.h>
#include "texture.h"
#include <core/stringvector.h>
#include "shadowtexturemanager.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CMatrix4;
				class CRadian;
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

            class CController;
            class CFrustum;
            class CPass;
            /// <summary>
            /// 表示单一纹理单元的状态
            /// </summary>
            class EV_GRAPHIC_DLL CTextureUnitState : public EarthView::World::Core::CAllocatedObject
            {
                friend class CRenderSystem;
            public:
                /// <summary>
                /// 定义能够应用于纹理单元的纹理效果类型
                /// </summary>
                enum TextureEffectType
                {
                    ///在照相机和顶点之间，产生基于角度的所有纹理坐标
                    ET_ENVIRONMENT_MAP,
                    ///产生基于一个截面的纹理坐标
                    ET_PROJECTIVE_TEXTURE,
                    ///u、v坐标持续滚动效果
                    ET_UVSCROLL,
                    ///u坐标持续滚动效果
                    ET_USCROLL,
                    ///v坐标持续滚动效果
                    ET_VSCROLL,
                    ///持续旋转效果
                    ET_ROTATE,
                    ///更多复杂的变换
                    ET_TRANSFORM
                };
                /// <summary>
                /// 列举环境映射的特定类型
                /// </summary>
                enum EnvMapType
                {
                    ///与球面环境映射相似，但是效果基于视口内的顶点位置而不是顶点法线。这一效果也因此用于平面物体（由于法线全都一样，球面env_map表现不好）或者没有法线的物体。
                    ENV_PLANAR,
                    ///这一效果基于视线和物体顶点法线之间的关系，所以当有大量渐变法线时效果最好，例如：弯曲的物体。
                    ENV_CURVED,
                    ///一种更高级的反射映射形式，为立体映射提供反射向量
                    ENV_REFLECTION,
                    ///为立体映射提供法向量
                    ENV_NORMAL
                };
                /// <summary>
                /// 纹理变换类型，当处理程序变换时进行有效的列举
                /// </summary>
                enum TextureTransformType
                {
                    TT_TRANSLATE_U,
                    TT_TRANSLATE_V,
                    TT_SCALE_U,
                    TT_SCALE_V,
                    TT_ROTATE
                };
                /// <summary>
                /// 纹理寻址方式，默认情况下是TAM_WRAP
                /// </summary>
                enum TextureAddressingMode
                {
                    ///环绕，任何超过1.0的值都被置为0.0。纹理被重复一次
                    TAM_WRAP,
                    ///镜像，每到边界处纹理翻转，意思就是每个1.0 u或者v处纹理被镜像翻转
                    TAM_MIRROR,
                    ///夹持/截取，超过1.0的值被固定为1.0。超过1.0的其它地方的纹理，沿用最后像素的纹理。用于当叠加过滤时，需要从0.0到1.0精确覆盖且没有模糊边界的纹理。
                    TAM_CLAMP,
                    /// CTexture coordinates outside the range [0.0, 1.0] are set to the border colour
                    ///边框 ，超出[0.0, 1.0]范围的值都被置为边界色
                    TAM_BORDER
                };
                /// <summary>
                /// 为每一个纹理坐标设置的纹理寻址方式
                /// </summary>
                struct UVWAddressingMode
                {
                    EarthView::World::Graphic::CTextureUnitState::TextureAddressingMode u;
                    EarthView::World::Graphic::CTextureUnitState::TextureAddressingMode v;
                    EarthView::World::Graphic::CTextureUnitState::TextureAddressingMode w;
                };
                /// <summary>
                /// 纹理立方面，0代表前面，1代表后面，2代表左面，3代表右面，4代表上面，5代表下面
                /// </summary>
                enum TextureCubeFace
                {
                    CUBE_FRONT = 0,
                    CUBE_BACK = 1,
                    CUBE_LEFT = 2,
                    CUBE_RIGHT = 3,
                    CUBE_UP = 4,
                    CUBE_DOWN = 5
                };
                /// <summary>
                /// 定义纹理效果
                /// </summary>
                class EV_GRAPHIC_DLL TextureEffect: public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    TextureEffect(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    TextureEffect();
                    EarthView::World::Graphic::CTextureUnitState::TextureEffectType type;
                    ev_int32 subtype;
                    Real arg1, arg2;
                    EarthView::World::Graphic::WaveformType waveType;
                    Real base;
                    Real frequency;
                    Real phase;
                    Real amplitude;
                    EarthView::World::Graphic::CController *controller;
                    const EarthView::World::Graphic::CFrustum *frustum;
                };
                /// CTexture effects in a multimap paired array
                class EV_GRAPHIC_DLL CTextureUnitStateEffectMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    CTextureUnitStateEffectMap(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    CTextureUnitStateEffectMap();
                    /// <summary>
                    ///
                    /// </summary>
                    /// <param name="key">纹理效果类型</param>
                    /// <param name="val">纹理值</param>
                    void push( _in const EarthView::World::Graphic::CTextureUnitState::TextureEffectType &key, _in TextureEffect const &val);
                    /// <summary>
                    /// 判断是否存在该种纹理
                    /// </summary>
                    /// <param name="key">纹理效果类型</param>
                    /// <returns>如存在返回true，反之返回false</returns>
                    ev_bool exist( _in const EarthView::World::Graphic::CTextureUnitState::TextureEffectType &key);
                    /// <summary>
                    /// 删除一种纹理
                    /// </summary>
                    /// <param name="key">要删除的纹理值</param>
                    void erase( _in const EarthView::World::Graphic::CTextureUnitState::TextureEffectType &key);
                    /// <summary>
                    /// 设置大小
                    /// </summary>
                    /// <returns>返回设置的大小值</returns>
                    ev_size_t size() const;
                    /// <summary>
                    /// 纹理类型数量
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回数量的个数</returns>
                    ev_size_t count( _in const EarthView::World::Graphic::CTextureUnitState::TextureEffectType &key)const;
                    /// <summary>
                    /// 获取指定键值的第几项
                    /// </summary>
                    /// <param name="key">获得某种纹理的键值</param>
                    /// <param name="index">得到纹理键值的第几项</param>
                    /// <returns>返回获得的纹理效果</returns>
                    EarthView::World::Graphic::CTextureUnitState::TextureEffect &get( _in const EarthView::World::Graphic::CTextureUnitState::TextureEffectType &key, _in ev_size_t index);
                    /// <summary>
                    /// 删除指定键值的第几项
                    /// </summary>
                    /// <param name="key">删除某类纹理的键值</param>
                    /// <param name="index">要删除某类纹理的键值的第几项</param>
                    void erase( _in const EarthView::World::Graphic::CTextureUnitState::TextureEffectType &key, _in ev_size_t index);
                    /// <summary>
                    /// 清除
                    /// </summary>
                    void clear();
                    /// <summary>
                    /// 置空
                    /// </summary>
                    /// <returns>为空则返回true，否则返回false</returns>
                    ev_bool empty() const;
                ev_private:
                    typedef multimap<EarthView::World::Graphic::CTextureUnitState::TextureEffectType, TextureEffect> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MULTIMAP(mList);
                    /// <summary>
                    /// 集合插入元素
                    /// </summary>
                    /// <param name="val">值</param>
                    /// <returns>插入后的键值对</returns>
                    iterator insert( _in const value_type &val);
                    /// <summary>
                    /// 查找元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>查找后返回对应迭代器</returns>
                    iterator find( _in const key_type &key);
                    const_iterator find( _in const key_type &key) const;
                    std::pair< iterator, iterator > equal_range(_in const key_type &key);
                private:
                    InternalList mList;
                };
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CTextureUnitState( _in EarthView::World::Core::CNameValuePairList *pList );
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="parent"></param>
                /// <returns></returns>
                CTextureUnitState(EarthView::World::Graphic::CPass *ref_parent);

                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="oth">纹理单元状态</param>
                /// <returns></returns>
                CTextureUnitState(EarthView::World::Graphic::CPass *ref_parent, const CTextureUnitState &oth );
                /// <summary>
                /// 重载"="
                /// </summary>
                /// <param name="oth">纹理单元状态</param>
                /// <returns></returns>
                EarthView::World::Graphic::CTextureUnitState &operator = ( const EarthView::World::Graphic::CTextureUnitState &oth );
                /// <summary>
                /// 析构函数
                /// </summary>
                ~CTextureUnitState();
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="parent">渲染通路</param>
                /// <param name="texName">纹理名称</param>
                /// <param name="texCoordSet">纹理坐标集</param>
                /// <returns></returns>
                CTextureUnitState( EarthView::World::Graphic::CPass *ref_parent, const EVString &texName, ev_uint32 texCoordSet);
                CTextureUnitState( EarthView::World::Graphic::CPass *ref_parent, const EVString &texName);

                /// <summary>
                /// 得到当前纹理的名称
                /// </summary>
                /// <returns>返回纹理名称</returns>
                const EVString &getTextureName() const;
                /// <summary>
                /// 设置纹理名称
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="ttype">纹理类型</param>
                void setTextureName(const EVString &name, EarthView::World::Graphic::TextureType ttype);
                void setTextureName(const EVString &name);
               
				/// <summary>
				/// 设置纹理名称
				/// </summary>
				/// <param name="texPtr">纹理</param>				
                void setTexture( const EarthView::World::Graphic::CTexturePtr &texPtr);

				/// <summary>
				/// 设置立方体纹理
				/// </summary>
				/// <param name="texPtrs">纹理</param>
				/// <param name="forUVW">true代表一个单独的利用三维纹理坐标的三维纹理寻址，而不是6个分离的纹理</param>
                void setCubicTexture( const EarthView::World::Graphic::CTexturePtr *const texPtrs );
                void setCubicTexture( const EarthView::World::Graphic::CTexturePtr *const texPtrs, bool forUVW);
                /// <summary>
                /// 设置立方体纹理名称
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="forUVW">true代表一个单独的利用三维纹理坐标的三维纹理寻址，而不是6个分离的纹理</param>
                void setCubicTextureName( const EVString &name, ev_bool forUVW);
                void setCubicTextureName( const EVString &name);
                /// <summary>
                /// 设置立方纹理名称
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="forUVW">true代表一个单独的利用三维纹理坐标的三维纹理寻址，而不是6个分离的纹理</param>
                void setCubicTextureNames( const EVString *const names, ev_bool forUVW);
                void setCubicTextureNames( const EVString *const names);

                /// <summary>
                /// 设置用于纹理动画的纹理。eg. (flame.jpg, 5, 2.5)
                /// </summary>
                /// <param name="name">画面名称</param>
                /// <param name="numFrames">图像文件数</param>
                /// <param name="duration">延时（长度），单位是秒，如果是0表示不发生自动转换,需要在代码中手动改变</param>
                void setAnimatedTextureName( const EVString &name, ev_uint32 numFrames, Real duration);
                void setAnimatedTextureName( const EVString &name, ev_uint32 numFrames);
                /// <summary>
                /// 设置用于纹理动画的各纹理
                /// </summary>
                /// <param name="name">纹理名称队列的指针，图像排序</param>
                /// <param name="numFrames">图像文件数</param>
                /// <param name="duration">延时，单位是秒，如果是0表示不发生自动转换,需要在代码中手动改变</param>
                void setAnimatedTextureNames( const EVString *const names, ev_uint32 numFrames, Real duration);
                void setAnimatedTextureNames( const EVString *const names, ev_uint32 numFrames);
                /// <summary>
                /// 在给定的框架内返回纹理的宽和高
                /// </summary>
                class  EV_GRAPHIC_DLL CTextureUnitStateTextureDimensionsPair : public EarthView::World::Core::CBaseObject
                {
                public:
                    ev_size_t first;
                    ev_size_t second;
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    CTextureUnitStateTextureDimensionsPair();
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="fir"></param>
                    /// <param name="sec"></param>
                    /// <returns></returns>
                    CTextureUnitStateTextureDimensionsPair(_in ev_size_t fir, _in ev_size_t sec);
                    EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair &operator=(_in const EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair &other);
                ev_private:
                    CTextureUnitStateTextureDimensionsPair(_in EarthView::World::Core::CNameValuePairList *pList);
                };
                EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair getTextureDimensions( ev_uint32 frame) const;
                EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair getTextureDimensions() const;
                /// <summary>
                /// 在动态或者多图像纹理中改变活动的帧
                /// </summary>
                /// <param name="frameNumber">帧序号</param>
                void setCurrentFrame( ev_uint32 frameNumber );
                /// <summary>
                /// 在动态或者多图像纹理中获得当前图像的帧序号
                /// </summary>
                /// <returns></returns>
                ev_uint32 getCurrentFrame() const;
                /// <summary>
                /// 获得指定帧的纹理名称
                /// </summary>
                /// <param name="frameNumber">帧序号</param>
                /// <returns>返回纹理名称</returns>
                const EVString &getFrameTextureName(ev_uint32 frameNumber) const;
                /// <summary>
                /// 设置指定帧的纹理名称
                /// </summary>
                /// <param name="name">纹理名称</param>
                /// <param name="frameNumber">帧序号</param>
                void setFrameTextureName(const EVString &name, ev_uint32 frameNumber);
                /// <summary>
                /// 在帧容器的最后增加一个纹理名称
                /// </summary>
                /// <param name="name">纹理名称</param>
                void addFrameTextureName(const EVString &name);
                /// <summary>
                /// 删除特定帧的纹理
                /// </summary>
                /// <param name="name">删除纹理的帧序号</param>
                void deleteFrameTextureName(const ev_size_t frameNumber);
                /// <summary>
                /// 得到纹理的帧数量
                /// </summary>
                /// <returns>返回图像文件数</returns>
                ev_uint32 getNumFrames() const;
                ///绑定类型。告诉这个纹理单元是绑定到片断处理单元还是绑定到顶点处理单元
                enum BindingType
                {
                    ///片段处理单元（默认）
                    BT_FRAGMENT = 0,
                    ///顶点处理单元——表示该单元将被用于顶点纹理拾取
                    BT_VERTEX = 1
                };
                ///内容类型。这个纹理单元所包含的内容类型。告诉这个纹理单元从哪里取得它的内容
                enum ContentType
                {
                    ///默认选项，内容来自一个有名字的纹理，以平常的方式从一个文件或者根据给定的名字手动创建装载。
                    CONTENT_NAMED = 0,
                    ///阴影纹理，自动地被引擎限制
                    CONTENT_SHADOW = 1,
                    ///排序纹理，自动地连接到活动视口的链条上（chain）
                    CONTENT_COMPOSITOR = 2
                };

                /// <summary>
                /// 设置绑定类型
                /// </summary>
                /// <param name="bt">绑定类型</param>
                void setBindingType(BindingType bt);                
                /// <summary>
                /// 获得绑定类型
                /// </summary>
                /// <returns>绑定类型</returns>
                EarthView::World::Graphic::CTextureUnitState::BindingType getBindingType() const;
                /// <summary>
                /// 设置当前纹理单元的内容类型
                /// </summary>
                /// <param name="ct">内容类型</param>
                void setContentType(ContentType ct);
                /// <summary>
                /// 获得当前纹理单元状态参考的内容类型
                /// </summary>
                /// <returns>内容类型</returns>
                EarthView::World::Graphic::CTextureUnitState::ContentType getContentType() const;
                /// <summary>
                /// 判断是否是由6个面组成的立方体纹理
                /// </summary>
                /// <returns>是的话返回true，否则返回false</returns>
                ev_bool isCubic() const;
                /// <summary>
                /// 判断是否是3D纹理
                /// </summary>
                /// <returns>假如是则返回true，否则返回false</returns>
                ev_bool is3D() const;
                /// <summary>
                /// 获得纹理类型
                /// </summary>
                /// <returns>返回纹理类型</returns>
                EarthView::World::Graphic::TextureType getTextureType() const;
                /// <summary>
                /// 当加载纹理时，设置想要创建的像素格式
                /// </summary>
                /// <param name="desiredFormat">像素格式</param>
                void setDesiredFormat(EarthView::World::Graphic::PixelFormat desiredFormat);
                /// <summary>
                /// 当加载纹理时，设置想要创建的像素格式
                /// </summary>
                /// <returns>返回想要创建的像素格式</returns>
                EarthView::World::Graphic::PixelFormat getDesiredFormat() const;
                /// <summary>
                /// 设置纹理的mipmap级数
                /// </summary>
                /// <param name="numMipmaps">Mipmap数量</param>
                void setNumMipmaps(ev_int32 numMipmaps);
                /// <summary>
                /// 获得纹理的mipmap级数
                /// </summary>
                /// <returns>返回Mipmap数量</returns>
                ev_int32 getNumMipmaps() const;
                /// <summary>
                /// 当是单通道时，设置该纹理是否被要求作为alpha加载，
                /// </summary>
                /// <param name="isAlpha"></param>
                void setIsAlpha(ev_bool isAlpha);
                /// <summary>
                /// 当是单通道时，设置该纹理是否被要求作为alpha加载
                /// </summary>
                /// <returns></returns>
                ev_bool getIsAlpha() const;
                /// <summary>
                /// 设置显示器的Gamma纠正是否启用
                /// <summary>
                /// <param name="enabled">true为启用Gamma纠正</param>
                void setHardwareGammaEnabled(ev_bool enabled);
                /// <summary>
                /// 获取显示器的Gamma纠正是否启用
                /// <summary>
                /// <returns>true为启用Gamma纠正</returns>
                ev_bool isHardwareGammaEnabled() const;
                /// <summary>
                /// 获得该图层所用到的纹理坐标的索引
                /// </summary>
                /// <returns>返回index</returns>
                ev_uint32 getTextureCoordSet() const;
                /// <summary>
                /// 设置该图层所用到的纹理坐标的索引
                /// </summary>
                /// <param name="set">默认是0，假如提供每个顶点的多样纹理坐标可以改变该值</param>
                void setTextureCoordSet(ev_uint32 set);
                /// <summary>
                /// 设置变换矩阵
                /// </summary>
                /// <param name="xform">四维矩阵</param>
                /// <returns></returns>
                void setTextureTransform(const EarthView::World::Spatial::Math::CMatrix4 &xform);
                /// <summary>
                /// 得到纹理的变换矩阵
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回四维矩阵</returns>
                const EarthView::World::Spatial::Math::CMatrix4 &getTextureTransform() const;
                /// <summary>
                /// 给纹理设置一个固定的滚动偏移量
                /// </summary>
                /// <param name="u">水平方向上移动量</param>
                /// <param name="v">竖直方向上的移动量</param>
                /// <returns></returns>
                void setTextureScroll(Real u, Real v);
                /// <summary>
                /// 设置纹理的滚动偏移量，但是只设置水平方向上偏移量，即U值
                /// </summary>
                /// <param name="value">设置水平方向上的偏移量U</param>
                /// <returns></returns>
                void setTextureUScroll(Real value);
                /// <summary>
                /// 得到纹理水平方向上的滚动偏移量
                /// </summary>
                /// <returns>U值</returns>
                Real getTextureUScroll() const;
                /// <summary>
                /// 设置纹理的滚动偏移量，但是只设置竖直方向上偏移量，即V值
                /// </summary>
                /// <param name="value">设置竖直方向上的偏移量V</param>
                /// <returns></returns>
                void setTextureVScroll(Real value);
                /// <summary>
                /// 得到纹理竖直方向上的滚动偏移量
                /// </summary>
                /// <returns>V值</returns>
                Real getTextureVScroll() const;
                /// <summary>
                /// 设置这个纹理层应用的比例系数，只设置u比例值
                /// </summary>
                /// <param name="value">U值</param>
                /// <returns></returns>
                void setTextureUScale(Real value);
                /// <summary>
                /// 获得u比例值
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回u比例值</returns>
                Real getTextureUScale() const;
                /// <summary>
                /// 设置这个纹理层应用的比例系数，只设置v比例值
                /// </summary>
                /// <param name="value">V值</param>
                /// <returns></returns>
                void setTextureVScale(Real value);
                /// <summary>
                /// 获得v比例值
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回v比例值</returns>
                Real getTextureVScale() const;
                /// <summary>
                /// 设置应用于纹理坐标的缩放比例系数
                /// </summary>
                /// <param name="uScale">纹理在水平方向上的比例</param>
                /// <param name="vScale">纹理在垂直方向上的比例</param>
                /// <returns></returns>
                void setTextureScale(Real uScale, Real vScale);
                /// <summary>
                /// 将一个纹理旋转一个固定的角度（逆时针）
                /// </summary>
                /// <param name="angle">是逆时针旋转的角的度数</param>
                /// <returns></returns>
                void setTextureRotate(const EarthView::World::Spatial::Math::CRadian &angle);
                /// <summary>
                /// 得到纹理旋转的角度
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回旋转的角度</returns>
                const EarthView::World::Spatial::Math::CRadian &getTextureRotate() const;
                /// <summary>
                /// 对一个给定的坐标，得到它的纹理寻址模式。定义在这个纹理层的纹理坐标超过1.0时发生的事情，默认是TAM_WRAP
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回纹理寻址模式</returns>
                const EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode &getTextureAddressingMode() const;
                /// <summary>
                ///  设置纹理寻址模式。定义在这个纹理层的纹理坐标超过1.0时发生的事情，默认是TAM_WRAP
                /// </summary>
                /// <param name="tam">纹理寻址模式</param>
                /// <returns></returns>
                void setTextureAddressingMode( TextureAddressingMode tam);
                /// <summary>
                /// 设置纹理寻址模式。定义在这个纹理层的纹理坐标超过1.0时发生的事情，默认是TAM_WRAP
                /// </summary>
                /// <param name="u">u</param>
                /// <param name="v">v</param>
                /// <param name="w">w</param>
                /// <returns></returns>
                void setTextureAddressingMode( TextureAddressingMode u,
                                               EarthView::World::Graphic::CTextureUnitState::TextureAddressingMode v, EarthView::World::Graphic::CTextureUnitState::TextureAddressingMode w);
                /// <summary>
                /// 设置纹理寻址模式。定义在这个纹理层的纹理坐标超过1.0时发生的事情，默认是TAM_WRAP
                /// </summary>
                /// <param name="uvw">uvw值</param>
                /// <returns></returns>
                void setTextureAddressingMode( const EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode &uvw);
                /// <summary>
                /// 设置纹理边界色，默认情况下是黑色black，只有当寻址模式是TAM_BORDER时，该值可用
                /// </summary>
                /// <param name="colour">颜色</param>
                /// <returns></returns>
                void setTextureBorderColour(const EarthView::World::Graphic::CColourValue &colour);
                /// <summary>
                /// 获得纹理边界色，默认情况下是黑色black，只有当寻址模式是TAM_BORDER时，该值可用
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回纹理边界色</returns>
                const EarthView::World::Graphic::CColourValue &getTextureBorderColour() const;
                /// <summary>
                /// 设置纹理颜色操作。这是colour_op属性的扩展版，对于在这个纹理层与前面一个纹理层之间应用的混合允许极详细的控制.看下面有关使用这个方法在多渲染通路和多纹理之间可能出现的问题
                /// </summary>
                /// <param name="op">默认值是LBX_MODULATE</param>
                /// <param name="source1">纹理颜色，默认值是LBS_TEXTURE</param>
                /// <param name="source2">纹理颜色，默认值是LBS_CURRENT</param>
                /// <param name="arg1">手动提供颜色值，只有当source1 = LBS_MANUAL时，需要该参数</param>
                /// <param name="arg2">手动提供颜色值，只有当source2 = LBS_MANUAL时，需要该参数</param>
                /// <param name="manualBlend">手动混合</param>
                /// <returns></returns>
                void setColourOperationEx(
                    EarthView::World::Graphic::LayerBlendOperationEx op,
                    EarthView::World::Graphic::LayerBlendSource source1,
                    EarthView::World::Graphic::LayerBlendSource source2,
                    const EarthView::World::Graphic::CColourValue &arg1,
                    const EarthView::World::Graphic::CColourValue &arg2,
                    Real manualBlend);
                void setColourOperationEx(
                    EarthView::World::Graphic::LayerBlendOperationEx op,
                    EarthView::World::Graphic::LayerBlendSource source1,
                    EarthView::World::Graphic::LayerBlendSource source2,
                    const EarthView::World::Graphic::CColourValue &arg1,
                    const EarthView::World::Graphic::CColourValue &arg2);

                void setColourOperationEx(
                    EarthView::World::Graphic::LayerBlendOperationEx op,
                    EarthView::World::Graphic::LayerBlendSource source1,
                    EarthView::World::Graphic::LayerBlendSource source2,
                    const EarthView::World::Graphic::CColourValue &arg1);
                void setColourOperationEx(
                    EarthView::World::Graphic::LayerBlendOperationEx op,
                    EarthView::World::Graphic::LayerBlendSource source1,
                    EarthView::World::Graphic::LayerBlendSource source2);
                void setColourOperationEx(
                    EarthView::World::Graphic::LayerBlendOperationEx op,
                    EarthView::World::Graphic::LayerBlendSource source1);
                void setColourOperationEx(
                    EarthView::World::Graphic::LayerBlendOperationEx op);
                /// <summary>
                /// 决定这个纹理层的颜色如何与它下面的一层叠加复合起来（或者如果它是第一层的话，如何将它与光照效果复合起来）。
                ///这个方法是混合纹理层最简单的方法，因为它只需要一个参数，给你最普通的混合类型，并且自动建立两种混合方法：
                ///一种是针对单渲染通路多纹理硬件可用时的混合；另一种是针对单渲染通路多纹理硬件不可用时通过多渲染通路完成混合。
                ///然而，这是相当受限的，并且无法使用更加灵活的多纹理操作，简单地因为这些在多渲染通路回撤模式下不能被自动地支持
                /// </summary>
                /// <param name="op">图层混合操作类型</param>
                /// <returns></returns>
                void setColourOperation( const EarthView::World::Graphic::LayerBlendOperation op);
                /// <summary>
                /// 在如果使用了colour_op_ex属性且没有足够的多纹理硬件支持时，设置这个纹理层的多路后撤操作
                /// </summary>
                /// <param name="sourceFactor">原因数</param>
                /// <param name="destFactor">目标因数</param>
                /// <returns></returns>
                void setColourOpMultipassFallback( const EarthView::World::Graphic::SceneBlendFactor sourceFactor, const EarthView::World::Graphic::SceneBlendFactor destFactor);
                /// <summary>
                /// 获得多纹理RGB混合模式
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::CLayerBlendModeEx &getColourBlendMode() const;
                /// <summary>
                /// 获得多纹理Alpha混合模式
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回管理颜色和Alpha部分的混合</returns>
                const EarthView::World::Graphic::CLayerBlendModeEx &getAlphaBlendMode() const;
                /// <summary>
                /// 获得颜色混合操作的源回滚因子
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::SceneBlendFactor getColourBlendFallbackSrc() const;
                /// <summary>
                /// 获得颜色混合操作的目标回滚因子
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::SceneBlendFactor getColourBlendFallbackDest() const;
                /// <summary>
                /// 设置该类纹理的alpha操作
                /// </summary>
                /// <param name="op">加、减、乘等操作</param>
                /// <param name="source1">操作第一个alpha的资源</param>
                /// <param name="source2">操作第二个alpha的资源</param>
                /// <param name="arg1">手动的添加该值，只有当source1 = LBS_MANUAL时，才需要该参数</param>
                /// <param name="arg2">手动的添加该值，只有当source2 = LBS_MANUAL时，才需要该参数</param>
                /// <param name="manualBlend">手动混合</param>
                /// <returns></returns>
                void setAlphaOperation(EarthView::World::Graphic::LayerBlendOperationEx op,
                                       EarthView::World::Graphic::LayerBlendSource source1,
                                       EarthView::World::Graphic::LayerBlendSource source2,
                                       Real arg1,
                                       Real arg2,
                                       Real manualBlend );
                void setAlphaOperation(EarthView::World::Graphic::LayerBlendOperationEx op,
                                       EarthView::World::Graphic::LayerBlendSource source1,
                                       EarthView::World::Graphic::LayerBlendSource source2,
                                       Real arg1,
                                       Real arg2);
                void setAlphaOperation(EarthView::World::Graphic::LayerBlendOperationEx op,
                                       EarthView::World::Graphic::LayerBlendSource source1,
                                       EarthView::World::Graphic::LayerBlendSource source2,
                                       Real arg1);
                void setAlphaOperation(EarthView::World::Graphic::LayerBlendOperationEx op,
                                       EarthView::World::Graphic::LayerBlendSource source1,
                                       EarthView::World::Graphic::LayerBlendSource source2);
                void setAlphaOperation(EarthView::World::Graphic::LayerBlendOperationEx op,
                                       EarthView::World::Graphic::LayerBlendSource source1);
                void setAlphaOperation(EarthView::World::Graphic::LayerBlendOperationEx op);

                /// <summary>
                /// 添加纹理特效
                /// </summary>
                /// <param name="effect">纹理效果</param>
                /// <returns></returns>
                void addEffect(EarthView::World::Graphic::CTextureUnitState::TextureEffect &effect);
                
                /// <summary>
                /// 开始/关闭环境贴图
                /// </summary>
                /// <param name="enable">true表示打开纹理坐标效果，能环境映射，</param>
                /// <param name="envMapType">环境映射类型</param>
                /// <returns></returns>
                void setEnvironmentMap(ev_bool enable, EarthView::World::Graphic::CTextureUnitState::EnvMapType envMapType);
                void setEnvironmentMap(ev_bool enable);
                /// <summary>
                /// 设置滚动动画
                /// </summary>
                /// <param name="uSpeed">水平方向上每秒的圈数</param>
                /// <param name="vSpeed">垂直方向上每秒的圈数</param>
                /// <returns></returns>
                void setScrollAnimation(Real uSpeed, Real vSpeed);
                /// <summary>
                /// 设置旋转动画
                /// </summary>
                /// <param name="speed">是每秒逆时针旋转的次数</param>
                /// <returns></returns>
                void setRotateAnimation(Real speed);
                /// <summary>
                /// 设置纹理变换的动画
                /// </summary>
                /// <param name="ttype">变换方式，滚动、旋转、比例属性</param>
                /// <param name="waveType">波类型</param>
                /// <param name="base">波的输出值</param>
                /// <param name="frequency">波每秒重复的次数，即速度</param>
                /// <param name="phase">波开始的偏移量</param>
                /// <param name="amplitude">波的大小</param>
                /// <returns></returns>
                void setTransformAnimation( const EarthView::World::Graphic::CTextureUnitState::TextureTransformType ttype,
                                            const EarthView::World::Graphic::WaveformType waveType, Real base , Real frequency, Real phase, Real amplitude);
                void setTransformAnimation( const EarthView::World::Graphic::CTextureUnitState::TextureTransformType ttype,
                                            const EarthView::World::Graphic::WaveformType waveType, Real base , Real frequency, Real phase);
                void setTransformAnimation( const EarthView::World::Graphic::CTextureUnitState::TextureTransformType ttype,
                                            const EarthView::World::Graphic::WaveformType waveType, Real base , Real frequency);
                void setTransformAnimation( const EarthView::World::Graphic::CTextureUnitState::TextureTransformType ttype,
                                            const EarthView::World::Graphic::WaveformType waveType, Real base );
                void setTransformAnimation( const EarthView::World::Graphic::CTextureUnitState::TextureTransformType ttype, const EarthView::World::Graphic::WaveformType waveType);
                /// <summary>
                /// 开启/关闭投影纹理
                /// </summary>
                /// <param name="enabled">在该纹理单元下是否可以投影纹理</param>
                /// <param name="ref_projectionSettings">视椎体</param>
                /// <returns></returns>
                void setProjectiveTexturing(ev_bool enabled, const EarthView::World::Graphic::CFrustum *ref_projectionSettings );
                void setProjectiveTexturing(ev_bool enabled);
                /// <summary>
                /// 删除所有应用于该纹理层上的效果
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void removeAllEffects();
                /// <summary>
                /// 删除纹理图层上的单一效果
                /// </summary>
                /// <param name="type">纹理效果类型</param>
                /// <returns></returns>
                void removeEffect( const EarthView::World::Graphic::CTextureUnitState::TextureEffectType type );
                /// <summary>
                /// 判断当前纹理图层是否空白
                /// </summary>
                /// <param name=""></param>
                /// <returns>如没有着色返回true，否则返回false</returns>
                ev_bool isBlank() const;
                /// <summary>
                /// 设置当前纹理图层为空白
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void setBlank();
                /// <summary>
                /// 是否加载失败
                /// </summary>
                /// <param name=""></param>
                /// <returns>失败返回true，否则返回false</returns>
                ev_bool isTextureLoadFailing() const;
                /// <summary>
                /// 假如加载失败，则重新加载
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void retryTextureLoad();                
                /// <summary>
                /// 获得纹理特效
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap &getEffects() const;
                /// get the animated-texture animation duration
                /// <summary>
                /// 得到动态的，持续的纹理
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                Real getAnimationDuration() const;
                /// <summary>
                /// 为该单元设置纹理过滤，用简单的接口
                /// </summary>
                /// <param name="filterType">高级过滤类型</param>
                /// <returns></returns>
                void setTextureFiltering(EarthView::World::Graphic::TextureFilterOptions filterType);
                /// <summary>
                /// 为该纹理单元设置单一的过滤选项
                /// </summary>
                /// <param name="filterType">设置的过滤类型</param>
                /// <param name="opts">设置的过滤选项</param>
                /// <returns></returns>
                void setTextureFiltering(EarthView::World::Graphic::FilterType ftype, EarthView::World::Graphic::FilterOptions opts);
                /// <summary>
                /// 为该纹理单元设置详细的过滤选项
                /// </summary>
                /// <param name="minFilter">当减少纹理尺寸时用minFilter,其值可以是以下三个：FO_POINT, FO_LINEAR or FO_ANISOTROPIC</param>
                /// <param name="magFilter">当增加纹理尺寸时用magFilter,其值可以是以下三个：FO_POINT, FO_LINEAR or FO_ANISOTROPIC</param>
                /// <param name="mipFilter">多级渐进纹理过滤,可以用FO_NONE (turns off mipmapping), FO_POINT or FO_LINEAR (trilinear filtering)</param>
                /// <returns></returns>
                void setTextureFiltering(EarthView::World::Graphic::FilterOptions minFilter, EarthView::World::Graphic::FilterOptions magFilter, EarthView::World::Graphic::FilterOptions mipFilter);
                /// <summary>
                /// 对给定的类型获得纹理过滤
                /// </summary>
                /// <param name="ftpye">过滤类型</param>
                /// <returns></returns>
                EarthView::World::Graphic::FilterOptions getTextureFiltering(EarthView::World::Graphic::FilterType ftpye) const;
                /// <summary>
                /// 对该纹理设置各向异性程度
                /// </summary>
                /// <param name="maxAniso">最大各向差异性，在2和硬件所提供的最大值之间，默认值是1</param>
                /// <returns></returns>
                void setTextureAnisotropy(ev_uint32 maxAniso);
                /// get this layer texture anisotropy level
                /// <summary>
                /// 获得该纹理各向异性程度
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint32 getTextureAnisotropy() const;
                /// <summary>
                /// 设置多级渐进纹理的偏移值
                /// </summary>
                /// <param name="bias">可以是正的也可以是负的</param>
                /// <returns></returns>
                void setTextureMipmapBias(ev_real32 bias);
                /// <summary>
                /// 设置多级渐进纹理的偏移值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_real32 getTextureMipmapBias() const;
                /// <summary>
                /// 为该纹理单元状态设置排序参考
                /// </summary>
                /// <param name="compositorName">排序名称</param>
                /// <param name="textureName">纹理名称</param>
                /// <param name="mrtIndex">指定第几个纹理</param>
                /// <returns></returns>
                void setCompositorReference(const EVString &compositorName, const EVString &textureName, ev_size_t mrtIndex);
                void setCompositorReference(const EVString &compositorName, const EVString &textureName);
                /// <summary>
                /// 获得纹理参考的合成器的名称
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回名称</returns>
                const EVString &getReferencedCompositorName() const;
                /// <summary>
                /// 获得纹理参考的在合成器中的纹理名称
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回名称</returns>
                const EVString &getReferencedTextureName() const;
                /// <summary>
                /// 获得纹理参考的合成器中纹理的MRT索引值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_size_t getReferencedMRTIndex() const;

                ///得到父类EarthView::World::Graphic::CPass对象
                EarthView::World::Graphic::CPass *getParent() const;
                /// Internal method for preparing this object for load, as part of CMaterial::prepare
                void _prepare();
                /// Internal method for undoing the preparation this object as part of CMaterial::unprepare
                void _unprepare();
                /// Internal method for loading this object as part of CMaterial::load */
                void _load();
                /// Internal method for unloading this object as part of CMaterial::unload */
                void _unload();
                //// Returns whether this unit has texture coordinate generation that depends on the camera
                /// <summary>
                /// 判断该单元是否有依靠摄像机产生的纹理坐标
                /// </summary>
                /// <param name=""></param>
                /// <returns>有的话返回true，否则返回false</returns>
                ev_bool hasViewRelativeTextureCoordinateGeneration() const;
                /// <summary>
                /// 判断是否已经加载
                /// </summary>
                /// <param name=""></param>
                /// <returns>加载返回true，没有加载返回false</returns>
                ev_bool isLoaded() const;
				/// <summary>
				/// 通报需要重新编译
				/// </summary>
				/// <param name="name">纹理单元状态的名称，是可选的</param>
				/// <returns></returns>
                void _notifyNeedsRecompile();
                /// <summary>
                /// 设置纹理单元状态名称
                /// </summary>
                /// <param name="name">纹理单元状态的名称，是可选的</param>
                /// <returns></returns>
                void setName(const EVString &name);
                /// <summary>
                /// 得到纹理单元状态名称
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EVString &getName() const;
                /// <summary>
                /// 为纹理边框名称设置纹理别名
                /// </summary>
                /// <param name="name">别名，可以是任意字符，不是唯一的</param>
                /// <returns></returns>
                void setTextureNameAlias(const EVString &name);
                /// <summary>
                /// 得到纹理单元的纹理别名
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回获得的别名</returns>
                const EVString &getTextureNameAlias() const;
                /// <summary>
                /// 应用纹理别名
                /// </summary>
                /// <param name="aliasList">纹理名称键值对</param>
                /// <param name="apply">true，应用；false，只匹配别名并不应用</param>
                /// <returns>假如匹配的纹理别名找到了，则返回true，否则返回false</returns>
                ev_bool applyTextureAliases(const EarthView::World::Core::AliasTextureNamePairList &aliasList, const ev_bool apply);
                ev_bool applyTextureAliases(const EarthView::World::Core::AliasTextureNamePairList &aliasList);
                /// <summary>
                /// 当所属通路改变时，进行提示
                /// </summary>
                /// <param name="parent">parent</param>
                /// <returns></returns>
                void _notifyParent(EarthView::World::Graphic::CPass *parent);
                /// <summary>
                /// 得到给定序号的纹理指针
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::CTexturePtr &_getTexturePtr() const;
                /// <summary>
                /// 得到给定序号的纹理指针
                /// </summary>
                /// <param name="frame">图画</param>
                /// <returns></returns>
                const EarthView::World::Graphic::CTexturePtr &_getTexturePtr(ev_size_t frame) const;
                /// <summary>
                /// 为当前序号设置纹理指针
                /// </summary>
                /// <param name="texptr"></param>
                /// <returns></returns>
                void _setTexturePtr(const EarthView::World::Graphic::CTexturePtr &texptr);
                /// <summary>
                /// 设置给定序号的纹理指针
                /// </summary>
                /// <param name="texptr"></param>
                /// <param name="frame">图画</param>
                /// <returns></returns>
                void _setTexturePtr(const EarthView::World::Graphic::CTexturePtr &texptr, ev_size_t frame);
                /// <summary>
                /// 得到纹理动画控制器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CController *_getAnimController() const;
            public:
                /// State
                //// The current animation frame.
                ev_uint32 mCurrentFrame;
                //// Duration of animation in seconds
                Real mAnimDuration;
                ev_bool mCubic; 			/// is this a series of 6 2D textures to make up a cube?

                EarthView::World::Graphic::TextureType mTextureType;
                EarthView::World::Graphic::PixelFormat mDesiredFormat;
                ev_int32 mTextureSrcMipmaps; 			/// CRequest number of mipmaps
                ev_uint32 mTextureCoordSetIndex;
                EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode mAddressMode;
                EarthView::World::Graphic::CColourValue mBorderColour;
                EarthView::World::Graphic::CLayerBlendModeEx mColourBlendMode;
                EarthView::World::Graphic::SceneBlendFactor mColourBlendFallbackSrc;
                EarthView::World::Graphic::SceneBlendFactor mColourBlendFallbackDest;
                EarthView::World::Graphic::CLayerBlendModeEx mAlphaBlendMode;
                mutable ev_bool mTextureLoadFailed;
                ev_bool mIsAlpha;
                ev_bool mHwGamma;
                mutable ev_bool mRecalcTexMatrix;
                Real mUMod, mVMod;
                Real mUScale, mVScale;
                EarthView::World::Spatial::Math::CRadian mRotate;
                mutable EarthView::World::Spatial::Math::CMatrix4 mTexModMatrix;
                ///缩小过滤
                EarthView::World::Graphic::FilterOptions mMinFilter;
                ///放大过滤
                EarthView::World::Graphic::FilterOptions mMagFilter;
                ///mip过滤
                EarthView::World::Graphic::FilterOptions mMipFilter;
                ///最大各向异性
                ev_uint32 mMaxAniso;
                ///设置用于mipmap计算的偏向值,总是ev_real32，不是Real型的
                ev_real32 mMipmapBias;
                ev_bool mIsDefaultAniso;
                ev_bool mIsDefaultFiltering;
                ///绑定类型 （片断处理单元还是绑定到顶点处理单元）
                EarthView::World::Graphic::CTextureUnitState::BindingType mBindingType;
                ///内容类型
                EarthView::World::Graphic::CTextureUnitState::ContentType mContentType;
                //// The index of the referenced texture if referencing an MRT in a compositor
                ev_size_t mCompositorRefMrtIndex;

                /// allow for fast copying of the basic members.
                ///
                ///vector<EVString> mFrames;
                EarthView::World::Core::StringVector mFrames;
                ///mutable vector<EarthView::World::Graphic::CTexturePtr> mFramePtrs;
                mutable EarthView::World::Graphic::ShadowTextureList mFramePtrs;
                EVString mName;               			/// optional name for the TUS
                EVString mTextureNameAlias;       			/// optional alias for texture frames
                EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap mEffects;
                ////The data that references the compositor
                EVString mCompositorRefName;
                EVString mCompositorRefTexName;
                /// preserving even if assign from others
                ///
                EarthView::World::Graphic::CPass *mParent;
                EarthView::World::Graphic::CController *mAnimController;
                /// <summary>
                /// 重新计算纹理变换矩阵
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void recalcTextureMatrix() const;
                /// <summary>
                /// 创建纹理动画控制器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void createAnimController();
                /// <summary>
                /// 创建纹理效果控制器
                /// </summary>
                /// <param name="effect">纹理效果</param>
                /// <returns></returns>
                void createEffectController(EarthView::World::Graphic::CTextureUnitState::TextureEffect &effect);
                /// <summary>
                /// 确保给定序号的纹理已准备就绪
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void ensurePrepared(ev_size_t frame) const;

                /// <summary>
                /// 确保给定序号的纹理已加载完成
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void ensureLoaded(ev_size_t frame) const;
            };
        }
    }
}

#endif

