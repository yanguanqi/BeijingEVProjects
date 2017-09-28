#ifndef _SPATIAL2D_ANALYST_ROUTE_ANALYST_H_H_
#define _SPATIAL2D_ANALYST_ROUTE_ANALYST_H_H_

#include "networkanalysis/config.h"
#include "networkanalysis/networkanalyst.h"
#include "networkanalysis/networkanalystlayer.h"
#include "core/core_common.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
		namespace Geometry{
			class CGeometryCollection;
		}
		}
	}
}
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Analyst{
struct  ChangedEdge
{
	ev_int32    formerEID;
	ev_real64   formerLength;
	ev_int32    newFEID;
	ev_real64   newFLength;
	ev_int32    newTEID;
	ev_real64   newTLength;
	ev_int32    inter_ID;
};

struct Inter
{
    ev_int32    lastNum;
	EarthView::World::Spatial::Geometry::CPoint  inter;
};
/// <summary>
/// 路径分析参数（已转换为关联的边、交点）
/// </summary>
class EV_NETWORKANALYSIS_DLL CRouteParam : public EarthView::World::Core::CAllocatedObject
{
	friend class CRouteAnalyst;
public:
	/// <summary>
	/// 默认构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	CRouteParam();
	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	~CRouteParam();
public:
	/// <summary>
	/// 添加停靠点
	/// </summary>
	/// <param name="jID">相关联的交点ID</param>
	/// <returns></returns>
	ev_void addStopJunction(ev_uint32 jID);
	/// <summary>
	/// 添加障碍
	/// </summary>
	/// <param name="eID">相关联的边ID</param>
	/// <returns></returns>
	ev_void addBarriarEdge(ev_uint32 eID);
	/// <summary>
	/// 清除所有停靠点
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void clearStop();
	/// <summary>
	/// 清除所有障碍点
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void clearBarriar();
ev_private:
	CRouteParam(EarthView::World::Core::CNameValuePairList *pList);
private:
	ev_vector<ev_int32>	m_stops;
	ev_vector<ev_int32>	m_barriars;
};
/// <summary>
/// 路径分析参数（原始点）
/// </summary>
class EV_NETWORKANALYSIS_DLL CRouteParamI : public EarthView::World::Core::CAllocatedObject
{
	friend class CRouteAnalyst;
public:
	/// <summary>
	/// 默认构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	CRouteParamI();
	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	~CRouteParamI();
public:
	/// <summary>
	/// 添加停靠点
	/// </summary>
	/// <param name="point">停靠点</param>
	/// <returns></returns>
	ev_void addStop(const EarthView::World::Spatial::Geometry::CPoint& point);
	/// <summary>
	/// 添加障碍点
	/// </summary>
	/// <param name="point">障碍点</param>
	/// <returns></returns>
	ev_void addBarriar(const EarthView::World::Spatial::Geometry::CPoint &point);
	/// <summary>
	/// 清除所有停靠点
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void clearStop();
	/// <summary>
	/// 清除所有障碍点
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void clearBarriar();
ev_private:
	CRouteParamI(EarthView::World::Core::CNameValuePairList *pList);
private:
	ev_vector<EarthView::World::Spatial::Geometry::CPoint*>	m_stops;
	ev_vector<EarthView::World::Spatial::Geometry::CPoint*>	m_barriars;
};
/// <summary>
/// 路径分析结果
/// </summary>
class EV_NETWORKANALYSIS_DLL CRouteResult : public EarthView::World::Core::CAllocatedObject
{
public:
	/// <summary>
	/// 默认构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	CRouteResult();
	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	~CRouteResult();
	/// <summary>
	/// 清除分析结果
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void clear();
	/// <summary>
	/// 添加分析结果几何体
	/// </summary>
	/// <param name="geom">几何体</param>
	/// <returns></returns>
	ev_void addGeometry(const EarthView::World::Spatial::Geometry::IGeometry* geom);
	/// <summary>
	/// 为结果几何体重排序
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void arrangeGeometry(const EarthView::World::Spatial::Geometry::CPoint& point);
	/// <summary>
	/// 添加分析结果子路段id
	/// </summary>
	/// <param name="geom">几何体</param>
	/// <returns></returns>
	ev_void addRouteID(ev_uint32 id);
	/// <summary>
	/// 获取分析结果几何体
	/// </summary>
	/// <param name="index">index</param>
	/// <returns>返回几何体</returns>
	EarthView::World::Spatial::Geometry::IGeometry* getGeometryRef(ev_int32 index);
	/// <summary>
	/// 获取分析结果子路段id
	/// </summary>
	/// <param name="index">index</param>
	/// <returns>返回子路段id</returns>
	ev_int32 getRouteID(ev_int32 index);
	/// <summary>
	/// 获取分析结果路径数量
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回数量</returns>
	ev_int32 count() const;
	/// <summary>
	/// 选择
	/// </summary>
	/// <param name="geom">几何体</param>
	/// <returns></returns>
	ev_void select(const EarthView::World::Spatial::Geometry::IGeometry* geom);
	/// <summary>
	/// 是否被选
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果是返回true；否则返回false</returns>
	ev_bool isSelected() const;
	/// <summary>
	/// 跳过停靠点
	/// </summary>
	/// <param name="id">停靠点</param>
	/// <returns></returns>
	ev_void addSkipStop(ev_uint32 id);
	/// <summary>
	/// 设置总成本
	/// </summary>
	/// <param name="cost">成本</param>
	/// <returns></returns>
	ev_void setTotalCost(ev_real64 cost);
	/// <summary>
	/// 获取总成本
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回花费成本</returns>
	ev_real64 getTotalCost() const;
	/// <summary>
	/// 点选
	/// </summary>
	/// <param name="pt">点</param>
	/// <param name="threshold">范围</param>
	/// <returns></returns>
	ev_void selectResult(const EarthView::World::Spatial::Geometry::CPoint& pt,ev_real64 threshold);
	/// <summary>
	/// 框选
	/// </summary>
	/// <param name="rect">范围</param>
	/// <returns></returns>
	ev_void selectResult(const EarthView::World::Spatial::Geometry::CRectangle &rect);
	/// <summary>
	/// 复制结果
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回复制后的结果</returns>
	CRouteResult* clone()const;
ev_private:
	CRouteResult(EarthView::World::Core::CNameValuePairList *pList);
	const ev_vector<ev_uint32>& skipStops()const ;
private:
	ev_vector<EarthView::World::Spatial::Geometry::IGeometry*>	route;
	ev_vector<ev_uint32>	        routeID;
	ev_bool					m_bSelected;
	ev_real64				m_totalCost;
	ev_vector<ev_uint32>	m_skipStops;
};

/// <summary>
/// 路径分析
/// </summary>
class EV_NETWORKANALYSIS_DLL CRouteAnalyst 
	: public CNetworkAnalyst
{
	friend class CRouteLayer;
public:
	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ~CRouteAnalyst();
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="ds">数据集</param>
	/// <returns></returns>
	CRouteAnalyst(EarthView::World::Spatial2D::GeoDataset::CNetworkDataset *ds);
public:
	/// <summary>
	/// 求解
	/// </summary>
	/// <param name="param">停靠点、障碍参数（已转换为关联的边、交点）</param>
	/// <param name="result">输出参数，求解结果集</param>
	/// <returns>如果求解成功，则返回true；否则，返回false</returns>
	ev_bool solve(const CRouteParam &param, CRouteResult &result);
	/// <summary>
	/// 求解
	/// </summary>
	/// <param name="param">停靠点、障碍参数（原始点）</param>
	/// <param name="result">输出参数，求解结果集</param>
	/// <returns>如果求解成功，则返回true；否则，返回false</returns>
	ev_bool solve(const CRouteParamI &param, CRouteResult &result);
	/// <summary>
	/// 分析完后可返回停靠点在路径上对应的点
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	const EarthView::World::Spatial::Geometry::CGeometryCollection* getMatchedPoints();
	/// <summary>
	/// 分析完后可返回停靠点对应路径上的ID
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	EarthView::World::Core::IntVector getMatchedEdgeIDs();
	/// <summary>
	/// 设置路径分析时查找停靠点方法
	/// </summary>
	/// <param name="">查找停靠点方法枚举</param>
	/// <returns></returns>
	ev_void setAnalystMethod(EVNAAnalystMethod method);
	/// <summary>
	/// 获取阻抗值
	/// </summary>
	/// <param name="edgeID">边id</param>
	/// <param name="FT">方向</param>
	/// <returns>返回阻抗值</returns>
	ev_real64 getImpedance(ev_uint32 edgeID,ev_bool FT);
	ev_int32  getHierachy(ev_uint32 edgeID,ev_bool FT);
	/// <summary>
	/// 设置成本属性
	/// </summary>
	/// <param name="name">成本属性名称</param>
	/// <returns></returns>
	ev_void	setCostAttribute(const EVString &name);
	/// <summary>
	///获取成本属性
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回成本属性</returns>
	EVString	getCurrentCostAttribute()const;
	/// <summary>
	/// 设置分析是否考虑等级属性
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void	setUsingHierachy(ev_bool b);
	/// <summary>
	///获取分析是否考虑等级属性
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_bool	getUsingHierachy()const;
	/// <summary>
	///获取最高等级
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_int32 getMaxHierachy();
	/// <summary>
	///获取最低等级
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_int32 getMinHierachy();
private:
	ev_real64  distanceBetweenTwoPoints(EarthView::World::Spatial::Geometry::CPoint pt1, EarthView::World::Spatial::Geometry::CPoint pt2);
	ev_real64  pointToSegDist(double x, double y, double x1, double y1, double x2, double y2);
	/// <summary>
	/// 获取某位置点在线段上的垂足（垂足在线段上）
	/// </summary>
	/// <param name=""></param>
	/// <returns>垂足点ID</returns>
	ev_int32  findPedal(const EarthView::World::Spatial::Geometry::CPoint &location);
	/// <summary>
	/// 获取某位置点在线段上的垂足（垂足在线段延长线上，垂足取线段上离位置点最近的点）
	/// </summary>
	/// <param name=""></param>
	/// <returns>垂足点ID</returns>
	ev_int32  findPedal2(const EarthView::World::Spatial::Geometry::CPoint &location);
	/// <summary>
	/// 修改网络邻接表
	/// </summary>
	/// <param name="inter">新垂足，即停靠点在网络边上的垂足</param>
	/// <param name="inter">edgeID，网络边的ID</param>
	/// <returns></returns>
	void  changeAdjacentTable(const EarthView::World::Spatial::Geometry::CPoint &inter, ev_int32 edgeID);
ev_private:
	CRouteAnalyst(EarthView::World::Core::CNameValuePairList *pList);
private:
	ev_vector<Stop>	                                              m_stops;
	ev_vector<Barriar>	                                          m_barriars;
	ChangedEdge                                                   m_changedEdge;
	ev_map<ev_int32,Inter>                                        m_Inter;
	ev_vector<ChangedEdge>                                        m_C;
	EarthView::World::Spatial::Geometry::CGeometryCollection*     mpMatchedPoints;
	EarthView::World::Core::IntVector                             mvMatchEdgeIDs;
	EVNAAnalystMethod   m_nMethod;
	ev_int32			m_FieldIdx;
	ev_int32            m_HierachyIndex;
	ev_bool             m_bHasHierachyAttri;
	ev_bool             m_bUsingHierachy;
};

}}}} // End of Namespace

#endif 

