#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CMEASUREAZIMUTH_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CMEASUREAZIMUTH_H

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
				/// 方位角测量类
				/// 定义了方位角测量的所有操作
				/// </summary>
				class EV_ANALYSIS3D_DLL CAnalysis3DMeasureAzimuth : public EarthView::World::Spatial3D::Analysis::IAnalysis3DTool
				{
				protected:
					class CAzimuthWideLineRenderableListener : public EarthView::World::Graphic::CRenderable::CRenderableListener
					{
					public:
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>
						CAzimuthWideLineRenderableListener();
						/// <summary>
						/// 析构函数
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>
						virtual ~CAzimuthWideLineRenderableListener();
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
					CAnalysis3DMeasureAzimuth(EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pGlobeControl">地球控件</param>
					CAnalysis3DMeasureAzimuth(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_pGlobeControl);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pSceneMgr">场景管理器</param>
					CAnalysis3DMeasureAzimuth(EarthView::World::Graphic::CSceneManager* ref_pSceneMgr);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pTerrainLayer"> 地形图层或图层组CTerrainLayer、CLocalTerrainLayer、CTerrainGroupLayer</param>
					CAnalysis3DMeasureAzimuth(EarthView::World::Spatial3D::Atlas::ITerrainLayer* ref_pTerrainLayer);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CAnalysis3DMeasureAzimuth();
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
					/// 获取是否按顺时针测量方位角
					/// </summary>
					/// <param name=""></param>
					/// <returns>true代表顺时针，false代表逆时针</returns>
					ev_bool getClockwise();
					/// <summary>
					/// 设置是否按顺时针测量方位角
					/// </summary>
					/// <param name="value">true代表顺时针，false代表逆时针</param>
					/// <returns></returns>
					ev_void setClockwise(ev_bool clockwise);
					/// <summary>
					/// 获取起始点位置
					/// </summary>
					/// <param name=""></param>
					/// <returns>起始点(地理坐标)</returns>
					EarthView::World::Spatial::Math::CVector3 getOriginPoint();
					/// <summary>
					/// 设置起始点位置
					/// </summary>
					/// <param name="value">起始点(地理坐标)</param>
					/// <returns></returns>
					ev_void setOriginPoint(EarthView::World::Spatial::Math::CVector3& value);
					/// <summary>
					/// 获取终止点位置
					/// </summary>
					/// <param name=""></param>
					/// <returns>终止点(地理坐标)</returns>
					EarthView::World::Spatial::Math::CVector3 getTerminalPoint();
					/// <summary>
					/// 设置终止点位置
					/// </summary>
					/// <param name="value">终止点(地理坐标)</param>
					/// <returns></returns>
					ev_void setTerminalPoint(EarthView::World::Spatial::Math::CVector3& value);
					/// <summary>
					/// 获取指北线的颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>颜色</returns>
					const EarthView::World::Graphic::CColourValue& getNorthPoleLineColor() const;
					/// <summary>
					/// 设置指北线的颜色
					/// </summary>
					/// <param name="value">颜色</param>
					/// <returns></returns>
					ev_void setNorthPoleLineColor(const EarthView::World::Graphic::CColourValue& value);
					/// <summary>
					/// 获取目标线的颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>颜色</returns>
					const EarthView::World::Graphic::CColourValue& getTargetLineColor() const;
					/// <summary>
					/// 设置目标线的颜色
					/// </summary>
					/// <param name="value">颜色</param>
					/// <returns></returns>
					ev_void setTargetLineColor(const EarthView::World::Graphic::CColourValue& value);
					/// <summary>
					/// 获取角度线的颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>颜色</returns>
					const EarthView::World::Graphic::CColourValue& getAngleArcLineColor() const;
					/// <summary>
					/// 设置角度线的颜色
					/// </summary>
					/// <param name="value">颜色</param>
					/// <returns></returns>
					ev_void setAngleArcLineColor(const EarthView::World::Graphic::CColourValue& value);
					/// <summary>
					/// 获取方位角角度值
					/// </summary>
					/// <param name=""></param>
					/// <returns>方位角角度值</returns>
					ev_real64 getAzimuthDegree();
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
					/// 方位角量算
					/// </summary>
					/// <param name="originPoint">起始点(地理坐标)</param>
					/// <param name="terminalPoint">终止点(地理坐标)</param>
					/// <returns>方位角角度值</returns>
					ev_real64 azimuthDegreeMeasure(const EarthView::World::Spatial::Math::CVector3& originPoint,const EarthView::World::Spatial::Math::CVector3& terminalPoint);
					/// <summary>
					/// 渲染字体对象
					/// </summary>
					/// <param name="azimuthDegree">方位角角度值</param>
					/// <returns>方位角结果字体</returns>
					EarthView::World::Graphic::CTextureMovableText* renderTextMovable(ev_real64 azimuthDegree);
					/// <summary>
					/// 渲染线
					/// </summary>
					/// <param name="pWideLine">宽线对象</param>
					/// <param name="originPoint">起始点</param>
					/// <param name="terminalPoint">终止点</param>
					/// <returns>“N”字体</returns>
					EarthView::World::Graphic::CTextureMovableText* rendLines(EarthView::World::Geometry3D::CWideLine* pWideLine,
						const EarthView::World::Spatial::Math::CVector3& originPoint,const EarthView::World::Spatial::Math::CVector3& terminalPoint);

				private:
					/// <summary>
					/// 方位角角度值
					/// </summary>
					ev_real64 mAzimuthDegree;
					/// <summary>
					/// 起始点是否跟模型或海面相交
					/// </summary>
					ev_bool mIsOriginIntersectModelOrSea;
					/// <summary>
					/// 终止点是否跟模型或海面相交
					/// </summary>
					ev_bool mIsTerminalIntersectModelOrSea;
					/// <summary>
					/// true代表顺时针，false代表逆时针
					/// </summary>
					ev_bool mClockwise;
					/// <summary>
					/// 起始点
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mOriginPoint;
					/// <summary>
					/// 终止点
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mTerminalPoint;
					/// <summary>
					/// 指北线颜色
					/// </summary>
					EarthView::World::Graphic::CColourValue mNorthPoleLineColor;
					/// <summary>
					/// 目标线颜色
					/// </summary>
					EarthView::World::Graphic::CColourValue mTargetLineColor;
					/// <summary>
					/// 角度线颜色
					/// </summary>
					EarthView::World::Graphic::CColourValue mAngleArcLineColor;

					/// <summary>
					/// 结果字体对象
					/// </summary>
					vector<EarthView::World::Graphic::CTextureMovableText*> mpTextMovables;
					/// <summary>
					/// 鼠标移动时的结果字体对象
					/// </summary>
					EarthView::World::Graphic::CTextureMovableText* mpTempTextMovable;
					/// <summary>
					/// 正北方向字体对象
					/// </summary>
					vector<EarthView::World::Graphic::CTextureMovableText*> mpNorthPoleTextMovables;
					/// <summary>
					/// 鼠标移动时的正北方向字体对象
					/// </summary>
					EarthView::World::Graphic::CTextureMovableText* mpTempNorthPoleTextMovable;
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
					/// <summary>
					/// 线对象监听
					/// </summary>
					CAzimuthWideLineRenderableListener* mpRenderableListener;

				private:
					C_DISABLE_COPY(CAnalysis3DMeasureAzimuth);
				};
			}
		}
	}
}

#endif
