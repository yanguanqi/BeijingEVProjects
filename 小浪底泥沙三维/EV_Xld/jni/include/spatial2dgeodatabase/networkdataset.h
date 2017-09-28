#ifndef _NETWORK_DATASET_H_H_
#define _NETWORK_DATASET_H_H_

#include "spatial2dgeodatabase/config.h"
#include "spatial2dgeodatabase/network_core.h"
#include "spatialinterface/idataset.h"
#include "spatialinterface/ifeatureclass.h"
#include "spatialobject/geometry/point.h"


namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace GeoDataset{


class CNAAdjacentTable;
class CNetworkOperator;
class CNANode;
class CNAEdge;
class EV_2DGEODATABSE_DLL CNetworkFieldSetting: public EarthView::World::Core::CAllocatedObject
{
ev_private:
	CNetworkFieldSetting(EarthView::World::Core::CNameValuePairList *pList);
public:
	/// <summary>
	///默认构造函数
	/// </summary>
	CNetworkFieldSetting();
	EVString getSourceName() const ;
	EVDirectionType getDirectionType() const ;
	EVElementType getElementType() const ;
	EVDataValueType getExpressionType() const ;
	EVString getExpressionValue() const ;
private:
	EVString				m_sourceName;
	EarthView::World::Spatial2D::GeoDataset::EVDirectionType		m_direction;
	EarthView::World::Spatial2D::GeoDataset::EVElementType		m_element;
	EarthView::World::Spatial2D::GeoDataset::EVDataValueType		m_type;
	EVString				m_value;
	friend class CNetworkDataset;
};
class EV_2DGEODATABSE_DLL CNetworkFieldInfo: public EarthView::World::Core::CAllocatedObject
{
ev_private:
	CNetworkFieldInfo(EarthView::World::Core::CNameValuePairList *pList);
public:
	CNetworkFieldInfo();
	///ev_void AddSetting(const CNAAttributeSetting &setting);
	/// <summary>
	/// 获取设置数量
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回数量</returns>
	ev_int32 getSettingCount() const;
	/// <summary>
	/// 获取设置
	/// </summary>
	const CNetworkFieldSetting* GetSettingRef(ev_uint32 idx) const;//by jiang 2013 08 04
public:
	EVString							m_Name;
	EarthView::World::Core::CVariant::EVDataType			m_DataType;
	EVUsageType						m_Usage;
	EVUnitType						m_Unit;
	ev_bool							m_IsDefault;
private:
	ev_vector<CNetworkFieldSetting>	m_Settings;
	friend class CNetworkDataset;
};

class CNetworkDatasetElement
{

};
/// <summary>
/// 网络数据集类
/// </summary>
class EV_2DGEODATABSE_DLL CNetworkDataset : public EarthView::World::Spatial::GeoDataset::IDataset
{
public:
	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	~CNetworkDataset();
ev_private:
	CNetworkDataset(CNetworkOperator* opr);
public:
	/// <summary>
	/// 获取数据集类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>数据集类型</returns>
	virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const;
	/// <summary>
	/// 获取数据集名称
	/// </summary>
	/// <param name=""></param>
	/// <returns>数据集名称</returns>
	virtual EVString getName() const;
	/// <summary>
	/// 获取数据集版本号，该方法是确认数据变更情况。
	/// </summary>
	/// <param name=""></param>
	/// <returns>数据集版本号</returns>
	virtual ev_uint64 getDataVersion() const;
	/// <summary>
	/// 获取数据集更新时间
	/// </summary>
	/// <param name=""></param>
	/// <returns>数据集更新时间</returns>
	virtual EVString getDescription() const;
	/// <summary>
	/// 获取数据集更新时间
	/// </summary>
	/// <param name=""></param>
	/// <returns>数据集更新时间</returns>
	virtual EVString getUpdateTime() const;
	/// <summary>
	/// 判断是否包含子数据集
	/// </summary>
	/// <param name=""></param>
	/// <returns>是，返回true;否则，返回false</returns>
	virtual ev_bool hasSubDataset() const;
	/// <summary>
	/// 获取数据集所在数据源对象，该值为引用对象指针。
	/// </summary>
	/// <param name=""></param>
	/// <returns>数据集所在数据源对象指针</returns>
	virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const;
	/// <summary>
	/// 判断数据集是否具有编辑能力
	/// </summary>
	/// <param name=""></param>
	/// <returns>是，返回true;否则，返回false</returns>
	virtual ev_bool canEdit() const;
	/// <summary>
	/// 判断数据集是否处在编辑状态
	/// </summary>
	/// <param name=""></param>
	/// <returns>是，返回true;否则，返回false</returns>
	virtual ev_bool isEditing() const;
	/// <summary>
	/// 开始编辑，用于标识数据集处在编辑状态，并根据参数，设置相关编辑对象。
	/// </summary>
	/// <param name="withUndo">确定是否开启Undo功能</param>
	/// <returns>开启编辑成功，返回true；否则，返回false</returns>
	virtual ev_bool startEditing(ev_bool withUndo);
	/// <summary>
	/// 结束编辑，用于标识数据集结束编辑，根据参数，确实是否保存数据。
	/// </summary>
	/// <param name="isSave">需要保存编辑数据，设置true;否则，设置false</param>
	/// <returns>结束编辑成功，返回true;否则，返回false</returns>
	virtual ev_bool stopEditing(ev_bool isSave);
	/// <summary>
	/// 判断数据集是否处在编辑操作状态
	/// </summary>
	/// <param name=""></param>
	/// <returns>是，返回true;否则，返回false</returns>
	virtual ev_bool isBeginEditingOperation();
	/// <summary>
	/// 开启编辑操作，用于标识数据集编辑操作。
	/// 在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
	/// </summary>
	/// <param name=""></param>
	/// <returns>开启编辑操作成功，返回true;否则，返回false</returns>
	virtual ev_bool beginEditingOperation();
	/// <summary>
	/// 结束编辑操作，用于标识数据集编辑操作结束。
	/// 在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
	/// </summary>
	/// <param name="isConfirm">提交操作，设置true;否则，设置false</param>
	/// <returns>结束编辑操作成功，返回true;否则，返回false</returns>
	virtual ev_bool endEditingOperation(ev_bool isConfirm);
public:
	/// <summary>
	/// 获取最小外接矩形
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回最小外接矩形</returns>
	const EarthView::World::Spatial::Geometry::IEnvelope * getEnvelope() const;
	/// <summary>
	/// 获取网络数据集交点要素集
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回交点要素集</returns>
	EarthView::World::Spatial::GeoDataset::IFeatureClass* getJunctionFeatureClass();
	/// <summary>
	/// 获取网络数据集构建源要素集
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回构建源要素集</returns>
	EarthView::World::Spatial::GeoDataset::IFeatureClass* getSourceFeatureClass();
	// =-
	//CNetworkDatasetElement getElement();
	/// <summary>
	///从流读取网络要素集
	/// </summary>
	/// <param name="stream">流</param>
	/// <returns>若成功返回true；否则返回false</returns>
	ev_bool fromStream(EarthView::World::Core::CDataStream &stream);
	/// <summary>
	///获取成本数据数组
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回成本属性名称数组</returns>
//	EarthView::World::Core::CStringArray getCostAttributeName()const;
	ev_int32 getAttributeCount();
	const CNetworkFieldInfo* getAttribute(ev_int32 index);
	/// <summary>
	///获取边edgeID对应的几何体
	/// </summary>
	/// <param name="edgeID">边ID</param>
	/// <returns>返回对应的几何体</returns>
	_extfree EarthView::World::Spatial::Geometry::IGeometry* getGeometry(ev_uint32 edgeID); 
	/// <summary>
	///获取距点location最近的edgeID
	/// </summary>
	/// <param name="location">几何点</param>
	/// <returns>返回edgeID</returns>
	ev_int32 attachEdge(const EarthView::World::Spatial::Geometry::CPoint &location);
	ev_uint32 getEdgeCount();
	ev_uint32 getNodeCount();
	ev_real64 getImpedance(ev_uint32 EID,ev_bool FT,ev_int32 index);

	/// <summary>
	///是否有等级属性
	/// </summary>
	/// <param name=""></param>
	/// <returns>true表示存在等级属性</returns>
	ev_bool existHierachyAttri() const;
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
	/// <summary>
	///获取联通策略
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	const EVConnectivityPolicy getNDConnectivityPolicy();
ev_private:
	CNANode  getNode(ev_uint32 id);
	CNAEdge  getEdge(ev_uint32 id);
	CNAAdjacentTable* getAdjacentTableRef();
	ev_bool needUpdate();
private:
	ev_void intial();
ev_private:
	CNetworkDataset(EarthView::World::Core::CNameValuePairList *pList);
private:
	EVString								m_Name;
	EVString								m_srcName;
	CNAAdjacentTable					*m_pAdjac;
	
	ev_vector<CNetworkFieldInfo>		m_fields;
	ev_vector<ev_vector<ev_real32> > 	m_values;

	EarthView::World::Spatial::GeoDataset::IFeatureClass		*m_junctionFC;
	EarthView::World::Spatial::GeoDataset::IFeatureClass		*m_sourceFC;

	CNetworkOperator	*m_opr;
};

}}}} //End of Namespace


#endif //_NETWORK_DATASET_H_H_

