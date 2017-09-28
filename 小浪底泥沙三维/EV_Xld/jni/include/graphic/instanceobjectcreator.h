#ifndef __InstanceObjectCreator_H__
#define __InstanceObjectCreator_H__
#pragma once

#include "graphic_config.h"
#include "node.h"
#include "mesh.h"
#include "graphic/instancemanager.h"

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CInstancedEntity;
			class CNode;
			class CSceneManager;
			class CInstanceObjectCreator;

			class EV_GRAPHIC_DLL CInstanceObject : public EarthView::World::Core::CAllocatedObject
			{
			public:
				CInstanceObject() : mNode(NULL),mCreator(NULL){}
ev_private:
				CInstanceObject(EarthView::World::Core::CNameValuePairList* pList) : mNode(NULL) ,mCreator(NULL) {}
			private:
				typedef vector<EarthView::World::Graphic::CInstancedEntity*> Entities;

			public:
				/// <summary>
				/// 获得InstanceEntity的数量				
				/// <param name=""></param>				
				/// <returns></returns>
				ev_uint16 getNumInstanceEntities()const;

				/// <summary>
				/// 获得指定序号的InstanceEntity				
				/// <param name=""></param>				
				/// <returns></returns>
				EarthView::World::Graphic::CInstancedEntity* getInstancedEntity(ev_uint16 index)const;

				/// <summary>
				/// 挂接到节点				
				/// <param name=""></param>				
				/// <returns></returns>
				ev_bool attachToNode(EarthView::World::Graphic::CNode* ref_node);

				/// <summary>
				/// 从节点上反挂接				
				/// <param name=""></param>				
				/// <returns></returns>
				EarthView::World::Graphic::CNode* detachFromNode();

				/// <summary>
				/// 获取节点				
				/// <param name=""></param>				
				/// <returns></returns>
				EarthView::World::Graphic::CNode* getParentNode()const{return mNode;}

				/// <summary>
				/// 获取creator				
				/// <param name=""></param>				
				/// <returns></returns>
				EarthView::World::Graphic::CInstanceObjectCreator* getCreator()const{return mCreator;}

				/// <summary>
				/// 设置是否被选中				
				/// <param name=""></param>				
				/// <returns></returns>
				ev_void setSelected(ev_bool selected);

				/// <summary>
				/// 获取是否被选中				
				/// <param name=""></param>				
				/// <returns></returns>
				ev_bool getSelected()const;

			protected:
				ev_void keepOwnership();

			private:
				Entities mEntities;
				EarthView::World::Graphic::CNode* mNode;
				EarthView::World::Graphic::CInstanceObjectCreator* mCreator;

				friend class CInstanceObjectCreator;
			};

			class EV_GRAPHIC_DLL CInstanceObjectCreator : public EarthView::World::Core::CAllocatedObject
			{
			public:
				CInstanceObjectCreator(EarthView::World::Graphic::CMeshPtr mesh,EarthView::World::Graphic::CSceneManager* ref_sceneMgr,ev_uint32 maxInstancesPerBatch);
				virtual ~CInstanceObjectCreator();
ev_private:
				CInstanceObjectCreator(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 创建对象				
				/// <param name=""></param>				
				/// <returns></returns>
				EarthView::World::Graphic::CInstanceObject* createInstance();

				/// <summary>
				/// 销毁对象				
				/// <param name=""></param>				
				/// <returns></returns>
				ev_bool destroyInstance(EarthView::World::Graphic::CInstanceObject* obj);

				/// <summary>
				/// 销毁全部对象				
				/// <param name=""></param>				
				/// <returns></returns>
				ev_void destroyAllInstances();

				/// <summary>
				/// 获取创建的Instance的数目
				/// <returns>创建的Instance的数目</returns>
				/// </summary>
				ev_uint32 getNumInstanceObjects() const;

				/// <summary>
				/// 获取创建的InstanceBatch的数目
				/// <param name="submeshIndex">submesh序号</param>			
				/// <returns>创建的InstanceBatch的数目</returns>
				/// </summary>
				ev_uint32 getNumInstanceBatches(ev_uint16 submeshIndex) const;

				/// <summary>
				/// 获取创建的InstanceBatch
				/// <param name="submeshIndex">SubMesh序号</param>		
				/// <param name="instanceBatchIndex">InstanceBatch序号</param>	
				/// <returns>InstanceBatch对象</returns>
				/// </summary>
				EarthView::World::Graphic::CInstanceBatch* getInstanceBatch(ev_uint16 submeshIndex,ev_uint32 instanceBatchIndex)const;

				ev_void setProjMatrixOffset(Real val);
				void addListener(EarthView::World::Graphic::CInstanceManager::CInstanceManagerListener *ref_s);
				void removeListener(EarthView::World::Graphic::CInstanceManager::CInstanceManagerListener *s);
				ev_void setAsyncUpdateBuffer(ev_bool async);

			protected:
				ev_void init(EarthView::World::Graphic::CMeshPtr mesh,EarthView::World::Graphic::CSceneManager* sceneMgr,ev_uint32 maxInstancesPerBatch);
				ev_void release();

			private:
				typedef map<ev_uint16,CInstanceManager*> ManagerMap;
				ManagerMap mMap;

				typedef set<EarthView::World::Graphic::CInstanceObject*> Objects;
				Objects mObjects;

				Real mProjMatrixOffset;
			};

			///typedef vector<CInstanceObject*> InstanceObjectVec;
			class EV_GRAPHIC_DLL InstanceObjectVec : public EarthView::World::Core::CBaseObject
			{
ev_private:
				typedef vector<CInstanceObject*> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION_VECTOR(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
			private:
				InternalList mList;
ev_private:				
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				InstanceObjectVec(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				InstanceObjectVec();
				/// <summary>
				/// 在容器最后添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void push_back( _in  CInstanceObject *const &ref_t);
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
				CInstanceObject*& front();
				/// <summary>
				/// 返回容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器最后元素</returns>
				CInstanceObject*& back();
				/// <summary>
				/// 容器中间位置插入元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void insert(_in ev_uint32 pos, _in CInstanceObject *const &ref_t);
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
				CInstanceObject*& operator[](_in ev_size_t n)
				{
					reference l = mList[n];
					return l;
				}
				/// <summary>
				/// 重载[]操作符
				/// </summary>
				/// <param name="n">下标位置</param>
				/// <returns>返回下标对应的值</returns>
				CInstanceObject *const &operator[](_in ev_size_t n) const
				{
					const_reference l =  mList[n];
					return l;
				}
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				CInstanceObject*& at(_in ev_size_t n)
				{
					reference l = mList[n];
					return l;
				}
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				CInstanceObject *const &at(_in ev_size_t n) const
				{
					const_reference l =  mList[n];
					return l;
				}
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

			///typedef map<EVString,InstanceObjectVec> InstanceObjectVecMap;
			class EV_GRAPHIC_DLL InstanceObjectVecMap : public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				InstanceObjectVecMap(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				InstanceObjectVecMap();
				/// <summary>
				/// 
				/// </summary>
				/// <param name="key">键</param>
				/// <param name="val">值</param>
				/// <returns>成功增加true，否则false</returns>
				ev_bool push( _in const EVString &key, _in const InstanceObjectVec &val);
				/// <summary>
				/// 判断元素是否存在
				/// </summary>
				/// <param name="key">键</param>
				/// <returns>存在true，否则false</returns>
				ev_bool exist( _in const EVString &key);
				/// <summary>
				/// 重载[]操作符
				/// </summary>
				/// <param name="key">键</param>
				/// <returns>返回键对应的值</returns>
				InstanceObjectVec &operator[]( _in const EVString &key);
				/// <summary>
				/// 获得键对应的值
				/// </summary>
				/// <param name="key">键</param>
				/// <returns>返回键对应的值</returns>
				InstanceObjectVec &get( _in const EVString &key);
				/// <summary>
				/// 删除键对应的键值对
				/// </summary>
				/// <param name="key">键</param>
				/// <returns></returns>
				void erase( _in const EVString &key);
				/// <summary>
				/// 返回集合的大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>集合的大小</returns>
				ev_size_t size() const;
				/// <summary>
				/// 清空集合
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();
				/// <summary>
				/// 判断集合是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>集合为空返回true，否则false</returns>
				ev_bool empty() const;
ev_private:
				typedef map<EVString,InstanceObjectVec> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::mapped_type mapped_type;
				typedef InternalList::key_type key_type;
				typedef InternalList::value_type value_type;
				typedef pair<InternalList::iterator, bool> _Pairib;
				RESERVE_CONTAINER_FUNCTION_MAP(mList);			/// 保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="val">值</param>
				/// <returns>插入后的键值对</returns>
				_Pairib insert( _in const value_type &val);
				/// <summary>
				/// 查找元素
				/// </summary>
				/// <param name="key">键</param>
				/// <returns>查找后返回对应迭代器</returns>
				iterator find( _in const EVString &key);
				const_iterator find( _in const EVString &key) const;
			private:
				InternalList mList;
			};

			class EV_GRAPHIC_DLL CInstanceObjectMap : public EarthView::World::Core::CBaseObject
			{
ev_private:
				CInstanceObjectMap(_in EarthView::World::Core::CNameValuePairList *pList);

			public:
				CInstanceObjectMap();
				ev_bool push(const EVString &key, EarthView::World::Graphic::CInstanceObject *const &ref_val);
				ev_bool exist(const EVString &key) const;
				EarthView::World::Graphic::CInstanceObject*& operator[](const EVString &key);
				EarthView::World::Graphic::CInstanceObject*& get(const EVString &key);
				void erase(const EVString &key);
				ev_size_t size() const;
				void clear();
				ev_bool empty() const;

ev_private:
				typedef std::map<EVString, EarthView::World::Graphic::CInstanceObject*> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::mapped_type mapped_type;
				typedef InternalList::key_type key_type;
				typedef InternalList::value_type value_type;
				typedef pair<InternalList::iterator, bool> _Pairib;
				RESERVE_CONTAINER_FUNCTION_MAP(mList);
				_Pairib insert(const value_type &val);
				iterator find(const EVString &key);
				const_iterator find(const EVString &key) const;
			private:
				InternalList mList;
			};
		}
	}
}
#endif
