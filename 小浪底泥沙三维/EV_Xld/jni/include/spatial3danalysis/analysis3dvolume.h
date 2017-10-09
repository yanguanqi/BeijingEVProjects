#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CANALYSIS3DVOLUME_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CANALYSIS3DVOLUME_H

#include "ianalysis3dtool.h"
#include "spatial3danalysisobject/math3dvolume.h"
#include "core/thread.h"

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
				class CSimpleFill3DSymbol;
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
				class CThreadFuncVolume;
				class CFrameListenerVolume;
				/// <summary>
				/// 土方分析类
				/// </summary>
				class EV_ANALYSIS3D_DLL CAnalysis3DVolume : public EarthView::World::Spatial3D::Analysis::IAnalysis3DTool
				{
					friend class CThreadFuncVolume;
					friend class CFrameListenerVolume;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CAnalysis3DVolume(_in EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pGlobeControl">地球控件</param>
					CAnalysis3DVolume(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_pGlobeControl);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pSceneMgr">场景管理器</param>
					CAnalysis3DVolume(EarthView::World::Graphic::CSceneManager* ref_pSceneMgr);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pTerrainLayer"> 地形图层或图层组CTerrainLayer、CLocalTerrainLayer、CTerrainGroupLayer</param>
					CAnalysis3DVolume(EarthView::World::Spatial3D::Atlas::ITerrainLayer* ref_pTerrainLayer);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CAnalysis3DVolume();
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
					/// 获取土方分析范围点列表(经度、纬度、高程)
					/// </summary>
					EarthView::World::Spatial::Math::VertexList getSelectedGeoPts()const;
					/// <summary>
					/// 设置土方分析范围点列表(经度、纬度、高程)
					/// </summary>
					ev_void setSelectedGeoPts(EarthView::World::Spatial::Math::VertexList& points);
					/// <summary>
					/// 体积计算方式
					/// </summary>
					const VolumeCalcuStyle getCalcuStyle();
					/// <summary>
					/// 设置计算方式
					/// </summary>
					/// <param name="value">计算方式</param>
					ev_void setCalcuStyle(const VolumeCalcuStyle& value);
					/// <summary>
					/// 设置最后结果显示的单位
					/// </summary>
					/// <returns></returns>
					void setVolumeUnit(VolumeUnit volumeUnit);
					/// <summary>
					/// 是否根据地形确定基准面高程
					/// </summary>
					/// <returns></returns>
					ev_bool getDefaultDepth();
					/// <summary>
					/// 设置是否根据地形确定基准面高程
					/// </summary>
					/// <param name="value"></param>
					ev_void setDefaultDepth(ev_bool value);
					/// <summary>
					/// 获取基准面高程
					/// </summary>
					/// <returns>深度</returns>
					const ev_real64 getDepth();
					/// <summary>
					/// 设置基准面高程
					/// </summary>
					/// <param name="value">深度</param>
					ev_void setDepth(const ev_real64& value);
					/// <summary>
					/// 获取贴地面积
					/// </summary>
					/// <returns>贴地面积</returns>
					const ev_real64 getGroundArea();
					/// <summary>
					/// 获取挖方体积
					/// </summary>
					/// <returns>挖方体积</returns>
					const ev_real64 getDigVolume();
					/// <summary>
					/// 获取填方体积
					/// </summary>
					/// <returns>填方体积</returns>
					const ev_real64 getFillVolume();
					/// <summary>
					/// 获取填方体积与挖方体积差值的绝对值
					/// </summary>
					/// <returns>填方体积与挖方体积差值的绝对值</returns>
					const ev_real64 getDifference();
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
					/// <param name="shift">shift键是否同时被按下</param>
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
					/// 创建二维贴地面填充样式
					/// </summary>
					/// <param name="fillcolor">多边形内部填充颜色</param>
					/// <param name="linecolor">多边形边框颜色</param>
					/// <returns>二维贴地面填充样式指针</returns>	
					EarthView::World::Spatial::Display::CSimpleFillSymbol* createFillSymbol2D(const EarthView::World::Graphic::CColourValue& fillcolor,
						const EarthView::World::Graphic::CColourValue& linecolor);
					/// <summary>
					/// 创建三维填充样式
					/// </summary>
					/// <param name="fillcolor">面颜色</param>	
					/// <param name="linecolor">线颜色</param>
					/// <param name="sidecolor">边颜色</param>	
					/// <returns>三维填充样式指针</returns>	
					EarthView::World::Spatial::Display::CSimpleFill3DSymbol* createFillSymbol3D(const EarthView::World::Graphic::CColourValue& fillcolor,
						const EarthView::World::Graphic::CColourValue& linecolor,const EarthView::World::Graphic::CColourValue& sidecolor);
					/// <summary>
					/// 渲染贴地面
					/// </summary>
					/// <returns></returns>
					ev_void renderPolygon2D();
					/// <summary>
					/// 渲染扩展面
					/// </summary>
					/// <returns></returns>
					ev_void renderPolygon3D();
					/// <summary>
					/// 销毁扩展面和贴地面
					/// </summary>
					/// <param name="isAll">是否全部释放</param>
					/// <returns></returns>
					ev_void destoryGroundPolygon(ev_bool isAll);
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
					/// 最后结果显示的单位
					/// </summary>
					VolumeUnit mVolumeUnit;
					/// <summary>
					/// 多边形是否为自相交多边形
					/// </summary>
					ev_bool mIsDead;
					/// <summary>
					/// 贴地面积
					/// </summary>
					ev_real64 mGroundArea;
					/// <summary>
					/// 挖方体积
					/// </summary>
					ev_real64 mDigVolume;
					/// <summary>
					/// 填方体积
					/// </summary>
					ev_real64 mFillVolume;					
					/// <summary>
					/// 填方体积与挖方体积差值的绝对值
					/// </summary>
					ev_real64 mDifference;

					/// <summary>
					/// 渲染点列表
					/// </summary>
					vector<EarthView::World::Spatial3D::Analysis::CSpatial3DManualObject*> mpPts;
					/// <summary>
					/// 渲染点
					/// </summary>
					CSpatial3DManualObject* mpPt;
					/// <summary>
					/// 鼠标移动时的渲染点
					/// </summary>
					CSpatial3DManualObject* mpTempPt;
					/// <summary>
					/// 贴地面地理对象
					/// </summary>
					EarthView::World::Spatial::CGeoObject* mpGeoObj2D;
					/// <summary>
					/// 贴地面扩展对象
					/// </summary>
					EarthView::World::Geometry3D::CGeoPolygonEx* mpGeoPolygonEx2D;
					/// <summary>
					/// 三维面扩展对象
					/// </summary>
					EarthView::World::Geometry3D::CGeoPolygonEx* mpGeoPolygonEx3D;
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
					/// 土方分析线程类
					/// </summary>
					CThreadFuncVolume* mpThreadFunc;
					/// <summary>
					/// 帧监听
					/// </summary>
					CFrameListenerVolume *mpFrameListenerVolume;

				private:
					C_DISABLE_COPY(CAnalysis3DVolume);
					EV_MUTEX(mInitMutex)
					EV_THREAD_SYNCHRONISER(mInitSync)
				};
			}
		}
	}
}
#endif
