#ifndef EARTHVIEW_WORLD_GEOMETRY3D_VISIBLEOBJECT_H
#define EARTHVIEW_WORLD_GEOMETRY3D_VISIBLEOBJECT_H

#include "geometry3d_config.h"
#include "core/memoryallocatedobject.h"
#include "core/sharedptr.h"
#include "core/mutex.h"
#include "mathengine/matrix4.h"
#include "geometry3d/featureuserdata.h"

namespace EarthView{
	namespace World{
		namespace Graphic
		{
			class CNode;
		}
		namespace Spatial3D{
			namespace Atlas{
				class IGlobeLayer;
			}
		}
		namespace Spatial{
			namespace GeoDataset{
				class IFeature;
				class IDataset;
			}
		}
	}
}


namespace EarthView{
	namespace World{
		namespace Geometry3D{

			class CVisibleObject;
			class EV_GEOMETRY3D_DLL CVisibleObjectListener : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CVisibleObjectListener(_in EarthView::World::Core::CNameValuePairList *pList){}
			public:
				CVisibleObjectListener(){}

				virtual ~CVisibleObjectListener(){}

				/// <summary>
				/// 通知加载资源完成
				/// </summary>
				/// <returns></returns>
				virtual void notifyLoaded(CVisibleObject* pObj){}

				/// <summary>
				/// 通知卸载资源完成
				/// </summary>
				/// <returns></returns>
				virtual void notifyUnloaded(CVisibleObject* pObj){}

				/// <summary>
				/// 通知挂接完成
				/// </summary>
				/// <returns></returns>
				virtual void notifyAttachedToNode(CVisibleObject* pObj,EarthView::World::Graphic::CNode* parentNode){}

				/// <summary>
				/// 通知反挂接完成
				/// </summary>
				/// <returns></returns>
				virtual void notifyDetachedFromNode(CVisibleObject* pObj,EarthView::World::Graphic::CNode* parentNode){}

				/// <summary>
				/// 通知挂接完成
				/// </summary>
				/// <returns></returns>
				virtual void notifyAttachedToScene(CVisibleObject* pObj){}

				/// <summary>
				/// 通知反挂接完成
				/// </summary>
				/// <returns></returns>
				virtual void notifyDetachedFromScene(CVisibleObject* pObj){}				

				/// <summary>
				/// 通知即将销毁
				/// </summary>
				/// <returns></returns>
				virtual void notifyDestroyed(CVisibleObject* pObj){}
			};

			/// <summary>
			/// 场景中的可见对象抽象基类
			/// </summary>
			class EV_GEOMETRY3D_DLL CVisibleObject : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CVisibleObject(_in EarthView::World::Core::CNameValuePairList *pList){}

			private:
				typedef set<CVisibleObjectListener*> ListenerVec;
				ListenerVec mListenerVec;
				EarthView::World::Core::CRecursiveMutex mAsynMutex;
			protected:
				EarthView::World::Graphic::CNode* mpWorldNode;
			protected:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>

				CVisibleObject();

			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>

				virtual ~CVisibleObject();

				/// <summary>
				///  获取节点
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual EarthView::World::Graphic::CNode* getNode();

				/// <summary>
				///  是否完成加载，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool isLoaded();

				/// <summary>
				///  是否完成挂接，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool isAttached();

				/// <summary>
				///  加载资源，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool load();

				/// <summary>
				///  卸载模型资源，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool unload();


				/// <summary>
				///  挂接渲染，需要重写
				/// <param name="n">将要挂接的场景节点</param>
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool attachToNode(EarthView::World::Graphic::CNode* n);

				/// <summary>
				///  反挂接，需要重写
				/// </summary>
				/// <returns>成功返回被反挂接的父节点，失败返回NULL</returns>
				virtual EarthView::World::Graphic::CNode* detachFromNode();

				/// <summary>
				///  直接挂到场景，******选择重写******
				/// <param name="n">instance直接挂到场景</param>
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool attachToScene();

				/// <summary>
				///  从场景反挂接，******选择重写******
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool detachFromScene();

				/// <summary>
				///  异步，加载资源(不需要重写)
				/// </summary>
				/// <returns></returns>
				void asynLoad();

				/// <summary>
				///  异步，卸载模型资源(不需要重写)
				/// </summary>
				/// <returns></returns>
				void asynUnload();

				/// <summary>
				///  异步，挂接节点(不需要重写)
				/// </summary>
				/// <returns></returns>
				void asynAttachToNode(EarthView::World::Graphic::CNode* n);

				/// <summary>
				///  异步，反挂接节点(不需要重写)
				/// </summary>
				/// <returns></returns>
				void  asynDetachFromNode();

				/// <summary>
				///  异步，挂接到场景(不需要重写)
				/// </summary>
				/// <returns></returns>
				void asynAttachToScene();

				/// <summary>
				///  异步，从场景反挂接(不需要重写)
				/// </summary>
				/// <returns></returns>
				void asynDetachFromScene();

				/// <summary>
				///  释放对象内存(不需要重写)
				/// </summary>
				/// <returns></returns>
				void asynRelease();

				/// <summary>
				///  强行丢弃之前的异步操作(不需要重写)
				/// </summary>
				/// <returns>t</returns>
				void asynAbort();
				/// <summary>
				///  同步强行丢弃之前的异步操作，等待对应的请求处理完毕(不需要重写)
				/// </summary>
				/// <returns>t</returns>
				void syncAbort();
				/// <summary>
				///  异步操作锁,加锁
				/// </summary>
				/// <returns></returns>
				void lockAsynOperation();

				/// <summary>
				///  异步操作锁，解锁
				/// </summary>
				/// <returns></returns>
				void unlockAsynOperation();

				/// <summary>
				///  添加监听器
				/// </summary>
				/// <returns></returns>
				void addListener(CVisibleObjectListener* listener);

				/// <summary>
				///  移除监听器
				/// </summary>
				/// <returns>true成功，false失败</returns>
				void removeListener(CVisibleObjectListener* listener);

				/// <summary>
				///  获取监听器个数
				/// </summary>
				/// <returns>返回监听器个数</returns>
				ev_uint32 getNumListener();

				/// <summary>
				///  获取监听器
				/// </summary>
				/// <returns>true成功，false失败</returns>
				CVisibleObjectListener* getListener(ev_uint32 index);
				/// <summary>
				/// 设置用户数据
				/// </summary>
				/// <param name="userData">用户数据</param>
				/// <returns></returns>
				virtual ev_void setUserData(EarthView::World::Spatial3D::CFeatureUserData& userData);

				virtual ev_void setSelectable(ev_bool selectable);
				virtual ev_bool getSelectable();

				virtual ev_bool update();
ev_private:
				/// <summary>
				///  通知监听器
				/// </summary>
				/// <returns>true成功，false失败</returns>
				void notifyLoaded();
				void notifyUnloaded();
				void notifyAttachedToNode(EarthView::World::Graphic::CNode* parentNode);
				void notifyDetachedFromNode(EarthView::World::Graphic::CNode* parentNode);
				void notifyAttachedToScene();
				void notifyDetachedFromScene();				
				void notifyDestroyed();

			public:
				/// <summary>
				/// 获取可见对象所在图层
				/// </summary>
				/// <returns>图层对象</returns>
				virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer();


				/// <summary>
				/// 获取可见对象所在数据集
				/// </summary>
				/// <returns>数据集对象</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();


				/// <summary>
				/// 获取可见对象id
				/// </summary>
				/// <returns>id</returns>
				virtual ev_uint32 getID();

				/// <summary>
				/// 获取可见对象名称
				/// </summary>
				/// <returns>名称</returns>
				virtual EVString getName();


				/// <summary>
				/// 设置可见对象矩阵
				/// </summary>
				/// <param name="m">矩阵4元数</param>
				/// <returns></returns>
				virtual void setMatrix(const EarthView::World::Spatial::Math::CMatrix4& m);

				/// <summary>
				/// 获取可见对象矩阵
				/// </summary>
				/// <returns>矩阵4元数</returns>
				virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix();

				/// <summary>
				/// 设置可见对象位置信息
				/// </summary>
				/// <param name="latitude">高度</param>
				/// <param name="longitude">经度</param>
				/// <param name="altitude">纬度</param>
				/// <param name="scale">缩放</param>
				/// <param name="qua">旋转</param>
				/// <returns></returns>
				virtual void setPosition(ev_real64 latitude, ev_real64 longitude, ev_real64 altitude, const EarthView::World::Spatial::Math::CVector3& scale, const EarthView::World::Spatial::Math::CQuaternion& qua);

				/// <summary>
				/// 获取可见对象位置信息
				/// </summary>
				/// <param name="latitude">高度</param>
				/// <param name="longitude">经度</param>
				/// <param name="altitude">纬度</param>
				/// <param name="scale">缩放</param>
				/// <param name="qua">旋转</param>
				/// <returns></returns>
				virtual void getPosition(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CQuaternion& qua);

			};

			/// <summary>
			/// 场景中可见对象抽象基类的智能指针
			/// </summary>
			class EV_GEOMETRY3D_DLL CVisibleObjectPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Geometry3D::CVisibleObject>
			{
ev_private:
				CVisibleObjectPtr(_in EarthView::World::Core::CNameValuePairList *pList): EarthView::World::Core::CSharedPtr<CVisibleObject>(
					pList && pList->Exist("rep") ? (EarthView::World::Geometry3D::CVisibleObject *)pList->GetAt("rep") : (EarthView::World::Geometry3D::CVisibleObject *) NULL
					, pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
				{
					if(pList && pList->Exist("r"))
					{
						EarthView::World::Core::CSharedPtr<EarthView::World::Geometry3D::CVisibleObject> r = *(EarthView::World::Core::CSharedPtr<EarthView::World::Geometry3D::CVisibleObject>*)pList->GetAt("r");
						EV_SET_AUTO_SHARED_MUTEX_NULL
							EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
						{
							EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
								EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
								pRep = r.pRep;
							pUseCount = r.pUseCount;
							useFreeMethod = r.useFreeMethod;
							/// Handle zero pointer gracefully to manage STL containers
							if(pUseCount)
							{
								++(*pUseCount);
							}
						}
					}
				}
			public:
				CVisibleObjectPtr() : EarthView::World::Core::CSharedPtr<CVisibleObject>() {}
				explicit CVisibleObjectPtr(CVisibleObject *rep) : EarthView::World::Core::CSharedPtr<CVisibleObject>(rep) {}
				explicit CVisibleObjectPtr(CVisibleObject *rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<CVisibleObject>(rep, inFreeMethod) {}
				CVisibleObjectPtr(const CVisibleObjectPtr &r) : EarthView::World::Core::CSharedPtr<CVisibleObject>(r) {}

				EarthView::World::Geometry3D::CVisibleObject *get() const
				{
					return EarthView::World::Core::CSharedPtr<EarthView::World::Geometry3D::CVisibleObject>::get();
				}
			};

			/// <summary>
			/// 场景中可见对象的集合
			/// </summary>
			class  EV_GEOMETRY3D_DLL VisibleObjects : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				typedef list<EarthView::World::Geometry3D::CVisibleObjectPtr> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">迭代器</param>
				/// <param name="t">Handle标识</param>
				/// <returns>插入后的键值对</returns>
				iterator insert(_in iterator pos, _in EarthView::World::Geometry3D::CVisibleObjectPtr const &t);

			private:
				InternalList mList;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				VisibleObjects(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				VisibleObjects();
				/// <summary>
				/// 在容器末尾添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void push_back(_in EarthView::World::Geometry3D::CVisibleObjectPtr const &t);

				/// <summary>
				/// 删除最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();

				/// <summary>
				/// 返回第一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>第一个元素值</returns>
				EarthView::World::Geometry3D::CVisibleObjectPtr& front();

				/// <summary>
				/// 返回最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>最后元素值</returns>
				EarthView::World::Geometry3D::CVisibleObjectPtr& back();

				/// <summary>
				/// 返回中间某元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>元素值</returns>
				EarthView::World::Geometry3D::CVisibleObjectPtr& at(_in ev_uint32 pos);

				/// <summary>
				/// 插入元素
				/// </summary>
				/// <param name="pos">插入位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void insert(_in ev_uint32 pos, _in EarthView::World::Geometry3D::CVisibleObjectPtr const &t);

				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>为空返回true，否则false</returns>
				ev_bool empty() const;

				/// <summary>
				/// 返回容器中元素数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器中元素数量大小</returns>
				ev_size_t size() const;

				/// <summary>
				/// 改变容器大小
				/// </summary>
				/// <param name="newSize">容器大小</param>
				/// <returns></returns>
				void resize(_in ev_size_t newSize);

				/// <summary>
				/// 清空容器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();

			};

			class EV_GEOMETRY3D_DLL VisibleObjectsVector : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				typedef vector<EarthView::World::Geometry3D::VisibleObjects*> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">迭代器</param>
				/// <param name="t">Handle标识</param>
				/// <returns>插入后的键值对</returns>
				iterator insert(_in iterator pos, _in EarthView::World::Geometry3D::VisibleObjects* const &t);

			private:
				InternalList mList;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				VisibleObjectsVector(_in EarthView::World::Core::CNameValuePairList *pList){}
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				VisibleObjectsVector();

				/// <summary>
				/// 在容器末尾添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void push_back(_in EarthView::World::Geometry3D::VisibleObjects* const &t);

				/// <summary>
				/// 删除最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();

				/// <summary>
				/// 返回第一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>第一个元素值</returns>
				EarthView::World::Geometry3D::VisibleObjects*& front();

				/// <summary>
				/// 返回最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>最后元素值</returns>
				EarthView::World::Geometry3D::VisibleObjects*& back();

				/// <summary>
				/// 返回中间某元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>元素值</returns>
				EarthView::World::Geometry3D::VisibleObjects*& at(_in ev_uint32 pos);

				/// <summary>
				/// 返回中间某元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>元素值</returns>
				EarthView::World::Geometry3D::VisibleObjects* const &at(_in ev_uint32 pos) const;

				/// <summary>
				/// 插入元素
				/// </summary>
				/// <param name="pos">插入位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void insert(_in ev_uint32 pos, _in EarthView::World::Geometry3D::VisibleObjects* const &t);

				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>为空返回true，否则false</returns>
				ev_bool empty() const;

				/// <summary>
				/// 返回容器中元素数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器中元素数量大小</returns>
				ev_size_t size() const;

				/// <summary>
				/// 改变容器大小
				/// </summary>
				/// <param name="newSize">容器大小</param>
				/// <returns></returns>
				void resize(_in ev_size_t newSize);

				/// <summary>
				/// 清空容器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();

				void reserve(ev_size_t count);
			};



			/// <summary>
			/// 可视对象容器类
			/// </summary>
			class EV_GEOMETRY3D_DLL VisibleObjectPtrVector:public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				VisibleObjectPtrVector(_in EarthView::World::Core::CNameValuePairList *pList);

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				VisibleObjectPtrVector();

ev_private:
				typedef vector<EarthView::World::Geometry3D::CVisibleObjectPtr> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				///RESERVE_CONTAINER_FUNCTION(mList); //保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				RESERVE_CONTAINER_FUNCTION_VECTOR(mList);

			private:
				InternalList mList;
			public:
				/// <summary>
				/// 为当前容器添加一个可视对象
				/// </summary>
				/// <param name="t">可视对象</param>
				/// <returns></returns>
				void push_back(EarthView::World::Geometry3D::CVisibleObjectPtr const &t);

				/// <summary>
				/// 删除最后一个数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();

				/// <summary>
				/// 返回容器中第一个元素的引用
				/// </summary>
				/// <param name=""></param>
				/// <returns>可视对象的引用</returns>
				EarthView::World::Geometry3D::CVisibleObjectPtr& front();

				/// <summary>
				/// 传回容器中最后一个可视对象,不检查这个可视对象是否存在
				/// </summary>
				/// <param name=""></param>
				/// <returns>可视对象的引用</returns>
				EarthView::World::Geometry3D::CVisibleObjectPtr& back();

				/// <summary>
				/// 在pos位置插入一个可视对象
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="t">可视对象</param>
				/// <returns></returns>
				void insert(ev_uint32 pos, EarthView::World::Geometry3D::CVisibleObjectPtr const &t);

				/// <summary>
				/// 删除pos位置的数据
				/// </summary>
				/// <param name="pos">位置</param>
				/// <returns></returns>
				void remove(ev_size_t pos);

				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>
				ev_bool empty() const;

				/// <summary>
				/// 返回容器中指定位置的一个引用
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>指定位置的一个可视对象的引用 </returns>
				EarthView::World::Geometry3D::CVisibleObjectPtr& operator[](ev_size_t n);

				/// <summary>
				/// 返回容器中指定位置的一个引用
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>指定位置的一个可视对象的引用常量 </returns>
				EarthView::World::Geometry3D::CVisibleObjectPtr const &operator[](ev_size_t n) const;

				/// <summary>
				/// 返回容器中指定位置的一个引用
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>指定位置的一个可视对象的引用 </returns>
				EarthView::World::Geometry3D::CVisibleObjectPtr& at(ev_size_t n);

				/// <summary>
				/// 返回容器中指定位置的一个引用
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>指定位置的一个可视对象的引用常量 </returns>
				EarthView::World::Geometry3D::CVisibleObjectPtr const &at(ev_size_t n) const;

				/// <summary>
				/// 返回容器中数据个数
				/// </summary>
				/// <param name=""></param>
				/// <returns>数据个数 </returns>
				ev_size_t size() const;

				/// <summary>
				/// 重新指定容器的容量
				/// </summary>
				/// <param name="newSize">容量大小</param>
				/// <returns></returns>
				void resize(ev_size_t newSize);

				/// <summary>
				/// 设置容器预留容量
				/// </summary>
				/// <param name="count">容量大小</param>
				/// <returns></returns>
				void reserve(ev_size_t count);

				/// <summary>
				/// 移除容器中所有的数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();
			};


			class EV_GEOMETRY3D_DLL CVisibleobjectVector : public EarthView::World::Core::CBaseObject
			{
ev_private:
				typedef vector<EarthView::World::Geometry3D::CVisibleObject*> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">位置迭代器</param>
				/// <param name="t">元素值</param>
				/// <returns>插入元素后元素迭代器</returns>
				CVisibleobjectVector::iterator insert(_in EarthView::World::Geometry3D::CVisibleobjectVector::iterator pos, _in EarthView::World::Geometry3D::CVisibleObject* const & ref_t);
			private:
				InternalList mList;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CVisibleobjectVector(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CVisibleobjectVector();
				/// <summary>
				/// 在容器最后添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				ev_void push_back(_in EarthView::World::Geometry3D::CVisibleObject* const &ref_t);
				/// <summary>
				/// 删除容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void pop_back();
				/// <summary>
				/// 返回容器首个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器首个元素</returns>
				EarthView::World::Geometry3D::CVisibleObject*& front();
				/// <summary>
				/// 返回容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器最后元素</returns>
				EarthView::World::Geometry3D::CVisibleObject*& back();
				/// <summary>
				/// 容器中间位置插入元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				ev_void insert(_in ev_uint32 pos, _in EarthView::World::Geometry3D::CVisibleObject* const &ref_t);
				/// <summary>
				/// 删除容器中间位置元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <returns></returns>
				ev_void remove(_in ev_size_t pos);
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
				EarthView::World::Geometry3D::CVisibleObject*& operator[](_in ev_size_t n);
				/// <summary>
				/// 重载[]操作符
				/// </summary>
				/// <param name="n">下标位置</param>
				/// <returns>返回下标对应的值</returns>
				EarthView::World::Geometry3D::CVisibleObject*const &operator[](_in ev_size_t n) const;
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				EarthView::World::Geometry3D::CVisibleObject*& at(_in ev_size_t n);
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				EarthView::World::Geometry3D::CVisibleObject*const &at(_in ev_size_t n) const;
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
				ev_void resize(_in ev_size_t newSize);
				/// <summary>
				/// 改变容器中最小的元素容纳数量
				/// </summary>
				/// <param name="count">最小的元素容纳数量</param>
				/// <returns></returns>
				ev_void reserve(_in ev_size_t count);
				/// <summary>
				/// 清空所有元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void clear();
			};

		}//end namespace
	}
}
#endif
