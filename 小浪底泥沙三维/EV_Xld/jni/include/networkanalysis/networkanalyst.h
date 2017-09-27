#ifndef _SPATIAL2D_ANALYST_NETWORK_ANALYST_H_H_
#define _SPATIAL2D_ANALYST_NETWORK_ANALYST_H_H_

#include "networkanalysis/config.h"
#include "spatialobject/geometry/coordinate.h"
#include "spatialobject/geometry/point.h"
#include "spatialobject/geometry/rectangle.h"
#include "spatial2dgeodatabase/networkdataset.h"

//// using namespace EarthView::World::Spatial::Geometry;
//// using namespace EarthView::World::Spatial2D::GeoDataset;

namespace EarthView{
namespace World{
namespace Spatial2D{
namespace GeoDataset{

class CFeatureSelection;

}}}}

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Analyst{

/// <summary>
/// 网络分析类
/// </summary>
class EV_NETWORKANALYSIS_DLL CNetworkAnalyst : public EarthView::World::Core::CAllocatedObject
{
public:
	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ~CNetworkAnalyst();
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="pND">网络数据集</param>
	/// <returns></returns>
	CNetworkAnalyst(EarthView::World::Spatial2D::GeoDataset::CNetworkDataset *ref_pND);

ev_private:
	/// <summary>
	/// 获取阻抗值
	/// </summary>
	/// <param name="edgeID">边id</param>
	/// <param name="FT">方向</param>
	/// <returns>返回阻抗值</returns>
	ev_real64 getImpedance(ev_uint32 edgeID,ev_bool FT);
	/// <summary>
	/// 获取网络要素集邻接表
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回邻接表</returns>
	inline  EarthView::World::Spatial2D::GeoDataset::CNAAdjacentTable* getAdjacentTableRef()
	{
		return m_pDataset->getAdjacentTableRef();
	}

ev_private:
	CNetworkAnalyst(EarthView::World::Core::CNameValuePairList *pList);

protected:
	ev_int32 findJunction(const EarthView::World::Spatial::Geometry::CPoint &location);
	ev_int32 attachEdge(const EarthView::World::Spatial::Geometry::CPoint &location);
protected:
	 EarthView::World::Spatial2D::GeoDataset::CNetworkDataset *m_pDataset;

};

}}}} // End of Namespaces



#endif //_SPATIAL2D_ANALYST_NETWORK_ANALYST_H_H_
