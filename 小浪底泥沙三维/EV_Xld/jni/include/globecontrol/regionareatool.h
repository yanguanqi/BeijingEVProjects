#pragma once
#include "globecontrol/evglobecontrol_config.h"

#include "spatialgui/itool.h"
#include "spatialobject/geometry/envelope.h"
#include "graphic/material.h"
#include "graphic/manualobject.h"
#include "graphic/colourvalue.h"
#include "graphic/renderqueue.h"
#include "geometry3d/geometry3d/vector_graphics.h"





namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			class CBaseObject;
		}

		namespace Graphic
		{
			class CMovableObject;
			class CRenderable;
			class CRenderQueue;
			class CSceneNode;
			class CSceneManager;
		}

		namespace Spatial3D
		{
			class CGeoSceneManager;
			namespace Controls
			{
				class CGlobeControl;
				
			}
			namespace SystemUI
			{
				class CRegionAreaTool;

				/// <summary>
				/// 区域范围监听类
				/// </summary>
				class EV_GLOBECONTROL_DLL CRegionAreaListener : public EarthView::World::Core::CBaseObject
				{
				ev_private:
					CRegionAreaListener(_in EarthView::World::Core::CNameValuePairList *pList){}
				public:
					CRegionAreaListener(){}
					~CRegionAreaListener(){}
					/// <summary>
					/// 操作开始
					/// </summary>
					/// <param name="tool">工具对象</param>
					/// <returns></returns>
					virtual ev_void onOperateStart(EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *tool){}

					/// <summary>
					/// 操作结束
					/// </summary>
					/// <param name="tool">工具对象</param>
					/// <returns></returns>
					virtual ev_void onOperateEnd(EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *tool){}
				};

				/// <summary>
				/// 区域范围渲染对象
				/// </summary>
				class EV_GLOBECONTROL_DLL CRegionAreaManualObject : public EarthView::World::Graphic::CMovableObject
				{
ev_private:
					CRegionAreaManualObject(EarthView::World::Core::CNameValuePairList* pList);
				public:
					class EV_GLOBECONTROL_DLL CSubRenderable : public EarthView::World::Graphic::CRenderable
					{
ev_private:
						CSubRenderable(EarthView::World::Core::CNameValuePairList* pList);
					protected:
						EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject* mpParent;
						EarthView::World::Spatial::Math::CMatrix4 m_matWorldTransform;
						EarthView::World::Graphic::CRenderOperation mRenderOp;

						EVString mGroupName;
						EVString mMaterialName;
						mutable EarthView::World::Graphic::CMaterialPtr mMaterial;

					public:
						CSubRenderable(EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject* ref_pParent);

						~CSubRenderable();

						/// <summary>
						/// 渲染开始时向外通知的事件
						/// </summary>
						/// <param name="sm">渲染场景</param>
						/// <param name="rsys">渲染系统</param>
						/// <returns>如果自动执行渲染过程返回true,手动执行返回false</returns>
						virtual ev_bool preRender(EarthView::World::Graphic::CSceneManager *sm,EarthView::World::Graphic::CRenderSystem *rsys);
						/// <summary>
						/// 渲染完成时向外通知的事件
						/// </summary>
						/// <param name="sm">渲染场景</param>
						/// <param name="rsys">渲染系统</param>
						/// <returns></returns>
						virtual void postRender(EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys);

						EarthView::World::Graphic::CMovableObject* getMovableObject()const{return mpParent;}
						/// <summary>
						/// 设置材质
						/// </summary>
						/// <param name="matName">材质名称</param>
						/// <returns></returns>
						void setMaterial(const EVString& matName);

						/// <summary>
						/// 获取材质
						/// </summary>
						/// <returns>材质</returns>
						virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const;

						/// <summary>
						/// 获取渲染方式
						/// </summary>
						/// <returns>渲染方式</returns>
						virtual EarthView::World::Graphic::CRenderOperation* getRenderOperation();

						/// <summary>
						/// 定位相机
						/// </summary>
						/// <param name="op">设置渲染方式</param>
						/// <returns></returns>
						void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);

						/// <summary>
						/// 设置矩阵
						/// </summary>
						/// <param name="xform">矩阵</param>
						/// <returns></returns>
						virtual void getWorldTransforms( EarthView::World::Spatial::Math::CMatrix4 *xform ) const;

						/// <summary>
						/// 返回光源列表
						/// </summary>
						/// <returns>列表对象</returns>
						const EarthView::World::Graphic::LightList& getLights(void) const;

					private:
						EarthView::World::Spatial::Math::CMatrix4 mProjM;
					};

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">对象名</param>
					/// <returns></returns>
					CRegionAreaManualObject(const EVString& name);
					/// <summary>
					/// 析构函数
					/// </summary>
					~CRegionAreaManualObject();
					/// <summary>
					/// 初始化
					/// </summary>
					/// <param name="materialName">材质名</param>
					/// <param name="ro">渲染操作类型</param>
					/// <returns></returns>
					void begin(const EVString& materialName, const EarthView::World::Graphic::CRenderOperation::OperationType& ro);
					/// <summary>
					/// 反初始化
					/// </summary>
					/// <returns></returns>
					void end();
					/// <summary>
					/// 添加点
					/// </summary>
					/// <param name="pos">点的世界坐标</param>
					/// <param name="color">点的颜色</param>
					/// <returns></returns>
					void addPoint(const EarthView::World::Spatial::Math::CVector3& pos, const EarthView::World::Graphic::CColourValue& color);
					/// <summary>
					/// 添加索引
					/// </summary>
					/// <param name="idx">点的索引</param>
					/// <returns></returns>
					void addIndex(ev_uint32 idx);

					/// <summary>
					/// 设置材质
					/// </summary>
					/// <param name="matName">材质名</param>
					/// <returns></returns>
					void setMaterial(const EVString& matName)
					{
						this->mpSection->setMaterial(matName);
					};

					/// <summary>
					/// 获得局部坐标系包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns>局部坐标系包围盒</returns>
					virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getBoundingBox(void) const
					{
						return this->mBox;
					};

					/// <summary>
					/// 获得包围盒半径
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒半径</returns>
					Real getBoundingRadius() const
					{
						return mRadius;
					};

					/// <summary>
					/// 更新到渲染队列
					/// </summary>
					/// <param name="queue">渲染队列</param>
					/// <returns></returns>
					virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue* queue)
					{
						queue->addRenderable(this->mpSection, queue->getDefaultQueueGroup(), queue->getDefaultRenderablePriority()); 
					};

					/// <summary>
					/// 访问可渲染对象
					/// </summary>
					/// <param name="visitor">访问者</param>
					/// <returns></returns>
					void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor* visitor)
					{
						visitRenderables(visitor, false);
					};
					/// <summary>
					/// 访问可渲染对象
					/// </summary>
					/// <param name="visitor">访问者</param>
					/// <param name="debugRenderables">是否包含调试用可渲染对象</param>
					/// <returns></returns>
					void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor* visitor, ev_bool debugRenderables)
					{
						visitor->visit(this->mpSection, 0, debugRenderables);
					};

					/// <summary>
					/// 获得该可移动对象类型
					/// </summary>
					/// <returns>类型名</returns>
					virtual EVString getMovableType() const
					{
						return "EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject";
					};

				private:
					CSubRenderable* mpSection;
					ev_char* mpTempVertexBuffer;
					ev_size_t mTempVertexSize;
					ev_uint32* mpTempIndexBuffer;
					ev_size_t mTempIndexSize;
					ev_size_t mDeclSize;

					EarthView::World::Spatial::Math::CAxisAlignedBox mBox;
					Real mRadius;
				};

				/// <summary>
				/// 区域范围选取工具类
				/// </summary>
				class EV_GLOBECONTROL_DLL CRegionAreaTool :	public EarthView::World::Spatial::SystemUI::ITool
				{
				ev_private:
					CRegionAreaTool(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_globe">抽象场景控件</param>
					/// <returns></returns>
					CRegionAreaTool(EarthView::World::Spatial3D::Controls::CGlobeControl *ref_globe);
					/// <summary>
					/// 析构函数
					/// </summary>
					~CRegionAreaTool(void);

					/// <summary>
					/// 查询工具类型
					/// </summary>
					/// <returns>工具类型EVToolType</returns>
					virtual ev_uint32 getType() const;

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
					
					virtual ev_void run();
					virtual ev_void reset();
					
					/// <summary>
					/// 根据两点绘制绘制圆
					/// </summary>
					/// <param name="btginPt">起始点位置</param>
					/// <param name="endPtr">目标点</param>
					ev_void createMoveCircle(const EarthView::World::Spatial::Math::CVector3 &beginPt ,const EarthView::World::Spatial::Math::CVector3 &endPt);
					
					/// <summary>
					/// 绘制圆
					/// </summary>
					/// <param name="radius">圆半径</param>
					ev_void createCircle(ev_real32 radius);

					/// <summary>
					/// 设置监听
					/// </summary>
					/// <param name="listener">监听对象</param>
					ev_void setCircleAreaListener(EarthView::World::Spatial3D::SystemUI::CRegionAreaListener *listener);

					/// <summary>
					/// 根据点经纬度、半径生成圆形节点缓冲
					/// </summary>
					/// <param name="lati">起始点位置</param>
					/// <param name="longi">目标点</param>
					/// <param name="longi">目标点</param>
					/// <param name="outPoints">节点缓冲</param>
					ev_void splitCircle2WorldPosition( ev_real64 lati , ev_real64 longi , ev_real64 radius , ev_int32 insertNum, _out EarthView::World::Spatial::Math::VertexList &outPoints );

					/// <summary>
					/// 设置圆形半径
					/// </summary>
					/// <param name="radius">半径</param>
					ev_void setRadius(Real radius);

					/// <summary>
					/// 获取范围半径
					/// </summary>
					/// <returns>半径</returns>
					Real getRadius() const ;


					/// <summary>
					/// 设置圆心位置
					/// </summary>
					/// <param name="lon">经度</param>
					/// <param name="lat">纬度</param>
					/// <returns></returns>
					ev_void setCenterPosition(ev_real64 lon, ev_real64 lat);

					/// <summary>
					/// 获取圆心点位置
					/// </summary>
					/// <returns>位置(经纬度)</returns>
					EarthView::World::Spatial::Math::CVector2 getCenterPosition() const;

					/// <summary>
					/// 获取最大经纬度范围
					/// </summary>
					/// <returns>范围</returns>
					EarthView::World::Spatial::Geometry::CEnvelope getArea();

					/// <summary>
					/// 获取圆心点高程
					/// </summary>
					/// <returns>高程值</returns>
					ev_real64 getCenterAltitude()const;

					/// <summary>
					/// 清除资源
					/// </summary>
					ev_void clear();

					/// <summary>
					/// 绘制圆心
					/// </summary>
					/// <returns></returns>
					ev_void drawCenter();
				protected:
					/// <summary>
					/// 根据点经纬度、半径生成圆形节点缓冲
					/// </summary>
					/// <param name="materialName">材质名称</param>
					/// <param name="isPoint">是否为点材质</param>
					/// <param name="pointSize">点大小</param>
					/// <returns>材质指针</returns>
					EarthView::World::Graphic::CMaterialPtr createMaterial(const EVString& materialName, const ev_bool& isPoint, const Real& pointSize);

				private:
					/// <summary>
					/// 是否绘圆
					/// </summary>
					ev_bool _isDrag;
					/// <summary>
					/// 地球是否在处于拖动状态
					/// </summary>
					ev_bool _isMoving;
					
					/// <summary>
					/// 监听对象
					/// </summary>
					EarthView::World::Spatial3D::SystemUI::CRegionAreaListener *mpCircleAreaListenter;
					
					/// <summary>
					/// 半径
					/// </summary>
					Real mCurRadius;

					ev_real32 mlonMin;
					ev_real32 mlonMax;
					ev_real32 mlatMin;
					ev_real32 mlatMax;
					EarthView::World::Spatial::Geometry::CEnvelope mArea;

					EarthView::World::Spatial3D::Controls::CGlobeControl *mpGlobeControl;

					EarthView::World::Graphic::CSceneNode *mpCircleNode;
					EarthView::World::Graphic::CSceneNode *mpCenterNode;
					EarthView::World::Graphic::CSceneManager *mpSceneMgr;


					EarthView::World::Spatial3D::CGeoSceneManager *mpGeoSceneMgr;

					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject *mpManualCircle;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject *mpManualPoint;

					EVString mMaterialLineName;
					EVString mMaterialPointName;

					EarthView::World::Graphic::CMaterialPtr mMaterialLinePtr;
					EarthView::World::Graphic::CMaterialPtr mMaterialPointPtr;

					EarthView::World::Spatial::Math::CVector3 mCenterPoint;
					EarthView::World::Spatial::Math::CVector3 mMouseMoveGeoPt;

					EarthView::World::Spatial::Math::VertexList mMovingCirclePts;

					C_DISABLE_COPY( CRegionAreaTool );
				};

				
			}
		}
	}
}

