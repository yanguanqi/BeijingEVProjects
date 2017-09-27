#ifndef _LIGHT_H__
#define _LIGHT_H__
#include "graphic/graphic_config.h"
#include <mathengine/vector4.h>
#include <mathengine/planeboundedvolume.h>
#include "movableobject.h"
#include "shadowcamerasetup.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// <summary>
            /// 光源类
            /// 可以使用该类表现光源在场景中的变化,设置光源位置，类型等
            /// </summary>
            class EV_GRAPHIC_DLL CLight : public EarthView::World::Graphic::CMovableObject
            {
            public:
                /// <summary>
                /// 内部动态对象类
                /// 扩展覆盖，自定义其对象属性
                /// </summary>
                class EV_GRAPHIC_DLL CLightInternalAnimableObject : public EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject
                {
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="parent">父类</param>
                    /// <returns></returns>
                    CLightInternalAnimableObject(_in CLight *ref_parent);
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CLightInternalAnimableObject(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 为可动画的值名称创建公共指针
                    /// 复制CAnimableObject::createAnimableValue
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>可动画值名称公共指针</returns>
                    EarthView::World::Graphic::AnimableValuePtr createAnimableValue(_in const EVString &valueName);
                private:
                    EarthView::World::Graphic::CLight *mParent;

                };
            private:
                CLightInternalAnimableObject *mpAnimableObject;
            public:

                virtual EarthView::World::Graphic::AnimableValuePtr createAnimableValue(_in const EVString &valueName);
                virtual const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject *getAnimableObjectPtr();

                /// <summary>
                /// 排序时使用的临时标记
                /// </summary>
                Real tempSquareDist;


                /// <summary>
                /// 计算当前正方形距离世界位置的距离
                /// 内部方法
                /// </summary>
                /// <param name="worldPos">世界位置的三维矢量</param>
                /// <returns></returns>
                void _calcTempSquareDist(_in const EarthView::World::Spatial::Math::CVector3 &worldPos);
                /// <summary>
                /// 光源类型
                /// </summary>
                enum LightTypes
                {
                    LT_POINT = 0,			///点光源向所有方向平均的发送光线，只需要光源位置，不需要方向
                    LT_DIRECTIONAL = 1,			///有向光类似于平行光，从一个方向照射出来，因此需要方向，不需要位置
                    LT_SPOTLIGHT = 2			///聚光源，类似于手电筒，设置光源起点，照射方向，光源内锥角度大小和外锥角度大小
                };
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CLight();
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns></returns>
                CLight(const EVString &name);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CLight(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CLight();
                /// <summary>
                /// 设置光源类型
                /// </summary>
                /// <param name="type">光源类型</param>
                /// <returns></returns>
                void setType(EarthView::World::Graphic::CLight::LightTypes type);
                /// <summary>
                /// 获取光源类型
                /// </summary>
                /// <param name=""></param>
                /// <returns>光源类型</returns>
                EarthView::World::Graphic::CLight::LightTypes getType() const;
                /// <summary>
                /// 设置漫射光颜色
                /// 设置色光三原色：红绿蓝
                /// </summary>
                /// <param name="red">红色值</param>
                /// <param name="green">绿色值</param>
                /// <param name="blue">蓝色值</param>
                /// <returns></returns>
                void setDiffuseColour(Real red, Real green, Real blue);
                /// <summary>
                /// 设置漫射光颜色
                /// 传入颜色值对象
                /// </summary>
                /// <param name="colour">颜色</param>
                /// <returns</returns>
                void setDiffuseColour(_in const EarthView::World::Graphic::CColourValue &colour);
                /// <summary>
                /// 获取漫射光颜色
                /// </summary>
                /// <returns>本对象</returns>
                const EarthView::World::Graphic::CColourValue &getDiffuseColour() const;
                /// <summary>
                /// 设置镜面反射光颜色
                /// 设置色光三原色：红绿蓝
                /// </summary>
                /// <param name="red">红色</param>
                /// <param name="green">绿色</param>
                /// <param name="blue">蓝色</param>
                /// <returns></returns>
                void setSpecularColour(Real red, Real green, Real blue);
                /// <summary>
                /// 设置镜面反射光颜色
                /// 传入颜色值对象
                /// </summary>
                /// <param name="colour">颜色</param>
                /// <returns</returns>
                void setSpecularColour(_in const EarthView::World::Graphic::CColourValue &colour);
                /// <summary>
                /// 获取镜面反射光颜色
                /// </summary>
                /// <returns>本对象</returns>
                const EarthView::World::Graphic::CColourValue &getSpecularColour() const;
                /// <summary>
                /// 设置光源衰减参数
                /// 随着距离变化，光线如何衰减
                /// </summary>
                /// <param name="range">在世界单位下，光源的最高射程</param>
                /// <param name="constant">衰减公式常数值：1.0为不衰减，0.0为完全衰减</param>
                /// <param name="linear">线性值：1表示衰减平均分布在距离中</param>
                /// <param name="quadratic">二次值：添加一个曲率</param>
                /// <returns></returns>
                void setAttenuation(Real range, Real constant, Real linear, Real quadratic);
                /// <summary>
                /// 获取范围值
                /// </summary>
                /// <returns>返回range值</returns>
                Real getAttenuationRange() const;
                /// <summary>
                /// 获取衰减公式常数值
                /// </summary>
                /// <returns>返回常数值</returns>
                Real getAttenuationConstant() const;
                /// <summary>
                /// 获取线性值
                /// </summary>
                /// <returns>返回线性值</returns>
                Real getAttenuationLinear() const;
                /// <summary>
                /// 获取衰减公式二次值
                /// </summary>
                /// <returns>返回二次值</returns>
                Real getAttenuationQuadric() const;
                /// <summary>
                /// 设置光源位置坐标
                /// 只适用于点光源
                /// </summary>
                /// <param name="x">横坐标</param>
                /// <param name="y">纵坐标</param>
                /// <param name="z">高程值</param>
                /// <returns></returns>
                void setPosition(Real x, Real y, Real z);
                /// <summary>
                /// 设置光源位置坐标
                /// 只适用于点光源
                /// </summary>
                /// <param name="vec">三维向量</param>
                /// <returns></returns>
                void setPosition(_in const EarthView::World::Spatial::Math::CVector3 &vec);
                /// <summary>
                /// 获取点光源坐标
                /// 只适用于点光源
                /// </summary>
                /// <returns>返回坐标值</returns>
                const EarthView::World::Spatial::Math::CVector3 &getPosition() const;
                /// <summary>
                /// 设置光源照射方向
                /// 只适用于平行光
                /// </summary>
                /// <param name="x">横坐标</param>
                /// <param name="y">纵坐标</param>
                /// <param name="z">高程值</param>
                /// <returns></returns>
                void setDirection(Real x, Real y, Real z);
                /// <summary>
                /// 设置光源照射方向
                /// 只适用于平行光
                /// </summary>
                /// <param name="vec">三维向量</param>
                /// <returns></returns>
                void setDirection(_in const EarthView::World::Spatial::Math::CVector3 &vec);
                /// <summary>
                /// 获取点光源照射方向
                /// 只适用于平行光
                /// </summary>
                /// <returns>返回坐标值</returns>
                const EarthView::World::Spatial::Math::CVector3 &getDirection() const;
                /// <summary>
                /// 设置聚光灯照射范围
                /// </summary>
                /// <param name="innerAngle">内锥角</param>
                /// <param name="outerAngle">外锥角</param>
                /// <param name="falloff">衰减率：1.0意思为线性衰减，小于1.0衰减的慢，大于1.0衰减的快，默认为1.0</param>
                /// <returns></returns>
                void setSpotlightRange(const EarthView::World::Spatial::Math::CRadian &innerAngle, const EarthView::World::Spatial::Math::CRadian &outerAngle, Real falloff);
                /// <summary>
                /// 设置聚光灯照射范围
                /// </summary>
                /// <param name="innerAngle">内锥角</param>
                /// <param name="outerAngle">外锥角</param>
                /// <returns></returns>
                void setSpotlightRange(const EarthView::World::Spatial::Math::CRadian &innerAngle, const EarthView::World::Spatial::Math::CRadian &outerAngle);
                /// <summary>
                /// 获取聚光灯内锥角
                /// </summary>
                /// <returns>角度值</returns>
                const EarthView::World::Spatial::Math::CRadian &getSpotlightInnerAngle() const;
                /// <summary>
                /// 获取聚光灯外锥角
                /// </summary>
                /// <returns>角度值</returns>
                const EarthView::World::Spatial::Math::CRadian &getSpotlightOuterAngle() const;
                /// <summary>
                /// 获取衰减率
                /// 内锥角与外锥角直接的光线
                /// </summary>
                /// <returns>衰减率</returns>
                Real getSpotlightFalloff() const;
                /// <summary>
                /// 设置聚光灯内锥角
                /// </summary>
                /// <param name="val">弧度</param>
                /// <returns></returns>
                void setSpotlightInnerAngle(_in const EarthView::World::Spatial::Math::CRadian &val);
                /// <summary>
                /// 设置聚光灯外锥角
                /// </summary>
                /// <param name="val">弧度</param>
                /// <returns></returns>
                void setSpotlightOuterAngle(_in const EarthView::World::Spatial::Math::CRadian &val);
                /// <summary>
                /// 设置聚光灯内外锥角之间的衰减率
                /// </summary>
                /// <param name="val">弧度</param>
                /// <returns></returns>
                void setSpotlightFalloff(Real val);
                /** Set the near clip plane distance to be used by spotlights that use light
                		 clipping, allowing you to render spots as if they start from further
                		 down their frustum.
                		 @param near The near distance
                		 */
                void setSpotlightNearClipDistance(Real nearClip)
                {
                    mSpotNearClip = nearClip;
                }

                /** Get the near clip plane distance to be used by spotlights that use light
                 clipping.
                 */
                Real getSpotlightNearClipDistance() const
                {
                    return mSpotNearClip;
                }


                /// <summary>
                /// 设置光源强度
                /// 只在高动态范围（HDR）渲染的时候考虑此因素
                /// </summary>
                /// <param name="power">光源的额定强度，默认为1.0</param>
                /// <returns></returns>
                void setPowerScale(Real power);
                /// <summary>
                /// 获取光源强度
                /// 只在高动态范围（HDR）渲染的时候考虑此因素
                /// </summary>
                /// <returns>光源强度</returns>
                Real getPowerScale() const;
                /// <summary>
                /// 通报挂接
                /// 内部方法                
                /// </summary>
                /// <param name="parent">父节点名称</param>
                /// <param name="isTagPoint">是否挂接在节点下</param>
                /// <returns></returns>
                void _notifyAttached(EarthView::World::Graphic::CNode *ref_parent, ev_bool isTagPoint );
                void _notifyAttached(EarthView::World::Graphic::CNode *ref_parent);
                /// <summary>
                /// 通报被移动                
                /// 内部方法
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _notifyMoved();
                /// <summary>
                /// 获取当前对象的平行轴边框盒                
                /// 边框盒在当地坐标系中
                /// </summary>
                /// <param name=""></param>
                /// <returns>边框盒</returns>
                const EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const;
                /// <summary>
                /// 更新渲染队列
                /// 移动对象必须添加到CRenderable
                /// 内部方法                
                /// </summary>
                /// <param name="queue">渲染队列</param>
                /// <returns></returns>
                void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);
                /// <summary>
                /// 获取移动对象类型的名称                
                /// </summary>
                /// <param name=""></param>
                /// <returns>名称</returns>
                EVString getMovableType() const;
                /// <summary>
                /// 取得光源的位置，包括从节点累积的平移                
                /// </summary>
                /// <param name="cameraRelativeIfSet">设置为true，使用当前摄像机比例关系</param>
                /// <returns>三维矢量</returns>
                const EarthView::World::Spatial::Math::CVector3 &getDerivedPosition(ev_bool cameraRelativeIfSet) const;
                const EarthView::World::Spatial::Math::CVector3 &getDerivedPosition() const;
                /// <summary>
                /// 取得光源的方向，包括从附属累积的旋转
                /// </summary>
                /// <param name=""></param>
                /// <returns>三维矢量</returns>
                const EarthView::World::Spatial::Math::CVector3 &getDerivedDirection() const;
                /// <summary>
                /// 设置是否可见
                /// 如果不可见，则对场景渲染无影响                
                void setVisible(ev_bool visible);
                /// <summary>
                /// 获取当前对象的球体限定半径                
                /// </summary>
                /// <param name=""></param>
                /// <returns>半径值</returns>
                Real getBoundingRadius() const;
                /// <summary>
                /// 获取作为四维矢量的光源的详细参数
                /// </summary>
                /// <param name="cameraRelativeIfSet">true，如果已经创建，返回摄像机缩放关系数据</param>
                /// <returns></returns>
                EarthView::World::Spatial::Math::CVector4 getAs4DVector(ev_bool cameraRelativeIfSet ) const;
                EarthView::World::Spatial::Math::CVector4 getAs4DVector() const;
                /// <summary>
                /// 计算近裁剪体
                /// 内部方法
                /// 光源和摄像机之间的近裁剪矩形体
                /// </summary>
                /// <param name="cam">摄像机</param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CPlaneBoundedVolume &_getNearClipVolume(_in const EarthView::World::Graphic::CCamera *const cam) const;
                /// <summary>
                /// 计算平截头体外部的裁剪体
                /// 内部方法
                /// </summary>
                /// <param name="cam">摄像机</param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::PlaneBoundedVolumeList &_getFrustumClipVolumes(_in const EarthView::World::Graphic::CCamera *const cam) const;
                /// <summary>
                /// 获得类型标志信息
                /// </summary>
                /// <param name=""></param>
                /// <returns>标志</returns>
                ev_uint32 getTypeFlags() const;
                /// <summary>
                /// 使用自定义阴影摄像机
                /// </summary>
                /// <param name="customShadowSetup">自定义阴影摄像机</param>
                /// <returns></returns>
                void setCustomShadowCameraSetup(_in const EarthView::World::Graphic::ShadowCameraSetupPtr &customShadowSetup);
                /// <summary>
                /// 重置默认阴影摄像机
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void resetCustomShadowCameraSetup();
                /// <summary>
                /// 获取自定义阴影摄像机
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::ShadowCameraSetupPtr &getCustomShadowCameraSetup() const;
                /// <summary>
                /// 访问可渲染对象
                /// 允许迭代器遍历渲染实例，当被询问时，移动对象将添加到渲染队列
                /// </summary>
                /// <param name="visitor"></param>
                /// <param name="debugRenderables">为false，只渲染正常可渲染对象；为true，调试渲染对象也将被包括</param>
                /// <returns></returns>
                void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor, ev_bool debugRenderables );
                void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor);
                /// <summary>
                /// 在当前渲染对象中检索光源
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_size_t _getIndexInFrame() const;
                /// <summary>
                /// 唤醒检索线程
                /// </summary>
                /// <param name="i"></param>
                /// <returns></returns>
                void _notifyIndexInFrame(ev_size_t i);

                /// <summary>
                /// 设置从可见光源阴影到摄像机最大距离
                /// </summary>
                /// <param name="distance">距离</param>
                /// <returns></returns>
                void setShadowFarDistance(Real distance);
                /// <summary>
                /// 重置从可见光源阴影到摄像机最大距离
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void resetShadowFarDistance();
                /// <summary>
                /// 获取从可见光源阴影到摄像机最大距离
                /// </summary>
                /// <param name=""></param>
                /// <returns>距离值</returns>
                Real getShadowFarDistance() const;
                /// <summary>
                /// 获取从可见光源阴影到摄像机最大距离的平方值
                /// </summary>
                /// <param name=""></param>
                /// <returns>距离值</returns>
                Real getShadowFarDistanceSquared() const;
                /// <summary>
                /// 设置阴影摄像机使用的近裁剪面距离
                /// 如果光源照射到阴影纹理
                /// </summary>
                /// <param name="nearClip">近裁剪面距离，或使用主摄像机设置</param>
                /// <returns></returns>
                void setShadowNearClipDistance(Real nearClip);
                /// <summary>
                /// 获取阴影摄像机使用的近裁剪面距离
                /// 如果光源照射到阴影纹理
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                Real getShadowNearClipDistance() const;
                /// <summary>
                /// 派生出阴影摄像机近裁剪面距离
                /// 如果有光源从光源派生，如果设置光源从主摄像机派生
                /// </summary>
                /// <param name="maincam">主摄像机名称</param>
                /// <returns></returns>
                Real _deriveShadowNearClipDistance(_in const EarthView::World::Graphic::CCamera *maincam) const;
                /// <summary>
                /// 设置阴影摄像机使用的远裁剪面距离
                /// 如果光源照射到阴影纹理
                /// </summary>
                /// <param name="nearClip">远裁剪面距离，或使用主摄像机设置</param>
                /// <returns></returns>
                void setShadowFarClipDistance(Real farClip);
                /// <summary>
                /// 获取阴影摄像机使用的远裁剪面距离
                /// 如果光源照射到阴影纹理
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                Real getShadowFarClipDistance() const;
                /// <summary>
                /// 派生出阴影摄像机远裁剪面距离
                /// 如果有光源从光源派生，如果设置光源从主摄像机派生
                /// </summary>
                /// <param name="maincam">主摄像机名称</param>
                /// <returns></returns>
                Real _deriveShadowFarClipDistance(_in const EarthView::World::Graphic::CCamera *maincam) const;
                /// <summary>
                /// 设置光源关联摄像机
                /// 用于摄像机相关对象渲染
                /// </summary>
                /// <param name="cam">摄像机</param>
                /// <returns></returns>
                void _setCameraRelative(EarthView::World::Graphic::CCamera *cam);
                /// <summary>
                /// 设置光源自定义参数
                /// 用于计算渲染细节，像GPU参数
                /// </summary>
                /// <param name="index">检索</param>
                /// <param name="value">关联值</param>
                /// <returns></returns>
                void setCustomParameter(ev_uint16 index, const EarthView::World::Spatial::Math::CVector4 &value);
                /// <summary>
                /// 得到光源自定义参数
                /// 用于计算渲染细节，像GPU参数
                /// </summary>
                /// <param name="index">检索</param>
                /// <returns>关联值</returns>
                const EarthView::World::Spatial::Math::CVector4 &getCustomParameter(ev_uint16 index) const;
                /// <summary>
                /// 更新一个自定义EarthView::World::Graphic::CGpuProgramParameters常数
                /// </summary>
                /// <param name="paramIndex">更新索引常数</param>
                /// <param name="constantEntry">从程序参数获取自动常数</param>
                /// <param name="params">参数</param>
                /// <returns></returns>
                virtual void _updateCustomGpuParameter(ev_uint16 paramIndex, const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry &constantEntry,
                                                       EarthView::World::Graphic::CGpuProgramParameters *params) const;
            ev_internal:
                /// <summary>
                /// 同步父节点
                /// 内部方法
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void update() const;
            protected:
                const EVString &getAnimableDictionaryName() const;
                void initialiseAnimableDictionary(EarthView::World::Core::StringVector &vec) const;
                EarthView::World::Graphic::CLight::LightTypes mLightType;
                EarthView::World::Spatial::Math::CVector3 mPosition;
                EarthView::World::Graphic::CColourValue mDiffuse;
                EarthView::World::Graphic::CColourValue mSpecular;
                EarthView::World::Spatial::Math::CVector3 mDirection;
                EarthView::World::Spatial::Math::CRadian mSpotOuter;
                EarthView::World::Spatial::Math::CRadian mSpotInner;
                Real mSpotFalloff;
                Real mSpotNearClip;
                Real mRange;
                Real mAttenuationConst;
                Real mAttenuationLinear;
                Real mAttenuationQuad;
                Real mPowerScale;
                ev_size_t mIndexInFrame;
                ev_bool mOwnShadowFarDist;
                Real mShadowFarDist;
                Real mShadowFarDistSquared;

                Real mShadowNearClipDist;
                Real mShadowFarClipDist;

                mutable EarthView::World::Spatial::Math::CVector3 mDerivedPosition;
                mutable EarthView::World::Spatial::Math::CVector3 mDerivedDirection;
                mutable EarthView::World::Spatial::Math::CVector3 mDerivedCamRelativePosition;
                mutable ev_bool mDerivedCamRelativeDirty;
                EarthView::World::Graphic::CCamera *mCameraToBeRelativeTo;
                static EVString msMovableType;
                mutable EarthView::World::Spatial::Math::CPlaneBoundedVolume mNearClipVolume;
                mutable EarthView::World::Spatial::Math::PlaneBoundedVolumeList mFrustumClipVolumes;
                /// <summary>
                /// 是否导出转换
                /// </summary>
                mutable ev_bool mDerivedTransformDirty;
                /// <summary>
                /// 定义自定义摄像机阴影设置
                /// </summary>
                mutable EarthView::World::Graphic::ShadowCameraSetupPtr mCustomShadowCameraSetup;
                typedef map<ev_uint16, EarthView::World::Spatial::Math::CVector4> CustomParameterMap;
                /// <summary>
                /// 存储用户自定义光线参数
                /// </summary>
                CustomParameterMap mCustomParameters;
            };
            /// <summary>
            /// 光线工厂类
            /// 创建光线实例
            /// </summary>
            class EV_GRAPHIC_DLL CLightFactory : public EarthView::World::Graphic::CMovableObjectFactory
            {
            ev_internal:
                /// <summary>
                /// 创建实例
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="params">名称键值列表</param>
                /// <returns>实例</returns>
                EarthView::World::Graphic::CMovableObject *createInstanceImpl( const EVString &name, const EarthView::World::Core::NameValuePairList *params);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CLightFactory(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CLightFactory();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CLightFactory();
                static EVString FACTORY_TYPE_NAME;
                /// <summary>
                /// 获得光线的类型
                /// </summary>
                /// <param name=""></param>
                /// <returns>光线类型</returns>
                EVString getType() const;
                /// <summary>
                /// 销毁实例
                /// </summary>
                /// <param name="obj">实例</param>
                /// <returns></returns>
                void destroyInstance(_in EarthView::World::Graphic::CMovableObject *obj);

            };
        }
    }
}

#endif

