#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MODELDBINDINFO_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MODELDBINDINFO_H

#include "spatial3dengine/spatial3dengineconfig.h"
#include "core/memoryallocatedobject.h"
#include "core/stringvector.h"
#include "spatial3ddataset/mesheffectref.h"


namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CRibbonTrail;
			class CLight;
		}
		namespace Spatial3D
		{
			namespace ModelManager
			{
				class CModelBaseObject;
			}

			namespace EffectManager
			{
				class CEffect;
			}

		}
	}
}


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace ModelManager{

				class EV_Spatial3DEngine_DLL EffectObject : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					EffectObject(EarthView::World::Core::CNameValuePairList *pList)
					{
						mpEffect =NULL;
					}

				public:
					EffectObject()
					{
						mpEffect =NULL;
					}

				public:
					EarthView::World::Spatial3D::EffectManager::CEffect* mpEffect;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo mRefInfo;
				};

				class EV_Spatial3DEngine_DLL ModelObject : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					ModelObject(EarthView::World::Core::CNameValuePairList *pList)
					{
						mpModel =NULL;
					}

				public:
					ModelObject()
					{
						mpModel =NULL;
					}

				public:
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* mpModel;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo mRefInfo;
				};

				class EV_Spatial3DEngine_DLL LightObject : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					LightObject(EarthView::World::Core::CNameValuePairList *pList)
					{
						mpLight =NULL;
					}

				public:
					LightObject()
					{
						mpLight =NULL;
					}

				public:
					EarthView::World::Graphic::CLight* mpLight;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo mRefInfo;
				};

				class EV_Spatial3DEngine_DLL RibbonTrailObject : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					RibbonTrailObject(EarthView::World::Core::CNameValuePairList *pList)
					{
						mpTrail =NULL;
						mpRefInfo=NULL;
					}

				public:
					RibbonTrailObject()
					{
						mpTrail =NULL;
						mpRefInfo=NULL;
					}

				public:
					EarthView::World::Graphic::CRibbonTrail* mpTrail;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* mpRefInfo;
				};

				class EV_Spatial3DEngine_DLL RibbonTrailObjectMap : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					RibbonTrailObjectMap(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					RibbonTrailObjectMap();
					/// <summary>
					/// 增加动画集合元素
					/// </summary>
					/// <param name="key">键</param>
					/// <param name="val">值</param>
					/// <returns>成功增加true，否则false</returns>
					ev_bool push( _in const EVString &key, _in EarthView::World::Spatial3D::ModelManager::RibbonTrailObject const &val);
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
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObject& operator[]( _in const EVString &key);
					/// <summary>
					/// 获得键对应的值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>返回键对应的值</returns>
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObject& get( _in const EVString &key);
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

					EarthView::World::Core::StringVector getKeys()const;
ev_private:
					typedef map<EVString, EarthView::World::Spatial3D::ModelManager::RibbonTrailObject> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::mapped_type mapped_type;
					typedef InternalList::key_type key_type;
					typedef InternalList::value_type value_type;
					typedef pair<iterator, bool> _Pairib;
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

				class EV_Spatial3DEngine_DLL EffectObjectMap : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					EffectObjectMap(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EffectObjectMap();
					/// <summary>
					/// 增加动画集合元素
					/// </summary>
					/// <param name="key">键</param>
					/// <param name="val">值</param>
					/// <returns>成功增加true，否则false</returns>
					ev_bool push( _in const EVString &key, _in EarthView::World::Spatial3D::ModelManager::EffectObject const &val);
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
					EarthView::World::Spatial3D::ModelManager::EffectObject& operator[]( _in const EVString &key);
					/// <summary>
					/// 获得键对应的值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>返回键对应的值</returns>
					EarthView::World::Spatial3D::ModelManager::EffectObject& get( _in const EVString &key);
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

					EarthView::World::Core::StringVector getKeys()const;
ev_private:
					typedef map<EVString, EarthView::World::Spatial3D::ModelManager::EffectObject> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::mapped_type mapped_type;
					typedef InternalList::key_type key_type;
					typedef InternalList::value_type value_type;
					typedef pair<iterator, bool> _Pairib;
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

				class EV_Spatial3DEngine_DLL LightObjectMap : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					LightObjectMap(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					LightObjectMap();
					/// <summary>
					/// 增加动画集合元素
					/// </summary>
					/// <param name="key">键</param>
					/// <param name="val">值</param>
					/// <returns>成功增加true，否则false</returns>
					ev_bool push( _in const EVString &key, _in EarthView::World::Spatial3D::ModelManager::LightObject const &val);
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
					EarthView::World::Spatial3D::ModelManager::LightObject& operator[]( _in const EVString &key);
					/// <summary>
					/// 获得键对应的值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>返回键对应的值</returns>
					EarthView::World::Spatial3D::ModelManager::LightObject& get( _in const EVString &key);
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

					EarthView::World::Core::StringVector getKeys()const;
ev_private:
					typedef map<EVString, EarthView::World::Spatial3D::ModelManager::LightObject> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::mapped_type mapped_type;
					typedef InternalList::key_type key_type;
					typedef InternalList::value_type value_type;
					typedef pair<iterator, bool> _Pairib;
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

				class EV_Spatial3DEngine_DLL EffectBindedObjectMap : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					EffectBindedObjectMap(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EffectBindedObjectMap();
					/// <summary>
					/// 增加动画集合元素
					/// </summary>
					/// <param name="key">键</param>
					/// <param name="val">值</param>
					/// <returns>成功增加true，否则false</returns>
					ev_bool push( _in const EVString &key, _in EarthView::World::Spatial3D::ModelManager::EffectObjectMap* const &val);
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
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap*& operator[]( _in const EVString &key);
					/// <summary>
					/// 获得键对应的值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>返回键对应的值</returns>
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap*& get( _in const EVString &key);
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

					EarthView::World::Core::StringVector getKeys()const;
ev_private:
					typedef map<EVString, EarthView::World::Spatial3D::ModelManager::EffectObjectMap*> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::mapped_type mapped_type;
					typedef InternalList::key_type key_type;
					typedef InternalList::value_type value_type;
					typedef pair<iterator, bool> _Pairib;
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

				class EV_Spatial3DEngine_DLL ModelObjectMap : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					ModelObjectMap(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ModelObjectMap();
					/// <summary>
					/// 增加动画集合元素
					/// </summary>
					/// <param name="key">键</param>
					/// <param name="val">值</param>
					/// <returns>成功增加true，否则false</returns>
					ev_bool push( _in const EVString &key, _in EarthView::World::Spatial3D::ModelManager::ModelObject const &val);
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
					EarthView::World::Spatial3D::ModelManager::ModelObject& operator[]( _in const EVString &key);
					/// <summary>
					/// 获得键对应的值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>返回键对应的值</returns>
					EarthView::World::Spatial3D::ModelManager::ModelObject& get( _in const EVString &key);
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

					EarthView::World::Core::StringVector getKeys()const;
ev_private:
					typedef map<EVString, EarthView::World::Spatial3D::ModelManager::ModelObject> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::mapped_type mapped_type;
					typedef InternalList::key_type key_type;
					typedef InternalList::value_type value_type;
					typedef pair<iterator, bool> _Pairib;
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

				class EV_Spatial3DEngine_DLL ModelBindedObjectMap  : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					ModelBindedObjectMap(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ModelBindedObjectMap();
					/// <summary>
					/// 增加动画集合元素
					/// </summary>
					/// <param name="key">键</param>
					/// <param name="val">值</param>
					/// <returns>成功增加true，否则false</returns>
					ev_bool push( _in const EVString &key, _in EarthView::World::Spatial3D::ModelManager::ModelObjectMap* const &val);
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
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap*& operator[]( _in const EVString &key);
					/// <summary>
					/// 获得键对应的值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>返回键对应的值</returns>
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap*& get( _in const EVString &key);
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

					EarthView::World::Core::StringVector getKeys()const;
ev_private:
					typedef map<EVString, EarthView::World::Spatial3D::ModelManager::ModelObjectMap*> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::mapped_type mapped_type;
					typedef InternalList::key_type key_type;
					typedef InternalList::value_type value_type;
					typedef pair<iterator, bool> _Pairib;
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

				class EV_Spatial3DEngine_DLL LightBindedObjectMap : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					LightBindedObjectMap(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					LightBindedObjectMap();
					/// <summary>
					/// 增加动画集合元素
					/// </summary>
					/// <param name="key">键</param>
					/// <param name="val">值</param>
					/// <returns>成功增加true，否则false</returns>
					ev_bool push( _in const EVString &key, _in EarthView::World::Spatial3D::ModelManager::LightObjectMap* const &val);
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
					EarthView::World::Spatial3D::ModelManager::LightObjectMap*& operator[]( _in const EVString &key);
					/// <summary>
					/// 获得键对应的值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>返回键对应的值</returns>
					EarthView::World::Spatial3D::ModelManager::LightObjectMap*& get( _in const EVString &key);
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

					EarthView::World::Core::StringVector getKeys()const;
ev_private:
					typedef map<EVString, EarthView::World::Spatial3D::ModelManager::LightObjectMap*> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::mapped_type mapped_type;
					typedef InternalList::key_type key_type;
					typedef InternalList::value_type value_type;
					typedef pair<iterator, bool> _Pairib;
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
			} //namespace 
		}
	}
}
#endif

