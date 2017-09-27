#ifndef __DYNAMICLODSTRATEGY_H__
#define __DYNAMICLODSTRATEGY_H__

#include "industryengine/dynamicmodellibrary/dynamicmodelobject.h"
#include "spatial3dengine/globecamera.h"
#include "core/memoryallocatedobject.h"
#include "industryengine/dynamicmodellibrary/dynamicmodel_cfg.h"


namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			/// <summary>
			/// 动态目标LOD策略
			/// </summary>
			class EV_DYNAMICMODELLIBRARY_DLL CDynamicLodStrategy : public EarthView::World::Core::CAllocatedObject
			{
				
			public:
				/// <summary>
				/// 动态目标LOD策略监听
				/// </summary>
				class EV_DYNAMICMODELLIBRARY_DLL CDynamicLodStrategyListener:public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 动态目标LOD策略监听构造函数
					/// </summary>
					/// <param name="name">名称</param>
					CDynamicLodStrategyListener(const EVString& name);
					/// <summary>
					/// 动态目标LOD策略监听析构
					/// </summary>
					virtual ~CDynamicLodStrategyListener()
					{

					}
					/// <summary>
					/// 获取名称
					/// </summary>
					/// <returns>名称</returns>
					virtual EVString getName()const;
					/// <summary>
					/// 设置名称
					/// </summary>
					/// <param name="name">名称</param>
					virtual ev_void setName(const EVString& name);
					/// <summary>
					/// 刷新LOD状态之前触发
					/// </summary>
					/// <param name="lodStrategy">LOD策略</param>
					/// <param name="dynamicModelObject">动态目标对象</param>
					/// <param name="camera">相机对象</param>
					virtual ev_void beforeUpdateLodState(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* lodStrategy,EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* dynamicModelObject,_in EarthView::World::Spatial3D::CGlobeCamera* camera);
ev_private:
					/// <summary>
					/// 动态目标LOD策略监听构造函数
					/// </summary>
					/// <param name="pList">参数列表</param>
					CDynamicLodStrategyListener(_in EarthView::World::Core::CNameValuePairList* pList);
				protected:
					EVString mName;
				};
				/// <summary>
				/// 动态目标LOD策略子项目，可以动态添加该项目
				/// </summary>
				class EV_DYNAMICMODELLIBRARY_DLL CDynamicLodStrategyItem:public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 动态目标LOD策略子项目构造函数
					/// </summary>
					/// <param name="name">名称</param>
					CDynamicLodStrategyItem(const EVString& name);
					/// <summary>
					/// 动态目标LOD策略子项目析构函数
					/// </summary>
					virtual ~CDynamicLodStrategyItem()
					{}
					/// <summary>
					/// 是否通过验证
					/// </summary>
					/// <param name="lodvalue">要判断LOD的值</param>
					virtual ev_bool isPassed(const Real& lodvalue) const;
					/// <summary>
					/// 设置最大可见值
					/// </summary>
					/// <param name="maxVisibleValue">最大可见值</param>
					virtual ev_void setMaxVisibleValue(const Real& maxVisibleValue);
					/// <summary>
					/// 设置最小可见值
					/// </summary>
					/// <param name="minVisibleValue">最小可见值</param>
					virtual ev_void setMinVisibleValue(const Real& minVisibleValue); 

					/// <summary>
					/// 获取最大可见值
					/// </summary>
					/// <returns>最大可见值</returns>
					virtual Real getMaxVisibleValue() const;
					/// <summary>
					/// 获取最小可见值
					/// </summary>
					/// <returns>最小可见值</returns>
					virtual Real getMinVisibleValue() const;
					/// <summary>
					/// 获取名称
					/// </summary>
					/// <returns>名称</returns>
					EVString getName()const;
					/// <summary>
					/// 设置名称
					/// </summary>
					/// <param name="name">名称</param>
					ev_void setName(const EVString& name);
ev_private:
					/// <summary>
					/// 动态目标LOD策略子项目构造函数
					/// </summary>
					/// <param name="pList">参数列表</param>
					CDynamicLodStrategyItem(_in EarthView::World::Core::CNameValuePairList* pList);
				protected:
					EVString mName;
					Real mMaxVisibleValue;
					Real mMinVisibleValue;
				};
				/// <summary>
				/// 动态目标LOD策略子项目集合
				/// </summary>
				class EV_DYNAMICMODELLIBRARY_DLL CDynamicLodStrategyItemMap : public EarthView::World::Core::CBaseObject
				{
				public:
					/// <summary>
					///动态目标LOD策略子项目集合构造函数
					/// </summary>
					CDynamicLodStrategyItemMap() {}
					/// <summary>
					/// 压入指定键值对象
					/// </summary>
					/// <param name="key">关键字</param>
					/// <param name="ref_val">值对象,该参数对象的生命周期要保持大于本对象的生命周期</param>
					/// <returns>是否成功</returns>
					ev_bool push(const EVString &key, EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem * const &ref_val)
					{
						if(mList.find(key) == mList.end())
						{
							mList[key] = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem *)ref_val;
							return true;
						}
						else
						{
							return false;
						}
					}
					/// <summary>
					/// 获取是否存在指定键值对象
					/// </summary>
					/// <param name="key">关键字</param>
					/// <returns>是否存在指定键值对象</returns>
					ev_bool exist(const EVString &key)
					{
						return mList.find(key) != mList.end();
					}
					/// <summary>
					/// 获取指定键的值对象
					/// </summary>
					/// <param name="key">关键字</param>
					/// <returns>指定键值对象</returns>
					EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*& operator[](const EVString &key)
					{
						return get(key);
					}
					/// <summary>
					/// 获取指定键的值对象
					/// </summary>
					/// <param name="key">关键字</param>
					/// <returns>指定键值对象</returns>
					EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*& get(const EVString &key)
					{
						return mList[key];
					}
					/// <summary>
					/// 移除指定键的值对象
					/// </summary>
					/// <param name="key">关键字</param>
					void erase(const EVString &key)
					{
						if(exist(key))
							mList.erase(key);
					}
					/// <summary>
					/// 返回对象个数
					/// </summary>
					/// <returns>对象个数</returns>
					ev_size_t size() const
					{
						return mList.size();
					}
					/// <summary>
					/// 清除所有对象
					/// </summary>
					void clear()
					{
						mList.clear();
					}
					/// <summary>
					/// 获取集合是否为空
					/// </summary>
					/// <returns>是否为空</returns>
					ev_bool empty() const
					{
						return mList.empty();
					}

ev_private:
					/// <summary>
					///动态目标LOD策略子项目集合构造函数
					/// </summary>
					/// <param name="pList">参数列表</param>
					CDynamicLodStrategyItemMap(EarthView::World::Core::CNameValuePairList *pList) {}
ev_private:
					typedef map<EVString, EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem*> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::mapped_type mapped_type;
					typedef InternalList::key_type key_type;
					typedef InternalList::value_type value_type;
					typedef pair<iterator, bool> _Pairib;
					RESERVE_CONTAINER_FUNCTION_MAP(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					_Pairib insert(const value_type &val)
					{
						return mList.insert(val);
					}
					iterator find(const EVString &key)
					{
						return mList.find(key);
					}
					const_iterator find(const EVString &key) const
					{
						return mList.find(key);
					}
				private:
					InternalList mList;
				};
			public:
				/// <summary>
				/// 动态目标LOD策略构造函数
				/// </summary>
				CDynamicLodStrategy(); 
				/// <summary>
				/// 动态目标LOD策略析构函数
				/// </summary>
				virtual ~CDynamicLodStrategy(); 
				/// <summary>
				/// 判断动态目标是否通过LOD验证
				/// </summary>
				/// <param name="modelObject">动态目标</param>
				/// <param name="lodStrategyItemName">子LOD项目名称</param>
				/// <param name="camera">相机</param>
				/// <returns>是否通过验证</returns>
				virtual ev_bool isPassed(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject,const EVString& lodStrategyItemName, EarthView::World::Spatial3D::CGlobeCamera* camera);
				/// <summary>
				/// 设置最大可见值
				/// </summary>
				/// <param name="name">lod子项名称</param>
				/// <param name="maxVisibleValue">最大可见值</param>
				virtual ev_void setMaxVisibleValue(const EVString& name,const Real& maxVisibleValue);
				/// <summary>
				/// 设置最小可见值
				/// </summary>
				/// <param name="name">lod子项名称</param>
				/// <param name="minVisibleValue">最小可见值</param>
				virtual ev_void setMinVisibleValue(const EVString& name,const Real& minVisibleValue); 
				/// <summary>
				/// 获取最大可见值
				/// </summary>
				/// <param name="name">lod子项名称</param>
				/// <returns>最大可见值</returns>
				virtual Real getMaxVisibleValue(const EVString& name) const;
				/// <summary>
				/// 获取最小可见值
				/// </summary>
				/// <param name="name">lod子项名称</param>
				/// <returns>最小可见值</returns>
				virtual Real getMinVisibleValue(const EVString& name) const;
				/// <summary>
				/// 注册子LOD项目
				/// </summary>
				/// <param name="ref_lodStrategyItem">子LOD项目,该参数对象的生命周期要保持大于本对象的生命周期</param>
				virtual ev_void registerLodStrategyItem(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem* ref_lodStrategyItem);
				/// <summary>
				/// 反注册LOD项目
				/// </summary>
				/// <param name="name">lod子项名称</param>
				virtual ev_void unregisterLodStrategyItem(const EVString& name);
				/// <summary>
				/// 获取LOD子项目列表
				/// </summary>
				/// <returns>LOD子项目列表</returns>
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap& getLodStrategyItemMap();
				/// <summary>
				/// 添加LOD策略监听
				/// </summary>
				/// <param name="ref_lodStrategyListener">LOD策略监听,该参数对象的生命周期要保持大于本对象的生命周期</param>
				virtual ev_void addLodStrategyListener(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener* ref_lodStrategyListener);
				/// <summary>
				/// 删除LOD策略监听
				/// </summary>
				/// <param name="name">lod监听名称</param>
				virtual ev_void removeLodStrategyListener(const EVString& name);
ev_private:
				/// <summary>
				/// 动态目标LOD策略构造函数
				/// </summary>
				/// <param name="pList">参数列表</param>
				CDynamicLodStrategy(_in EarthView::World::Core::CNameValuePairList* pList);
ev_internal:
				/// <summary>
				/// 计算动态目标对象当前的LOD值
				/// </summary>
				/// <param name="modelObject">动态目标对象</param>
				/// <param name="camera">相机对象</param>
				/// <returns>动态目标对象当前的LOD值</returns>
				virtual Real getLodValue(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject,EarthView::World::Spatial3D::CGlobeCamera* camera);
				/// <summary>
				/// 触发lod策略响应
				/// </summary>
				/// <param name="modelObject">动态目标对象</param>
				/// <param name="camera">相机对象</param>
				virtual ev_void fireLodStrategyListener(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject,EarthView::World::Spatial3D::CGlobeCamera* camera);

			protected:
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap mLodStrategyItemMap;
				EarthView::World::Core::CReadWriteLock mLodStrategyListenerLocker;
				std::map<EVString,EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener*> mLodStrategyListenerMap;
			};  //end class CLodStrategy


		}//end namespace 
	}//end namespace 
}

#endif

