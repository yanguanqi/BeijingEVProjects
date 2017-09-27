#ifndef _EDITING_OBJECT_H
#define _EDITING_OBJECT_H
#include "mapcontrol/mapcontrolconfig.h"
#include "spatialobject/geometry/point.h"

using namespace EarthView::World::Spatial::Geometry;
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
/// <summary>
/// 编辑对象类型枚举
/// </summary>
enum EditingObjectType
{
	Unknown			= 0,	//未知
	Point			= 1,	//编辑点,己实现
	LineString		= 2,	//编辑线,己实现
	CircleArc		= 3,	//编辑圆弧
	EllipticArc		= 4,	//编辑椭圆弧
	BezierCurve		= 5,	//编辑贝赛尔曲线
	Circle		    = 6,	//编辑圆
	Ellipse			= 7,	//编辑椭圆
	RoundRect		= 8,	//编辑圆角矩形
	CircleSector	= 9,	//编辑圆扇形
	EllipticSector	= 10,	//编辑椭圆扇形
	CircleArched	= 11,	//编辑弓形
	EllipticArched	= 12,	//编辑椭圆弓形
	CurvePath		= 13,	//编辑线路径
	CurveRing		= 14,	//编辑曲线环

	/******* 用户自定义扩展从 100 开始****************/
	LongCircle		= 100,	//编辑长圆
};
/// <summary>
/// 编辑对象的基类,在二维的编辑功能中,编辑过程中所操作的对象为CEdtingObject.该对象不同于geometry,它是支持
/// 用户进行操作的几何对象的基类,并且支持回退操作. 另外二维的编辑功能支持外部扩展,用户只需要继承该类,实现
/// 必要的虚方法,即可跟内部的编辑对象进行同样的操作来完成对象的创建与修改.
/// </summary>
class CGeometryEditor;
class COperation;
class EV_MAPCONTROL_DLL CEditingObject : public EarthView::World::Core::CAllocatedObject
{
public:
	/// <summary>
	/// 析构函数
	/// </summary>
	~CEditingObject();
	/// <summary>
	/// 插入顶点
	/// </summary>
	/// <param name="pnt">待插入的顶点</param>
	/// <param name="pnt">顶点插入的位置索引</param>
	/// <returns></returns>
	ev_void insertPoint( _in const CPoint &pnt, _in ev_int32 index );
	/// <summary>
	/// 移除顶点
	/// </summary>
	/// <param name="pnt">待移除的顶点</param>
	/// <returns></returns>
	ev_void removePoint( _in const CPoint &pnt );
	/// <summary>
	/// 移动顶点
	/// </summary>
	/// <param name="src">待移动的顶点</param>
	/// <param name="dest">移动顶点的目标位置</param>
	/// <returns></returns>
	ev_void movePoint( _in const CPoint &src, _in const CPoint &dest );
	/// <summary>
	/// 平移对象
	/// </summary>
	/// <param name="dx">平移在X轴上的偏移量</param>
	/// <param name="cy">平移在Y轴上的偏移量</param>
	/// <returns></returns>
	ev_void translate( _in ev_real64 dx, _in ev_real64 dy );
	/// <summary>
	/// 旋转对象
	/// </summary>
	/// <param name="ref_x">旋转参考点的X坐标</param>
	/// <param name="ref_y">旋转参考点的Y坐标</param>
	/// <param name="angle">旋转角度</param>
	/// <returns></returns>
	ev_void rotate( _in ev_real64 ref_x, _in ev_real64 ref_y, _in ev_real64 angle );

	/// <summary>
	/// 新建一个原始对象(非克隆), **该类的派生类必须重新实现该方法**
	/// 默认实现为:返回一个空指针
	/// </summary>
	/// <returns>新对象的指针</returns>
	virtual CEditingObject * newObject() const;
	/// <summary>
	/// 对象的名称, **该类的派生类必须重新实现该方法**
	/// 默认实现为:返回一个空字符
	/// </summary>
	/// <returns>对象的名称</returns>
	virtual EVString getName() const;
	/// <summary>
	/// 对象的类型,非内置类型的派生类,其类型枚举值必须大于100,以免与内置类型发生冲突, **该类的派生类必须重新实现该方法**
	/// 默认实现为:返回Unknown类型
	/// </summary>
	/// <returns>对象的类型</returns>
	virtual EditingObjectType getType() const;
	/// <summary>
	/// 新建一个原始对象(非克隆), **该类的派生类必须重新实现该方法**
	/// 默认实现:返回空指针
	/// </summary>
	/// <returns>对象生成的几何图形(内存由内部维护)</returns>
	virtual const IGeometry * getGeometry() const;
	/// <summary>
	/// 对象中包含的顶点数量
	/// </summary>
	/// <returns>顶点数量</returns>
	virtual ev_int32 getPointCount() const;
	/// <summary>
	/// 获取指定索引处的顶点
	/// </summary>
	/// <param name="index">索引</param>
	/// <param name="ok">返回是否成功获取</param>
	/// <returns>获取到的顶点</returns>
	virtual const CPoint & getPoint( _in ev_int32 index,_in ev_bool &ok ) const;
	/// <summary>
	/// 获取指定索引处的顶点
	/// </summary>
	/// <param name="index">索引</param>
	/// <param name="ok">返回是否成功获取</param>
	/// <returns>顶点的索引</returns>
	virtual ev_int32 indexForPoint( _in const CPoint &pnt ) const;
	/// <summary>
	/// 对象移动一个顶点,生成一个目标样本(用于鼠标操作)
	/// </summary>
	/// <param name="from">待移动的顶点</param>
	/// <param name="to">顶点的目标位置</param>
	/// <returns>生成几何样本,外部释放内存</returns>
	virtual _extfree IGeometry * makeSample( _in const CPoint &from, _in const CPoint &to ) const;
	/// <summary>
	/// 判断对象能否生成一个对应的几何图形. 
	/// 例:拿折线做为例子,如果对象只有一个点,那个该函数返回false.如果包含了至少2个点,返回true.
	/// </summary>
	/// <returns>如果可以,则返回true</returns>
	virtual ev_bool isFine() const;
	/// <summary>
	/// 判断对象如果要生成对应的几何图形,是否已经包含了所有的点
	/// 例:拿圆角矩形做为例子,如果对象有三个点(没有第4个点,那么圆角矩形没有磨角),那个该函数返回false.
	///    如果包含了四个点(第四个点控件磨角程度),返回true.
	/// </summary>
	/// <returns>如果可以,则返回true</returns>
	virtual ev_bool isExcellent() const;
	/// <summary>
	/// 获取第一个顶点,跟 getPoint(0) 的功能一样
	/// </summary>
	/// <param name="ok">返回是否成功获取</param>
	/// <returns></returns>
	virtual const CPoint & getFirstPoint( _in ev_bool &ok ) const;
	/// <summary>
	/// 获取最后一个顶点,跟 getPoint( getPointCount()-1 ) 的功能是一样的
	/// </summary>
	/// <param name="ok">返回是否成功获取</param>
	/// <returns></returns>
	virtual const CPoint & getLastPoint( _in ev_bool &ok ) const;

	/// <summary>
	/// 获取中心点
	/// </summary>
	/// <param name="ok">返回是否成功获取</param>
	/// <returns>中心点</returns>
	virtual CPoint getCenterPoint( _out ev_bool &ok ) const;

	/// <summary>
	/// 设置中心点
	/// </summary>
	/// <param name="point">中心点</param>
	/// <returns></returns>
	virtual ev_void setCenterPoint( _in CPoint &point );

	/// <summary>
	/// 获取圆心角
	/// </summary>
	/// <param name="ok">返回是否成功获取</param>
	/// <returns>圆心角的值</returns>
	virtual ev_real64 getCentralAngle(_out ev_bool &ok) const;

	/// <summary>
	/// 设置圆心角
	/// </summary>
	/// <param name="angle">圆心角的值</param>
	/// <returns></returns>
	virtual ev_void setCentralAngle(ev_real64 angle);
	/// <summary>
	/// 获取起始角
	/// </summary>
	/// <param name="ok">返回是否成功获取</param>
	/// <returns>起始角的值</returns>
	virtual ev_real64 getStartAngle(_out ev_bool &ok) const;
	/// <summary>
	/// 设置起始角
	/// </summary>
	/// <param name="angle">起始角的值</param>
	/// <returns></returns>
	virtual ev_void setStartAngle(ev_real64 angle);

	/// <summary>
	/// 获取旋转角
	/// </summary>
	/// <param name="ok">返回是否成功获取</param>
	/// <returns>旋转角的值</returns>
	virtual ev_real64 getRotateAngle(_out ev_bool &ok) const;

	/// <summary>
	/// 获取半径
	/// </summary>
	/// <param name="ok">返回是否成功获取</param>
	/// <returns>半径的值</returns>
	virtual ev_real64 getRadius(_out ev_bool &ok) const;

	/// <summary>
	/// 设置半径
	/// </summary>
	/// <param name="ok">设置半径的值</param>
	/// <returns></returns>
	virtual ev_void setRadius(_in ev_real64 radius);

	/// <summary>
	/// 根据geometry创建一个对应编辑对象,且加载geometry里面的顶点信息.该方法主要用于内部,其实现过程在editingpath.cpp中.
	/// </summary>
	/// <param name="geometry">几何图形</param>
	/// <returns></returns>
	static CEditingObject *makeObjectFromGeometry( const IGeometry *geometry );
protected:
	/// <summary>
	/// 插入一个顶点.跟insertPoint()方法不同的是,该方法不会把操作放到回退列表中,它是完成实现插入顶点从而更新几何图形的功能
	/// 而insertPoint()会首先调用execInsert()方法,如果该方法调用成功,则把该操作记录起来,用来进行回退操作.
	/// </summary>
	/// <param name="ok">返回是否成功获取</param>
	/// <returns></returns>
	virtual ev_bool execInsert( _in const CPoint &pnt, _in ev_int32 index );
	///同上
	virtual ev_bool execRemove( _in const CPoint &pnt );
	///同上
	virtual ev_bool execMove( _in const CPoint &src, _in const CPoint &dest );
	///同上
	virtual ev_bool execTranslate( _in ev_real64 dx, _in ev_real64 dy );
	///同上
	virtual ev_bool execRotate( _in ev_real64 x, _in ev_real64 y, _in ev_real64 angle );
	/// <summary>
	/// 当编辑对象中的顶点数据发生变化后,该方法会被调用,派生类应该实现该方法从而更新 mpGeometry.
	/// **该类的派生类必须重新实现该方法**
	/// </summary>
	/// <returns></returns>
	virtual ev_void onPointChanged();
	/// <summary>
	/// 如果要修改一个已经存在的几何要素,那么该会被调用.派生类应该根据gemetry来生成对应的顶点信息
	/// **该类的派生类必须重新实现该方法**
	/// </summary>
	/// <param name="geometry">待加载的几何图形</param>
	/// <returns></returns>
	virtual ev_bool loadGeometry( _in const IGeometry *geometry );
	/// <summary>
	/// 如果要修改一个已经存在的几何要素,那么该会被调用.派生类应该根据gemetry来生成对应的顶点信息
	/// **该类的派生类必须重新实现该方法**
	/// </summary>
	/// <param name="geometry">待加载的几何图形</param>
	/// <returns></returns>
	virtual ev_void reset();

	/// <summary>
	/// 当该对象被添加到CEditingSketch(描绘器)中后,该方法被调用
	/// 派生类一般不用重新实现
	/// </summary>
	/// <param name="geometry">待加载的几何图形</param>
	/// <returns></returns>
	virtual ev_void onAdded( _in CGeometryEditor *ref_editor );
	/// <summary>
	/// 当该对象从CEditingSketch(描绘器)中移除后,该方法被调用
	/// 派生类一般不用重新实现
	/// </summary>
	/// <param name="geometry">待加载的几何图形</param>
	/// <returns></returns>
	virtual ev_void onRemoved();
	/// <summary>
	/// 初始化.把数据置空
	/// </summary>
	/// <returns></returns>
	ev_void init();
	/// <summary>
	/// 将编辑操作进行压栈
	/// </summary>
	/// <param name="data">操作数据</param>
	/// <returns></returns>
	ev_void pushStack( _in COperation *data );
	/// <summary>
	/// 当编辑对象的信息发生变化后,调用该方法后,会刷新显示
	/// </summary>
	/// <returns></returns>
	ev_void update();
	CEditingObject();
	/// <summary>
	/// 编辑对象所包含的顶点容器
	/// </summary>
	ev_vector<CPoint> mPoints;
	/// <summary>
	/// 编辑对象所包含的顶点容器
	/// </summary>
	IGeometry *mpGeometry;
	/// <summary>
	/// 编辑对象所关联的几何编辑器
	/// </summary>
	CGeometryEditor *mpEditor;
ev_private:
	CEditingObject( EarthView::World::Core::CNameValuePairList *pList );
	friend class CSketchOperationProxy;
};
/// <summary>
/// 曲线编辑对象,该类的派生类可以被添加到CEditingPath或者CEditingRing中
/// </summary>
class EV_MAPCONTROL_DLL CEditingCurve : public CEditingObject
{
protected:
	CEditingCurve(){}
ev_private:
	CEditingCurve( EarthView::World::Core::CNameValuePairList *pList ) : CEditingObject( pList ){}
};
			}
		}
	}
}
#endif