#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CANALYSIS3DMEASUREAREA_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CANALYSIS3DMEASUREAREA_H
 
#include "ianalysis3dtool.h"

namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			class CGeoPolygonEx;
		}
		namespace Spatial
		{
			class CGeoObject;
			namespace Geometry
			{
				class CPolygon;
			}
			namespace Display
			{
				class CSimpleFillSymbol;
			}
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
				/// <summary>
				/// 面积测量方式
				/// </summary>
				enum AreaMeasureStyle
				{
					/// <summary>
					/// 测量贴地面积和投影面积
					/// </summary>
					AMS_Clamp_Project,
					/// <summary>
					/// 测量贴地面积
					/// </summary>
					AMS_Clamp,
					/// <summary>
					/// 测量投影面积
					/// </summary>
					AMS_Project
				};
				class CThreadFuncArea;
				class CFrameListenerArea;
				/// <summary>
				/// 面积测量类
				/// 定义了面积测量的所有操作
				/// </summary>
				class EV_ANALYSIS3D_DLL CAnalysis3DMeasureArea : public EarthView::World::Spatial3D::Analysis::IAnalysis3DTool
				{		
					friend class CThreadFuncArea;
					friend class CFrameListenerArea;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CAnalysis3DMeasureArea(_in EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pGlobeControl">地球控件</param>
					CAnalysis3DMeasureArea(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_pGlobeControl);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pSceneMgr">场景管理器</param>
					CAnalysis3DMeasureArea(EarthView::World::Graphic::CSceneManager* ref_pSceneMgr);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pTerrainLayer"> 地形图层或图层组CTerrainLayer、CLocalTerrainLayer、CTerrainGroupLayer</param>
					CAnalysis3DMeasureArea(EarthView::World::Spatial3D::Atlas::ITerrainLayer* ref_pTerrainLayer);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CAnalysis3DMeasureArea();
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
					/// 获取面积测量范围点列表(经度、纬度、高程)
					/// </summary>
					EarthView::World::Spatial::Math::VertexList getSelectedGeoPts()const;
					/// <summary>
					/// 设置面积测量范围点列表(经度、纬度、高程)
					/// </summary>
					ev_void setSelectedGeoPts(EarthView::World::Spatial::Math::VertexList& points);
					/// <summary>
					/// 获取面积测量方式
					/// </summary>
					const AreaMeasureStyle getCalcuStyle();
					/// <summary>
					/// 设置面积测量方式
					/// </summary>
					ev_void setCalcuStyle(const AreaMeasureStyle& value);
					/// <summary>
					/// 设置最后结果显示的单位
					/// </summary>
					/// <returns></returns>
					void setAreaUnit(EarthView::World::Spatial3D::Analysis::AreaUnit areaUnit);
					/// <summary>
					/// 获取贴地面积
					/// </summary>
					/// <param name=""></param>
					/// <returns>贴地面积</returns>
					const ev_real64 getClampedArea();
					/// <summary>
					/// 获取投影面积
					/// </summary>
					/// <param name=""></param>
					/// <returns>投影面积</returns>
					const ev_real64 getProjectArea();
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
					/// 计算面积测量结果
					/// </summary>
					ev_void calcuArea();
					/// <summary>
					/// 贴地面填充样式
					/// </summary>
					/// <param name="fillcolor">多边形内部填充颜色</param>
					/// <param name="linecolor">多边形边框颜色</param>
					/// <returns>填充样式指针</returns>	
					EarthView::World::Spatial::Display::CSimpleFillSymbol* createFillSymbol(const EarthView::World::Graphic::CColourValue& fillcolor, const EarthView::World::Graphic::CColourValue& linecolor);
					/// <summary>
					/// 渲染多边形
					/// </summary>
					/// <returns></returns>
					ev_void renderPolygon();
					/// <summary>
					/// 释放多边形
					/// </summary>
					/// <param name="isAll">是否全部释放</param>
					/// <returns></returns>
					ev_void destoryGroundPolygon(ev_bool isAll);
					/// <summary>
					/// 更新中心点位置
					/// </summary>
					/// <param name="centerPos">中心点位置</param>
					/// <returns></returns>
					ev_void updateCenterPosition(_out EarthView::World::Spatial::Math::CVector3& centerPos);
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
					/// 是否计算面积
					/// </summary>
					/// <param name=""></param>
					/// <returns>判断所采地理坐标点包围盒，若经纬度跨度均大于15度，则返回false不计算面积</returns>	
					ev_bool isComputeArea();
					/// <summary>
					/// 计算新加点形成的三角形面积
					/// 计算临时面积时只计算投影面积，不计算贴地面积
					/// </summary>
					/// <param name="point">新加点地理坐标</param>
					/// <param name="isTemp">是否是计算临时面积</param>
					/// <param name="clampedArea">贴地面积</param>
					/// <param name="projectArea">投影面积</param>
					ev_void calcuTempArea(const EarthView::World::Spatial::Math::CVector3& point, ev_bool isTemp,_out ev_real64 &clampedArea,_out ev_real64 &projectArea);
					/// <summary>
					/// 面积测量方式
					/// </summary>
					AreaMeasureStyle mCalcuStyle;
					/// <summary>
					/// 最后结果显示的单位
					/// </summary>
					AreaUnit mAreaUnit;
					/// <summary>
					/// 多边形是否为自相交多边形
					/// </summary>
					ev_bool mIsDead;
					/// <summary>
					/// 顺时针贴地面积
					/// </summary>
					ev_real64 mClampedArea;
					/// <summary>
					/// 顺时针投影面积
					/// </summary>
					ev_real64 mProjectArea;

					/// <summary>
					/// 渲染点列表
					/// </summary>
					vector<EarthView::World::Spatial3D::Analysis::CSpatial3DManualObject*> mpPts;
					/// <summary>
					/// 渲染点
					/// </summary>
					EarthView::World::Spatial3D::Analysis::CSpatial3DManualObject* mpPt;
					/// <summary>
					/// 鼠标移动时的渲染点
					/// </summary>
					EarthView::World::Spatial3D::Analysis::CSpatial3DManualObject* mpTempPt;
					/// <summary>
					/// 几何地理对象
					/// </summary>
					EarthView::World::Spatial::CGeoObject* mpGeoPolygonObj;
					/// <summary>
					/// 多边形扩展对象
					/// </summary>
					EarthView::World::Geometry3D::CGeoPolygonEx* mpGeoPolygonEx;
					/// <summary>
					/// 字体对象
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
					/// 互斥锁
					/// </summary>
					EarthView::World::Core::CMutex mMutex;
					/// <summary>
					/// 线程
					/// </summary>
					EarthView::World::Core::CThread mThread;
					/// <summary>
					/// 面积测量线程类
					/// </summary>
					CThreadFuncArea* mpThreadFunc;
					/// <summary>
					/// 帧监听
					/// </summary>
					CFrameListenerArea* mpFrameListenerArea;

				private:
					C_DISABLE_COPY(CAnalysis3DMeasureArea);
					EV_MUTEX(mInitMutex)
					EV_THREAD_SYNCHRONISER(mInitSync)
				};
			}
		}
	}
}
#endif
