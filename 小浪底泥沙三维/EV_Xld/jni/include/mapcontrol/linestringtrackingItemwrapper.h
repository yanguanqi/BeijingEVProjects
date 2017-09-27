#include "mapcontrol/mapcommand.h"
#include "mapcontrol/trackinggeomsitem.h"
#include "mapcontrol/mapcontrol.h"
#include "spatialobject/geometry/linestring.h"

//思路：将一条LineString分解成多条，并且根据比例尺分为若干个等级。每条LineString点数一定
//添加点时，不同等级根据当前点与前一点的像素差判断是否需要添加及刷新地图
//添加一个点，每个等级下的Linestring组都需要判断是否需要添加此点
//地图绘制前，选择与屏幕范围有交集的当前级别下的所有linestring添加到跟踪项
//参数需要根据实际应用情况、以及实际显示效果进行调整，当前参数在过渡效果中并不理想，可以增加等级、调整权重，或者采用其他策略
//此类可添加设置跟踪项符号的接口


class CMapControlListenerPrivate;
class EV_MAPCONTROL_DLL CLinestringTrackingItemWrapper : public EarthView::World::Core::CAllocatedObject
{
public:
	/// <summary>
	/// 默认构造函数
	/// </summary>
	CLinestringTrackingItemWrapper(EarthView::World::Spatial2D::Controls::CMapControl *ref_mapcontrol);
	/// <summary>
	/// 构造函数
	///默认值：pointCountPerLine(100) 每条线最多点数
	///levelCount(10) 级别数
	///tolerance(5)   线段化简容差（像素，内部换算），越大表示化简力度越大。
	///使用此构造函数，还需调用
	/// </summary>
	CLinestringTrackingItemWrapper(EarthView::World::Spatial2D::Controls::CMapControl *ref_mapcontrol,
		int pointCountPerLine,
		int levelCount,
		int tolerance);
ev_private:
	CLinestringTrackingItemWrapper(EarthView::World::Core::CNameValuePairList* pList);
	/// <summary>
	/// 析构函数
	/// </summary>
public:
	~CLinestringTrackingItemWrapper();
	/// <summary>
	///设置每个级别的最小比例尺,level从0开始
	/// </summary>
	ev_void setLevelScale(ev_int32 level,ev_real64 scale);
	/// <summary>
	///设置符号
	/// </summary>
	ev_void setSymbol(EarthView::World::Spatial::Display::ISymbol* pSymbol);
	/// <summary>
	///添加点，通过距离判断是否添加。其中判断机制可修改
	/// </summary>
	ev_void addPoint(EarthView::World::Spatial::Geometry::CPoint * point); 
	/// <summary>
	///刷新，此函数会在地图刷新前被调用，会选择与屏幕范围有交集的当前级别下的所有linestring添加到跟踪项
	/// </summary>
	ev_void refresh();
private:
	//清除内部数据
	ev_void clearLinestringVector();
private:
	EarthView::World::Spatial2D::Controls::CMapControl *mpMapcontrol;
	
	//这里可以用多个CTrackingGeometryItem,这样在onBeforeRefresh时只用处理需要修改的跟踪项
	EarthView::World::Spatial2D::Controls::CTrackingGeomsItem *mpTrackingItem;
	//
	ev_vector<EarthView::World::Spatial::Geometry::CLineString*> **mLinestringVector;
	CMapControlListenerPrivate* mpListener;
	double mfTempDis;
	EarthView::World::Spatial::Geometry::CPoint mTempPoint;

	int mdPointCountPerLline;
	int mdLevelCount;
	double mfTolerance;

	struct scale_distanceMapping
	{
		double scale;
		double minDistance;
	};
	scale_distanceMapping* mpScaleDistance_Mapping;
};

