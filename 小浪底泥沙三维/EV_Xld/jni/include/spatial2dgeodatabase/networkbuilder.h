#ifndef _NETWORK_BUILDER_H_H_
#define _NETWORK_BUILDER_H_H_

#include "spatial2dgeodatabase/config.h"
#include "core/variant.h"
#include "spatialinterface/ifeatureclass.h"
#include "spatial2dgeodatabase/network_core.h"
#include "spatial2dgeodatabase/networkoperator.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
class CPoint;
class CLine;
class CLineString;
}}}}
namespace EarthView{
	namespace World{
		namespace Spatial{		
				class CPythonUtil;
			}}}
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace GeoDataset{

class CFeatureOperationItem;
class EV_2DGEODATABSE_DLL ElevationSetting : public EarthView::World::Core::CAllocatedObject
{
ev_private:
	ElevationSetting(EarthView::World::Core::CNameValuePairList *pList);
public:
	/// <summary>
	///默认构造函数
	/// </summary>
	ElevationSetting();
public:
	EVString			srcName;
	EarthView::World::Spatial2D::GeoDataset::EVDirectionType direction;
	EVString			fieldName;
};
/// <summary>
/// 网络数据集属性设置
/// </summary>
class EV_2DGEODATABSE_DLL CNAAttributeSetting : public EarthView::World::Core::CAllocatedObject
{
ev_private:
	CNAAttributeSetting(EarthView::World::Core::CNameValuePairList *pList);
public:
	/// <summary>
	///默认构造函数
	/// </summary>
	CNAAttributeSetting();
	EVString				m_sourceName;
	EarthView::World::Spatial2D::GeoDataset::EVDirectionType		m_direction;
	EarthView::World::Spatial2D::GeoDataset::EVElementType		m_element;
	EarthView::World::Spatial2D::GeoDataset::EVDataValueType		m_type;
	EVString				m_value;
};
/// <summary>
/// 网络数据集属性类
/// </summary>
class EV_2DGEODATABSE_DLL CNAAttribute : public EarthView::World::Core::CAllocatedObject
{
public:
	  /// <summary>
	  ///默认构造函数
	  /// </summary>
	CNAAttribute();

public:
	/// <summary>
	/// 设置属性名称
	/// </summary>
	/// <param name="name">名称</param>
	/// <returns></returns>
	ev_void SetName(const EVString &name);
	/// <summary>
	/// 获取属性名称
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回属性名</returns>
	EVString GetName() const;
	/// <summary>
	/// 设置数据类型
	/// </summary>
	/// <param name="type">数据类型</param>
	/// <returns></returns>
	ev_void SetDataType(EarthView::World::Core::CVariant::EVDataType type);
	/// <summary>
	/// 获取数据类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回数据类型</returns>
	EarthView::World::Core::CVariant::EVDataType GetDataType() const;
	/// <summary>
	/// 设置单位
	/// </summary>
	/// <param name="type">单位</param>
	/// <returns></returns>
	ev_void SetUsage(EarthView::World::Spatial2D::GeoDataset::EVUsageType type);
	/// <summary>
	/// 获取用途
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回用途</returns>
	EarthView::World::Spatial2D::GeoDataset::EVUsageType GetUsage() const;
	/// <summary>
	/// 设置单位
	/// </summary>
	/// <param name="type">单位</param>
	/// <returns></returns>
	ev_void SetUnit(EarthView::World::Spatial2D::GeoDataset::EVUnitType unit);
	/// <summary>
	/// 获取单位
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回单位</returns>
	EarthView::World::Spatial2D::GeoDataset::EVUnitType GetUnit() const;
	/// <summary>
	/// 设置为是否默认
	/// </summary>
	/// <param name="isDefault">是否默认</param>
	/// <returns></returns>
	ev_void SetDefault(ev_bool isDefault);
	/// <summary>
	/// 获取是否为默认
	/// </summary>
	/// <param name=""></param>
	/// <returns>若是返回true；否则返回false</returns>
	bool IsDefault() const;

	///ev_void AddSetting(const CNAAttributeSetting &setting);
	/// <summary>
	/// 获取设置数量
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回数量</returns>
	ev_int32 GetSettingCount() const;
	///CNAAttributeSetting* GetSettingRef(ev_uint32 idx);//by jiang 2013 08 04
	///ev_void RemoveSetting(ev_uint32 idx);
	/// <summary>
	/// 清空设置
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void ClearSetting();
	/// <summary>
	/// 添加设置
	/// </summary>
	ev_void AddSetting(const CNAAttributeSetting &setting);
	/// <summary>
	/// 获取设置
	/// </summary>
	CNAAttributeSetting* GetSettingRef(ev_uint32 idx);//by jiang 2013 08 04
ev_private:
	CNAAttribute(EarthView::World::Core::CNameValuePairList *pList);
	///
ev_private:
	EVString							m_Name;
	EarthView::World::Core::CVariant::EVDataType			m_DataType;
	EarthView::World::Spatial2D::GeoDataset::EVUsageType						m_Usage;
	EarthView::World::Spatial2D::GeoDataset::EVUnitType						m_Unit;
	ev_bool							m_IsDefault;
	ev_vector<CNAAttributeSetting>	m_Settings;
};
struct CSplitInfo
{
public:
	EarthView::World::Spatial::Geometry::CPoint		 *start;
	EarthView::World::Spatial::Geometry::CPoint		 *end;
	EarthView::World::Spatial::Geometry::CLineString *subEdge;
	ev_real64	ratio;
};
class CJunction;
class CVectorFeatureClass;
/// <summary>
/// 网络数据集构建类
/// </summary>
class EV_2DGEODATABSE_DLL CNetworkDatasetBuilder : public EarthView::World::Core::CAllocatedObject
{
ev_private:
	CNetworkDatasetBuilder(CNetworkOperator *opr);
public:
	/// <summary>
	/// 默认析构函数
	/// </summary>
	~CNetworkDatasetBuilder();
	/// <summary>
	/// 创建网络数据集
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_bool build();
	ev_bool buildWithEndPointConnectivityPolicy();
	ev_bool buildWithVertexConnectivityPolicy();
	/// <summary>
	/// 更新网络数据集
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_bool update(EVString &networkName);
	/// <summary>
	/// 清空网络数据集的脏记录表
	/// </summary>
	/// <returns></returns>
	ev_bool clearNetworkDirtyRecords();
	ev_bool updateJunctionClass();
	/// <summary>
	/// 设置网络数据集名称
	/// </summary>
	/// <param name="name">名称</param>
	/// <returns></returns>
	ev_void setName(const EVString &name);
	/// <summary>
	/// 获取网络数据集名称
	/// </summary>
	/// <param name="name">名称</param>
	/// <returns></returns>
	EVString getName();
	/// <summary>
	/// 设置网络数据集源数据集
	/// </summary>
	/// <param name="fc">源数据集</param>
	/// <returns></returns>
	ev_void setSourceFeatureClass(EarthView::World::Spatial::GeoDataset::IFeatureClass *fc);
	/// <summary>
	/// 添加参与构建的数据集
	/// </summary>
	/// <param name="fc">数据集</param>
	/// <returns></returns>
	ev_void addSourceFeatureClass(EarthView::World::Spatial::GeoDataset::IFeatureClass *fc);
//ev_private:
	/// <summary>
	/// 添加连通性策略
	/// </summary>
	/// <param name="policy">连通性策略</param>
	/// <returns></returns>
	ev_void addConnectivityPolicy(const EVString &srcName,const EarthView::World::Spatial2D::GeoDataset::EVConnectivityPolicy& policy);
	/// <summary>
	/// 添加高程设置
	/// </summary>
	/// <param name="elevation">高程设置</param>
	/// <returns></returns>
	ev_void addElevationSetting(const ElevationSetting &elevation);
	/// <summary>
	/// 添加转弯策略数据源
	/// </summary>
	/// <param name="turn">转弯策略</param>
	/// <returns></returns>
	ev_void addTurnSource(const EVString &turn);
	/// <summary>
	/// 添加属性
	/// </summary>
	/// <param name="attr">属性</param>
	/// <returns></returns>
	ev_void addAttribute(const EarthView::World::Spatial2D::GeoDataset::CNAAttribute &attr);
	//void setDirector(const EVgsNDSettingDirection &direct);
	/// <summary>
	/// 设置网络数据集创建过程中坐标点比较的误差容忍度
	/// </summary>
	/// <param name="tolerance">容忍度</param>
	/// <returns></returns>
	ev_void setTolerance(const ev_real64 &tolerance);
	/// <summary>
	/// 获取网络数据集创建过程中坐标点比较的误差容忍度
	/// </summary>
	/// <param name=""></param>
	/// <returns>容忍度</returns>
	static ev_real64 getTolerance();

	/// <summary>
	/// 获取完成百分比
	/// </summary>
	/// <param name=""></param>
	/// <returns>完成百分比</returns>
	 ev_real64 getFinishPercent();

	 EVString getErrorMsg();
private:
	typedef set<ev_uint32> idSet;
	typedef map<ev_uint32, list<int> > idPointMap;
	ev_real64 computeDistance(ev_real64 x1,ev_real64 y1,ev_real64 z1,ev_real64 x2,ev_real64 y2,ev_real64 z2);
	ev_int32  getVerticalPoint(EarthView::World::Spatial::Geometry::CLine* line,ev_real64& x,ev_real64 & y,ev_real64& z);
	ev_int32  isPointOnLine(EarthView::World::Spatial::Geometry::CLine* line,ev_real64& x,ev_real64& y,ev_real64& z,ev_real64 tolerance);
	void findIntersection(EarthView::World::Spatial::GeoDataset::IFeature* feature1, 
		                  EarthView::World::Spatial::GeoDataset::IFeature* feature2,  
						  idPointMap& linePointMap);
	void checkIntersectLine(EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass *featureClass);
	ev_bool Split(EarthView::World::Spatial::GeoDataset::IFeature* feature, ev_vector<CSplitInfo> &splitInfo);
	ev_void DestroyObject(ev_vector<CSplitInfo> &splitInfo);
	///////////////////////////////////////////////////////////////////////////////////
	ev_uint32 AddJunction(const EarthView::World::Spatial::Geometry::CPoint *pt);
	ev_bool buildAFeature2(EarthView::World::Spatial::GeoDataset::IFeature* feature);
	///////////////////////////////////////////////////////////////////////////////////

	ev_bool buildAFeature(EarthView::World::Spatial::GeoDataset::IFeature* feature);
	ev_bool buildAAtrribute(EarthView::World::Spatial2D::GeoDataset::CNAAttribute &attr,
                            EarthView::World::Spatial::GeoDataset::IFeature *feature,
                            ev_real64 &dFVal,
							ev_real64 &dTVal);
	ev_bool createJunctionFeatureClass();
	ev_void toStream1(EarthView::World::Core::CDataStream &stream);
	ev_void toStream2(EarthView::World::Core::CDataStream &stream);
	ev_bool updateInit();
	ev_void initNDEdgeSQL();
	/// <summary>
	/// 通过删除网络数据集中脏记录来更新网络数据集
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_bool updateNetworkByDeleteRecords(ev_map<EVString,ev_vector<ev_uint32> > deleteFeatureItems,
		const EarthView::World::Spatial2D::GeoDataset::EVConnectivityPolicy& policy);
	/// <summary>
	/// 通过向网络数据集增加新纪录来更新网络数据集
	/// </summary>
	//
	/// <param name=""></param>
	/// <returns></returns>
	ev_bool updateNetworkByAddRecords(ev_map<EVString,ev_vector<ev_uint32> > addFeatureItems,
		const EarthView::World::Spatial2D::GeoDataset::EVConnectivityPolicy& policy);

ev_private:
	CNetworkDatasetBuilder(EarthView::World::Core::CNameValuePairList *pList);

private:
	EVString								m_name;
	ev_map<EVString,EarthView::World::Spatial2D::GeoDataset::EVConnectivityPolicy> m_connectivityPolicies;
	ev_vector<EarthView::World::Spatial2D::GeoDataset::ElevationSetting>			m_elevationSettings;
	ev_vector<EVString>					m_turns;
	ev_vector<EarthView::World::Spatial2D::GeoDataset::CNAAttribute>				m_attributes;
	
	ev_set<CJunction>					m_junctionSet;

	EarthView::World::Spatial::GeoDataset::IFeatureClass						*m_pFC;
	ev_vector<EarthView::World::Spatial::GeoDataset::IFeatureClass*>			m_Sources;
	CNetworkOperator					*m_opr;

	EVString								m_current;
	ev_real64 m_dFinishPercent;
	EVString  mstrErrorMsg;
	map<void*, EarthView::World::Spatial::CPythonUtil*> mvPythonScripts;
	map<void*,EarthView::World::Core::CStringArray> mvFieldNames;
	idPointMap m_linePointMap;//记录每条边的id和边上的交点index，边上的交点可以多于一个

    ///以下属性主要用于网络数据集的更新
	ev_bool m_bUpdate;
	ev_uint32 m_OldJunctionCount;                                                                    // 未更新前网络节点总数
	EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* m_Networkset;                          // 待更新的网络数据集
	EarthView::World::Spatial::GeoDataset::IFeatureClass* m_JunctionFC;                              // 网络节点类
	ev_vector<EarthView::World::Spatial2D::GeoDataset::CFeatureOperationItem*> m_DirtyFeatureItem;   // 网络数据集脏要素操作记录 
    ev_map<EVString,ev_vector<ev_uint32> > m_DeleteFeatureItemsMap;                                   // 源数据集名称及要素ID
	ev_map<EVString,ev_vector<ev_uint32> > m_AddFeatureItemsMap;                                      // 源数据集名称及要素ID                                  // 源数据集名称及要素ID

};
class CJunction
{
public:
	CJunction(ev_int32 oid,ev_real64 x=0,ev_real64 y=0)
		:nid(oid),x(x),y(y)
	{}
public:
	ev_int32  nid;
	ev_real64 x;
	ev_real64 y;
};

inline bool operator==(const CJunction &lhs,const CJunction &rhs)
{
	return ev_abs(lhs.x-rhs.x)<CNetworkDatasetBuilder::getTolerance() && ev_abs(lhs.y-rhs.y)<CNetworkDatasetBuilder::getTolerance();
	//return lhs.x==rhs.x && lhs.y==rhs.y;
}
inline bool operator<(const CJunction &lhs,const CJunction &rhs)
{
	if (lhs == rhs)
	{
		return false;
	} 
	else
	{
		return lhs.x<rhs.x || !(rhs.x<lhs.x) && lhs.y<rhs.y; 
	}
}

}}}} // End of Namespaces

#endif //_NETWORK_BUILDER_H_H_

