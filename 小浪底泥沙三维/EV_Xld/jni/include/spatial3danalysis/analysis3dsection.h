#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CANALYSIS3DSECTION_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CANALYSIS3DSECTION_H

#include "ianalysis3dtool.h"
#include "spatial3danalysisobject/math3dsection.h"
#include "symbol/billboard3dsymbol.h"
#include "geometry3d/geopointex.h"
#include "geometry3d/geometry3d/wideline.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				/// <summary>
				/// 断面分析类
				/// 定义了断面分析的所有操作
				/// </summary>
				class CThreadFuncSection;
				class CFrameListenerSection;
				class EV_ANALYSIS3D_DLL CAnalysis3DSection : public EarthView::World::Spatial3D::Analysis::IAnalysis3DTool
				{
					friend class CThreadFuncSection;
					friend class CFrameListenerSection;
				protected:
					class CSectionWideLineRenderableListener : public EarthView::World::Graphic::CRenderable::CRenderableListener
					{
					public:
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>
						CSectionWideLineRenderableListener();
						/// <summary>
						/// 析构函数
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>
						virtual ~CSectionWideLineRenderableListener();
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
					CAnalysis3DSection(EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pGlobeControl">地球控件</param>
					CAnalysis3DSection(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_pGlobeControl);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pSceneMgr">场景管理器</param>
					CAnalysis3DSection( EarthView::World::Graphic::CSceneManager* ref_pSceneMgr);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pTerrainLayer"> 地形图层或图层组CTerrainLayer、CLocalTerrainLayer、CTerrainGroupLayer</param>
					CAnalysis3DSection( EarthView::World::Spatial3D::Atlas::ITerrainLayer* ref_pTerrainLayer);
					/// <summary>
					/// 析构函数
					/// </summary>
					~CAnalysis3DSection();
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
					/// 获取断面分析点列表(经度、纬度、高程)
					/// </summary>
					EarthView::World::Spatial::Math::VertexList getSelectedGeoPts()const;
					/// <summary>
					/// 设置断面分析点列表(经度、纬度、高程)
					/// </summary>
					ev_void setSelectedGeoPts(EarthView::World::Spatial::Math::VertexList& points);
					/// <summary>
					/// 获取高程节点及字体是否可见
					/// </summary>
					/// <param name="visible">是否可见</param>	
					ev_bool getAltitudeVisible();
					/// <summary>
					/// 设置高程节点及字体是否可见
					/// </summary>
					/// <param name="visible">是否可见</param>	
					ev_void setAltitudeVisible(ev_bool visible);
					/// <summary>
					/// 获取坡度节点及字体是否可见
					/// </summary>
					/// <param name="visible">是否可见</param>	
					ev_bool getSlopeVisible();
					/// <summary>
					/// 设置坡度节点及字体是否可见
					/// </summary>
					/// <param name="visible">是否可见</param>	
					ev_void setSlopeVisible(ev_bool visible);
					/// <summary>
					/// 控制断面分析结果信息精确程度
					/// true:根据用户设置的采样间隔距离，保存全部的采样点地理坐标及坡度值，有可能占用较大内存
					/// false:保存较为适合数量的采样点地理坐标及坡度值，不会影响断面分析结果信息中的其它信息
					/// </summary>
					/// <param name="detail">控制断面分析结果信息精确程度，默认值为false</param>
					ev_void setHighOrLowDetail(ev_bool detail);
					/// <summary>
					/// 设置广告板的图片
					/// </summary>
					/// <param name="filepath">图片路径加图片名称（不包含后缀名）</param>
					/// <param name="filepath">图片后缀名</param>
					/// <returns></returns>
					ev_void setBillboardImage(const EVString& filepath, const EVString& type);
					/// <summary>
					/// 设置广告板的图片大小
					/// </summary>
					/// <param name="height">图片高度</param>
					/// <param name="width">图片宽度</param>
					/// <returns></returns>
					ev_void setBillboardImageHeightAndWidth(ev_real32 height, ev_real32 width);
					/// <summary>
					/// 设置广告板的高度模式
					/// </summary>
					/// <param name="amode">高度模式</param>
					/// <returns></returns>
					ev_void setBillboardAltitudeMode(EarthView::World::Spatial::Utility::EVAltitudeMode amode);
					/// <summary>
					/// 设置广告板的几何中心
					/// </summary>
					/// <param name="otype">几何中心模式</param>
					/// <returns></returns>
					ev_void setBillboardOriginType(EarthView::World::Spatial::Display::EVBillboardOriginType otype);
					/// <summary>
					/// 获取最大高程
					/// </summary>
					/// <returns>最大高程</returns>
					ev_real64 getMaxAltitude();
					/// <summary>
					/// 获取最小高程
					/// </summary>
					/// <returns>最小高程</returns>
					ev_real64 getMinAltitude();
					/// <summary>
					/// 获取最大坡度
					/// </summary>
					/// <returns>最大坡度</returns>
					ev_real64 getMaxSlope();
					/// <summary>
					/// 获取最小坡度
					/// </summary>
					/// <returns>最小坡度</returns>
					ev_real64 getMinSlope();
					/// <summary>
					/// 获取断面分析结果信息
					/// </summary>
					/// <returns>断面分析结果信息指针</returns>
					CSectionLineInfo* getSectionInfo();
					/// <summary>
					/// 根据断面分析结果生成位图
					/// </summary>
					/// <param name="width">位图宽度</param>
					/// <param name="height">位图高度</param>
					/// <param name="onlyCoordinate">是否只有坐标</param>
					/// <returns>数据流指针</returns>
					EarthView::World::Core::MemoryDataStreamPtr ToBitmapStreamPtr(ev_int32 width, ev_int32 height, ev_bool onlyCoordinate);
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
					/// 执行
					/// </summary>
					virtual ev_void run();
					/// <summary>
					/// 释放可渲染对象
					/// </summary>
					/// <param name="isPart">是否仅释放本次分析中的对象</param>
					/// <param name="isAll">是否全部释放</param>
					virtual ev_void releaseManualObjects(ev_bool isPart,ev_bool isAll);
					/// <summary>
					/// 计算断面信息
					/// </summary>
					ev_void calcuSectionInfo();
					/// <summary>
					/// 创建广告牌样式
					/// </summary>
					/// <returns>广告版风格样式指针</returns>
					EarthView::World::Spatial::Display::CBillboard3DSymbol* createBillboard3DSymbol();
					/// <summary>
					/// 渲染广告牌
					/// </summary>
					ev_void render3DBillBoard();
					/// <summary>
					/// 渲染字体
					/// </summary>
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
					/// 断面分析结果信息
					/// </summary>
					CSectionLineInfo* mpSectionInfo;
					/// <summary>
					/// 高程字体是否可见
					/// </summary>
					ev_bool mAltitudeFontVisible;
					/// <summary>
					/// 坡度字体是否可见
					/// </summary>
					ev_bool mSlopeFontVisible;
					/// <summary>
					/// 控制断面分析结果信息精确程度
					/// </summary>
					ev_bool mDetail;
					/// <summary>
					/// 当前线段起始点
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mBeginPoint;
					/// <summary>
					/// 当前线段终止点
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mEndPoint;

					/// <summary>
					/// 广告板图片路径
					/// </summary>
					EVString mBillboardImagePath;
					/// <summary>
					/// 广告板图片类型
					/// </summary>
					EVString mBillboardImageType;
					/// <summary>
					/// 广告板图片高度
					/// </summary>
					ev_real32 mBillboardImageHeight;
					/// <summary>
					/// 广告板图片宽度
					/// </summary>
					ev_real32 mBillboardImageWidth;
					/// <summary>
					/// 广告板高度模式
					/// </summary>
					EarthView::World::Spatial::Utility::EVAltitudeMode mBillboardAltitudeMode;
					/// <summary>
					/// 广告板图片起始点类型
					/// </summary>
					EarthView::World::Spatial::Display::EVBillboardOriginType mBillboardOriginType;
					/// <summary>
					/// 点扩展对象
					/// </summary>
					EarthView::World::Geometry3D::CGeoPointEx* mpGeoPointEx;

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
					CSectionWideLineRenderableListener* mpRenderableListener;
					/// <summary>
					/// 多次测量字体对象集合
					/// </summary>
					vector<EarthView::World::Graphic::CTextureMovableText*> mpTextMovables;
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
					/// 断面分析线程类
					/// </summary>
					CThreadFuncSection* mpThreadFunc;
					/// <summary>
					/// 帧监听
					/// </summary>
					CFrameListenerSection* mpFrameListenerSection;

				private:
					C_DISABLE_COPY(CAnalysis3DSection);
					EV_MUTEX(mInitMutex)
					EV_THREAD_SYNCHRONISER(mInitSync)
				};
			}
		}
	}
}
#endif
