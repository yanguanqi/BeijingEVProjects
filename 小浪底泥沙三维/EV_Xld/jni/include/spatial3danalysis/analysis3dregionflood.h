#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CANALYSIS3DREGIONFLOOD_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CANALYSIS3DREGIONFLOOD_H

#include "ianalysis3dtool.h"
#include "spatial3danalysisobject/math3dregionflood.h"
#include "geometry3d/geometry3d/wideline.h"
#include "geometry3d/geometry3dextension/multipolygon3dextension.h"
#include "symbol/fresnelsurface3dsymbol.h"
#include "core/thread.h"
#include "graphic/entity.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				class CThreadFuncFlood;
				class CFrameListenerFlood;

				/// <summary>
				/// 淹没分析类
				/// 定义了淹没分析的所有操作
				/// </summary>
				class EV_ANALYSIS3D_DLL CAnalysis3DRegionFlood : public EarthView::World::Spatial3D::Analysis::IAnalysis3DTool
				{
					friend class CThreadFuncFlood;
					friend class CFrameListenerFlood;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CAnalysis3DRegionFlood(EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pGlobeControl">地球控件</param>
					CAnalysis3DRegionFlood(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_pGlobeControl);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pSceneMgr">场景管理器</param>
					CAnalysis3DRegionFlood(EarthView::World::Graphic::CSceneManager* ref_pSceneMgr);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pTerrainLayer"> 地形图层或图层组CTerrainLayer、CLocalTerrainLayer、CTerrainGroupLayer</param>
					CAnalysis3DRegionFlood(EarthView::World::Spatial3D::Atlas::ITerrainLayer* ref_pTerrainLayer);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CAnalysis3DRegionFlood();
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
					/// 获取淹没中心点
					/// </summary>
					/// <returns>淹没中心点</returns>
					EarthView::World::Spatial::Math::CVector3 const getCenterPos() const;
					/// <summary>
					/// 设置淹没中心点
					/// </summary>
					/// <param name="value">淹没中心点</param>
					ev_void setCenterPos(const EarthView::World::Spatial::Math::CVector3& value);
					/// <summary>
					/// 获取搜索半径
					/// </summary>
					ev_real64 getSearchRadius() const;
					/// <summary>
					/// 设置搜索半径
					/// </summary>
					/// <param name="value">搜索半径</param>
					ev_void setSearchRadius(const ev_real64 value);
					/// <summary>
					/// 获取淹没分析高度（相对于海平面的绝对高度）
					/// </summary>
					/// <param name=""></param>
					/// <returns>淹没分析高度（相对于海平面的绝对高度）</returns>
					ev_real64 getFloodAltitude() const;
					/// <summary>
					/// 设置淹没分析高度（相对于海平面的绝对高度）
					/// </summary>
					/// <param name="value">淹没分析高度（相对于海平面的绝对高度）</param>
					ev_void setFloodAltitude(const ev_real64 value);
					/// <summary>
					/// 获取是否使用默认水面海拔（淹没源高程）
					/// </summary>
					/// <returns></returns>
					ev_bool getDefaultFloodAltitude();
					/// <summary>
					/// 设置是否使用默认水面海拔（淹没源高程）
					/// </summary>
					/// <param name="value"></param>
					ev_void setDefaultFloodAltitude(ev_bool value);
					/// <summary>
					/// 获取线的可见性
					/// </summary>
					/// <param name=""></param>
					/// <returns>可见性</returns>
					ev_bool getLineVisible();
					/// <summary>
					/// 设置线是否可见
					/// </summary>
					/// <param name="visible">是否可见</param>	
					ev_void setLineVisible(ev_bool visible);
					/// <summary>
					/// 获取渲染用的淹没区块数据
					/// </summary>
					/// <returns>渲染用的淹没区块数据</returns>
					CFRenderBlockSet& getFRenderBlockSet();
					/// <summary>
					/// 设置渲染用的淹没区块数据
					/// </summary>
					/// <param name="value">渲染用的淹没区块数据</param>
					ev_void setFRenderBlockSet(CFRenderBlockSet& renderBlockList);
					/// <summary>
					/// 获取水面风格符号
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回水平面风格符号</returns>
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol* getWaterSurfaceSymbol() const;
					/// <summary>
					/// 设置水面风格符号
					/// </summary>
					/// <param name="pWaterSurfaceSymbol">水面风格符号</param>
					/// <returns></returns>
					ev_void setWaterSurfaceSymbol(EarthView::World::Spatial::Display::CFresnelSurface3DSymbol* pWaterSurfaceSymbol);
					/// <summary>
					/// 获取水面实体的挂接父节点
					/// </summary>
					/// <param name=""></param>
					/// <returns>水面实体的挂接父节点</returns>
					EarthView::World::Graphic::CSceneNode* getFloodEntityNode() const;
					/// <summary>
					/// 获取淹没水面面积
					/// </summary>
					/// <param name=""></param>
					/// <returns>水面面积</returns>
					ev_real64 getFloodSurfaceArea() const;
					/// <summary>
					/// 获取淹没贴地面积
					/// </summary>
					/// <param name=""></param>
					/// <returns>贴地面积</returns>
					ev_real64 getFloodGroundArea() const;
					/// <summary>
					/// 获取淹没体积
					/// </summary>
					/// <param name=""></param>
					/// <returns>淹没体积</returns>
					ev_real64 getFloodVolume() const;
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
					/// 创建淹没分析水墙
					/// </summary>
					/// <param name="renderBlockList">渲染淹没区块数据</param>
					virtual ev_void createFloodWall(const CFRenderBlockSet& renderBlockList);
					/// <summary>
					/// 创建淹没分析网格
					/// </summary>
					/// <param name="renderBlockList">渲染淹没区块数据</param>
					virtual ev_void createFloodMesh(const CFRenderBlockSet& renderBlockList);
					/// <summary>
					/// 渲染垂直线
					/// 垂直线地面点与垂直距离
					/// </summary>
					/// <param name="point">地面起始点</param>
					/// <param name="distance1">垂直距离</param>
					ev_void rendLine(const EarthView::World::Spatial::Math::CVector3 point,ev_real64 distance);
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

				private:
					/// <summary>
					/// 淹没中心点（地理坐标:经度、纬度、高程）
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mCenterPos;
					/// <summary>
					/// 最大淹没半径
					/// </summary>
					ev_real64 mSearchRadius;
					/// <summary>
					/// 淹没分析水面高度（相对于海平面的绝对高度）
					/// </summary>
					ev_real64 mFloodAltitude;
					/// <summary>
					/// 是否使用默认水面海拔（淹没源高程）
					/// </summary>
					ev_bool mDefaultFloodAltitude;

					/// <summary>
					/// 字体对象
					/// </summary>
					vector<EarthView::World::Graphic::CTextureMovableText*> mpTextMovables;
					/// <summary>
					/// 计算进度字体对象
					/// </summary>
					EarthView::World::Graphic::CTextureMovableText* mpProgressTextMovable;
					/// <summary>
					/// 渲染线的可见性
					/// </summary>
					bool mLineVisible;
					/// <summary>
					/// 渲染线对象
					/// </summary>
					EarthView::World::Geometry3D::CWideLine* mpWideLine;
					/// <summary>
					/// 渲染线对象列表
					/// </summary>
					vector<EarthView::World::Geometry3D::CWideLine*> mpWideLines;
					/// <summary>
					/// 渲染线父节点
					/// </summary>
					EarthView::World::Graphic::CSceneNode* mpWideLineNode;
					/// <summary>
					/// 渲染用的淹没区块数据
					/// </summary>
					CFRenderBlockSet mRenderBlockSet;
					/// <summary>
					/// 水面风格符号
					/// </summary>
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol* mpWaterSurfaceSymbol;
					/// <summary>
					/// 水面风格符号列表
					/// </summary>
					vector<EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*> mpWaterSurfaceSymbolList;
					/// <summary>
					/// 水面渲染网格实体列表
					/// </summary>
					vector<EarthView::World::Graphic::CEntity*> mpWaterSurfaceEntityList;
					/// <summary>
					/// 水面列表
					/// </summary>
					vector<EarthView::World::Geometry3D::CMultiPolygon3DExtension::CWaterSurface*> mpWaterSurfaceList;

					/// <summary>
					/// 绘制水面时的进度值
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
					/// 淹没分析线程类
					/// </summary>
					CThreadFuncFlood* mpThreadFunc;
					/// <summary>
					/// 帧监听
					/// </summary>
					CFrameListenerFlood* mpFrameListenerFlood;

				private:
					C_DISABLE_COPY(CAnalysis3DRegionFlood);
				};
			}
		}
	}
}
#endif
