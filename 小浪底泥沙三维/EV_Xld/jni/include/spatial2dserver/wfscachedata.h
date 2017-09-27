#ifndef EARTHVIEW_WORLD_SPATIAL_WFSCACHEDATA_H
#define EARTHVIEW_WORLD_SPATIAL_WFSCACHEDATA_H
#include "spatial2dserver/config.h"
#include "spatial2dserver/wfslayer.h"
#include "spatialinterface/ifeatureclass.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoDataset
			{
				class EV_2DWMS_DLL CWFSCacheData
					:public EarthView::World::Spatial::GeoDataset::IFeatureClass
				{
				public:		
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CWFSCacheData();

					/// <summary>
					/// 获取数据包围盒信息
					/// </summary>
					/// <returns>包围盒对象指针</returns>
					virtual EarthView::World::Spatial::Geometry::IEnvelope * getEnvelopeRef() const;
					/// <summary>
					/// 获取要素几何体类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回要素几何体类型</returns>
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;
					/// <summary>
					/// 获取数据集的空间坐标系参考对象
					/// </summary>
					/// <returns>空间坐标参考系对象，内部引用，无需释放</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const;

					/// <summary>
					/// 查询要素，兼容SDK查询接口，内部调用getFeature
					/// </summary>
					/// <param name="filter">查询器</param>
					/// <returns>操作结果迭代器</returns>
					_extfree EarthView::World::Spatial::GeoDataset::IFeatureIterator*  query(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
					/// <summary>
					/// 获取指定ID的要素
					/// </summary>
					/// <param name="id">指定ID</param>
					/// <returns>要素对象。如果无该ID，返回NULL</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeature* getFeature(ev_uint32 id);
					/// <summary>
					/// 获取指定查询条件的要素数目
					/// </summary>
					/// <param name="filter">查询条件</param>
					/// <returns>要素数目</returns>
					virtual ev_uint32 getFeatureCount(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
					/// <summary>
					/// 按照指定条件，进行选择
					/// </summary>
					/// <param name="filter">指定空间索引类型</param>
					/// <returns>要素选择器</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
					/// <summary>
					/// 获取要素数据集的字段集合
					/// </summary>
					/// <returns>字段集合对象，内部引用，无需释放</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() ;
					/// <summary>
					/// 获取要素数据集的字段数目
					/// </summary>
					/// <returns>字段数目</returns>
					virtual ev_uint32 getFieldCount() const;
					/// <summary>
					/// 获取指定索引的字段对象
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <returns>字段对象，内部引用，无需释放</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(ev_uint32 index)const;
					/// <summary>
					/// 是否能找到指定字段名称。
					/// </summary>
					/// <param name="fieldName">指定字段名称</param>
					/// <returns>如果找到，返回索引；如果找不到，返回-1</returns>
					virtual ev_int32 findField(const EVString& fieldName) const;
					/// <summary>
					/// 获取数据集类型
					/// </summary>
					/// <returns>数据集类型</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const;
					/// <summary>
					/// 获取要素数据集类型
					/// </summary>
					/// <returns>要素数据集类型</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVFeatureClassType getFeatureClassType() const;
					/// <summary>
					/// 创建一个数据表的代理对象。
					/// </summary>
					/// <returns></returns>
					virtual EarthView::World::Spatial::GeoDataset::ITableProxy* createTableProxy();
					/// <summary>
					/// 获取数据集名称
					/// </summary>
					/// <returns>数据集名称</returns>
					virtual EVString getName() const; 

					/// <summary>
					/// 获取数据版本
					/// </summary>
					/// <returns>数据版本</returns>
					virtual ev_uint64 getDataVersion() const{return 0;}

					/// <summary>
					/// 获取数据集描述
					/// </summary>
					/// <returns>数据描述信息</returns>
					virtual EVString getDescription() const{return "";}

					/// <summary>
					/// 获取数据更新时间
					/// </summary>
					/// <returns>数据更新时间</returns>
					virtual EVString getUpdateTime() const{return "";}

					/// <summary>
					/// 获取数据源
					/// </summary>
					/// <returns>数据源对象指针</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef()const;

					/// <summary>
					/// 是否可编辑
					/// </summary>
					/// <returns>false</returns>
					virtual ev_bool canEdit() const{return false;}

					/// <summary>
					/// 是否正在编辑
					/// </summary>
					/// <returns>false</returns>
					virtual ev_bool isEditing() const{return false;}

					/// <summary>
					/// 开始编辑
					/// </summary>
					/// <param name="withUndo">是否撤销</param>
					/// <returns>false</returns>
					virtual ev_bool startEditing(_in ev_bool withUndo){return false;}

					/// <summary>
					/// 停止编辑
					/// </summary>
					/// <param name="isSave">是否保存</param>
					/// <returns>false</returns>
					virtual ev_bool stopEditing(_in ev_bool isSave){return false;}

					/// <summary>
					/// 是否处于编辑状态
					/// </summary>
					/// <returns>false</returns>
					virtual ev_bool isBeginEditingOperation(){return false;}

					/// <summary>
					/// 开始编辑
					/// </summary>
					/// <returns>false</returns>
					virtual ev_bool beginEditingOperation(){return false;}

					/// <summary>
					/// 停止编辑
					/// </summary>
					/// <param name="isConfirm">是否一定终止</param>
					/// <returns>false</returns>
					virtual ev_bool endEditingOperation(_in ev_bool isConfirm){return false;}

					ev_void setGUID(const EVString & str);
					EVString getGUID();
					EarthView::World::Spatial::GeoDataset::IFeatureClass* getVectorFeatureClass();
				ev_internal:
					///构造函数
					CWFSCacheData(EarthView::World::Spatial::GeoDataset::IFeatureClass * ref_cacheFeatureClass);
ev_private:
					CWFSCacheData(_in EarthView::World::Core::CNameValuePairList* pList);
				private:
					IFeatureClass* mpCacheFeatureClass;
					EVString mstrGUID;
					friend class CWFSCacheSelection;
					friend class EarthView::World::Spatial2D::Atlas::CWFSLayer;
				};
}}}}

#endif //EARTHVIEW_WORLD_SPATIAL_WFSCACHE_H