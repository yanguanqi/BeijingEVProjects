#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CANALYSIS3DMEASUREVERTICAL_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CANALYSIS3DMEASUREVERTICAL_H

#include "ianalysis3dtool.h"
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
				/// 高度测量方式
				/// </summary>
				enum HeightCalcuStyle
				{
					/// <summary>
					/// 高度差
					/// </summary>
					HCS_Difference,
					/// <summary>
					/// 垂直高度
					/// </summary>
					HCS_Vertical,
				};

				/// <summary>
				/// 高度测量类
				/// 定义了高度测量的所有操作
				/// </summary>
				class EV_ANALYSIS3D_DLL CAnalysis3DMeasureHeight : public EarthView::World::Spatial3D::Analysis::IAnalysis3DTool
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CAnalysis3DMeasureHeight(EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pGlobeControl">地球控件</param>
					CAnalysis3DMeasureHeight(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_pGlobeControl);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pSceneMgr">场景管理器</param>
					CAnalysis3DMeasureHeight(EarthView::World::Graphic::CSceneManager* ref_pSceneMgr);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pTerrainLayer"> 地形图层或图层组CTerrainLayer、CLocalTerrainLayer、CTerrainGroupLayer</param>
					CAnalysis3DMeasureHeight(EarthView::World::Spatial3D::Atlas::ITerrainLayer* ref_pTerrainLayer);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CAnalysis3DMeasureHeight();
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
					/// 获取高度测量方式
					/// </summary>
					/// <returns>高度测量方式</returns>
					const HeightCalcuStyle getCalcuStyle();
					/// <summary>
					/// 设置高度测量方式
					/// </summary>
					/// <param name="value">高度测量方式</param>
					ev_void setCalcuStyle(const HeightCalcuStyle value);
					/// <summary>
					/// 获取起始点位置
					/// </summary>
					/// <param name=""></param>
					/// <returns>起始点(地理极坐标)</returns>
					EarthView::World::Spatial::Math::CVector3 getOriginPoint();
					/// <summary>
					/// 设置起始点位置
					/// </summary>
					/// <param name=""></param>
					/// <returns>起始点(地理极坐标)</returns>
					ev_void setOriginPoint(EarthView::World::Spatial::Math::CVector3& value);
					/// <summary>
					/// 获取终止点位置
					/// </summary>
					/// <param name=""></param>
					/// <returns>终止点（HCS_Vertical方式为屏幕像素坐标，HCS_Difference方式为地理极坐标）</returns>
					EarthView::World::Spatial::Math::CVector3 getTerminalPoint();
					/// <summary>
					/// 设置终止点位置
					/// </summary>
					/// <param name=""></param>
					/// <returns>终止点（HCS_Vertical方式为屏幕像素坐标，HCS_Difference方式为地理极坐标）</returns>
					ev_void setTerminalPoint(EarthView::World::Spatial::Math::CVector3& value);
					/// <summary>
					/// 获取高度值
					/// </summary>
					/// <param name=""></param>
					/// <returns>高度值</returns>
					ev_real64 getVerticalDistance();
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
					/// <param name=""></param>
					virtual ev_void run();
					/// <summary>
					/// 释放可渲染对象
					/// </summary>
					/// <param name="isPart">是否仅释放本次分析中的对象</param>
					/// <param name="isAll">是否全部释放</param>
					virtual ev_void releaseManualObjects(ev_bool isPart,ev_bool isAll);
					/// <summary>
					/// 高度（垂直距离）量算
					/// 由于算法需要调用Graphic中的函数，根据调用关系，无法放置在服务器
					/// </summary>
					/// <param name="originPoint">起始点(地理极坐标)</param>
					/// <param name="terminalPoint">终止点（HCS_Vertical方式为屏幕像素坐标，HCS_Difference方式为地理极坐标）</param>
					/// <returns>垂直距离</returns>
					ev_real64 verticalDistanceMeasure(_in const EarthView::World::Spatial::Math::CVector3& originPoint,_in const EarthView::World::Spatial::Math::CVector3& terminalPoint);
					/// <summary>
					/// 渲染字体对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>垂直距离字体对象</returns>
					EarthView::World::Graphic::CTextureMovableText* renderTextMovable();

				private:
					/// <summary>
					/// 垂直距离
					/// </summary>
					ev_real64 mVerticalDistance;
					/// <summary>
					/// 高度测量方式
					/// </summary>
					HeightCalcuStyle mCalcuStyle;
					/// <summary>
					/// 起始点
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mOriginPoint;
					/// <summary>
					/// 终止点
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mTerminalPoint;

					/// <summary>
					/// 结果字体对象
					/// </summary>
					vector<EarthView::World::Graphic::CTextureMovableText*> mpTextMovables;
					/// <summary>
					/// 鼠标移动时的结果字体对象
					/// </summary>
					EarthView::World::Graphic::CTextureMovableText* mpTempTextMovable;
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
					/// 渲染线对象
					/// </summary>
					vector<EarthView::World::Geometry3D::CWideLine*> mpWideLines;
					/// <summary>
					/// 鼠标移动时的渲染线
					/// </summary>
					EarthView::World::Geometry3D::CWideLine* mpTempWideLine;

				private:
					C_DISABLE_COPY(CAnalysis3DMeasureHeight);
				};
			}
		}
	}
}
#endif
