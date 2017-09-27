#ifndef EARTHVIEW_WORLD_SPATIAL_GEODATASET_IFEATURECLASS_H
#define EARTHVIEW_WORLD_SPATIAL_GEODATASET_IFEATURECLASS_H

#include "core/any.h"

#include "spatialinterface/idataset.h"
#include "spatialinterface/ifield.h"
#include "spatialinterface/ifields.h"
#include "spatialinterface/iqueryfilter.h"
#include "spatialinterface/igeometry.h"
#include "spatialinterface/itableproxy.h"

#include "spatialinterface/config.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{

				class IFeature;
				class IFeatureIterator;
				class IFeatureSelection;

				/// <summary>
				/// 要素类 类型枚举
				/// </summary>
				enum EVFeatureClassType
				{
					/// <summary>
					/// 未知类型
					/// </summary>
					FCT_UNKNOWN                    = 0,
					/// <summary>
					/// 矢量要素类类型
					/// </summary>
					FCT_VECTORFEATURECLASS         = 1,
					/// <summary>
					/// 实体要素类类型
					/// </summary>
					FCT_ENTITYDATASET              = 2,

					FCT_MESHDATASET				    =3 ,
					/// <summary>
					/// 特效要素类类型
					/// </summary>
					FCT_EFFECTDATASET			   =4  ,
					/// <summary>
					/// 注记要素类类型
					/// </summary>
					FCT_ANNOTATION			        = 5,
					FCT_VECTORFILE_FEATURECLASS	=	6,
					FCT_VECTORFILE_ANNOTATION			=	7,
					FCT_VECTORFILE_CADFEATURECLASS  = 8
				};

				/// <summary>
				/// 要素类接口
				/// </summary>
				class EV_INTERFACE_DLL IFeatureClass :
					public EarthView::World::Spatial::GeoDataset::IDataset
				{
				public:	
					/// <summary>
					/// 默认析构函数
					/// </summary>
					virtual ~IFeatureClass();
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
					/// 获取数据集描述
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集描述</returns>
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
					/// <summary>
					/// 获取要素数据集类型
					/// </summary>
					/// <returns>要素数据集类型</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVFeatureClassType getFeatureClassType() const;
					/// <summary>
					/// 获取几何体类型
					/// </summary>
					/// <returns>几何体类型枚举</returns>
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;
					/// <summary>
					/// 获取要素数据集的字段集合
					/// </summary>
					/// <returns>字段集合对象，内部引用，无需释放</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() const;
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
					/// 获取几何体字段对象
					/// </summary>
					/// <returns>几何体字段对象，内部引用，无需释放</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField* getGeometryField() const;
					/// <summary>
					/// 获取ID字段对象
					/// </summary>
					/// <returns>ID字段对象，内部引用，无需释放</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField* getIDField() const;
					/// <summary>
					/// 获取空间索引类型枚举
					/// </summary>
					/// <returns>空间索引类型枚举</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum getSpatialIndexEnum() const;
					/// <summary>
					/// 获取指定ID的要素
					/// </summary>
					/// <param name="id">指定ID</param>
					/// <returns>要素对象。如果无该ID，返回NULL</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeature* getFeature(ev_uint32 id);
					/// <summary>
					/// 按照指定条件，进行查询
					/// </summary>
					/// <param name="filter">指定查询条件</param>
					/// <returns>要素查询结果迭代器</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
					/// <summary>
					/// 按照指定条件，进行选择
					/// </summary>
					/// <param name="filter">指定空间索引类型</param>
					/// <returns>要素选择器</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
					/// <summary>
					/// 获取指定查询条件的要素数目
					/// </summary>
					/// <param name="filter">查询条件</param>
					/// <returns>要素数目</returns>
					virtual ev_uint32 getFeatureCount(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
					/// <summary>
					/// 为数据集，创建指定空间索引
					/// </summary>
					/// <param name="spaIndex">指定空间索引类型</param>
					/// <returns>ture，成功；false，失败</returns>
					virtual ev_bool createSpatialIndex(EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum spaIndex);
					/// <summary>
					/// 重建空间索引
					/// </summary>
					/// <returns>true，成功；false，失败</returns>
					virtual ev_bool rebulidSpatialIndex();
					/// <summary>
					/// 删除空间索引
					/// </summary>
					/// <returns>true，成功；false，失败</returns>
					virtual ev_bool deleteSpatialIndex();
					/// <summary>
					/// 添加字段
					/// </summary>
					/// <param name="field">指定索引</param>
					/// <returns>ture，成功；false，失败</returns>
					virtual ev_bool addField(const EarthView::World::Spatial::GeoDataset::IField* field);
					/// <summary>
					/// 删除指定字段
					/// </summary>
					/// <param name="field">指定字段</param>
					/// <returns>ture，成功；false，失败</returns>
					virtual ev_bool deleteField(const EarthView::World::Spatial::GeoDataset::IField* field);
					/// <summary>
					/// 创建要素缓存对象，内存中创建，用于一次性写入数据集。
					/// </summary>
					/// <returns>要素对象</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeature* createFeatureBuffer();
					/// <summary>
					/// 在数据集上，插入新要素。
					/// </summary>
					/// <param name="feature">返回的要素对象</param>
					/// <returns>ture，成功；false，失败</returns>
					virtual ev_bool insert(_out EarthView::World::Spatial::GeoDataset::IFeature* feature);
					/// <summary>
					/// 插入已知要素到数据集中
					/// </summary>
					/// <param name="buffer">指定要素对象</param>
					/// <returns>返回插入索引</returns>
					virtual ev_uint32 insertFeatureBuffer(const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
					/// <summary>
					/// 更新已知要素
					/// </summary>
					/// <param name="buffer">要素对象</param>
					/// <returns>ture，成功；false，失败</returns>
					virtual ev_bool update(const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
					/// <summary>
					/// 获取数据集的范围
					/// </summary>
					/// <returns>包围盒对象</returns>
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
					/// <summary>
					/// 获取数据集的空间坐标系参考对象
					/// </summary>
					/// <returns>空间坐标参考系对象，内部引用，无需释放</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const;
					/// <summary>
					/// 删除指定ID的要素
					/// </summary>
					/// <param name="id">指定ID</param>
					/// <returns>ture，成功；false，失败</returns>
					virtual ev_bool		deleteFeature(ev_uint32 id);
					/// <summary>
					/// 创建一个数据表的代理对象。
					/// </summary>
					/// <returns></returns>
					virtual EarthView::World::Spatial::GeoDataset::ITableProxy* createTableProxy();
					///
ev_private:
					/// <summary>
					/// 用于封装的构造函数
					/// </summary>
					IFeatureClass( EarthView::World::Core::CNameValuePairList *pList );
					///
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					IFeatureClass();
				private:
					/// <summary>
					/// 拷贝构造函数
					/// </summary>
					C_DISABLE_COPY(IFeatureClass);
				};
			}
		}
	}
}

#endif
