#ifndef __SPATIAL2D_NETWORK_ANALYST_LAYER_H_H_
#define __SPATIAL2D_NETWORK_ANALYST_LAYER_H_H_

#include "networkanalysis/config.h"
#include "spatialinterface/ilayer.h"
#include "spatialinterface/isymbol.h"
#include "spatial2dgeodatabase/networkdataset.h"
#include "spatialobject/geometry/point.h"
#include "spatialobject/geometry/rectangle.h"

//// using namespace EarthView::World::Spatial::Atlas;
//// using namespace EarthView::World::Spatial2D::GeoDataset;
//// using namespace EarthView::World::Spatial::Geometry;

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Analyst{

enum EVNAAnalystMethod
{
	/// <summary>
	/// 停靠点寻找边上垂足
	/// </summary>
	EVNAMethod_1 = 1,
	/// <summary>
	/// 停靠点寻找边上已有点中最近的
	/// </summary>
	EVNAMethod_2 = 2,
};

enum EVNAAttachType
{
	NAAT_None		,
	NAAT_Selected	,
	NAAT_Locked
};
/// <summary>
/// 网络点类
/// </summary>
class EV_NETWORKANALYSIS_DLL CNALocation : public EarthView::World::Core::CBaseObject
{
ev_private:
	CNALocation(_in EarthView::World::Core::CNameValuePairList *pList){}
public:
	/// <summary>
	/// 默认构造函数
	/// </summary>
	CNALocation(){}
	/// <summary>
	/// 默认析构函数
	/// </summary>
	~CNALocation(){}
	//坐标点
	EarthView::World::Spatial::Geometry::CPoint		*pt;
	//ID号
	ev_int32	id;
	//是否被选择
	ev_bool		bSelected;
};
typedef CNALocation Stop,Barriar;
/// <summary>
/// 网络分析图层
/// </summary>
class EV_NETWORKANALYSIS_DLL CNetworkAnalystLayer 
	: public EarthView::World::Spatial:: Atlas::ILayer
{	
public:		
	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ~CNetworkAnalystLayer();
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="dataset">网络数据集</param>
	/// <returns></returns>
	CNetworkAnalystLayer(EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ref_dataset);

public:
	/// <summary>
	/// 添加停靠点
	/// </summary>
	/// <param name="pt">停靠点</param>
	/// <returns></returns>
	virtual ev_void addStop(const EarthView::World::Spatial::Geometry::CPoint& pt);
	/// <summary>
	/// 添加障碍点
	/// </summary>
	/// <param name="pt">障碍点</param>
	/// <returns></returns>
	virtual ev_void addBarriar(const EarthView::World::Spatial::Geometry::CPoint& pt);
	/// <summary>
	/// 获取关联类型
	/// </summary>
	/// <param name="pt">点</param>
	/// <param name="pt">范围</param>
	/// <returns>返回关联类型</returns>
	virtual EVNAAttachType attach(const EarthView::World::Spatial::Geometry::CPoint& pt,ev_real64 threshold);
	/// <summary>
	/// 框选元素
	/// </summary>
	/// <param name="rect">范围</param>
	/// <returns></returns>
	virtual ev_void select(const EarthView::World::Spatial::Geometry::CRectangle &rect);
	/// <summary>
	/// 移动选中的元素至目标点
	/// </summary>
	/// <param name="pt">目标点</param>
	/// <returns></returns>
	virtual ev_void moveTo(const EarthView::World::Spatial::Geometry::CPoint& pt);
	/// <summary>
	/// 移除选中的元素
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ev_void remove();
	/// <summary>
	/// 清除停靠点、障碍等元素
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ev_void clear();
	/// <summary>
	/// 获取符号
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回符号</returns>
	virtual EarthView::World::Spatial::Display::ISymbol*  getLockedSymbol();
	/// <summary>
	/// 获取停靠点数量
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回停靠点数量</returns>
	ev_uint32 getStopCount();
	/// <summary>
	/// 获取障碍点数量
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回障碍点数量</returns>
	ev_uint32 getBarriarCount();
	/// <summary>
	/// 设置显示透明度
	/// </summary>
	/// <param name="transparent">透明度</param>
	/// <returns></returns>
	virtual ev_void setTransparentValue(ev_uint8 transparent);
	/// <summary>
	/// 获取显示透明度
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回透明度</returns>
	virtual ev_uint8 getTransparentValue() const;
	/// <summary>
	/// 选择结果
	/// </summary>
	/// <param name="pt">点</param>
	/// <param name="threshold">范围</param>
	/// <returns></returns>
	virtual ev_void selectResult(const EarthView::World::Spatial::Geometry::CPoint& pt,ev_real64 threshold);
	/// <summary>
	/// 选择结果
	/// </summary>
	/// <param name="rect">选择范围</param>
	/// <returns></returns>
	virtual ev_void selectResult(const EarthView::World::Spatial::Geometry::CRectangle &rect);
	/// <summary>
	/// 清除结果
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ev_void removeResult();
	/// <summary>
	/// 求解
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果求解成功，则返回true；否则，返回false</returns>
	virtual ev_bool solve();
	/// <summary>
	/// 设置路径分析时查找停靠点方法
	/// </summary>
	/// <param name="">查找停靠点方法枚举</param>
	/// <returns></returns>
	virtual ev_void setAnalystMethod(EVNAAnalystMethod method);

public:
	/// <summary>
	/// 获取成本属性名称
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回成本属性名称</returns>
	EarthView::World::Core::CStringArray getCostAttributeName()const;

private: 
	ev_int32 findJunction(const EarthView::World::Spatial::Geometry::CPoint &location);
	ev_int32 attachEdge(const EarthView::World::Spatial::Geometry::CPoint &location);
ev_private:
	CNetworkAnalystLayer( EarthView::World::Core::CNameValuePairList *pList );
protected:
    ev_void	 clearSelect();
	CNetworkAnalystLayer() {}
	C_DISABLE_COPY( CNetworkAnalystLayer )

protected:
	 EarthView::World::Spatial2D::GeoDataset::CNetworkDataset	*m_pDataset;
	 ev_vector<Stop>	m_stops;
	 ev_vector<Barriar>	m_barriars;
	 ev_int32			m_lockedIdx;
	 ev_bool			m_lockFlag;
	 // 透明度
	 ev_uint8			m_nAlpha;
	 //CStringArray		m_costAttrNames;
};

}}}}

#endif


