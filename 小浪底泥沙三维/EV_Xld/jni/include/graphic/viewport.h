#ifndef __Viewport_H__
#define __Viewport_H__
#include "graphic/graphic_config.h"
#include <core/stringdefines.h>
#include "colourvalue.h"
#include "frustum_def.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CVector2;
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
            class CCamera;
            class CRenderTarget;
            class CRenderQueueInvocationSequence;
            /// <summary>
            /// 视口，渲染目标中的渲染区域
            /// 抽象类
            /// </summary>
            class EV_GRAPHIC_DLL CViewport : public EarthView::World::Core::CAllocatedObject
            {
            public:
                /*
                [7/3/2012 WangJian]
                  add for 1.8
                */
                /** Listener interface so you can be notified of Viewport changes. */
                class EV_GRAPHIC_DLL CViewportListener : public EarthView::World::Core::CAllocatedObject
                {
                public:
                    CViewportListener() {}                  
                    virtual ~CViewportListener() {}
                    /** Notification of when a new camera is set to target listening Viewport. */
                    virtual void viewportCameraChanged(EarthView::World::Graphic::CViewport *viewport) {}
                    /** Notification of when target listening Viewport's dimensions changed. */
                    virtual void viewportDimensionsChanged(EarthView::World::Graphic::CViewport *viewport) {}
                    /** Notification of when target listening Viewport's is destroyed. */
                    virtual void viewportDestroyed(EarthView::World::Graphic::CViewport *viewport) {}
ev_private:
					CViewportListener(_in EarthView::World::Core::CNameValuePairList *pList) {}
                };
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CViewport(_in EarthView::World::Core::CNameValuePairList *pList);
            public:

                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="cam">指针指向摄像机的影像资源</param>
                /// <param name="target">指针指向渲染目标</param>
                /// <param name="left"></param>
                /// <param name="top"></param>
                /// <param name="width"></param>
                /// <param name="height">视口的维数，值在0到1之间</param>
                /// <param name="ZOrder"></param>
                /// <returns></returns>
                CViewport(
                    EarthView::World::Graphic::CCamera *ref_cam,
                    EarthView::World::Graphic::CRenderTarget *ref_target,
                    Real left, Real top,
                    Real width, Real height,
                    ev_int32 ZOrder);

                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CViewport();
                /// <summary>
                /// 更新视口维数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _updateDimensions();
                /// <summary>
                /// 更新视口的内容
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void update();

                /// <summary>
                /// 通知清空视口，但不运行更新
                /// </summary>
                /// <param name="buffers">标明哪一个缓存元素需要清除</param>
                /// <param name="colour">如果FBT_COLOUR被包含，清空颜色值</param>
                /// <param name="depth">如果FBT_DEPTH被包含，清空深度值</param>
                /// <param name="stencil">如果FBT_STENCIL被包含，清空模板值</param>
                /// <returns></returns>
                void clear(ev_uint32 buffers, const EarthView::World::Graphic::CColourValue &colour, Real depth , ev_uint16 stencil );
                /// <summary>
                /// 通知清空视口，但不运行更新
                /// </summary>
                /// <param name="buffers">标明哪一个缓存元素需要清除</param>
                /// <param name="colour">如果FBT_COLOUR被包含，清空颜色值</param>
                /// <param name="depth">如果FBT_DEPTH被包含，清空深度值</param>
                /// <returns></returns>
                void clear(ev_uint32 buffers , const EarthView::World::Graphic::CColourValue &colour , Real depth );
                /// <summary>
                /// 通知清空视口，但不运行更新
                /// </summary>
                /// <param name="buffers">标明哪一个缓存元素需要清除</param>
                /// <param name="colour">如果FBT_COLOUR被包含，清空颜色值</param>
                /// <returns></returns>
                void clear(ev_uint32 buffers , const EarthView::World::Graphic::CColourValue &colour );
                /// <summary>
                /// 通知清空视口，但不运行更新
                /// </summary>
                /// <param name="buffers">标明哪一个缓存元素需要清除</param>
                /// <returns></returns>
                void clear(ev_uint32 buffers );
                /// <summary>
                /// 通知清空视口，但不运行更新
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clear( );
                /// <summary>
                /// 获得渲染目标这个视口的指针
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CRenderTarget *getTarget() const;
                /// <summary>
                /// 获得视口摄像机的指针
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CCamera *getCamera() const;
                /// <summary>
                /// 设置渲染视口的摄像机
                /// </summary>
                /// <param name="cam"></param>
                /// <returns></returns>
                void setCamera( EarthView::World::Graphic::CCamera *ref_cam);
                /// <summary>
                /// 获得视口的Z-Order
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_int32 getZOrder() const;

                /// <summary>
                /// 获得视口的一个相对left维数，值在0到1之间
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                Real getLeft() const;
                /// <summary>
                /// 获得视口的一个相对top维数，值在0到1之间
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                Real getTop() const;
                /// <summary>
                /// 获得视口的一个相对宽度维数，值在0到1之间
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                Real getWidth() const;

                /// <summary>
                /// 获得视口的一个相对高度维数，值在0到1之间
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                Real getHeight() const;

                /// <summary>
                /// 获得视口的一个实际left维数，像素值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_int32 getActualLeft() const;

                /// <summary>
                /// 获得视口的一个实际top维数，像素值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_int32 getActualTop() const;

                /// <summary>
                /// 获得视口的一个实际宽度维数，像素值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_int32 getActualWidth() const;

                /// <summary>
                /// 获得视口的一个实际高度维数，像素值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_int32 getActualHeight() const;

                /// <summary>
                /// 设置维数
                /// </summary>
                /// <param name="left"></param>
                /// <param name="top"></param>
                /// <param name="width"></param>
                /// <param name="height">相对于目标大小的高度维数</param>
                /// <returns></returns>
                void setDimensions(Real left, Real top, Real width, Real height);
                /// <summary>
                /// 设置视口的方位模型
                /// </summary>
                /// <param name="orientationMode"></param>
                /// <param name="setDefault"></param>
                /// <returns></returns>
                void setOrientationMode(OrientationMode orientationMode, ev_bool setDefault );
                /// <summary>
                /// 设置视口的方位模型
                /// </summary>
                /// <param name="orientationMode"></param>
                /// <returns></returns>
                void setOrientationMode(OrientationMode orientationMode);
                /// <summary>
                /// 获得视口的方位模型
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::OrientationMode getOrientationMode() const;
                /// <summary>
                /// 设置视口的初始方位模型
                /// </summary>
                /// <param name="orientationMode"></param>
                /// <returns></returns>
                static void setDefaultOrientationMode(OrientationMode orientationMode);
                /// <summary>
                /// 获得视口的初始方位模型
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                static EarthView::World::Graphic::OrientationMode getDefaultOrientationMode();
                /// <summary>
                /// 设置视口的初始背景颜色
                /// </summary>
                /// <param name="colour"></param>
                /// <returns></returns>
                void setBackgroundColour(const EarthView::World::Graphic::CColourValue &colour);
                /// <summary>
                /// 获得视口的背景颜色
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::CColourValue &getBackgroundColour() const;

				/// <summary>
				/// 计算视口投影观察矩阵
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Spatial::Math::CMatrix4 calculateViewportProjectViewMatrix()const;
                /*
                [7/3/2012 WangJian]
                  add fro 1.8
                */
                /** Sets the initial depth buffer value of the viewport (before
                    rendering). Default is 1
                */
                void setDepthClear( Real depth );
                /** Gets the default depth buffer value to which the viewport is cleared.
                */
                Real getDepthClear() const;
                /// <summary>
                /// 决定在渲染之前是否清空视口
                /// </summary>
                /// <param name="clear"></param>
                /// <param name="buffers"></param>
                /// <returns></returns>
                void setClearEveryFrame(ev_bool clear, ev_uint32 buffers );
                /// <summary>
                /// 决定在渲染之前是否清空视口
                /// </summary>
                /// <param name="clear"></param>
                /// <returns></returns>
                void setClearEveryFrame(ev_bool clear);
                /// <summary>
                /// 决定是否在每一个帧之前清空视口
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool getClearEveryFrame() const;
                /// <summary>
                /// 获得哪一个缓存被清空
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint32 getClearBuffers() const;
                /// <summary>
                /// 设置是否视口应该自动更新
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void setAutoUpdated(ev_bool autoupdate);

                /// <summary>
                /// 获得视口是否自动更新，如果渲染循环或CRenderTarget::update已经使用
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool isAutoUpdated() const;
                /// <summary>
                /// 设置视口使用的材质的方案
                /// </summary>
                /// <param name="schemeName">方案名称</param>
                /// <returns></returns>
                void setMaterialScheme(const EVString &schemeName);

                /// <summary>
                /// 获得视口使用的材质的方案
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EVString &getMaterialScheme() const;
                /// <summary>
                /// 获得实际的维数
                /// </summary>
                /// <param name="left"></param>
                /// <param name="top"></param>
                /// <param name="width"></param>
                /// <param name="height"></param>
                /// <returns></returns>
                void getActualDimensions(
                    _inout ev_int32 &left, _inout ev_int32 &top, _inout ev_int32 &width, _inout ev_int32 &height ) const;
                ev_bool _isUpdated() const;
                void _clearUpdatedFlag();
                /// <summary>
                /// 在最后的更新中获得渲染面的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint32 _getNumRenderedFaces() const;
                /// <summary>
                /// 在最后的更新中获得渲染批次的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint32 _getNumRenderedBatches() const;
				/// <summary>
				/// 在最后的更新中获得渲染顶点的数量
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_uint32 _getNumRenderedVertices() const;
                /// <summary>
                /// 设置视口是否显示覆盖的对象
                /// </summary>
                /// <param name="enabled">如果为true显示覆盖的对象，否则不显示</param>
                /// <returns></returns>
                void setOverlaysEnabled(ev_bool enabled);
                /// <summary>
                /// 返回视口是否显示覆盖的对象
                /// </summary>
                /// <param name=""></param>
                /// <returns>如果为true显示覆盖的对象，否则不显示</returns>
                ev_bool getOverlaysEnabled() const;
                /// <summary>
                /// 设置视口是否显示天空
                /// </summary>
                /// <param name="enabled">如果为true显示天空，否则不显示</param>
                /// <returns></returns>
                void setSkiesEnabled(ev_bool enabled);
                /// <summary>
                /// 返回视口是否显示天空
                /// </summary>
                /// <param name=""></param>
                /// <returns>如果为true显示天空，否则不显示</returns>
                ev_bool getSkiesEnabled() const;
                /// <summary>
                /// 设置视口是否显示阴影
                /// </summary>
                /// <param name="enabled">如果为true显示阴影，否则不显示</param>
                /// <returns></returns>
                void setShadowsEnabled(ev_bool enabled);
                /// <summary>
                /// 返回视口是否显示阴影
                /// </summary>
                /// <param name=""></param>
                /// <returns>如果为true显示阴影，否则不显示</returns>
                ev_bool getShadowsEnabled() const;
                /// <summary>
                /// 设置视口可见度的屏蔽
                /// </summary>
                /// <param name="mask"></param>
                /// <returns></returns>
                void setVisibilityMask(ev_uint32 mask);
                /// <summary>
                /// 获得视口可见度的屏蔽
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint32 getVisibilityMask() const;
                /// <summary>
                /// 设置渲染目标自定义EarthView::World::Graphic::CRenderQueueInvocationSequence的使用
                /// </summary>
                /// <param name="sequenceName">EarthView::World::Graphic::CRenderQueueInvocationSequence的名字</param>
                /// <returns></returns>
                virtual void setRenderQueueInvocationSequenceName(const EVString &sequenceName);
                /// <summary>
                /// 获得渲染目标的渲染队列调用次序的名字
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EVString getRenderQueueInvocationSequenceName() const;

                /// <summary>
                /// 获得调用序列，如果使用标准的则会返回NULL
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CRenderQueueInvocationSequence *_getRenderQueueInvocationSequence();
                /// <summary>
                /// 点坐标到屏幕坐标的转换
                /// </summary>
                /// <param name="v"></param>
                /// <param name="orientationMode"></param>
                /// <param name="outv"></param>
                /// <returns></returns>
                void pointOrientedToScreen(const EarthView::World::Spatial::Math::CVector2 &v, ev_int32 orientationMode, _inout EarthView::World::Spatial::Math::CVector2 &outv);
                /// <summary>
                /// 点坐标到屏幕坐标的转换
                /// </summary>
                /// <param name="orientedX"></param>
                /// <param name="orientedY"></param>
                /// <param name="orientationMode"></param>
                /// <param name="screenX"></param>
                /// <param name="screenY"></param>
                /// <returns></returns>
                void pointOrientedToScreen(Real orientedX, Real orientedY, ev_int32 orientationMode,
                                           _inout Real &screenX, _inout Real &screenY);

                /*
                [7/3/2012 WangJian]
                  add for 1.8
                */
                //// Add a listener to this camera
                void addListener(EarthView::World::Graphic::CViewport::CViewportListener *ref_l);
                //// Remove a listener to this camera
                void removeListener(EarthView::World::Graphic::CViewport::CViewportListener *l);
            protected:
                EarthView::World::Graphic::CCamera *mCamera;
                EarthView::World::Graphic::CRenderTarget *mTarget;
                /// Relative dimensions, irrespective of target dimensions (0..1)
                ev_real32 mRelLeft, mRelTop, mRelWidth, mRelHeight;
                /// Actual dimensions, based on target dimensions
                ev_int32 mActLeft, mActTop, mActWidth, mActHeight;
                //// ZOrder
                ev_int32 mZOrder;
                //// Background options
                EarthView::World::Graphic::CColourValue mBackColour;
                Real mDepthClearValue;
                ev_bool mClearEveryFrame;
                ev_uint32 mClearBuffers;
                ev_bool mUpdated;
                ev_bool mShowOverlays;
                ev_bool mShowSkies;
                ev_bool mShowShadows;
                ev_uint32 mVisibilityMask;
                /// Render queue invocation sequence name
                EVString mRQSequenceName;
                EarthView::World::Graphic::CRenderQueueInvocationSequence *mRQSequence;
                //// CMaterial scheme
                EVString mMaterialSchemeName;
                //// EarthView::World::Graphic::CViewport orientation mode
                EarthView::World::Graphic::OrientationMode mOrientationMode;
                static EarthView::World::Graphic::OrientationMode mDefaultOrientationMode;
                //// Automatic rendering on/off
                ev_bool mIsAutoUpdated;

                typedef vector<EarthView::World::Graphic::CViewport::CViewportListener *> ListenerList;
                ListenerList mListeners;
            };
            /** @} */
            /** @} */
        }
    }
}

#endif

