#ifndef EARTHVIEW_WORLD_CHART_CCHARTDATASET_H
#define EARTHVIEW_WORLD_CHART_CCHARTDATASET_H

#include "core/core_common.h"
#include "core/datastream.h"
#include "spatialinterface/idataset.h"
#include "chartexports.h"
#include "spatialinterface/ifeature.h"
#include "spatialinterface/ienvelope.h"
#include "spatialinterface/ispatialreference.h"
#include "spatialdatabase/fields.h"
#include "spatialdatabase/field.h"
#include "spatialinterface/ifeatureiterator.h"
#include "spatialinterface/ifeatureselection.h"
#include "spatialinterface/iqueryfilter.h"
//////#include "chartdatasetoperator.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				
				class CChartSymbolFactory;
				
				class CChartLabelRender;
				
				class CChartVectorRender;	
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
				class CChartLayer;
			}
		}
	}
}

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				/// <summary>
				/// 海图渲染坐标信息
				/// </summary>
				class CChartCoordinatesInfo;

				/// <summary>
				/// 海图数据集操作类
				/// </summary>
				class CChartDatasetOperator;

				/// <summary>
				/// 海图图条件符号空间关系信息类
				/// </summary>
				class CChartSpatialRelationInfoForCS;

				/// <summary>
				/// 查询条件，用于设置属性查询和空间查询条件
				/// </summary>
				class EVCHART_DLL CChartQueryFilter
					:public IQueryFilter
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CChartQueryFilter();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CChartQueryFilter();
					/// <summary>
					/// 获取查询语句中字段名称
					/// 多个字段名称，用","隔离
					/// </summary>
					/// <returns>字段名称</returns>
					virtual EVString getFieldName() const;
					/// <summary>
					/// 获取查询语句中WhereClause语句
					/// </summary>
					/// <returns>WhereClause语句</returns>
					virtual EVString getWhereClause() const;
					/// <summary>
					/// 获取查询语句中 Limit限制
					/// </summary>
					/// <returns>Limit限制，默认为0</returns>
					virtual ev_uint32 getLimitNum() const;///未实现
					/// <summary>
					/// 获取查询语句中 Offset限制
					/// </summary>
					/// <returns>Offset限制，默认为0</returns>
					virtual ev_uint32 getOffsetNum() const;///未实现
					/// <summary>
					/// 获取空间查询的几何体
					/// </summary>
					/// <returns>几何体对象，内部引用。</returns>
					virtual const EarthView::World::Spatial::Geometry::IGeometry* getQueryGeometryRef() const;
					/// <summary>
					/// 获取查询中的查询模式
					/// </summary>
					/// <returns>查询模式</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVQueryModeType getQueryMode();
					/// <summary>
					/// 获取空间查询的空间关系条件
					/// </summary>
					/// <returns>空间关系条件</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType getSpatialRelation();
					/// <summary>
					/// 设置查询语句中查询字段
					/// </summary>
					/// <param name="names">字段名称，多个字段，用","隔离</param>
					/// <returns></returns>
					virtual ev_void setFieldName(_in const EVString& names);
					/// <summary>
					/// 设置查询语句中WhereClause语句
					/// </summary>
					/// <param name="whereclause">WhereClause语句</param>
					/// <returns></returns>
					virtual ev_void setWhereClause(_in const EVString& whereclause);
					/// <summary>
					/// 设置查询语句中Limit限制
					/// </summary>
					/// <param name="limit">返回限制</param>
					/// <returns></returns>
					virtual ev_void setLimitNum(_in ev_uint32 limit);
					/// <summary>
					/// 设置查询语句中Offset限制
					/// </summary>
					/// <param name="offset">offset值</param>
					/// <returns></returns>
					virtual ev_void setOffsetNum(_in ev_uint32 offset);
					/// <summary>
					/// 设置空间查询几何体
					/// </summary>
					/// <param name="geometry">查询几何体</param>
					/// <returns></returns>
					virtual ev_void setQueryGeometry(_in const EarthView::World::Spatial::Geometry::IGeometry* geometry);
					/// <summary>
					/// 设置查询模式
					/// </summary>
					/// <param name="queryMode">查询模式</param>
					/// <returns></returns>
					virtual ev_void setQueryMode(_in EVQueryModeType queryMode);
					/// <summary>
					/// 设置空间查询关系
					/// </summary>
					/// <param name="spatialRelType">空间查询关系</param>
					/// <returns></returns>
					virtual ev_void setSpatialRelation(_in EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType spatialRelType);
					/// <summary>
					/// 克隆函数
					/// </summary>
					/// <returns>查询对象</returns>
					virtual EarthView::World::Spatial::GeoDataset::IQueryFilter * clone() const;
					/// <summary>
					/// 设置是否采用包围盒判断空间关系
					/// </summary>
					/// <param name="blur">true包围盒判断空间关系/false实际坐标判断空间关系</param>
					/// <returns></returns>
					ev_void setBlurQuery(_in ev_bool blur);
					/// <summary>
					/// 获取是否采用包围盒判断空间关系
					/// </summary>
					/// <returns>true包围盒判断空间关系/false实际坐标判断空间关系</returns>
					ev_bool isBlurQuery();
					/// <summary>
					/// 设置要查询的物标类
					/// </summary>
					/// <param name="name">物标类名称，查询所有设 “*”,不同的物标类以‘；’分隔</param>
					/// <returns></returns>
					ev_void setQueryClassName(_in const EVString& name);
					/// <summary>
					/// 获取要查询的物标类名称
					/// </summary>
					/// <returns>物标类名称，“*”表示所有,不同的物标类以‘；’分隔</returns>
					const EVString getQueryClassName() const;
					/// <summary>
					/// 设置跳过的要数个数
					/// </summary>
					/// <param name="num">跳过的要数个数</param>
					/// <returns></returns>
					ev_void setSkipFeatureNum(_in ev_uint32 num);
					/// <summary>
					/// 获取跳过的要数个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>跳过的要数个数</returns>
					ev_uint32 getSkipFeatureNum();
					/// <summary>
					/// 拷贝构造函数
					/// </summary>
					/// <param name="filter">查询对象</param>
					/// <returns></returns>
					CChartQueryFilter(_in EarthView::World::Spatial::GeoDataset::CChartQueryFilter & filter);
				ev_private:
					CChartQueryFilter(_in EarthView::World::Core::CNameValuePairList *pList);
				private:
					EarthView::World::Spatial::Geometry::IGeometry* mpGeom;
			
					EarthView::World::Spatial::GeoDataset::EVQueryModeType mnQueryMode;//几何查询还是属性查询
					EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType mnRelationType;////求交还是其他
					
					ev_uint32 mnSkipNum;
					ev_uint32 mnOffset;
					ev_uint32 mnLimitCount;
					ev_bool mbBlurQuery;
					EVString mstrClassName;

					EVString mstrFields;
					EVString mstrWhereClause;
					friend class CChartDataset;
					friend class CChartFeatureIterator;
				};


				/// <summary>
				/// 海图数据集
				/// </summary>
				class CChartDataset;

				/// <summary>
				/// 要素选择器，用于存放数据集中被选中的要素ID。
				/// </summary>
				class EVCHART_DLL CChartFeatureSelection
					:public IFeatureSelection
				{
				public:	
					/// <summary>
					/// 默认析构函数
					/// </summary>
					virtual ~CChartFeatureSelection();
				public:
					/// <summary>
					/// 获取要素数目
					/// </summary>
					/// <returns>要素数目</returns>
					virtual ev_uint32 getCount() const;
					/// <summary>
					/// 获取要素ID
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <returns>要素ID</returns>
					virtual ev_uint32 getID(_in ev_uint32 index) const;
					/// <summary>
					/// 获取所有ID
					/// </summary>
					/// <param name="ids">输出，ID数组</param>
					/// <returns>要素ID个数</returns>
					virtual ev_uint32 getIDs(_in ev_uint32 * ids) const;
					/// <summary>
					/// 判断指定ID是否存在
					/// </summary>
					/// <param name="id">指定ID</param>
					/// <returns>存在，返回索引，不存在，返回-1</returns>
					virtual ev_int32 findID(_in ev_uint32 id) const;
					/// <summary>
					/// 在选择器中，再查询指定条件要素
					/// </summary>
					/// <param name="filter">指定条件</param>
					/// <returns>要素结果迭代器</returns>
					virtual IFeatureIterator* query(_in IQueryFilter* filter) const;///未实现
					/// <summary>
					/// 在选择器中，再选择指定条件要素
					/// </summary>
					/// <param name="filter">指定条件</param>
					/// <returns>要素选择器</returns>
					virtual IFeatureSelection* select(_in IQueryFilter* filter) const;///未实现
					/// <summary>
					/// 添加指定ID
					/// </summary>
					/// <param name="id">指定ID</param>
					/// <returns>true，成功；false，失败</returns>
					virtual ev_bool addID(_in ev_uint32 id);
					/// <summary>
					/// 添加ID数组
					/// </summary>
					/// <param name="id">ID数组</param>
					/// <param name="size">ID数组大小</param>
					/// <returns>添加个数</returns>
					virtual ev_uint32 addIDs(_in ev_uint32 * id,ev_uint32 size);
					/// <summary>
					/// 移除指定索引出的指定个数的ID
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <param name="size">指定大小</param>
					/// <returns>成功移除数目</returns>
					virtual ev_uint32 remove(_in ev_uint32 index,ev_uint32 size);
					/// <summary>
					/// 移除所有的ID
					/// </summary>
					/// <returns>要素选择器</returns>
					virtual ev_uint32 clear();
					/// <summary>
					/// 取两个选择器的交集ID
					/// </summary>
					/// <param name="set">指定选择器</param>
					/// <returns></returns>
					virtual ev_void intersect(_in const IFeatureSelection* set);
					/// <summary>
					/// 取两个选择器的不同ID
					/// </summary>
					/// <param name="set">指定选择器</param>
					/// <returns></returns>
					virtual ev_void difference(_in const IFeatureSelection* set);
					/// <summary>
					/// 追加指定选择器ID
					/// </summary>
					/// <param name="set">指定选择器</param>
					/// <returns></returns>
					virtual ev_void append(_in const IFeatureSelection* set);
					//const IFeature* getFeature(_in ev_uint32 index) const;
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					CChartFeatureSelection(CChartDataset* pDataset);
				ev_private:
					CChartFeatureSelection(_in EarthView::World::Core::CNameValuePairList *pList);
				private:
					CChartFeatureSelection(_in EarthView::World::Spatial::GeoDataset::CChartFeatureSelection & obj);

					ev_vector<ev_uint32> mlistID;
					ev_uint32 mnCount;

					EarthView::World::Spatial::GeoDataset::CChartDataset* mpDataset;
					mutable EarthView::World::Core::CReadWriteLock mLock;

					friend class CChartDataset;
					friend class CChartFeatureIterator;
				};

				/// <summary>
				/// 要素查询结果迭代器，用于遍历查询结果，只能向前移动，不可后退。
				/// </summary>
				class EVCHART_DLL CChartFeatureIterator
					:public IFeatureIterator
				{
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					virtual ~CChartFeatureIterator();
					/// <summary>
					/// 获取以检测过的要素数目
					/// </summary>
					/// <returns>已检测过的要素数目</returns>
					ev_uint32 getTestedFeatureNum();
					/// <summary>
					/// 下一个结果
					/// </summary>
					/// <returns>如果移动到最后，返回NULL；否则，返回值有效</returns>
					virtual IFeature* next();//获取的feature外部不需要删除
					/// <summary>
					/// 获取查询结果集中的要素字段
					///未实现
					/// </summary>
					/// <returns>字段集合</returns>
					virtual const IFields* getFields() const;/////对于不同的类，字段定义不一样，无法获取整体的fields
					/// <summary>
					/// 获取指定索引的字段
					///未实现
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <returns>字段对象指针</returns>
					virtual const IField* getField(_in ev_uint32 index) const;/////对于不同的类，字段定义不一样，无法获取
					/// <summary>
					/// 能否找到指定字段名称
					/// </summary>
					/// <param name="fieldName">字段名称</param>
					/// <returns>如果找到，返回索引；如果找不到，返回-1</returns>
					virtual ev_int32 findField(_in const EVString& fieldName) const;		
				ev_private:
					CChartFeatureIterator(_in EarthView::World::Core::CNameValuePairList *pList);
				protected:
					ev_bool parseQueryClassName(_in const EVString& name);
				protected:
					CChartFeatureIterator(_in CChartFeatureIterator & iterator);////还未实现
					CChartFeatureIterator(_in CChartDataset* dataset);
					IFeatureSelection* getResultSelection(); 
					ev_int32 nextID();
					//CChartFeatureIterator();
					////////////////查询所需参数////////////////////
					/* 查询条件 */
					ev_int32 mnQueryIndex;					///索引
					
					ev_bool mbSkipSome;						///是否从此类要素的第一个开始遍历

					//ev_bool mbAllClass;
					ev_int32 mnClassIndex;
					EarthView::World::Core::StringVector mlistClassName;
					ev_int32 mnClassCount;
					////从selection获取的
					ev_bool mbFromDataset;
					CChartFeatureSelection* mpSelection;	///待检测ID集合
					
					CChartDataset* mpDataset;
					CChartQueryFilter* mpFilter;
					IFeature* mpCurFeature;
					mutable EarthView::World::Core::CReadWriteLock mLock;

					friend class CChartDataset;
					friend class CChartSymbolFactory;
					friend class CChartFeatureSelection;
				};
				/// <summary>
				/// 海图数据描述信息类
				/// </summary>
				class EVCHART_DLL CChartDatasetHeaderInfo
					:public EarthView::World::Core::CAllocatedObject
				{
					friend class CChartDataSource;
					friend class CChartDataset;
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CChartDatasetHeaderInfo();
					/// <summary>
					/// 查询变量
					/// </summary>
					/// <param name="fieldName">字段名</param>
					/// <param name="subFieldName">子字段名</param>
					/// <param name="var">查询结果</param>
					/// <returns>成功返回true，否则返回false</returns>
					ev_bool getHeaderInfo(const EVString& fieldName,const EVString& subFieldName,EarthView::World::Core::CVariant& var);
					/// <summary>
					/// 获取属性字段个数
					/// </summary>
					/// <returns>属性字段个数</returns>
					ev_uint32 getHeaderFieldCount();
					/// <summary>
					/// 获取某个字段的子字段个数
					/// </summary>
					/// <param name="index">字段索引</param>
					/// <returns>子字段个数</returns>
					ev_uint32 getHeaderSubFieldCount(ev_uint32 index);
					/// <summary>
					/// 查询变量
					/// </summary>
					/// <param name="fieldIndex">字段索引</param>
					/// <param name="subfieldIndex">子字段索引</param>
					/// <param name="var">查询结果</param>
					/// <returns>成功返回true，否则返回false</returns>
					ev_bool getHeaderInfo(ev_uint32 fieldIndex,ev_uint32 subfieldIndex,EarthView::World::Core::CVariant& var);
					/// <summary>
					/// 获取指定索引的字段名称
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>指定的字段名称</returns>
					EVString getHeaderFieldName(ev_uint32 index);
					/// <summary>
					/// 获取子字段名称
					/// </summary>
					/// <param name="fieldIndex">字段索引</param>
					/// <param name="subfieldIndex">子字段索引</param>
					/// <returns>指定的子字段名称</returns>
					EVString getHeaderSubFieldName(ev_uint32 fieldIndex,ev_uint32 subfieldIndex);

					void toStream(EarthView::World::Core::CDataStream& stream);

					static CChartDatasetHeaderInfo* fromStream(EarthView::World::Core::CDataStream& stream);
				protected:
					CChartDatasetHeaderInfo();
				private:
					ev_map<EVString,ev_map<EVString, EarthView::World::Core::CVariant*>*>* mpMapCommonInfo;
					ev_map<EVString,ev_map<EVString, EarthView::World::Core::CVariant*>*>::iterator mIterField;
					mutable EarthView::World::Core::CReadWriteLock mLock;
				ev_private:
					CChartDatasetHeaderInfo(_in EarthView::World::Core::CNameValuePairList *pList);
				};

				/// <summary>
				/// 海图数据集
				/// </summary>
				class EVCHART_DLL CChartDataset:
					public  EarthView::World::Spatial::GeoDataset::IDataset
				{
					friend class CChartDataSource;
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CChartDataset();

					/// <summary>
					/// 获取图幅所含物标类的名称列表
					/// </summary>
					/// <param name="namelist">查询结果</param>
					/// <returns>成功返回true，否则返回false</returns>
					bool getClassNameList(_inout EarthView::World::Core::StringVector& namelist);
					
					/// <summary>
					/// 获取数据集数据范围
					/// </summary>
					/// <returns>包围盒对象指针</returns>
					const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
					/* 获取空间参考 */
					/// <summary>
					/// 获取空间参考
					/// </summary>
					/// <returns>空间参考对象指针</returns>
					const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const;
					/// <summary>
					/// 按条件查询要素
					/// </summary>
					/// <param name="filter">查询条件</param>
					/// <returns>查询结果迭代器，需外部释放，如果filter无效，返回NULL</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(_in IQueryFilter* filter);
					/// <summary>
					/// 按条件选择要素
					/// </summary>
					/// <param name="filter">选择条件</param>
					/// <returns>查询结果要素集合，需外部释放，如果filter无效，返回NULL</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(_in IQueryFilter* filter);
					
					/// <summary>
					/// 检测某物标类是否存在
					/// </summary>
					/// <param name="className">物标类名称</param>
					/// <returns>true表示存在/false表示不存在</returns>
					ev_bool isClassExists(_in const EVString& className);			///检测是否存在某类要素
					
					/// <summary>
					/// 获取数据集所在数据源对象，该值为引用对象指针。
					/// </summary>
					/// <returns>数据集所在数据源对象指针</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const;
					/// <summary>
					/// 获取数据集类型
					/// </summary>
					/// <returns>数据集类型</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const;
					/// <summary>
					/// 获取数据集名称
					/// </summary>
					/// <returns>数据集名称</returns>
					virtual EVString getName() const;
					/// <summary>
					/// 获取数据集版本号，该方法是确认数据变更情况。
					/// </summary>
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
					/// <returns>false</returns>
					virtual ev_bool hasSubDataset() const;

					/// <summary>
					/// 获取所含物标类个数
					/// </summary>
					/// <returns>所含物标类个数</returns>
					ev_int32 getClassCount();
					/// <summary>
					/// 获取指定索引的物标类名称
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="name">查询结果</param>
					/// <returns>成功返回true，否则返回false</returns>
					ev_bool getClassName(_in ev_int32 index,_out EVString& name);
					/// <summary>
					/// 获取数据集的数据描述信息
					/// </summary>
					/// <returns>数据描述信息类对象指针，外部释放</returns>
					_extfree  EarthView::World::Spatial::GeoDataset::CChartDatasetHeaderInfo* getHeaderInfo() const;
					
					/// <summary>
					/// 判断数据集是否具有编辑能力
					/// </summary>
					/// <returns>无此操作，返回false</returns>
					virtual ev_bool canEdit() const{return false;}
					/// <summary>
					/// 判断数据集是否处在编辑状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>无此操作，返回false</returns>
					virtual ev_bool isEditing() const{return false;}
					/// <summary>
					/// 开始编辑，用于标识数据集处在编辑状态，并根据参数，设置相关编辑对象。
					/// </summary>
					/// <param name="withUndo">确定是否开启Undo功能</param>
					/// <returns>无此操作，返回false</returns>
					virtual ev_bool startEditing(ev_bool withUndo){return false;}
					/// <summary>
					/// 结束编辑，用于标识数据集结束编辑，根据参数，确实是否保存数据。
					/// </summary>
					/// <param name="isSave">需要保存编辑数据，设置true;否则，设置false</param>
					/// <returns>无此操作，返回false</returns>
					virtual ev_bool stopEditing(ev_bool isSave){return false;}
					/// <summary>
					/// 判断数据集是否处在编辑操作状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>无此操作，返回false</returns>
					virtual ev_bool isBeginEditingOperation(){return false;}
					/// <summary>
					/// 开启编辑操作，用于标识数据集编辑操作。
					/// 在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
					/// </summary>
					/// <param name=""></param>
					/// <returns>无此操作，返回false</returns>
					virtual ev_bool beginEditingOperation(){return false;}
					/// <summary>
					/// 结束编辑操作，用于标识数据集编辑操作结束。
					/// 在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
					/// </summary>
					/// <param name="isConfirm">提交操作，设置true;否则，设置false</param>
					/// <returns>无此操作，返回false</returns>
					virtual ev_bool endEditingOperation(ev_bool isConfirm){return false;}
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CChartDataset();
				public:
					ev_bool destroyFeature(_in IFeature* pFeature);
					///按要素获取要素，需要destroyFeature();
					_extfree EarthView::World::Spatial::GeoDataset::IFeature* getFeatureFromID(_in ev_int32 id);
					ev_uint32 getFeatureCount(_in const EVString& classname);
					bool getFeatureIDList(_in const EVString& className,_out EarthView::World::Core::IntVector& idList);
				ev_private:
					CChartDataset(_in  EarthView::World::Core::CNameValuePairList *pList);
				protected:
					ev_void setUseFeatureMemoryPool(_in ev_bool value);		///是否将解析的feature存入内存池,设置为true,生成，false清除
					//IFeature* getFeatureByIDFromMemory(_in ev_int32 id);	///不需要删除，最后用setUseFeatureMemoryPool(false)统一删

					ev_int32 getDrawFeatureIDs(const EarthView::World::Spatial::Geometry::IEnvelope* env,
						ev_uint32 scale,EarthView::World::Core::StringVector& classList,ev_set<ev_int32>& idList);
					bool getFieldValues(_in ev_int32 id,_inout  EarthView::World::Core::CDataStream& stream);
					EarthView::World::Spatial::Geometry::IGeometry* getGeometry(_in ev_int32 id);
					EarthView::World::Spatial::GeoDataset::CChartSpatialRelationInfoForCS* getSpatialRelationInfoRef();
					//IGeometry* createRectGeometry(const ev_real64& xMin,const ev_real64& yMin,const ev_real64& xMax,const ev_real64& yMax);
					
					ev_uint32 getFeatureCount();	///获取所有要素数目
					
					//IFeature* getFeatureRefFromIndex(_in ev_uint32 index);	///按索引获取要素

					ev_int32 getIntersectFeatureID(_in EarthView::World::Spatial::Geometry::IGeometry* pGeom,_in const EVString& className,_inout ev_int32& startIndex,_in bool blur);

					EarthView::World::Spatial::GeoDataset::CChartCoordinatesInfo* getDrawCoordinates(_in ev_int32 id);
					EarthView::World::Spatial::GeoDataset::CChartCoordinatesInfo* getDrawCoordinates(_in ev_int32 id,EVString& className);
					
				protected:
					/* 海图名称 */
					EVString mstrChartName;
					/* 海图范围 */
					EarthView::World::Spatial::Geometry::IEnvelope* mpEnvelope;
					/* 坐标系统 */
					EarthView::World::Spatial::Geometry::ISpatialReference* mpSpatialRef;//
					/* 数据源 */
					EarthView::World::Spatial::GeoDataset::IDataSource* mpDataSource;

					/* IOperator */
					EarthView::World::Spatial::GeoDataset::CChartDatasetOperator* mpOperator;
					/* 数据源类型 */
					//EVDataSourceType mnDataType;

					EarthView::World::Spatial::GeoDataset::CChartSpatialRelationInfoForCS* mpSpatialRelationIndex;
					mutable EarthView::World::Core::CReadWriteLock mLock;
					friend class CChartFeatureIterator;
					friend class CChartDataSource;
					friend class CChartFeature;

					friend class EarthView::World::Spatial::Atlas::CChartLayer;

					friend class EarthView::World::Spatial::Display::CChartSymbolFactory;
					friend class EarthView::World::Spatial::Display::CChartVectorRender;
					friend class EarthView::World::Spatial::Display::CChartLabelRender;
				};
			}
		}
	}
}
#endif
