#ifndef __InstanceObjectCreator_H__
#define __InstanceObjectCreator_H__
#pragma once

#include "graphic_config.h"
#include "node.h"
#include "mesh.h"

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CInstancedEntity;
			class CInstanceManager;
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

			class EV_GRAPHIC_DLL CInstanceObjectCreator : public EarthView::World::Core::CAllocatedObject
			{
			public:
				CInstanceObjectCreator(EarthView::World::Graphic::CMeshPtr mesh,EarthView::World::Graphic::CSceneManager* ref_sceneMgr,ev_uint16 maxInstancesPerBatch);
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

			protected:
				ev_void init(EarthView::World::Graphic::CMeshPtr mesh,EarthView::World::Graphic::CSceneManager* sceneMgr,ev_uint16 maxInstancesPerBatch);
				ev_void release();

			private:
				typedef map<ev_uint16,CInstanceManager*> ManagerMap;
				ManagerMap mMap;

				typedef set<EarthView::World::Graphic::CInstanceObject*> Objects;
				Objects mObjects;
			};
		}
	}
}
#endif
