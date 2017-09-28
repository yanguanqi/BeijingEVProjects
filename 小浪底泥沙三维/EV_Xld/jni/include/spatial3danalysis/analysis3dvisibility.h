#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CANALYSIS3DVISIBILITY_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CANALYSIS3DVISIBILITY_H

#include "ianalysis3dtool.h"
#include "geometry3d/geopointex.h"
#include "symbol/billboard3dsymbol.h"
#include "spatial3danalysisobject/math3dvisibility.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{			
				/// <summary>
				/// 通视分析的类型
				/// </summary>
				enum Analysis3DVisibilityType
				{
					A3DVT_Point2Point,  // 点对点通视
					A3DVT_Point2Line,   // 点对线通视
					A3DVT_Point2Area,   // 点对面通视
				};

				/// <summary>
				/// 点对点通视目标点
				/// </summary>
				class EV_ANALYSIS3D_DLL Point2PointTarget: public EarthView::World::Core::CBaseObject
				{
				public:
					/// <summary>
					/// 目标点(经度、纬度、高程)
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mTargetPoint;
					/// <summary>
					/// 目标点高度
					/// </summary>
					ev_real64 mTargetHeight;

					Point2PointTarget()
					{
						mTargetPoint = EarthView::World::Spatial::Math::CVector3::ZERO;
						mTargetHeight = 0.0;
					}

					virtual ~Point2PointTarget()
					{

					}
ev_private:
					Point2PointTarget(EarthView::World::Core::CNameValuePairList* pList)
					{
						mTargetPoint = EarthView::World::Spatial::Math::CVector3::ZERO;
						mTargetHeight = 0.0;
					}
				};

				/// <summary>
				/// 点对点通视目标点集合
				/// </summary>
				class EV_ANALYSIS3D_DLL Point2PointTargetList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Spatial3D::Analysis::Point2PointTarget> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList);
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					iterator insert(_in iterator pos, _in EarthView::World::Spatial3D::Analysis::Point2PointTarget const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					Point2PointTargetList(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					Point2PointTargetList();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					void push_back(_in EarthView::World::Spatial3D::Analysis::Point2PointTarget  const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Spatial3D::Analysis::Point2PointTarget &front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Spatial3D::Analysis::Point2PointTarget &back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					void insert(_in ev_uint32 pos, _in const EarthView::World::Spatial3D::Analysis::Point2PointTarget& t);
					/// <summary>
					/// 容器中间位置插入列表
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="other">列表</param>
					void insert(_in ev_uint32 pos, _in const EarthView::World::Spatial3D::Analysis::Point2PointTargetList& other);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial3D::Analysis::Point2PointTarget &operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial3D::Analysis::Point2PointTarget const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial3D::Analysis::Point2PointTarget &at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial3D::Analysis::Point2PointTarget const &at(_in ev_size_t n) const;
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					void clear();
				};

				/// <summary>
				/// 点对点通视参数
				/// </summary>
				class EV_ANALYSIS3D_DLL Point2PointParam: public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 观察点(经度、纬度、高程)
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mViewPoint;
					/// <summary>
					/// 观察点的观察高度
					/// </summary>
					ev_real64 mViewHeight;
					/// <summary>
					/// 当前目标点
					/// </summary>
					Point2PointTarget mCurrTargetPoint;
					/// <summary>
					/// 目标点列表(经度、纬度、高程)
					/// </summary>
					Point2PointTargetList mTargetPointList;
					/// <summary>
					/// 观察点颜色
					/// </summary>
					EarthView::World::Graphic::CColourValue mViewPointColor;
					/// <summary>
					/// 可见目标点颜色
					/// </summary>
					EarthView::World::Graphic::CColourValue mTargetPointColor;
					/// <summary>
					/// 不可见目标点颜色
					/// </summary>
					EarthView::World::Graphic::CColourValue mInTargetPointColor;

					Point2PointParam()
					{
						mViewPoint = EarthView::World::Spatial::Math::CVector3::ZERO;
						mViewHeight = 2.0;
						mViewPointColor = EarthView::World::Graphic::CColourValue::Blue;
						mTargetPointColor = EarthView::World::Graphic::CColourValue::Green;
						mInTargetPointColor = EarthView::World::Graphic::CColourValue::Red;
					}
ev_private:
					Point2PointParam(EarthView::World::Core::CNameValuePairList* pList)
					{
						mViewPoint = EarthView::World::Spatial::Math::CVector3::ZERO;
						mViewHeight = 2.0;
						mViewPointColor = EarthView::World::Graphic::CColourValue::Blue;
						mTargetPointColor = EarthView::World::Graphic::CColourValue::Green;
						mInTargetPointColor = EarthView::World::Graphic::CColourValue::Red;
					}
				};

				/// <summary>
				/// 点对线通视参数
				/// </summary>
				class EV_ANALYSIS3D_DLL Point2LineParam: public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 观察点(经度、纬度、高程)
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mViewPoint;
					/// <summary>
					/// 观察点的观察高度
					/// </summary>
					ev_real64 mViewHeight;
					/// <summary>
					/// 目标点(经度、纬度、高程)
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mTargetPoint;
					/// <summary>
					/// 观察点颜色
					/// </summary>
					EarthView::World::Graphic::CColourValue mViewPointColor;
					/// <summary>
					/// 可见线颜色
					/// </summary>
					EarthView::World::Graphic::CColourValue mVisibleLineColor;					
					/// <summary>
					/// 不可见线颜色
					/// </summary>
					EarthView::World::Graphic::CColourValue mInVisibleLineColor;

					Point2LineParam()
					{
						mViewPoint = EarthView::World::Spatial::Math::CVector3::ZERO;
						mViewHeight = 2.0;
						mTargetPoint = EarthView::World::Spatial::Math::CVector3::ZERO;
						mViewPointColor = EarthView::World::Graphic::CColourValue::Blue;
						mVisibleLineColor = EarthView::World::Graphic::CColourValue::Green;				
						mInVisibleLineColor = EarthView::World::Graphic::CColourValue::Red;
					}
ev_private:
					Point2LineParam(EarthView::World::Core::CNameValuePairList* pList)
					{
						mViewPoint = EarthView::World::Spatial::Math::CVector3::ZERO;
						mViewHeight = 2.0;
						mTargetPoint = EarthView::World::Spatial::Math::CVector3::ZERO;
						mViewPointColor = EarthView::World::Graphic::CColourValue::Blue;
						mVisibleLineColor = EarthView::World::Graphic::CColourValue::Green;				
						mInVisibleLineColor = EarthView::World::Graphic::CColourValue::Red;
					}
				};

				/// <summary>
				/// 点对面通视参数
				/// </summary>
				class EV_ANALYSIS3D_DLL Point2AreaParam: public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 观察点(经度、纬度、高程)
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mViewPoint;
					/// <summary>
					/// 观察点的观察高度
					/// </summary>
					ev_real64 mViewHeight;
					/// <summary>
					/// 观察区域半径
					/// </summary>
					ev_real64 mRadius;
					/// <summary>
					/// 射线间隔角度
					/// </summary>
					ev_int32 mRayAngle;
					/// <summary>
					/// 可见线颜色
					/// </summary>
					EarthView::World::Graphic::CColourValue mVisibleLineColor;	
					/// <summary>
					/// 不可见线颜色
					/// </summary>					
					EarthView::World::Graphic::CColourValue mInVisibleLineColor;
					/// <summary>
					/// 圆周线颜色
					/// </summary>
					EarthView::World::Graphic::CColourValue mCircleColor;

					Point2AreaParam()
					{
						mViewPoint = EarthView::World::Spatial::Math::CVector3::ZERO;
						mViewHeight = 2.0;
						mTempTargetPoint = EarthView::World::Spatial::Math::CVector3::ZERO;
						mRadius = 500000.0;
						mRayAngle = 1;
						mVisibleLineColor = EarthView::World::Graphic::CColourValue::Green;				
						mInVisibleLineColor = EarthView::World::Graphic::CColourValue::Red;
						mCircleColor = EarthView::World::Graphic::CColourValue::Green;
					}
ev_private:
					Point2AreaParam(EarthView::World::Core::CNameValuePairList* pList)
					{
						mViewPoint = EarthView::World::Spatial::Math::CVector3::ZERO;
						mViewHeight = 2.0;
						mTempTargetPoint = EarthView::World::Spatial::Math::CVector3::ZERO;
						mRadius = 500000.0;
						mRayAngle = 1;
						mVisibleLineColor = EarthView::World::Graphic::CColourValue::Green;				
						mInVisibleLineColor = EarthView::World::Graphic::CColourValue::Red;
						mCircleColor = EarthView::World::Graphic::CColourValue::Green;
					}
				private:
					/// <summary>
					/// 临时目标点(经度、纬度、高程)
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mTempTargetPoint;
					friend class CAnalysis3DVisibility;
					friend class CThreadFuncVisibility;
				};

				class CThreadFuncVisibility;
				class CFrameListenerVisibility;	
				/// <summary>
				/// 通视分析类
				/// </summary>
				class EV_ANALYSIS3D_DLL CAnalysis3DVisibility : public EarthView::World::Spatial3D::Analysis::IAnalysis3DTool
				{
					friend class CThreadFuncVisibility;
					friend class CFrameListenerVisibility;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CAnalysis3DVisibility(EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pGlobeControl">地球控件</param>
					CAnalysis3DVisibility(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_pGlobeControl);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pSceneMgr">场景管理器</param>
					CAnalysis3DVisibility(EarthView::World::Graphic::CSceneManager* ref_pSceneMgr);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pTerrainLayer"> 地形图层或图层组CTerrainLayer、CLocalTerrainLayer、CTerrainGroupLayer</param>
					CAnalysis3DVisibility(EarthView::World::Spatial3D::Atlas::ITerrainLayer* ref_pTerrainLayer);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CAnalysis3DVisibility();
					/// <summary>
					/// 不使用Tool
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void deactivate();
					/// <summary>
					/// 销毁所有渲染对象及结果
					/// </summary>
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
					/// 获取通视分析结果:遮挡率
					/// </summary>
					/// <param name=""></param>
					/// <returns>遮挡率</returns>
					ev_real64 getShadeRate() const;
					/// <summary>
					/// 获取通视分析类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>通视分析类型</returns>
					const EarthView::World::Spatial3D::Analysis::Analysis3DVisibilityType getVisbilityAlanysisType() const;
					/// <summary>
					/// 设置通视分析类型
					/// </summary>
					/// <param name="type">通视分析类型</param>
					ev_void setVisbilityAlanysisType( EarthView::World::Spatial3D::Analysis::Analysis3DVisibilityType type );
					/// <summary>
					/// 获取点对点通视的计算参数
					/// </summary>
					/// <param name=""></param>
					/// <returns>点对点通视的计算参数</returns>
					EarthView::World::Spatial3D::Analysis::Point2PointParam* getPoint2PointParam();
					/// <summary>
					/// 设置点对点通视的计算参数
					/// </summary>
					/// <param name="type">点对点通视的计算参数</param>
					ev_void setPoint2PointParam( EarthView::World::Spatial3D::Analysis::Point2PointParam* p2pParam );
					/// <summary>
					/// 获取点对线通视的计算参数
					/// </summary>
					/// <param name=""></param>
					/// <returns>点对线通视的计算参数</returns>
					EarthView::World::Spatial3D::Analysis::Point2LineParam* getPoint2LineParam();
					/// <summary>
					/// 设置点对线通视的计算参数
					/// </summary>
					/// <param name="type">点对线通视的计算参数</param>
					ev_void setPoint2LineParam( EarthView::World::Spatial3D::Analysis::Point2LineParam* p2lParam );
					/// <summary>
					/// 获取点对面通视的计算参数
					/// </summary>
					/// <param name=""></param>
					/// <returns>点对面通视的计算参数</returns>
					EarthView::World::Spatial3D::Analysis::Point2AreaParam* getPoint2AreaParam();
					/// <summary>
					/// 设置点对面通视的计算参数
					/// </summary>
					/// <param name="type">点对面通视的计算参数</param>
					ev_void setPoint2AreaParam( EarthView::World::Spatial3D::Analysis::Point2AreaParam* p2aParam );
					/// <summary>
					/// 获取移动对象的颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>颜色</returns>
					EarthView::World::Graphic::CColourValue& getMoveObjectColor();
					/// <summary>
					/// 设置移动对象的颜色
					/// </summary>
					/// <param name="value">颜色</param>
					/// <returns></returns>
					ev_void setMoveObjectColor(const EarthView::World::Graphic::CColourValue& value);
					/// <summary>
					/// 设置广告板的图片(点对面模式)
					/// </summary>
					/// <param name="filepath">图片路径加图片名称（不包含后缀名）</param>
					/// <param name="type">图片后缀名</param>
					/// <returns></returns>
					ev_void setBillboardImage(const EVString& filepath, const EVString& type);
					/// <summary>
					/// 设置广告板的图片大小(点对面模式)
					/// </summary>
					/// <param name="height">图片高度</param>
					/// <param name="width">图片宽度</param>
					/// <returns></returns>
					ev_void setBillboardImageHeightAndWidth(ev_real32 height, ev_real32 width);
					/// <summary>
					/// 设置广告板的高度模式(点对面模式)
					/// </summary>
					/// <param name="amode">高度模式</param>
					/// <returns></returns>
					ev_void setBillboardAltitudeMode(EarthView::World::Spatial::Utility::EVAltitudeMode amode);
					/// <summary>
					/// 设置广告板的几何中心模式(点对面模式)
					/// </summary>
					/// <param name="otype">几何中心模式</param>
					/// <returns></returns>
					ev_void setBillboardOriginType(EarthView::World::Spatial::Display::EVBillboardOriginType otype);
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

#pragma region Point2Point or Point2Line
				protected:
					/// <summary>
					/// 渲染点对点和点对线通视时的观察点或目标点
					/// </summary>
					/// <param name="point">地理坐标点</param>
					/// <param name="colour">点颜色</param>
					/// <param name="height">点高度</param>
					/// <returns></returns>
					ev_void createManualPoints(const EarthView::World::Spatial::Math::CVector3& point,const EarthView::World::Graphic::CColourValue& colour,ev_real64 height);
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
					/// 渲染点对点和点对线通视时的连线
					/// </summary>
					/// <param name="points">世界坐标点列表</param>
					/// <param name="colour">点颜色</param>
					/// <returns></returns>
					ev_void createManualLines(const EarthView::World::Spatial::Math::VertexList& points,const EarthView::World::Graphic::CColourValue& colour);
					/// <summary>
					/// 渲染线列表
					/// </summary>
					vector<EarthView::World::Spatial3D::Analysis::CSpatial3DManualObject*> mpLines;
					/// <summary>
					/// 渲染线
					/// </summary>
					EarthView::World::Spatial3D::Analysis::CSpatial3DManualObject* mpLine;
					/// <summary>
					/// 鼠标移动时的渲染线
					/// </summary>
					EarthView::World::Spatial3D::Analysis::CSpatial3DManualObject* mpTempLine;

					/// <summary>
					/// 点对点通视计算参数
					/// </summary>
					EarthView::World::Spatial3D::Analysis::Point2PointParam* mpPoint2PointParam;
					/// <summary>
					/// 点对线通视计算参数
					/// </summary>
					EarthView::World::Spatial3D::Analysis::Point2LineParam* mpPoint2LineParam;
#pragma endregion


#pragma region Point2Area
				protected:
					/// <summary>
					/// 渲染点对面通视获取分析范围时的移动圆
					/// </summary>
					/// <param name="beginPt">圆心</param>
					/// <param name="endPt">圆周上的某点</param>
					/// <returns></returns>
					ev_void createManualMoveCircle(const EarthView::World::Spatial::Math::CVector3& beginPt,const EarthView::World::Spatial::Math::CVector3& endPt);
					/// <summary>
					/// 点对面通视效果渲染中的圆周列表
					/// </summary>
					vector<EarthView::World::Spatial3D::Analysis::CSpatial3DManualObject*> mpPoint2AreaCircles;
					/// <summary>
					/// 点对面通视效果渲染中的圆周
					/// </summary>
					EarthView::World::Spatial3D::Analysis::CSpatial3DManualObject* mpPoint2AreaCircle;
					/// <summary>
					/// 渲染点对面通视计算时的动态线
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void createManualMoveLine();
					/// <summary>
					/// 点对面通视效果渲染中的动态线列表
					/// </summary>
					vector<EarthView::World::Spatial3D::Analysis::CSpatial3DManualObject*> mpPoint2AreaLines;
					/// <summary>
					/// 点对面通视效果渲染中的动态线
					/// </summary>
					EarthView::World::Spatial3D::Analysis::CSpatial3DManualObject* mpPoint2AreaLine;

					/// <summary>
					/// 线是否发生变化
					/// </summary>
					ev_bool mIsLineChanged;
					/// <summary>
					/// 传入子线程中计算的圆周点(地理坐标)
					/// </summary>
					EarthView::World::Spatial::Math::VertexList mCircleGeoPoints;
					/// <summary>
					/// 点对面通视计算参数
					/// </summary>
					EarthView::World::Spatial3D::Analysis::Point2AreaParam* mpPoint2AreaParam;
#pragma endregion


#pragma region BillBoard
				protected:
					/// <summary>
					/// 创建广告牌样式
					/// </summary>
					/// <param name=""></param>
					/// <returns>广告牌样式</returns>
					EarthView::World::Spatial::Display::CBillboard3DSymbol* createBillboard3DSymbol();
					/// <summary>
					/// 渲染广告牌
					/// </summary>
					/// <param name="point">点</param>
					/// <param name="height">点高度</param>
					ev_void render3DBillBoard(const EarthView::World::Spatial::Math::CVector3& point,ev_real64 height);
					/// <summary>
					/// 释放广告牌
					/// </summary>
					/// <param name="isAll">是否全部释放</param>
					ev_void destory3DBillBoard(ev_bool isAll);

					/// <summary>
					/// 广告板地理对象
					/// </summary>
					EarthView::World::Spatial::CGeoObject* mpBillboardObj;
					/// <summary>
					/// 点扩展对象
					/// </summary>
					EarthView::World::Geometry3D::CGeoPointEx* mpGeoPointEx;
				private:
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
					/// 广告板原点类型
					/// </summary>
					EarthView::World::Spatial::Display::EVBillboardOriginType mBillboardOriginType;
#pragma endregion


#pragma region common
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
					/// 计算通视分析结果
					/// </summary>
					ev_void calcuVisibility();
					/// <summary>
					/// 渲染点对点通视分析
					/// </summary>
					ev_void renderPoint2Point();
					/// <summary>
					/// 渲染点对线通视分析
					/// </summary>
					ev_void renderPoint2Line();
					/// <summary>
					/// 渲染点对面通视分析
					/// </summary>
					ev_void renderPoint2Area();
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
					/// 渲染分析的结果(渲染放在主线程)
					/// </summary>
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
					/// 通视类型
					/// </summary>
					EarthView::World::Spatial3D::Analysis::Analysis3DVisibilityType mA3DVType;
					/// <summary>
					/// 通视分析遮挡率
					/// </summary>
					ev_real64 mShadeRate;
					/// <summary>
					/// 保存每条线通视结果点的容器
					/// </summary>
					vector<EarthView::World::Spatial3D::Analysis::VisibilityPointList> mPts;
					/// <summary>
					/// 移动对象的颜色
					/// </summary>
					EarthView::World::Graphic::CColourValue mMoveObjectColor;
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
					/// 互斥量
					/// </summary>
					EarthView::World::Core::CMutex mMutex;
					/// <summary>
					/// 子线程
					/// </summary>
					EarthView::World::Core::CThread mThread;
					/// <summary>
					/// 子线程函数对象
					/// </summary>
					CThreadFuncVisibility* mpThreadFunc;
					/// <summary>
					/// 帧监听
					/// </summary>
					CFrameListenerVisibility *mpFrameListenerVisibility;

					C_DISABLE_COPY(CAnalysis3DVisibility);
					EV_MUTEX(mInitMutex)
					EV_THREAD_SYNCHRONISER(mInitSync)
#pragma endregion
				};
			}
		}
	}
}

#endif
