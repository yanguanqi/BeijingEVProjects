#ifndef EARTHVIEW_WORLD_SPATIAL3D_USERTYPEMANAGER_H
#define EARTHVIEW_WORLD_SPATIAL3D_USERTYPEMANAGER_H

#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include "core/memoryallocatedobject.h"
#include "spatialinterface/ifields.h"
#include "graphic/common.h"

namespace EarthView{
	namespace World	{
		namespace Spatial{
			namespace GeoDataset{
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
				class CModelDataSource;
				class CObjectIDList;

				//数据集信息类
				class EV_Spatial3DDataset_DLL CUserTypeInfo : public EarthView::World::Core::CAllocatedObject
				{
				private:
					EVString mNodeCode;
					EVString mUserType;
					EVString mDescript;
               ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CUserTypeInfo(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					CUserTypeInfo();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					virtual ~CUserTypeInfo();

					/// <summary>
					/// 设置节点编码
					/// </summary>
					/// <param name="nodeCode">节点编码</param>
					/// <returns></returns>
					ev_void setNodeCode(EVString nodeCode);

					/// <summary>
					/// 获取节点编码
					/// </summary>
					/// <param name=""></param>
					/// <returns>节点编码</returns>
					EVString getNodeCode();

					/// <summary>
					/// 设置用户类型
					/// </summary>
					/// <param name="userType">用户类型</param>
					/// <returns></returns>
					ev_void setUserType(EVString userType);

					/// <summary>
					/// 获取用户类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>用户类型</returns>
					EVString getUserType();

					/// <summary>
					/// 设置类型描述
					/// </summary>
					/// <param name="desc">类型描述</param>
					/// <returns></returns>
					ev_void setDescript(EVString desc);

					/// <summary>
					/// 获取类型描述
					/// </summary>
					/// <param name=""></param>
					/// <returns>类型描述</returns>
					EVString getDescript();


				};

				//数据集节点树类
				class EV_Spatial3DDataset_DLL CUserTypeTree : public EarthView::World::Core::CAllocatedObject
				{
				private:
					EarthView::World::Spatial3D::Dataset::CUserTypeTree* mParentPtr;
					vector<EarthView::World::Spatial3D::Dataset::CUserTypeTree*> mChildren;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo* mTypeInfoPtr;
               ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CUserTypeTree(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					CUserTypeTree();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					~CUserTypeTree();

					/// <summary>
					/// 设置根节点
					/// </summary>
					/// <param name="parent">根节点对象</param>
					/// <returns></returns>
					ev_void setParent(EarthView::World::Spatial3D::Dataset::CUserTypeTree* ref_parent);


					/// <summary>
					/// 获取根节点
					/// </summary>
					/// <param name=""></param>
					/// <returns>根节点</returns>
					EarthView::World::Spatial3D::Dataset::CUserTypeTree* getParent();

					/// <summary>
					/// 在节点树上增加一个节点
					/// </summary>
					/// <param name="childTree">增加的节点</param>
					/// <returns></returns>
					EarthView::World::Spatial3D::Dataset::CUserTypeTree* addChild();

					/// <summary>
					/// 获取子节点数目
					/// </summary>
					/// <param name=""></param>
					/// <returns>节点数目</returns>
					ev_uint32 getChildNum();

					/// <summary>
					/// 获取子节点
					/// </summary>
					/// <param name=""></param>
					/// <returns>子节点</returns>
					EarthView::World::Spatial3D::Dataset::CUserTypeTree* getChild(ev_uint32 index);

					/// <summary>
					/// 获取节点信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>节点信息</returns>
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo* getInfo();

					/// <summary>
					/// 删除子节点
					/// </summary>
					/// <param name="Child">子节点</param>
					/// <returns></returns>
					ev_bool deleteChild(EarthView::World::Spatial3D::Dataset::CUserTypeTree* Child);

				};

				//用户类别管理记录类
				class EV_Spatial3DDataset_DLL CUserTypeInfoList : public EarthView::World::Core::CBaseObject   ///函数getChildType中的vector封装类
				{
ev_private:
					typedef vector<EarthView::World::Spatial3D::Dataset::CUserTypeInfo> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_VECTOR((*mList)); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					iterator insert(_in iterator pos , _in EarthView::World::Spatial3D::Dataset::CUserTypeInfo const &t);
				private:
					InternalList* mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CUserTypeInfoList(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CUserTypeInfoList();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CUserTypeInfoList();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void push_back(_in EarthView::World::Spatial3D::Dataset::CUserTypeInfo const &t);
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
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo &front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo &back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void insert(_in ev_uint32 pos , _in EarthView::World::Spatial3D::Dataset::CUserTypeInfo const &t);
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
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo &operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo &at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo const &at(_in ev_size_t n) const;
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


				class EV_Spatial3DDataset_DLL NodecodeAndTypeMap: public EarthView::World::Core::CBaseObject
				{
ev_private:
					NodecodeAndTypeMap(_in EarthView::World::Core::CNameValuePairList *pList)
					{
					}
				public:
					NodecodeAndTypeMap() {}

					ev_bool push(_in const EVString &key, _in EVString const &val)
					{
						if(mList.find(key) == mList.end())
						{
							mList[key] = val;
							return true;
						}
						else
						{
							return false;
						}
					}
					ev_bool exist(_in const EVString &key)
					{
						return mList.find(key) != mList.end();
					}
					EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap &operator=(_in const EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap &other)
					{
						mList = other.mList;
						return *this;
					}
					EVString &operator[]( _in const EVString &key)
					{
						return get(key);
					}
					EVString &get(_in const EVString &key)
					{
						return mList[key];
					}
					void erase(_in const EVString &key)
					{
						if(exist(key))
							mList.erase(key);
					}
					ev_size_t size() const
					{
						return mList.size();
					}
					void clear()
					{
						mList.clear();
					}
					ev_bool empty() const
					{
						return mList.empty();
					}
ev_private:
					typedef map<EVString, EVString> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::mapped_type mapped_type;
					typedef InternalList::key_type key_type;
					typedef InternalList::value_type value_type;
					typedef pair<iterator, bool> _Pairib;
					RESERVE_CONTAINER_FUNCTION_MAP(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					_Pairib insert(_in const value_type &val)
					{
						return mList.insert(val);
					}
					iterator find(_in const EVString &key)
					{
						return mList.find(key);
					}
					const_iterator find(_in const EVString &key) const
					{
						return mList.find(key);
					}
				private:
					InternalList mList;
				};

				//用户类别管理类
				class EV_Spatial3DDataset_DLL CUserTypeManager : public EarthView::World::Core::CAllocatedObject
				{
					friend class CModelDataSource;
				private:
					CModelDataSource* mpDataSource;
					EVString m_DbType;
					EarthView::World::Spatial::GeoDataset::CSqlstandardization* m_SqlStd;
                ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CUserTypeManager(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CUserTypeManager();
					virtual ~CUserTypeManager();

				public:
					/// <summary>
					/// 为用户类别树添加节点
					/// </summary>
					/// <param name="nodeCode">节点编码</param>
					/// <param name="typeInfo">节点信息</param>
					/// <returns></returns>
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo createType(const EVString& parentNodeCode, const EVString& newType, EarthView::World::Spatial::GeoDataset::IFields* pFlds);

					/// <summary>
					/// 删除用户类别树节点,只是删除当前节点，子节点不会删除（如果想删除子节点，请遍历到子节点编码，再去删除子节点）
					/// </summary>
					/// <param name="nodeCode">节点编码</param>
					/// <returns></returns>
					ev_bool deleteType(const EVString& nodeCode);

					/// <summary>
					/// 根据nodecode查询
					/// </summary>
					/// <param name="nodeCode">节点编码</param>
					/// <returns></returns>
					ev_bool queryByNodeCode(const EVString& nodeCode, _out EarthView::World::Spatial3D::Dataset::CUserTypeInfo& info);

					/// <summary>
					/// 根据分类描述查询
					/// </summary>
					/// <param name="desc">节点描述</param>
					/// <returns></returns>
					ev_bool queryByNodeDesc(const EVString& desc, _out EarthView::World::Spatial3D::Dataset::CUserTypeInfo& info);

					
					/// <summary>
					/// 根据type查询
					/// </summary>
					/// <param name="nodeCode">节点编码</param>
					/// <returns></returns>
					ev_bool queryByType(const EVString& type, _out EarthView::World::Spatial3D::Dataset::CUserTypeInfoList& infos);


					/// <summary>
					/// 获取用户类别树根节点信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>EarthView::World::Spatial3D::Dataset::CUserTypeInfo*</returns>
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo getRootType();

					/// <summary>
					/// 获取用户类别子树节点信息
					/// </summary>
					/// <param name="nodeCode">父节点编码</param>
					/// <param name="typeInfoList">子节点集信息</param>
					/// <returns></returns>
					ev_void getChildType(const EVString& nodeCode, _inout EarthView::World::Spatial3D::Dataset::CUserTypeInfoList& typeInfoList);


					/// <summary>
					/// 更新用户类别树节点描述
					/// </summary>
					/// <param name="typeInfo">节点信息</param>
					/// <returns>更新返回true</returns>
					ev_bool updateTypeDesc(const EVString& nodeCode, const EVString& desc);

					/// <summary>
					/// 获取用户类别属性结构
					/// </summary>
					/// <param name="typeInfo">节点信息</param>
					/// <returns>更新返回true</returns>
					ev_bool getTypeFilds(const EVString& nodecode, _out EarthView::World::Spatial::GeoDataset::CFields* flds);

					/// <summary>
					/// 查询类别表是否存在
					/// </summary>
					/// <param name="typeInfo">节点信息</param>
					/// <returns>更新返回true</returns>
					ev_bool isExistType( const EVString& type );

					/// <summary>
					/// 更新类别表
					/// </summary>
					/// <param name="typeName">类别表名称</param>
					/// <param name="flds">类别表字段</param>
					/// <returns></returns>
					
					ev_bool updateType(const EVString& typeName,_in EarthView::World::Spatial::GeoDataset::CFields* flds);

					/// <summary>
					/// 删除一个类别表记录
					/// </summary>
					/// <param name="typeName">类别表名称</param>
					/// <param name="meshID">meshID</param>
					/// <returns></returns>
					
					ev_bool deleteTypeField(const EVString& typeName,ev_int32 meshID);

					/// <summary>
					/// 添加一个类别表记录
					/// </summary>
					/// <param name="typeName">类别表名称</param>
					/// <param name="meshID">meshID</param>
					/// <returns></returns>
					
					ev_bool addTypeField(const EVString& typeName,ev_int32 meshID);

					/// <summary>
					/// 获取属性表表名列表
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_int32 getTypeTableName(EarthView::World::Core::StringVector& tables);

					/// <summary>
					/// 获取属性表结构
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_int32 getTableFields(const EVString& tab, _out EarthView::World::Spatial::GeoDataset::IFields* flds);

					/// <summary>
					/// 获取nodecode和type关系列表
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_int32 getNodeCodeAndTypeMap(EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap& nodecodeandtypemap);

				protected:

					ev_bool _createType(const EVString& type, const EarthView::World::Spatial::GeoDataset::IFields* flds);

					ev_bool _deleteType(const EVString& type);

					ev_bool _insertNodeCode(EarthView::World::Spatial3D::Dataset::CUserTypeInfo* info);

					ev_bool _deleteNodeCode(const EVString& nodeCode);

					ev_bool _updateDesc(const EVString& nodeCode, const EVString& desc);

					EVString _generalNodeCode(const EVString& parentNodeCode);

					ev_bool _updateType(const EVString& typeName,_in EarthView::World::Spatial::GeoDataset::CFields* flds);
				};
			}//namespace
		}
	}
}
#endif

