#ifndef __RenderTarget_H__
#define __RenderTarget_H__
#pragma once
#include "graphic/graphic_config.h"
#include <core/stringdefines.h>
#include "pixelformat.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CCamera;
            class CViewport;
            class CRenderTargetListener;
            class CPixelBox;
            class CTimer;
            class CDepthBuffer;
            /// <summary>
            /// 'canvas'可以获得渲染操作的结果
            /// 这个抽象类定义了渲染操作的所有渲染目标的公共根
            /// </summary>
            class EV_GRAPHIC_DLL CRenderTarget : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                /// <summary>r
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CRenderTarget(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                enum StatFlags
                {
                    SF_NONE           = 0,
                    SF_FPS            = 1,
                    SF_AVG_FPS        = 2,
                    SF_BEST_FPS       = 4,
                    SF_WORST_FPS      = 8,
                    SF_TRIANGLE_COUNT = 16,
                    SF_ALL            = 65535			///0xFFFF
                };
                struct FrameStats
                {
                    ev_real32 lastFPS;
                    ev_real32 avgFPS;
                    ev_real32 bestFPS;
                    ev_real32 worstFPS;
                    ev_uint32 bestFrameTime;
                    ev_uint32 worstFrameTime;
                    ev_size_t triangleCount;
                    ev_size_t batchCount;
					ev_size_t vertexCount;
                };
                enum FrameBuffer
                {
                    FB_FRONT,
                    FB_BACK,
                    FB_AUTO
                };
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CRenderTarget();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CRenderTarget();
                /// <summary>
                /// 获得渲染目标的名字
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EVString& getName() const; 
                /// <summary>
                /// 找回渲染目标的信息
                /// </summary>
                /// <param name="width">渲染目标的宽</param>
                /// <param name="height">渲染目标的高</param>
                /// <param name="colourDepth">渲染目标的颜色深度</param>
                /// <returns></returns>
                virtual void getMetrics(_out ev_uint32 &width, _out ev_uint32 &height, _out ev_uint32 &colourDepth);
                /// <summary>
                /// 获得渲染目标的宽
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_uint32 getWidth() const;
                /// <summary>
                /// 获得渲染目标的高
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_uint32 getHeight() const;
                /// <summary>
                /// 获得渲染目标的颜色深度
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_uint32 getColourDepth() const;

                /**
                 * Sets the pool ID this RenderTarget should query from. Default value is POOL_DEFAULT.
                 *	@remarks
                 *		Changing the pool Id will cause the current depth buffer to be detached unless the old
                 *		id and the new one are the same
                 */
                void setDepthBufferPool( ev_uint16 poolId );
                ///Returns the pool ID this RenderTarget should query from. @see DepthBuffer
                ev_uint16 getDepthBufferPool() const;
                EarthView::World::Graphic::CDepthBuffer *getDepthBuffer() const;
                ///Returns false if couldn't attach
                virtual ev_bool attachDepthBuffer( EarthView::World::Graphic::CDepthBuffer *ref_depthBuffer );
                virtual void detachDepthBuffer();
                /** Detaches DepthBuffer without notifying it from the detach.
                	Useful when called from the DepthBuffer while it iterates through attached
                	RenderTargets (@see DepthBuffer::_setPoolId())
                */
                virtual void _detachDepthBuffer();
                /// <summary>
                /// 渲染目标更新内容
                /// </summary>
                /// <param name="swapBuffers">如果为true更新后立刻交换它的缓冲，否则不交换</param>
                /// <returns></returns>
                virtual void update(ev_bool swapBuffers );
                /// <summary>
                /// 渲染目标更新内容
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void update();

                /// <summary>
                /// 交换帧缓冲来显示下一个帧
                /// </summary>
                /// <param name="waitForVSync"></param>
                /// <returns></returns>
                virtual void swapBuffers(ev_bool waitForVSync);
                /// <summary>
                /// 交换帧缓冲来显示下一个帧
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void swapBuffers();

                /// <summary>
                /// 给渲染目标添加一个视口
                /// </summary>
                /// <param name="cam">摄像机从视口的哪一项内容开始被渲染</param>
                /// <param name="ZOrder">在渲染目标上视口的相对顺序</param>
                /// <param name="left">在渲染目标上视口左侧的相对位置，值的范围0-1之间</param>
                /// <param name="top">在渲染目标上视口上面的相对位置，值的范围0-1之间</param>
                /// <param name="width">在渲染目标上视口宽度的相对位置，值的范围0-1之间</param>
                /// <param name="height">在渲染目标上视口高度的相对位置，值的范围0-1之间</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CViewport *addViewport( EarthView::World::Graphic::CCamera *ref_cam, ev_int32 ZOrder, ev_real32 left, ev_real32 top ,
                                                ev_real32 width , ev_real32 height );
                /// <summary>
                /// 给渲染目标添加一个视口
                /// </summary>
                /// <param name="cam">摄像机从视口的哪一项内容开始被渲染</param>
                /// <param name="ZOrder">在渲染目标上视口的相对顺序</param>
                /// <param name="left">在渲染目标上视口左侧的相对位置，值的范围0-1之间</param>
                /// <param name="top">在渲染目标上视口上面的相对位置，值的范围0-1之间</param>
                /// <param name="width">在渲染目标上视口宽度的相对位置，值的范围0-1之间</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CViewport *addViewport( EarthView::World::Graphic::CCamera *ref_cam, ev_int32 ZOrder, ev_real32 left, ev_real32 top  , ev_real32 width );
                /// <summary>
                /// 给渲染目标添加一个视口
                /// </summary>
                /// <param name="cam">摄像机从视口的哪一项内容开始被渲染</param>
                /// <param name="ZOrder">在渲染目标上视口的相对顺序</param>
                /// <param name="left">在渲染目标上视口左侧的相对位置，值的范围0-1之间</param>
                /// <param name="top">在渲染目标上视口上面的相对位置，值的范围0-1之间</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CViewport *addViewport( EarthView::World::Graphic::CCamera *ref_cam, ev_int32 ZOrder, ev_real32 left, ev_real32 top );
                /// <summary>
                /// 给渲染目标添加一个视口
                /// </summary>
                /// <param name="cam">摄像机从视口的哪一项内容开始被渲染</param>
                /// <param name="ZOrder">在渲染目标上视口的相对顺序</param>
                /// <param name="left">在渲染目标上视口左侧的相对位置，值的范围0-1之间</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CViewport *addViewport( EarthView::World::Graphic::CCamera *ref_cam, ev_int32 ZOrder, ev_real32 left );
                /// <summary>
                /// 给渲染目标添加一个视口
                /// </summary>
                /// <param name="cam">摄像机从视口的哪一项内容开始被渲染</param>
                /// <param name="ZOrder">在渲染目标上视口的相对顺序</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CViewport *addViewport( EarthView::World::Graphic::CCamera *ref_cam, ev_int32 ZOrder );
                /// <summary>
                /// 给渲染目标添加一个视口
                /// </summary>
                /// <param name="cam">摄像机从视口的哪一项内容开始被渲染</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CViewport *addViewport( EarthView::World::Graphic::CCamera *ref_cam );
                /// <summary>
                /// 返回连接到渲染目标上视口的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_uint16 getNumViewports() const;
                /// <summary>
                /// 返回一个指针指向已给索引的视口
                /// </summary>
                /// <param name="index"></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CViewport *getViewport(ev_uint16 index);
                ///zxt updatefor v1.8

                /** Retrieves a pointer to the viewport with the given zorder.
                	@remarks throws if not found.
                */
                virtual EarthView::World::Graphic::CViewport *getViewportByZOrder(ev_int32 ZOrder);
                /** Returns true if and only if a viewport exists at the given ZOrder. */
                virtual bool hasViewportWithZOrder(ev_int32 ZOrder);

                /// <summary>
                /// 去除掉已给顺序的视口
                /// </summary>
                /// <param name="ZOrder"></param>
                /// <returns></returns>
                virtual void removeViewport(ev_int32 ZOrder);
                /// <summary>
                /// 去除掉渲染目标上所有的视口
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void removeAllViewports();
                /// <summary>
                /// 获得当前渲染操作的细节
                /// </summary>
                /// <param name="lastFPS">指向ev_real32类型，获得每秒帧的数量基于最后一次帧渲染</param>
                /// <param name="avgFPS">指向ev_real32类型，获得每秒帧的数量基于从渲染开始所有渲染帧的平均速率</param>
                /// <param name="bestFPS">指向ev_real32类型，获得每秒帧的数量基于从渲染开始已经实现的最好的速率</param>
                /// <param name="worstFPS">指向ev_real32类型，获得每秒帧的数量基于到目前为止最差的速率</param>
                /// <returns></returns>
                virtual void getStatistics(_inout ev_real32 &lastFPS, _inout ev_real32 &avgFPS,
                                           _inout ev_real32 &bestFPS, _inout ev_real32 &worstFPS) const;  			/// Access to stats
                /// <summary>
                /// 获得当前渲染操作的细节
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Graphic::CRenderTarget::FrameStats &getStatistics() const;
                /// <summary>
                /// 基于最后的帧渲染，获得每秒帧的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_real32 getLastFPS() const;
                /// <summary>
                /// 调用CRoot::startRendering之后，获得每秒平均帧的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_real32 getAverageFPS() const;
                /// <summary>
                /// 调用CRoot::startRendering之后，获得每秒最好的帧的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_real32 getBestFPS() const;
                /// <summary>
                /// 调用CRoot::startRendering之后，获得每秒最差的帧的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_real32 getWorstFPS() const;
                /// <summary>
                /// 获得最好的帧的时间
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_real32 getBestFrameTime() const;
                /// <summary>
                /// 获得最差的帧的时间
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_real32 getWorstFrameTime() const;
                /// <summary>
                /// 重新设置帧速率的统计
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void resetStatistics();
                /// <summary>
                /// 获得自定义的属性
                /// </summary>
                /// <param name="name">属性的名称</param>
                /// <param name="pData">指向结构的正确种类的内存来获得信息</param>
                /// <returns></returns>
                virtual void getCustomAttribute(const EVString &name, _inout void *pData);
                /// <summary>
                /// 向CRenderTarget中添加一个帧监听器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void addListener( EarthView::World::Graphic::CRenderTargetListener *ref_listener);
                /// <summary>
                /// 去除掉注册之前的帧监听器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void removeListener( EarthView::World::Graphic::CRenderTargetListener *listener);

                /// <summary>
                /// 去除掉实例中所有的帧监听器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void removeAllListeners();
                /// <summary>
                /// 设置渲染目标的优先权
                /// </summary>
                /// <param name="priority"></param>
                /// <returns></returns>
                virtual void setPriority( ev_uchar priority );
                /// <summary>
                /// 获得渲染目标的优先权
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_uchar getPriority() const;
                /// <summary>
                /// 获得或设置渲染目标的活跃状态
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool isActive() const;
                /// <summary>
                /// 设置渲染目标的活跃状态
                /// </summary>
                /// <param name="state"></param>
                /// <returns></returns>
                virtual void setActive( ev_bool state );
                /// <summary>
                /// 设置渲染目标是否自动更新，如果渲染循环或者是CRoot::_updateAllRenderTargets已经被使用
                /// </summary>
                /// <param name="autoupdate">如果为true渲染目标自动更新，否则只有当更新方法被调用时才更新</param>
                /// <returns></returns>
                virtual void setAutoUpdated(ev_bool autoupdate);

                /// <summary>
                /// 获得渲染目标是否自动更新，如果渲染循环或者是CRoot::_updateAllRenderTargets已经被使用
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool isAutoUpdated() const;
                /// <summary>
                /// 复制当前渲染目标的内容到一个像素盒
                /// </summary>
                /// <param name="dst"></param>
                /// <param name="buffer"></param>
                /// <returns></returns>
                virtual void copyContentsToMemory(const EarthView::World::Graphic::CPixelBox &dst, EarthView::World::Graphic::CRenderTarget::FrameBuffer buffer );
                /// <summary>
                /// 复制当前渲染目标的内容到一个像素盒
                /// </summary>
                /// <param name="dst"></param>
                /// <param name="buffer"></param>
                /// <returns></returns>
                virtual void copyContentsToMemory(const EarthView::World::Graphic::CPixelBox &dst);
                /// <summary>
                /// 提出一种像素格式来获得渲染目标中的数据
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::PixelFormat suggestPixelFormat() const;

                /// <summary>
                /// 将当前渲染目标的内容写到已命名的文件中
                /// </summary>
                /// <param name="filename"></param>
                /// <returns></returns>
                void writeContentsToFile(const EVString &filename);
                /// <summary>
                /// 将当前渲染目标的内容写到(PREFIX)(time-stamp)(SUFFIX)文件中
                /// </summary>
                /// <param name="filenamePrefix"></param>
                /// <param name="filenameSuffix"></param>
                /// <returns>返回文件的名字</returns>
                virtual EVString writeContentsToTimestampedFile(const EVString &filenamePrefix, const EVString &filenameSuffix);
                virtual ev_bool requiresTextureFlipping() const;
                /// <summary>
                /// 在最后的更新中获得渲染三角形的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_size_t getTriangleCount() const;

                /// <summary>
                /// 在最后的更新中获得渲染批次的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_size_t getBatchCount() const;

				/// <summary>
				/// 在最后的更新中获得渲染顶点的数量
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_size_t getVertexCount() const;

                /// <summary>
                /// 通知渲染目标摄像机已经移除
                /// </summary>
                /// <param name="cam"></param>
                /// <returns></returns>
                virtual void _notifyCameraRemoved(const EarthView::World::Graphic::CCamera *cam);
                /// <summary>
                /// 指出渲染目标是否是主要的窗体
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool isPrimary() const;
                /// <summary>
                /// 表明渲染中是否从线性颜色空间转换到RGB颜色空间
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool isHardwareGammaEnabled() const;
                /// <summary>
                /// 表明是否多个实例在渲染系统中，并且处于什么级别
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_uint32 getFSAA() const;
                /// <summary>
                /// 获得FSAA提示
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EVString getFSAAHint() const;
                /// <summary>
                /// 渲染目标的特殊接口
                /// </summary>
                class EV_GRAPHIC_DLL Impl : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    Impl(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    Impl();
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~Impl();
                };
                /// <summary>
                /// 获得渲染目标的特殊接口
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CRenderTarget::Impl *_getImpl();
                /// <summary>
                /// 手动的管理渲染，如'preRenderTargetUpdate'和初始化统计表
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _beginUpdate();
                /// <summary>
                /// 手动的管理已给的视口的渲染
                /// </summary>
                /// <param name="zorder">更新时的顺序</param>
                /// <param name="updateStatistics">是否更新统计表</param>
                /// <returns></returns>
                virtual void _updateViewport(ev_int32 zorder, ev_bool updateStatistics );
                /// <summary>
                /// 手动的管理已给的视口的渲染
                /// </summary>
                /// <param name="zorder">更新时候的顺序</param>
                /// <returns></returns>
                virtual void _updateViewport(ev_int32 zorder);
                /// <summary>
                /// 手动的管理已给的视口的渲染，即使不能自动更新
                /// </summary>
                /// <param name="viewport">必须和渲染目标绑定的想要更新的视口</param>
                /// <param name="updateStatistics">是否想要更新统计表</param>
                /// <returns></returns>
                virtual void _updateViewport( EarthView::World::Graphic::CViewport *viewport, ev_bool updateStatistics );
                /// <summary>
                /// 手动的管理已给的视口的渲染，即使不能自动更新
                /// </summary>
                /// <param name="viewport">必须和渲染目标绑定的想要更新的视口</param>
                /// <returns></returns>
                virtual void _updateViewport( EarthView::World::Graphic::CViewport *viewport);
                /// <summary>
                /// 手动的管理已给的视口的渲染，视口自动更新
                /// </summary>
                /// <param name="updateStatistics">是否想要更新统计表</param>
                /// <returns></returns>
                virtual void _updateAutoUpdatedViewports(ev_bool updateStatistics );
                /// <summary>
                /// 手动的管理已给的视口的渲染，视口自动更新
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _updateAutoUpdatedViewports();

                /// <summary>
                /// 手动的管理渲染，完成统计表的计算
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _endUpdate();
            protected:
                //// The name of this target.
                EVString mName;
                //// The priority of the render target.
                ev_uchar mPriority;
                ev_uint32 mWidth;
                ev_uint32 mHeight;
                ev_uint32 mColourDepth;
                ev_uint16		 mDepthBufferPoolId;
                EarthView::World::Graphic::CDepthBuffer	*mDepthBuffer;
                /// Stats
                EarthView::World::Graphic::CRenderTarget::FrameStats mStats;

                CTimer *mTimer ;
                ev_uint32 mLastSecond;
                ev_uint32 mLastTime;
                ev_size_t mFrameCount;
                ev_bool mActive;
                ev_bool mAutoUpdate;
                /// Hardware sRGB gamma conversion done on write?
                ev_bool mHwGamma;
                /// FSAA performed?
                ev_uint32 mFSAA;
                EVString mFSAAHint;
                void updateStats();
                typedef map<ev_int32, EarthView::World::Graphic::CViewport *> ViewportList;
                //// List of viewports, map on Z-order
                ViewportList mViewportList;
                typedef vector<EarthView::World::Graphic::CRenderTargetListener *> RenderTargetListenerList;
                RenderTargetListenerList mListeners;

            ev_internal:
                //// internal method for firing events
                virtual void firePreUpdate();
                //// internal method for firing events
                virtual void firePostUpdate();
                //// internal method for firing events
                virtual void fireViewportPreUpdate( EarthView::World::Graphic::CViewport *vp);
                //// internal method for firing events
                virtual void fireViewportPostUpdate( EarthView::World::Graphic::CViewport *vp);
                //// internal method for firing events
                virtual void fireViewportAdded( EarthView::World::Graphic::CViewport *vp);
                //// internal method for firing events
                virtual void fireViewportRemoved( EarthView::World::Graphic::CViewport *vp);

                /// <summary>
                /// 内部update()的执行
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void updateImpl();
            };
            /** @} */
            /** @} */
        }
    }
}
/// Namespace
#endif

