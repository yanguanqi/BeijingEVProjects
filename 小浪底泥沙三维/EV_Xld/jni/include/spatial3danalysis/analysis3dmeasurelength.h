#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CANALYSIS3DMEASURELENGTH_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CANALYSIS3DMEASURELENGTH_H

#include "ianalysis3dtool.h"
#include "geometry3d/geometry3d/wideline.h"
#include "core/core_common.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				/// <summary>
				/// 距离测量方式
				/// </summary>
				enum DistanceMeasureStyle
				{
					/// <summary>
					/// 测量贴地距离
					/// </summary>
					DMS_Clamp,
					/// <summary>
					/// 测量直线距离
					/// </summary>
					DMS_Line,
					/// <summary>
					/// 测量投影距离
					/// </summary>
					DMS_Project
				};
				class CThreadFuncLength;
				class CFrameListenerLength;
				/// <summary>
				/// 长度测量类
				/// 定义了长度测量的所有操作
				/// </summary>
				class EV_ANALYSIS3D_DLL CAnalysis3DMeasureLength : public EarthView::World::Spatial3D::Analysis::IAnalysis3DTool
				{
					friend class CThreadFuncLength;
					friend class CFrameListenerLength;
				protected:
					class CLengthWideLineRenderableListener : public EarthView::World::Graphic::CRenderable::CRenderableListener
					{
					public:
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>
						CLengthWideLineRenderableListener();
						/// <summary>
						/// 析构函数
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>
						virtual ~CLengthWideLineRenderableListener();
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
					CAnalysis3DMeasureLength(_in EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pGlobeControl">地球控件</param>
					CAnalysis3DMeasureLength(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_pGlobeControl);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pSceneMgr">场景管理器</param>
					CAnalysis3DMeasureLength(EarthView::World::Graphic::CSceneManager* ref_pSceneMgr);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pTerrainLayer"> 地形图层或图层组CTerrainLayer、CLocalTerrainLayer、CTerrainGroupLayer</param>
					CAnalysis3DMeasureLength(EarthView::World::Spatial3D::Atlas::ITerrainLayer* ref_pTerrainLayer);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CAnalysis3DMeasureLength();
					/// <summary>
					/// 不使用Tool
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void deactivate();
					/// <summary>
					/// 销毁所有渲染对象及结果
					/// </summary>
					/// <param name=""></param>
					virtual ev_void reset_impl();
					/// <summary>
					/// 初始化
					/// </summary>
					/// <param name=""></param>
					virtual ev_void initialize_impl();
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
					/// 获取距离测量点列表(经度、纬度、高程)
					/// </summary>
					EarthView::World::Spatial::Math::VertexList getSelectedGeoPts()const;
					/// <summary>
					/// 设置距离测量点列表(经度、纬度、高程)
					/// </summary>
					ev_void setSelectedGeoPts(EarthView::World::Spatial::Math::VertexList& points);
					/// <summary>
					/// 获取距离测量方式
					/// </summary>
					const DistanceMeasureStyle getCalcuStyle();
					/// <summary>
					/// 设置距离测量方式
					/// </summary>
					ev_void setCalcuStyle(const DistanceMeasureStyle& value);
					/// <summary>
					/// 设置最后结果显示的单位
					/// </summary>
					/// <returns></returns>
					void setLengthUnit(LengthUnit lengthUnit);
					/// <summary>
					/// 获取贴地距离
					/// </summary>
					/// <param name=""></param>
					/// <returns>贴地距离</returns>
					const ev_real64 getClampedDistance() const;
					/// <summary>
					/// 获取直线距离
					/// </summary>
					/// <param name=""></param>
					/// <returns>直线距离</returns>
					const ev_real64 getStraightDistance() const;
					/// <summary>
					/// 获取投影距离
					/// </summary>
					/// <param name=""></param>
					/// <returns>投影距离</returns>
					const ev_real64 getProjectionDistance() const;
					/// <summary>
					/// 鼠标弹起事件触发
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
					/// 计算长度测量结果
					/// </summary>
					ev_void calcuDistance();
					/// <summary>
					/// 渲染字体对象
					/// </summary>
					/// <param name=""></param>
					ev_void renderTextMovable();
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
					/// 距离测量方式
					/// </summary>
					DistanceMeasureStyle mCalcuStyle;
					/// <summary>
					/// 最后结果显示的单位
					/// </summary>
					LengthUnit mLengthUnit;
					/// <summary>
					/// 贴地距离
					/// </summary>
					ev_real64 mClampedDistance;
					/// <summary>
					/// 直线距离
					/// </summary>
					ev_real64 mStraightDistance;
					/// <summary>
					/// 投影距离
					/// </summary>
					ev_real64 mProjectedDistance;
					/// <summary>
					/// 当前线段起始点
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mBeginPoint;
					/// <summary>
					/// 当前线段终止点
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mEndPoint;

					/// <summary>
					/// 多次测量渲染点列表
					/// </summary>
					vector<EarthView::World::Spatial3D::Analysis::CSpatial3DManualObject*> mpMultiPts;
					/// <summary>
					/// 本次测量渲染点列表
					/// </summary>
					vector<EarthView::World::Spatial3D::Analysis::CSpatial3DManualObject*> mpPts;
					/// <summary>
					/// 鼠标移动时的渲染点
					/// </summary>
					EarthView::World::Spatial3D::Analysis::CSpatial3DManualObject* mpTempPt;
					/// <summary>
					/// 多次测量线对象集合
					/// </summary>
					vector<EarthView::World::Geometry3D::CWideLine*> mpWideLines;
					/// <summary>
					/// 本次测量线对象
					/// </summary>
					EarthView::World::Geometry3D::CWideLine* mpWideLine;
					/// <summary>
					/// 鼠标移动时的线对象
					/// </summary>
					EarthView::World::Geometry3D::CWideLine* mpTempWideLine;
					/// <summary>
					/// 线对象监听
					/// </summary>
					CLengthWideLineRenderableListener* mpRenderableListener;
					/// <summary>
					/// 本次测量字体结果数字集合
					/// </summary>
					EarthView::World::Core::RealVector mTextValues;
					/// <summary>
					/// 本次测量字体节点位置集合
					/// </summary>
					EarthView::World::Spatial::Math::VertexList mTextNodePositions;
					/// <summary>
					/// 多次测量字体对象集合
					/// </summary>
					vector<EarthView::World::Graphic::CTextureMovableText*> mpTextMovables;
					/// <summary>
					/// 本次测量字体对象集合
					/// </summary>
					vector<EarthView::World::Graphic::CTextureMovableText*> mpTexts;
					/// <summary>
					/// 鼠标移动时的结果字体对象
					/// </summary>
					EarthView::World::Graphic::CTextureMovableText* mpTempTextMovable;
					/// <summary>
					/// 计算进度字体对象
					/// </summary>
					EarthView::World::Graphic::CTextureMovableText* mpProgressTextMovable;

					/// <summary>
					/// 计算进度值
					/// </summary>
					ev_int32 mProgressV;
					/// <summary>
					/// 线程
					/// </summary>
					EarthView::World::Core::CThread mThread;
					/// <summary>
					/// 长度测量线程类
					/// </summary>
					CThreadFuncLength* mpThreadFunc;
					/// <summary>
					/// 帧监听
					/// </summary>
					CFrameListenerLength* mpFrameListenerLength;

				private:
					C_DISABLE_COPY(CAnalysis3DMeasureLength);
					EV_MUTEX(mInitMutex)
					EV_THREAD_SYNCHRONISER(mInitSync)
				};
			}
		}
	}
}
#endif

