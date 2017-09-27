#ifndef __AutoParamDataSource_H_
#define __AutoParamDataSource_H_
#include "graphic/graphic_config.h"
#include "light.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CVector4;
				class CMatrix4;
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

            class VisibleObjectsBoundsInfo;
            class LightList;
            class CFrustum;
            class CRenderTarget;
            class CPass;
            /// <summary>
            /// 自动参数数据源类
            /// 此类是为了给GPU提供一些参数。
            /// </summary>
            class EV_GRAPHIC_DLL CAutoParamDataSource : public EarthView::World::Core::CAllocatedObject
            {
            protected:
                const CLight &getLight(ev_size_t index) const;
                mutable EarthView::World::Spatial::Math::CMatrix4 mWorldMatrix[256];
                mutable ev_size_t mWorldMatrixCount;
                mutable const EarthView::World::Spatial::Math::CMatrix4 *mWorldMatrixArray;
                mutable EarthView::World::Spatial::Math::CMatrix4 mWorldViewMatrix;
                mutable EarthView::World::Spatial::Math::CMatrix4 mViewProjMatrix;
                mutable EarthView::World::Spatial::Math::CMatrix4 mWorldViewProjMatrix;
                mutable EarthView::World::Spatial::Math::CMatrix4 mInverseWorldMatrix;
                mutable EarthView::World::Spatial::Math::CMatrix4 mInverseWorldViewMatrix;
                mutable EarthView::World::Spatial::Math::CMatrix4 mInverseViewMatrix;
                mutable EarthView::World::Spatial::Math::CMatrix4 mInverseTransposeWorldMatrix;
                mutable EarthView::World::Spatial::Math::CMatrix4 mInverseTransposeWorldViewMatrix;
                mutable EarthView::World::Spatial::Math::CVector4 mCameraPosition;
                mutable EarthView::World::Spatial::Math::CVector4 mCameraPositionObjectSpace;
                mutable EarthView::World::Spatial::Math::CMatrix4 mTextureViewProjMatrix[EV_MAX_SIMULTANEOUS_LIGHTS];
                mutable EarthView::World::Spatial::Math::CMatrix4 mTextureWorldViewProjMatrix[EV_MAX_SIMULTANEOUS_LIGHTS];
                mutable EarthView::World::Spatial::Math::CMatrix4 mSpotlightViewProjMatrix[EV_MAX_SIMULTANEOUS_LIGHTS];
                mutable EarthView::World::Spatial::Math::CMatrix4 mSpotlightWorldViewProjMatrix[EV_MAX_SIMULTANEOUS_LIGHTS];
                mutable EarthView::World::Spatial::Math::CVector4 mShadowCamDepthRanges[EV_MAX_SIMULTANEOUS_LIGHTS];
                mutable EarthView::World::Spatial::Math::CMatrix4 mViewMatrix;
                mutable EarthView::World::Spatial::Math::CMatrix4 mProjectionMatrix;
                mutable Real mDirLightExtrusionDistance;
                mutable EarthView::World::Spatial::Math::CVector4 mLodCameraPosition;
                mutable EarthView::World::Spatial::Math::CVector4 mLodCameraPositionObjectSpace;
                mutable ev_bool mWorldMatrixDirty;
                mutable ev_bool mViewMatrixDirty;
                mutable ev_bool mProjMatrixDirty;
                mutable ev_bool mWorldViewMatrixDirty;
                mutable ev_bool mViewProjMatrixDirty;
                mutable ev_bool mWorldViewProjMatrixDirty;
                mutable ev_bool mInverseWorldMatrixDirty;
                mutable ev_bool mInverseWorldViewMatrixDirty;
                mutable ev_bool mInverseViewMatrixDirty;
                mutable ev_bool mInverseTransposeWorldMatrixDirty;
                mutable ev_bool mInverseTransposeWorldViewMatrixDirty;
                mutable ev_bool mCameraPositionDirty;
                mutable ev_bool mCameraPositionObjectSpaceDirty;
                mutable ev_bool mTextureViewProjMatrixDirty[EV_MAX_SIMULTANEOUS_LIGHTS];
                mutable ev_bool mTextureWorldViewProjMatrixDirty[EV_MAX_SIMULTANEOUS_LIGHTS];
                mutable ev_bool mSpotlightViewProjMatrixDirty[EV_MAX_SIMULTANEOUS_LIGHTS];
                mutable ev_bool mSpotlightWorldViewProjMatrixDirty[EV_MAX_SIMULTANEOUS_LIGHTS];
                mutable ev_bool mShadowCamDepthRangesDirty[EV_MAX_SIMULTANEOUS_LIGHTS];
                mutable EarthView::World::Graphic::CColourValue mAmbientLight;
                mutable EarthView::World::Graphic::CColourValue mFogColour;
                mutable EarthView::World::Spatial::Math::CVector4 mFogParams;
                mutable ev_int32 mPassNumber;
                mutable EarthView::World::Spatial::Math::CVector4 mSceneDepthRange;
                mutable ev_bool mSceneDepthRangeDirty;
                mutable ev_bool mLodCameraPositionDirty;
                mutable ev_bool mLodCameraPositionObjectSpaceDirty;
                const EarthView::World::Graphic::CRenderable *mCurrentRenderable;
                const EarthView::World::Graphic::CCamera *mCurrentCamera;
                ev_bool mCameraRelativeRendering;
                EarthView::World::Spatial::Math::CVector3 mCameraRelativePosition;
                const EarthView::World::Graphic::LightList *mCurrentLightList;
                const EarthView::World::Graphic::CFrustum *mCurrentTextureProjector[EV_MAX_SIMULTANEOUS_LIGHTS];
                const EarthView::World::Graphic::CRenderTarget *mCurrentRenderTarget;
                const EarthView::World::Graphic::CViewport *mCurrentViewport;
                const EarthView::World::Graphic::CSceneManager *mCurrentSceneManager;
                const EarthView::World::Graphic::VisibleObjectsBoundsInfo *mMainCamBoundsInfo;
                const EarthView::World::Graphic::CPass *mCurrentPass;
                CLight mBlankLight;
				mutable EarthView::World::Spatial::Math::CMatrix4 mTextureViewMatrix;
				mutable EarthView::World::Spatial::Math::CMatrix4 mTempSoftShadowTextureViewProjMatrix[8];
				mutable EarthView::World::Spatial::Math::CMatrix4 mTempSoftShadowViewProjMatrix[8];
				mutable ev_bool mSoftShadow;
				mutable ev_uint32 mFrameNumber;
            public:
                /// <summary>
                /// 构造函数
                /// 定义一个节点名称
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CAutoParamDataSource();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CAutoParamDataSource();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CAutoParamDataSource(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 设置当前渲染对象
                /// </summary>
                /// <param name="rend">渲染</param>
                /// <returns></returns>
                virtual void setCurrentRenderable(const EarthView::World::Graphic::CRenderable *ref_rend);
               
                /// <summary>
                /// 设置世界矩阵               
                /// </summary>
                /// <param name="m"></param>
                /// <param name="count"></param>
                /// <returns></returns>
                virtual void setWorldMatrices(const EarthView::World::Spatial::Math::CMatrix4 *ref_m, ev_size_t count);
                
                /// <summary>
                /// 设置当前摄像机
                /// </summary>
                /// <param name="cam"></param>
                /// <param name="useCameraRelative"></param>
                /// <returns></returns>
                virtual void setCurrentCamera(const EarthView::World::Graphic::CCamera *ref_cam, ev_bool useCameraRelative);

                /// <summary>
                /// 设置当前光线列表
                /// </summary>
                /// <param name="ll"></param>
                /// <returns></returns>
                virtual void setCurrentLightList(const LightList *ref_ll);

                /// <summary>
                /// 设置当前对象投影对象纹理
                /// 为方便索引
                /// </summary>
                /// <param name="frust"></param>
                /// <param name="index"></param>
                /// <returns></returns>
                virtual void setTextureProjector(const EarthView::World::Graphic::CFrustum *ref_frust, ev_size_t index);

                /// <summary>
                /// 设置当前渲染目标
                /// </summary>
                /// <param name="target"></param>
                /// <returns></returns>
                virtual void setCurrentRenderTarget(const EarthView::World::Graphic::CRenderTarget *ref_target);

                /// <summary>
                /// 设置当前视口
                /// </summary>
                /// <param name="viewport">视口</param>
                /// <returns></returns>
                virtual void setCurrentViewport(const EarthView::World::Graphic::CViewport *ref_viewport);

                /// <summary>
                /// 设置方向光产生阴影的延伸距离                
                /// </summary>
                /// <param name="dist"></param>
                /// <returns></returns>
                virtual void setShadowDirLightExtrusionDistance(Real dist);

                /// <summary>
                /// 设置主摄像机的场景边界信息
                /// </summary>
                /// <param name="info">可见对象信息</param>
                /// <returns></returns>
                virtual void setMainCamBoundsInfo(EarthView::World::Graphic::VisibleObjectsBoundsInfo *ref_info);
                /// <summary>
                /// 设置当前场景管理器
                /// </summary>
                /// <param name="sm">场景管理器</param>
                /// <returns></returns>
                virtual void setCurrentSceneManager(const EarthView::World::Graphic::CSceneManager *ref_sm);

                /// <summary>
                /// 设置当前渲染通路
                /// </summary>
                /// <param name="pass">渲染通路</param>
                /// <returns></returns>
                virtual void setCurrentPass(const EarthView::World::Graphic::CPass *ref_pass);

                /// <summary>
                /// 获取世界变换矩阵
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CMatrix4 &getWorldMatrix() const;

                /// <summary>
                /// 获取世界变换矩阵数组
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CMatrix4 *getWorldMatrixArray() const;

                /// <summary>
                /// 获取世界变换矩阵数组的长度
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_size_t getWorldMatrixCount() const;
                /// <summary>
                /// 获取观察矩阵
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CMatrix4 &getViewMatrix() const;
                /// <summary>
                /// 获取观察、投影矩阵(二者相乘的结果)
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CMatrix4 &getViewProjectionMatrix() const;
                /// <summary>
                /// 获取投影矩阵
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CMatrix4 &getProjectionMatrix() const;
                /// <summary>
                /// 获取世界、观察、投影矩阵(三者相乘的结果)
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CMatrix4 &getWorldViewProjMatrix() const;
                /// <summary>
                /// 获取世界投影矩阵
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CMatrix4 &getWorldViewMatrix() const;
                /// <summary>
                /// 世界矩阵的逆矩阵
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CMatrix4 &getInverseWorldMatrix() const;
                /// <summary>
                /// 世界世界、观察矩阵的逆矩阵
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CMatrix4 &getInverseWorldViewMatrix() const;
                /// <summary>
                /// 获取观察矩阵的逆矩阵
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CMatrix4 &getInverseViewMatrix() const;
                /// <summary>
                /// 世界变换矩阵的逆转置矩阵
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CMatrix4 &getInverseTransposeWorldMatrix() const;
                /// <summary>
                /// 世界变换、观察矩阵的逆转置矩阵
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CMatrix4 &getInverseTransposeWorldViewMatrix() const;
                /// <summary>
                /// 获取摄像机坐标
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CVector4 &getCameraPosition() const;
				/// <summary>
				/// 获取摄像机相对坐标
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual EarthView::World::Spatial::Math::CVector4 getCameraRelativePosition() const;
                /// <summary>
                /// 获取对象空间中的摄像机位置坐标
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CVector4 &getCameraPositionObjectSpace() const;
                /// <summary>
                /// 获取多细节层次摄像机位置坐标
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CVector4 &getLodCameraPosition() const;
                /// <summary>
                /// 获取对象空间中多细节层次摄像机位置坐标
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CVector4 &getLodCameraPositionObjectSpace() const;
                /// <summary>
                /// 是否有光源列表
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool hasLightList() const;

                /// <summary>
                /// 获得光源的序号
                /// </summary>
                /// <param name="index">检索</param>
                /// <returns></returns>
                virtual ev_real32 getLightNumber(ev_size_t index) const;
                /// <summary>
                /// 获取光源数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_real32 getLightCount() const;
				/// <summary>
				/// 获取光照是否启用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_real32 getLightingEnabled() const;

                /// <summary>
                /// 询问指定光源是否投射阴影
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                virtual ev_real32 getLightCastsShadows(ev_size_t index) const;
                /// <summary>
                /// 获取指定光源的漫反射颜色
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                virtual const EarthView::World::Graphic::CColourValue &getLightDiffuseColour(ev_size_t index) const;
                /// <summary>
                /// 获取指定光源的镜面反射颜色
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                virtual const EarthView::World::Graphic::CColourValue &getLightSpecularColour(ev_size_t index) const;
                /// <summary>
                /// 获取指定光源的增强后的漫反射颜色
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                virtual const EarthView::World::Graphic::CColourValue getLightDiffuseColourWithPower(ev_size_t index) const;
                /// <summary>
                /// 获取指定光源的增强后的镜面反射颜色
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                virtual const EarthView::World::Graphic::CColourValue getLightSpecularColourWithPower(ev_size_t index) const;
                /// <summary>
                /// 获取指定光源位置
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CVector3 &getLightPosition(ev_size_t index) const;
                /// <summary>
                /// 获取指定光源四维矢量
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                virtual EarthView::World::Spatial::Math::CVector4 getLightAs4DVector(ev_size_t index) const;
                /// <summary>
                /// 获取指定光源方向
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CVector3 &getLightDirection(ev_size_t index) const;
                /// <summary>
                /// 获取指定光源强度
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                virtual Real getLightPowerScale(ev_size_t index) const;
                /// <summary>
                /// 获取光源衰减度
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                virtual EarthView::World::Spatial::Math::CVector4 getLightAttenuation(ev_size_t index) const;
                /// <summary>
                /// 获取聚光灯光源参数
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                virtual EarthView::World::Spatial::Math::CVector4 getSpotlightParams(ev_size_t index) const;
                /// <summary>
                /// 设置环境光颜色
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                virtual void setAmbientLightColour(const EarthView::World::Graphic::CColourValue &ambient);
                /// <summary>
                /// 获取环境光颜色
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Graphic::CColourValue &getAmbientLightColour() const;
                /// <summary>
                /// 获取材质对环境光的反射率
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Graphic::CColourValue &getSurfaceAmbientColour() const;
                /// <summary>
                /// 获取材质对漫反射光的反射率
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Graphic::CColourValue &getSurfaceDiffuseColour() const;
                /// <summary>
                /// 获取材质对镜面光的反射率
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Graphic::CColourValue &getSurfaceSpecularColour() const;
                /// <summary>
                /// 获取材质对自发光的反射率
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Graphic::CColourValue &getSurfaceEmissiveColour() const;
                /// <summary>
                /// 获取材质亮度
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual Real getSurfaceShininess() const;
				/// <summary>
				/// 获取顶点颜色跟踪类型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_real32 getVertexColourTracking() const;
                /// <summary>
                /// 获取反射后的环境光颜色
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CColourValue getDerivedAmbientLightColour() const;
                /// <summary>
                /// 获取反射后的场景色
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CColourValue getDerivedSceneColour() const;
                /// <summary>
                /// 设置雾
                /// </summary>
                /// <param name="mode">类型</param>
                /// <param name="colour"></param>
                /// <param name="expDensity"></param>
                /// <param name="linearStart"></param>
                /// <param name="linearEnd"></param>
                /// <returns></returns>
                virtual void setFog(EarthView::World::Graphic::FogMode mode, const EarthView::World::Graphic::CColourValue &colour, Real expDensity, Real linearStart, Real linearEnd);
                /// <summary>
                /// 获取雾的颜色
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Graphic::CColourValue &getFogColour() const;
                /// <summary>
                /// 获取雾的参数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CVector4 &getFogParams() const;
                /// <summary>
                /// 获取纹理视图投射矩阵
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CMatrix4 &getTextureViewProjMatrix(ev_size_t index) const;
				/// <summary>
				/// 获取柔化阴影纹理视图投射矩阵
				/// </summary>
				/// <param name="index"></param>
				/// <param name="projIndex"></param>
				/// <returns></returns>
				virtual const EarthView::World::Spatial::Math::CMatrix4 &getSoftShadowTextureViewProjMatrix(ev_size_t index,ev_uint16 projIndex) const;
				/// <summary>
				/// 获取柔化阴影视图投射矩阵
				/// </summary>
				/// <param name="index"></param>
				/// <param name="projIndex"></param>
				/// <returns></returns>
				virtual const EarthView::World::Spatial::Math::CMatrix4 &getSoftShadowViewProjMatrix(ev_size_t index,ev_uint16 projIndex) const;
				/// <summary>
				/// 获取纹理变换观察矩阵
				/// </summary>
				/// <param name="index"></param>
				/// <returns></returns>
				virtual const EarthView::World::Spatial::Math::CMatrix4 &getTextureViewMatrix(ev_size_t index) const;
                /// <summary>
                /// 获取纹理世界观察投射矩阵
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CMatrix4 &getTextureWorldViewProjMatrix(ev_size_t index) const;
                /// <summary>
                /// 获取聚光灯观察投射矩阵
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CMatrix4 &getSpotlightViewProjMatrix(ev_size_t index) const;
                /// <summary>
                /// 获取聚光灯世界观察投射矩阵
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CMatrix4 &getSpotlightWorldViewProjMatrix(ev_size_t index) const;
                /// <summary>
                /// 获取纹理变换矩阵
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CMatrix4 &getTextureTransformMatrix(ev_size_t index) const;
                /// <summary>
                /// 获取当前渲染目标
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Graphic::CRenderTarget *getCurrentRenderTarget() const;
                /// <summary>
                /// 获取当前渲染对象
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Graphic::CRenderable *getCurrentRenderable() const;
                /// <summary>
                /// 获取当前渲染通路
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Graphic::CPass *getCurrentPass() const;
                /// <summary>
                /// 获取指定纹理的尺寸
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                virtual EarthView::World::Spatial::Math::CVector4 getTextureSize(ev_size_t index) const;
                /// <summary>
                /// 获取知道纹理尺寸的倒数
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                virtual EarthView::World::Spatial::Math::CVector4 getInverseTextureSize(ev_size_t index) const;
                /// <summary>
                /// 获取包纹理的尺寸
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                virtual EarthView::World::Spatial::Math::CVector4 getPackedTextureSize(ev_size_t index) const;
                /// <summary>
                /// 获取阴影延伸距离
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                virtual Real getShadowExtrusionDistance() const;

				/// <summary>
				/// 获取场景深度范围
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CVector4 &getSceneDepthRange() const;

				/// <summary>
				/// 获取阴影场景深度范围
				/// </summary>
				/// <param name="index"></param>
				/// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CVector4 &getShadowSceneDepthRange(ev_size_t index) const;

				/// <summary>
				/// 获取阴影颜色
				/// </summary>
				/// <param name="index"></param>
				/// <returns></returns>
                virtual const EarthView::World::Graphic::CColourValue &getShadowColour() const;

				/// <summary>
				/// 获取阴影颜色增益
				/// </summary>
				/// <returns></returns>
				virtual const Real getShadowColorRRatio() const;
				virtual const Real getShadowColorGRatio() const;
				virtual const Real getShadowColorBRatio() const;

                virtual EarthView::World::Spatial::Math::CMatrix4 getInverseViewProjMatrix() const;
                virtual EarthView::World::Spatial::Math::CMatrix4 getInverseTransposeViewProjMatrix() const;
                virtual EarthView::World::Spatial::Math::CMatrix4 getTransposeViewProjMatrix() const;
                virtual EarthView::World::Spatial::Math::CMatrix4 getTransposeViewMatrix() const;
                virtual EarthView::World::Spatial::Math::CMatrix4 getInverseTransposeViewMatrix() const;
                virtual EarthView::World::Spatial::Math::CMatrix4 getTransposeProjectionMatrix() const;
                virtual EarthView::World::Spatial::Math::CMatrix4 getInverseProjectionMatrix() const;
                virtual EarthView::World::Spatial::Math::CMatrix4 getInverseTransposeProjectionMatrix() const;
                virtual EarthView::World::Spatial::Math::CMatrix4 getTransposeWorldViewProjMatrix() const;
                virtual EarthView::World::Spatial::Math::CMatrix4 getInverseWorldViewProjMatrix() const;
                virtual EarthView::World::Spatial::Math::CMatrix4 getInverseTransposeWorldViewProjMatrix() const;
                virtual EarthView::World::Spatial::Math::CMatrix4 getTransposeWorldViewMatrix() const;
                virtual EarthView::World::Spatial::Math::CMatrix4 getTransposeWorldMatrix() const;
                virtual Real getTime() const;
                virtual Real getTime_0_X(Real x) const;
                virtual Real getCosTime_0_X(Real x) const;
                virtual Real getSinTime_0_X(Real x) const;
                virtual Real getTanTime_0_X(Real x) const;
                virtual EarthView::World::Spatial::Math::CVector4 getTime_0_X_packed(Real x) const;
                virtual Real getTime_0_1(Real x) const;
                virtual Real getCosTime_0_1(Real x) const;
                virtual Real getSinTime_0_1(Real x) const;
                virtual Real getTanTime_0_1(Real x) const;
                virtual EarthView::World::Spatial::Math::CVector4 getTime_0_1_packed(Real x) const;
                virtual Real getTime_0_2Pi(Real x) const;
                virtual Real getCosTime_0_2Pi(Real x) const;
                virtual Real getSinTime_0_2Pi(Real x) const;
                virtual Real getTanTime_0_2Pi(Real x) const;
                virtual EarthView::World::Spatial::Math::CVector4 getTime_0_2Pi_packed(Real x) const;
                virtual Real getFrameTime() const;
                virtual Real getFPS() const;
                virtual Real getViewportWidth() const;
                virtual Real getViewportHeight() const;
                virtual Real getInverseViewportWidth() const;
                virtual Real getInverseViewportHeight() const;
                virtual EarthView::World::Spatial::Math::CVector3 getViewDirection() const;
                virtual EarthView::World::Spatial::Math::CVector3 getViewSideVector() const;
                virtual EarthView::World::Spatial::Math::CVector3 getViewUpVector() const;
                virtual Real getFOV() const;
                virtual Real getNearClipDistance() const;
                virtual Real getFarClipDistance() const;
                virtual ev_int32 getPassNumber() const;
                virtual void setPassNumber(const ev_int32 passNumber);
                virtual void incPassNumber();
                virtual void updateLightCustomGpuParameter(const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry &constantEntry, CGpuProgramParameters *params) const;
				virtual Real getIsSoftShadowOpen() const;
				virtual Real getSoftShadowNearCilp() const;
				virtual Real getSoftShadowFarCilp() const;
				virtual Real getSoftShadowNearCilp(ev_uint8 index) const;
				virtual Real getSoftShadowFarCilp(ev_uint8 index) const;
				virtual EarthView::World::Spatial::Math::CVector4 getCascadeEyeSpaceDepth() const;
				virtual Real getSoftShadowLightBleedPower() const;
				virtual Real getSoftShadowDepthOffset() const;
				virtual Real getSoftShadowNormalFactor() const;
            };
        }
    }
}

#endif

