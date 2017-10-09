#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CMEASUREPOINT_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CMEASUREPOINT_H

#include "ianalysis3dtool.h"
#include "symbol/billboard3dsymbol.h"
#include "geometry3d/geometry3dextension/multipoint3dextension.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{	
			    /// <summary>
				/// 点测量类
				/// 定义了点测量的所有操作
				/// </summary>
				class EV_ANALYSIS3D_DLL CAnalysis3DMeasurePoint : public EarthView::World::Spatial3D::Analysis::IAnalysis3DTool
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CAnalysis3DMeasurePoint(_in EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pGlobeControl">地球控件</param>
					CAnalysis3DMeasurePoint(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_pGlobeControl);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pSceneMgr">场景管理器</param>
					CAnalysis3DMeasurePoint(EarthView::World::Graphic::CSceneManager* ref_pSceneMgr);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pTerrainLayer"> 地形图层或图层组CTerrainLayer、CLocalTerrainLayer、CTerrainGroupLayer</param>
					CAnalysis3DMeasurePoint(EarthView::World::Spatial3D::Atlas::ITerrainLayer* ref_pTerrainLayer);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CAnalysis3DMeasurePoint();
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
					/// 获取测量点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>测量点坐标（经度、纬度、高程）</returns>
					EarthView::World::Spatial::Math::CVector3 const getLocationPoint() const;
					/// <summary>
					/// 设置测量点坐标
					/// </summary>
					/// <param name="pt">测量点坐标（经度、纬度、高程）</param>
					ev_void setLocationPoint(EarthView::World::Spatial::Math::CVector3 pt);
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
					/// 鼠标按键弹起事件
					/// </summary>
					/// <param name="button">鼠标键值</param>
					/// <param name="shift">Shift键值</param>
					/// <param name="x">横坐标</param>
					/// <param name="y">纵坐标</param>
					/// <returns>是否继续向父控件发送该事件</returns>
					virtual ev_bool onMouseUp(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
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
					/// 渲染字体对象
					/// </summary>
					/// <param name=""></param>
					ev_void renderTextMovable();
					/// <summary>
					/// 创建广告牌样式
					/// </summary>
					/// <param name=""></param>
					/// <returns>广告牌样式</returns>
					EarthView::World::Spatial::Display::CBillboard3DSymbol* createBillboard3DSymbol();
					/// <summary>
					/// 渲染广告牌
					/// </summary>
					/// <param name=""></param>
					ev_void render3DBillBoard();
					/// <summary>
					/// 释放广告牌
					/// </summary>
					/// <param name=""></param>
					ev_void destory3DBillBoard();

				private:
					/// <summary>
					/// 测量点
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mLocationPoint;
					/// <summary>
					/// 字体对象
					/// </summary>
					vector<EarthView::World::Graphic::CTextureMovableText*> mpTextMovables;
					/// <summary>
					/// 三维点扩展对象
					/// </summary>
					EarthView::World::Geometry3D::CMultiPoint3DExtension* mpGeoPointEx;
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
					/// 广告板图片几何中心模式
					/// </summary>
					EarthView::World::Spatial::Display::EVBillboardOriginType mBillboardOriginType;

				private:
					C_DISABLE_COPY(CAnalysis3DMeasurePoint);
				};
			}
		}
	}
}
#endif
