#ifndef EARTHVIEW_WORLD_SPATIAL3D_PROPERTYMANAGER_H
#define EARTHVIEW_WORLD_SPATIAL3D_PROPERTYMANAGER_H

#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include "spatialinterface/ifields.h"



namespace EarthView
{
    namespace World
    {
        namespace Spatial
        {
            namespace GeoDataset
            {
                class CFields;
				class CSqlstandardization;
            }
        }
    }
}

	

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{

				enum ModelPropertyType
				{
					MPT_MODELTYPE=888,
					MPT_ENTITYTYPE
				};
				
				class CModelDataSource;

				class EV_Spatial3DDataset_DLL CObjectIDList  : public EarthView::World::Core::CBaseObject   ///函数getObjectsByType中的vector封装类
				{
                ev_private:
					typedef vector<ev_uint32> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_VECTOR(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					iterator insert(_in iterator pos , _in ev_uint32 const &t);
				private:
					InternalList mList;
                ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CObjectIDList(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CObjectIDList();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void push_back(_in ev_uint32 const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					ev_uint32 &front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					ev_uint32 &back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void insert(_in ev_uint32 pos , _in ev_uint32 const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					ev_uint32 &operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					ev_uint32 const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					ev_uint32 &at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					ev_uint32 const &at(_in ev_size_t n) const;
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clear();
				};



				class EV_Spatial3DDataset_DLL CPropertyManager : public EarthView::World::Core::CAllocatedObject
				{
					friend class CModelDataSource;
					//friend class CMeshTemplateDataset;
				private:
					CModelDataSource* mpDataSource;
					//2013-5-17 xhl
					EVString m_DbType;
					EarthView::World::Spatial::GeoDataset::CSqlstandardization* m_SqlStd;



					EarthView::World::Spatial::GeoDataset::CFields* mpFields;
                
                ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CPropertyManager(_in EarthView::World::Core::CNameValuePairList *pList);
                protected:
					 CPropertyManager();
				public:
					virtual ~CPropertyManager();
                 
					/// <summary>
					/// 创建一个模板库模型类别
					/// </summary>
					/// <param name="typeName">类别名称（属性表名），不可重名</param>
					/// <param name="type">属性表的类别，主要分为“模型属性”，“实体业务属性”</param>
					/// <param name="ptFieldset">类别属性字段结构</param>
					/// <returns>ev_bool</returns>
					ev_bool createType(const EVString& typeName, EarthView::World::Spatial3D::Dataset::ModelPropertyType type, EarthView::World::Spatial::GeoDataset::IFields* ptFieldset);

					/// <summary>
					/// 更新模板库模型类别字段结构
					/// </summary>
					/// <param name="typeName">类别名称（属性表名），不可重名</param>
					/// <param name="type">属性表的类别，主要分为“模型属性”，“实体业务属性”</param>
					/// <param name="ptFieldset">类别属性字段结构</param>
					/// <returns>ev_bool</returns>
					ev_bool updateType(EVString typeName, EarthView::World::Spatial3D::Dataset::ModelPropertyType type, EarthView::World::Spatial::GeoDataset::IFields* ptFieldset);

					/// <summary>
					/// 删除模板库模型类别，对应的表被删除，模型转入“未分类属性类别”
					/// </summary>
					/// <param name="typeName">类别名称（属性表名），不可重名</param>
					/// <param name="type">属性表的类别，主要分为“模型属性”，“实体业务属性”</param>
					/// <returns>ev_bool</returns>
					ev_bool deleteType(EVString typeName, EarthView::World::Spatial3D::Dataset::ModelPropertyType type);

					ev_bool renameType(EVString& oldtypename,EVString& newtypename,EarthView::World::Spatial3D::Dataset::ModelPropertyType type);

					/// <summary>
					/// 将分类中的一个模型移动到某一个分类中
					/// </summary>
					/// <param name="id">模型id号</param>
					/// <param name="typeName">类别名称（属性表名），不可重名</param>
					/// <param name="type">属性表的类别，主要分为“模型属性”，“实体业务属性”</param>
					/// <returns>ev_bool</returns>
					ev_bool moveModelToType(ev_int32 id,EVString typeName, EarthView::World::Spatial3D::Dataset::ModelPropertyType type);
					ev_bool deleteModelID(ev_int32 id,EVString typeName, EarthView::World::Spatial3D::Dataset::ModelPropertyType type);

					/// <summary>
					/// 获取模板库模型类别列表
					/// </summary>
					/// <param name="typeName">类别名称（属性表名），不可重名</param>
					/// <param name="type">属性表的类别，主要分为“模型属性”，“实体业务属性”</param>
					/// <returns>void</returns>
					ev_void getTypeList(EarthView::World::Spatial3D::Dataset::ModelPropertyType type, _inout EarthView::World::Core::StringVector& typeNames);
					//ev_void getTypeList(EarthView::World::Spatial3D::Dataset::ModelPropertyType type, vector<EVString>& typeNames);

					/// <summary>
					/// 获取某个模型类别属性表字段结构
					/// </summary>
					/// <param name="typeName">类别名称（属性表名），不可重名</param>
					/// <param name="type">属性表的类别，主要分为“模型属性”，“实体业务属性”</param>
					/// <param name="ptFieldset">类别属性字段结构</param>
					/// <returns>void</returns>
					EarthView::World::Spatial::GeoDataset::IFields*  getFieldSet(EVString typeName, EarthView::World::Spatial3D::Dataset::ModelPropertyType type);

					ev_bool addObjectID(EVString typeName,ev_int32 id);
					ev_bool deleteObjectID(EVString typeName,ev_int32 id);

					/// <summary>
					/// 获取某个模型类别下的模型集合
					/// </summary>
					/// <param name="typeName">类别名称（属性表名），不可重名</param>
					/// <param name="type">属性表的类别，主要分为“模型属性”，“实体业务属性”</param>
					/// <param name="objectIDs">模型ID集</param>
					/// <returns>void</returns>
					//ev_void getObjectsByType(EVString typeName, EarthView::World::Spatial3D::Dataset::ModelPropertyType type,_inout vector<ev_uint32>& objectIDs);
					ev_void getObjectsByType(EVString typeName, EarthView::World::Spatial3D::Dataset::ModelPropertyType type,_inout EarthView::World::Spatial3D::Dataset::CObjectIDList& objectIDs);
				};

				

			}//namespace
		}
	}
}
#endif
