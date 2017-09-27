#ifndef _TILE_ALTITUDE_TOOL_H
#define _TILE_ALTITUDE_TOOL_H

#include "globecontrol/evglobecontrol_config.h"
#include "core/memoryallocatedobject.h"
#include "graphic/material.h"
#include "graphic/manualobject.h"
#include "graphic/colourvalue.h"

#include "spatialgui/itool.h"
#include "spatial3danalysisobject/mathutility3d.h"
#include "symbol/simplefillsymbol.h"
#include "geometry3d/geopolygonex.h"
#include "spatialobject/geoobject.h"
#include "spatial3dengine/terrainrevisor.h"

// using namespace EarthView::World::Spatial3D::Analysis;

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				class CGlobeControl;
			}

			namespace SystemUI
			{
				class CTileAltitudeTool;

				/// <summary>
				/// 地形修改监听器抽象基类
				/// </summary>
				class EV_GLOBECONTROL_DLL CTileAltitudeListener : public EarthView::World::Core::CBaseObject
				{
				ev_private:
					CTileAltitudeListener(_in EarthView::World::Core::CNameValuePairList* pList){}

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					CTileAltitudeListener(){}
					/// <summary>
					/// 析构函数
					/// </summary>
					~CTileAltitudeListener(){}

					/// <summary>
					/// 通知操作开始
					/// </summary>
					/// <param name="tool">地形修改工具</param>
					/// <returns></returns>
					virtual ev_void onOperateStart(EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* tool){}
					/// <summary>
					/// 通知操作结束
					/// </summary>
					/// <param name="tool">地形修改工具</param>
					/// <returns></returns>
					virtual ev_void onOperateEnd(EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* tool){}
				};

				/// <summary>
				/// 地形修改工具
				/// </summary>
				class EV_GLOBECONTROL_DLL CTileAltitudeTool : public EarthView::World::Spatial::SystemUI::ITool
				{
				ev_private:
					CTileAltitudeTool(_in EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_control">抽象三维场景控件</param>
					/// <returns></returns>
					CTileAltitudeTool(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_control);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_control">抽象三维场景控件</param>
					/// <returns></returns>
					CTileAltitudeTool(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_control,ev_bool bUpdateDem);
					/// <summary>
					/// 析构函数
					/// </summary>
					~CTileAltitudeTool();

					/// <summary>
					/// 查询工具类型
					/// </summary>
					/// <returns>工具类型EVToolType</returns>
					ev_uint32 getType() const;				

					/// <summary>
					/// 鼠标双击事件响应
					/// </summary>
					/// <returns>是否需要向下传递事件</returns>
					virtual ev_bool onDoubleClick(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
					/// <summary>
					/// 鼠标按下事件响应
					/// </summary>
					/// <param name="button">GUIMouseButtonMask的组合</param>
					/// <param name="shift">GUIModKeyMask的组合</param>
					/// <param name="x">屏幕坐标x</param>
					/// <param name="y">屏幕坐标y</param>
					/// <returns>是否需要向下传递事件</returns>
					virtual ev_bool onMouseDown(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
					/// <summary>
					/// 鼠标弹起事件响应
					/// </summary>
					/// <param name="button">GUIMouseButtonMask的组合</param>
					/// <param name="shift">GUIModKeyMask的组合</param>
					/// <param name="x">屏幕坐标x</param>
					/// <param name="y">屏幕坐标y</param>
					/// <returns>是否需要向下传递事件</returns>
					virtual ev_bool onMouseUp(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
					/// <summary>
					/// 鼠标移动事件响应
					/// </summary>
					/// <param name="button">GUIMouseButtonMask的组合</param>
					/// <param name="shift">GUIModKeyMask的组合</param>
					/// <param name="x">屏幕坐标x</param>
					/// <param name="y">屏幕坐标y</param>
					/// <returns>是否需要向下传递事件</returns>
					virtual ev_bool onMouseMove(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);

					/// <summary>
					/// 执行创建多边形
					/// </summary>
					virtual void run();
					/// <summary>
					/// 回到初始状态
					/// </summary>
					virtual void reset();

					/// <summary>
					/// 获得需要修改地形的多边形范围
					/// </summary>
					/// <returns>多边形</returns>
					const EarthView::World::Spatial::Geometry::CPolygon* getPoylgon() const;

					/// <summary>
					/// 设置地形修改的模式
					/// </summary>
					/// <param name="m">模式，包含全球范围修改和局部区域修改</param>
					/// <returns></returns>
					ev_void setTerrainRangeMode(EarthView::World::Spatial3D::TerrainRangeMode m);

					/// <summary>
					/// 获得地形修改监听器
					/// </summary>
					/// <returns>地形修改监听器</returns>
					const EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener* getTileAltitudeListener() const;

					/// <summary>
					/// 设置地形修改监听器
					/// </summary>
					/// <param name="ref_listener">地形修改监听器</param>
					/// <returns></returns>
					ev_void setTileAltitudeListener( EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener* ref_listener );

				protected:
					EarthView::World::Spatial::Geometry::CPolygon* createPolygon(EarthView::World::Spatial::Math::VertexList& points, EarthView::World::Spatial3D::TerrainRangeMode mode);				

					EarthView::World::Spatial3D::TerrainRangeMode mRangeMode;

				private://鼠标事件
					ev_int32 mMouseStatice;
					/// <summary>
					/// 鼠标选取屏幕像素点
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mMouseDownScreenPt;
					/// <summary>
					/// 鼠标当前点的地理坐标
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mCurrentGeoPt;
					/// <summary>
					/// 鼠标当前点的世界坐标
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mCurrentWorPt;
					EarthView::World::Spatial::Math::CVector3 mMovingGeoPt;
					/// <summary>
					/// 鼠标选取点的集合，地理坐标
					/// </summary>
					EarthView::World::Spatial::Math::VertexList mSelectedGeoPts;
					/// <summary>
					/// 鼠标选取点的集合，世界坐标
					/// </summary>
					EarthView::World::Spatial::Math::VertexList mSelectedWorldPts;
					/// <summary>
					/// 渲染偏移点，场景节点位置,世界坐标
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mCenterWPoint;

				private:// 渲染参数
					EVString mGroupName;
					EVString mMaterialPointName;
					EarthView::World::Graphic::CMaterialPtr mMaterialPointPtr;
					EarthView::World::Graphic::CManualObject* mpManualPts;					

					/// <summary>
					/// 控件参考系坐标系
					/// </summary>
					EarthView::World::Spatial::Geometry::ISpatialReference* mpSpatialRef;

					EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener* mpTileAltitudeListener;

					EarthView::World::Spatial::Geometry::CPolygon* mpPolygon;
					EarthView::World::Spatial::Display::CSimpleFillSymbol* mpSymbol;
					EarthView::World::Geometry3D::CGeoPolygonEx* mpGeoPolygonEx;
					EarthView::World::Spatial::CGeoObject* mpGeoObject;
					ev_bool mRendering;
					ev_bool mbUpdateDem;

					/// <summary>
					/// 渲染贴地面，如果是移动面，point传入一个空值
					/// </summary>
					/// <param name="point">移动点</param>
					/// <param name="isMoving">是否为移动面</param>
					/// <returns></returns>
					ev_void renderPolygon(EarthView::World::Spatial::Math::CVector3& point, ev_bool isMoving);
					ev_void updatePolygon(EarthView::World::Spatial::Math::CVector3& point, ev_bool isMoving);
					ev_void destoryPolygon();
					/// <summary>
					/// 渲染顶点
					/// </summary>
					/// <param name="points">顶点列表</param>
					/// <param name="materialName">材质名称</param>
					/// <returns>点</returns>
					virtual EarthView::World::Graphic::CManualObject* renderPoints(const EarthView::World::Spatial::Math::VertexList& points, const EVString& materialName, const EarthView::World::Graphic::CColourValue& colorVal);
					/// 创建材质
					/// </summary>
					/// <param name="materialName">材质名称</param>
					/// <param name="isPoint">是否是点材质</param>
					/// <param name="pointSize">点的大小</param>
					/// <returns>材质</returns>
					virtual EarthView::World::Graphic::CMaterialPtr createMaterial(const EVString& materialName, const Real& pointSize);

				private:
					EarthView::World::Graphic::CSceneNode* mpSceneTerrainNode;
					EarthView::World::Graphic::CSceneManager* mpSceneMgr;

					EarthView::World::Spatial3D::Controls::CGlobeControl* mGlobeControl;

					C_DISABLE_COPY( CTileAltitudeTool );
				};
			}
		}
	}
}
#endif
