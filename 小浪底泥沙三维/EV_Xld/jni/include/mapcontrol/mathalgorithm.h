#ifndef EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_MATHALGORITHM_H
#define EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_MATHALGORITHM_H
#include "mapcontrol/mapcontrolconfig.h"
#include "spatialobject/geometry/point.h"
#include "spatialobject/geometry/rectanglering.h"
#include "spatialobject/geometry/ellipticring.h"
#include "spatialobject/geometry/ellipticarc.h"
#include "spatialobject/geometry/rectangle.h"
#include "spatialobject/geometry/circlearc.h"
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
/// <summary>
/// 部分数据公式
/// </summary>
class EV_MAPCONTROL_DLL CMathFormula : public EarthView::World::Core::CAllocatedObject
{
ev_private:
	CMathFormula( _in EarthView::World::Core::CNameValuePairList* pList );
public:
	/// <summary>
	/// 默认构造函数
	/// </summary>
	CMathFormula();
	/// <summary>
	/// 默认析构函数
	/// </summary>
	~CMathFormula();
	/// <summary>
	/// 余弦定理求取夹角
	/// </summary>
	/// <param name="p0">顶角位置</param>
	/// <param name="p1">起始点位置</param>
	/// <param name="p2">终止点位置</param>
	/// <returns></returns>
	static ev_real64  cosinTheorem( _in const EarthView::World::Spatial::Geometry::CPoint* p0, _in const EarthView::World::Spatial::Geometry::CPoint* p1, _in const EarthView::World::Spatial::Geometry::CPoint* p2 );
	/// <summary>
	/// 余弦定理求取夹角
	/// </summary>
	/// <param name="x0">顶角位置X坐标</param>
	/// <param name="y0">顶角位置Y坐标</param>
	/// <param name="x1">起始点位置X坐标</param>
	/// <param name="y1">起始点位置Y坐标</param>
	/// <param name="x2">终止点位置X坐标</param>
	/// <param name="y2">终止点位置Y坐标</param>
	/// <returns></returns>
	static ev_real64  cosinTheorem( ev_real64 x0, ev_real64 y0, ev_real64 x1, ev_real64 y1, ev_real64 x2, ev_real64 y2 );
	/// <summary>
	/// 点到线段的距离
	/// </summary>
	/// <param name="pnt">点的位置</param>
	/// <param name="p0">线段的起始位置</param>
	/// <param name="p1">线段的终止位置</param>
	/// <returns></returns>
	static ev_real64  pointToLine( const EarthView::World::Spatial::Geometry::CPoint* pnt, 
		const EarthView::World::Spatial::Geometry::CPoint* pnt0, const EarthView::World::Spatial::Geometry::CPoint* pnt1 );
	/// <summary>
	/// 点到线段的距离
	/// </summary>
	/// <param name="dx">点的X坐标</param>
	/// <param name="dy">点的Y坐标</param>
	/// <param name="x0">线段的起始位置X坐标</param>
	/// <param name="y0">线段的起始位置Y坐标</param>
	/// <param name="x1">线段的终止位置X坐标</param>
	/// <param name="y1">线段的终止位置Y坐标</param>
	/// <returns></returns>
	static ev_real64  pointToLine( ev_real64 dx, ev_real64 dy, ev_real64 x0, ev_real64 y0, ev_real64 x1, ev_real64 y1 );
	/// <summary>
	/// 点到点的距离
	/// </summary>
	/// <param name="pnt1">第一个点的位置</param>
	/// <param name="pnt2">第二个点的位置</param>
	/// <returns></returns>
	static ev_real64 pointToPoint( const EarthView::World::Spatial::Geometry::CPoint* pnt1, const EarthView::World::Spatial::Geometry::CPoint* pnt2 );
	/// <summary>
	/// 判断p2拐向,p0->p1->p2
	/// </summary>
	/// <param name="p0">第一个点位置</param>
	/// <param name="p1">第二个点位置</param>
	/// <param name="p2">第三个点位置</param>
	/// <returns>如果大于0，右拐，小于0，向左拐，等于0则三点共线</returns>
	static ev_real64 testTurn( _in const EarthView::World::Spatial::Geometry::CPoint* p0, 
		_in const EarthView::World::Spatial::Geometry::CPoint* p1, _in const EarthView::World::Spatial::Geometry::CPoint* p2 );
	/// <summary>
	/// 求取角aob的值
	/// </summary>
	/// <param name="p0">项角位置</param>
	/// <param name="pa">起始点位置</param>
	/// <param name="pb">终止点位置</param>
	/// <returns>pb在po_pa的左侧，值在0~180之间, pb在po_pa的右侧，值在180~360之间</returns>
	static ev_real64 angle_aob( _in const EarthView::World::Spatial::Geometry::CPoint* po,
		_in const EarthView::World::Spatial::Geometry::CPoint* pa, 
		_in const EarthView::World::Spatial::Geometry::CPoint* pb );
	/// <summary>
	/// 判断三点是否共线（包含延长线）
	/// </summary>
	/// <param name="p1">第一个点</param>
	/// <param name="p2">第二个点</param>
	/// <param name="q">第三个点</param>
	/// <returns>如果共线则返回true,反之则否</returns>
	static ev_bool  shareLine( _in const EarthView::World::Spatial::Geometry::CPoint* p1,
		_in const EarthView::World::Spatial::Geometry::CPoint* p2, 
		_in const EarthView::World::Spatial::Geometry::CPoint* q );

	/// <summary>
	/// 判断三点是否共线（包含延长线）
	/// </summary>
	/// <param name="p1">第一个点</param>
	/// <param name="p2">第二个点</param>
	/// <param name="q">第三个点</param>
	/// <param name="precision">精度</param>
	/// <returns>如果共线则返回true,反之则否</returns>
	static ev_bool  shareLine( _in const EarthView::World::Spatial::Geometry::CPoint* p1,
		_in const EarthView::World::Spatial::Geometry::CPoint* p2, 
		_in const EarthView::World::Spatial::Geometry::CPoint* q, ev_real64 precision);

	/// <summary>
	/// 判断点是否在线段上（不包含延长线）
	/// </summary>
	/// <param name="q">测试点</param>
	/// <param name="p1">线段的起始点</param>
	/// <param name="p2">线段的终止点</param>
	/// <returns>如果在线上，则返回true,反之则否</returns>
	static ev_bool  isPointOnLine( _in const EarthView::World::Spatial::Geometry::CPoint* q, _in const EarthView::World::Spatial::Geometry::CPoint* p1, _in const EarthView::World::Spatial::Geometry::CPoint* p2 );

	/// <summary>
	/// 判断点是否在线段上（不包含延长线）
	/// </summary>
	/// <param name="q">测试点</param>
	/// <param name="p1">线段的起始点</param>
	/// <param name="p2">线段的终止点</param>
	/// <param name="precision">精度</param>
	/// <returns>如果在线上，则返回true,反之则否</returns>
	static ev_bool  isPointOnLine( _in const EarthView::World::Spatial::Geometry::CPoint* q, _in const EarthView::World::Spatial::Geometry::CPoint* p1, _in const EarthView::World::Spatial::Geometry::CPoint* p2, ev_real64 precision);

	/// <summary>
	/// 判断点是否为垂足，即线段p1_fp和线段p2_fp是否垂直
	/// </summary>
	/// <param name="fp">测试点</param>
	/// <param name="p1">线段的起始点</param>
	/// <param name="p2">线段的终止点</param>
	/// <returns>如果为真，则表明是垂足点</returns>
	static ev_bool  isFootPoint( _in const EarthView::World::Spatial::Geometry::CPoint* fp, _in const EarthView::World::Spatial::Geometry::CPoint* p1, _in const EarthView::World::Spatial::Geometry::CPoint* p2 );

	/// <summary>
	/// 获取垂足点
	/// </summary>
	/// <param name="pPoint1">线段的起始点</param>
	/// <param name="pPoint2">线段的终止点</param>
	/// <param name="x">获取垂足经过的某个点的X坐标，返回垂足的X坐标值</param>
	/// <param name="y">获取垂足经过的某个点的Y坐标，返回垂足的Y坐标值</param>
	/// <returns>垂足与线段的空间关系</returns>
	static ev_int32 getFootPoint(_in const EarthView::World::Spatial::Geometry::CPoint* pPoint1,
		_in const EarthView::World::Spatial::Geometry::CPoint* pPoint2,ev_real64& x,ev_real64 & y);

	/// <summary>
	/// 判断两条线段是否平行
	/// </summary>
	/// <param name="pStartPL1">线段的起始点</param>
	/// <param name="pEndPL1">线段的终止点</param>
	/// <param name="pStartPL2">获取垂足经过的某个点的X坐标，返回垂足的X坐标值</param>
	/// <param name="pEndPL2">获取垂足经过的某个点的Y坐标，返回垂足的Y坐标值</param>
	/// <returns>如果两条线段平行，则返回true,否则返回false</returns>
	static ev_bool isParallel(_in const EarthView::World::Spatial::Geometry::CPoint* pStartPL1,
		_in const EarthView::World::Spatial::Geometry::CPoint* pEndPL1,
		_in const EarthView::World::Spatial::Geometry::CPoint* pStartPL2,
		_in const EarthView::World::Spatial::Geometry::CPoint* pEndPL2);

	/// <summary>
	/// 判断两个值是否大约相等
	/// </summary>
	/// <param name="dValue1">用来判断的第一个值</param>
	/// <param name="dValue2">用来判断的第二个值</param>
	/// <param name="dTolerance">精确度</param>
	/// <returns>如果两个值相等，则返回true,否则返回false</returns>
	static ev_bool isApproximate(ev_real64 dValue1, ev_real64 dValue2, ev_real64 dTolerance);
};
/// <summary>
/// 关于圆角矩形的算法，帮助生成控制点
/// </summary>
class EV_MAPCONTROL_DLL CRoundRectAlgori : public EarthView::World::Core::CAllocatedObject
{
ev_private:
	CRoundRectAlgori( _in EarthView::World::Core::CNameValuePairList* pList );
public:
	/// <summary>
	/// 默认构造函数
	/// </summary>
	CRoundRectAlgori();
	/// <summary>
	/// 默认析构函数
	/// </summary>
	~CRoundRectAlgori();
public:
	/// <summary>
	/// 通过传入四个控制点，生成第五个控制点和圆角率
	/// </summary>
	/// <param name="p0">测试点</param>
	/// <param name="p1">第一个控制点</param>
	/// <param name="p2">第二个控制点</param>
	/// <param name="p3">第三个控制点</param>
	/// <returns></returns>
	ev_void setRectangleRing( _in const EarthView::World::Spatial::Geometry::CPoint* p0, _in const EarthView::World::Spatial::Geometry::CPoint* p1,
		_in const EarthView::World::Spatial::Geometry::CPoint* p2, _in const EarthView::World::Spatial::Geometry::CPoint* p3 );
	/// <summary>
	/// 传入矩形，生成控制点
	/// </summary>
	/// <param name="rect">矩形</param>
	/// <returns></returns>
	ev_void setRectangleRing( _in const EarthView::World::Spatial::Geometry::CRectangleRing* rect );
	/// <summary>
	/// 获取第一个控制点
	/// </summary>
	/// <param name=""></param>
	/// <returns>第一个控制点</returns>
	EarthView::World::Spatial::Geometry::CPoint* getFirst( ) const{ return mpFirst; }
	/// <summary>
	/// 获取第二个控制点
	/// </summary>
	/// <param name=""></param>
	/// <returns>第二个控制点</returns>
	EarthView::World::Spatial::Geometry::CPoint* getSecond() const { return mpSecond; }
	/// <summary>
	/// 获取第三个控制点
	/// </summary>
	/// <param name=""></param>
	/// <returns>第三个控制点</returns>
	EarthView::World::Spatial::Geometry::CPoint* getThird() const { return mpThird; }
	/// <summary>
	/// 获取第四个控制点
	/// </summary>
	/// <param name=""></param>
	/// <returns>第四个控制点</returns>
	EarthView::World::Spatial::Geometry::CPoint* getForth() const { return mpForth; }
	/// <summary>
	/// 获取第五个控制点
	/// </summary>
	/// <param name=""></param>
	/// <returns>第五个控制点</returns>
	EarthView::World::Spatial::Geometry::CPoint* getFifth() const { return mpFifth; }
	/// <summary>
	/// 获取圆角率
	/// </summary>
	/// <param name="v12"></param>
	/// <param name="v23"></param>
	/// <returns></returns>
	ev_void getRoundRadius( ev_real64& v12, ev_real64& v23 ) const;
	/// <summary>
	/// 获取矩形
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	EarthView::World::Spatial::Geometry::CRectangleRing* getRectangle() const { return mpRect; }
protected:
	ev_bool checkClock();
	ev_void clear();
	ev_void makeFifth();
	EarthView::World::Spatial::Geometry::CPoint* mpFirst, *mpSecond, *mpThird, *mpForth, *mpFifth;
	EarthView::World::Spatial::Geometry::CRectangleRing* mpRect;
};
/// <summary>
/// 关于椭圆的算法，帮助生成控制点
/// </summary>
class EV_MAPCONTROL_DLL CEllipticRingAlgori : public EarthView::World::Core::CAllocatedObject
{
ev_private:
	CEllipticRingAlgori( _in EarthView::World::Core::CNameValuePairList* pList );
public:
	/// <summary>
	/// 默认构造函数
	/// </summary>
	CEllipticRingAlgori();
	/// <summary>
	/// 默认析构函数
	/// </summary>
	~CEllipticRingAlgori();
	/// <summary>
	/// 设置椭圆的三个控制点
	/// </summary>
	/// <param name="center">椭圆的中心点</param>
	/// <param name="p1">第一个控制点</param>
	/// <param name="p2">第二个控制点</param>
	/// <returns></returns>
	ev_void setEllipticRing( _in const EarthView::World::Spatial::Geometry::CPoint* center, 
		_in const EarthView::World::Spatial::Geometry::CPoint* p1, 
		_in const EarthView::World::Spatial::Geometry::CPoint* p2 );
	/// <summary>
	/// 设置椭圆
	/// </summary>
	/// <param name="ring">椭圆对象</param>
	/// <returns></returns>
	virtual ev_void setEllipticRing( EarthView::World::Spatial::Geometry::CEllipticRing* ring );
	/// <summary>
	/// 获取长半轴
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_real64 getSemiMajorAxe() const { return mdMajor; }
	/// <summary>
	/// 获取短半轴
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_real64 getSemiMinorAxe() const { return mdMinor; }
	/// <summary>
	/// 获取旋转角度
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_real64 getAngle() const{ return mdAngle; }
	/// <summary>
	/// 获取中心点
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	EarthView::World::Spatial::Geometry::CPoint* getCenter() const{ return mpCenter; }
	/// <summary>
	/// 获取长半轴控制点
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	EarthView::World::Spatial::Geometry::CPoint* getCtrlPoint1() const{ return mpCtrl1; }
	/// <summary>
	/// 获取短半轴控制点
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	EarthView::World::Spatial::Geometry::CPoint* getCtrlPoint2() const{ return mpCtrl2; }
	/// <summary>
	/// 生成一个椭圆，内存外部释放
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	_extfree EarthView::World::Spatial::Geometry::CEllipticRing* makeEllipticRing() const;
	/// <summary>
	/// 获取在椭圆上指定角度处的坐标
	/// </summary>
	/// <param name="angle">输入角度</param>
	/// <param name="x">返回的X坐标</param>
	/// <param name="y">返回的Y坐标</param>
	/// <returns></returns>
	ev_void getPointOnEllipse( _in ev_real64 angle, _in ev_real64& x, _in ev_real64& y );
protected:
	ev_real64 mdMajor, mdMinor, mdAngle;
	EarthView::World::Spatial::Geometry::CPoint* mpCenter, *mpCtrl1, *mpCtrl2;
};
/// <summary>
/// 关于椭圆弧的算法，帮助生成控制点
/// </summary>
class EV_MAPCONTROL_DLL CEllipticArcAlgori : public CEllipticRingAlgori
{
ev_private:
	CEllipticArcAlgori( _in EarthView::World::Core::CNameValuePairList* pList );
public:
	/// <summary>
	/// 默认构造函数
	/// </summary>
	CEllipticArcAlgori();
	/// <summary>
	/// 默认析构函数
	/// </summary>
	~CEllipticArcAlgori();
	/// <summary>
	/// 设置椭圆
	/// </summary>
	/// <param name="ring">椭圆</param>
	/// <returns></returns>
	virtual ev_void setEllipticRing( EarthView::World::Spatial::Geometry::CEllipticRing* ring );
	/// <summary>
	/// 设置椭圆弧
	/// </summary>
	/// <param name="center">椭圆的中心点</param>
	/// <param name="p1">长半轴控制点</param>
	/// <param name="p2">短半轴控制点</param>
	/// <param name="p3">椭圆弧起始角度控制点</param>
	/// <param name="p4">椭圆弧终止角度控制点</param>
	/// <returns></returns>
	void setEllipticArc( _in const EarthView::World::Spatial::Geometry::CPoint* center,
		_in const EarthView::World::Spatial::Geometry::CPoint*p1, 
		_in const EarthView::World::Spatial::Geometry::CPoint* p2, 
		_in const EarthView::World::Spatial::Geometry::CPoint* p3, 
		_in const EarthView::World::Spatial::Geometry::CPoint* p4 );
	/// <summary>
	/// 设置椭圆弧
	/// </summary>
	/// <param name="arc">椭圆弧对象</param>
	/// <returns></returns>
	ev_void setEllipticArc( _in const EarthView::World::Spatial::Geometry::CEllipticArc* arc );
	/// <summary>
	/// 获取椭圆弧的起始角度
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_real64 getFromAngle() const { return mdFromAngle; }
	/// <summary>
	/// 获取椭圆的旋转角度
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_real64 getSweepAngle() const { return mdSweepAngle; }
	/// <summary>
	/// 获取椭圆弧的起始角度控制点
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	EarthView::World::Spatial::Geometry::CPoint* getCtrlPoint3() const{ return mpCtrl3; }
	/// <summary>
	/// 获取椭圆弧的终止角度控制点
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	EarthView::World::Spatial::Geometry::CPoint* getCtrlPoint4() const{ return mpCtrl4; }
	/// <summary>
	/// 生成一个椭圆弧
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	EarthView::World::Spatial::Geometry::CEllipticArc* makeEllipticArc() const;
private:
	ev_void makeCtrlPoints();
	EarthView::World::Spatial::Geometry::CPoint* mpCtrl3, *mpCtrl4;
	ev_real64 mdFromAngle, mdSweepAngle;
};
class EV_MAPCONTROL_DLL CLongCircleAlgori : public EarthView::World::Core::CAllocatedObject
{
ev_private:
	CLongCircleAlgori( _in EarthView::World::Core::CNameValuePairList* pList );
public:
	CLongCircleAlgori();
	~CLongCircleAlgori();
	void setLongCircle( _in const EarthView::World::Spatial::Geometry::CPoint* center1, 
		_in ev_real64 radius1, 
		_in const EarthView::World::Spatial::Geometry::CPoint* center2, 
		_in ev_real64 radius2 );
	void setLongCircle( _in const EarthView::World::Spatial::Geometry::CCurveRing* ring );
	EarthView::World::Spatial::Geometry::IGeometry* getGeometry() const{ return mpGeo; }
	ev_real64 getFirstRadius() const { return mdFirstRadius; }
	ev_real64 getSecondRadius() const { return mdSecondRadius; }
	EarthView::World::Spatial::Geometry::CPoint* getFirstPoint() const{ return mPnt1; }
	EarthView::World::Spatial::Geometry::CPoint* getSecondPoint() const { return mPnt2; }
	EarthView::World::Spatial::Geometry::CPoint* getThirdPoint() const { return mPnt3; }
	EarthView::World::Spatial::Geometry::CPoint* getForthPoint() const { return mPnt4; }
protected:
	ev_void clear();
	EarthView::World::Spatial::Geometry::IGeometry* mpGeo;
	ev_real64 mdFirstRadius,mdSecondRadius;
	EarthView::World::Spatial::Geometry::CPoint* mPnt1,*mPnt2,*mPnt3,*mPnt4;
};
}
}
}
}
#endif