#ifndef __FEATURESELECTION3D_H_
#define __FEATURESELECTION3D_H_
#include "spatial3ddataset/spatial3ddatasetcomdef.h"
#include "spatialinterface/ifeatureselection.h"
#include "spatialinterface/ifeatureclass.h"
#include "core/core_common.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{

				/// <summary>
				/// 记录选择集
				/// </summary>
				class EV_Spatial3DDataset_DLL CFeatureSelection3D : public EarthView::World::Spatial::GeoDataset::IFeatureSelection
				{
				public:		
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_fc">数据集</param>
					/// <returns></returns>	
					CFeatureSelection3D(EarthView::World::Spatial::GeoDataset::IFeatureClass *ref_fc);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					virtual ~CFeatureSelection3D();
				public:
					/// <summary>
					/// 返回构造中传入的FeatureClass
					/// </summary>
					EarthView::World::Spatial::GeoDataset::IFeatureClass* getFeatureClass();
					/// <summary>
					/// 获得选择集中的记录数
					/// </summary>
					virtual ev_uint32 getCount() const;
					/// <summary>
					/// 获得选择集中指定索引的记录ID
					/// </summary>
					/// <param name="index">索引</param>
					virtual ev_uint32 getID(ev_uint32 index) const;
					/// <summary>
					/// 获得选择集中的记录的所有ID
					/// </summary>
					virtual ev_uint32 getIDs(ev_uint32 * ids) const;
					/// <summary>
					/// 找到选择集中的指定ID记录的索引
					/// </summary>
					/// <param name="id">记录的ID</param>
					virtual ev_int32 findID(ev_uint32 id) const;
					/// <summary>
					/// 查询选择集
					/// </summary>
					/// <param name="filter">筛选器</param>
					/// <returns>选择集迭代器指针</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter) const;
					/// <summary>
					/// 查询选择集
					/// </summary>
					/// <param name="filter">筛选器</param>
					/// <returns>子选择集</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter) const;
					/// <summary>
					/// 添加记录ID
					/// </summary>
					virtual ev_bool addID(ev_uint32 id);

					/// <summary>
					/// 添加模型ID和子组件ID
					/// </summary>
					/// <param name="id">模型ID</param>
					/// <param name="subIndexs">子部件的索引集合，顺序依次为submeshIndex,instanceIndex,segmentIndex,</param>
					/// <returns>是否添加成功</returns>
					ev_bool addSubIndexs(ev_uint32 id, const EarthView::World::Core::Int3Vector& subIndexs);

					/// <summary>
					/// 通过模型ID获取子部件索引集合，顺序依次为submeshIndex,instanceIndex,segmentIndex
					/// </summary>
					/// <param name="id">模型ID</param>					
					/// <returns>子部件的索引集合</returns>
					const EarthView::World::Core::Int3Vector& getSubIndexs(ev_uint32 id)const;

					/// <summary>
					/// 添加LT_MeshXLayer,LT_MeshXGLayer,,LT_SERVER_MeshXGLayer图层模型ID和子组件ID
					/// </summary>
					/// <param name="id">模型ID</param>
					/// <param name="subIndexs">子部件的索引集合，顺序依次为submeshIndex,instanceIndex,segmentIndex,objectHandle</param>
					/// <returns>是否添加成功</returns>
					ev_bool addMeshXSubIndexs(ev_uint32 id, const EarthView::World::Core::IntVector& subIndexs);

					/// <summary>
					/// 通过模型ID获取LT_MeshXLayer,LT_MeshXGLayer,,LT_SERVER_MeshXGLayer图层模型子部件索引集合
					/// </summary>
					/// <param name="id">模型ID</param>					
					/// <returns>子部件的索引集合，顺序依次为submeshIndex,instanceIndex,segmentIndex,objectHandle</returns>
					const EarthView::World::Core::IntVector& getMeshXSubIndexs(ev_uint32 id)const;

					/// <summary>
					/// 批量添加记录id
					/// </summary>
					/// <param name="id">id数组指针</param>
					/// <param name="size">数组大小</param>
					/// <returns>成功添加的个数</returns>
					virtual ev_uint32 addIDs(ev_uint32 * id,ev_uint32 size);

					/// <summary>
					/// 移除指定索引出的指定个数的ID
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <param name="size">指定大小</param>
					/// <returns>成功移除数目</returns>
					virtual ev_uint32 remove(ev_uint32 index,ev_uint32 size);
					/// <summary>
					/// 清除选择集
					/// </summary>
					/// <returns>成功清除的个数</returns>
					virtual ev_uint32 clear();
					/// <summary>
					/// 求与另一个选择集的交集
					/// </summary>
					/// <param name="set">选择集</param>
					virtual ev_void intersect(const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set);
					/// <summary>
					/// 求与另一个选择集的补集
					/// </summary>
					/// <param name="set">选择集</param>
					virtual ev_void difference(const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set);
					/// <summary>
					/// 追加选择集
					/// </summary>
					/// <param name="set">选择集</param>		
					virtual ev_void append(const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set);
					/// <summary>
					/// 读取数据流
					/// </summary>
					/// <param name="stream">数据流</param>
					ev_void fromStream(EarthView::World::Core::CDataStream &stream);
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>	
					CFeatureSelection3D(EarthView::World::Core::CNameValuePairList *pList);
				protected:
					
					EVString getRestrictionString() const;
				private:
					CFeatureSelection3D(CFeatureSelection3D & obj);
					
				private:

					mutable vector<ev_uint32> m_ids;
					//用于存主键ID和子部件ID
					map<ev_uint32,EarthView::World::Core::Int3Vector> mSubIndexMap;
					map<ev_uint32,EarthView::World::Core::IntVector> mMeshXSubIndexMap;
					EarthView::World::Spatial::GeoDataset::IFeatureClass *m_pFC;
				};



			}}}} //End of namespaces

#endif  //_CFEATURE_SELECTION_H_H_
