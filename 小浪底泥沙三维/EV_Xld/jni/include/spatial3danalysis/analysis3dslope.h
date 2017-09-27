#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CANALYSIS3DSLOPE_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CANALYSIS3DSLOPE_H

#include "ianalysis3dtool.h"
#include "geometry3d/geometry3d/wideline.h"

namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			class CImageOverlayer;
		}
	}
}

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				class CThreadFuncSlope;
				class CFrameListenerSlope;
				/// <summary>
				/// 坡度分析类
				/// </summary>
				class EV_ANALYSIS3D_DLL CAnalysis3DSlope : public EarthView::World::Spatial3D::Analysis::IAnalysis3DTool
				{
					friend class CThreadFuncSlope;
					friend class CFrameListenerSlope;

				protected:
					class CSlopeWideLineRenderableListener : public EarthView::World::Graphic::CRenderable::CRenderableListener
					{
					public:
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>
						CSlopeWideLineRenderableListener();
						/// <summary>
						/// 析构函数
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>
						virtual ~CSlopeWideLineRenderableListener();

						/// <summary>
						/// 渲染开始时向外通知的事件
						/// </summary>
						/// <param name="sm">渲染场景</param>
						/// <param name="rsys">渲染系统</param>
						/// <param name="renderable">renderable</param>
						/// <returns>如果自动执行渲染过程返回true,手动执行返回false</returns>
						virtual ev_bool preRender( EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys,EarthView::World::Graphic::CRenderable* renderable);
						/// <summary>
						/// 渲染完成时向外通知的事件
						/// </summary>
						/// <param name="sm">渲染场景</param>
						/// <param name="rsys">渲染系统</param>
						/// <param name="renderable">renderable</param>
						/// <returns></returns>
						virtual void postRender( EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys,EarthView::World::Graphic::CRenderable* renderable);

						EarthView::World::Spatial::Math::CMatrix4 mProjMatrix;
						ev_int32 mFlag;
						ev_bool mbProjChanged;
					};
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CAnalysis3DSlope(_in EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pGlobeControl">地球控件</param>
					CAnalysis3DSlope(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_pGlobeControl);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pSceneMgr">场景管理器</param>
					CAnalysis3DSlope(EarthView::World::Graphic::CSceneManager* ref_pSceneMgr);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pTerrainLayer"> 地形图层或图层组CTerrainLayer、CLocalTerrainLayer、CTerrainGroupLayer</param>
					CAnalysis3DSlope(EarthView::World::Spatial3D::Atlas::ITerrainLayer* ref_pTerrainLayer);
					/// <summary>
					/// 析构函数
					/// </summary>
					~CAnalysis3DSlope();
					/// <summary>
					/// 不使用Tool
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void deactivate();
					/// <summary>
					/// 销毁所有渲染对象及结果
					/// </summary>
					virtual ev_void reset();
					/// <summary>
					/// 初始化
					/// </summary>
					/// <param name=""></param>
					virtual ev_void initialize();
					/// <summary>
					/// 分析与测量的调用接口
					/// </summary>
					virtual ev_void renderAnalysis3D();
					/// <summary>
					/// 开启下次测量前需判断本次测量是否完成
					/// </summary>
					/// <returns></returns>
					ev_bool getIsOver() const;
					/// <summary>
					/// 获取坡度分析范围点列表(经度、纬度、高程)
					/// </summary>
					EarthView::World::Spatial::Math::VertexList getSelectedGeoPts()const;
					/// <summary>
					/// 设置坡度分析范围点列表(经度、纬度、高程)
					/// </summary>
					ev_void setSelectedGeoPts(EarthView::World::Spatial::Math::VertexList& points);
					/// <summary>
					/// 获取坡度级别
					/// </summary>
					/// <param name=""></param>
					/// <returns>级别数组</returns>
					EarthView::World::Core::RealVector getDivisions();
					/// <summary>
					/// 设置坡度级别
					/// </summary>
					/// <param name="divisions">级别数组</param>
					/// <returns></returns>
					ev_void setDivisions(EarthView::World::Core::RealVector divisions);
					/// <summary>
					/// 获取指定级别坡度颜色
					/// </summary>
					/// <param name="grade">坡度级别</param>
					/// <returns>指定级别坡度的颜色</returns>
					EarthView::World::Graphic::CColourValue getSlopeColor(ev_uint32 grade) const;
					/// <summary>
					/// 设置指定级别坡度的颜色
					/// </summary>
					/// <param name="grade">坡度级别</param>
					/// <param name="color">指定级别坡度的颜色</param>
					ev_void setSlopeColor(ev_uint32 grade,EarthView::World::Graphic::CColourValue color);
					/// <summary>
					/// 获取坡度图层是否显示
					/// </summary>
					/// <returns>是否显示坡度图层</returns>
					ev_bool isSlopeLayerShow();
					/// <summary>
					/// 设置坡度图层是否显示
					/// </summary>
					/// <param name="value">是否显示坡度图层</param>
					ev_void showSlopeLayer(ev_bool value);
					/// <summary>
					/// 获取坡向图层是否显示
					/// </summary>
					/// <returns>是否显示坡向图层</returns>
					ev_bool isAspectLayerShow();
					/// <summary>
					/// 设置坡向图层是否显示
					/// </summary>
					/// <param name="value">是否显示坡向图层</param>
					ev_void showAspectLayer(ev_bool value);
					/// <summary>
					/// 获取坡度分布
					/// </summary>
					/// <returns>坡度分布数组</returns>
					EarthView::World::Core::RealVector& getSlopeDistributing();
					/// <summary>
					/// 获取坡度值列表
					/// </summary>
					/// <returns>坡度值列表</returns>
					EarthView::World::Core::RealVector& getSlopeValues();
					/// <summary>
					/// 获取坡向值列表
					/// </summary>
					/// <returns>坡向值列表</returns>
					EarthView::World::Core::RealVector& getAspectValues();
					/// <summary>
					/// 获取采样点列表
					/// </summary>
					/// <returns>采样点列表</returns>
					EarthView::World::Spatial::Math::VertexList& getSlopePositionList();
					/// <summary>
					/// 鼠标按键弹起事件
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被释放</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns>是否继续向父控件发送该事件</returns>
					virtual ev_bool onMouseUp(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
					/// <summary>
					/// 鼠标移动事件触发
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被释放</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns>是否继续向父控件发送该事件</returns>
					virtual ev_bool onMouseMove(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
					/// <summary>
					/// 鼠标双击事件触发
					/// </summary>
					/// <returns>是否继续向父控件发送该事件</returns>
					virtual ev_bool onDoubleClick();

					EV_MUTEX(mInitMutex)
					EV_THREAD_SYNCHRONISER(mInitSync)

				protected:
					/// <summary>
					/// 计算分析结果，根据渲染效果，可以将渲染添加到此位置
					/// 如果需要与界面交互，在界面处重写analysis3dlistener方法
					/// </summary>
					virtual ev_void run();
					/// <summary>
					/// 释放可渲染对象
					/// </summary>
					/// <param name="isPart">是否仅释放本次分析中的对象</param>
					/// <param name="isAll">是否全部释放</param>
					virtual ev_void releaseManualObjects(ev_bool isPart,ev_bool isAll);
					/// <summary>
					/// 绘制坡度分析结果
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void drawSlopeImage();
					/// <summary>
					/// 绘制坡向分析结果
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void drawAspectImage();
					/// <summary>
					/// 更新中心点位置
					/// </summary>
					/// <param name="centerPos">中心点位置</param>
					ev_void updateCenterPosition(_out EarthView::World::Spatial::Math::CVector3& centerPos);
					/// <summary>
					/// 渲染计算进度字体对象
					/// </summary>
					/// <param name=""></param>
					ev_void renderProgressTextMovable();
					/// <summary>
					/// 渲染分析的结果
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void renderAnalysis3DInMainThread();
					/// <summary>
					/// 添加帧监听
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void addFrameListener();
					/// <summary>
					/// 移除帧监听
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void removeFrameListener();
					/// <summary>
					/// 坡度分布划分
					/// </summary>
					EarthView::World::Core::RealVector mDivisions;
					/// <summary>
					/// 每个坡度划分对应的颜色
					/// </summary>
					vector<EarthView::World::Graphic::CColourValue> mSlopeColors;
					/// <summary>
					/// 是否显示坡度图层
					/// </summary>
					ev_bool mShowSlopeLayer;
					/// <summary>
					/// 是否显示坡向图层
					/// </summary>
					ev_bool mShowAspectLayer;
					/// <summary>
					/// 线段起始点（经纬度）
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mBeginPoint;
					/// <summary>
					/// 线段终止点（经纬度）
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mEndPoint;
					/// <summary>
					/// 计算进度字体对象
					/// </summary>
					EarthView::World::Graphic::CTextureMovableText* mpProgressTextMovable;
					/// <summary>
					/// 渲染点列表
					/// </summary>
					vector<EarthView::World::Spatial3D::Analysis::CSpatial3DManualObject*> mpPts;
					/// <summary>
					/// 鼠标移动时的渲染点
					/// </summary>
					EarthView::World::Spatial3D::Analysis::CSpatial3DManualObject* mpTempPt;
					/// <summary>
					/// 渲染线对象
					/// </summary>
					EarthView::World::Geometry3D::CWideLine* mpWideLine;
					/// <summary>
					/// 鼠标移动时的渲染线
					/// </summary>
					EarthView::World::Geometry3D::CWideLine* mpTempWideLine;
					/// <summary>
					/// 线对象监听
					/// </summary>
					CSlopeWideLineRenderableListener* mpRenderableListener;
					/// <summary>
					/// 绘制本次测量坡度值的渲染层
					/// </summary>
					EarthView::World::Geometry3D::CImageOverlayer* mpSlopeImageOverLayer;
					/// <summary>
					/// 保存多次测量坡度值的渲染层
					/// </summary>
					vector<EarthView::World::Geometry3D::CImageOverlayer*> mpSlopeImageOverLayers;
					/// <summary>
					/// 绘制本次测量坡向值的渲染层
					/// </summary>
					EarthView::World::Geometry3D::CImageOverlayer* mpAspectImageOverLayer;
					/// <summary>
					/// 保存多次测量坡向值的渲染层
					/// </summary>
					vector<EarthView::World::Geometry3D::CImageOverlayer*> mpAspectImageOverLayers;
					/// <summary>
					/// 图片路径
					/// </summary>
					EarthView::World::Core::StringVector mPathStrVec;

					/// <summary>
					/// 绘制坡度或坡向图时的进度值
					/// </summary>
					ev_int32 mProgressD;
					/// <summary>
					/// 计算进度值
					/// </summary>
					ev_int32 mProgressV;
					/// <summary>
					/// 互斥锁
					/// </summary>
					EarthView::World::Core::CMutex mMutex;
					/// <summary>
					/// 线程
					/// </summary>
					EarthView::World::Core::CThread mThread;
					/// <summary>
					/// 坡度分析线程函数类
					/// </summary>
					CThreadFuncSlope* mpThreadFunc;
					/// <summary>
					/// 帧监听
					/// </summary>
					CFrameListenerSlope *mpFrameListenerSlope;

				private:
					C_DISABLE_COPY(CAnalysis3DSlope);
				};
			}
		}
	}
}
#endif
